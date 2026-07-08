// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPickerVisual.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__Setup (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, System_Action_PointerEventData__o* drag, const MethodInfo* method);
// 0x3b07070

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__Setup
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o *__this,
               System_Action_PointerEventData__o *drag,MethodInfo *method)

{
  (__this->fields)._drag = drag;
  il2cpp_runtime_glue(&(__this->fields)._drag);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnPointerDown (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b07080

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnPointerDown
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Action_PointerEventData__o *pSVar1;
  code *vtable_dispatch;
  
  pSVar1 = (__this->fields)._drag;
  if (pSVar1 != (System_Action_PointerEventData__o *)0x0) {
    vtable_dispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtable_dispatch)
              ((pSVar1->fields).method_code,eventData,(pSVar1->fields).method,vtable_dispatch)
    ;
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$OnDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b070a0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Action_PointerEventData__o *pSVar1;
  code *vtable_dispatch;
  
  pSVar1 = (__this->fields)._drag;
  if (pSVar1 != (System_Action_PointerEventData__o *)0x0) {
    vtable_dispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtable_dispatch)
              ((pSVar1->fields).method_code,eventData,(pSVar1->fields).method,vtable_dispatch)
    ;
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, const MethodInfo* method);
// 0x3b070c0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o *__this,
               MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___cctor (const MethodInfo* method);
// 0x3b070d0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057014e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057014e0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o* __this, const MethodInfo* method);
// 0x3b07140

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_<>c___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$<RefreshTextures>b__30_1
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___RefreshTextures_b__30_1 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o* __this, int32_t x, int32_t __, const MethodInfo* method);
// 0x3b07150

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_<>c__<RefreshTextures>b__30_1
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o *__this,int32_t x,int32_t __,
          MethodInfo *method)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  UnityEngine_Color32_Fields UVar4;
  MethodInfo *method_00;
  float fVar5;
  float fVar6;
  UnityEngine_Color_o UVar7;
  undefined4 uStack_38;
  undefined4 uStack_24;
  
  fVar5 = floorf((float)x / 127.0);
  fVar5 = (float)x / 127.0 - fVar5;
  fVar6 = 1.0;
  if (fVar5 <= 1.0) {
    fVar6 = fVar5;
  }
  method_00 = (MethodInfo *)0x1;
  UVar7 = UnityEngine_Color__HSVToRGB
                    ((float)(-(uint)(0.0 <= fVar5) & (uint)fVar6),1.0,1.0,1,(MethodInfo *)0x0);
  uVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar7.fields.r,method_00);
  uStack_24 = UVar7.fields.g;
  uVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(uStack_24,method_00);
  uStack_38 = UVar7.fields.b;
  uVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(uStack_38,method_00);
  UVar4.rgba = CONCAT12(uVar3,CONCAT11(uVar2,uVar1)) | 0xff000000;
  UVar4.r = '\0';
  UVar4.g = '\0';
  UVar4.b = '\0';
  UVar4.a = '\0';
  return (UnityEngine_Color32_o)UVar4;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c__DisplayClass30_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x3b06660

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_<>c__DisplayClass30_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c__DisplayClass30_0$$<RefreshTextures>b__2
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0___RefreshTextures_b__2 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o* __this, int32_t x, int32_t y, const MethodInfo* method);
// 0x3b071f0

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_<>c__DisplayClass30_0__<RefreshTextures>b__2
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o *__this,
          int32_t x,int32_t y,MethodInfo *method)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  undefined4 uVar4;
  UnityEngine_Color32_Fields UVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float t;
  
  t = (float)x / 383.0;
  uVar4 = 0xff969696;
  if ((y / 6 + x / 6 & 1U) == 0) {
    uVar4 = 0xffebebeb;
  }
  uVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Blend
                    ((uint8_t)uVar4,(uint8_t)(__this->fields).color.fields.rgba,t,
                     (MethodInfo *)((ulong)((long)y * 0x2aaaaaab) >> 0x3f));
  uVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Blend
                    ((uint8_t)((uint)uVar4 >> 8),
                     *(uint8_t *)((long)&(__this->fields).color.fields.rgba + 1),t,method_00);
  uVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Blend
                    ((uint8_t)((uint)uVar4 >> 0x10),
                     *(uint8_t *)((long)&(__this->fields).color.fields.rgba + 2),t,method_01);
  UVar5.rgba = CONCAT12(uVar3,CONCAT11(uVar2,uVar1)) | 0xff000000;
  UVar5.r = '\0';
  UVar5.g = '\0';
  UVar5.b = '\0';
  UVar5.a = '\0';
  return (UnityEngine_Color32_o)UVar5;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$add_Changed
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__add_Changed (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, System_Action_GisketchUIColorPickerValue__o* value, const MethodInfo* method);
// 0x3b03480

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__add_Changed
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               System_Action_GisketchUIColorPickerValue__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_GisketchUIColorPickerValue__o *pSVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GisketchUIColorPickerValue__o *a;
  bool bVar5;
  
  if (DAT_057014cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchUIColorPickerValue);
    DAT_057014cf = '\x01';
  }
  a = (__this->fields).Changed;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_GisketchUIColorPickerValue;
    lVar4 = 0;
    if (pSVar3 != (System_Delegate_o *)0x0) {
      lVar4 = il2cpp_runtime_glue(pSVar3,TypeInfo_Action_GisketchUIColorPickerValue);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar3,uVar1);
      }
    }
    pSVar2 = (System_Action_GisketchUIColorPickerValue__o *)
             il2cpp_glue_022c2530(&(__this->fields).Changed,lVar4,a);
    bVar5 = a != pSVar2;
    a = pSVar2;
  } while (bVar5);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$remove_Changed
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__remove_Changed (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, System_Action_GisketchUIColorPickerValue__o* value, const MethodInfo* method);
// 0x3b03940

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__remove_Changed
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               System_Action_GisketchUIColorPickerValue__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_GisketchUIColorPickerValue__o *pSVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GisketchUIColorPickerValue__o *source;
  bool bVar5;
  
  if (DAT_057014d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchUIColorPickerValue);
    DAT_057014d0 = '\x01';
  }
  source = (__this->fields).Changed;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_GisketchUIColorPickerValue;
    lVar4 = 0;
    if (pSVar3 != (System_Delegate_o *)0x0) {
      lVar4 = il2cpp_runtime_glue(pSVar3,TypeInfo_Action_GisketchUIColorPickerValue);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar3,uVar1);
      }
    }
    pSVar2 = (System_Action_GisketchUIColorPickerValue__o *)
             il2cpp_glue_022c2530(&(__this->fields).Changed,lVar4,source);
    bVar5 = source != pSVar2;
    source = pSVar2;
  } while (bVar5);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$get_EnableAlpha
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__get_EnableAlpha (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x3b04cf0

bool_conflict
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__get_EnableAlpha
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._EnableAlpha_k__BackingField);
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$set_EnableAlpha
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__set_EnableAlpha (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, bool value, const MethodInfo* method);
// 0x3b04d00

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__set_EnableAlpha
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._EnableAlpha_k__BackingField = (char)value;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, System_String_o* id, bool enableAlpha, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b01f50

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,System_String_o *id,
               bool_conflict enableAlpha,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar4;
  MethodInfo *pMVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  char cVar6;
  undefined4 uVar7;
  UnityEngine_Color_o rgbColor;
  undefined8 uStack_64;
  float fStack_5c;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_58;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_48;
  
  pMVar5 = (MethodInfo *)theme;
  if (DAT_057014d1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    DAT_057014d1 = '\x01';
  }
  local_48.R = '\0';
  local_48.G = '\0';
  local_48.B = '\0';
  local_48.A = '\0';
  local_48.H = 0.0;
  local_48.S = 0.0;
  local_48.V = 0.0;
  local_58.R = '\0';
  local_58.G = '\0';
  local_58.B = '\0';
  local_58.A = '\0';
  local_58.H = 0.0;
  local_58.S = 0.0;
  local_58.V = 0.0;
  cVar6 = (char)enableAlpha;
  *(char *)&(__this->fields)._EnableAlpha_k__BackingField = cVar6;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057014a2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    il2cpp_init_method_metadata(&"#FFFFFF");
    DAT_057014a2 = '\x01';
  }
  if (cVar6 == '\0') {
    iVar1 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar3 = "#FFFFFF";
  }
  else {
    iVar1 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar3 = "#FFFFFFFF";
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pSVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(id,pSVar3,enableAlpha & 0xffU,pMVar5)
  ;
  bVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (pSVar3,enableAlpha & 0xffU,
                     (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_48,pMVar5);
  if ((char)bVar2 == '\0') {
    fStack_5c = 0.0;
    uStack_64 = 0;
    rgbColor.fields.b = 1.0;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.r = 1.0;
    rgbColor.fields.g = 1.0;
    UnityEngine_Color__RGBToHSV
              (rgbColor,(float *)&uStack_64,(float *)((long)&uStack_64 + 4),&fStack_5c,
               (MethodInfo *)0x0);
    uVar7._0_1_ = 0xff;
    uVar7._1_1_ = 0xff;
    uVar7._2_1_ = 0xff;
    uVar7._3_1_ = 0xff;
    local_58.H = (float)uStack_64;
    local_58.S = uStack_64._4_4_;
    local_58.V = fStack_5c;
  }
  else {
    uVar7 = local_48._0_4_;
    local_58.H = local_48.H;
    local_58.S = local_48.S;
    local_58.V = local_48.V;
  }
  local_58.R = (uint8_t)uVar7;
  local_58.G = SUB41(uVar7,1);
  local_58.B = SUB41(uVar7,2);
  local_58.A = SUB41(uVar7,3);
  (__this->fields)._value.fields.R = (uint8_t)uVar7;
  (__this->fields)._value.fields.G = SUB41(uVar7,1);
  (__this->fields)._value.fields.B = SUB41(uVar7,2);
  (__this->fields)._value.fields.A = SUB41(uVar7,3);
  (__this->fields)._value.fields.H = local_58.H;
  (__this->fields)._value.fields.S = local_58.S;
  (__this->fields)._value.fields.V = local_58.V;
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pIVar4 = UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_LayoutElement_AddComponent_LayoutElement),
     pIVar4 != (Il2CppObject *)0x0)) {
    if (cVar6 == '\0') {
      uVar7 = 0x435c0000;
    }
    else {
      uVar7 = 0x43820000;
    }
    (*pIVar4->klass->vtable[0x26].methodPtr)(uVar7,pIVar4,pIVar4->klass->vtable[0x26].method);
    pMVar5 = extraout_RDX;
    if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar5 = extraout_RDX_00;
      }
      theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build(__this,theme,pMVar5);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,(MethodInfo *)theme);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,(MethodInfo *)theme);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetValue (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, bool notify, const MethodInfo* method);
// 0x3b03530

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetValue
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value,bool_conflict notify,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_GisketchUIColorPickerValue__o *pSVar2;
  undefined8 uVar3;
  code *vtable_dispatch;
  MethodInfo *method_00;
  
  method_00 = value.fields._0_8_;
  *(MethodInfo **)&(__this->fields)._value.fields = method_00;
  (__this->fields)._value.fields.S = (float)(int)value.fields._8_8_;
  (__this->fields)._value.fields.V = (float)(int)((ulong)value.fields._8_8_ >> 0x20);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,method_00);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,method_00);
  if (((char)notify != '\0') &&
     (pSVar2 = (__this->fields).Changed,
     pSVar2 != (System_Action_GisketchUIColorPickerValue__o *)0x0)) {
    uVar1._0_4_ = (__this->fields)._value.fields.S;
    uVar1._4_4_ = (__this->fields)._value.fields.V;
    uVar3._0_1_ = (__this->fields)._value.fields.R;
    uVar3._1_1_ = (__this->fields)._value.fields.G;
    uVar3._2_1_ = (__this->fields)._value.fields.B;
    uVar3._3_1_ = (__this->fields)._value.fields.A;
    uVar3._4_4_ = (__this->fields)._value.fields.H;
    vtable_dispatch = (code *)(pSVar2->fields).invoke_impl;
    (*vtable_dispatch)
              (uVar1,(pSVar2->fields).method_code,uVar3,(pSVar2->fields).method,
               vtable_dispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b04d10

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o **ppUVar1;
  UnityEngine_UI_RawImage_o **ppUVar2;
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_UI_RawImage_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  Il2CppObject *pIVar8;
  Il2CppClass *pIVar9;
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
  
  if (DAT_057014d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_PointerEventData);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIColorPickerVisual_DragTarget_AddCompon);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnAlphaDrag);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnHueDrag);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnSquareDrag);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    il2cpp_init_method_metadata(&"AoTTG Color Gradient");
    il2cpp_init_method_metadata(&"AoTTG Hue Slider");
    il2cpp_init_method_metadata(&"AoTTG Alpha Slider");
    DAT_057014d2 = '\x01';
  }
  pUVar4 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  method_01 = extraout_RDX;
  pUVar6 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
    method_01 = pUVar4->klass;
    pUVar6 = (UnityEngine_RectTransform_o *)0x0;
    if (method_01 == TypeInfo_RectTransform) {
      pUVar6 = pUVar4;
    }
  }
  fallback.fields.b = 1.0;
  fallback.fields.a = 1.0;
  fallback.fields.r = 1.0;
  fallback.fields.g = 1.0;
  pUVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
                     ("AoTTG Color Gradient",pUVar6,
                      *(float *)(&DAT_00cd1140 +
                                (ulong)((char)(__this->fields)._EnableAlpha_k__BackingField == '\0')
                                * 4),100.0,fallback,(MethodInfo *)method_01);
  if (__this != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
    ppUVar1 = &(__this->fields)._square;
    (__this->fields)._square = pUVar5;
    il2cpp_runtime_glue(ppUVar1,pUVar5);
    method_00 = (MethodInfo *)&DAT_00cd0ca0;
    fallback_00.fields.b = 1.0;
    fallback_00.fields.a = 1.0;
    fallback_00.fields.r = 1.0;
    fallback_00.fields.g = 1.0;
    pUVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
                       ("AoTTG Hue Slider",pUVar6,
                        *(float *)(&DAT_00cd0ca0 +
                                  (ulong)((char)(__this->fields)._EnableAlpha_k__BackingField ==
                                         '\0') * 4),22.0,fallback_00,method_02);
    ppUVar2 = &(__this->fields)._hue;
    (__this->fields)._hue = pUVar5;
    il2cpp_runtime_glue(ppUVar2);
    if ((char)(__this->fields)._EnableAlpha_k__BackingField != '\0') {
      fallback_01.fields.b = 1.0;
      fallback_01.fields.a = 1.0;
      fallback_01.fields.r = 1.0;
      fallback_01.fields.g = 1.0;
      pUVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
                         ("AoTTG Alpha Slider",pUVar6,10.0,22.0,fallback_01,method_03);
      (__this->fields)._alpha = pUVar5;
      il2cpp_runtime_glue(&(__this->fields)._alpha);
    }
    if (*ppUVar1 != (UnityEngine_UI_RawImage_o *)0x0) {
      pUVar6 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)*ppUVar1,(MethodInfo *)0x0);
      pUVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleMarker
                         (__this,pUVar6,theme,method_00);
      (__this->fields)._squareMarker = pUVar6;
      il2cpp_runtime_glue(&(__this->fields)._squareMarker);
      pUVar5 = (__this->fields)._hue;
      if (pUVar5 != (UnityEngine_UI_RawImage_o *)0x0) {
        pUVar6 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pUVar5,(MethodInfo *)0x0);
        pUVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__LineMarker
                           (pUVar6,theme,method_04);
        (__this->fields)._hueMarker = pUVar6;
        il2cpp_runtime_glue(&(__this->fields)._hueMarker);
        pUVar5 = (__this->fields)._alpha;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          pUVar5 = (__this->fields)._alpha;
          if (pUVar5 == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_03b05105;
          pUVar6 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pUVar5,(MethodInfo *)0x0);
          pUVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__LineMarker
                             (pUVar6,theme,method_05);
          (__this->fields)._alphaMarker = pUVar6;
          il2cpp_runtime_glue(&(__this->fields)._alphaMarker);
        }
        if (*ppUVar1 != (UnityEngine_UI_RawImage_o *)0x0) {
          pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
            pIVar8 = UnityEngine_GameObject__AddComponent<object>(pUVar7,MethodInfo_GisketchUIColorPickerVisual_DragTarget_AddCompon);
            pIVar9 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_Action_PointerEventData);
            System_Action<object>___ctor();
            if (pIVar8 != (Il2CppObject *)0x0) {
              pIVar8[2].klass = pIVar9;
              il2cpp_runtime_glue(pIVar8 + 2);
              pUVar5 = *ppUVar2;
              if (pUVar5 != (UnityEngine_UI_RawImage_o *)0x0) {
                pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                  pIVar8 = UnityEngine_GameObject__AddComponent<object>(pUVar7,MethodInfo_GisketchUIColorPickerVisual_DragTarget_AddCompon);
                  pIVar9 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_Action_PointerEventData);
                  System_Action<object>___ctor();
                  if (pIVar8 != (Il2CppObject *)0x0) {
                    pIVar8[2].klass = pIVar9;
                    il2cpp_runtime_glue(pIVar8 + 2);
                    pUVar5 = (__this->fields)._alpha;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    bVar3 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if ((char)bVar3 == '\0') {
                      return;
                    }
                    pUVar5 = (__this->fields)._alpha;
                    if (pUVar5 != (UnityEngine_UI_RawImage_o *)0x0) {
                      pUVar7 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                        pIVar8 = UnityEngine_GameObject__AddComponent<object>(pUVar7,MethodInfo_GisketchUIColorPickerVisual_DragTarget_AddCompon);
                        pIVar9 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_Action_PointerEventData);
                        System_Action<object>___ctor();
                        if (pIVar8 != (Il2CppObject *)0x0) {
                          pIVar8[2].klass = pIVar9;
                          il2cpp_runtime_glue(pIVar8 + 2,pIVar9);
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
  }
LAB_03b05105:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnSquareDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnSquareDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b05db0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnSquareDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  undefined4 uVar1;
  byte bVar2;
  UnityEngine_UI_RawImage_o *__this_00;
  System_Action_GisketchUIColorPickerValue__o *pSVar3;
  undefined8 uVar4;
  code *vtable_dispatch;
  UnityEngine_Vector2_o UVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  MethodInfo *pMVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Color_o UVar14;
  float fStack_68;
  float fStack_44;
  float fStack_38;
  
  __this_00 = (__this->fields)._square;
  if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  rect = UnityEngine_UI_Graphic__get_rectTransform
                   ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
  UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(rect,eventData,method_00);
  fVar11 = UVar5.fields.y;
  fVar12 = (__this->fields)._value.fields.H;
  bVar2 = (__this->fields)._value.fields.A;
  fVar10 = floorf(fVar12);
  fVar12 = fVar12 - fVar10;
  fVar10 = 1.0;
  if (fVar12 <= 1.0) {
    fVar10 = fVar12;
  }
  fVar10 = (float)(-(uint)(0.0 <= fVar12) & (uint)fVar10);
  fStack_68 = UVar5.fields.x;
  fVar12 = 1.0;
  if (fStack_68 <= 1.0) {
    fVar12 = fStack_68;
  }
  fVar12 = (float)(-(uint)(0.0 <= fStack_68) & (uint)fVar12);
  fVar13 = 1.0;
  if (fVar11 <= 1.0) {
    fVar13 = fVar11;
  }
  fVar13 = (float)(-(uint)(0.0 <= fVar11) & (uint)fVar13);
  pMVar9 = (MethodInfo *)0x1;
  UVar14 = UnityEngine_Color__HSVToRGB(fVar10,fVar12,fVar13,1,(MethodInfo *)0x0);
  bVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar14.fields.r,pMVar9);
  fStack_44 = UVar14.fields.g;
  bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_44,pMVar9);
  fStack_38 = UVar14.fields.b;
  bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_38,pMVar9);
  pMVar9 = (MethodInfo *)
           ((ulong)bVar6 | (ulong)bVar2 << 0x18 | (ulong)bVar7 << 8 | (ulong)bVar8 << 0x10 |
           (ulong)(uint)fVar10 << 0x20);
  *(MethodInfo **)&(__this->fields)._value.fields = pMVar9;
  (__this->fields)._value.fields.S = fVar12;
  (__this->fields)._value.fields.V = fVar13;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,pMVar9);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,pMVar9);
  pSVar3 = (__this->fields).Changed;
  if (pSVar3 != (System_Action_GisketchUIColorPickerValue__o *)0x0) {
    uVar1 = (__this->fields)._value.fields.S;
    uVar4._0_1_ = (__this->fields)._value.fields.R;
    uVar4._1_1_ = (__this->fields)._value.fields.G;
    uVar4._2_1_ = (__this->fields)._value.fields.B;
    uVar4._3_1_ = (__this->fields)._value.fields.A;
    uVar4._4_4_ = (__this->fields)._value.fields.H;
    vtable_dispatch = (code *)(pSVar3->fields).invoke_impl;
    (*vtable_dispatch)
              (uVar1,(pSVar3->fields).method_code,uVar4,(pSVar3->fields).method,
               vtable_dispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnHueDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnHueDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b06060

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnHueDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  byte bVar3;
  UnityEngine_UI_RawImage_o *__this_00;
  System_Action_GisketchUIColorPickerValue__o *pSVar4;
  undefined8 uVar5;
  code *vtable_dispatch;
  UnityEngine_Vector2_o UVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  MethodInfo *pMVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Color_o UVar14;
  float fStack_44;
  float fStack_38;
  
  __this_00 = (__this->fields)._hue;
  if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  rect = UnityEngine_UI_Graphic__get_rectTransform
                   ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
  UVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(rect,eventData,method_00);
  fVar12 = (__this->fields)._value.fields.S;
  fVar1 = (__this->fields)._value.fields.V;
  bVar3 = (__this->fields)._value.fields.A;
  fVar11 = floorf(UVar6.fields.x);
  fVar11 = UVar6.fields.x - fVar11;
  fVar13 = 1.0;
  if (fVar11 <= 1.0) {
    fVar13 = fVar11;
  }
  fVar13 = (float)(-(uint)(0.0 <= fVar11) & (uint)fVar13);
  fVar11 = 1.0;
  if (fVar12 <= 1.0) {
    fVar11 = fVar12;
  }
  fVar11 = (float)(-(uint)(0.0 <= fVar12) & (uint)fVar11);
  fVar12 = 1.0;
  if (fVar1 <= 1.0) {
    fVar12 = fVar1;
  }
  fVar12 = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar12);
  pMVar10 = (MethodInfo *)0x1;
  UVar14 = UnityEngine_Color__HSVToRGB(fVar13,fVar11,fVar12,1,(MethodInfo *)0x0);
  bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar14.fields.r,pMVar10);
  fStack_44 = UVar14.fields.g;
  bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_44,pMVar10);
  fStack_38 = UVar14.fields.b;
  bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_38,pMVar10);
  pMVar10 = (MethodInfo *)
            ((ulong)bVar7 | (ulong)bVar3 << 0x18 | (ulong)bVar8 << 8 | (ulong)(uint)fVar13 << 0x20 |
            (ulong)bVar9 << 0x10);
  *(MethodInfo **)&(__this->fields)._value.fields = pMVar10;
  (__this->fields)._value.fields.S = fVar11;
  (__this->fields)._value.fields.V = fVar12;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,pMVar10);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,pMVar10);
  pSVar4 = (__this->fields).Changed;
  if (pSVar4 != (System_Action_GisketchUIColorPickerValue__o *)0x0) {
    uVar2 = (__this->fields)._value.fields.S;
    uVar5._0_1_ = (__this->fields)._value.fields.R;
    uVar5._1_1_ = (__this->fields)._value.fields.G;
    uVar5._2_1_ = (__this->fields)._value.fields.B;
    uVar5._3_1_ = (__this->fields)._value.fields.A;
    uVar5._4_4_ = (__this->fields)._value.fields.H;
    vtable_dispatch = (code *)(pSVar4->fields).invoke_impl;
    (*vtable_dispatch)
              (uVar2,(pSVar4->fields).method_code,uVar5,(pSVar4->fields).method,
               vtable_dispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnAlphaDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnAlphaDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b061f0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnAlphaDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  UnityEngine_UI_RawImage_o *__this_00;
  System_Action_GisketchUIColorPickerValue__o *pSVar6;
  undefined8 uVar7;
  code *vtable_dispatch;
  UnityEngine_Vector2_o UVar8;
  double dVar9;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  ulong uVar10;
  MethodInfo *method_01;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  __this_00 = (__this->fields)._alpha;
  if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  rect = UnityEngine_UI_Graphic__get_rectTransform
                   ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
  UVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(rect,eventData,method_00);
  if (DAT_056ff244 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056ff244 = '\x01';
  }
  fVar11 = UVar8.fields.x * 255.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  dVar9 = (double)fVar11;
  method_01 = (MethodInfo *)local_50;
  local_48._0_8_ = dVar9;
  dVar9 = modf(dVar9,(double *)method_01,(MethodInfo *)eventData);
  if (0.0 <= fVar11) {
    if ((dVar9 != 0.5) || (NAN(dVar9))) {
      local_50 = (undefined1  [8])floor((double)local_48._0_8_ + 0.5,method_01);
    }
    else if (((long)(double)local_50 & 1U) != 0) {
      local_50 = (undefined1  [8])((double)local_50 + 1.0);
    }
  }
  else if ((dVar9 != -0.5) || (NAN(dVar9))) {
    local_50 = (undefined1  [8])ceil((double)local_48._0_8_ + -0.5,method_01);
  }
  else if (((long)(double)local_50 & 1U) != 0) {
    local_50 = (undefined1  [8])((double)local_50 + -1.0);
  }
  bVar3 = (__this->fields)._value.fields.R;
  bVar4 = (__this->fields)._value.fields.G;
  bVar5 = (__this->fields)._value.fields.B;
  fVar11 = (__this->fields)._value.fields.H;
  local_38 = ZEXT416((uint)fVar11);
  local_48 = ZEXT416((uint)(__this->fields)._value.fields.S);
  fVar1 = (__this->fields)._value.fields.V;
  fVar12 = floorf(fVar11);
  fVar12 = (float)local_38._0_4_ - fVar12;
  fVar11 = 1.0;
  if (fVar12 <= 1.0) {
    fVar11 = fVar12;
  }
  fVar14 = 1.0;
  if ((float)local_48._0_4_ <= 1.0) {
    fVar14 = (float)local_48._0_4_;
  }
  fVar13 = 1.0;
  if (fVar1 <= 1.0) {
    fVar13 = fVar1;
  }
  uVar10 = (ulong)bVar4 << 8 | (ulong)(uint)((int)(double)local_50 << 0x18) | (ulong)bVar3 |
           (ulong)bVar5 << 0x10 | (ulong)(-(uint)(0.0 <= fVar12) & (uint)fVar11) << 0x20;
  (__this->fields)._value.fields.R = (char)uVar10;
  (__this->fields)._value.fields.G = (char)(uVar10 >> 8);
  (__this->fields)._value.fields.B = (char)(uVar10 >> 0x10);
  (__this->fields)._value.fields.A = (char)(uVar10 >> 0x18);
  (__this->fields)._value.fields.H = (float)(int)(uVar10 >> 0x20);
  (__this->fields)._value.fields.S = (float)(-(uint)(0.0 <= (float)local_48._0_4_) & (uint)fVar14);
  (__this->fields)._value.fields.V = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar13);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
            (__this,(MethodInfo *)eventData);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,(MethodInfo *)eventData)
  ;
  pSVar6 = (__this->fields).Changed;
  if (pSVar6 != (System_Action_GisketchUIColorPickerValue__o *)0x0) {
    uVar2 = (__this->fields)._value.fields.S;
    uVar7._0_1_ = (__this->fields)._value.fields.R;
    uVar7._1_1_ = (__this->fields)._value.fields.G;
    uVar7._2_1_ = (__this->fields)._value.fields.B;
    uVar7._3_1_ = (__this->fields)._value.fields.A;
    uVar7._4_4_ = (__this->fields)._value.fields.H;
    vtable_dispatch = (code *)(pSVar6->fields).invoke_impl;
    (*vtable_dispatch)
              (uVar2,(pSVar6->fields).method_code,uVar7,(pSVar6->fields).method,
               vtable_dispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x3b06420

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *x;
  bool_conflict bVar1;
  MethodInfo *method_00;
  
  if (DAT_057014d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014d3 = '\x01';
  }
  x = (__this->fields)._squareMarker;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,method_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$RefreshTextures
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x3b05110

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *pUVar1;
  long lVar2;
  bool_conflict bVar3;
  System_Func_int__int__Color32__o *pSVar4;
  Il2CppObject *__this_00;
  MethodInfo *in_R9;
  
  if (DAT_057014d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Func_int__int__Color32);
    il2cpp_init_method_metadata(&MethodInfo_Color32__RefreshTextures_b__30_0);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Color32__RefreshTextures_b__30_1);
    il2cpp_init_method_metadata(&MethodInfo_Color32__RefreshTextures_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass30_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057014d4 = '\x01';
  }
  pUVar1 = (__this->fields)._square;
  pSVar4 = (System_Func_int__int__Color32__o *)il2cpp_runtime_glue(TypeInfo_Func_int__int__Color32);
  System_Func<int__int__Color32>___ctor();
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
            (&(__this->fields)._squareTexture,pUVar1,0x40,0x40,pSVar4,in_R9);
  pUVar1 = (__this->fields)._hue;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = *(System_Func_int__int__Color32__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar4 == (System_Func_int__int__Color32__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = (System_Func_int__int__Color32__o *)il2cpp_runtime_glue(TypeInfo_Func_int__int__Color32);
    System_Func<int__int__Color32>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_int__int__Color32__o **)(lVar2 + 8) = pSVar4;
    il2cpp_runtime_glue(lVar2 + 8,pSVar4);
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
            (&(__this->fields)._hueTexture,pUVar1,0x80,1,pSVar4,in_R9);
  pUVar1 = (__this->fields)._alpha;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass30_0);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppObject *)0x0) {
      *(undefined4 *)&__this_00[1].klass = *(undefined4 *)&(__this->fields)._value.fields;
      pUVar1 = (__this->fields)._alpha;
      pSVar4 = (System_Func_int__int__Color32__o *)il2cpp_runtime_glue(TypeInfo_Func_int__int__Color32);
      System_Func<int__int__Color32>___ctor();
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
                (&(__this->fields)._alphaTexture,pUVar1,0x180,0x16,pSVar4,in_R9);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$RefreshMarkers
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x3b05340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  bool_conflict bVar4;
  UnityEngine_RectTransform_o *__this_00;
  float fVar5;
  undefined1 auVar6 [16];
  UnityEngine_Rect_o UVar7;
  undefined1 local_38 [16];
  
  if (DAT_057014d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014d5 = '\x01';
  }
  pUVar3 = (__this->fields)._squareMarker;
  local_38._0_4_ = (__this->fields)._value.fields.S;
  local_38._4_4_ = (__this->fields)._value.fields.V;
  local_38._8_8_ = 0;
  if (DAT_057014da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_057014da = '\x01';
  }
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    __this_00 = (UnityEngine_RectTransform_o *)
                UnityEngine_Transform__get_parent
                          ((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      if (__this_00->klass != TypeInfo_RectTransform) goto LAB_03b05554;
      UVar7 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
      auVar6 = minps(_DAT_00ccd980,local_38);
      value.fields.y =
           (float)(-(uint)(0.0 <= (float)local_38._4_4_) & auVar6._4_4_) * UVar7.fields.m_Height;
      value.fields.x =
           (float)(-(uint)(0.0 <= (float)local_38._0_4_) & auVar6._0_4_) * UVar7.fields.m_Width;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar3,value,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._hueMarker;
      fVar1 = (__this->fields)._value.fields.H;
      if (DAT_057014da == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_RectTransform);
        DAT_057014da = '\x01';
      }
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        __this_00 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Transform__get_parent
                              ((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
          if (__this_00->klass != TypeInfo_RectTransform) {
LAB_03b05554:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(__this_00);
          }
          UVar7 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
          fVar5 = 1.0;
          if (fVar1 <= 1.0) {
            fVar5 = fVar1;
          }
          value_00.fields.y = UVar7.fields.m_Height * 0.5;
          value_00.fields.x = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar5) * UVar7.fields.m_Width;
          UnityEngine_RectTransform__set_anchoredPosition(pUVar3,value_00,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._alphaMarker;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return;
          }
          pUVar3 = (__this->fields)._alphaMarker;
          bVar2 = (__this->fields)._value.fields.A;
          if (DAT_057014da == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_RectTransform);
            DAT_057014da = '\x01';
          }
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            __this_00 = (UnityEngine_RectTransform_o *)
                        UnityEngine_Transform__get_parent
                                  ((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
              if (__this_00->klass == TypeInfo_RectTransform) {
                fVar5 = (float)bVar2 / 255.0;
                UVar7 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
                fVar1 = 1.0;
                if (fVar5 <= 1.0) {
                  fVar1 = fVar5;
                }
                value_01.fields.y = UVar7.fields.m_Height * 0.5;
                value_01.fields.x = fVar1 * UVar7.fields.m_Width;
                UnityEngine_RectTransform__set_anchoredPosition(pUVar3,value_01,(MethodInfo *)0x0);
                return;
              }
              goto LAB_03b05554;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$RawImage
// il2cpp: UnityEngine_UI_RawImage_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage (System_String_o* name, UnityEngine_RectTransform_o* parent, float bottom, float height, UnityEngine_Color_o fallback, const MethodInfo* method);
// 0x3b05560

UnityEngine_UI_RawImage_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
          (System_String_o *name,UnityEngine_RectTransform_o *parent,float bottom,float height,
          UnityEngine_Color_o fallback,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_UI_RawImage_o *pUVar3;
  undefined8 uVar4;
  MethodInfo *extraout_RDX;
  float fVar5;
  float local_48;
  float local_38;
  
  if (DAT_057014d6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RawImage_AddComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    DAT_057014d6 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type,1,method);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items,pSVar1);
    __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this,name,components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent
                  (__this_00,(UnityEngine_Transform_o *)parent,0,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (__this_01,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,
                     (UnityEngine_Vector2_o)
                     (CONCAT44(-(uint)(22.0 < height),0x3f800000) & 0x3f800000ffffffff),
                     (MethodInfo *)0x0);
          UnityEngine_RectTransform__set_offsetMin
                    (__this_01,(UnityEngine_Vector2_o)((ulong)(uint)bottom << 0x20),
                     (MethodInfo *)0x0);
          fVar5 = 0.0;
          if (height <= 22.0) {
            fVar5 = bottom + height;
          }
          UnityEngine_RectTransform__set_offsetMax
                    (__this_01,(UnityEngine_Vector2_o)((ulong)(uint)fVar5 << 0x20),(MethodInfo *)0x0
                    );
          pUVar3 = (UnityEngine_UI_RawImage_o *)
                   UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_RawImage_AddComponent_RawImage);
          if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
            local_48 = fallback.fields.r;
            local_38 = fallback.fields.b;
            (*((Il2CppClass *)pUVar3->klass)->vtable[0x17].methodPtr)
                      (local_48,local_38,pUVar3,((Il2CppClass *)pUVar3->klass)->vtable[0x17].method)
            ;
            (*((Il2CppClass *)pUVar3->klass)->vtable[0x19].methodPtr)
                      (pUVar3,1,((Il2CppClass *)pUVar3->klass)->vtable[0x19].method);
            return pUVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$CircleMarker
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleMarker (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b057d0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleMarker
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
          UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields value;
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_Image_o *__this_03;
  UnityEngine_Sprite_o *value_00;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_04;
  undefined8 uVar3;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar4;
  
  if (DAT_057014d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShad);
    il2cpp_init_method_metadata(&MethodInfo_Image_AddComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"surface");
    il2cpp_init_method_metadata(&"shadow");
    il2cpp_init_method_metadata(&"AoTTG Color Marker");
    DAT_057014d7 = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items,pSVar1);
    __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this_00,"AoTTG Color Marker",components,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent
                  (__this_01,(UnityEngine_Transform_o *)parent,0,(MethodInfo *)0x0);
        __this_02 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (DAT_056fe093 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector2);
          DAT_056fe093 = '\x01';
        }
        if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
          value = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_02,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMin
                    (__this_02,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_02,(UnityEngine_Vector2_o)0x4190000041900000,(MethodInfo *)0x0);
          method_00 = MethodInfo_Image_AddComponent_Image;
          __this_03 = (UnityEngine_UI_Image_o *)
                      UnityEngine_GameObject__AddComponent<object>
                                (__this_00,(MethodInfo_24F0EB0 *)MethodInfo_Image_AddComponent_Image);
          value_00 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite
                               (__this,method_00);
          if (__this_03 != (UnityEngine_UI_Image_o *)0x0) {
            UnityEngine_UI_Image__set_sprite(__this_03,value_00,(MethodInfo *)0x0);
            if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              UVar4.fields.b = 1.0;
              UVar4.fields.a = 1.0;
              UVar4.fields.r = 1.0;
              UVar4.fields.g = 1.0;
              UVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                (theme,"surface",UVar4,(MethodInfo *)0x0);
              (*(__this_03->klass->vtable)._23_set_color.methodPtr)
                        (UVar4.fields.r,UVar4.fields._8_8_,__this_03,
                         (__this_03->klass->vtable)._23_set_color.method);
              (*(__this_03->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_03,0,(__this_03->klass->vtable)._25_set_raycastTarget.method);
              __this_04 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                          UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShad);
              UVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                (theme,"shadow",
                                 (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                                 (MethodInfo *)0x0);
              if (__this_04 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup
                          (__this_04,UVar4,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,0,
                           (MethodInfo *)0x0);
                return __this_02;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$LineMarker
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__LineMarker (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b05ae0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__LineMarker
          (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields value;
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  Il2CppObject *pIVar3;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_02;
  undefined8 uVar4;
  MethodInfo *extraout_RDX;
  UnityEngine_Color_o color;
  
  if (DAT_057014d8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShad);
    il2cpp_init_method_metadata(&MethodInfo_Image_AddComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"AoTTG Color Slider Marker");
    il2cpp_init_method_metadata(&"shadow");
    DAT_057014d8 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type,1,method);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items,pSVar1);
    __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this,"AoTTG Color Slider Marker",components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent
                  (__this_00,(UnityEngine_Transform_o *)parent,0,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (DAT_056fe093 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector2);
          DAT_056fe093 = '\x01';
        }
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          value = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMin
                    (__this_01,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_01,(UnityEngine_Vector2_o)0x4200000040800000,(MethodInfo *)0x0);
          pIVar3 = UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_Image_AddComponent_Image);
          if (pIVar3 != (Il2CppObject *)0x0) {
            (*pIVar3->klass->vtable[0x17].methodPtr)
                      (0x3f800000,0x3f8000003f800000,pIVar3,pIVar3->klass->vtable[0x17].method);
            (*pIVar3->klass->vtable[0x19].methodPtr)(pIVar3,0,pIVar3->klass->vtable[0x19].method);
            __this_02 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                        UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShad);
            if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              color = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                (theme,"shadow",
                                 (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                                 (MethodInfo *)0x0);
              if (__this_02 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup
                          (__this_02,color,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,0,
                           (MethodInfo *)0x0);
                return __this_01;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Normalized
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized (UnityEngine_RectTransform_o* rect, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b05f30

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized
          (UnityEngine_RectTransform_o *rect,UnityEngine_EventSystems_PointerEventData_o *eventData,
          MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Camera_o *cam;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Vector2_Fields local_30;
  UnityEngine_Vector2_Fields local_28;
  undefined8 uStack_20;
  
  if (DAT_057014d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    DAT_057014d9 = '\x01';
  }
  local_30.x = 0.0;
  local_30.y = 0.0;
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    local_28 = (eventData->fields)._position_k__BackingField.fields;
    uStack_20 = 0;
    cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                    (eventData,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,(UnityEngine_Vector2_o)local_28,cam,(UnityEngine_Vector2_o *)&local_30,
               (MethodInfo *)0x0);
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      UVar6 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
      fVar4 = UVar6.fields.m_XMin;
      fVar3 = UVar6.fields.m_YMin;
      fVar5 = UVar6.fields.m_Width + fVar4;
      if ((fVar4 != fVar5) || (fVar2 = 0.0, NAN(fVar4) || NAN(fVar5))) {
        fVar4 = (local_30.x - fVar4) / (fVar5 - fVar4);
        fVar2 = 0.0;
        if ((0.0 <= fVar4) && (fVar2 = 1.0, fVar4 <= 1.0)) {
          fVar2 = fVar4;
        }
      }
      fVar4 = UVar6.fields.m_Height + fVar3;
      if ((fVar3 != fVar4) || (fVar5 = 0.0, NAN(fVar3) || NAN(fVar4))) {
        fVar4 = (local_30.y - fVar3) / (fVar4 - fVar3);
        fVar5 = 0.0;
        if ((0.0 <= fVar4) && (fVar5 = 1.0, fVar4 <= 1.0)) {
          fVar5 = fVar4;
        }
      }
      UVar1.fields.y = fVar5;
      UVar1.fields.x = fVar2;
      return (UnityEngine_Vector2_o)UVar1.fields;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Place
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Place (UnityEngine_RectTransform_o* marker, float x, float y, const MethodInfo* method);
// 0x3b06670

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Place
               (UnityEngine_RectTransform_o *marker,float x,float y,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  UnityEngine_RectTransform_o *__this;
  float fVar1;
  float fVar2;
  UnityEngine_Rect_o UVar3;
  
  if (DAT_057014da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_057014da = '\x01';
  }
  if (marker != (UnityEngine_RectTransform_o *)0x0) {
    __this = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)marker,(MethodInfo *)0x0);
    if (__this != (UnityEngine_RectTransform_o *)0x0) {
      if (__this->klass == TypeInfo_RectTransform) {
        UVar3 = UnityEngine_RectTransform__get_rect(__this,(MethodInfo *)0x0);
        fVar1 = 1.0;
        if (x <= 1.0) {
          fVar1 = x;
        }
        fVar2 = 1.0;
        if (y <= 1.0) {
          fVar2 = y;
        }
        value.fields.y = (float)(-(uint)(0.0 <= y) & (uint)fVar2) * UVar3.fields.m_Height;
        value.fields.x = (float)(-(uint)(0.0 <= x) & (uint)fVar1) * UVar3.fields.m_Width;
        UnityEngine_RectTransform__set_anchoredPosition(marker,value,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$SetTexture
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture (UnityEngine_Texture2D_o** texture, UnityEngine_UI_RawImage_o* target, int32_t width, int32_t height, System_Func_int__int__Color32__o* pixel, const MethodInfo* method);
// 0x3b06490

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
               (UnityEngine_Texture2D_o **texture,UnityEngine_UI_RawImage_o *target,int32_t width,
               int32_t height,System_Func_int__int__Color32__o *pixel,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  bool_conflict bVar2;
  uint uVar3;
  UnityEngine_Texture_o *__this;
  int x;
  int32_t y;
  UnityEngine_Color_o color;
  
  if (DAT_057014db == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    DAT_057014db = '\x01';
  }
  pUVar1 = *texture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    __this = (UnityEngine_Texture_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor
              ((UnityEngine_Texture2D_o *)__this,width,height,4,0,(MethodInfo *)0x0);
    if (__this == (UnityEngine_Texture_o *)0x0) goto LAB_03b06655;
    UnityEngine_Texture__set_wrapMode(__this,1,(MethodInfo *)0x0);
    *texture = (UnityEngine_Texture2D_o *)__this;
    il2cpp_runtime_glue(texture,__this);
    if (target == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_03b06655;
    UnityEngine_UI_RawImage__set_texture(target,(UnityEngine_Texture_o *)*texture,(MethodInfo *)0x0)
    ;
  }
  if ((0 < height) && (0 < width)) {
    if (pixel == (System_Func_int__int__Color32__o *)0x0) goto LAB_03b06655;
    y = 0;
    do {
      x = 0;
      do {
        pUVar1 = *texture;
        uVar3 = (*(code *)(pixel->fields).invoke_impl)
                          ((pixel->fields).method_code,x,y,(pixel->fields).method);
        if (pUVar1 == (UnityEngine_Texture2D_o *)0x0) goto LAB_03b06655;
        color.fields.r = (float)(uVar3 & 0xff) / 255.0;
        color.fields.g = (float)(uVar3 >> 8 & 0xff) / 255.0;
        color.fields.b = (float)(uVar3 >> 0x10 & 0xff) / 255.0;
        color.fields.a = (float)(uVar3 >> 0x18) / 255.0;
        UnityEngine_Texture2D__SetPixel(pUVar1,x,y,color,(MethodInfo *)0x0);
        x = x + 1;
      } while (width != x);
      y = y + 1;
    } while (y != height);
  }
  if (*texture != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture2D__Apply(*texture,0,(MethodInfo *)0x0);
    return;
  }
LAB_03b06655:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnDestroy (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x3b06af0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnDestroy
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Texture2D_o *pUVar2;
  UnityEngine_Object_o *x;
  bool_conflict bVar3;
  MethodInfo *pMVar4;
  
  if (DAT_057014dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014dc = '\x01';
    pUVar2 = (__this->fields)._squareTexture;
  }
  else {
    pUVar2 = (__this->fields)._squareTexture;
  }
  if (DAT_057014de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014de = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)pUVar2,pMVar4);
    pUVar2 = (__this->fields)._hueTexture;
  }
  else {
    pUVar2 = (__this->fields)._hueTexture;
  }
  if (DAT_057014de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014de = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)pUVar2,pMVar4);
    pUVar2 = (__this->fields)._alphaTexture;
  }
  else {
    pUVar2 = (__this->fields)._alphaTexture;
  }
  if (DAT_057014de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014de = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)pUVar2,pMVar4);
    pUVar2 = (__this->fields)._circleTexture;
  }
  else {
    pUVar2 = (__this->fields)._circleTexture;
  }
  if (DAT_057014de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014de = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)pUVar2,pMVar4);
  }
  x = (UnityEngine_Object_o *)(__this->fields)._circleSprite;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
            ((UnityEngine_Object_o *)(__this->fields)._circleSprite,pMVar4);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$CircleSprite
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x3b06730

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_Sprite_o **ppUVar1;
  int iVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Texture2D_o *__this_00;
  bool_conflict bVar3;
  MethodInfo *method_00;
  UnityEngine_Sprite_o *pUVar4;
  int x_00;
  MethodInfo *pMVar5;
  MethodInfo *method_01;
  int y;
  UnityEngine_Texture2D_o **ppUVar6;
  float fVar7;
  float fVar8;
  double x_01;
  double dVar9;
  Il2CppMethodPointer pIVar10;
  float fVar11;
  UnityEngine_Color_o color;
  Il2CppMethodPointer local_38;
  
  if (DAT_057014dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    DAT_057014dd = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._circleSprite;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._circleSprite;
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
LAB_03b06acb:
    return *ppUVar1;
  }
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_Texture2D);
  y = 0;
  UnityEngine_Texture2D___ctor((UnityEngine_Texture2D_o *)method_00,0x20,0x20,4,0,(MethodInfo *)0x0)
  ;
  if (method_00 != (MethodInfo *)0x0) {
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)method_00,1,(MethodInfo *)0x0);
    (__this->fields)._circleTexture = (UnityEngine_Texture2D_o *)method_00;
    ppUVar6 = &(__this->fields)._circleTexture;
    il2cpp_runtime_glue(ppUVar6);
    do {
      fVar7 = ((float)y + -15.5) * ((float)y + -15.5);
      pMVar5 = (MethodInfo *)0x0;
      do {
        x_00 = (int)pMVar5;
        if (DAT_056fde22 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde22 = '\x01';
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto LAB_03b0689f;
LAB_03b06854:
          fVar8 = (float)x_00 + -15.5;
          fVar8 = fVar8 * fVar8 + fVar7;
          if (0.0 <= fVar8) goto LAB_03b06867;
LAB_03b068c3:
          fVar8 = sqrtf(fVar8);
        }
        else {
          if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto LAB_03b06854;
LAB_03b0689f:
          fVar8 = (float)x_00 + -15.5;
          il2cpp_init_class();
          fVar8 = fVar8 * fVar8 + fVar7;
          if (fVar8 < 0.0) goto LAB_03b068c3;
LAB_03b06867:
          fVar8 = SQRT(fVar8);
        }
        fVar11 = (16.0 - fVar8) + (16.0 - fVar8);
        fVar8 = 1.0;
        if (fVar11 <= 1.0) {
          fVar8 = fVar11;
        }
        fVar8 = (float)(-(uint)(0.0 <= fVar11) & (uint)(fVar8 * 255.0));
        if (DAT_056ff244 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056ff244 = '\x01';
          iVar2 = *(int *)(TypeInfo_Math + 0xe4);
        }
        else {
          iVar2 = *(int *)(TypeInfo_Math + 0xe4);
        }
        if (iVar2 == 0) {
          il2cpp_init_class();
        }
        x_01 = (double)fVar8;
        method_01 = (MethodInfo *)&stack0xffffffffffffffc8;
        dVar9 = modf(x_01,(double *)&stack0xffffffffffffffc8,method_00);
        pIVar10 = local_38;
        if (0.0 <= fVar8) {
          if ((dVar9 != 0.5) || (NAN(dVar9))) {
            pIVar10 = (Il2CppMethodPointer)floor(x_01 + 0.5,method_01);
          }
          else if (((long)(double)local_38 & 1U) != 0) {
            pIVar10 = (Il2CppMethodPointer)((double)local_38 + 1.0);
            __this_00 = *ppUVar6;
            goto joined_r0x03b069c1;
          }
LAB_03b06a30:
          __this_00 = *ppUVar6;
        }
        else if ((dVar9 != -0.5) || (NAN(dVar9))) {
          pIVar10 = (Il2CppMethodPointer)ceil(x_01 + -0.5,method_01);
          __this_00 = *ppUVar6;
        }
        else {
          if (((long)(double)local_38 & 1U) == 0) goto LAB_03b06a30;
          pIVar10 = (Il2CppMethodPointer)((double)local_38 + -1.0);
          __this_00 = *ppUVar6;
        }
joined_r0x03b069c1:
        if (__this_00 == (UnityEngine_Texture2D_o *)0x0) goto LAB_03b06add;
        color.fields.a = (float)((int)(double)pIVar10 & 0xff) / 255.0;
        color.fields.b = 1.0;
        color.fields.r = 1.0;
        color.fields.g = 1.0;
        method_00 = pMVar5;
        UnityEngine_Texture2D__SetPixel(__this_00,x_00,y,color,(MethodInfo *)0x0);
        pMVar5 = (MethodInfo *)(ulong)(x_00 + 1U);
      } while (x_00 + 1U != 0x20);
      y = y + 1;
    } while (y != 0x20);
    if (*ppUVar6 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply(*ppUVar6,0,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_Sprite__Create
                         (*ppUVar6,(UnityEngine_Rect_o)(ZEXT816(0x4200000042000000) << 0x40),
                          (UnityEngine_Vector2_o)0x3f0000003f000000,32.0,(MethodInfo *)0x0);
      *ppUVar1 = pUVar4;
      il2cpp_runtime_glue(ppUVar1,pUVar4);
      goto LAB_03b06acb;
    }
  }
LAB_03b06add:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Blend
// il2cpp: uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Blend (uint8_t back, uint8_t front, float t, const MethodInfo* method);
// 0x3b06e30

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
  if (DAT_056ff244 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056ff244 = '\x01';
  }
  fVar7 = (fVar5 - fVar7) * fVar6 + fVar7;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  dVar3 = (double)fVar7;
  method_00 = (MethodInfo *)&stack0xfffffffffffffff8;
  dVar4 = modf(dVar3,(double *)method_00,(MethodInfo *)CONCAT44(in_register_00000034,iVar1));
  if (0.0 <= fVar7) {
    if ((dVar4 != 0.5) || (NAN(dVar4))) {
      dVar3 = floor(dVar3 + 0.5,method_00);
      return (uint8_t)(int)dVar3;
    }
    if (((long)(double)local_8 & 1U) != 0) {
      local_8 = (Il2CppMethodPointer)((double)local_8 + 1.0);
    }
  }
  else {
    if ((dVar4 != -0.5) || (NAN(dVar4))) {
      dVar3 = ceil(dVar3 + -0.5,method_00);
      return (uint8_t)(int)dVar3;
    }
    if (((long)(double)local_8 & 1U) != 0) {
      return (uint8_t)(int)((double)local_8 + -1.0);
    }
  }
  return (uint8_t)(int)(double)local_8;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$DestroyTexture
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyTexture (UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x3b06d50

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyTexture
               (UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *method_00;
  
  if (DAT_057014de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014de = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
            ((UnityEngine_Object_o *)texture,method_00);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$DestroyUnityObject
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject (UnityEngine_Object_o* target, const MethodInfo* method);
// 0x3b06da0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
               (UnityEngine_Object_o *target,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057014df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014df = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((char)bVar1 != '\0') {
    UnityEngine_Object__Destroy(target,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__DestroyImmediate(target,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x3b06f80

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$<RefreshTextures>b__30_0
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___RefreshTextures_b__30_0 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, int32_t x, int32_t y, const MethodInfo* method);
// 0x3b06f90

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__<RefreshTextures>b__30_0
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,int32_t x,int32_t y,
          MethodInfo *method)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  UnityEngine_Color32_Fields UVar4;
  MethodInfo *method_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Color_o UVar11;
  float fStack_44;
  float fStack_38;
  
  fVar8 = (float)x / 63.0;
  fVar6 = (float)y / 63.0;
  fVar9 = (__this->fields)._value.fields.H;
  fVar5 = floorf(fVar9);
  fVar9 = fVar9 - fVar5;
  fVar5 = 1.0;
  if (fVar9 <= 1.0) {
    fVar5 = fVar9;
  }
  fVar7 = 1.0;
  if (fVar8 <= 1.0) {
    fVar7 = fVar8;
  }
  fVar10 = 1.0;
  if (fVar6 <= 1.0) {
    fVar10 = fVar6;
  }
  method_00 = (MethodInfo *)0x1;
  UVar11 = UnityEngine_Color__HSVToRGB
                     ((float)(-(uint)(0.0 <= fVar9) & (uint)fVar5),
                      (float)(-(uint)(0.0 <= fVar8) & (uint)fVar7),
                      (float)(-(uint)(0.0 <= fVar6) & (uint)fVar10),1,(MethodInfo *)0x0);
  uVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar11.fields.r,method_00);
  fStack_44 = UVar11.fields.g;
  uVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_44,method_00);
  fStack_38 = UVar11.fields.b;
  uVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_38,method_00);
  UVar4.rgba = CONCAT12(uVar3,CONCAT11(uVar2,uVar1)) | 0xff000000;
  UVar4.r = '\0';
  UVar4.g = '\0';
  UVar4.b = '\0';
  UVar4.a = '\0';
  return (UnityEngine_Color32_o)UVar4;
}


