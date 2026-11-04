// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPickerVisual.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__Setup (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, System_Action_PointerEventData__o* drag, const MethodInfo* method);
// 0x180ace2f0

void
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__Setup(Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, System_Action_PointerEventData__o* drag, MethodInfo* method)

{
  (__this->fields)._drag = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._drag,value);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnPointerDown (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818da480

void
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnPointerDown(Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, MethodInfo* method)

{
  System_Action_PointerEventData__o *pSVar1;
  
  pSVar1 = (__this->fields)._drag;
  if (pSVar1 != (System_Action_PointerEventData__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,eventData,(pSVar1->fields).method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$OnDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818da480

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Action_PointerEventData__o *pSVar1;
  
  pSVar1 = (__this->fields)._drag;
  if (pSVar1 != (System_Action_PointerEventData__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,eventData,(pSVar1->fields).method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget___ctor(Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___cctor (const MethodInfo* method);
// 0x1818f4030

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o *__this;
  
  if (Il2CppMethodInitialized_184342127 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c)
    ;
    Il2CppMethodInitialized_184342127 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___ctor(Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$<RefreshTextures>b__30_1
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___RefreshTextures_b__30_1 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o* __this, int32_t x, int32_t __, const MethodInfo* method);
// 0x1818f33f0

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___RefreshTextures_b__30_1
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o *__this,int32_t x,int32_t __,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *pGVar1;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o local_18;
  
  pGVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FromHsv
                     (&local_18,(float)x / 127.0,1.0,1.0,0xff,(MethodInfo *)0x0);
  return (UnityEngine_Color32_Fields)(_union_53103)*(_union_53103 *)&pGVar1->fields;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c__DisplayClass30_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0___ctor(Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c__DisplayClass30_0$$<RefreshTextures>b__2
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0___RefreshTextures_b__2 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o* __this, int32_t x, int32_t y, const MethodInfo* method);
// 0x1818f3e70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f3f00: movaps xmm1, xmm6
// asm:   0x1818f3f03: jmp 0x1818f3f0d

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0___RefreshTextures_b__2
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o *__this,int32_t x,
          int32_t y,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Color32_Fields local_res10;
  
  fVar3 = (float)x / 383.0;
  if (((int)(((longlong)y / 6 + ((longlong)y >> 0x3f) & 0xffffffffU) >> 0x1f) + y / 6 + (y >> 0x1f) + x / 6 &
      1U) == 0) {
    fVar1 = 235.0;
  }
  else {
    fVar1 = 150.0;
  }
  if (fVar3 < 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = fVar3;
    if (1.0 < fVar3) {
      fVar2 = 1.0;
    }
  }
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  local_res10._overlap_0._at_b._lead[0] =
       il2cpp_runtime_helper_181290af0(__this,0,((float)(__this->fields).color.fields._overlap_0._at_b._lead[0] - fVar1) * fVar2
                              + fVar1);
  local_res10._overlap_0._at_g.g = il2cpp_runtime_helper_181290af0();
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (1.0 < fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (1.0 < fVar3) {
    fVar3 = 1.0;
  }
  local_res10._overlap_0._at_b.b =
       il2cpp_runtime_helper_181290af0(((float)(__this->fields).color.fields._overlap_0._at_b.b - fVar1) * fVar3 + fVar1,0);
  local_res10._overlap_0._at_a.a = 0xff;
  return (UnityEngine_Color32_Fields)(UnityEngine_Color32_Fields)local_res10._overlap_0;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$add_Changed
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__add_Changed (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, System_Action_GisketchUIColorPickerValue__o* value, const MethodInfo* method);
// 0x1818f2fe0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f301f: nop 

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__add_Changed
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               System_Action_GisketchUIColorPickerValue__o *value,MethodInfo *method)

{
  System_Action_GisketchUIColorPickerValue__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_GisketchUIColorPickerValue__o *pSVar3;
  System_Action_GisketchUIColorPickerValue__o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184342116 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchUIColorPickerValue);
    Il2CppMethodInitialized_184342116 = '\x01';
  }
  a = (__this->fields).Changed;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_GisketchUIColorPickerValue;
    pIVar2 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_GisketchUIColorPickerValue
                         );
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar3 = (System_Action_GisketchUIColorPickerValue__o *)il2cpp_runtime_helper_1804174a0(&(__this->fields).Changed,pIVar2);
    bVar4 = pSVar3 != a;
    a = pSVar3;
  } while (bVar4);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$remove_Changed
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__remove_Changed (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, System_Action_GisketchUIColorPickerValue__o* value, const MethodInfo* method);
// 0x1818f3090
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f30cf: nop 

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__remove_Changed
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               System_Action_GisketchUIColorPickerValue__o *value,MethodInfo *method)

{
  System_Action_GisketchUIColorPickerValue__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_GisketchUIColorPickerValue__o *pSVar3;
  System_Action_GisketchUIColorPickerValue__o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184342117 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchUIColorPickerValue);
    Il2CppMethodInitialized_184342117 = '\x01';
  }
  source = (__this->fields).Changed;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_GisketchUIColorPickerValue;
    pIVar2 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_GisketchUIColorPickerValue
                         );
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar3 = (System_Action_GisketchUIColorPickerValue__o *)il2cpp_runtime_helper_1804174a0(&(__this->fields).Changed,pIVar2);
    bVar4 = pSVar3 != source;
    source = pSVar3;
  } while (bVar4);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$get_EnableAlpha
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__get_EnableAlpha (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x180b5b960

bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__get_EnableAlpha
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  return (__this->fields)._EnableAlpha_k__BackingField;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$set_EnableAlpha
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__set_EnableAlpha (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, bool value, const MethodInfo* method);
// 0x180b5bdb0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__set_EnableAlpha
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._EnableAlpha_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, System_String_o* id, bool enableAlpha, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x1818f2de0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,System_String_o *id,
               bool enableAlpha,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  bool bVar1;
  System_String_o *text;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  float fVar3;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_48;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_184342118 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_184342118 = '\x01';
  }
  (__this->fields)._EnableAlpha_k__BackingField = enableAlpha;
  local_48.R = '\0';
  local_48.G = '\0';
  local_48.B = '\0';
  local_48.A = '\0';
  local_48.H = 0.0;
  local_48.S = 0.0;
  local_48.V = 0.0;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  text = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Current(id,enableAlpha,(MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (text,enableAlpha,(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_48,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    local_48.S = 0.0;
    local_48.V = 0.0;
    local_48.R = 0xff;
    local_48.G = 0xff;
    local_48.B = 0xff;
    local_48.A = 0xff;
    local_48.H = 0.0;
    local_38.r = 1.0;
    local_38.g = 1.0;
    local_38.b = 1.0;
    local_38.a = 1.0;
    UnityEngine_Color__RGBToHSV
              ((UnityEngine_Color_o *)&local_38,&local_48.H,&local_48.S,&local_48.V,(MethodInfo *)0x0);
  }
  (__this->fields)._value.fields.R = local_48.R;
  (__this->fields)._value.fields.G = local_48.G;
  (__this->fields)._value.fields.B = local_48.B;
  (__this->fields)._value.fields.A = local_48.A;
  (__this->fields)._value.fields.H = local_48.H;
  (__this->fields)._value.fields.S = local_48.S;
  (__this->fields)._value.fields.V = local_48.V;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    if (enableAlpha) {
      fVar3 = 260.0;
    }
    else {
      fVar3 = 220.0;
    }
    if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar2,fVar3,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
      if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
        }
        theme = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
      }
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build(__this,theme,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetValue (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, bool notify, const MethodInfo* method);
// 0x1818f2d80

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetValue
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *value,bool notify,MethodInfo *method)

{
  System_Action_GisketchUIColorPickerValue__o *pSVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  uVar2 = (value->fields).G;
  uVar3 = (value->fields).B;
  uVar4 = (value->fields).A;
  fVar5 = (value->fields).H;
  fVar6 = (value->fields).S;
  fVar7 = (value->fields).V;
  (__this->fields)._value.fields.R = (value->fields).R;
  (__this->fields)._value.fields.G = uVar2;
  (__this->fields)._value.fields.B = uVar3;
  (__this->fields)._value.fields.A = uVar4;
  (__this->fields)._value.fields.H = fVar5;
  (__this->fields)._value.fields.S = fVar6;
  (__this->fields)._value.fields.V = fVar7;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,(MethodInfo *)0x0);
  if ((notify) &&
     (pSVar1 = (__this->fields).Changed, pSVar1 != (System_Action_GisketchUIColorPickerValue__o *)0x0)) {
    local_18._0_1_ = (__this->fields)._value.fields.R;
    local_18._1_1_ = (__this->fields)._value.fields.G;
    local_18._2_1_ = (__this->fields)._value.fields.B;
    local_18._3_1_ = (__this->fields)._value.fields.A;
    fStack_14 = (__this->fields)._value.fields.H;
    fStack_10 = (__this->fields)._value.fields.S;
    fStack_c = (__this->fields)._value.fields.V;
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,&local_18,(pSVar1->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x1818f0f50

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_RawImage_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  float fVar8;
  UnityEngine_Color_Fields local_48 [2];
  
  if (Il2CppMethodInitialized_184342119 == '\0') {
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
    Il2CppMethodInitialized_184342119 = '\x01';
  }
  pUVar2 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar4 = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar4 = (UnityEngine_RectTransform_o *)0x0, pUVar2->klass == TypeInfo_UnityEngine_RectTransform)) {
    pUVar4 = pUVar2;
  }
  if ((__this->fields)._EnableAlpha_k__BackingField == false) {
    fVar8 = 52.0;
  }
  else {
    fVar8 = 104.0;
  }
  local_48[0].r = 1.0;
  local_48[0].g = 1.0;
  local_48[0].b = 1.0;
  local_48[0].a = 1.0;
  pUVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
                     ("AoTTG Color Gradient",pUVar4,fVar8,100.0,(UnityEngine_Color_o *)local_48,
                      (MethodInfo *)0x0);
  (__this->fields)._square = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._square,pUVar3);
  if ((__this->fields)._EnableAlpha_k__BackingField == false) {
    fVar8 = 10.0;
  }
  else {
    fVar8 = 50.0;
  }
  local_48[0].r = 1.0;
  local_48[0].g = 1.0;
  local_48[0].b = 1.0;
  local_48[0].a = 1.0;
  pUVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
                     ("AoTTG Hue Slider",pUVar4,fVar8,22.0,(UnityEngine_Color_o *)local_48,
                      (MethodInfo *)0x0);
  (__this->fields)._hue = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hue,pUVar3);
  if ((__this->fields)._EnableAlpha_k__BackingField != false) {
    local_48[0].r = 1.0;
    local_48[0].g = 1.0;
    local_48[0].b = 1.0;
    local_48[0].a = 1.0;
    pUVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
                       ("AoTTG Alpha Slider",pUVar4,10.0,22.0,(UnityEngine_Color_o *)local_48,
                        (MethodInfo *)0x0);
    (__this->fields)._alpha = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._alpha,pUVar3);
  }
  pUVar3 = (__this->fields)._square;
  if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
    pUVar4 = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)pUVar3,(MethodInfo *)0x0);
    pUVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleMarker
                       (__this,pUVar4,theme,(MethodInfo *)0x0);
    (__this->fields)._squareMarker = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._squareMarker,pUVar4);
    pUVar3 = (__this->fields)._hue;
    if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
      pUVar4 = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)pUVar3,(MethodInfo *)0x0)
      ;
      pUVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__LineMarker(pUVar4,theme,(MethodInfo *)0x0);
      (__this->fields)._hueMarker = pUVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._hueMarker,pUVar4);
      pUVar3 = (__this->fields)._alpha;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pUVar3 = (__this->fields)._alpha;
        if (pUVar3 == (UnityEngine_UI_RawImage_o *)0x0) goto label_1818f1349;
        pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pUVar3,(MethodInfo *)0x0);
        pUVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__LineMarker
                           (pUVar4,theme,(MethodInfo *)0x0);
        (__this->fields)._alphaMarker = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._alphaMarker,pUVar4);
      }
      pUVar3 = (__this->fields)._square;
      if ((pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) &&
         (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
        pIVar6 = UnityEngine_GameObject__AddComponent_object_
                           (pUVar5,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIColorPickerVisual_DragTarget
                           );
        pIVar7 = (Il2CppClass *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_PointerEventData);
        System_Action_object____ctor
                  ((UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)pIVar7,
                   (Il2CppObject *)__this,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_OnSquareDrag,
                   (MethodInfo *)0x0);
        if (pIVar6 != (Il2CppObject *)0x0) {
          pIVar6[2].klass = pIVar7;
          Il2CppCodeGenWriteBarrier(&pIVar6[2].klass,pIVar7);
          pUVar3 = (__this->fields)._hue;
          if ((pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) &&
             (pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
             pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
            pIVar6 = UnityEngine_GameObject__AddComponent_object_
                               (pUVar5,(MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIColorPickerVisual_DragTarget
                               );
            pIVar7 = (Il2CppClass *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_PointerEventData);
            System_Action_object____ctor
                      ((UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)pIVar7,
                       (Il2CppObject *)__this,
                       (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_OnHueDrag,
                       (MethodInfo *)0x0);
            if (pIVar6 != (Il2CppObject *)0x0) {
              pIVar6[2].klass = pIVar7;
              Il2CppCodeGenWriteBarrier(&pIVar6[2].klass,pIVar7);
              pUVar3 = (__this->fields)._alpha;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar1 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (!bVar1) {
                return;
              }
              pUVar3 = (__this->fields)._alpha;
              if ((pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) &&
                 (pUVar5 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
                 pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
                pIVar6 = UnityEngine_GameObject__AddComponent_object_
                                   (pUVar5,(MethodInfo_6F4D60 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIColorPickerVisual_DragTarget
                                   );
                pIVar7 = (Il2CppClass *)
                         il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_PointerEventData);
                System_Action_object____ctor
                          ((UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)pIVar7,
                           (Il2CppObject *)__this,
                           (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_OnAlphaDrag
                           ,(MethodInfo *)0x0);
                if (pIVar6 != (Il2CppObject *)0x0) {
                  pIVar6[2].klass = pIVar7;
                  Il2CppCodeGenWriteBarrier(&pIVar6[2].klass,pIVar7);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_1818f1349:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnSquareDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnSquareDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818f23d0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnSquareDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  System_Action_GisketchUIColorPickerValue__o *pSVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Vector2_o UVar8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *pGVar9;
  float fStackX_c;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_18;
  
  __this_00 = (__this->fields)._square;
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    rect = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
    UVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(rect,eventData,(MethodInfo *)0x0);
    fStackX_c = UVar8.fields.y;
    pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FromHsv
                       ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_18,
                        (__this->fields)._value.fields.H,UVar8.fields.x,fStackX_c,
                        (__this->fields)._value.fields.A,(MethodInfo *)0x0);
    uVar2 = (pGVar9->fields).G;
    uVar3 = (pGVar9->fields).B;
    uVar4 = (pGVar9->fields).A;
    fVar5 = (pGVar9->fields).H;
    fVar6 = (pGVar9->fields).S;
    fVar7 = (pGVar9->fields).V;
    (__this->fields)._value.fields.R = (pGVar9->fields).R;
    (__this->fields)._value.fields.G = uVar2;
    (__this->fields)._value.fields.B = uVar3;
    (__this->fields)._value.fields.A = uVar4;
    (__this->fields)._value.fields.H = fVar5;
    (__this->fields)._value.fields.S = fVar6;
    (__this->fields)._value.fields.V = fVar7;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).Changed;
    if (pSVar1 != (System_Action_GisketchUIColorPickerValue__o *)0x0) {
      local_18.R = (__this->fields)._value.fields.R;
      local_18.G = (__this->fields)._value.fields.G;
      local_18.B = (__this->fields)._value.fields.B;
      local_18.A = (__this->fields)._value.fields.A;
      local_18.H = (__this->fields)._value.fields.H;
      local_18.S = (__this->fields)._value.fields.S;
      local_18.V = (__this->fields)._value.fields.V;
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,&local_18,(pSVar1->fields).method);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnHueDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnHueDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818f22a0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnHueDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  System_Action_GisketchUIColorPickerValue__o *pSVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Vector2_o UVar8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *pGVar9;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_18;
  
  __this_00 = (__this->fields)._hue;
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    rect = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
    UVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(rect,eventData,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FromHsv
                       ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_18,UVar8.fields.x,
                        (__this->fields)._value.fields.S,(__this->fields)._value.fields.V,
                        (__this->fields)._value.fields.A,(MethodInfo *)0x0);
    uVar2 = (pGVar9->fields).G;
    uVar3 = (pGVar9->fields).B;
    uVar4 = (pGVar9->fields).A;
    fVar5 = (pGVar9->fields).H;
    fVar6 = (pGVar9->fields).S;
    fVar7 = (pGVar9->fields).V;
    (__this->fields)._value.fields.R = (pGVar9->fields).R;
    (__this->fields)._value.fields.G = uVar2;
    (__this->fields)._value.fields.B = uVar3;
    (__this->fields)._value.fields.A = uVar4;
    (__this->fields)._value.fields.H = fVar5;
    (__this->fields)._value.fields.S = fVar6;
    (__this->fields)._value.fields.V = fVar7;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).Changed;
    if (pSVar1 != (System_Action_GisketchUIColorPickerValue__o *)0x0) {
      local_18.R = (__this->fields)._value.fields.R;
      local_18.G = (__this->fields)._value.fields.G;
      local_18.B = (__this->fields)._value.fields.B;
      local_18.A = (__this->fields)._value.fields.A;
      local_18.H = (__this->fields)._value.fields.H;
      local_18.S = (__this->fields)._value.fields.S;
      local_18.V = (__this->fields)._value.fields.V;
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,&local_18,(pSVar1->fields).method);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnAlphaDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnAlphaDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818f1f90

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnAlphaDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  System_Action_GisketchUIColorPickerValue__o *pSVar1;
  undefined3 uVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Vector2_o UVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  
  __this_00 = (__this->fields)._alpha;
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    rect = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
    UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(rect,eventData,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_181290af0(UVar5.fields.x * 255.0);
    fVar9 = (__this->fields)._value.fields.H;
    fVar8 = (__this->fields)._value.fields.S;
    fVar7 = (__this->fields)._value.fields.V;
    uStack_40 = 0;
    uVar2._0_1_ = (__this->fields)._value.fields.R;
    uVar2._1_1_ = (__this->fields)._value.fields.G;
    uVar2._2_1_ = (__this->fields)._value.fields.B;
    local_48._0_4_ = CONCAT13(uVar4,uVar2);
    local_48 = (ulonglong)(uint)local_48;
    fVar6 = (float)il2cpp_runtime_helper_1804f4110();
    uVar3 = local_48;
    fVar9 = fVar9 - fVar6;
    fVar6 = 1.0;
    if (fVar9 < 0.0) {
      fVar9 = 0.0;
    }
    else if (1.0 < fVar9) {
      fVar9 = fVar6;
    }
    if (fVar8 < 0.0) {
      fVar8 = 0.0;
    }
    else if (1.0 < fVar8) {
      fVar8 = fVar6;
    }
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
    }
    else if (1.0 < fVar7) {
      fVar7 = fVar6;
    }
    (__this->fields)._value.fields.R = (undefined1)local_48;
    (__this->fields)._value.fields.G = local_48._1_1_;
    (__this->fields)._value.fields.B = local_48._2_1_;
    (__this->fields)._value.fields.A = local_48._3_1_;
    (__this->fields)._value.fields.H = fVar9;
    (__this->fields)._value.fields.S = fVar8;
    (__this->fields)._value.fields.V = fVar7;
    local_48 = uVar3;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).Changed;
    if (pSVar1 != (System_Action_GisketchUIColorPickerValue__o *)0x0) {
      local_48._0_1_ = (__this->fields)._value.fields.R;
      local_48._1_1_ = (__this->fields)._value.fields.G;
      local_48._2_1_ = (__this->fields)._value.fields.B;
      local_48._3_1_ = (__this->fields)._value.fields.A;
      local_48._4_4_ = (__this->fields)._value.fields.H;
      uStack_40._0_4_ = (__this->fields)._value.fields.S;
      uStack_40._4_4_ = (__this->fields)._value.fields.V;
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,&local_48,(pSVar1->fields).method);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x1818f2360

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434211a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434211a = '\x01';
  }
  x = (__this->fields)._squareMarker;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$RefreshTextures
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x1818f2900

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *pUVar1;
  Il2CppObject *object;
  bool bVar2;
  System_Comparison_T__o *pSVar3;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o *object_00;
  
  if (Il2CppMethodInitialized_18434211b == '\0') {
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
    Il2CppMethodInitialized_18434211b = '\x01';
  }
  pUVar1 = (__this->fields)._square;
  pSVar3 = (System_Comparison_T__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int_Color32);
  System_Func_int__int__Color32____ctor
            (pSVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_RefreshTextures_b__30_0,
             (MethodInfo_13402B0 *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
            (&(__this->fields)._squareTexture,pUVar1,0x40,0x40,(System_Func_int__int__Color32__o *)pSVar3,
             (MethodInfo *)0x0);
  pUVar1 = (__this->fields)._hue;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c);
  }
  pSVar3 = (System_Comparison_T__o *)
           TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->static_fields->__9__30_1;
  if (pSVar3 == (System_Comparison_T__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->static_fields->__9
    ;
    pSVar3 = (System_Comparison_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int_Color32);
    System_Func_int__int__Color32____ctor
              (pSVar3,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c_RefreshTextures_b__30_1,
               (MethodInfo_13402B0 *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->static_fields->__9__30_1 =
         (System_Func_int__int__Color32__o *)pSVar3;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->static_fields->__9__30_1,pSVar3
              );
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
            (&(__this->fields)._hueTexture,pUVar1,0x80,1,(System_Func_int__int__Color32__o *)pSVar3,
             (MethodInfo *)0x0);
  pUVar1 = (__this->fields)._alpha;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    object_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c__DisplayClass30_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
    if (object_00 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o *)0x0) {
      ThrowNullReferenceException();
    }
    (object_00->fields).color.fields._overlap_0 = *(_union_53103 *)&(__this->fields)._value.fields;
    pUVar1 = (__this->fields)._alpha;
    pSVar3 = (System_Comparison_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int_Color32);
    System_Func_int__int__Color32____ctor
              (pSVar3,(Il2CppObject *)object_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c__DisplayClass30_0_RefreshTextures_b__2
               ,(MethodInfo_13402B0 *)0x0);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
              (&(__this->fields)._alphaTexture,pUVar1,0x180,0x16,(System_Func_int__int__Color32__o *)pSVar3,
               (MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$RefreshMarkers
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x1818f2840

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434211c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434211c = '\x01';
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Place
            ((__this->fields)._squareMarker,(__this->fields)._value.fields.S,(__this->fields)._value.fields.V,
             (MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Place
            ((__this->fields)._hueMarker,(__this->fields)._value.fields.H,0.5,(MethodInfo *)0x0);
  x = (__this->fields)._alphaMarker;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Place
              ((__this->fields)._alphaMarker,(float)(__this->fields)._value.fields.A / 255.0,0.5,
               (MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$RawImage
// il2cpp: UnityEngine_UI_RawImage_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage (System_String_o* name, UnityEngine_RectTransform_o* parent, float bottom, float height, UnityEngine_Color_o fallback, const MethodInfo* method);
// 0x1818f25d0

UnityEngine_UI_RawImage_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
          (System_String_o *name,UnityEngine_RectTransform_o *parent,float bottom,float height,
          UnityEngine_Color_o *fallback,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_UI_RawImage_o *pUVar2;
  float fVar3;
  UnityEngine_Color_o local_68 [4];
  
  if (Il2CppMethodInitialized_18434211d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_18434211d = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,name,components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0
                  (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin(__this_01,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          if (height <= 22.0) {
            fVar3 = 0.0;
          }
          else {
            fVar3 = 1.0;
          }
          value.fields.y = fVar3;
          value.fields.x = 1.0;
          UnityEngine_RectTransform__set_anchorMax(__this_01,value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_offsetMin
                    (__this_01,(UnityEngine_Vector2_o)((ulonglong)(uint)bottom << 0x20),(MethodInfo *)0x0);
          if (height <= 22.0) {
            fVar3 = bottom + height;
          }
          else {
            fVar3 = 0.0;
          }
          UnityEngine_RectTransform__set_offsetMax
                    (__this_01,(UnityEngine_Vector2_o)((ulonglong)(uint)fVar3 << 0x20),(MethodInfo *)0x0);
          pUVar2 = UnityEngine_GameObject__AddComponent_object_
                             (__this,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
          if (pUVar2 != (UnityEngine_UI_RawImage_o *)0x0) {
            local_68[0].fields.r = (fallback->fields).r;
            local_68[0].fields.g = (fallback->fields).g;
            local_68[0].fields.b = (fallback->fields).b;
            local_68[0].fields.a = (fallback->fields).a;
            (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                      (pUVar2,local_68,(pUVar2->klass->vtable)._23_set_color.method);
            (*(pUVar2->klass->vtable)._25_set_raycastTarget.methodPtr)
                      (pUVar2,true,(pUVar2->klass->vtable)._25_set_raycastTarget.method);
            return pUVar2;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$CircleMarker
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleMarker (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x1818f1350

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
  UnityEngine_Color_o *pUVar2;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_04;
  UnityEngine_Vector2_Fields local_68;
  undefined8 uStack_60;
  UnityEngine_Color_o local_58 [3];
  
  if (Il2CppMethodInitialized_18434211e == '\0') {
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
    Il2CppMethodInitialized_18434211e = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this_00,"AoTTG Color Marker",components,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0
                  (__this_01,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
        __this_02 = UnityEngine_GameObject__GetComponent_object_
                              (__this_00,
                               (MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_18433e3c9 = '\x01';
        }
        if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
          value = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
          local_68 = value;
          UnityEngine_RectTransform__set_anchorMax(__this_02,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMin(__this_02,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_02,(UnityEngine_Vector2_o)0x4190000041900000,(MethodInfo *)0x0);
          __this_03 = UnityEngine_GameObject__AddComponent_object_
                                (__this_00,
                                 (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
          value_00 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite
                               (__this,(MethodInfo *)0x0);
          if (__this_03 != (UnityEngine_UI_Image_o *)0x0) {
            UnityEngine_UI_Image__set_sprite(__this_03,value_00,(MethodInfo *)0x0);
            if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              local_68.x = 1.0;
              local_68.y = 1.0;
              uStack_60 = 0x3f8000003f800000;
              pUVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                 (local_58,theme,"surface",(UnityEngine_Color_o *)&local_68,
                                  (MethodInfo *)0x0);
              local_68.x = (pUVar2->fields).r;
              local_68.y = (pUVar2->fields).g;
              uStack_60._0_4_ = (pUVar2->fields).b;
              uStack_60._4_4_ = (pUVar2->fields).a;
              (*(__this_03->klass->vtable)._23_set_color.methodPtr)
                        (__this_03,(UnityEngine_Color_o *)&local_68,
                         (__this_03->klass->vtable)._23_set_color.method);
              (*(__this_03->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_03,false,(__this_03->klass->vtable)._25_set_raycastTarget.method);
              __this_04 = UnityEngine_GameObject__AddComponent_object_
                                    (__this_00,
                                     (MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
              local_68.x = 0.0;
              local_68.y = 0.0;
              uStack_60 = 0x3ea3d70a00000000;
              pUVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                 (local_58,theme,"shadow",(UnityEngine_Color_o *)&local_68,
                                  (MethodInfo *)0x0);
              if (__this_04 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                local_68.x = (pUVar2->fields).r;
                local_68.y = (pUVar2->fields).g;
                uStack_60._0_4_ = (pUVar2->fields).b;
                uStack_60._4_4_ = (pUVar2->fields).a;
                Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_1884fb0
                          (__this_04,(UnityEngine_Color_o *)&local_68,
                           (UnityEngine_Vector2_o)0xc040000040400000,4,0.35,false,(MethodInfo *)0x0);
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
// 0x1818f1a80

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
  UnityEngine_Color_o *pUVar3;
  UnityEngine_Color_Fields local_68;
  UnityEngine_Color_o local_58 [3];
  
  if (Il2CppMethodInitialized_18434211f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Color Slider Marker");
    il2cpp_codegen_initialize_runtime_metadata(&"shadow");
    Il2CppMethodInitialized_18434211f = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Color Slider Marker",components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0
                  (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_18433e3c9 = '\x01';
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
                             (__this,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image
                             );
          if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
            local_68.r = 1.0;
            local_68.g = 1.0;
            local_68.b = 1.0;
            local_68.a = 1.0;
            (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                      (pUVar2,(UnityEngine_Color_o *)&local_68,(pUVar2->klass->vtable)._23_set_color.method);
            (*(pUVar2->klass->vtable)._25_set_raycastTarget.methodPtr)
                      (pUVar2,false,(pUVar2->klass->vtable)._25_set_raycastTarget.method);
            __this_02 = UnityEngine_GameObject__AddComponent_object_
                                  (__this,(MethodInfo_6F4D60 *)
                                          MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
            if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              local_68.r = 0.0;
              local_68.g = 0.0;
              local_68.b = 0.0;
              local_68.a = 0.32;
              pUVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                 (local_58,theme,"shadow",(UnityEngine_Color_o *)&local_68,
                                  (MethodInfo *)0x0);
              if (__this_02 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                local_68.r = (pUVar3->fields).r;
                local_68.g = (pUVar3->fields).g;
                local_68.b = (pUVar3->fields).b;
                local_68.a = (pUVar3->fields).a;
                Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_1884fb0
                          (__this_02,(UnityEngine_Color_o *)&local_68,
                           (UnityEngine_Vector2_o)0xc040000040400000,4,0.35,false,(MethodInfo *)0x0);
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
// 0x1818f1dc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f1ed0: xorps xmm2, xmm2

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized
          (UnityEngine_RectTransform_o *rect,UnityEngine_EventSystems_PointerEventData_o *eventData,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Camera_o *cam;
  UnityEngine_Rect_o *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector2_Fields local_res8;
  UnityEngine_Rect_o local_58 [5];
  
  if (Il2CppMethodInitialized_184342120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342120 = '\x01';
  }
  local_res8.x = 0.0;
  local_res8.y = 0.0;
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
label_1818f1f8a:
    ThrowNullReferenceException();
  }
  UVar1 = (eventData->fields)._position_k__BackingField.fields;
  cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
            (rect,(UnityEngine_Vector2_o)UVar1,cam,(UnityEngine_Vector2_o *)&local_res8,(MethodInfo *)0x0);
  if (rect == (UnityEngine_RectTransform_o *)0x0) goto label_1818f1f8a;
  pUVar2 = UnityEngine_RectTransform__get_rect(local_58,rect,(MethodInfo *)0x0);
  fVar4 = (pUVar2->fields).m_XMin;
  fVar3 = (pUVar2->fields).m_YMin;
  fVar6 = (pUVar2->fields).m_Width;
  fVar5 = (pUVar2->fields).m_Height;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  fVar6 = fVar6 + fVar4;
  if (fVar4 == fVar6) {
label_1818f1ed3:
    fVar4 = 0.0;
  }
  else {
    fVar4 = (local_res8.x - fVar4) / (fVar6 - fVar4);
    if (fVar4 < 0.0) goto label_1818f1ed3;
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
  }
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  else if (1.0 < fVar4) {
    fVar4 = 1.0;
  }
  fVar5 = fVar3 + fVar5;
  if (fVar3 != fVar5) {
    fVar3 = (local_res8.y - fVar3) / (fVar5 - fVar3);
    if (0.0 <= fVar3) {
      if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
      goto label_1818f1f4f;
    }
  }
  fVar3 = 0.0;
label_1818f1f4f:
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (1.0 < fVar3) {
    fVar3 = 1.0;
  }
  UVar1.y = fVar3;
  UVar1.x = fVar4;
  return (UnityEngine_Vector2_o)UVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Place
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Place (UnityEngine_RectTransform_o* marker, float x, float y, const MethodInfo* method);
// 0x1818f2490

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Place
               (UnityEngine_RectTransform_o *marker,float x,float y,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Rect_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Rect_o local_58 [5];
  
  if (Il2CppMethodInitialized_184342121 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342121 = '\x01';
  }
  if (marker != (UnityEngine_RectTransform_o *)0x0) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__GetParent((UnityEngine_Transform_o *)marker,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar5 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar3->klass == TypeInfo_UnityEngine_RectTransform) {
        pUVar5 = pUVar3;
      }
      if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar5 = (UnityEngine_RectTransform_o *)0x0;
        if (pUVar3->klass == TypeInfo_UnityEngine_RectTransform) {
          pUVar5 = pUVar3;
        }
        pUVar4 = UnityEngine_RectTransform__get_rect(local_58,pUVar5,(MethodInfo *)0x0);
        fVar1 = (pUVar4->fields).m_Width;
        fVar2 = (pUVar4->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (x < 0.0) {
          x = 0.0;
        }
        else if (1.0 < x) {
          x = 1.0;
        }
        if (y < 0.0) {
          y = 0.0;
        }
        else if (1.0 < y) {
          y = 1.0;
        }
        value.fields.y = fVar2 * y;
        value.fields.x = fVar1 * x;
        UnityEngine_RectTransform__set_anchoredPosition(marker,value,(MethodInfo *)0x0);
        return;
      }
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3,TypeInfo_UnityEngine_RectTransform);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$SetTexture
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture (UnityEngine_Texture2D_o** texture, UnityEngine_UI_RawImage_o* target, int32_t width, int32_t height, System_Func_int__int__Color32__o* pixel, const MethodInfo* method);
// 0x1818f2b70
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f2c74: movss xmm6, dword ptr [rip + 0x1a661dc]
// asm:   0x1818f2c7c: nop dword ptr [rax]
// asm:   0x1818f2c9c: nop dword ptr [rax]

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
  UnityEngine_Color_o local_48 [2];
  
  if (Il2CppMethodInitialized_184342122 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_184342122 = '\x01';
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
    UnityEngine_Texture2D___ctor_2efc630
              ((UnityEngine_Texture2D_o *)__this,width,height,4,false,(MethodInfo *)0x0);
    if (__this == (UnityEngine_Texture_o *)0x0) goto label_1818f2d7a;
    UnityEngine_Texture__set_wrapMode(__this,1,(MethodInfo *)0x0);
    *texture = (UnityEngine_Texture2D_o *)__this;
    Il2CppCodeGenWriteBarrier(texture,__this);
    if (target == (UnityEngine_UI_RawImage_o *)0x0) goto label_1818f2d7a;
    UnityEngine_UI_RawImage__set_texture(target,(UnityEngine_Texture_o *)*texture,(MethodInfo *)0x0);
  }
  y = 0;
  if (0 < height) {
    do {
      if (0 < width) {
        x = 0;
        if (pixel == (System_Func_int__int__Color32__o *)0x0) goto label_1818f2d7a;
        do {
          pUVar1 = *texture;
          uVar3 = (*(code *)(pixel->fields).invoke_impl)
                            ((pixel->fields).method_code,x,y,(pixel->fields).method);
          if (pUVar1 == (UnityEngine_Texture2D_o *)0x0) goto label_1818f2d7a;
          local_48[0].fields.r = (float)(uVar3 & 0xff) / 255.0;
          local_48[0].fields.g = (float)(uVar3 >> 8 & 0xff) / 255.0;
          local_48[0].fields.b = (float)(uVar3 >> 0x10 & 0xff) / 255.0;
          local_48[0].fields.a = (float)(uVar3 >> 0x18) / 255.0;
          UnityEngine_Texture2D__SetPixel(pUVar1,x,y,local_48,(MethodInfo *)0x0);
          x = x + 1;
        } while (x < width);
      }
      y = y + 1;
    } while (y < height);
  }
  if (*texture != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture2D__Apply_2ef9fe0(*texture,false,(MethodInfo *)0x0);
    return;
  }
label_1818f2d7a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnDestroy (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x1818f20f0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnDestroy
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184342123 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342123 = '\x01';
  }
  pUVar1 = (__this->fields)._squareTexture;
  if (Il2CppMethodInitialized_184342125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342125 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._hueTexture;
  if (Il2CppMethodInitialized_184342125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342125 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._alphaTexture;
  if (Il2CppMethodInitialized_184342125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342125 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._circleTexture;
  if (Il2CppMethodInitialized_184342125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342125 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  x = (UnityEngine_Object_o *)(__this->fields)._circleSprite;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)(__this->fields)._circleSprite,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$CircleSprite
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x1818f16d0

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Texture2D_o *pUVar1;
  bool bVar2;
  byte bVar3;
  UnityEngine_Texture_o *__this_00;
  UnityEngine_Sprite_o *value;
  int x_00;
  int y;
  UnityEngine_Rect_Fields local_78 [7];
  
  if (Il2CppMethodInitialized_184342124 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_184342124 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._circleSprite;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (__this->fields)._circleSprite;
  }
  __this_00 = (UnityEngine_Texture_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  UnityEngine_Texture2D___ctor_2efc630
            ((UnityEngine_Texture2D_o *)__this_00,0x20,0x20,4,false,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Texture_o *)0x0) {
    UnityEngine_Texture__set_wrapMode(__this_00,1,(MethodInfo *)0x0);
    (__this->fields)._circleTexture = (UnityEngine_Texture2D_o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._circleTexture,__this_00);
    y = 0;
    do {
      x_00 = 0;
      do {
        il2cpp_runtime_helper_180546870(CONCAT44((float)y,(float)x_00),0x4178000041780000,0);
        bVar3 = il2cpp_runtime_helper_181290af0();
        pUVar1 = (__this->fields)._circleTexture;
        if (pUVar1 == (UnityEngine_Texture2D_o *)0x0) goto label_1818f1977;
        local_78[0].m_XMin = 1.0;
        local_78[0].m_YMin = 1.0;
        local_78[0].m_Height = (float)bVar3 / 255.0;
        local_78[0].m_Width = 1.0;
        UnityEngine_Texture2D__SetPixel(pUVar1,x_00,y,(UnityEngine_Color_o *)local_78,(MethodInfo *)0x0);
        x_00 = x_00 + 1;
      } while (x_00 < 0x20);
      y = y + 1;
    } while (y < 0x20);
    pUVar1 = (__this->fields)._circleTexture;
    if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply_2ef9fe0(pUVar1,false,(MethodInfo *)0x0);
      local_78[0].m_XMin = 0.0;
      local_78[0].m_YMin = 0.0;
      local_78[0].m_Width = 32.0;
      local_78[0].m_Height = 32.0;
      value = UnityEngine_Sprite__Create_2ed45e0
                        ((__this->fields)._circleTexture,(UnityEngine_Rect_o *)local_78,
                         (UnityEngine_Vector2_o)0x3f0000003f000000,32.0,(MethodInfo *)0x0);
      (__this->fields)._circleSprite = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._circleSprite,value);
      return (__this->fields)._circleSprite;
    }
  }
label_1818f1977:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Blend
// il2cpp: uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Blend (uint8_t back, uint8_t front, float t, const MethodInfo* method);
// 0x1818f0ef0

uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Blend
                  (uint8_t back,uint8_t front,float t,MethodInfo *method)

{
  uint8_t uVar1;
  
  if (t < 0.0) {
    t = 0.0;
  }
  else if (1.0 < t) {
    t = 1.0;
  }
  if (t < 0.0) {
    t = 0.0;
  }
  else if (1.0 < t) {
    t = 1.0;
  }
  uVar1 = il2cpp_runtime_helper_181290af0(((float)front - (float)back) * t + (float)back,0);
  return uVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$DestroyTexture
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyTexture (UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x1818f1980

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyTexture
               (UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184342125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342125 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)texture,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$DestroyUnityObject
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject (UnityEngine_Object_o* target, const MethodInfo* method);
// 0x1818f19e0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
               (UnityEngine_Object_o *target,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184342126 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342126 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__DestroyImmediate_2f1fb90(target,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__Destroy_2f1ff70(target,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___ctor(Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$<RefreshTextures>b__30_0
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___RefreshTextures_b__30_0 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, int32_t x, int32_t y, const MethodInfo* method);
// 0x1818f2f70

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___RefreshTextures_b__30_0
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,int32_t x,int32_t y,MethodInfo *method
          )

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *pGVar1;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o local_18;
  
  pGVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FromHsv
                     (&local_18,(__this->fields)._value.fields.H,(float)x / 63.0,(float)y / 63.0,0xff,
                      (MethodInfo *)0x0);
  return (UnityEngine_Color32_Fields)(_union_53103)*(_union_53103 *)&pGVar1->fields;
}


