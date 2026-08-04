// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPickerVisual.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__Setup (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, System_Action_PointerEventData__o* drag, const MethodInfo* method);
// 0x3b73030

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__Setup
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o *__this,
               System_Action_PointerEventData__o *drag,MethodInfo *method)

{
  (__this->fields)._drag = drag;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._drag);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnPointerDown (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b73040

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnPointerDown
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Action_PointerEventData__o *pSVar1;
  code *vtableDispatch;
  
  pSVar1 = (__this->fields)._drag;
  if (pSVar1 != (System_Action_PointerEventData__o *)0x0) {
    vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar1->fields).method_code,eventData,(pSVar1->fields).method,vtableDispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$OnDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b73060

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Action_PointerEventData__o *pSVar1;
  code *vtableDispatch;
  
  pSVar1 = (__this->fields)._drag;
  if (pSVar1 != (System_Action_PointerEventData__o *)0x0) {
    vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar1->fields).method_code,eventData,(pSVar1->fields).method,vtableDispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, const MethodInfo* method);
// 0x3b73080

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___cctor (const MethodInfo* method);
// 0x3b73090

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057a9e0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9e0e = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o* __this, const MethodInfo* method);
// 0x3b73100

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$<RefreshTextures>b__30_1
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___RefreshTextures_b__30_1 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o* __this, int32_t x, int32_t __, const MethodInfo* method);
// 0x3b73110

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___RefreshTextures_b__30_1
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
  UVar7 = UnityEngine_Color__HSVToRGB_4de5b40
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
// 0x3b72620

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c__DisplayClass30_0$$<RefreshTextures>b__2
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0___RefreshTextures_b__2 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o* __this, int32_t x, int32_t y, const MethodInfo* method);
// 0x3b731b0

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0___RefreshTextures_b__2
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o *__this,int32_t x,
          int32_t y,MethodInfo *method)

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
                    ((uint8_t)((uint)uVar4 >> 8),*(uint8_t *)((long)&(__this->fields).color.fields.rgba + 1),t
                     ,method_00);
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
// 0x3b6f440

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
  
  if (g_data_057a9dfd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
    g_data_057a9dfd = '\x01';
  }
  a = (__this->fields).Changed;
  while( true ) {
    pSVar3 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_GisketchUIColorPickerValue;
    lVar4 = 0;
    if ((pSVar3 != (System_Delegate_o *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_GisketchUIColorPickerValue), lVar4 == 0))
    break;
    pSVar2 = (System_Action_GisketchUIColorPickerValue__o *)il2cpp_runtime_helper_02300640(&(__this->fields).Changed,lVar4,a);
    bVar5 = a == pSVar2;
    a = pSVar2;
    if (bVar5) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$remove_Changed
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__remove_Changed (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, System_Action_GisketchUIColorPickerValue__o* value, const MethodInfo* method);
// 0x3b6f900

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
  
  if (g_data_057a9dfe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
    g_data_057a9dfe = '\x01';
  }
  source = (__this->fields).Changed;
  while( true ) {
    pSVar3 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    uVar1 = TypeInfo_Action_GisketchUIColorPickerValue;
    lVar4 = 0;
    if ((pSVar3 != (System_Delegate_o *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_GisketchUIColorPickerValue), lVar4 == 0))
    break;
    pSVar2 = (System_Action_GisketchUIColorPickerValue__o *)
             il2cpp_runtime_helper_02300640(&(__this->fields).Changed,lVar4,source);
    bVar5 = source == pSVar2;
    source = pSVar2;
    if (bVar5) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$get_EnableAlpha
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__get_EnableAlpha (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x3b70cb0

bool_conflict
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__get_EnableAlpha
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._EnableAlpha_k__BackingField);
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$set_EnableAlpha
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__set_EnableAlpha (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, bool value, const MethodInfo* method);
// 0x3b70cc0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__set_EnableAlpha
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._EnableAlpha_k__BackingField = (char)value;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, System_String_o* id, bool enableAlpha, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b6de90

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,System_String_o *id,
               bool_conflict enableAlpha,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this_00;
  Il2CppObject *pIVar4;
  MethodInfo *pMVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *str0;
  char cVar6;
  undefined4 uVar7;
  UnityEngine_Color_o rgbColor;
  undefined8 uStack_64;
  float fStack_5c;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_58;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_48;
  
  pMVar5 = (MethodInfo *)theme;
  if (g_data_057a9dff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057a9dff = '\x01';
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
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9dd0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057a9dd0 = '\x01';
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
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(id,pSVar3,enableAlpha & 0xffU,pMVar5);
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
              (rgbColor,(float *)&uStack_64,(float *)((long)&uStack_64 + 4),&fStack_5c,(MethodInfo *)0x0);
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
  str0 = __this;
  __this_00 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((__this_00 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) &&
     (pIVar4 = UnityEngine_GameObject__AddComponent_object_
                         ((UnityEngine_GameObject_o *)__this_00,MethodInfo_LayoutElement_AddComponent_LayoutElement), str0 = __this_00,
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
        il2cpp_runtime_helper_02337ed0();
        pMVar5 = extraout_RDX_00;
      }
      theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build(__this,theme,pMVar5);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,(MethodInfo *)theme);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,(MethodInfo *)theme);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9de2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-hex");
    g_data_057a9de2 = '\x01';
  }
  System_String__Concat_3ae5ba0((System_String_o *)str0,"-hex",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetValue (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, bool notify, const MethodInfo* method);
// 0x3b6f4f0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetValue
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value,bool_conflict notify,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_GisketchUIColorPickerValue__o *pSVar2;
  undefined8 uVar3;
  code *vtableDispatch;
  MethodInfo *method_00;
  
  method_00 = value.fields._0_8_;
  *(MethodInfo **)&(__this->fields)._value.fields = method_00;
  (__this->fields)._value.fields.S = (float)(int)value.fields._8_8_;
  (__this->fields)._value.fields.V = (float)(int)((ulong)value.fields._8_8_ >> 0x20);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,method_00);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,method_00);
  if (((char)notify != '\0') &&
     (pSVar2 = (__this->fields).Changed, pSVar2 != (System_Action_GisketchUIColorPickerValue__o *)0x0)) {
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
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b70cd0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  undefined4 uVar1;
  byte bVar2;
  UnityEngine_Object_o *pUVar3;
  System_Action_GisketchUIColorPickerValue__o *pSVar4;
  undefined8 uVar5;
  code *vtableDispatch;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o UVar6;
  float fVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  bool_conflict bVar11;
  UnityEngine_RectTransform_o *pUVar12;
  UnityEngine_UI_RawImage_o *pUVar13;
  UnityEngine_GameObject_o *pUVar14;
  Il2CppObject *pIVar15;
  System_Func_int__int__Color32__o *pSVar16;
  Il2CppObject *__this_00;
  System_String_o *name;
  System_Type_array *pSVar17;
  System_Type_o *pSVar18;
  long lVar19;
  Il2CppClass *__this_01;
  UnityEngine_Transform_o *pUVar20;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar21;
  System_RuntimeTypeHandle_o SVar22;
  UnityEngine_Sprite_o *value_01;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar23;
  _union_13 components;
  UnityEngine_EventSystems_PointerEventData_o *cam;
  MethodInfo *pMVar24;
  System_String_c *extraout_RDX;
  System_String_c *pSVar25;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_02;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  Il2CppClass *__this_03;
  Il2CppClass *unaff_RBP;
  undefined8 *puVar26;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_04;
  UnityEngine_EventSystems_PointerEventData_o *__this_05;
  UnityEngine_EventSystems_PointerEventData_o *eventData;
  UnityEngine_Events_UnityAction_o *pUVar27;
  _union_14 __this_06;
  UnityEngine_UI_Graphic_o *__this_07;
  UnityEngine_UI_Graphic_o *__this_08;
  MethodInfo *in_R9;
  MethodInfo_255A020 **unaff_R12;
  UnityEngine_RectTransform_o *pUVar28;
  long *plVar29;
  UnityEngine_UI_RawImage_o **unaff_R15;
  System_String_c **texture;
  float fVar30;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM1_Da;
  double dVar31;
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  uint uVar42;
  undefined4 uVar43;
  UnityEngine_Rect_o UVar44;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o fallback_00;
  UnityEngine_Color_o fallback_01;
  undefined1 auStack_308 [8];
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  _union_14 _Stack_2e0;
  Il2CppClass *pIStack_2d8;
  _union_13 _Stack_2d0;
  _union_14 _Stack_2c8;
  UnityEngine_RectTransform_o *pUStack_2c0;
  undefined1 auStack_2b8 [16];
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  undefined8 uStack_278;
  undefined8 uStack_270;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_260;
  _union_14 _Stack_258;
  UnityEngine_RectTransform_o *pUStack_250;
  System_Type_array *pSStack_248;
  UnityEngine_Vector2_Fields UStack_238;
  UnityEngine_Vector2_Fields UStack_230;
  undefined8 uStack_228;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_218;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_210;
  undefined1 auStack_208 [8];
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  MethodInfo *pMStack_1b0;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_1a8;
  UnityEngine_RectTransform_o *pUStack_1a0;
  System_Type_array *pSStack_198;
  UnityEngine_Vector2_Fields UStack_190;
  undefined8 uStack_188;
  System_Type_o *pSStack_180;
  Il2CppClass *pIStack_178;
  UnityEngine_RectTransform_o *pUStack_170;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_168;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_160;
  UnityEngine_Vector2_Fields UStack_158;
  undefined8 uStack_150;
  System_Type_o *pSStack_140;
  Il2CppClass *pIStack_138;
  System_Type_array *pSStack_130;
  System_String_c *pSStack_128;
  System_String_o *pSStack_120;
  undefined8 *puStack_118;
  float fStack_104;
  long lStack_100;
  undefined1 auStack_f0 [16];
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  Il2CppClass *pIStack_d0;
  Il2CppClass *pIStack_c8;
  long *plStack_c0;
  Il2CppObject *pIStack_b8;
  Il2CppClass **ppIStack_b0;
  undefined1 auStack_a8 [16];
  Il2CppObject *pIStack_90;
  UnityEngine_UI_RawImage_o *pUStack_88;
  Il2CppClass **ppIStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  UnityEngine_UI_RawImage_o *pUStack_68;
  UnityEngine_UI_RawImage_o **ppUStack_60;
  UnityEngine_RectTransform_o *pUStack_58;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_50;
  UnityEngine_UI_RawImage_o **ppUStack_48;
  Il2CppClass *pIStack_40;
  UnityEngine_Color_o UVar45;
  
  if (g_data_057a9e00 == '\0') {
    pIStack_40 = (Il2CppClass *)0x3b70cf6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_PointerEventData);
    pIStack_40 = (Il2CppClass *)0x3b70d02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_DragTarget_AddComponent_Gisk);
    pIStack_40 = (Il2CppClass *)0x3b70d0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnAlphaDrag);
    pIStack_40 = (Il2CppClass *)0x3b70d1a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnHueDrag);
    pIStack_40 = (Il2CppClass *)0x3b70d26;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnSquareDrag);
    pIStack_40 = (Il2CppClass *)0x3b70d32;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pIStack_40 = (Il2CppClass *)0x3b70d3e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    pIStack_40 = (Il2CppClass *)0x3b70d4a;
    il2cpp_runtime_helper_023445d0(&"AoTTG Color Gradient");
    pIStack_40 = (Il2CppClass *)0x3b70d56;
    il2cpp_runtime_helper_023445d0(&"AoTTG Hue Slider");
    pIStack_40 = (Il2CppClass *)0x3b70d62;
    il2cpp_runtime_helper_023445d0(&"AoTTG Alpha Slider");
    g_data_057a9e00 = '\x01';
  }
  pIStack_40 = (Il2CppClass *)0x3b70d76;
  pUVar12 = (UnityEngine_RectTransform_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar25 = extraout_RDX;
  pUVar28 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
    pSVar25 = (System_String_c *)pUVar12->klass;
    pUVar28 = (UnityEngine_RectTransform_o *)0x0;
    if (pSVar25 == TypeInfo_RectTransform) {
      pUVar28 = pUVar12;
    }
  }
  fVar37 = (float)g_data_00d19fc0;
  uVar43 = g_data_00d19fc0._12_4_;
  uVar40 = g_data_00d19fc0._4_4_;
  uVar41 = g_data_00d19fc0._8_4_;
  pIStack_40 = (Il2CppClass *)0x3b70dcc;
  UVar45.fields._0_8_ = g_data_00d19fc0;
  UVar45.fields.b = (float)(int)UVar45.fields._0_8_;
  UVar45.fields.a = (float)(int)((ulong)UVar45.fields._0_8_ >> 0x20);
  __this_01 = "AoTTG Color Gradient";
  auVar36 = _DAT_00d19fc0;
  pUVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
                      ((System_String_o *)"AoTTG Color Gradient",pUVar28,
                       *(float *)(&g_data_00d1d7d0 +
                                 (ulong)((char)(__this->fields)._EnableAlpha_k__BackingField == '\0') * 4),
                       100.0,UVar45,(MethodInfo *)pSVar25);
  if (__this != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
    unaff_R12 = (MethodInfo_255A020 **)&(__this->fields)._square;
    (__this->fields)._square = pUVar13;
    pIStack_40 = (Il2CppClass *)0x3b70de8;
    il2cpp_runtime_helper_022b4080(unaff_R12,pUVar13);
    pMVar24 = (MethodInfo *)&g_data_00d1d330;
    fVar37 = (float)g_data_00d19fc0;
    uVar43 = g_data_00d19fc0._12_4_;
    uVar40 = g_data_00d19fc0._4_4_;
    uVar41 = g_data_00d19fc0._8_4_;
    pIStack_40 = (Il2CppClass *)0x3b70e25;
    fallback_00.fields._0_8_ = g_data_00d19fc0;
    fallback_00.fields.b = (float)(int)fallback_00.fields._0_8_;
    fallback_00.fields.a = (float)(int)((ulong)fallback_00.fields._0_8_ >> 0x20);
    auVar36 = _DAT_00d19fc0;
    pUVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
                        ("AoTTG Hue Slider",pUVar28,
                         *(float *)(&g_data_00d1d330 +
                                   (ulong)((char)(__this->fields)._EnableAlpha_k__BackingField == '\0') * 4),
                         22.0,fallback_00,method_00);
    unaff_R15 = &(__this->fields)._hue;
    (__this->fields)._hue = pUVar13;
    pIStack_40 = (Il2CppClass *)0x3b70e38;
    il2cpp_runtime_helper_022b4080(unaff_R15);
    if ((char)(__this->fields)._EnableAlpha_k__BackingField != '\0') {
      fVar37 = (float)g_data_00d19fc0;
      uVar43 = g_data_00d19fc0._12_4_;
      uVar40 = g_data_00d19fc0._4_4_;
      uVar41 = g_data_00d19fc0._8_4_;
      pIStack_40 = (Il2CppClass *)0x3b70e6e;
      fallback_01.fields._0_8_ = g_data_00d19fc0;
      fallback_01.fields.b = (float)(int)fallback_01.fields._0_8_;
      fallback_01.fields.a = (float)(int)((ulong)fallback_01.fields._0_8_ >> 0x20);
      auVar36 = _DAT_00d19fc0;
      pUVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
                          ("AoTTG Alpha Slider",pUVar28,10.0,22.0,fallback_01,method_01);
      (__this->fields)._alpha = pUVar13;
      pIStack_40 = (Il2CppClass *)0x3b70e7e;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._alpha);
    }
    __this_01 = (Il2CppClass *)0x0;
    if ((UnityEngine_UI_RawImage_o *)*unaff_R12 != (UnityEngine_UI_RawImage_o *)0x0) {
      pIStack_40 = (Il2CppClass *)0x3b70e92;
      pUVar12 = UnityEngine_UI_Graphic__get_rectTransform
                          ((UnityEngine_UI_Graphic_o *)*unaff_R12,(MethodInfo *)0x0);
      pIStack_40 = (Il2CppClass *)0x3b70ea0;
      pUVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleMarker(__this,pUVar12,theme,pMVar24)
      ;
      (__this->fields)._squareMarker = pUVar12;
      pIStack_40 = (Il2CppClass *)0x3b70eb0;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._squareMarker);
      pUVar13 = (__this->fields)._hue;
      __this_01 = (Il2CppClass *)0x0;
      if (pUVar13 != (UnityEngine_UI_RawImage_o *)0x0) {
        pIStack_40 = (Il2CppClass *)0x3b70ec4;
        pUVar12 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)pUVar13,(MethodInfo *)0x0);
        pIStack_40 = (Il2CppClass *)0x3b70ecf;
        pUVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__LineMarker(pUVar12,theme,method_02);
        (__this->fields)._hueMarker = pUVar12;
        pIStack_40 = (Il2CppClass *)0x3b70edf;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._hueMarker);
        unaff_RBP = (Il2CppClass *)(__this->fields)._alpha;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pIStack_40 = (Il2CppClass *)0x3b70efb;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_40 = (Il2CppClass *)0x3b70f07;
        bVar11 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          pUVar13 = (__this->fields)._alpha;
          __this_01 = (Il2CppClass *)0x0;
          if (pUVar13 == (UnityEngine_UI_RawImage_o *)0x0) goto label_03b710c5;
          pIStack_40 = (Il2CppClass *)0x3b70f1f;
          pUVar12 = UnityEngine_UI_Graphic__get_rectTransform
                              ((UnityEngine_UI_Graphic_o *)pUVar13,(MethodInfo *)0x0);
          pIStack_40 = (Il2CppClass *)0x3b70f2a;
          pUVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__LineMarker(pUVar12,theme,method_03);
          (__this->fields)._alphaMarker = pUVar12;
          pIStack_40 = (Il2CppClass *)0x3b70f3a;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._alphaMarker);
        }
        __this_01 = (Il2CppClass *)*unaff_R12;
        if (__this_01 != (Il2CppClass *)0x0) {
          pIStack_40 = (Il2CppClass *)0x3b70f4e;
          pUVar14 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
            unaff_R12 = &MethodInfo_GisketchUIColorPickerVisual_DragTarget_AddComponent_Gisk;
            pIStack_40 = (Il2CppClass *)0x3b70f6a;
            theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar14,MethodInfo_GisketchUIColorPickerVisual_DragTarget_AddComponent_Gisk);
            pUVar28 = (UnityEngine_RectTransform_o *)&TypeInfo_Action_PointerEventData;
            pIStack_40 = (Il2CppClass *)0x3b70f7d;
            unaff_RBP = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_PointerEventData);
            pIStack_40 = (Il2CppClass *)0x3b70f97;
            __this_01 = unaff_RBP;
            System_Action_object____ctor();
            if ((UnityEngine_UI_RawImage_o *)theme != (UnityEngine_UI_RawImage_o *)0x0) {
              (((UnityEngine_UI_RawImage_o *)theme)->fields).m_Material = (UnityEngine_Material_o *)unaff_RBP;
              pIStack_40 = (Il2CppClass *)0x3b70fb3;
              il2cpp_runtime_helper_022b4080(&(((UnityEngine_UI_RawImage_o *)theme)->fields).m_Material);
              __this_01 = (Il2CppClass *)*unaff_R15;
              if (__this_01 != (Il2CppClass *)0x0) {
                pIStack_40 = (Il2CppClass *)0x3b70fc6;
                pUVar14 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                  pIStack_40 = (Il2CppClass *)0x3b70fdb;
                  pIVar15 = UnityEngine_GameObject__AddComponent_object_(pUVar14,MethodInfo_GisketchUIColorPickerVisual_DragTarget_AddComponent_Gisk);
                  pIStack_40 = (Il2CppClass *)0x3b70fe7;
                  unaff_RBP = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_PointerEventData);
                  pIStack_40 = (Il2CppClass *)0x3b71001;
                  __this_01 = unaff_RBP;
                  System_Action_object____ctor();
                  theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
                  if (pIVar15 != (Il2CppObject *)0x0) {
                    pIVar15[2].klass = unaff_RBP;
                    pIStack_40 = (Il2CppClass *)0x3b7101d;
                    il2cpp_runtime_helper_022b4080(pIVar15 + 2);
                    theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)(__this->fields)._alpha;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      pIStack_40 = (Il2CppClass *)0x3b71039;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pIStack_40 = (Il2CppClass *)0x3b71045;
                    bVar11 = UnityEngine_Object__op_Inequality
                                       ((UnityEngine_Object_o *)theme,(UnityEngine_Object_o *)0x0,
                                        (MethodInfo *)0x0);
                    if ((char)bVar11 == '\0') {
                      return;
                    }
                    __this_01 = (Il2CppClass *)(__this->fields)._alpha;
                    if (__this_01 != (Il2CppClass *)0x0) {
                      pIStack_40 = (Il2CppClass *)0x3b71059;
                      pUVar14 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                        pIStack_40 = (Il2CppClass *)0x3b7106a;
                        pIVar15 = UnityEngine_GameObject__AddComponent_object_(pUVar14,MethodInfo_GisketchUIColorPickerVisual_DragTarget_AddComponent_Gisk);
                        pIStack_40 = (Il2CppClass *)0x3b71076;
                        unaff_RBP = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_PointerEventData);
                        pIStack_40 = (Il2CppClass *)0x3b71090;
                        __this_01 = unaff_RBP;
                        System_Action_object____ctor();
                        theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
                        if (pIVar15 != (Il2CppObject *)0x0) {
                          pIVar15[2].klass = unaff_RBP;
                          il2cpp_runtime_helper_022b4080(pIVar15 + 2,unaff_RBP);
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
label_03b710c5:
  pIStack_40 = (Il2CppClass *)0x3b710ca;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  pUStack_68 = (UnityEngine_UI_RawImage_o *)theme;
  ppUStack_60 = (UnityEngine_UI_RawImage_o **)unaff_R12;
  pUStack_58 = pUVar28;
  pGStack_50 = __this;
  ppUStack_48 = unaff_R15;
  pIStack_40 = unaff_RBP;
  if (g_data_057a9e02 == '\0') {
    puStack_78 = (undefined8 *)0x3b710f3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_int_int_Color32);
    puStack_78 = (undefined8 *)0x3b710ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color32_RefreshTextures_b__30_0);
    puStack_78 = (undefined8 *)0x3b7110b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    puStack_78 = (undefined8 *)0x3b71117;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color32_RefreshTextures_b__30_1);
    puStack_78 = (undefined8 *)0x3b71123;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color32_RefreshTextures_b__2);
    puStack_78 = (undefined8 *)0x3b7112f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    puStack_78 = (undefined8 *)0x3b7113b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9e02 = '\x01';
  }
  pUVar13 = (__this_01->_1).byval_arg.data;
  puVar26 = &TypeInfo_Func_int_int_Color32;
  puStack_78 = (undefined8 *)0x3b7115c;
  pSVar16 = (System_Func_int__int__Color32__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_int_int_Color32);
  puStack_78 = (undefined8 *)0x3b71176;
  System_Func_int__int__Color32____ctor();
  puStack_78 = (undefined8 *)0x3b7118e;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
            ((UnityEngine_Texture2D_o **)&(__this_01->_1).declaringType,pUVar13,0x40,0x40,pSVar16,in_R9);
  pUVar13 = *(UnityEngine_UI_RawImage_o **)&(__this_01->_1).byval_arg.bits;
  plVar29 = &TypeInfo_c;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    puStack_78 = (undefined8 *)0x3b711ac;
    il2cpp_runtime_helper_02337ed0();
  }
  texture = (System_String_c **)&(__this_01->_1).parent;
  pSVar16 = *(System_Func_int__int__Color32__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar16 == (System_Func_int__int__Color32__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      puStack_78 = (undefined8 *)0x3b711d3;
      il2cpp_runtime_helper_02337ed0();
    }
    plVar29 = (long *)**(undefined8 **)(TypeInfo_c + 0xb8);
    puStack_78 = (undefined8 *)0x3b711ea;
    pSVar16 = (System_Func_int__int__Color32__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_int_int_Color32);
    puStack_78 = (undefined8 *)0x3b71204;
    System_Func_int__int__Color32____ctor();
    lVar19 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_int__int__Color32__o **)(lVar19 + 8) = pSVar16;
    puStack_78 = (undefined8 *)0x3b71225;
    il2cpp_runtime_helper_022b4080(lVar19 + 8,pSVar16);
  }
  puStack_78 = (undefined8 *)0x3b7123d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
            ((UnityEngine_Texture2D_o **)texture,pUVar13,0x80,1,pSVar16,in_R9);
  pUVar3 = (__this_01->_1).this_arg.data;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    puStack_78 = (undefined8 *)0x3b7125a;
    il2cpp_runtime_helper_02337ed0();
  }
  puStack_78 = (undefined8 *)0x3b71266;
  bVar11 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  puStack_78 = (undefined8 *)0x3b71279;
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  pSVar25 = (System_String_c *)0x0;
  puStack_78 = (undefined8 *)0x3b71286;
  pIVar15 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(undefined4 *)&__this_00[1].klass = *(undefined4 *)&(__this_01->_1).klass;
    pUVar13 = (__this_01->_1).this_arg.data;
    puStack_78 = (undefined8 *)0x3b712a5;
    pSVar16 = (System_Func_int__int__Color32__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_int_int_Color32);
    puStack_78 = (undefined8 *)0x3b712bf;
    System_Func_int__int__Color32____ctor();
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
              (&(__this_01->_1).generic_class,pUVar13,0x180,0x16,pSVar16,in_R9);
    return;
  }
  puStack_78 = (undefined8 *)0x3b712f9;
  il2cpp_runtime_helper_022b2c90();
  puStack_78 = &TypeInfo_Func_int_int_Color32;
  pIStack_90 = __this_00;
  pUStack_88 = pUVar13;
  ppIStack_80 = (Il2CppClass **)texture;
  if (g_data_057a9e03 == '\0') {
    ppIStack_b0 = (Il2CppClass **)0x3b71322;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e03 = '\x01';
  }
  __this_03 = pIVar15[3].monitor;
  auStack_a8._8_8_ = 0;
  auStack_a8._0_8_ = pIVar15[8].klass;
  if (g_data_057a9e08 == '\0') {
    ppIStack_b0 = (Il2CppClass **)0x3b7134f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9e08 = '\x01';
  }
  if (__this_03 == (Il2CppClass *)0x0) {
label_03b7150f:
    ppIStack_b0 = (Il2CppClass **)0x3b71514;
    name = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar25 = (System_String_c *)0x0;
    ppIStack_b0 = (Il2CppClass **)0x3b71369;
    name = (System_String_o *)
           UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
    if (name == (System_String_o *)0x0) goto label_03b7150f;
    texture = &TypeInfo_RectTransform;
    pSVar25 = TypeInfo_RectTransform;
    if (name->klass != TypeInfo_RectTransform) goto label_03b71514;
    ppIStack_b0 = (Il2CppClass **)0x3b7138f;
    UVar44 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)name,(MethodInfo *)0x0);
    fVar37 = 0.0;
    uVar40 = 0;
    uVar41 = 0;
    uVar43 = 0;
    auVar36 = minps(_DAT_00d19fc0,auStack_a8);
    pSVar25 = (System_String_c *)0x0;
    ppIStack_b0 = (Il2CppClass **)0x3b713b4;
    UVar6.fields.y = (float)(-(uint)(0.0 <= auStack_a8._4_4_) & auVar36._4_4_) * UVar44.fields.m_Height;
    UVar6.fields.x = (float)(-(uint)(0.0 <= auStack_a8._0_4_) & auVar36._0_4_) * UVar44.fields.m_Width;
    UnityEngine_RectTransform__set_anchoredPosition
              ((UnityEngine_RectTransform_o *)__this_03,UVar6,(MethodInfo *)0x0);
    __this_03 = pIVar15[4].klass;
    auStack_a8 = ZEXT416(*(uint *)((long)&pIVar15[7].monitor + 4));
    if (g_data_057a9e08 == '\0') {
      ppIStack_b0 = (Il2CppClass **)0x3b713d7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      g_data_057a9e08 = '\x01';
    }
    if (__this_03 == (Il2CppClass *)0x0) goto label_03b7150f;
    pSVar25 = (System_String_c *)0x0;
    ppIStack_b0 = (Il2CppClass **)0x3b713f1;
    name = (System_String_o *)
           UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
    if (name == (System_String_o *)0x0) goto label_03b7150f;
    pSVar25 = TypeInfo_RectTransform;
    if (name->klass == TypeInfo_RectTransform) {
      ppIStack_b0 = (Il2CppClass **)0x3b71410;
      UVar44 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)name,(MethodInfo *)0x0);
      fVar37 = 1.0;
      if ((float)auStack_a8._0_4_ <= 1.0) {
        fVar37 = (float)auStack_a8._0_4_;
      }
      auVar36 = ZEXT816(0);
      fVar37 = (float)(-(uint)(0.0 <= (float)auStack_a8._0_4_) & (uint)fVar37);
      uVar40 = 0;
      uVar41 = 0;
      uVar43 = 0;
      ppIStack_b0 = (Il2CppClass **)0x3b71443;
      value.fields.y = UVar44.fields.m_Height * 0.5;
      value.fields.x = fVar37 * UVar44.fields.m_Width;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)__this_03,value,(MethodInfo *)0x0);
      pUVar3 = pIVar15[4].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        ppIStack_b0 = (Il2CppClass **)0x3b7145f;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar25 = (System_String_c *)0x0;
      ppIStack_b0 = (Il2CppClass **)0x3b7146b;
      bVar11 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      __this_03 = pIVar15[4].monitor;
      bVar2 = *(byte *)((long)&pIVar15[7].monitor + 3);
      puVar26 = (undefined8 *)(ulong)bVar2;
      if (g_data_057a9e08 == '\0') {
        ppIStack_b0 = (Il2CppClass **)0x3b71491;
        il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
        g_data_057a9e08 = '\x01';
      }
      if (__this_03 != (Il2CppClass *)0x0) {
        pSVar25 = (System_String_c *)0x0;
        ppIStack_b0 = (Il2CppClass **)0x3b714a7;
        name = (System_String_o *)
               UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
        if (name != (System_String_o *)0x0) {
          pSVar25 = TypeInfo_RectTransform;
          if (name->klass == TypeInfo_RectTransform) {
            auStack_a8._0_4_ = (float)bVar2 / 255.0;
            ppIStack_b0 = (Il2CppClass **)0x3b714d2;
            UVar44 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)name,(MethodInfo *)0x0);
            fVar37 = 1.0;
            if ((float)auStack_a8._0_4_ <= 1.0) {
              fVar37 = (float)auStack_a8._0_4_;
            }
            value_00.fields.y = UVar44.fields.m_Height * 0.5;
            value_00.fields.x = fVar37 * UVar44.fields.m_Width;
            UnityEngine_RectTransform__set_anchoredPosition
                      ((UnityEngine_RectTransform_o *)__this_03,value_00,(MethodInfo *)0x0);
            return;
          }
          goto label_03b71514;
        }
      }
      goto label_03b7150f;
    }
  }
label_03b71514:
  ppIStack_b0 = (Il2CppClass **)0x3b7151c;
  lStack_100 = il2cpp_runtime_helper_022b2fd0();
  fStack_104 = extraout_XMM1_Da;
  auStack_f0 = auVar36;
  fStack_e0 = fVar37;
  uStack_dc = uVar40;
  uStack_d8 = uVar41;
  uStack_d4 = uVar43;
  pIStack_d0 = __this_03;
  pIStack_c8 = __this_01;
  plStack_c0 = plVar29;
  pIStack_b8 = pIVar15;
  ppIStack_b0 = (Il2CppClass **)texture;
  if (g_data_057a9e04 == '\0') {
    puStack_118 = (undefined8 *)0x3b7155d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_AddComponent_RawImage);
    puStack_118 = (undefined8 *)0x3b71569;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    puStack_118 = (undefined8 *)0x3b71575;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    puStack_118 = (undefined8 *)0x3b71581;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    puStack_118 = (undefined8 *)0x3b7158d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057a9e04 = '\x01';
  }
  puStack_118 = (undefined8 *)0x3b715a8;
  pSVar17 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar22 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    puStack_118 = (undefined8 *)0x3b715d1;
    il2cpp_runtime_helper_02337ed0();
  }
  puStack_118 = (undefined8 *)0x3b715db;
  pSVar18 = System_Type__GetTypeFromHandle(SVar22,(MethodInfo *)0x0);
  if (pSVar17 == (System_Type_array *)0x0) {
label_03b71773:
    puStack_118 = (undefined8 *)0x3b71778;
    il2cpp_runtime_helper_022b2c90();
label_03b71778:
    puStack_118 = (undefined8 *)0x3b7177d;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    SVar22.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar18;
    if (pSVar18 == (System_Type_o *)0x0) {
label_03b71605:
      if ((int)pSVar17->max_length != 0) {
        pSVar17->m_Items[0] = pSVar18;
        puStack_118 = (undefined8 *)0x3b71623;
        il2cpp_runtime_helper_022b4080(pSVar17->m_Items,pSVar18);
        puStack_118 = (undefined8 *)0x3b71632;
        __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        puStack_118 = (undefined8 *)0x3b71645;
        UnityEngine_GameObject___ctor_4dfc440
                  ((UnityEngine_GameObject_o *)__this_01,name,pSVar17,(MethodInfo *)0x0);
        if (__this_01 != (Il2CppClass *)0x0) {
          puStack_118 = (undefined8 *)0x3b71658;
          pUVar20 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
            puStack_118 = (undefined8 *)0x3b71670;
            UnityEngine_Transform__SetParent_4e09e30
                      (pUVar20,(UnityEngine_Transform_o *)pSVar25,0,(MethodInfo *)0x0);
            puStack_118 = (undefined8 *)0x3b71682;
            pUVar28 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (pUVar28 != (UnityEngine_RectTransform_o *)0x0) {
              puStack_118 = (undefined8 *)0x3b7169b;
              UnityEngine_RectTransform__set_anchorMin(pUVar28,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
              puStack_118 = (undefined8 *)0x3b716c9;
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar28,(UnityEngine_Vector2_o)
                                 (CONCAT44(-(uint)(22.0 < fStack_104),0x3f800000) & 0x3f800000ffffffff),
                         (MethodInfo *)0x0);
              puStack_118 = (undefined8 *)0x3b716e3;
              UnityEngine_RectTransform__set_offsetMin
                        (pUVar28,(UnityEngine_Vector2_o)(lStack_100 << 0x20),(MethodInfo *)0x0);
              fVar37 = 0.0;
              if (fStack_104 <= 22.0) {
                fVar37 = (float)lStack_100 + fStack_104;
              }
              puStack_118 = (undefined8 *)0x3b71713;
              UnityEngine_RectTransform__set_offsetMax
                        (pUVar28,(UnityEngine_Vector2_o)((ulong)(uint)fVar37 << 0x20),(MethodInfo *)0x0);
              puStack_118 = (undefined8 *)0x3b71725;
              pIVar15 = UnityEngine_GameObject__AddComponent_object_
                                  ((UnityEngine_GameObject_o *)__this_01,MethodInfo_RawImage_AddComponent_RawImage);
              SVar22.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pUVar28;
              if (pIVar15 != (Il2CppObject *)0x0) {
                puStack_118 = (undefined8 *)0x3b7174a;
                (*pIVar15->klass->vtable[0x17].methodPtr)
                          (auStack_f0._0_4_,pIVar15,pIVar15->klass->vtable[0x17].method);
                puStack_118 = (undefined8 *)0x3b71762;
                (*pIVar15->klass->vtable[0x19].methodPtr)(pIVar15,1,pIVar15->klass->vtable[0x19].method);
                return;
              }
            }
          }
        }
        goto label_03b71773;
      }
      goto label_03b71778;
    }
    puStack_118 = (undefined8 *)0x3b715fc;
    lVar19 = il2cpp_runtime_helper_023051f0(pSVar18);
    if (lVar19 != 0) goto label_03b71605;
  }
  puStack_118 = (undefined8 *)0x3b71782;
  pGVar21 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_0231b270();
  pUVar28 = (UnityEngine_RectTransform_o *)0x0;
  puStack_118 = (undefined8 *)0x3b7178c;
  il2cpp_runtime_helper_022b2b10();
  pSStack_140 = (System_Type_o *)SVar22.fields.value;
  pIStack_138 = __this_01;
  pSStack_130 = pSVar17;
  pSStack_128 = pSVar25;
  pSStack_120 = name;
  puStack_118 = puVar26;
  if (g_data_057a9e05 == '\0') {
    pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717bc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717c8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717d4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717e0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717ec;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717f8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71804;
    il2cpp_runtime_helper_023445d0(&"surface");
    pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71810;
    il2cpp_runtime_helper_023445d0(&"shadow");
    pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7181c;
    il2cpp_runtime_helper_023445d0(&"AoTTG Color Marker");
    g_data_057a9e05 = '\x01';
  }
  pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71837;
  pSVar17 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar22 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71860;
    il2cpp_runtime_helper_02337ed0();
  }
  pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7186a;
  pSVar18 = System_Type__GetTypeFromHandle(SVar22,(MethodInfo *)0x0);
  if (pSVar17 == (System_Type_array *)0x0) {
label_03b71a7e:
    pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a83;
    il2cpp_runtime_helper_022b2c90();
label_03b71a83:
    pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a88;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    SVar22.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar18;
    if (pSVar18 == (System_Type_o *)0x0) {
label_03b71894:
      if ((int)pSVar17->max_length != 0) {
        pSVar17->m_Items[0] = pSVar18;
        pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718b1;
        il2cpp_runtime_helper_022b4080(pSVar17->m_Items,pSVar18);
        pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718c0;
        __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718da;
        UnityEngine_GameObject___ctor_4dfc440
                  ((UnityEngine_GameObject_o *)__this_01,"AoTTG Color Marker",pSVar17,(MethodInfo *)0x0);
        if (__this_01 != (Il2CppClass *)0x0) {
          pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718ed;
          pUVar20 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
            pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71905;
            UnityEngine_Transform__SetParent_4e09e30
                      (pUVar20,(UnityEngine_Transform_o *)pUVar28,0,(MethodInfo *)0x0);
            pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71917;
            pUVar28 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (g_data_057a694c == '\0') {
              pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7192f;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
              g_data_057a694c = '\x01';
            }
            if (pUVar28 != (UnityEngine_RectTransform_o *)0x0) {
              UStack_158 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
              uStack_150 = 0;
              pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71962;
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar28,(UnityEngine_Vector2_o)UStack_158,(MethodInfo *)0x0);
              pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71970;
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar28,(UnityEngine_Vector2_o)UStack_158,(MethodInfo *)0x0);
              pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71981;
              UnityEngine_RectTransform__set_pivot
                        (pUVar28,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71992;
              UnityEngine_RectTransform__set_sizeDelta
                        (pUVar28,(UnityEngine_Vector2_o)0x4190000041900000,(MethodInfo *)0x0);
              pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719a4;
              pMVar24 = MethodInfo_Image_AddComponent_Image;
              SVar22.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   UnityEngine_GameObject__AddComponent_object_
                             ((UnityEngine_GameObject_o *)__this_01,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image);
              pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719af;
              value_01 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite(pGVar21,pMVar24);
              if (SVar22.fields.value != 0) {
                pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719c5;
                UnityEngine_UI_Image__set_sprite
                          ((UnityEngine_UI_Image_o *)SVar22.fields.value,value_01,(MethodInfo *)0x0);
                if (__this_02 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                  pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719ec;
                  fallback.fields.b = 1.0;
                  fallback.fields.a = 1.0;
                  fallback.fields.r = 1.0;
                  fallback.fields.g = 1.0;
                  UVar45 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                     (__this_02,"surface",fallback,(MethodInfo *)0x0);
                  pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719ff;
                  (*(((UnityEngine_UI_Image_o *)SVar22.fields.value)->klass->vtable)._23_set_color.methodPtr)
                            (UVar45.fields.r,UVar45.fields._8_8_,SVar22.fields.value,
                             (((UnityEngine_UI_Image_o *)SVar22.fields.value)->klass->vtable)._23_set_color.
                             method);
                  pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a14;
                  (*(((UnityEngine_UI_Image_o *)SVar22.fields.value)->klass->vtable)._25_set_raycastTarget.
                    methodPtr)(SVar22.fields.value,0,
                               (((UnityEngine_UI_Image_o *)SVar22.fields.value)->klass->vtable).
                               _25_set_raycastTarget.method);
                  pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a26;
                  pGVar23 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                            UnityEngine_GameObject__AddComponent_object_
                                      ((UnityEngine_GameObject_o *)__this_01,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
                  pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a47;
                  UVar45 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                     (__this_02,"shadow",
                                      (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                                      (MethodInfo *)0x0);
                  SVar22.fields.value = (System_RuntimeTypeHandle_Fields)0;
                  if (pGVar23 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                    pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a6c;
                    Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
                              (pGVar23,UVar45,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,0,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
        goto label_03b71a7e;
      }
      goto label_03b71a83;
    }
    pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7188b;
    lVar19 = il2cpp_runtime_helper_023051f0(pSVar18);
    if (lVar19 != 0) goto label_03b71894;
  }
  pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a8d;
  pUVar12 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_0231b270();
  __this_04 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
  pGStack_160 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a97;
  il2cpp_runtime_helper_022b2b10();
  pSStack_180 = (System_Type_o *)SVar22.fields.value;
  pIStack_178 = __this_01;
  pUStack_170 = pUVar28;
  pGStack_168 = pGVar21;
  pGStack_160 = __this_02;
  if (g_data_057a9e06 == '\0') {
    pSStack_198 = (System_Type_array *)0x3b71ac8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    pSStack_198 = (System_Type_array *)0x3b71ad4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    pSStack_198 = (System_Type_array *)0x3b71ae0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pSStack_198 = (System_Type_array *)0x3b71aec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pSStack_198 = (System_Type_array *)0x3b71af8;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pSStack_198 = (System_Type_array *)0x3b71b04;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pSStack_198 = (System_Type_array *)0x3b71b10;
    il2cpp_runtime_helper_023445d0(&"AoTTG Color Slider Marker");
    pSStack_198 = (System_Type_array *)0x3b71b1c;
    il2cpp_runtime_helper_023445d0(&"shadow");
    g_data_057a9e06 = '\x01';
  }
  pSStack_198 = (System_Type_array *)0x3b71b37;
  components.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar22 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pSStack_198 = (System_Type_array *)0x3b71b60;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_198 = (System_Type_array *)0x3b71b6a;
  pMVar24 = (MethodInfo *)System_Type__GetTypeFromHandle(SVar22,(MethodInfo *)0x0);
  if (components.rgctx_data == (Il2CppRGCTXData *)0x0) {
label_03b71d51:
    pSStack_198 = (System_Type_array *)0x3b71d56;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    SVar22.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pMVar24;
    if (pMVar24 != (MethodInfo *)0x0) {
      pSStack_198 = (System_Type_array *)0x3b71b8b;
      lVar19 = il2cpp_runtime_helper_023051f0(pMVar24);
      if (lVar19 == 0) goto label_03b71d5b;
    }
    if (*(int *)(components.rgctx_data + 3) != 0) {
      components.rgctx_data[4].method = pMVar24;
      pSStack_198 = (System_Type_array *)0x3b71bb2;
      il2cpp_runtime_helper_022b4080(components.rgctx_data + 4,pMVar24);
      pSStack_198 = (System_Type_array *)0x3b71bc1;
      __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      pSStack_198 = (System_Type_array *)0x3b71bdb;
      UnityEngine_GameObject___ctor_4dfc440
                ((UnityEngine_GameObject_o *)__this_01,"AoTTG Color Slider Marker",(System_Type_array *)components.rgctx_data
                 ,(MethodInfo *)0x0);
      if (__this_01 != (Il2CppClass *)0x0) {
        pSStack_198 = (System_Type_array *)0x3b71bee;
        pUVar20 = UnityEngine_GameObject__get_transform
                            ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
        if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
          pSStack_198 = (System_Type_array *)0x3b71c06;
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar20,(UnityEngine_Transform_o *)pUVar12,0,(MethodInfo *)0x0);
          pSStack_198 = (System_Type_array *)0x3b71c18;
          pUVar12 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
          if (g_data_057a694c == '\0') {
            pSStack_198 = (System_Type_array *)0x3b71c30;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
            UStack_190 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
            uStack_188 = 0;
            pSStack_198 = (System_Type_array *)0x3b71c63;
            UnityEngine_RectTransform__set_anchorMax
                      (pUVar12,(UnityEngine_Vector2_o)UStack_190,(MethodInfo *)0x0);
            pSStack_198 = (System_Type_array *)0x3b71c71;
            UnityEngine_RectTransform__set_anchorMin
                      (pUVar12,(UnityEngine_Vector2_o)UStack_190,(MethodInfo *)0x0);
            pSStack_198 = (System_Type_array *)0x3b71c82;
            UnityEngine_RectTransform__set_pivot
                      (pUVar12,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
            pSStack_198 = (System_Type_array *)0x3b71c93;
            UnityEngine_RectTransform__set_sizeDelta
                      (pUVar12,(UnityEngine_Vector2_o)0x4200000040800000,(MethodInfo *)0x0);
            pSStack_198 = (System_Type_array *)0x3b71ca5;
            pIVar15 = UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)__this_01,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image);
            if (pIVar15 != (Il2CppObject *)0x0) {
              pSStack_198 = (System_Type_array *)0x3b71cce;
              (*pIVar15->klass->vtable[0x17].methodPtr)(pIVar15,pIVar15->klass->vtable[0x17].method);
              pSStack_198 = (System_Type_array *)0x3b71ce3;
              (*pIVar15->klass->vtable[0x19].methodPtr)(pIVar15,0,pIVar15->klass->vtable[0x19].method);
              pSStack_198 = (System_Type_array *)0x3b71cf5;
              pGVar23 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                        UnityEngine_GameObject__AddComponent_object_
                                  ((UnityEngine_GameObject_o *)__this_01,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
              SVar22.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pIVar15;
              if (__this_04 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                pSStack_198 = (System_Type_array *)0x3b71d1b;
                UVar45 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                   (__this_04,"shadow",
                                    (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                                    (MethodInfo *)0x0);
                SVar22.fields.value = (System_RuntimeTypeHandle_Fields)0;
                if (pGVar23 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                  pSStack_198 = (System_Type_array *)0x3b71d40;
                  Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
                            (pGVar23,UVar45,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,0,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto label_03b71d51;
    }
  }
  pSStack_198 = (System_Type_array *)0x3b71d5b;
  il2cpp_runtime_helper_022b2ca0();
label_03b71d5b:
  pSStack_198 = (System_Type_array *)0x3b71d60;
  pGVar21 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_0231b270();
  __this_05 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  pSStack_198 = (System_Type_array *)0x3b71d6a;
  il2cpp_runtime_helper_022b2b10();
  __this_06 = (_union_14)(pGVar21->fields)._square;
  pMStack_1b0 = (MethodInfo *)SVar22.fields.value;
  pGStack_1a8 = __this_04;
  pUStack_1a0 = pUVar12;
  pSStack_198 = pSVar17;
  if (__this_06.genericMethod != (UnityEngine_UI_RawImage_o *)0x0) {
    pGStack_210 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71d94;
    pUVar28 = UnityEngine_UI_Graphic__get_rectTransform(__this_06.genericMethod,(MethodInfo *)0x0);
    pGStack_210 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71d9f;
    UVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar28,__this_05,method_04);
    auStack_1f8._8_4_ = extraout_XMM0_Dc;
    auStack_1f8._0_4_ = UVar6.fields.x;
    auStack_1f8._4_4_ = UVar6.fields.y;
    auStack_1f8._12_4_ = extraout_XMM0_Dd;
    auStack_208._4_4_ = UVar6.fields.y;
    auStack_208._0_4_ = UVar6.fields.y;
    uStack_200 = extraout_XMM0_Dc;
    uStack_1fc = extraout_XMM0_Dd;
    fVar37 = (pGVar21->fields)._value.fields.H;
    auStack_1e8 = ZEXT416((uint)fVar37);
    bVar2 = (pGVar21->fields)._value.fields.A;
    pGStack_210 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71dc2;
    fVar37 = floorf(fVar37);
    auStack_1e8._0_4_ = (float)auStack_1e8._0_4_ - fVar37;
    auVar32 = ZEXT812(0x3f800000);
    if ((float)auStack_1e8._0_4_ <= 1.0) {
      auVar32._4_8_ = 0;
      auVar32._0_4_ = auStack_1e8._0_4_;
    }
    auStack_1e8._0_4_ = -(uint)(0.0 <= (float)auStack_1e8._0_4_) & auVar32._0_4_;
    auStack_1e8._4_4_ = 0;
    auStack_1e8._8_4_ = auStack_1e8._8_4_ & auVar32._8_4_;
    auStack_1e8._12_4_ = 0;
    auVar33 = ZEXT812(0x3f800000);
    if ((float)auStack_1f8._0_4_ <= 1.0) {
      auVar33._4_8_ = 0;
      auVar33._0_4_ = auStack_1f8._0_4_;
    }
    fVar38 = (float)(-(uint)(0.0 <= (float)auStack_1f8._0_4_) & auVar33._0_4_);
    uVar42 = auStack_1f8._8_4_ & auVar33._8_4_;
    auVar36 = ZEXT416(uVar42) << 0x40;
    auStack_1f8._4_4_ = 0;
    auStack_1f8._0_4_ = fVar38;
    auStack_1f8._8_4_ = uVar42;
    auStack_1f8._12_4_ = 0;
    fVar37 = 1.0;
    if ((float)auStack_208._0_4_ <= 1.0) {
      fVar37 = (float)auStack_208._0_4_;
    }
    fVar37 = (float)(-(uint)(0.0 <= (float)auStack_208._0_4_) & (uint)fVar37);
    _auStack_208 = ZEXT416((uint)fVar37);
    pMVar24 = (MethodInfo *)0x1;
    pGStack_210 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e29;
    UVar45 = UnityEngine_Color__HSVToRGB_4de5b40((float)auStack_1e8._0_4_,fVar38,fVar37,1,(MethodInfo *)0x0);
    uStack_1c0 = auVar36._8_8_;
    uStack_1c8 = UVar45.fields._8_8_;
    auStack_1d8._8_4_ = extraout_XMM0_Dc_00;
    auStack_1d8._0_8_ = UVar45.fields._0_8_;
    auStack_1d8._12_4_ = extraout_XMM0_Dd_00;
    pGStack_210 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e38;
    bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar45.fields.r,pMVar24);
    pGStack_210 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e49;
    bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)auStack_1d8._4_4_,pMVar24);
    pGStack_210 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e56;
    bVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)uStack_1c8,pMVar24);
    pMVar24 = (MethodInfo *)
              ((ulong)bVar8 | (ulong)bVar2 << 0x18 | (ulong)bVar9 << 8 | (ulong)bVar10 << 0x10 |
              (ulong)(uint)auStack_1e8._0_4_ << 0x20);
    *(MethodInfo **)&(pGVar21->fields)._value.fields = pMVar24;
    (pGVar21->fields)._value.fields.S = (float)auStack_1f8._0_4_;
    (pGVar21->fields)._value.fields.V = (float)auStack_208._0_4_;
    pGStack_210 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71ea3;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar21,pMVar24);
    pGStack_210 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71eab;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar21,pMVar24);
    pSVar4 = (pGVar21->fields).Changed;
    if (pSVar4 == (System_Action_GisketchUIColorPickerValue__o *)0x0) {
      return;
    }
    uVar1 = (pGVar21->fields)._value.fields.S;
    uVar5._0_1_ = (pGVar21->fields)._value.fields.R;
    uVar5._1_1_ = (pGVar21->fields)._value.fields.G;
    uVar5._2_1_ = (pGVar21->fields)._value.fields.B;
    uVar5._3_1_ = (pGVar21->fields)._value.fields.A;
    uVar5._4_4_ = (pGVar21->fields)._value.fields.H;
    vtableDispatch = (code *)(pSVar4->fields).invoke_impl;
    (*vtableDispatch)
              (uVar1,(pSVar4->fields).method_code,uVar5,(pSVar4->fields).method,vtableDispatch);
    return;
  }
  pGStack_210 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71eeb;
  il2cpp_runtime_helper_022b2c90();
  eventData = __this_05;
  plVar29 = (long *)__this_06;
  pGStack_218 = pGVar21;
  pGStack_210 = __this_04;
  if (g_data_057a9e07 == '\0') {
    plVar29 = &TypeInfo_RectTransformUtility;
    pSStack_248 = (System_Type_array *)0x3b71f12;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e07 = '\x01';
  }
  UStack_238.x = 0.0;
  UStack_238.y = 0.0;
  cam = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  if (__this_05 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    UStack_230 = (__this_05->fields)._position_k__BackingField.fields;
    uStack_228 = 0;
    pSStack_248 = (System_Type_array *)0x3b71f42;
    cam = (UnityEngine_EventSystems_PointerEventData_o *)
          UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_05,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      pSStack_248 = (System_Type_array *)0x3b71f5d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_248 = (System_Type_array *)0x3b71f74;
    eventData = cam;
    plVar29 = (long *)__this_06;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (__this_06.genericMethod,(UnityEngine_Vector2_o)UStack_230,(UnityEngine_Camera_o *)cam,
               (UnityEngine_Vector2_o *)&UStack_238,(MethodInfo *)0x0);
    if (__this_06.genericMethod != (UnityEngine_UI_RawImage_o *)0x0) {
      pSStack_248 = (System_Type_array *)0x3b71f87;
      UnityEngine_RectTransform__get_rect(__this_06.genericMethod,(MethodInfo *)0x0);
      return;
    }
  }
  pSStack_248 = (System_Type_array *)0x3b72015;
  il2cpp_runtime_helper_022b2c90();
  __this_07 = *(UnityEngine_UI_Graphic_o **)&((UnityEngine_Color_o *)((long)plVar29 + 0x28))->fields;
  pUStack_260 = cam;
  _Stack_258 = __this_06;
  pUStack_250 = pUVar12;
  pSStack_248 = pSVar17;
  if (__this_07 != (UnityEngine_UI_Graphic_o *)0x0) {
    pUStack_2c0 = (UnityEngine_RectTransform_o *)0x3b72044;
    pUVar28 = UnityEngine_UI_Graphic__get_rectTransform(__this_07,(MethodInfo *)0x0);
    pUStack_2c0 = (UnityEngine_RectTransform_o *)0x3b7204f;
    UVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar28,eventData,method_05);
    auStack_298._8_4_ = extraout_XMM0_Dc_01;
    auStack_298._0_4_ = UVar6.fields.x;
    auStack_298._4_4_ = UVar6.fields.y;
    auStack_298._12_4_ = extraout_XMM0_Dd_01;
    auStack_2a8 = ZEXT416(*(uint *)((long)plVar29 + 0x80));
    auStack_2b8 = ZEXT416(*(uint *)((long)plVar29 + 0x84));
    bVar2 = *(byte *)((long)plVar29 + 0x7b);
    pUStack_2c0 = (UnityEngine_RectTransform_o *)0x3b7207c;
    fVar37 = floorf(UVar6.fields.x);
    fVar37 = (float)auStack_298._0_4_ - fVar37;
    auVar34 = ZEXT812(0x3f800000);
    if (fVar37 <= 1.0) {
      auVar34._4_8_ = 0;
      auVar34._0_4_ = fVar37;
    }
    fVar37 = (float)(-(uint)(0.0 <= fVar37) & auVar34._0_4_);
    auStack_298._4_4_ = 0;
    auStack_298._0_4_ = fVar37;
    auStack_298._8_4_ = auStack_298._8_4_ & auVar34._8_4_;
    auStack_298._12_4_ = 0;
    auVar35 = ZEXT812(0x3f800000);
    if ((float)auStack_2a8._0_4_ <= 1.0) {
      auVar35._4_8_ = 0;
      auVar35._0_4_ = auStack_2a8._0_4_;
    }
    fVar39 = (float)(-(uint)(0.0 <= (float)auStack_2a8._0_4_) & auVar35._0_4_);
    uVar42 = auStack_2a8._8_4_ & auVar35._8_4_;
    auVar36 = ZEXT416(uVar42) << 0x40;
    auStack_2a8._4_4_ = 0;
    auStack_2a8._0_4_ = fVar39;
    auStack_2a8._8_4_ = uVar42;
    auStack_2a8._12_4_ = 0;
    fVar38 = 1.0;
    if ((float)auStack_2b8._0_4_ <= 1.0) {
      fVar38 = (float)auStack_2b8._0_4_;
    }
    fVar38 = (float)(-(uint)(0.0 <= (float)auStack_2b8._0_4_) & (uint)fVar38);
    auStack_2b8 = ZEXT416((uint)fVar38);
    pMVar24 = (MethodInfo *)0x1;
    pUStack_2c0 = (UnityEngine_RectTransform_o *)0x3b720e3;
    UVar45 = UnityEngine_Color__HSVToRGB_4de5b40(fVar37,fVar39,fVar38,1,(MethodInfo *)0x0);
    uStack_270 = auVar36._8_8_;
    uStack_278 = UVar45.fields._8_8_;
    auStack_288._8_4_ = extraout_XMM0_Dc_02;
    auStack_288._0_8_ = UVar45.fields._0_8_;
    auStack_288._12_4_ = extraout_XMM0_Dd_02;
    pUStack_2c0 = (UnityEngine_RectTransform_o *)0x3b720f2;
    bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar45.fields.r,pMVar24);
    pUStack_2c0 = (UnityEngine_RectTransform_o *)0x3b72103;
    bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)auStack_288._4_4_,pMVar24);
    pUStack_2c0 = (UnityEngine_RectTransform_o *)0x3b72110;
    bVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)uStack_278,pMVar24);
    pUVar27 = (UnityEngine_Events_UnityAction_o *)
              ((ulong)bVar8 | (ulong)bVar2 << 0x18 | (ulong)bVar9 << 8 |
               (ulong)(uint)auStack_298._0_4_ << 0x20 | (ulong)bVar10 << 0x10);
    *(UnityEngine_Events_UnityAction_o **)((long)plVar29 + 0x78) = pUVar27;
    *(UnityEngine_Events_UnityAction_o **)((long)plVar29 + 0x80) =
         (UnityEngine_Events_UnityAction_o *)CONCAT44(auStack_2b8._0_4_,auStack_2a8._0_4_);
    pUStack_2c0 = (UnityEngine_RectTransform_o *)0x3b7215d;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)plVar29,(MethodInfo *)pUVar27);
    pUStack_2c0 = (UnityEngine_RectTransform_o *)0x3b72165;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)plVar29,(MethodInfo *)pUVar27);
    pUVar27 = *(UnityEngine_Events_UnityAction_o **)((long)plVar29 + 0x88);
    if (pUVar27 == (UnityEngine_Events_UnityAction_o *)0x0) {
      return;
    }
    vtableDispatch = (code *)(pUVar27->fields).invoke_impl;
    (*vtableDispatch)
              ((int)*(UnityEngine_Events_UnityAction_o **)((long)plVar29 + 0x80),(pUVar27->fields).method_code
               ,*(UnityEngine_Events_UnityAction_o **)((long)plVar29 + 0x78),(pUVar27->fields).method,
               vtableDispatch);
    return;
  }
  pUStack_2c0 = (UnityEngine_RectTransform_o *)0x3b721a5;
  il2cpp_runtime_helper_022b2c90();
  __this_08 = *(UnityEngine_UI_Graphic_o **)&(__this_07->fields).m_Color.fields.b;
  _Stack_2e0 = (_union_14)plVar29;
  pIStack_2d8 = __this_01;
  _Stack_2d0.rgctx_data = components.rgctx_data;
  _Stack_2c8 = __this_06;
  pUStack_2c0 = pUVar12;
  if (__this_08 == (UnityEngine_UI_Graphic_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9e01 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9e01 = '\x01';
    }
    pUVar3 = *(UnityEngine_Object_o **)&(__this_08->fields).m_SkipLayoutUpdate;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar24 = (MethodInfo *)0x0;
    bVar11 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return;
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_08,pMVar24);
    return;
  }
  pUVar28 = UnityEngine_UI_Graphic__get_rectTransform(__this_08,(MethodInfo *)0x0);
  UVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar28,eventData,method_06);
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  fVar37 = UVar6.fields.x * 255.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  dVar31 = (double)fVar37;
  pMVar24 = (MethodInfo *)auStack_308;
  auStack_300._0_8_ = dVar31;
  dVar31 = modf(dVar31,(double *)pMVar24,(MethodInfo *)eventData);
  if (0.0 <= fVar37) {
    if ((dVar31 != 0.5) || (NAN(dVar31))) {
      auStack_308 = (undefined1  [8])floor((double)auStack_300._0_8_ + 0.5,pMVar24);
    }
    else if (((long)(double)auStack_308 & 1U) != 0) {
      auStack_308 = (undefined1  [8])((double)auStack_308 + 1.0);
    }
  }
  else if ((dVar31 != -0.5) || (NAN(dVar31))) {
    auStack_308 = (undefined1  [8])ceil((double)auStack_300._0_8_ + -0.5,pMVar24);
  }
  else if (((long)(double)auStack_308 & 1U) != 0) {
    auStack_308 = (undefined1  [8])((double)auStack_308 + -1.0);
  }
  bVar2 = *(byte *)&(__this_07->fields).m_OnDirtyLayoutCallback;
  bVar8 = *(byte *)((long)&(__this_07->fields).m_OnDirtyLayoutCallback + 1);
  bVar9 = *(byte *)((long)&(__this_07->fields).m_OnDirtyLayoutCallback + 2);
  fVar37 = *(float *)((long)&(__this_07->fields).m_OnDirtyLayoutCallback + 4);
  auStack_2f0 = ZEXT416((uint)fVar37);
  auStack_300 = ZEXT416(*(uint *)&(__this_07->fields).m_OnDirtyVertsCallback);
  fVar38 = *(float *)((long)&(__this_07->fields).m_OnDirtyVertsCallback + 4);
  fVar39 = floorf(fVar37);
  fVar39 = (float)auStack_2f0._0_4_ - fVar39;
  fVar37 = 1.0;
  if (fVar39 <= 1.0) {
    fVar37 = fVar39;
  }
  fVar7 = 1.0;
  if ((float)auStack_300._0_4_ <= 1.0) {
    fVar7 = (float)auStack_300._0_4_;
  }
  fVar30 = 1.0;
  if (fVar38 <= 1.0) {
    fVar30 = fVar38;
  }
  (__this_07->fields).m_OnDirtyLayoutCallback =
       (UnityEngine_Events_UnityAction_o *)
       ((ulong)bVar8 << 8 | (ulong)(uint)((int)(double)auStack_308 << 0x18) | (ulong)bVar2 |
        (ulong)bVar9 << 0x10 | (ulong)(-(uint)(0.0 <= fVar39) & (uint)fVar37) << 0x20);
  (__this_07->fields).m_OnDirtyVertsCallback =
       (UnityEngine_Events_UnityAction_o *)
       CONCAT44(-(uint)(0.0 <= fVar38) & (uint)fVar30,-(uint)(0.0 <= (float)auStack_300._0_4_) & (uint)fVar7);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_07,(MethodInfo *)eventData);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_07,(MethodInfo *)eventData);
  pUVar27 = (__this_07->fields).m_OnDirtyMaterialCallback;
  if (pUVar27 == (UnityEngine_Events_UnityAction_o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pUVar27->fields).invoke_impl;
  (*vtableDispatch)
            ((int)(__this_07->fields).m_OnDirtyVertsCallback,(pUVar27->fields).method_code,
             (__this_07->fields).m_OnDirtyLayoutCallback,(pUVar27->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnSquareDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnSquareDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b71d70

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnSquareDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  undefined4 uVar1;
  byte bVar2;
  System_Action_GisketchUIColorPickerValue__o *pSVar3;
  undefined8 uVar4;
  code *vtableDispatch;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o UVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  bool_conflict bVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_EventSystems_PointerEventData_o *eventData_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_Events_UnityAction_o *pUVar11;
  MethodInfo *pMVar12;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_UI_Graphic_o *__this_02;
  UnityEngine_UI_Graphic_o *__this_03;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Color_o UVar19;
  Il2CppMethodPointer pIStack_178;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  UnityEngine_UI_RawImage_o *pUStack_150;
  float fStack_f4;
  float fStack_e8;
  UnityEngine_Vector2_Fields UStack_a8;
  UnityEngine_Vector2_Fields UStack_a0;
  undefined8 uStack_98;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_88;
  float fStack_68;
  float fStack_44;
  float fStack_38;
  
  __this_00 = (__this->fields)._square;
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    pUVar10 = UnityEngine_UI_Graphic__get_rectTransform
                        ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
    UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar10,eventData,method_00);
    fVar18 = UVar5.fields.y;
    fVar16 = (__this->fields)._value.fields.H;
    bVar2 = (__this->fields)._value.fields.A;
    fVar13 = floorf(fVar16);
    fVar16 = fVar16 - fVar13;
    fVar13 = 1.0;
    if (fVar16 <= 1.0) {
      fVar13 = fVar16;
    }
    fVar13 = (float)(-(uint)(0.0 <= fVar16) & (uint)fVar13);
    fStack_68 = UVar5.fields.x;
    fVar16 = 1.0;
    if (fStack_68 <= 1.0) {
      fVar16 = fStack_68;
    }
    fVar16 = (float)(-(uint)(0.0 <= fStack_68) & (uint)fVar16);
    fVar17 = 1.0;
    if (fVar18 <= 1.0) {
      fVar17 = fVar18;
    }
    fVar17 = (float)(-(uint)(0.0 <= fVar18) & (uint)fVar17);
    pMVar12 = (MethodInfo *)0x1;
    UVar19 = UnityEngine_Color__HSVToRGB_4de5b40(fVar13,fVar16,fVar17,1,(MethodInfo *)0x0);
    bVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar19.fields.r,pMVar12);
    fStack_44 = UVar19.fields.g;
    bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_44,pMVar12);
    fStack_38 = UVar19.fields.b;
    bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_38,pMVar12);
    pMVar12 = (MethodInfo *)
              ((ulong)bVar6 | (ulong)bVar2 << 0x18 | (ulong)bVar7 << 8 | (ulong)bVar8 << 0x10 |
              (ulong)(uint)fVar13 << 0x20);
    *(MethodInfo **)&(__this->fields)._value.fields = pMVar12;
    (__this->fields)._value.fields.S = fVar16;
    (__this->fields)._value.fields.V = fVar17;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,pMVar12);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,pMVar12);
    pSVar3 = (__this->fields).Changed;
    if (pSVar3 == (System_Action_GisketchUIColorPickerValue__o *)0x0) {
      return;
    }
    uVar1 = (__this->fields)._value.fields.S;
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
  il2cpp_runtime_helper_022b2c90();
  eventData_00 = eventData;
  __this_01 = __this_00;
  pGStack_88 = __this;
  if (g_data_057a9e07 == '\0') {
    __this_01 = (UnityEngine_UI_RawImage_o *)&TypeInfo_RectTransformUtility;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e07 = '\x01';
  }
  UStack_a8.x = 0.0;
  UStack_a8.y = 0.0;
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    UStack_a0 = (eventData->fields)._position_k__BackingField.fields;
    uStack_98 = 0;
    eventData_00 = (UnityEngine_EventSystems_PointerEventData_o *)
                   UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                             (eventData,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = __this_00;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              ((UnityEngine_RectTransform_o *)__this_00,(UnityEngine_Vector2_o)UStack_a0,
               (UnityEngine_Camera_o *)eventData_00,(UnityEngine_Vector2_o *)&UStack_a8,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
      UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = *(UnityEngine_UI_Graphic_o **)&(__this_01->fields).m_Color.fields;
  if (__this_02 != (UnityEngine_UI_Graphic_o *)0x0) {
    pUVar10 = UnityEngine_UI_Graphic__get_rectTransform(__this_02,(MethodInfo *)0x0);
    UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar10,eventData_00,method_01);
    fVar16 = *(float *)&(__this_01->fields).m_OnDirtyVertsCallback;
    fVar13 = *(float *)((long)&(__this_01->fields).m_OnDirtyVertsCallback + 4);
    bVar2 = *(byte *)((long)&(__this_01->fields).m_OnDirtyLayoutCallback + 3);
    fVar17 = floorf(UVar5.fields.x);
    fVar17 = UVar5.fields.x - fVar17;
    fVar18 = 1.0;
    if (fVar17 <= 1.0) {
      fVar18 = fVar17;
    }
    fVar18 = (float)(-(uint)(0.0 <= fVar17) & (uint)fVar18);
    fVar17 = 1.0;
    if (fVar16 <= 1.0) {
      fVar17 = fVar16;
    }
    fVar17 = (float)(-(uint)(0.0 <= fVar16) & (uint)fVar17);
    fVar16 = 1.0;
    if (fVar13 <= 1.0) {
      fVar16 = fVar13;
    }
    fVar16 = (float)(-(uint)(0.0 <= fVar13) & (uint)fVar16);
    pMVar12 = (MethodInfo *)0x1;
    UVar19 = UnityEngine_Color__HSVToRGB_4de5b40(fVar18,fVar17,fVar16,1,(MethodInfo *)0x0);
    bVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar19.fields.r,pMVar12);
    fStack_f4 = UVar19.fields.g;
    bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_f4,pMVar12);
    fStack_e8 = UVar19.fields.b;
    bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_e8,pMVar12);
    pUVar11 = (UnityEngine_Events_UnityAction_o *)
              ((ulong)bVar6 | (ulong)bVar2 << 0x18 | (ulong)bVar7 << 8 | (ulong)(uint)fVar18 << 0x20 |
              (ulong)bVar8 << 0x10);
    (__this_01->fields).m_OnDirtyLayoutCallback = pUVar11;
    (__this_01->fields).m_OnDirtyVertsCallback = (UnityEngine_Events_UnityAction_o *)CONCAT44(fVar16,fVar17);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_01,(MethodInfo *)pUVar11);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_01,(MethodInfo *)pUVar11);
    pUVar11 = (__this_01->fields).m_OnDirtyMaterialCallback;
    if (pUVar11 == (UnityEngine_Events_UnityAction_o *)0x0) {
      return;
    }
    vtableDispatch = (code *)(pUVar11->fields).invoke_impl;
    (*vtableDispatch)
              ((int)(__this_01->fields).m_OnDirtyVertsCallback,(pUVar11->fields).method_code,
               (__this_01->fields).m_OnDirtyLayoutCallback,(pUVar11->fields).method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = *(UnityEngine_UI_Graphic_o **)&(__this_02->fields).m_Color.fields.b;
  pUStack_150 = __this_01;
  if (__this_03 != (UnityEngine_UI_Graphic_o *)0x0) {
    pUVar10 = UnityEngine_UI_Graphic__get_rectTransform(__this_03,(MethodInfo *)0x0);
    UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar10,eventData_00,method_02);
    if (g_data_057a7b0a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a7b0a = '\x01';
    }
    fVar16 = UVar5.fields.x * 255.0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    dVar15 = (double)fVar16;
    pMVar12 = (MethodInfo *)&pIStack_178;
    auStack_170._0_8_ = dVar15;
    dVar15 = modf(dVar15,(double *)pMVar12,(MethodInfo *)eventData_00);
    if (0.0 <= fVar16) {
      if ((dVar15 != 0.5) || (NAN(dVar15))) {
        pIStack_178 = (Il2CppMethodPointer)floor((double)auStack_170._0_8_ + 0.5,pMVar12);
      }
      else if (((long)(double)pIStack_178 & 1U) != 0) {
        pIStack_178 = (Il2CppMethodPointer)((double)pIStack_178 + 1.0);
      }
    }
    else if ((dVar15 != -0.5) || (NAN(dVar15))) {
      pIStack_178 = (Il2CppMethodPointer)ceil((double)auStack_170._0_8_ + -0.5,pMVar12);
    }
    else if (((long)(double)pIStack_178 & 1U) != 0) {
      pIStack_178 = (Il2CppMethodPointer)((double)pIStack_178 + -1.0);
    }
    bVar2 = *(byte *)&(__this_02->fields).m_OnDirtyLayoutCallback;
    bVar6 = *(byte *)((long)&(__this_02->fields).m_OnDirtyLayoutCallback + 1);
    bVar7 = *(byte *)((long)&(__this_02->fields).m_OnDirtyLayoutCallback + 2);
    fVar16 = *(float *)((long)&(__this_02->fields).m_OnDirtyLayoutCallback + 4);
    auStack_160 = ZEXT416((uint)fVar16);
    auStack_170 = ZEXT416(*(uint *)&(__this_02->fields).m_OnDirtyVertsCallback);
    fVar13 = *(float *)((long)&(__this_02->fields).m_OnDirtyVertsCallback + 4);
    fVar18 = floorf(fVar16);
    fVar18 = (float)auStack_160._0_4_ - fVar18;
    fVar16 = 1.0;
    if (fVar18 <= 1.0) {
      fVar16 = fVar18;
    }
    fVar17 = 1.0;
    if ((float)auStack_170._0_4_ <= 1.0) {
      fVar17 = (float)auStack_170._0_4_;
    }
    fVar14 = 1.0;
    if (fVar13 <= 1.0) {
      fVar14 = fVar13;
    }
    (__this_02->fields).m_OnDirtyLayoutCallback =
         (UnityEngine_Events_UnityAction_o *)
         ((ulong)bVar6 << 8 | (ulong)(uint)((int)(double)pIStack_178 << 0x18) | (ulong)bVar2 |
          (ulong)bVar7 << 0x10 | (ulong)(-(uint)(0.0 <= fVar18) & (uint)fVar16) << 0x20);
    (__this_02->fields).m_OnDirtyVertsCallback =
         (UnityEngine_Events_UnityAction_o *)
         CONCAT44(-(uint)(0.0 <= fVar13) & (uint)fVar14,
                  -(uint)(0.0 <= (float)auStack_170._0_4_) & (uint)fVar17);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_02,(MethodInfo *)eventData_00);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_02,(MethodInfo *)eventData_00);
    pUVar11 = (__this_02->fields).m_OnDirtyMaterialCallback;
    if (pUVar11 == (UnityEngine_Events_UnityAction_o *)0x0) {
      return;
    }
    vtableDispatch = (code *)(pUVar11->fields).invoke_impl;
    (*vtableDispatch)
              ((int)(__this_02->fields).m_OnDirtyVertsCallback,(pUVar11->fields).method_code,
               (__this_02->fields).m_OnDirtyLayoutCallback,(pUVar11->fields).method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9e01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e01 = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(__this_03->fields).m_SkipLayoutUpdate;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_03,pMVar12);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnHueDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnHueDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b72020

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnHueDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  byte bVar3;
  System_Action_GisketchUIColorPickerValue__o *pSVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_Events_UnityAction_o *pUVar6;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o UVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  bool_conflict bVar11;
  UnityEngine_RectTransform_o *pUVar12;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar13;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_UI_Graphic_o *__this_01;
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Color_o UVar19;
  Il2CppMethodPointer pIStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_a0;
  float fStack_44;
  float fStack_38;
  
  __this_00 = (__this->fields)._hue;
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    pUVar12 = UnityEngine_UI_Graphic__get_rectTransform
                        ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
    UVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar12,eventData,method_00);
    fVar17 = (__this->fields)._value.fields.S;
    fVar1 = (__this->fields)._value.fields.V;
    bVar3 = (__this->fields)._value.fields.A;
    fVar14 = floorf(UVar7.fields.x);
    fVar14 = UVar7.fields.x - fVar14;
    fVar18 = 1.0;
    if (fVar14 <= 1.0) {
      fVar18 = fVar14;
    }
    fVar18 = (float)(-(uint)(0.0 <= fVar14) & (uint)fVar18);
    fVar14 = 1.0;
    if (fVar17 <= 1.0) {
      fVar14 = fVar17;
    }
    fVar14 = (float)(-(uint)(0.0 <= fVar17) & (uint)fVar14);
    fVar17 = 1.0;
    if (fVar1 <= 1.0) {
      fVar17 = fVar1;
    }
    fVar17 = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar17);
    pMVar13 = (MethodInfo *)0x1;
    UVar19 = UnityEngine_Color__HSVToRGB_4de5b40(fVar18,fVar14,fVar17,1,(MethodInfo *)0x0);
    bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar19.fields.r,pMVar13);
    fStack_44 = UVar19.fields.g;
    bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_44,pMVar13);
    fStack_38 = UVar19.fields.b;
    bVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_38,pMVar13);
    pMVar13 = (MethodInfo *)
              ((ulong)bVar8 | (ulong)bVar3 << 0x18 | (ulong)bVar9 << 8 | (ulong)(uint)fVar18 << 0x20 |
              (ulong)bVar10 << 0x10);
    *(MethodInfo **)&(__this->fields)._value.fields = pMVar13;
    (__this->fields)._value.fields.S = fVar14;
    (__this->fields)._value.fields.V = fVar17;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,pMVar13);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,pMVar13);
    pSVar4 = (__this->fields).Changed;
    if (pSVar4 != (System_Action_GisketchUIColorPickerValue__o *)0x0) {
      uVar2 = (__this->fields)._value.fields.S;
      uVar5._0_1_ = (__this->fields)._value.fields.R;
      uVar5._1_1_ = (__this->fields)._value.fields.G;
      uVar5._2_1_ = (__this->fields)._value.fields.B;
      uVar5._3_1_ = (__this->fields)._value.fields.A;
      uVar5._4_4_ = (__this->fields)._value.fields.H;
      UNRECOVERED_JUMPTABLE_00 = (code *)(pSVar4->fields).invoke_impl;
      (*UNRECOVERED_JUMPTABLE_00)
                (uVar2,(pSVar4->fields).method_code,uVar5,(pSVar4->fields).method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = *(UnityEngine_UI_Graphic_o **)&(__this_00->fields).m_Color.fields.b;
  pGStack_a0 = __this;
  if (__this_01 == (UnityEngine_UI_Graphic_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9e01 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9e01 = '\x01';
    }
    x = *(UnityEngine_Object_o **)&(__this_01->fields).m_SkipLayoutUpdate;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar13 = (MethodInfo *)0x0;
    bVar11 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
                ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_01,pMVar13);
      return;
    }
    return;
  }
  pUVar12 = UnityEngine_UI_Graphic__get_rectTransform(__this_01,(MethodInfo *)0x0);
  UVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar12,eventData,method_01);
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  fVar17 = UVar7.fields.x * 255.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  dVar16 = (double)fVar17;
  pMVar13 = (MethodInfo *)&pIStack_c8;
  auStack_c0._0_8_ = dVar16;
  dVar16 = modf(dVar16,(double *)pMVar13,(MethodInfo *)eventData);
  if (0.0 <= fVar17) {
    if ((dVar16 != 0.5) || (NAN(dVar16))) {
      pIStack_c8 = (Il2CppMethodPointer)floor((double)auStack_c0._0_8_ + 0.5,pMVar13);
    }
    else if (((long)(double)pIStack_c8 & 1U) != 0) {
      pIStack_c8 = (Il2CppMethodPointer)((double)pIStack_c8 + 1.0);
    }
  }
  else if ((dVar16 != -0.5) || (NAN(dVar16))) {
    pIStack_c8 = (Il2CppMethodPointer)ceil((double)auStack_c0._0_8_ + -0.5,pMVar13);
  }
  else if (((long)(double)pIStack_c8 & 1U) != 0) {
    pIStack_c8 = (Il2CppMethodPointer)((double)pIStack_c8 + -1.0);
  }
  bVar3 = *(byte *)&(__this_00->fields).m_OnDirtyLayoutCallback;
  bVar8 = *(byte *)((long)&(__this_00->fields).m_OnDirtyLayoutCallback + 1);
  bVar9 = *(byte *)((long)&(__this_00->fields).m_OnDirtyLayoutCallback + 2);
  fVar17 = *(float *)((long)&(__this_00->fields).m_OnDirtyLayoutCallback + 4);
  auStack_b0 = ZEXT416((uint)fVar17);
  auStack_c0 = ZEXT416(*(uint *)&(__this_00->fields).m_OnDirtyVertsCallback);
  fVar1 = *(float *)((long)&(__this_00->fields).m_OnDirtyVertsCallback + 4);
  fVar18 = floorf(fVar17);
  fVar18 = (float)auStack_b0._0_4_ - fVar18;
  fVar17 = 1.0;
  if (fVar18 <= 1.0) {
    fVar17 = fVar18;
  }
  fVar14 = 1.0;
  if ((float)auStack_c0._0_4_ <= 1.0) {
    fVar14 = (float)auStack_c0._0_4_;
  }
  fVar15 = 1.0;
  if (fVar1 <= 1.0) {
    fVar15 = fVar1;
  }
  (__this_00->fields).m_OnDirtyLayoutCallback =
       (UnityEngine_Events_UnityAction_o *)
       ((ulong)bVar8 << 8 | (ulong)(uint)((int)(double)pIStack_c8 << 0x18) | (ulong)bVar3 |
        (ulong)bVar9 << 0x10 | (ulong)(-(uint)(0.0 <= fVar18) & (uint)fVar17) << 0x20);
  (__this_00->fields).m_OnDirtyVertsCallback =
       (UnityEngine_Events_UnityAction_o *)
       CONCAT44(-(uint)(0.0 <= fVar1) & (uint)fVar15,-(uint)(0.0 <= (float)auStack_c0._0_4_) & (uint)fVar14);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_00,(MethodInfo *)eventData);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_00,(MethodInfo *)eventData);
  pUVar6 = (__this_00->fields).m_OnDirtyMaterialCallback;
  if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)(pUVar6->fields).invoke_impl;
    (*UNRECOVERED_JUMPTABLE_00)
              ((int)(__this_00->fields).m_OnDirtyVertsCallback,(pUVar6->fields).method_code,
               (__this_00->fields).m_OnDirtyLayoutCallback,(pUVar6->fields).method,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnAlphaDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnAlphaDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b721b0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnAlphaDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  System_Action_GisketchUIColorPickerValue__o *pSVar6;
  undefined8 uVar7;
  code *vtableDispatch;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o UVar8;
  double dVar9;
  bool_conflict bVar10;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  ulong uVar11;
  MethodInfo *pMVar12;
  UnityEngine_UI_RawImage_o *__this_00;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  
  __this_00 = (__this->fields)._alpha;
  if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9e01 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9e01 = '\x01';
    }
    x = *(UnityEngine_Object_o **)&(__this_00->fields).m_SkipLayoutUpdate;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar12 = (MethodInfo *)0x0;
    bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
                ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_00,pMVar12);
      return;
    }
    return;
  }
  rect = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
  UVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(rect,eventData,method_00);
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  fVar13 = UVar8.fields.x * 255.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  dVar9 = (double)fVar13;
  pMVar12 = (MethodInfo *)auStack_50;
  auStack_48._0_8_ = dVar9;
  dVar9 = modf(dVar9,(double *)pMVar12,(MethodInfo *)eventData);
  if (0.0 <= fVar13) {
    if ((dVar9 != 0.5) || (NAN(dVar9))) {
      auStack_50 = (undefined1  [8])floor((double)auStack_48._0_8_ + 0.5,pMVar12);
    }
    else if (((long)(double)auStack_50 & 1U) != 0) {
      auStack_50 = (undefined1  [8])((double)auStack_50 + 1.0);
    }
  }
  else if ((dVar9 != -0.5) || (NAN(dVar9))) {
    auStack_50 = (undefined1  [8])ceil((double)auStack_48._0_8_ + -0.5,pMVar12);
  }
  else if (((long)(double)auStack_50 & 1U) != 0) {
    auStack_50 = (undefined1  [8])((double)auStack_50 + -1.0);
  }
  bVar3 = (__this->fields)._value.fields.R;
  bVar4 = (__this->fields)._value.fields.G;
  bVar5 = (__this->fields)._value.fields.B;
  fVar13 = (__this->fields)._value.fields.H;
  auStack_38 = ZEXT416((uint)fVar13);
  auStack_48 = ZEXT416((uint)(__this->fields)._value.fields.S);
  fVar1 = (__this->fields)._value.fields.V;
  fVar14 = floorf(fVar13);
  fVar14 = (float)auStack_38._0_4_ - fVar14;
  fVar13 = 1.0;
  if (fVar14 <= 1.0) {
    fVar13 = fVar14;
  }
  fVar16 = 1.0;
  if ((float)auStack_48._0_4_ <= 1.0) {
    fVar16 = (float)auStack_48._0_4_;
  }
  fVar15 = 1.0;
  if (fVar1 <= 1.0) {
    fVar15 = fVar1;
  }
  uVar11 = (ulong)bVar4 << 8 | (ulong)(uint)((int)(double)auStack_50 << 0x18) | (ulong)bVar3 |
           (ulong)bVar5 << 0x10 | (ulong)(-(uint)(0.0 <= fVar14) & (uint)fVar13) << 0x20;
  (__this->fields)._value.fields.R = (char)uVar11;
  (__this->fields)._value.fields.G = (char)(uVar11 >> 8);
  (__this->fields)._value.fields.B = (char)(uVar11 >> 0x10);
  (__this->fields)._value.fields.A = (char)(uVar11 >> 0x18);
  (__this->fields)._value.fields.H = (float)(int)(uVar11 >> 0x20);
  (__this->fields)._value.fields.S = (float)(-(uint)(0.0 <= (float)auStack_48._0_4_) & (uint)fVar16);
  (__this->fields)._value.fields.V = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar15);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,(MethodInfo *)eventData);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,(MethodInfo *)eventData);
  pSVar6 = (__this->fields).Changed;
  if (pSVar6 != (System_Action_GisketchUIColorPickerValue__o *)0x0) {
    uVar2 = (__this->fields)._value.fields.S;
    uVar7._0_1_ = (__this->fields)._value.fields.R;
    uVar7._1_1_ = (__this->fields)._value.fields.G;
    uVar7._2_1_ = (__this->fields)._value.fields.B;
    uVar7._3_1_ = (__this->fields)._value.fields.A;
    uVar7._4_4_ = (__this->fields)._value.fields.H;
    vtableDispatch = (code *)(pSVar6->fields).invoke_impl;
    (*vtableDispatch)
              (uVar2,(pSVar6->fields).method_code,uVar7,(pSVar6->fields).method,vtableDispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x3b723e0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *x;
  bool_conflict bVar1;
  MethodInfo *method_00;
  
  if (g_data_057a9e01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e01 = '\x01';
  }
  x = (__this->fields)._squareMarker;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
// 0x3b710d0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  byte bVar2;
  UnityEngine_UI_RawImage_o *pUVar3;
  UnityEngine_UI_RawImage_o *x;
  UnityEngine_Object_o *pUVar4;
  System_Action_GisketchUIColorPickerValue__o *pSVar5;
  undefined8 uVar6;
  code *vtableDispatch;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o UVar7;
  float fVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  bool_conflict bVar12;
  System_Func_int__int__Color32__o *pSVar13;
  Il2CppObject *__this_00;
  System_String_o *name;
  System_Type_array *pSVar14;
  System_Type_o *pSVar15;
  long lVar16;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_RectTransform_o *pUVar18;
  Il2CppObject *pIVar19;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar20;
  System_RuntimeTypeHandle_o SVar21;
  UnityEngine_Sprite_o *value_01;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar22;
  UnityEngine_RectTransform_o *__this_01;
  _union_13 components;
  MethodInfo *pMVar23;
  UnityEngine_EventSystems_PointerEventData_o *cam;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Il2CppClass *__this_03;
  undefined8 *puVar24;
  System_String_c *parent;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_04;
  UnityEngine_EventSystems_PointerEventData_o *__this_05;
  UnityEngine_EventSystems_PointerEventData_o *eventData;
  UnityEngine_Events_UnityAction_o *pUVar25;
  _union_14 __this_06;
  UnityEngine_UI_Graphic_o *__this_07;
  UnityEngine_UI_Graphic_o *__this_08;
  MethodInfo *in_R9;
  long *plVar26;
  System_String_c **texture;
  float fVar27;
  float fVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM1_Da;
  double dVar29;
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined1 auVar34 [16];
  undefined1 in_XMM2 [16];
  float in_XMM3_Da;
  float fVar35;
  float fVar36;
  undefined4 in_XMM3_Db;
  undefined4 in_XMM3_Dc;
  uint uVar37;
  undefined4 in_XMM3_Dd;
  UnityEngine_Rect_o UVar38;
  UnityEngine_Color_o UVar39;
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [16];
  _union_14 _Stack_2a8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_2a0;
  _union_13 _Stack_298;
  _union_14 _Stack_290;
  UnityEngine_RectTransform_o *pUStack_288;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined8 uStack_240;
  undefined8 uStack_238;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_228;
  _union_14 _Stack_220;
  UnityEngine_RectTransform_o *pUStack_218;
  System_Type_array *pSStack_210;
  UnityEngine_Vector2_Fields UStack_200;
  UnityEngine_Vector2_Fields UStack_1f8;
  undefined8 uStack_1f0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_1e0;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  MethodInfo *pMStack_178;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_170;
  UnityEngine_RectTransform_o *pUStack_168;
  System_Type_array *pSStack_160;
  UnityEngine_Vector2_Fields UStack_158;
  undefined8 uStack_150;
  System_Type_o *pSStack_148;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_140;
  UnityEngine_RectTransform_o *pUStack_138;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_130;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_128;
  UnityEngine_Vector2_Fields UStack_120;
  undefined8 uStack_118;
  System_Type_o *pSStack_108;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_100;
  System_Type_array *pSStack_f8;
  System_String_c *pSStack_f0;
  System_String_o *pSStack_e8;
  undefined8 *puStack_e0;
  float fStack_cc;
  long lStack_c8;
  undefined1 auStack_b8 [16];
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  Il2CppClass *pIStack_98;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_90;
  long *plStack_88;
  Il2CppObject *pIStack_80;
  UnityEngine_Texture2D_o **ppUStack_78;
  undefined1 auStack_70 [16];
  Il2CppObject *pIStack_58;
  UnityEngine_UI_RawImage_o *pUStack_50;
  UnityEngine_Texture2D_o **ppUStack_48;
  undefined8 *puStack_40;
  
  if (g_data_057a9e02 == '\0') {
    puStack_40 = (undefined8 *)0x3b710f3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_int_int_Color32);
    puStack_40 = (undefined8 *)0x3b710ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color32_RefreshTextures_b__30_0);
    puStack_40 = (undefined8 *)0x3b7110b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    puStack_40 = (undefined8 *)0x3b71117;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color32_RefreshTextures_b__30_1);
    puStack_40 = (undefined8 *)0x3b71123;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color32_RefreshTextures_b__2);
    puStack_40 = (undefined8 *)0x3b7112f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    puStack_40 = (undefined8 *)0x3b7113b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9e02 = '\x01';
  }
  pUVar3 = (__this->fields)._square;
  puVar24 = &TypeInfo_Func_int_int_Color32;
  puStack_40 = (undefined8 *)0x3b7115c;
  pSVar13 = (System_Func_int__int__Color32__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_int_int_Color32);
  puStack_40 = (undefined8 *)0x3b71176;
  System_Func_int__int__Color32____ctor();
  puStack_40 = (undefined8 *)0x3b7118e;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
            (&(__this->fields)._squareTexture,pUVar3,0x40,0x40,pSVar13,in_R9);
  pUVar3 = (__this->fields)._hue;
  plVar26 = &TypeInfo_c;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    puStack_40 = (undefined8 *)0x3b711ac;
    il2cpp_runtime_helper_02337ed0();
  }
  texture = (System_String_c **)&(__this->fields)._hueTexture;
  pSVar13 = *(System_Func_int__int__Color32__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar13 == (System_Func_int__int__Color32__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      puStack_40 = (undefined8 *)0x3b711d3;
      il2cpp_runtime_helper_02337ed0();
    }
    plVar26 = (long *)**(undefined8 **)(TypeInfo_c + 0xb8);
    puStack_40 = (undefined8 *)0x3b711ea;
    pSVar13 = (System_Func_int__int__Color32__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_int_int_Color32);
    puStack_40 = (undefined8 *)0x3b71204;
    System_Func_int__int__Color32____ctor();
    lVar16 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_int__int__Color32__o **)(lVar16 + 8) = pSVar13;
    puStack_40 = (undefined8 *)0x3b71225;
    il2cpp_runtime_helper_022b4080(lVar16 + 8,pSVar13);
  }
  puStack_40 = (undefined8 *)0x3b7123d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
            ((UnityEngine_Texture2D_o **)texture,pUVar3,0x80,1,pSVar13,in_R9);
  x = (__this->fields)._alpha;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    puStack_40 = (undefined8 *)0x3b7125a;
    il2cpp_runtime_helper_02337ed0();
  }
  puStack_40 = (undefined8 *)0x3b71266;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return;
  }
  puStack_40 = (undefined8 *)0x3b71279;
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  parent = (System_String_c *)0x0;
  puStack_40 = (undefined8 *)0x3b71286;
  pIVar19 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(undefined4 *)&__this_00[1].klass = *(undefined4 *)&(__this->fields)._value.fields;
    pUVar3 = (__this->fields)._alpha;
    puStack_40 = (undefined8 *)0x3b712a5;
    pSVar13 = (System_Func_int__int__Color32__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_int_int_Color32);
    puStack_40 = (undefined8 *)0x3b712bf;
    System_Func_int__int__Color32____ctor();
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
              (&(__this->fields)._alphaTexture,pUVar3,0x180,0x16,pSVar13,in_R9);
    return;
  }
  puStack_40 = (undefined8 *)0x3b712f9;
  il2cpp_runtime_helper_022b2c90();
  puStack_40 = &TypeInfo_Func_int_int_Color32;
  pIStack_58 = __this_00;
  pUStack_50 = pUVar3;
  ppUStack_48 = (UnityEngine_Texture2D_o **)texture;
  if (g_data_057a9e03 == '\0') {
    ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b71322;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e03 = '\x01';
  }
  __this_03 = pIVar19[3].monitor;
  auStack_70._8_8_ = 0;
  auStack_70._0_8_ = pIVar19[8].klass;
  if (g_data_057a9e08 == '\0') {
    ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b7134f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9e08 = '\x01';
  }
  if (__this_03 == (Il2CppClass *)0x0) {
label_03b7150f:
    ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b71514;
    name = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    parent = (System_String_c *)0x0;
    ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b71369;
    name = (System_String_o *)
           UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
    if (name == (System_String_o *)0x0) goto label_03b7150f;
    texture = &TypeInfo_RectTransform;
    parent = TypeInfo_RectTransform;
    if (name->klass != TypeInfo_RectTransform) goto label_03b71514;
    ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b7138f;
    UVar38 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)name,(MethodInfo *)0x0);
    in_XMM3_Da = 0.0;
    in_XMM3_Db = 0;
    in_XMM3_Dc = 0;
    in_XMM3_Dd = 0;
    in_XMM2 = minps(_DAT_00d19fc0,auStack_70);
    parent = (System_String_c *)0x0;
    ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b713b4;
    UVar7.fields.y = (float)(-(uint)(0.0 <= auStack_70._4_4_) & in_XMM2._4_4_) * UVar38.fields.m_Height;
    UVar7.fields.x = (float)(-(uint)(0.0 <= auStack_70._0_4_) & in_XMM2._0_4_) * UVar38.fields.m_Width;
    UnityEngine_RectTransform__set_anchoredPosition
              ((UnityEngine_RectTransform_o *)__this_03,UVar7,(MethodInfo *)0x0);
    __this_03 = pIVar19[4].klass;
    auStack_70 = ZEXT416(*(uint *)((long)&pIVar19[7].monitor + 4));
    if (g_data_057a9e08 == '\0') {
      ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b713d7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      g_data_057a9e08 = '\x01';
    }
    if (__this_03 == (Il2CppClass *)0x0) goto label_03b7150f;
    parent = (System_String_c *)0x0;
    ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b713f1;
    name = (System_String_o *)
           UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
    if (name == (System_String_o *)0x0) goto label_03b7150f;
    parent = TypeInfo_RectTransform;
    if (name->klass == TypeInfo_RectTransform) {
      ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b71410;
      UVar38 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)name,(MethodInfo *)0x0);
      in_XMM3_Da = 1.0;
      if ((float)auStack_70._0_4_ <= 1.0) {
        in_XMM3_Da = (float)auStack_70._0_4_;
      }
      in_XMM2 = ZEXT816(0);
      in_XMM3_Da = (float)(-(uint)(0.0 <= (float)auStack_70._0_4_) & (uint)in_XMM3_Da);
      in_XMM3_Db = 0;
      in_XMM3_Dc = 0;
      in_XMM3_Dd = 0;
      ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b71443;
      value.fields.y = UVar38.fields.m_Height * 0.5;
      value.fields.x = in_XMM3_Da * UVar38.fields.m_Width;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)__this_03,value,(MethodInfo *)0x0);
      pUVar4 = pIVar19[4].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b7145f;
        il2cpp_runtime_helper_02337ed0();
      }
      parent = (System_String_c *)0x0;
      ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b7146b;
      bVar12 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        return;
      }
      __this_03 = pIVar19[4].monitor;
      bVar2 = *(byte *)((long)&pIVar19[7].monitor + 3);
      puVar24 = (undefined8 *)(ulong)bVar2;
      if (g_data_057a9e08 == '\0') {
        ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b71491;
        il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
        g_data_057a9e08 = '\x01';
      }
      if (__this_03 != (Il2CppClass *)0x0) {
        parent = (System_String_c *)0x0;
        ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b714a7;
        name = (System_String_o *)
               UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
        if (name != (System_String_o *)0x0) {
          parent = TypeInfo_RectTransform;
          if (name->klass == TypeInfo_RectTransform) {
            auStack_70._0_4_ = (float)bVar2 / 255.0;
            ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b714d2;
            UVar38 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)name,(MethodInfo *)0x0);
            fVar27 = 1.0;
            if ((float)auStack_70._0_4_ <= 1.0) {
              fVar27 = (float)auStack_70._0_4_;
            }
            value_00.fields.y = UVar38.fields.m_Height * 0.5;
            value_00.fields.x = fVar27 * UVar38.fields.m_Width;
            UnityEngine_RectTransform__set_anchoredPosition
                      ((UnityEngine_RectTransform_o *)__this_03,value_00,(MethodInfo *)0x0);
            return;
          }
          goto label_03b71514;
        }
      }
      goto label_03b7150f;
    }
  }
label_03b71514:
  ppUStack_78 = (UnityEngine_Texture2D_o **)0x3b7151c;
  lStack_c8 = il2cpp_runtime_helper_022b2fd0();
  fStack_cc = extraout_XMM1_Da;
  auStack_b8 = in_XMM2;
  fStack_a8 = in_XMM3_Da;
  uStack_a4 = in_XMM3_Db;
  uStack_a0 = in_XMM3_Dc;
  uStack_9c = in_XMM3_Dd;
  pIStack_98 = __this_03;
  pGStack_90 = __this;
  plStack_88 = plVar26;
  pIStack_80 = pIVar19;
  ppUStack_78 = (UnityEngine_Texture2D_o **)texture;
  if (g_data_057a9e04 == '\0') {
    puStack_e0 = (undefined8 *)0x3b7155d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_AddComponent_RawImage);
    puStack_e0 = (undefined8 *)0x3b71569;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    puStack_e0 = (undefined8 *)0x3b71575;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    puStack_e0 = (undefined8 *)0x3b71581;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    puStack_e0 = (undefined8 *)0x3b7158d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057a9e04 = '\x01';
  }
  puStack_e0 = (undefined8 *)0x3b715a8;
  pSVar14 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar21 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    puStack_e0 = (undefined8 *)0x3b715d1;
    il2cpp_runtime_helper_02337ed0();
  }
  puStack_e0 = (undefined8 *)0x3b715db;
  pSVar15 = System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
  if (pSVar14 == (System_Type_array *)0x0) {
label_03b71773:
    puStack_e0 = (undefined8 *)0x3b71778;
    il2cpp_runtime_helper_022b2c90();
label_03b71778:
    puStack_e0 = (undefined8 *)0x3b7177d;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar15;
    if (pSVar15 == (System_Type_o *)0x0) {
label_03b71605:
      if ((int)pSVar14->max_length != 0) {
        pSVar14->m_Items[0] = pSVar15;
        puStack_e0 = (undefined8 *)0x3b71623;
        il2cpp_runtime_helper_022b4080(pSVar14->m_Items,pSVar15);
        puStack_e0 = (undefined8 *)0x3b71632;
        __this = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        puStack_e0 = (undefined8 *)0x3b71645;
        UnityEngine_GameObject___ctor_4dfc440
                  ((UnityEngine_GameObject_o *)__this,name,pSVar14,(MethodInfo *)0x0);
        if (__this != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
          puStack_e0 = (undefined8 *)0x3b71658;
          pUVar17 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
            puStack_e0 = (undefined8 *)0x3b71670;
            UnityEngine_Transform__SetParent_4e09e30
                      (pUVar17,(UnityEngine_Transform_o *)parent,0,(MethodInfo *)0x0);
            puStack_e0 = (undefined8 *)0x3b71682;
            pUVar18 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (pUVar18 != (UnityEngine_RectTransform_o *)0x0) {
              puStack_e0 = (undefined8 *)0x3b7169b;
              UnityEngine_RectTransform__set_anchorMin(pUVar18,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
              puStack_e0 = (undefined8 *)0x3b716c9;
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar18,(UnityEngine_Vector2_o)
                                 (CONCAT44(-(uint)(22.0 < fStack_cc),0x3f800000) & 0x3f800000ffffffff),
                         (MethodInfo *)0x0);
              puStack_e0 = (undefined8 *)0x3b716e3;
              UnityEngine_RectTransform__set_offsetMin
                        (pUVar18,(UnityEngine_Vector2_o)(lStack_c8 << 0x20),(MethodInfo *)0x0);
              fVar27 = 0.0;
              if (fStack_cc <= 22.0) {
                fVar27 = (float)lStack_c8 + fStack_cc;
              }
              puStack_e0 = (undefined8 *)0x3b71713;
              UnityEngine_RectTransform__set_offsetMax
                        (pUVar18,(UnityEngine_Vector2_o)((ulong)(uint)fVar27 << 0x20),(MethodInfo *)0x0);
              puStack_e0 = (undefined8 *)0x3b71725;
              pIVar19 = UnityEngine_GameObject__AddComponent_object_
                                  ((UnityEngine_GameObject_o *)__this,MethodInfo_RawImage_AddComponent_RawImage);
              SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pUVar18;
              if (pIVar19 != (Il2CppObject *)0x0) {
                puStack_e0 = (undefined8 *)0x3b7174a;
                (*pIVar19->klass->vtable[0x17].methodPtr)
                          (auStack_b8._0_4_,pIVar19,pIVar19->klass->vtable[0x17].method);
                puStack_e0 = (undefined8 *)0x3b71762;
                (*pIVar19->klass->vtable[0x19].methodPtr)(pIVar19,1,pIVar19->klass->vtable[0x19].method);
                return;
              }
            }
          }
        }
        goto label_03b71773;
      }
      goto label_03b71778;
    }
    puStack_e0 = (undefined8 *)0x3b715fc;
    lVar16 = il2cpp_runtime_helper_023051f0(pSVar15);
    if (lVar16 != 0) goto label_03b71605;
  }
  puStack_e0 = (undefined8 *)0x3b71782;
  pGVar20 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_0231b270();
  pUVar18 = (UnityEngine_RectTransform_o *)0x0;
  puStack_e0 = (undefined8 *)0x3b7178c;
  il2cpp_runtime_helper_022b2b10();
  pSStack_108 = (System_Type_o *)SVar21.fields.value;
  pGStack_100 = __this;
  pSStack_f8 = pSVar14;
  pSStack_f0 = parent;
  pSStack_e8 = name;
  puStack_e0 = puVar24;
  if (g_data_057a9e05 == '\0') {
    pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717bc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717c8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717d4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717e0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717ec;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717f8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71804;
    il2cpp_runtime_helper_023445d0(&"surface");
    pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71810;
    il2cpp_runtime_helper_023445d0(&"shadow");
    pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7181c;
    il2cpp_runtime_helper_023445d0(&"AoTTG Color Marker");
    g_data_057a9e05 = '\x01';
  }
  pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71837;
  pSVar14 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar21 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71860;
    il2cpp_runtime_helper_02337ed0();
  }
  pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7186a;
  pSVar15 = System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
  if (pSVar14 == (System_Type_array *)0x0) {
label_03b71a7e:
    pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a83;
    il2cpp_runtime_helper_022b2c90();
label_03b71a83:
    pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a88;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar15;
    if (pSVar15 == (System_Type_o *)0x0) {
label_03b71894:
      if ((int)pSVar14->max_length != 0) {
        pSVar14->m_Items[0] = pSVar15;
        pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718b1;
        il2cpp_runtime_helper_022b4080(pSVar14->m_Items,pSVar15);
        pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718c0;
        __this = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718da;
        UnityEngine_GameObject___ctor_4dfc440
                  ((UnityEngine_GameObject_o *)__this,"AoTTG Color Marker",pSVar14,(MethodInfo *)0x0);
        if (__this != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
          pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718ed;
          pUVar17 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
            pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71905;
            UnityEngine_Transform__SetParent_4e09e30
                      (pUVar17,(UnityEngine_Transform_o *)pUVar18,0,(MethodInfo *)0x0);
            pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71917;
            pUVar18 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (g_data_057a694c == '\0') {
              pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7192f;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
              g_data_057a694c = '\x01';
            }
            if (pUVar18 != (UnityEngine_RectTransform_o *)0x0) {
              UStack_120 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
              uStack_118 = 0;
              pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71962;
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar18,(UnityEngine_Vector2_o)UStack_120,(MethodInfo *)0x0);
              pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71970;
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar18,(UnityEngine_Vector2_o)UStack_120,(MethodInfo *)0x0);
              pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71981;
              UnityEngine_RectTransform__set_pivot
                        (pUVar18,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71992;
              UnityEngine_RectTransform__set_sizeDelta
                        (pUVar18,(UnityEngine_Vector2_o)0x4190000041900000,(MethodInfo *)0x0);
              pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719a4;
              pMVar23 = MethodInfo_Image_AddComponent_Image;
              SVar21.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   UnityEngine_GameObject__AddComponent_object_
                             ((UnityEngine_GameObject_o *)__this,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image);
              pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719af;
              value_01 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite(pGVar20,pMVar23);
              if (SVar21.fields.value != 0) {
                pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719c5;
                UnityEngine_UI_Image__set_sprite
                          ((UnityEngine_UI_Image_o *)SVar21.fields.value,value_01,(MethodInfo *)0x0);
                if (__this_02 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                  pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719ec;
                  UVar39.fields.b = 1.0;
                  UVar39.fields.a = 1.0;
                  UVar39.fields.r = 1.0;
                  UVar39.fields.g = 1.0;
                  UVar39 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                     (__this_02,"surface",UVar39,(MethodInfo *)0x0);
                  pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719ff;
                  (*(((UnityEngine_UI_Image_o *)SVar21.fields.value)->klass->vtable)._23_set_color.methodPtr)
                            (UVar39.fields.r,UVar39.fields._8_8_,SVar21.fields.value,
                             (((UnityEngine_UI_Image_o *)SVar21.fields.value)->klass->vtable)._23_set_color.
                             method);
                  pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a14;
                  (*(((UnityEngine_UI_Image_o *)SVar21.fields.value)->klass->vtable)._25_set_raycastTarget.
                    methodPtr)(SVar21.fields.value,0,
                               (((UnityEngine_UI_Image_o *)SVar21.fields.value)->klass->vtable).
                               _25_set_raycastTarget.method);
                  pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a26;
                  pGVar22 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                            UnityEngine_GameObject__AddComponent_object_
                                      ((UnityEngine_GameObject_o *)__this,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
                  pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a47;
                  UVar39 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                     (__this_02,"shadow",
                                      (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                                      (MethodInfo *)0x0);
                  SVar21.fields.value = (System_RuntimeTypeHandle_Fields)0;
                  if (pGVar22 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                    pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a6c;
                    Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
                              (pGVar22,UVar39,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,0,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
        goto label_03b71a7e;
      }
      goto label_03b71a83;
    }
    pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7188b;
    lVar16 = il2cpp_runtime_helper_023051f0(pSVar15);
    if (lVar16 != 0) goto label_03b71894;
  }
  pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a8d;
  __this_01 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_0231b270();
  __this_04 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
  pGStack_128 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a97;
  il2cpp_runtime_helper_022b2b10();
  pSStack_148 = (System_Type_o *)SVar21.fields.value;
  pGStack_140 = __this;
  pUStack_138 = pUVar18;
  pGStack_130 = pGVar20;
  pGStack_128 = __this_02;
  if (g_data_057a9e06 == '\0') {
    pSStack_160 = (System_Type_array *)0x3b71ac8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    pSStack_160 = (System_Type_array *)0x3b71ad4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    pSStack_160 = (System_Type_array *)0x3b71ae0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pSStack_160 = (System_Type_array *)0x3b71aec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pSStack_160 = (System_Type_array *)0x3b71af8;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pSStack_160 = (System_Type_array *)0x3b71b04;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pSStack_160 = (System_Type_array *)0x3b71b10;
    il2cpp_runtime_helper_023445d0(&"AoTTG Color Slider Marker");
    pSStack_160 = (System_Type_array *)0x3b71b1c;
    il2cpp_runtime_helper_023445d0(&"shadow");
    g_data_057a9e06 = '\x01';
  }
  pSStack_160 = (System_Type_array *)0x3b71b37;
  components.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar21 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pSStack_160 = (System_Type_array *)0x3b71b60;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_160 = (System_Type_array *)0x3b71b6a;
  pMVar23 = (MethodInfo *)System_Type__GetTypeFromHandle(SVar21,(MethodInfo *)0x0);
  if (components.rgctx_data == (Il2CppRGCTXData *)0x0) {
label_03b71d51:
    pSStack_160 = (System_Type_array *)0x3b71d56;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pMVar23;
    if (pMVar23 != (MethodInfo *)0x0) {
      pSStack_160 = (System_Type_array *)0x3b71b8b;
      lVar16 = il2cpp_runtime_helper_023051f0(pMVar23);
      if (lVar16 == 0) goto label_03b71d5b;
    }
    if (*(int *)(components.rgctx_data + 3) != 0) {
      components.rgctx_data[4].method = pMVar23;
      pSStack_160 = (System_Type_array *)0x3b71bb2;
      il2cpp_runtime_helper_022b4080(components.rgctx_data + 4,pMVar23);
      pSStack_160 = (System_Type_array *)0x3b71bc1;
      __this = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      pSStack_160 = (System_Type_array *)0x3b71bdb;
      UnityEngine_GameObject___ctor_4dfc440
                ((UnityEngine_GameObject_o *)__this,"AoTTG Color Slider Marker",(System_Type_array *)components.rgctx_data,
                 (MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        pSStack_160 = (System_Type_array *)0x3b71bee;
        pUVar17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
        if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
          pSStack_160 = (System_Type_array *)0x3b71c06;
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar17,(UnityEngine_Transform_o *)__this_01,0,(MethodInfo *)0x0);
          pSStack_160 = (System_Type_array *)0x3b71c18;
          __this_01 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
          if (g_data_057a694c == '\0') {
            pSStack_160 = (System_Type_array *)0x3b71c30;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
            UStack_158 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
            uStack_150 = 0;
            pSStack_160 = (System_Type_array *)0x3b71c63;
            UnityEngine_RectTransform__set_anchorMax
                      (__this_01,(UnityEngine_Vector2_o)UStack_158,(MethodInfo *)0x0);
            pSStack_160 = (System_Type_array *)0x3b71c71;
            UnityEngine_RectTransform__set_anchorMin
                      (__this_01,(UnityEngine_Vector2_o)UStack_158,(MethodInfo *)0x0);
            pSStack_160 = (System_Type_array *)0x3b71c82;
            UnityEngine_RectTransform__set_pivot
                      (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
            pSStack_160 = (System_Type_array *)0x3b71c93;
            UnityEngine_RectTransform__set_sizeDelta
                      (__this_01,(UnityEngine_Vector2_o)0x4200000040800000,(MethodInfo *)0x0);
            pSStack_160 = (System_Type_array *)0x3b71ca5;
            pIVar19 = UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)__this,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image);
            if (pIVar19 != (Il2CppObject *)0x0) {
              pSStack_160 = (System_Type_array *)0x3b71cce;
              (*pIVar19->klass->vtable[0x17].methodPtr)(pIVar19,pIVar19->klass->vtable[0x17].method);
              pSStack_160 = (System_Type_array *)0x3b71ce3;
              (*pIVar19->klass->vtable[0x19].methodPtr)(pIVar19,0,pIVar19->klass->vtable[0x19].method);
              pSStack_160 = (System_Type_array *)0x3b71cf5;
              pGVar22 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                        UnityEngine_GameObject__AddComponent_object_
                                  ((UnityEngine_GameObject_o *)__this,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
              SVar21.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pIVar19;
              if (__this_04 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                pSStack_160 = (System_Type_array *)0x3b71d1b;
                UVar39 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                   (__this_04,"shadow",
                                    (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                                    (MethodInfo *)0x0);
                SVar21.fields.value = (System_RuntimeTypeHandle_Fields)0;
                if (pGVar22 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                  pSStack_160 = (System_Type_array *)0x3b71d40;
                  Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
                            (pGVar22,UVar39,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,0,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto label_03b71d51;
    }
  }
  pSStack_160 = (System_Type_array *)0x3b71d5b;
  il2cpp_runtime_helper_022b2ca0();
label_03b71d5b:
  pSStack_160 = (System_Type_array *)0x3b71d60;
  pGVar20 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_0231b270();
  __this_05 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  pSStack_160 = (System_Type_array *)0x3b71d6a;
  il2cpp_runtime_helper_022b2b10();
  __this_06 = (_union_14)(pGVar20->fields)._square;
  pMStack_178 = (MethodInfo *)SVar21.fields.value;
  pGStack_170 = __this_04;
  pUStack_168 = __this_01;
  pSStack_160 = pSVar14;
  if (__this_06.genericMethod != (UnityEngine_UI_RawImage_o *)0x0) {
    pGStack_1d8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71d94;
    pUVar18 = UnityEngine_UI_Graphic__get_rectTransform(__this_06.genericMethod,(MethodInfo *)0x0);
    pGStack_1d8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71d9f;
    UVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar18,__this_05,method_00);
    auStack_1c0._8_4_ = extraout_XMM0_Dc;
    auStack_1c0._0_4_ = UVar7.fields.x;
    auStack_1c0._4_4_ = UVar7.fields.y;
    auStack_1c0._12_4_ = extraout_XMM0_Dd;
    auStack_1d0._4_4_ = UVar7.fields.y;
    auStack_1d0._0_4_ = UVar7.fields.y;
    uStack_1c8 = extraout_XMM0_Dc;
    uStack_1c4 = extraout_XMM0_Dd;
    fVar27 = (pGVar20->fields)._value.fields.H;
    auStack_1b0 = ZEXT416((uint)fVar27);
    bVar2 = (pGVar20->fields)._value.fields.A;
    pGStack_1d8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71dc2;
    fVar27 = floorf(fVar27);
    auStack_1b0._0_4_ = (float)auStack_1b0._0_4_ - fVar27;
    auVar30 = ZEXT812(0x3f800000);
    if ((float)auStack_1b0._0_4_ <= 1.0) {
      auVar30._4_8_ = 0;
      auVar30._0_4_ = auStack_1b0._0_4_;
    }
    auStack_1b0._0_4_ = -(uint)(0.0 <= (float)auStack_1b0._0_4_) & auVar30._0_4_;
    auStack_1b0._4_4_ = 0;
    auStack_1b0._8_4_ = auStack_1b0._8_4_ & auVar30._8_4_;
    auStack_1b0._12_4_ = 0;
    auVar31 = ZEXT812(0x3f800000);
    if ((float)auStack_1c0._0_4_ <= 1.0) {
      auVar31._4_8_ = 0;
      auVar31._0_4_ = auStack_1c0._0_4_;
    }
    fVar35 = (float)(-(uint)(0.0 <= (float)auStack_1c0._0_4_) & auVar31._0_4_);
    uVar37 = auStack_1c0._8_4_ & auVar31._8_4_;
    auVar34 = ZEXT416(uVar37) << 0x40;
    auStack_1c0._4_4_ = 0;
    auStack_1c0._0_4_ = fVar35;
    auStack_1c0._8_4_ = uVar37;
    auStack_1c0._12_4_ = 0;
    fVar27 = 1.0;
    if ((float)auStack_1d0._0_4_ <= 1.0) {
      fVar27 = (float)auStack_1d0._0_4_;
    }
    fVar27 = (float)(-(uint)(0.0 <= (float)auStack_1d0._0_4_) & (uint)fVar27);
    _auStack_1d0 = ZEXT416((uint)fVar27);
    pMVar23 = (MethodInfo *)0x1;
    pGStack_1d8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e29;
    UVar39 = UnityEngine_Color__HSVToRGB_4de5b40((float)auStack_1b0._0_4_,fVar35,fVar27,1,(MethodInfo *)0x0);
    uStack_188 = auVar34._8_8_;
    uStack_190 = UVar39.fields._8_8_;
    auStack_1a0._8_4_ = extraout_XMM0_Dc_00;
    auStack_1a0._0_8_ = UVar39.fields._0_8_;
    auStack_1a0._12_4_ = extraout_XMM0_Dd_00;
    pGStack_1d8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e38;
    bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar39.fields.r,pMVar23);
    pGStack_1d8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e49;
    bVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)auStack_1a0._4_4_,pMVar23);
    pGStack_1d8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e56;
    bVar11 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)uStack_190,pMVar23);
    pMVar23 = (MethodInfo *)
              ((ulong)bVar9 | (ulong)bVar2 << 0x18 | (ulong)bVar10 << 8 | (ulong)bVar11 << 0x10 |
              (ulong)(uint)auStack_1b0._0_4_ << 0x20);
    *(MethodInfo **)&(pGVar20->fields)._value.fields = pMVar23;
    (pGVar20->fields)._value.fields.S = (float)auStack_1c0._0_4_;
    (pGVar20->fields)._value.fields.V = (float)auStack_1d0._0_4_;
    pGStack_1d8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71ea3;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar20,pMVar23);
    pGStack_1d8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71eab;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar20,pMVar23);
    pSVar5 = (pGVar20->fields).Changed;
    if (pSVar5 == (System_Action_GisketchUIColorPickerValue__o *)0x0) {
      return;
    }
    uVar1 = (pGVar20->fields)._value.fields.S;
    uVar6._0_1_ = (pGVar20->fields)._value.fields.R;
    uVar6._1_1_ = (pGVar20->fields)._value.fields.G;
    uVar6._2_1_ = (pGVar20->fields)._value.fields.B;
    uVar6._3_1_ = (pGVar20->fields)._value.fields.A;
    uVar6._4_4_ = (pGVar20->fields)._value.fields.H;
    vtableDispatch = (code *)(pSVar5->fields).invoke_impl;
    (*vtableDispatch)
              (uVar1,(pSVar5->fields).method_code,uVar6,(pSVar5->fields).method,vtableDispatch);
    return;
  }
  pGStack_1d8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71eeb;
  il2cpp_runtime_helper_022b2c90();
  eventData = __this_05;
  plVar26 = (long *)__this_06;
  pGStack_1e0 = pGVar20;
  pGStack_1d8 = __this_04;
  if (g_data_057a9e07 == '\0') {
    plVar26 = &TypeInfo_RectTransformUtility;
    pSStack_210 = (System_Type_array *)0x3b71f12;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e07 = '\x01';
  }
  UStack_200.x = 0.0;
  UStack_200.y = 0.0;
  cam = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  if (__this_05 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    UStack_1f8 = (__this_05->fields)._position_k__BackingField.fields;
    uStack_1f0 = 0;
    pSStack_210 = (System_Type_array *)0x3b71f42;
    cam = (UnityEngine_EventSystems_PointerEventData_o *)
          UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_05,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      pSStack_210 = (System_Type_array *)0x3b71f5d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_210 = (System_Type_array *)0x3b71f74;
    eventData = cam;
    plVar26 = (long *)__this_06;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (__this_06.genericMethod,(UnityEngine_Vector2_o)UStack_1f8,(UnityEngine_Camera_o *)cam,
               (UnityEngine_Vector2_o *)&UStack_200,(MethodInfo *)0x0);
    if (__this_06.genericMethod != (UnityEngine_UI_RawImage_o *)0x0) {
      pSStack_210 = (System_Type_array *)0x3b71f87;
      UnityEngine_RectTransform__get_rect(__this_06.genericMethod,(MethodInfo *)0x0);
      return;
    }
  }
  pSStack_210 = (System_Type_array *)0x3b72015;
  il2cpp_runtime_helper_022b2c90();
  __this_07 = *(UnityEngine_UI_Graphic_o **)&((UnityEngine_Color_o *)((long)plVar26 + 0x28))->fields;
  pUStack_228 = cam;
  _Stack_220 = __this_06;
  pUStack_218 = __this_01;
  pSStack_210 = pSVar14;
  if (__this_07 == (UnityEngine_UI_Graphic_o *)0x0) {
    pUStack_288 = (UnityEngine_RectTransform_o *)0x3b721a5;
    il2cpp_runtime_helper_022b2c90();
    __this_08 = *(UnityEngine_UI_Graphic_o **)&(__this_07->fields).m_Color.fields.b;
    _Stack_2a8 = (_union_14)plVar26;
    pGStack_2a0 = __this;
    _Stack_298.rgctx_data = components.rgctx_data;
    _Stack_290 = __this_06;
    pUStack_288 = __this_01;
    if (__this_08 == (UnityEngine_UI_Graphic_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9e01 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9e01 = '\x01';
      }
      pUVar4 = *(UnityEngine_Object_o **)&(__this_08->fields).m_SkipLayoutUpdate;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar23 = (MethodInfo *)0x0;
      bVar12 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        return;
      }
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
                ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_08,pMVar23);
      return;
    }
    pUVar18 = UnityEngine_UI_Graphic__get_rectTransform(__this_08,(MethodInfo *)0x0);
    UVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar18,eventData,method_02);
    if (g_data_057a7b0a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a7b0a = '\x01';
    }
    fVar27 = UVar7.fields.x * 255.0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    dVar29 = (double)fVar27;
    pMVar23 = (MethodInfo *)auStack_2d0;
    auStack_2c8._0_8_ = dVar29;
    dVar29 = modf(dVar29,(double *)pMVar23,(MethodInfo *)eventData);
    if (0.0 <= fVar27) {
      if ((dVar29 != 0.5) || (NAN(dVar29))) {
        auStack_2d0 = (undefined1  [8])floor((double)auStack_2c8._0_8_ + 0.5,pMVar23);
      }
      else if (((long)(double)auStack_2d0 & 1U) != 0) {
        auStack_2d0 = (undefined1  [8])((double)auStack_2d0 + 1.0);
      }
    }
    else if ((dVar29 != -0.5) || (NAN(dVar29))) {
      auStack_2d0 = (undefined1  [8])ceil((double)auStack_2c8._0_8_ + -0.5,pMVar23);
    }
    else if (((long)(double)auStack_2d0 & 1U) != 0) {
      auStack_2d0 = (undefined1  [8])((double)auStack_2d0 + -1.0);
    }
    bVar2 = *(byte *)&(__this_07->fields).m_OnDirtyLayoutCallback;
    bVar9 = *(byte *)((long)&(__this_07->fields).m_OnDirtyLayoutCallback + 1);
    bVar10 = *(byte *)((long)&(__this_07->fields).m_OnDirtyLayoutCallback + 2);
    fVar27 = *(float *)((long)&(__this_07->fields).m_OnDirtyLayoutCallback + 4);
    auStack_2b8 = ZEXT416((uint)fVar27);
    auStack_2c8 = ZEXT416(*(uint *)&(__this_07->fields).m_OnDirtyVertsCallback);
    fVar35 = *(float *)((long)&(__this_07->fields).m_OnDirtyVertsCallback + 4);
    fVar36 = floorf(fVar27);
    fVar36 = (float)auStack_2b8._0_4_ - fVar36;
    fVar27 = 1.0;
    if (fVar36 <= 1.0) {
      fVar27 = fVar36;
    }
    fVar8 = 1.0;
    if ((float)auStack_2c8._0_4_ <= 1.0) {
      fVar8 = (float)auStack_2c8._0_4_;
    }
    fVar28 = 1.0;
    if (fVar35 <= 1.0) {
      fVar28 = fVar35;
    }
    (__this_07->fields).m_OnDirtyLayoutCallback =
         (UnityEngine_Events_UnityAction_o *)
         ((ulong)bVar9 << 8 | (ulong)(uint)((int)(double)auStack_2d0 << 0x18) | (ulong)bVar2 |
          (ulong)bVar10 << 0x10 | (ulong)(-(uint)(0.0 <= fVar36) & (uint)fVar27) << 0x20);
    (__this_07->fields).m_OnDirtyVertsCallback =
         (UnityEngine_Events_UnityAction_o *)
         CONCAT44(-(uint)(0.0 <= fVar35) & (uint)fVar28,-(uint)(0.0 <= (float)auStack_2c8._0_4_) & (uint)fVar8
                 );
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_07,(MethodInfo *)eventData);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_07,(MethodInfo *)eventData);
    pUVar25 = (__this_07->fields).m_OnDirtyMaterialCallback;
    if (pUVar25 == (UnityEngine_Events_UnityAction_o *)0x0) {
      return;
    }
    vtableDispatch = (code *)(pUVar25->fields).invoke_impl;
    (*vtableDispatch)
              ((int)(__this_07->fields).m_OnDirtyVertsCallback,(pUVar25->fields).method_code,
               (__this_07->fields).m_OnDirtyLayoutCallback,(pUVar25->fields).method,vtableDispatch);
    return;
  }
  pUStack_288 = (UnityEngine_RectTransform_o *)0x3b72044;
  pUVar18 = UnityEngine_UI_Graphic__get_rectTransform(__this_07,(MethodInfo *)0x0);
  pUStack_288 = (UnityEngine_RectTransform_o *)0x3b7204f;
  UVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar18,eventData,method_01);
  auStack_260._8_4_ = extraout_XMM0_Dc_01;
  auStack_260._0_4_ = UVar7.fields.x;
  auStack_260._4_4_ = UVar7.fields.y;
  auStack_260._12_4_ = extraout_XMM0_Dd_01;
  auStack_270 = ZEXT416(*(uint *)((long)plVar26 + 0x80));
  auStack_280 = ZEXT416(*(uint *)((long)plVar26 + 0x84));
  bVar2 = *(byte *)((long)plVar26 + 0x7b);
  pUStack_288 = (UnityEngine_RectTransform_o *)0x3b7207c;
  fVar27 = floorf(UVar7.fields.x);
  fVar27 = (float)auStack_260._0_4_ - fVar27;
  auVar32 = ZEXT812(0x3f800000);
  if (fVar27 <= 1.0) {
    auVar32._4_8_ = 0;
    auVar32._0_4_ = fVar27;
  }
  fVar27 = (float)(-(uint)(0.0 <= fVar27) & auVar32._0_4_);
  auStack_260._4_4_ = 0;
  auStack_260._0_4_ = fVar27;
  auStack_260._8_4_ = auStack_260._8_4_ & auVar32._8_4_;
  auStack_260._12_4_ = 0;
  auVar33 = ZEXT812(0x3f800000);
  if ((float)auStack_270._0_4_ <= 1.0) {
    auVar33._4_8_ = 0;
    auVar33._0_4_ = auStack_270._0_4_;
  }
  fVar36 = (float)(-(uint)(0.0 <= (float)auStack_270._0_4_) & auVar33._0_4_);
  uVar37 = auStack_270._8_4_ & auVar33._8_4_;
  auVar34 = ZEXT416(uVar37) << 0x40;
  auStack_270._4_4_ = 0;
  auStack_270._0_4_ = fVar36;
  auStack_270._8_4_ = uVar37;
  auStack_270._12_4_ = 0;
  fVar35 = 1.0;
  if ((float)auStack_280._0_4_ <= 1.0) {
    fVar35 = (float)auStack_280._0_4_;
  }
  fVar35 = (float)(-(uint)(0.0 <= (float)auStack_280._0_4_) & (uint)fVar35);
  auStack_280 = ZEXT416((uint)fVar35);
  pMVar23 = (MethodInfo *)0x1;
  pUStack_288 = (UnityEngine_RectTransform_o *)0x3b720e3;
  UVar39 = UnityEngine_Color__HSVToRGB_4de5b40(fVar27,fVar36,fVar35,1,(MethodInfo *)0x0);
  uStack_238 = auVar34._8_8_;
  uStack_240 = UVar39.fields._8_8_;
  auStack_250._8_4_ = extraout_XMM0_Dc_02;
  auStack_250._0_8_ = UVar39.fields._0_8_;
  auStack_250._12_4_ = extraout_XMM0_Dd_02;
  pUStack_288 = (UnityEngine_RectTransform_o *)0x3b720f2;
  bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar39.fields.r,pMVar23);
  pUStack_288 = (UnityEngine_RectTransform_o *)0x3b72103;
  bVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)auStack_250._4_4_,pMVar23);
  pUStack_288 = (UnityEngine_RectTransform_o *)0x3b72110;
  bVar11 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)uStack_240,pMVar23);
  pUVar25 = (UnityEngine_Events_UnityAction_o *)
            ((ulong)bVar9 | (ulong)bVar2 << 0x18 | (ulong)bVar10 << 8 | (ulong)(uint)auStack_260._0_4_ << 0x20
            | (ulong)bVar11 << 0x10);
  *(UnityEngine_Events_UnityAction_o **)((long)plVar26 + 0x78) = pUVar25;
  *(UnityEngine_Events_UnityAction_o **)((long)plVar26 + 0x80) =
       (UnityEngine_Events_UnityAction_o *)CONCAT44(auStack_280._0_4_,auStack_270._0_4_);
  pUStack_288 = (UnityEngine_RectTransform_o *)0x3b7215d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)plVar26,(MethodInfo *)pUVar25);
  pUStack_288 = (UnityEngine_RectTransform_o *)0x3b72165;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)plVar26,(MethodInfo *)pUVar25);
  pUVar25 = *(UnityEngine_Events_UnityAction_o **)((long)plVar26 + 0x88);
  if (pUVar25 == (UnityEngine_Events_UnityAction_o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pUVar25->fields).invoke_impl;
  (*vtableDispatch)
            ((int)*(UnityEngine_Events_UnityAction_o **)((long)plVar26 + 0x80),(pUVar25->fields).method_code,
             *(UnityEngine_Events_UnityAction_o **)((long)plVar26 + 0x78),(pUVar25->fields).method,
             vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$RefreshMarkers
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x3b71300

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  byte bVar2;
  System_Action_GisketchUIColorPickerValue__o *pSVar3;
  undefined8 uVar4;
  code *vtableDispatch;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o UVar5;
  float fVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  bool_conflict bVar10;
  System_String_o *name;
  System_Type_array *pSVar11;
  System_Type_o *pSVar12;
  long lVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_RectTransform_o *pUVar15;
  Il2CppObject *pIVar16;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar17;
  System_RuntimeTypeHandle_o SVar18;
  UnityEngine_Sprite_o *value_01;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar19;
  UnityEngine_RectTransform_o *__this_00;
  _union_13 components;
  MethodInfo *pMVar20;
  UnityEngine_EventSystems_PointerEventData_o *cam;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  ulong unaff_RBP;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_02;
  UnityEngine_EventSystems_PointerEventData_o *__this_03;
  UnityEngine_EventSystems_PointerEventData_o *eventData;
  UnityEngine_Events_UnityAction_o *pUVar21;
  _union_14 __this_04;
  long *__this_05;
  UnityEngine_UI_Graphic_o *__this_06;
  UnityEngine_UI_Graphic_o *__this_07;
  UnityEngine_GameObject_o *unaff_R12;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM1_Da;
  double dVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
  undefined1 in_XMM2 [16];
  float in_XMM3_Da;
  float fVar31;
  undefined4 in_XMM3_Db;
  undefined4 in_XMM3_Dc;
  uint uVar32;
  undefined4 in_XMM3_Dd;
  UnityEngine_Rect_o UVar33;
  UnityEngine_Color_o UVar34;
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  _union_14 _Stack_270;
  UnityEngine_GameObject_o *pUStack_268;
  _union_13 _Stack_260;
  _union_14 _Stack_258;
  UnityEngine_RectTransform_o *pUStack_250;
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  undefined8 uStack_200;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_1f0;
  _union_14 _Stack_1e8;
  UnityEngine_RectTransform_o *pUStack_1e0;
  System_Type_array *pSStack_1d8;
  UnityEngine_Vector2_Fields UStack_1c8;
  UnityEngine_Vector2_Fields UStack_1c0;
  undefined8 uStack_1b8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_1a8;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_1a0;
  undefined1 auStack_198 [8];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  MethodInfo *pMStack_140;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_138;
  UnityEngine_RectTransform_o *pUStack_130;
  System_Type_array *pSStack_128;
  UnityEngine_Vector2_Fields UStack_120;
  undefined8 uStack_118;
  System_Type_o *pSStack_110;
  UnityEngine_GameObject_o *pUStack_108;
  UnityEngine_RectTransform_o *pUStack_100;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_f8;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_f0;
  UnityEngine_Vector2_Fields UStack_e8;
  undefined8 uStack_e0;
  System_Type_o *pSStack_d0;
  UnityEngine_GameObject_o *pUStack_c8;
  System_Type_array *pSStack_c0;
  System_String_c *pSStack_b8;
  System_String_o *pSStack_b0;
  ulong uStack_a8;
  float fStack_94;
  long lStack_90;
  undefined1 auStack_80 [16];
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  UnityEngine_RectTransform_o *pUStack_60;
  undefined1 local_38 [16];
  
  if (g_data_057a9e03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e03 = '\x01';
  }
  pUVar15 = (__this->fields)._squareMarker;
  local_38._0_4_ = (__this->fields)._value.fields.S;
  local_38._4_4_ = (__this->fields)._value.fields.V;
  local_38._8_8_ = 0;
  if (g_data_057a9e08 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9e08 = '\x01';
  }
  if (pUVar15 == (UnityEngine_RectTransform_o *)0x0) {
label_03b7150f:
    name = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    method = (MethodInfo *)0x0;
    name = (System_String_o *)
           UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pUVar15,(MethodInfo *)0x0);
    if (name == (System_String_o *)0x0) goto label_03b7150f;
    method = (MethodInfo *)TypeInfo_RectTransform;
    if (name->klass != TypeInfo_RectTransform) goto label_03b71514;
    UVar33 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)name,(MethodInfo *)0x0);
    in_XMM3_Da = 0.0;
    in_XMM3_Db = 0;
    in_XMM3_Dc = 0;
    in_XMM3_Dd = 0;
    in_XMM2 = minps(_DAT_00d19fc0,local_38);
    method = (MethodInfo *)0x0;
    UVar5.fields.y = (float)(-(uint)(0.0 <= (float)local_38._4_4_) & in_XMM2._4_4_) * UVar33.fields.m_Height;
    UVar5.fields.x = (float)(-(uint)(0.0 <= (float)local_38._0_4_) & in_XMM2._0_4_) * UVar33.fields.m_Width;
    UnityEngine_RectTransform__set_anchoredPosition(pUVar15,UVar5,(MethodInfo *)0x0);
    pUVar15 = (__this->fields)._hueMarker;
    fVar23 = (__this->fields)._value.fields.H;
    if (g_data_057a9e08 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      g_data_057a9e08 = '\x01';
    }
    if (pUVar15 == (UnityEngine_RectTransform_o *)0x0) goto label_03b7150f;
    method = (MethodInfo *)0x0;
    name = (System_String_o *)
           UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pUVar15,(MethodInfo *)0x0);
    if (name == (System_String_o *)0x0) goto label_03b7150f;
    method = (MethodInfo *)TypeInfo_RectTransform;
    if (name->klass == TypeInfo_RectTransform) {
      UVar33 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)name,(MethodInfo *)0x0);
      in_XMM3_Da = 1.0;
      if (fVar23 <= 1.0) {
        in_XMM3_Da = fVar23;
      }
      in_XMM2 = ZEXT816(0);
      in_XMM3_Da = (float)(-(uint)(0.0 <= fVar23) & (uint)in_XMM3_Da);
      in_XMM3_Db = 0;
      in_XMM3_Dc = 0;
      in_XMM3_Dd = 0;
      value.fields.y = UVar33.fields.m_Height * 0.5;
      value.fields.x = in_XMM3_Da * UVar33.fields.m_Width;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar15,value,(MethodInfo *)0x0);
      pUVar15 = (__this->fields)._alphaMarker;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)0x0;
      bVar10 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      pUVar15 = (__this->fields)._alphaMarker;
      bVar2 = (__this->fields)._value.fields.A;
      unaff_RBP = (ulong)bVar2;
      if (g_data_057a9e08 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
        g_data_057a9e08 = '\x01';
      }
      if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
        method = (MethodInfo *)0x0;
        name = (System_String_o *)
               UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pUVar15,(MethodInfo *)0x0);
        if (name != (System_String_o *)0x0) {
          method = (MethodInfo *)TypeInfo_RectTransform;
          if (name->klass == TypeInfo_RectTransform) {
            fVar22 = (float)bVar2 / 255.0;
            UVar33 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)name,(MethodInfo *)0x0);
            fVar23 = 1.0;
            if (fVar22 <= 1.0) {
              fVar23 = fVar22;
            }
            value_00.fields.y = UVar33.fields.m_Height * 0.5;
            value_00.fields.x = fVar23 * UVar33.fields.m_Width;
            UnityEngine_RectTransform__set_anchoredPosition(pUVar15,value_00,(MethodInfo *)0x0);
            return;
          }
          goto label_03b71514;
        }
      }
      goto label_03b7150f;
    }
  }
label_03b71514:
  lStack_90 = il2cpp_runtime_helper_022b2fd0();
  fStack_94 = extraout_XMM1_Da;
  auStack_80 = in_XMM2;
  fStack_70 = in_XMM3_Da;
  uStack_6c = in_XMM3_Db;
  uStack_68 = in_XMM3_Dc;
  uStack_64 = in_XMM3_Dd;
  pUStack_60 = pUVar15;
  if (g_data_057a9e04 == '\0') {
    uStack_a8 = 0x3b7155d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_AddComponent_RawImage);
    uStack_a8 = 0x3b71569;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    uStack_a8 = 0x3b71575;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    uStack_a8 = 0x3b71581;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    uStack_a8 = 0x3b7158d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057a9e04 = '\x01';
  }
  uStack_a8 = 0x3b715a8;
  pSVar11 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar18 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    uStack_a8 = 0x3b715d1;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_a8 = 0x3b715db;
  pSVar12 = System_Type__GetTypeFromHandle(SVar18,(MethodInfo *)0x0);
  if (pSVar11 == (System_Type_array *)0x0) {
label_03b71773:
    uStack_a8 = 0x3b71778;
    il2cpp_runtime_helper_022b2c90();
label_03b71778:
    uStack_a8 = 0x3b7177d;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    SVar18.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar12;
    if (pSVar12 == (System_Type_o *)0x0) {
label_03b71605:
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = pSVar12;
        uStack_a8 = 0x3b71623;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items,pSVar12);
        uStack_a8 = 0x3b71632;
        unaff_R12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        uStack_a8 = 0x3b71645;
        UnityEngine_GameObject___ctor_4dfc440(unaff_R12,name,pSVar11,(MethodInfo *)0x0);
        if (unaff_R12 != (UnityEngine_GameObject_o *)0x0) {
          uStack_a8 = 0x3b71658;
          pUVar14 = UnityEngine_GameObject__get_transform(unaff_R12,(MethodInfo *)0x0);
          if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
            uStack_a8 = 0x3b71670;
            UnityEngine_Transform__SetParent_4e09e30
                      (pUVar14,(UnityEngine_Transform_o *)method,0,(MethodInfo *)0x0);
            uStack_a8 = 0x3b71682;
            pUVar15 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent_object_(unaff_R12,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
              uStack_a8 = 0x3b7169b;
              UnityEngine_RectTransform__set_anchorMin(pUVar15,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
              uStack_a8 = 0x3b716c9;
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar15,(UnityEngine_Vector2_o)
                                 (CONCAT44(-(uint)(22.0 < fStack_94),0x3f800000) & 0x3f800000ffffffff),
                         (MethodInfo *)0x0);
              uStack_a8 = 0x3b716e3;
              UnityEngine_RectTransform__set_offsetMin
                        (pUVar15,(UnityEngine_Vector2_o)(lStack_90 << 0x20),(MethodInfo *)0x0);
              fVar23 = 0.0;
              if (fStack_94 <= 22.0) {
                fVar23 = (float)lStack_90 + fStack_94;
              }
              uStack_a8 = 0x3b71713;
              UnityEngine_RectTransform__set_offsetMax
                        (pUVar15,(UnityEngine_Vector2_o)((ulong)(uint)fVar23 << 0x20),(MethodInfo *)0x0);
              uStack_a8 = 0x3b71725;
              pIVar16 = UnityEngine_GameObject__AddComponent_object_(unaff_R12,MethodInfo_RawImage_AddComponent_RawImage);
              SVar18.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pUVar15;
              if (pIVar16 != (Il2CppObject *)0x0) {
                uStack_a8 = 0x3b7174a;
                (*pIVar16->klass->vtable[0x17].methodPtr)
                          (auStack_80._0_4_,pIVar16,pIVar16->klass->vtable[0x17].method);
                uStack_a8 = 0x3b71762;
                (*pIVar16->klass->vtable[0x19].methodPtr)(pIVar16,1,pIVar16->klass->vtable[0x19].method);
                return;
              }
            }
          }
        }
        goto label_03b71773;
      }
      goto label_03b71778;
    }
    uStack_a8 = 0x3b715fc;
    lVar13 = il2cpp_runtime_helper_023051f0(pSVar12);
    if (lVar13 != 0) goto label_03b71605;
  }
  uStack_a8 = 0x3b71782;
  pGVar17 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_0231b270();
  pUVar15 = (UnityEngine_RectTransform_o *)0x0;
  uStack_a8 = 0x3b7178c;
  il2cpp_runtime_helper_022b2b10();
  pSStack_d0 = (System_Type_o *)SVar18.fields.value;
  pUStack_c8 = unaff_R12;
  pSStack_c0 = pSVar11;
  pSStack_b8 = (System_String_c *)method;
  pSStack_b0 = name;
  uStack_a8 = unaff_RBP;
  if (g_data_057a9e05 == '\0') {
    pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717bc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717c8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717d4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717e0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717ec;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717f8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71804;
    il2cpp_runtime_helper_023445d0(&"surface");
    pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71810;
    il2cpp_runtime_helper_023445d0(&"shadow");
    pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7181c;
    il2cpp_runtime_helper_023445d0(&"AoTTG Color Marker");
    g_data_057a9e05 = '\x01';
  }
  pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71837;
  pSVar11 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar18 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71860;
    il2cpp_runtime_helper_02337ed0();
  }
  pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7186a;
  pSVar12 = System_Type__GetTypeFromHandle(SVar18,(MethodInfo *)0x0);
  if (pSVar11 == (System_Type_array *)0x0) {
label_03b71a7e:
    pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a83;
    il2cpp_runtime_helper_022b2c90();
label_03b71a83:
    pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a88;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    SVar18.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar12;
    if (pSVar12 == (System_Type_o *)0x0) {
label_03b71894:
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = pSVar12;
        pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718b1;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items,pSVar12);
        pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718c0;
        unaff_R12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718da;
        UnityEngine_GameObject___ctor_4dfc440(unaff_R12,"AoTTG Color Marker",pSVar11,(MethodInfo *)0x0);
        if (unaff_R12 != (UnityEngine_GameObject_o *)0x0) {
          pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718ed;
          pUVar14 = UnityEngine_GameObject__get_transform(unaff_R12,(MethodInfo *)0x0);
          if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
            pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71905;
            UnityEngine_Transform__SetParent_4e09e30
                      (pUVar14,(UnityEngine_Transform_o *)pUVar15,0,(MethodInfo *)0x0);
            pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71917;
            pUVar15 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent_object_(unaff_R12,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (g_data_057a694c == '\0') {
              pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7192f;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
              g_data_057a694c = '\x01';
            }
            if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
              UStack_e8 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
              uStack_e0 = 0;
              pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71962;
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar15,(UnityEngine_Vector2_o)UStack_e8,(MethodInfo *)0x0);
              pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71970;
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar15,(UnityEngine_Vector2_o)UStack_e8,(MethodInfo *)0x0);
              pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71981;
              UnityEngine_RectTransform__set_pivot
                        (pUVar15,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71992;
              UnityEngine_RectTransform__set_sizeDelta
                        (pUVar15,(UnityEngine_Vector2_o)0x4190000041900000,(MethodInfo *)0x0);
              pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719a4;
              pMVar20 = MethodInfo_Image_AddComponent_Image;
              SVar18.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   UnityEngine_GameObject__AddComponent_object_(unaff_R12,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image);
              pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719af;
              value_01 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite(pGVar17,pMVar20);
              if (SVar18.fields.value != 0) {
                pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719c5;
                UnityEngine_UI_Image__set_sprite
                          ((UnityEngine_UI_Image_o *)SVar18.fields.value,value_01,(MethodInfo *)0x0);
                if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                  pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719ec;
                  UVar34.fields.b = 1.0;
                  UVar34.fields.a = 1.0;
                  UVar34.fields.r = 1.0;
                  UVar34.fields.g = 1.0;
                  UVar34 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                     (__this_01,"surface",UVar34,(MethodInfo *)0x0);
                  pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719ff;
                  (*(((UnityEngine_UI_Image_o *)SVar18.fields.value)->klass->vtable)._23_set_color.methodPtr)
                            (UVar34.fields.r,UVar34.fields._8_8_,SVar18.fields.value,
                             (((UnityEngine_UI_Image_o *)SVar18.fields.value)->klass->vtable)._23_set_color.
                             method);
                  pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a14;
                  (*(((UnityEngine_UI_Image_o *)SVar18.fields.value)->klass->vtable)._25_set_raycastTarget.
                    methodPtr)(SVar18.fields.value,0,
                               (((UnityEngine_UI_Image_o *)SVar18.fields.value)->klass->vtable).
                               _25_set_raycastTarget.method);
                  pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a26;
                  pGVar19 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                            UnityEngine_GameObject__AddComponent_object_(unaff_R12,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
                  pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a47;
                  UVar34 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                     (__this_01,"shadow",
                                      (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                                      (MethodInfo *)0x0);
                  SVar18.fields.value = (System_RuntimeTypeHandle_Fields)0;
                  if (pGVar19 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                    pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a6c;
                    Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
                              (pGVar19,UVar34,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,0,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
        goto label_03b71a7e;
      }
      goto label_03b71a83;
    }
    pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7188b;
    lVar13 = il2cpp_runtime_helper_023051f0(pSVar12);
    if (lVar13 != 0) goto label_03b71894;
  }
  pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a8d;
  __this_00 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_0231b270();
  __this_02 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
  pGStack_f0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a97;
  il2cpp_runtime_helper_022b2b10();
  pSStack_110 = (System_Type_o *)SVar18.fields.value;
  pUStack_108 = unaff_R12;
  pUStack_100 = pUVar15;
  pGStack_f8 = pGVar17;
  pGStack_f0 = __this_01;
  if (g_data_057a9e06 == '\0') {
    pSStack_128 = (System_Type_array *)0x3b71ac8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    pSStack_128 = (System_Type_array *)0x3b71ad4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    pSStack_128 = (System_Type_array *)0x3b71ae0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pSStack_128 = (System_Type_array *)0x3b71aec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pSStack_128 = (System_Type_array *)0x3b71af8;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pSStack_128 = (System_Type_array *)0x3b71b04;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pSStack_128 = (System_Type_array *)0x3b71b10;
    il2cpp_runtime_helper_023445d0(&"AoTTG Color Slider Marker");
    pSStack_128 = (System_Type_array *)0x3b71b1c;
    il2cpp_runtime_helper_023445d0(&"shadow");
    g_data_057a9e06 = '\x01';
  }
  pSStack_128 = (System_Type_array *)0x3b71b37;
  components.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar18 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pSStack_128 = (System_Type_array *)0x3b71b60;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_128 = (System_Type_array *)0x3b71b6a;
  pMVar20 = (MethodInfo *)System_Type__GetTypeFromHandle(SVar18,(MethodInfo *)0x0);
  if (components.rgctx_data == (Il2CppRGCTXData *)0x0) {
label_03b71d51:
    pSStack_128 = (System_Type_array *)0x3b71d56;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    SVar18.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pMVar20;
    if (pMVar20 != (MethodInfo *)0x0) {
      pSStack_128 = (System_Type_array *)0x3b71b8b;
      lVar13 = il2cpp_runtime_helper_023051f0(pMVar20);
      if (lVar13 == 0) goto label_03b71d5b;
    }
    if (*(int *)(components.rgctx_data + 3) != 0) {
      components.rgctx_data[4].method = pMVar20;
      pSStack_128 = (System_Type_array *)0x3b71bb2;
      il2cpp_runtime_helper_022b4080(components.rgctx_data + 4,pMVar20);
      pSStack_128 = (System_Type_array *)0x3b71bc1;
      unaff_R12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      pSStack_128 = (System_Type_array *)0x3b71bdb;
      UnityEngine_GameObject___ctor_4dfc440
                (unaff_R12,"AoTTG Color Slider Marker",(System_Type_array *)components.rgctx_data,(MethodInfo *)0x0);
      if (unaff_R12 != (UnityEngine_GameObject_o *)0x0) {
        pSStack_128 = (System_Type_array *)0x3b71bee;
        pUVar14 = UnityEngine_GameObject__get_transform(unaff_R12,(MethodInfo *)0x0);
        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
          pSStack_128 = (System_Type_array *)0x3b71c06;
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar14,(UnityEngine_Transform_o *)__this_00,0,(MethodInfo *)0x0);
          pSStack_128 = (System_Type_array *)0x3b71c18;
          __this_00 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent_object_(unaff_R12,MethodInfo_RectTransform_GetComponent_RectTransform);
          if (g_data_057a694c == '\0') {
            pSStack_128 = (System_Type_array *)0x3b71c30;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            UStack_120 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
            uStack_118 = 0;
            pSStack_128 = (System_Type_array *)0x3b71c63;
            UnityEngine_RectTransform__set_anchorMax
                      (__this_00,(UnityEngine_Vector2_o)UStack_120,(MethodInfo *)0x0);
            pSStack_128 = (System_Type_array *)0x3b71c71;
            UnityEngine_RectTransform__set_anchorMin
                      (__this_00,(UnityEngine_Vector2_o)UStack_120,(MethodInfo *)0x0);
            pSStack_128 = (System_Type_array *)0x3b71c82;
            UnityEngine_RectTransform__set_pivot
                      (__this_00,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
            pSStack_128 = (System_Type_array *)0x3b71c93;
            UnityEngine_RectTransform__set_sizeDelta
                      (__this_00,(UnityEngine_Vector2_o)0x4200000040800000,(MethodInfo *)0x0);
            pSStack_128 = (System_Type_array *)0x3b71ca5;
            pIVar16 = UnityEngine_GameObject__AddComponent_object_
                                (unaff_R12,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image);
            if (pIVar16 != (Il2CppObject *)0x0) {
              pSStack_128 = (System_Type_array *)0x3b71cce;
              (*pIVar16->klass->vtable[0x17].methodPtr)(pIVar16,pIVar16->klass->vtable[0x17].method);
              pSStack_128 = (System_Type_array *)0x3b71ce3;
              (*pIVar16->klass->vtable[0x19].methodPtr)(pIVar16,0,pIVar16->klass->vtable[0x19].method);
              pSStack_128 = (System_Type_array *)0x3b71cf5;
              pGVar19 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                        UnityEngine_GameObject__AddComponent_object_(unaff_R12,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
              SVar18.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pIVar16;
              if (__this_02 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                pSStack_128 = (System_Type_array *)0x3b71d1b;
                UVar34 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                   (__this_02,"shadow",
                                    (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                                    (MethodInfo *)0x0);
                SVar18.fields.value = (System_RuntimeTypeHandle_Fields)0;
                if (pGVar19 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                  pSStack_128 = (System_Type_array *)0x3b71d40;
                  Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
                            (pGVar19,UVar34,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,0,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto label_03b71d51;
    }
  }
  pSStack_128 = (System_Type_array *)0x3b71d5b;
  il2cpp_runtime_helper_022b2ca0();
label_03b71d5b:
  pSStack_128 = (System_Type_array *)0x3b71d60;
  pGVar17 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_0231b270();
  __this_03 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  pSStack_128 = (System_Type_array *)0x3b71d6a;
  il2cpp_runtime_helper_022b2b10();
  __this_04 = (_union_14)(pGVar17->fields)._square;
  pMStack_140 = (MethodInfo *)SVar18.fields.value;
  pGStack_138 = __this_02;
  pUStack_130 = __this_00;
  pSStack_128 = pSVar11;
  if (__this_04.genericMethod != (UnityEngine_UI_RawImage_o *)0x0) {
    pGStack_1a0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71d94;
    pUVar15 = UnityEngine_UI_Graphic__get_rectTransform(__this_04.genericMethod,(MethodInfo *)0x0);
    pGStack_1a0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71d9f;
    UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar15,__this_03,method_00);
    auStack_188._8_4_ = extraout_XMM0_Dc;
    auStack_188._0_4_ = UVar5.fields.x;
    auStack_188._4_4_ = UVar5.fields.y;
    auStack_188._12_4_ = extraout_XMM0_Dd;
    auStack_198._4_4_ = UVar5.fields.y;
    auStack_198._0_4_ = UVar5.fields.y;
    uStack_190 = extraout_XMM0_Dc;
    uStack_18c = extraout_XMM0_Dd;
    fVar23 = (pGVar17->fields)._value.fields.H;
    auStack_178 = ZEXT416((uint)fVar23);
    bVar2 = (pGVar17->fields)._value.fields.A;
    pGStack_1a0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71dc2;
    fVar23 = floorf(fVar23);
    auStack_178._0_4_ = (float)auStack_178._0_4_ - fVar23;
    auVar26 = ZEXT812(0x3f800000);
    if ((float)auStack_178._0_4_ <= 1.0) {
      auVar26._4_8_ = 0;
      auVar26._0_4_ = auStack_178._0_4_;
    }
    auStack_178._0_4_ = -(uint)(0.0 <= (float)auStack_178._0_4_) & auVar26._0_4_;
    auStack_178._4_4_ = 0;
    auStack_178._8_4_ = auStack_178._8_4_ & auVar26._8_4_;
    auStack_178._12_4_ = 0;
    auVar27 = ZEXT812(0x3f800000);
    if ((float)auStack_188._0_4_ <= 1.0) {
      auVar27._4_8_ = 0;
      auVar27._0_4_ = auStack_188._0_4_;
    }
    fVar22 = (float)(-(uint)(0.0 <= (float)auStack_188._0_4_) & auVar27._0_4_);
    uVar32 = auStack_188._8_4_ & auVar27._8_4_;
    auVar30 = ZEXT416(uVar32) << 0x40;
    auStack_188._4_4_ = 0;
    auStack_188._0_4_ = fVar22;
    auStack_188._8_4_ = uVar32;
    auStack_188._12_4_ = 0;
    fVar23 = 1.0;
    if ((float)auStack_198._0_4_ <= 1.0) {
      fVar23 = (float)auStack_198._0_4_;
    }
    fVar23 = (float)(-(uint)(0.0 <= (float)auStack_198._0_4_) & (uint)fVar23);
    _auStack_198 = ZEXT416((uint)fVar23);
    pMVar20 = (MethodInfo *)0x1;
    pGStack_1a0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e29;
    UVar34 = UnityEngine_Color__HSVToRGB_4de5b40((float)auStack_178._0_4_,fVar22,fVar23,1,(MethodInfo *)0x0);
    uStack_150 = auVar30._8_8_;
    uStack_158 = UVar34.fields._8_8_;
    auStack_168._8_4_ = extraout_XMM0_Dc_00;
    auStack_168._0_8_ = UVar34.fields._0_8_;
    auStack_168._12_4_ = extraout_XMM0_Dd_00;
    pGStack_1a0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e38;
    bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar34.fields.r,pMVar20);
    pGStack_1a0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e49;
    bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)auStack_168._4_4_,pMVar20);
    pGStack_1a0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e56;
    bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)uStack_158,pMVar20);
    pMVar20 = (MethodInfo *)
              ((ulong)bVar7 | (ulong)bVar2 << 0x18 | (ulong)bVar8 << 8 | (ulong)bVar9 << 0x10 |
              (ulong)(uint)auStack_178._0_4_ << 0x20);
    *(MethodInfo **)&(pGVar17->fields)._value.fields = pMVar20;
    (pGVar17->fields)._value.fields.S = (float)auStack_188._0_4_;
    (pGVar17->fields)._value.fields.V = (float)auStack_198._0_4_;
    pGStack_1a0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71ea3;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar17,pMVar20);
    pGStack_1a0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71eab;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar17,pMVar20);
    pSVar3 = (pGVar17->fields).Changed;
    if (pSVar3 == (System_Action_GisketchUIColorPickerValue__o *)0x0) {
      return;
    }
    uVar1 = (pGVar17->fields)._value.fields.S;
    uVar4._0_1_ = (pGVar17->fields)._value.fields.R;
    uVar4._1_1_ = (pGVar17->fields)._value.fields.G;
    uVar4._2_1_ = (pGVar17->fields)._value.fields.B;
    uVar4._3_1_ = (pGVar17->fields)._value.fields.A;
    uVar4._4_4_ = (pGVar17->fields)._value.fields.H;
    vtableDispatch = (code *)(pSVar3->fields).invoke_impl;
    (*vtableDispatch)
              (uVar1,(pSVar3->fields).method_code,uVar4,(pSVar3->fields).method,vtableDispatch);
    return;
  }
  pGStack_1a0 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71eeb;
  il2cpp_runtime_helper_022b2c90();
  eventData = __this_03;
  __this_05 = (long *)__this_04;
  pGStack_1a8 = pGVar17;
  pGStack_1a0 = __this_02;
  if (g_data_057a9e07 == '\0') {
    __this_05 = &TypeInfo_RectTransformUtility;
    pSStack_1d8 = (System_Type_array *)0x3b71f12;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e07 = '\x01';
  }
  UStack_1c8.x = 0.0;
  UStack_1c8.y = 0.0;
  cam = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  if (__this_03 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    UStack_1c0 = (__this_03->fields)._position_k__BackingField.fields;
    uStack_1b8 = 0;
    pSStack_1d8 = (System_Type_array *)0x3b71f42;
    cam = (UnityEngine_EventSystems_PointerEventData_o *)
          UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_03,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      pSStack_1d8 = (System_Type_array *)0x3b71f5d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_1d8 = (System_Type_array *)0x3b71f74;
    eventData = cam;
    __this_05 = (long *)__this_04;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (__this_04.genericMethod,(UnityEngine_Vector2_o)UStack_1c0,(UnityEngine_Camera_o *)cam,
               (UnityEngine_Vector2_o *)&UStack_1c8,(MethodInfo *)0x0);
    if (__this_04.genericMethod != (UnityEngine_UI_RawImage_o *)0x0) {
      pSStack_1d8 = (System_Type_array *)0x3b71f87;
      UnityEngine_RectTransform__get_rect(__this_04.genericMethod,(MethodInfo *)0x0);
      return;
    }
  }
  pSStack_1d8 = (System_Type_array *)0x3b72015;
  il2cpp_runtime_helper_022b2c90();
  __this_06 = *(UnityEngine_UI_Graphic_o **)&((UnityEngine_Color_o *)((long)__this_05 + 0x28))->fields;
  pUStack_1f0 = cam;
  _Stack_1e8 = __this_04;
  pUStack_1e0 = __this_00;
  pSStack_1d8 = pSVar11;
  if (__this_06 == (UnityEngine_UI_Graphic_o *)0x0) {
    pUStack_250 = (UnityEngine_RectTransform_o *)0x3b721a5;
    il2cpp_runtime_helper_022b2c90();
    __this_07 = *(UnityEngine_UI_Graphic_o **)&(__this_06->fields).m_Color.fields.b;
    _Stack_270 = (_union_14)__this_05;
    pUStack_268 = unaff_R12;
    _Stack_260.rgctx_data = components.rgctx_data;
    _Stack_258 = __this_04;
    pUStack_250 = __this_00;
    if (__this_07 == (UnityEngine_UI_Graphic_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9e01 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9e01 = '\x01';
      }
      x = *(UnityEngine_Object_o **)&(__this_07->fields).m_SkipLayoutUpdate;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar20 = (MethodInfo *)0x0;
      bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
                ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_07,pMVar20);
      return;
    }
    pUVar15 = UnityEngine_UI_Graphic__get_rectTransform(__this_07,(MethodInfo *)0x0);
    UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar15,eventData,method_02);
    if (g_data_057a7b0a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a7b0a = '\x01';
    }
    fVar23 = UVar5.fields.x * 255.0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    dVar25 = (double)fVar23;
    pMVar20 = (MethodInfo *)auStack_298;
    auStack_290._0_8_ = dVar25;
    dVar25 = modf(dVar25,(double *)pMVar20,(MethodInfo *)eventData);
    if (0.0 <= fVar23) {
      if ((dVar25 != 0.5) || (NAN(dVar25))) {
        auStack_298 = (undefined1  [8])floor((double)auStack_290._0_8_ + 0.5,pMVar20);
      }
      else if (((long)(double)auStack_298 & 1U) != 0) {
        auStack_298 = (undefined1  [8])((double)auStack_298 + 1.0);
      }
    }
    else if ((dVar25 != -0.5) || (NAN(dVar25))) {
      auStack_298 = (undefined1  [8])ceil((double)auStack_290._0_8_ + -0.5,pMVar20);
    }
    else if (((long)(double)auStack_298 & 1U) != 0) {
      auStack_298 = (undefined1  [8])((double)auStack_298 + -1.0);
    }
    bVar2 = *(byte *)&(__this_06->fields).m_OnDirtyLayoutCallback;
    bVar7 = *(byte *)((long)&(__this_06->fields).m_OnDirtyLayoutCallback + 1);
    bVar8 = *(byte *)((long)&(__this_06->fields).m_OnDirtyLayoutCallback + 2);
    fVar23 = *(float *)((long)&(__this_06->fields).m_OnDirtyLayoutCallback + 4);
    auStack_280 = ZEXT416((uint)fVar23);
    auStack_290 = ZEXT416(*(uint *)&(__this_06->fields).m_OnDirtyVertsCallback);
    fVar22 = *(float *)((long)&(__this_06->fields).m_OnDirtyVertsCallback + 4);
    fVar31 = floorf(fVar23);
    fVar31 = (float)auStack_280._0_4_ - fVar31;
    fVar23 = 1.0;
    if (fVar31 <= 1.0) {
      fVar23 = fVar31;
    }
    fVar6 = 1.0;
    if ((float)auStack_290._0_4_ <= 1.0) {
      fVar6 = (float)auStack_290._0_4_;
    }
    fVar24 = 1.0;
    if (fVar22 <= 1.0) {
      fVar24 = fVar22;
    }
    (__this_06->fields).m_OnDirtyLayoutCallback =
         (UnityEngine_Events_UnityAction_o *)
         ((ulong)bVar7 << 8 | (ulong)(uint)((int)(double)auStack_298 << 0x18) | (ulong)bVar2 |
          (ulong)bVar8 << 0x10 | (ulong)(-(uint)(0.0 <= fVar31) & (uint)fVar23) << 0x20);
    (__this_06->fields).m_OnDirtyVertsCallback =
         (UnityEngine_Events_UnityAction_o *)
         CONCAT44(-(uint)(0.0 <= fVar22) & (uint)fVar24,-(uint)(0.0 <= (float)auStack_290._0_4_) & (uint)fVar6
                 );
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_06,(MethodInfo *)eventData);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_06,(MethodInfo *)eventData);
    pUVar21 = (__this_06->fields).m_OnDirtyMaterialCallback;
    if (pUVar21 == (UnityEngine_Events_UnityAction_o *)0x0) {
      return;
    }
    vtableDispatch = (code *)(pUVar21->fields).invoke_impl;
    (*vtableDispatch)
              ((int)(__this_06->fields).m_OnDirtyVertsCallback,(pUVar21->fields).method_code,
               (__this_06->fields).m_OnDirtyLayoutCallback,(pUVar21->fields).method,vtableDispatch);
    return;
  }
  pUStack_250 = (UnityEngine_RectTransform_o *)0x3b72044;
  pUVar15 = UnityEngine_UI_Graphic__get_rectTransform(__this_06,(MethodInfo *)0x0);
  pUStack_250 = (UnityEngine_RectTransform_o *)0x3b7204f;
  UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar15,eventData,method_01);
  auStack_228._8_4_ = extraout_XMM0_Dc_01;
  auStack_228._0_4_ = UVar5.fields.x;
  auStack_228._4_4_ = UVar5.fields.y;
  auStack_228._12_4_ = extraout_XMM0_Dd_01;
  auStack_238 = ZEXT416(*(uint *)((long)__this_05 + 0x80));
  auStack_248 = ZEXT416(*(uint *)((long)__this_05 + 0x84));
  bVar2 = *(byte *)((long)__this_05 + 0x7b);
  pUStack_250 = (UnityEngine_RectTransform_o *)0x3b7207c;
  fVar23 = floorf(UVar5.fields.x);
  fVar23 = (float)auStack_228._0_4_ - fVar23;
  auVar28 = ZEXT812(0x3f800000);
  if (fVar23 <= 1.0) {
    auVar28._4_8_ = 0;
    auVar28._0_4_ = fVar23;
  }
  fVar23 = (float)(-(uint)(0.0 <= fVar23) & auVar28._0_4_);
  auStack_228._4_4_ = 0;
  auStack_228._0_4_ = fVar23;
  auStack_228._8_4_ = auStack_228._8_4_ & auVar28._8_4_;
  auStack_228._12_4_ = 0;
  auVar29 = ZEXT812(0x3f800000);
  if ((float)auStack_238._0_4_ <= 1.0) {
    auVar29._4_8_ = 0;
    auVar29._0_4_ = auStack_238._0_4_;
  }
  fVar31 = (float)(-(uint)(0.0 <= (float)auStack_238._0_4_) & auVar29._0_4_);
  uVar32 = auStack_238._8_4_ & auVar29._8_4_;
  auVar30 = ZEXT416(uVar32) << 0x40;
  auStack_238._4_4_ = 0;
  auStack_238._0_4_ = fVar31;
  auStack_238._8_4_ = uVar32;
  auStack_238._12_4_ = 0;
  fVar22 = 1.0;
  if ((float)auStack_248._0_4_ <= 1.0) {
    fVar22 = (float)auStack_248._0_4_;
  }
  fVar22 = (float)(-(uint)(0.0 <= (float)auStack_248._0_4_) & (uint)fVar22);
  auStack_248 = ZEXT416((uint)fVar22);
  pMVar20 = (MethodInfo *)0x1;
  pUStack_250 = (UnityEngine_RectTransform_o *)0x3b720e3;
  UVar34 = UnityEngine_Color__HSVToRGB_4de5b40(fVar23,fVar31,fVar22,1,(MethodInfo *)0x0);
  uStack_200 = auVar30._8_8_;
  uStack_208 = UVar34.fields._8_8_;
  auStack_218._8_4_ = extraout_XMM0_Dc_02;
  auStack_218._0_8_ = UVar34.fields._0_8_;
  auStack_218._12_4_ = extraout_XMM0_Dd_02;
  pUStack_250 = (UnityEngine_RectTransform_o *)0x3b720f2;
  bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar34.fields.r,pMVar20);
  pUStack_250 = (UnityEngine_RectTransform_o *)0x3b72103;
  bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)auStack_218._4_4_,pMVar20);
  pUStack_250 = (UnityEngine_RectTransform_o *)0x3b72110;
  bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)uStack_208,pMVar20);
  pUVar21 = (UnityEngine_Events_UnityAction_o *)
            ((ulong)bVar7 | (ulong)bVar2 << 0x18 | (ulong)bVar8 << 8 | (ulong)(uint)auStack_228._0_4_ << 0x20
            | (ulong)bVar9 << 0x10);
  *(UnityEngine_Events_UnityAction_o **)((long)__this_05 + 0x78) = pUVar21;
  *(UnityEngine_Events_UnityAction_o **)((long)__this_05 + 0x80) =
       (UnityEngine_Events_UnityAction_o *)CONCAT44(auStack_248._0_4_,auStack_238._0_4_);
  pUStack_250 = (UnityEngine_RectTransform_o *)0x3b7215d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_05,(MethodInfo *)pUVar21);
  pUStack_250 = (UnityEngine_RectTransform_o *)0x3b72165;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_05,(MethodInfo *)pUVar21);
  pUVar21 = *(UnityEngine_Events_UnityAction_o **)((long)__this_05 + 0x88);
  if (pUVar21 == (UnityEngine_Events_UnityAction_o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pUVar21->fields).invoke_impl;
  (*vtableDispatch)
            ((int)*(UnityEngine_Events_UnityAction_o **)((long)__this_05 + 0x80),(pUVar21->fields).method_code
             ,*(UnityEngine_Events_UnityAction_o **)((long)__this_05 + 0x78),(pUVar21->fields).method,
             vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$RawImage
// il2cpp: UnityEngine_UI_RawImage_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage (System_String_o* name, UnityEngine_RectTransform_o* parent, float bottom, float height, UnityEngine_Color_o fallback, const MethodInfo* method);
// 0x3b71520

UnityEngine_UI_RawImage_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
          (System_String_o *name,UnityEngine_RectTransform_o *parent,float bottom,float height,
          UnityEngine_Color_o fallback,MethodInfo *method)

{
  undefined4 uVar1;
  byte bVar2;
  System_Action_GisketchUIColorPickerValue__o *pSVar3;
  undefined8 uVar4;
  code *vtableDispatch;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o UVar5;
  float fVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  bool_conflict bVar10;
  System_Type_array *pSVar11;
  System_Type_o *pSVar12;
  long lVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_RectTransform_o *pUVar15;
  UnityEngine_UI_RawImage_o *pUVar16;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar17;
  System_RuntimeTypeHandle_o SVar18;
  UnityEngine_Sprite_o *value;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar19;
  UnityEngine_UI_RawImage_o *__this;
  _union_13 components;
  MethodInfo *pMVar20;
  Il2CppObject *pIVar21;
  UnityEngine_EventSystems_PointerEventData_o *cam;
  UnityEngine_UI_RawImage_o *extraout_RAX;
  undefined4 extraout_var;
  UnityEngine_UI_RawImage_o *extraout_RAX_00;
  MethodInfo *extraout_RDX;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  UnityEngine_EventSystems_PointerEventData_o *__this_02;
  UnityEngine_EventSystems_PointerEventData_o *eventData;
  UnityEngine_Events_UnityAction_o *pUVar22;
  _union_14 __this_03;
  long *__this_04;
  UnityEngine_UI_Graphic_o *__this_05;
  UnityEngine_UI_Graphic_o *__this_06;
  UnityEngine_GameObject_o *unaff_R12;
  float fVar23;
  float fVar24;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  double dVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  uint uVar33;
  UnityEngine_Color_o UVar34;
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  _union_14 _Stack_238;
  UnityEngine_GameObject_o *pUStack_230;
  _union_13 _Stack_228;
  _union_14 _Stack_220;
  UnityEngine_UI_RawImage_o *pUStack_218;
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_1b8;
  _union_14 _Stack_1b0;
  UnityEngine_UI_RawImage_o *pUStack_1a8;
  System_Type_array *pSStack_1a0;
  UnityEngine_Vector2_Fields UStack_190;
  UnityEngine_Vector2_Fields UStack_188;
  undefined8 uStack_180;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_170;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_168;
  undefined1 auStack_160 [8];
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  MethodInfo *pMStack_108;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_100;
  UnityEngine_UI_RawImage_o *pUStack_f8;
  System_Type_array *pSStack_f0;
  UnityEngine_Vector2_Fields UStack_e8;
  undefined8 uStack_e0;
  System_Type_o *pSStack_d8;
  UnityEngine_GameObject_o *pUStack_d0;
  UnityEngine_UI_RawImage_o *pUStack_c8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_c0;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_b8;
  UnityEngine_Vector2_Fields UStack_b0;
  undefined8 uStack_a8;
  System_Type_o *pSStack_98;
  UnityEngine_GameObject_o *pUStack_90;
  System_Type_array *pSStack_88;
  UnityEngine_RectTransform_o *pUStack_80;
  System_String_o *pSStack_78;
  float local_48;
  
  if (g_data_057a9e04 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_AddComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057a9e04 = '\x01';
    method = extraout_RDX;
  }
  pSVar11 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type,1,method);
  SVar18 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = System_Type__GetTypeFromHandle(SVar18,(MethodInfo *)0x0);
  if (pSVar11 == (System_Type_array *)0x0) {
label_03b71773:
    il2cpp_runtime_helper_022b2c90();
label_03b71778:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    SVar18.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar12;
    if ((pSVar12 == (System_Type_o *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pSVar12), lVar13 != 0)) {
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = pSVar12;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items,pSVar12);
        unaff_R12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(unaff_R12,name,pSVar11,(MethodInfo *)0x0);
        if ((unaff_R12 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar14 = UnityEngine_GameObject__get_transform(unaff_R12,(MethodInfo *)0x0),
           pUVar14 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar14,(UnityEngine_Transform_o *)parent,0,(MethodInfo *)0x0);
          pUVar15 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent_object_(unaff_R12,MethodInfo_RectTransform_GetComponent_RectTransform);
          if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin(pUVar15,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchorMax
                      (pUVar15,(UnityEngine_Vector2_o)
                               (CONCAT44(-(uint)(22.0 < height),0x3f800000) & 0x3f800000ffffffff),
                       (MethodInfo *)0x0);
            UnityEngine_RectTransform__set_offsetMin
                      (pUVar15,(UnityEngine_Vector2_o)((ulong)(uint)bottom << 0x20),(MethodInfo *)0x0);
            fVar23 = 0.0;
            if (height <= 22.0) {
              fVar23 = bottom + height;
            }
            UnityEngine_RectTransform__set_offsetMax
                      (pUVar15,(UnityEngine_Vector2_o)((ulong)(uint)fVar23 << 0x20),(MethodInfo *)0x0);
            pUVar16 = (UnityEngine_UI_RawImage_o *)
                      UnityEngine_GameObject__AddComponent_object_(unaff_R12,MethodInfo_RawImage_AddComponent_RawImage);
            SVar18.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pUVar15;
            if (pUVar16 != (UnityEngine_UI_RawImage_o *)0x0) {
              local_48 = fallback.fields.r;
              (*((Il2CppClass *)pUVar16->klass)->vtable[0x17].methodPtr)
                        (local_48,pUVar16,((Il2CppClass *)pUVar16->klass)->vtable[0x17].method);
              (*((Il2CppClass *)pUVar16->klass)->vtable[0x19].methodPtr)
                        (pUVar16,1,((Il2CppClass *)pUVar16->klass)->vtable[0x19].method);
              return pUVar16;
            }
          }
        }
        goto label_03b71773;
      }
      goto label_03b71778;
    }
  }
  pGVar17 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_0231b270();
  pUVar16 = (UnityEngine_UI_RawImage_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  pSStack_98 = (System_Type_o *)SVar18.fields.value;
  pUStack_90 = unaff_R12;
  pSStack_88 = pSVar11;
  pUStack_80 = parent;
  pSStack_78 = name;
  if (g_data_057a9e05 == '\0') {
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717bc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717c8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717d4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717e0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717ec;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717f8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71804;
    il2cpp_runtime_helper_023445d0(&"surface");
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71810;
    il2cpp_runtime_helper_023445d0(&"shadow");
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7181c;
    il2cpp_runtime_helper_023445d0(&"AoTTG Color Marker");
    g_data_057a9e05 = '\x01';
  }
  pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71837;
  pSVar11 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar18 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71860;
    il2cpp_runtime_helper_02337ed0();
  }
  pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7186a;
  pSVar12 = System_Type__GetTypeFromHandle(SVar18,(MethodInfo *)0x0);
  if (pSVar11 == (System_Type_array *)0x0) {
label_03b71a7e:
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a83;
    il2cpp_runtime_helper_022b2c90();
label_03b71a83:
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a88;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    SVar18.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar12;
    if (pSVar12 == (System_Type_o *)0x0) {
label_03b71894:
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = pSVar12;
        pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718b1;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items,pSVar12);
        pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718c0;
        unaff_R12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718da;
        UnityEngine_GameObject___ctor_4dfc440(unaff_R12,"AoTTG Color Marker",pSVar11,(MethodInfo *)0x0);
        if (unaff_R12 != (UnityEngine_GameObject_o *)0x0) {
          pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718ed;
          pUVar14 = UnityEngine_GameObject__get_transform(unaff_R12,(MethodInfo *)0x0);
          if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
            pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71905;
            UnityEngine_Transform__SetParent_4e09e30
                      (pUVar14,(UnityEngine_Transform_o *)pUVar16,0,(MethodInfo *)0x0);
            pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71917;
            pUVar16 = (UnityEngine_UI_RawImage_o *)
                      UnityEngine_GameObject__GetComponent_object_(unaff_R12,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (g_data_057a694c == '\0') {
              pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7192f;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
              g_data_057a694c = '\x01';
            }
            if (pUVar16 != (UnityEngine_UI_RawImage_o *)0x0) {
              UStack_b0 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
              uStack_a8 = 0;
              pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71962;
              UnityEngine_RectTransform__set_anchorMax
                        ((UnityEngine_RectTransform_o *)pUVar16,(UnityEngine_Vector2_o)UStack_b0,
                         (MethodInfo *)0x0);
              pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71970;
              UnityEngine_RectTransform__set_anchorMin
                        ((UnityEngine_RectTransform_o *)pUVar16,(UnityEngine_Vector2_o)UStack_b0,
                         (MethodInfo *)0x0);
              pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71981;
              UnityEngine_RectTransform__set_pivot
                        ((UnityEngine_RectTransform_o *)pUVar16,(UnityEngine_Vector2_o)0x3f0000003f000000,
                         (MethodInfo *)0x0);
              pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71992;
              UnityEngine_RectTransform__set_sizeDelta
                        ((UnityEngine_RectTransform_o *)pUVar16,(UnityEngine_Vector2_o)0x4190000041900000,
                         (MethodInfo *)0x0);
              pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719a4;
              pMVar20 = MethodInfo_Image_AddComponent_Image;
              SVar18.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   UnityEngine_GameObject__AddComponent_object_(unaff_R12,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image);
              pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719af;
              value = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite(pGVar17,pMVar20);
              if (SVar18.fields.value != 0) {
                pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719c5;
                UnityEngine_UI_Image__set_sprite
                          ((UnityEngine_UI_Image_o *)SVar18.fields.value,value,(MethodInfo *)0x0);
                if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                  pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719ec;
                  UVar34.fields.b = 1.0;
                  UVar34.fields.a = 1.0;
                  UVar34.fields.r = 1.0;
                  UVar34.fields.g = 1.0;
                  UVar34 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                     (__this_00,"surface",UVar34,(MethodInfo *)0x0);
                  pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719ff;
                  (*(((UnityEngine_UI_Image_o *)SVar18.fields.value)->klass->vtable)._23_set_color.methodPtr)
                            (UVar34.fields.r,UVar34.fields._8_8_,SVar18.fields.value,
                             (((UnityEngine_UI_Image_o *)SVar18.fields.value)->klass->vtable)._23_set_color.
                             method);
                  pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a14;
                  (*(((UnityEngine_UI_Image_o *)SVar18.fields.value)->klass->vtable)._25_set_raycastTarget.
                    methodPtr)(SVar18.fields.value,0,
                               (((UnityEngine_UI_Image_o *)SVar18.fields.value)->klass->vtable).
                               _25_set_raycastTarget.method);
                  pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a26;
                  pGVar19 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                            UnityEngine_GameObject__AddComponent_object_(unaff_R12,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
                  pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a47;
                  UVar34 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                     (__this_00,"shadow",
                                      (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                                      (MethodInfo *)0x0);
                  SVar18.fields.value = (System_RuntimeTypeHandle_Fields)0;
                  if (pGVar19 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a6c;
                    Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
                              (pGVar19,UVar34,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,0,
                               (MethodInfo *)0x0);
                    return pUVar16;
                  }
                }
              }
            }
          }
        }
        goto label_03b71a7e;
      }
      goto label_03b71a83;
    }
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7188b;
    lVar13 = il2cpp_runtime_helper_023051f0(pSVar12);
    if (lVar13 != 0) goto label_03b71894;
  }
  pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a8d;
  __this = (UnityEngine_UI_RawImage_o *)il2cpp_runtime_helper_0231b270();
  __this_01 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
  pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a97;
  il2cpp_runtime_helper_022b2b10();
  pSStack_d8 = (System_Type_o *)SVar18.fields.value;
  pUStack_d0 = unaff_R12;
  pUStack_c8 = pUVar16;
  pGStack_c0 = pGVar17;
  pGStack_b8 = __this_00;
  if (g_data_057a9e06 == '\0') {
    pSStack_f0 = (System_Type_array *)0x3b71ac8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    pSStack_f0 = (System_Type_array *)0x3b71ad4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    pSStack_f0 = (System_Type_array *)0x3b71ae0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pSStack_f0 = (System_Type_array *)0x3b71aec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pSStack_f0 = (System_Type_array *)0x3b71af8;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pSStack_f0 = (System_Type_array *)0x3b71b04;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pSStack_f0 = (System_Type_array *)0x3b71b10;
    il2cpp_runtime_helper_023445d0(&"AoTTG Color Slider Marker");
    pSStack_f0 = (System_Type_array *)0x3b71b1c;
    il2cpp_runtime_helper_023445d0(&"shadow");
    g_data_057a9e06 = '\x01';
  }
  pSStack_f0 = (System_Type_array *)0x3b71b37;
  components.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar18 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pSStack_f0 = (System_Type_array *)0x3b71b60;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_f0 = (System_Type_array *)0x3b71b6a;
  pMVar20 = (MethodInfo *)System_Type__GetTypeFromHandle(SVar18,(MethodInfo *)0x0);
  if (components.rgctx_data == (Il2CppRGCTXData *)0x0) {
label_03b71d51:
    pSStack_f0 = (System_Type_array *)0x3b71d56;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    SVar18.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pMVar20;
    if (pMVar20 != (MethodInfo *)0x0) {
      pSStack_f0 = (System_Type_array *)0x3b71b8b;
      lVar13 = il2cpp_runtime_helper_023051f0(pMVar20);
      if (lVar13 == 0) goto label_03b71d5b;
    }
    if (*(int *)(components.rgctx_data + 3) != 0) {
      components.rgctx_data[4].method = pMVar20;
      pSStack_f0 = (System_Type_array *)0x3b71bb2;
      il2cpp_runtime_helper_022b4080(components.rgctx_data + 4,pMVar20);
      pSStack_f0 = (System_Type_array *)0x3b71bc1;
      unaff_R12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      pSStack_f0 = (System_Type_array *)0x3b71bdb;
      UnityEngine_GameObject___ctor_4dfc440
                (unaff_R12,"AoTTG Color Slider Marker",(System_Type_array *)components.rgctx_data,(MethodInfo *)0x0);
      if (unaff_R12 != (UnityEngine_GameObject_o *)0x0) {
        pSStack_f0 = (System_Type_array *)0x3b71bee;
        pUVar14 = UnityEngine_GameObject__get_transform(unaff_R12,(MethodInfo *)0x0);
        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
          pSStack_f0 = (System_Type_array *)0x3b71c06;
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar14,(UnityEngine_Transform_o *)__this,0,(MethodInfo *)0x0);
          pSStack_f0 = (System_Type_array *)0x3b71c18;
          __this = (UnityEngine_UI_RawImage_o *)
                   UnityEngine_GameObject__GetComponent_object_(unaff_R12,MethodInfo_RectTransform_GetComponent_RectTransform);
          if (g_data_057a694c == '\0') {
            pSStack_f0 = (System_Type_array *)0x3b71c30;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          if (__this != (UnityEngine_UI_RawImage_o *)0x0) {
            UStack_e8 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
            uStack_e0 = 0;
            pSStack_f0 = (System_Type_array *)0x3b71c63;
            UnityEngine_RectTransform__set_anchorMax
                      ((UnityEngine_RectTransform_o *)__this,(UnityEngine_Vector2_o)UStack_e8,
                       (MethodInfo *)0x0);
            pSStack_f0 = (System_Type_array *)0x3b71c71;
            UnityEngine_RectTransform__set_anchorMin
                      ((UnityEngine_RectTransform_o *)__this,(UnityEngine_Vector2_o)UStack_e8,
                       (MethodInfo *)0x0);
            pSStack_f0 = (System_Type_array *)0x3b71c82;
            UnityEngine_RectTransform__set_pivot
                      ((UnityEngine_RectTransform_o *)__this,(UnityEngine_Vector2_o)0x3f0000003f000000,
                       (MethodInfo *)0x0);
            pSStack_f0 = (System_Type_array *)0x3b71c93;
            UnityEngine_RectTransform__set_sizeDelta
                      ((UnityEngine_RectTransform_o *)__this,(UnityEngine_Vector2_o)0x4200000040800000,
                       (MethodInfo *)0x0);
            pSStack_f0 = (System_Type_array *)0x3b71ca5;
            pIVar21 = UnityEngine_GameObject__AddComponent_object_
                                (unaff_R12,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image);
            if (pIVar21 != (Il2CppObject *)0x0) {
              pSStack_f0 = (System_Type_array *)0x3b71cce;
              (*pIVar21->klass->vtable[0x17].methodPtr)(pIVar21,pIVar21->klass->vtable[0x17].method);
              pSStack_f0 = (System_Type_array *)0x3b71ce3;
              (*pIVar21->klass->vtable[0x19].methodPtr)(pIVar21,0,pIVar21->klass->vtable[0x19].method);
              pSStack_f0 = (System_Type_array *)0x3b71cf5;
              pGVar19 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                        UnityEngine_GameObject__AddComponent_object_(unaff_R12,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
              SVar18.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pIVar21;
              if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                pSStack_f0 = (System_Type_array *)0x3b71d1b;
                UVar34 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                   (__this_01,"shadow",
                                    (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                                    (MethodInfo *)0x0);
                SVar18.fields.value = (System_RuntimeTypeHandle_Fields)0;
                if (pGVar19 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                  pSStack_f0 = (System_Type_array *)0x3b71d40;
                  Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
                            (pGVar19,UVar34,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,0,
                             (MethodInfo *)0x0);
                  return __this;
                }
              }
            }
          }
        }
      }
      goto label_03b71d51;
    }
  }
  pSStack_f0 = (System_Type_array *)0x3b71d5b;
  il2cpp_runtime_helper_022b2ca0();
label_03b71d5b:
  pSStack_f0 = (System_Type_array *)0x3b71d60;
  pGVar17 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_0231b270();
  __this_02 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  pSStack_f0 = (System_Type_array *)0x3b71d6a;
  il2cpp_runtime_helper_022b2b10();
  __this_03 = (_union_14)(pGVar17->fields)._square;
  pMStack_108 = (MethodInfo *)SVar18.fields.value;
  pGStack_100 = __this_01;
  pUStack_f8 = __this;
  pSStack_f0 = pSVar11;
  if (__this_03.genericMethod != (UnityEngine_UI_RawImage_o *)0x0) {
    pGStack_168 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71d94;
    pUVar15 = UnityEngine_UI_Graphic__get_rectTransform(__this_03.genericMethod,(MethodInfo *)0x0);
    pGStack_168 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71d9f;
    UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar15,__this_02,method_00);
    auStack_150._8_4_ = extraout_XMM0_Dc;
    auStack_150._0_4_ = UVar5.fields.x;
    auStack_150._4_4_ = UVar5.fields.y;
    auStack_150._12_4_ = extraout_XMM0_Dd;
    auStack_160._4_4_ = UVar5.fields.y;
    auStack_160._0_4_ = UVar5.fields.y;
    uStack_158 = extraout_XMM0_Dc;
    uStack_154 = extraout_XMM0_Dd;
    fVar23 = (pGVar17->fields)._value.fields.H;
    auStack_140 = ZEXT416((uint)fVar23);
    bVar2 = (pGVar17->fields)._value.fields.A;
    pGStack_168 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71dc2;
    fVar23 = floorf(fVar23);
    fVar23 = (float)auStack_140._0_4_ - fVar23;
    auVar26 = ZEXT812(0x3f800000);
    if (fVar23 <= 1.0) {
      auVar26._4_8_ = 0;
      auVar26._0_4_ = fVar23;
    }
    fVar23 = (float)(-(uint)(0.0 <= fVar23) & auVar26._0_4_);
    auStack_140._4_4_ = 0;
    auStack_140._0_4_ = fVar23;
    auStack_140._8_4_ = auStack_140._8_4_ & auVar26._8_4_;
    auStack_140._12_4_ = 0;
    auVar27 = ZEXT812(0x3f800000);
    if ((float)auStack_150._0_4_ <= 1.0) {
      auVar27._4_8_ = 0;
      auVar27._0_4_ = auStack_150._0_4_;
    }
    fVar32 = (float)(-(uint)(0.0 <= (float)auStack_150._0_4_) & auVar27._0_4_);
    uVar33 = auStack_150._8_4_ & auVar27._8_4_;
    auVar30 = ZEXT416(uVar33) << 0x40;
    auStack_150._4_4_ = 0;
    auStack_150._0_4_ = fVar32;
    auStack_150._8_4_ = uVar33;
    auStack_150._12_4_ = 0;
    fVar31 = 1.0;
    if ((float)auStack_160._0_4_ <= 1.0) {
      fVar31 = (float)auStack_160._0_4_;
    }
    fVar31 = (float)(-(uint)(0.0 <= (float)auStack_160._0_4_) & (uint)fVar31);
    _auStack_160 = ZEXT416((uint)fVar31);
    pMVar20 = (MethodInfo *)0x1;
    pGStack_168 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e29;
    UVar34 = UnityEngine_Color__HSVToRGB_4de5b40(fVar23,fVar32,fVar31,1,(MethodInfo *)0x0);
    uStack_118 = auVar30._8_8_;
    uStack_120 = UVar34.fields._8_8_;
    auStack_130._8_4_ = extraout_XMM0_Dc_00;
    auStack_130._0_8_ = UVar34.fields._0_8_;
    auStack_130._12_4_ = extraout_XMM0_Dd_00;
    pGStack_168 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e38;
    bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar34.fields.r,pMVar20);
    pGStack_168 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e49;
    bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)auStack_130._4_4_,pMVar20);
    pGStack_168 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e56;
    bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)uStack_120,pMVar20);
    pMVar20 = (MethodInfo *)
              ((ulong)bVar7 | (ulong)bVar2 << 0x18 | (ulong)bVar8 << 8 | (ulong)bVar9 << 0x10 |
              (ulong)(uint)auStack_140._0_4_ << 0x20);
    *(MethodInfo **)&(pGVar17->fields)._value.fields = pMVar20;
    (pGVar17->fields)._value.fields.S = (float)auStack_150._0_4_;
    (pGVar17->fields)._value.fields.V = (float)auStack_160._0_4_;
    pGStack_168 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71ea3;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar17,pMVar20);
    pGStack_168 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71eab;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar17,pMVar20);
    pSVar3 = (pGVar17->fields).Changed;
    if (pSVar3 == (System_Action_GisketchUIColorPickerValue__o *)0x0) {
      return (UnityEngine_UI_RawImage_o *)0x0;
    }
    uVar1 = (pGVar17->fields)._value.fields.S;
    uVar4._0_1_ = (pGVar17->fields)._value.fields.R;
    uVar4._1_1_ = (pGVar17->fields)._value.fields.G;
    uVar4._2_1_ = (pGVar17->fields)._value.fields.B;
    uVar4._3_1_ = (pGVar17->fields)._value.fields.A;
    uVar4._4_4_ = (pGVar17->fields)._value.fields.H;
    vtableDispatch = (code *)(pSVar3->fields).invoke_impl;
    pUVar16 = (UnityEngine_UI_RawImage_o *)
              (*vtableDispatch)
                        (uVar1,(pSVar3->fields).method_code,uVar4,(pSVar3->fields).method,
                         vtableDispatch);
    return pUVar16;
  }
  pGStack_168 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71eeb;
  il2cpp_runtime_helper_022b2c90();
  eventData = __this_02;
  __this_04 = (long *)__this_03;
  pGStack_170 = pGVar17;
  pGStack_168 = __this_01;
  if (g_data_057a9e07 == '\0') {
    __this_04 = &TypeInfo_RectTransformUtility;
    pSStack_1a0 = (System_Type_array *)0x3b71f12;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e07 = '\x01';
  }
  UStack_190.x = 0.0;
  UStack_190.y = 0.0;
  cam = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  if (__this_02 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    UStack_188 = (__this_02->fields)._position_k__BackingField.fields;
    uStack_180 = 0;
    pSStack_1a0 = (System_Type_array *)0x3b71f42;
    cam = (UnityEngine_EventSystems_PointerEventData_o *)
          UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_02,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      pSStack_1a0 = (System_Type_array *)0x3b71f5d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_1a0 = (System_Type_array *)0x3b71f74;
    eventData = cam;
    __this_04 = (long *)__this_03;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (__this_03.genericMethod,(UnityEngine_Vector2_o)UStack_188,(UnityEngine_Camera_o *)cam,
               (UnityEngine_Vector2_o *)&UStack_190,(MethodInfo *)0x0);
    if (__this_03.genericMethod != (UnityEngine_UI_RawImage_o *)0x0) {
      pSStack_1a0 = (System_Type_array *)0x3b71f87;
      UnityEngine_RectTransform__get_rect(__this_03.genericMethod,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  pSStack_1a0 = (System_Type_array *)0x3b72015;
  il2cpp_runtime_helper_022b2c90();
  __this_05 = *(UnityEngine_UI_Graphic_o **)&((UnityEngine_Color_o *)((long)__this_04 + 0x28))->fields;
  pUStack_1b8 = cam;
  _Stack_1b0 = __this_03;
  pUStack_1a8 = __this;
  pSStack_1a0 = pSVar11;
  if (__this_05 != (UnityEngine_UI_Graphic_o *)0x0) {
    pUStack_218 = (UnityEngine_UI_RawImage_o *)0x3b72044;
    pUVar15 = UnityEngine_UI_Graphic__get_rectTransform(__this_05,(MethodInfo *)0x0);
    pUStack_218 = (UnityEngine_UI_RawImage_o *)0x3b7204f;
    UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar15,eventData,method_01);
    auStack_1f0._8_4_ = extraout_XMM0_Dc_01;
    auStack_1f0._0_4_ = UVar5.fields.x;
    auStack_1f0._4_4_ = UVar5.fields.y;
    auStack_1f0._12_4_ = extraout_XMM0_Dd_01;
    auStack_200 = ZEXT416(*(uint *)((long)__this_04 + 0x80));
    auStack_210 = ZEXT416(*(uint *)((long)__this_04 + 0x84));
    bVar2 = *(byte *)((long)__this_04 + 0x7b);
    pUStack_218 = (UnityEngine_UI_RawImage_o *)0x3b7207c;
    fVar23 = floorf(UVar5.fields.x);
    fVar23 = (float)auStack_1f0._0_4_ - fVar23;
    auVar28 = ZEXT812(0x3f800000);
    if (fVar23 <= 1.0) {
      auVar28._4_8_ = 0;
      auVar28._0_4_ = fVar23;
    }
    fVar23 = (float)(-(uint)(0.0 <= fVar23) & auVar28._0_4_);
    auStack_1f0._4_4_ = 0;
    auStack_1f0._0_4_ = fVar23;
    auStack_1f0._8_4_ = auStack_1f0._8_4_ & auVar28._8_4_;
    auStack_1f0._12_4_ = 0;
    auVar29 = ZEXT812(0x3f800000);
    if ((float)auStack_200._0_4_ <= 1.0) {
      auVar29._4_8_ = 0;
      auVar29._0_4_ = auStack_200._0_4_;
    }
    fVar32 = (float)(-(uint)(0.0 <= (float)auStack_200._0_4_) & auVar29._0_4_);
    uVar33 = auStack_200._8_4_ & auVar29._8_4_;
    auVar30 = ZEXT416(uVar33) << 0x40;
    auStack_200._4_4_ = 0;
    auStack_200._0_4_ = fVar32;
    auStack_200._8_4_ = uVar33;
    auStack_200._12_4_ = 0;
    fVar31 = 1.0;
    if ((float)auStack_210._0_4_ <= 1.0) {
      fVar31 = (float)auStack_210._0_4_;
    }
    fVar31 = (float)(-(uint)(0.0 <= (float)auStack_210._0_4_) & (uint)fVar31);
    auStack_210 = ZEXT416((uint)fVar31);
    pMVar20 = (MethodInfo *)0x1;
    pUStack_218 = (UnityEngine_UI_RawImage_o *)0x3b720e3;
    UVar34 = UnityEngine_Color__HSVToRGB_4de5b40(fVar23,fVar32,fVar31,1,(MethodInfo *)0x0);
    uStack_1c8 = auVar30._8_8_;
    uStack_1d0 = UVar34.fields._8_8_;
    auStack_1e0._8_4_ = extraout_XMM0_Dc_02;
    auStack_1e0._0_8_ = UVar34.fields._0_8_;
    auStack_1e0._12_4_ = extraout_XMM0_Dd_02;
    pUStack_218 = (UnityEngine_UI_RawImage_o *)0x3b720f2;
    bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar34.fields.r,pMVar20);
    pUStack_218 = (UnityEngine_UI_RawImage_o *)0x3b72103;
    bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)auStack_1e0._4_4_,pMVar20);
    pUStack_218 = (UnityEngine_UI_RawImage_o *)0x3b72110;
    bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)uStack_1d0,pMVar20);
    pUVar22 = (UnityEngine_Events_UnityAction_o *)
              ((ulong)bVar7 | (ulong)bVar2 << 0x18 | (ulong)bVar8 << 8 |
               (ulong)(uint)auStack_1f0._0_4_ << 0x20 | (ulong)bVar9 << 0x10);
    *(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x78) = pUVar22;
    *(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x80) =
         (UnityEngine_Events_UnityAction_o *)CONCAT44(auStack_210._0_4_,auStack_200._0_4_);
    pUStack_218 = (UnityEngine_UI_RawImage_o *)0x3b7215d;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_04,(MethodInfo *)pUVar22);
    pUStack_218 = (UnityEngine_UI_RawImage_o *)0x3b72165;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_04,(MethodInfo *)pUVar22);
    pUVar22 = *(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x88);
    if (pUVar22 == (UnityEngine_Events_UnityAction_o *)0x0) {
      return (UnityEngine_UI_RawImage_o *)0x0;
    }
    vtableDispatch = (code *)(pUVar22->fields).invoke_impl;
    pUVar16 = (UnityEngine_UI_RawImage_o *)
              (*vtableDispatch)
                        ((int)*(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x80),
                         (pUVar22->fields).method_code,
                         *(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x78),
                         (pUVar22->fields).method,vtableDispatch);
    return pUVar16;
  }
  pUStack_218 = (UnityEngine_UI_RawImage_o *)0x3b721a5;
  il2cpp_runtime_helper_022b2c90();
  __this_06 = *(UnityEngine_UI_Graphic_o **)&(__this_05->fields).m_Color.fields.b;
  _Stack_238 = (_union_14)__this_04;
  pUStack_230 = unaff_R12;
  _Stack_228.rgctx_data = components.rgctx_data;
  _Stack_220 = __this_03;
  pUStack_218 = __this;
  if (__this_06 == (UnityEngine_UI_Graphic_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9e01 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9e01 = '\x01';
    }
    x = *(UnityEngine_Object_o **)&(__this_06->fields).m_SkipLayoutUpdate;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar20 = (MethodInfo *)0x0;
    bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      return (UnityEngine_UI_RawImage_o *)CONCAT44(extraout_var,bVar10);
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_06,pMVar20);
    return extraout_RAX_00;
  }
  pUVar15 = UnityEngine_UI_Graphic__get_rectTransform(__this_06,(MethodInfo *)0x0);
  UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar15,eventData,method_02);
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  fVar23 = UVar5.fields.x * 255.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  dVar25 = (double)fVar23;
  pMVar20 = (MethodInfo *)auStack_260;
  auStack_258._0_8_ = dVar25;
  dVar25 = modf(dVar25,(double *)pMVar20,(MethodInfo *)eventData);
  if (0.0 <= fVar23) {
    if ((dVar25 != 0.5) || (NAN(dVar25))) {
      auStack_260 = (undefined1  [8])floor((double)auStack_258._0_8_ + 0.5,pMVar20);
    }
    else if (((long)(double)auStack_260 & 1U) != 0) {
      auStack_260 = (undefined1  [8])((double)auStack_260 + 1.0);
    }
  }
  else if ((dVar25 != -0.5) || (NAN(dVar25))) {
    auStack_260 = (undefined1  [8])ceil((double)auStack_258._0_8_ + -0.5,pMVar20);
  }
  else if (((long)(double)auStack_260 & 1U) != 0) {
    auStack_260 = (undefined1  [8])((double)auStack_260 + -1.0);
  }
  bVar2 = *(byte *)&(__this_05->fields).m_OnDirtyLayoutCallback;
  bVar7 = *(byte *)((long)&(__this_05->fields).m_OnDirtyLayoutCallback + 1);
  bVar8 = *(byte *)((long)&(__this_05->fields).m_OnDirtyLayoutCallback + 2);
  fVar23 = *(float *)((long)&(__this_05->fields).m_OnDirtyLayoutCallback + 4);
  auStack_248 = ZEXT416((uint)fVar23);
  auStack_258 = ZEXT416(*(uint *)&(__this_05->fields).m_OnDirtyVertsCallback);
  fVar31 = *(float *)((long)&(__this_05->fields).m_OnDirtyVertsCallback + 4);
  fVar32 = floorf(fVar23);
  fVar32 = (float)auStack_248._0_4_ - fVar32;
  fVar23 = 1.0;
  if (fVar32 <= 1.0) {
    fVar23 = fVar32;
  }
  fVar6 = 1.0;
  if ((float)auStack_258._0_4_ <= 1.0) {
    fVar6 = (float)auStack_258._0_4_;
  }
  fVar24 = 1.0;
  if (fVar31 <= 1.0) {
    fVar24 = fVar31;
  }
  (__this_05->fields).m_OnDirtyLayoutCallback =
       (UnityEngine_Events_UnityAction_o *)
       ((ulong)bVar7 << 8 | (ulong)(uint)((int)(double)auStack_260 << 0x18) | (ulong)bVar2 |
        (ulong)bVar8 << 0x10 | (ulong)(-(uint)(0.0 <= fVar32) & (uint)fVar23) << 0x20);
  (__this_05->fields).m_OnDirtyVertsCallback =
       (UnityEngine_Events_UnityAction_o *)
       CONCAT44(-(uint)(0.0 <= fVar31) & (uint)fVar24,-(uint)(0.0 <= (float)auStack_258._0_4_) & (uint)fVar6);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_05,(MethodInfo *)eventData);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_05,(MethodInfo *)eventData);
  pUVar22 = (__this_05->fields).m_OnDirtyMaterialCallback;
  if (pUVar22 == (UnityEngine_Events_UnityAction_o *)0x0) {
    return (UnityEngine_UI_RawImage_o *)0x0;
  }
  vtableDispatch = (code *)(pUVar22->fields).invoke_impl;
  pUVar16 = (UnityEngine_UI_RawImage_o *)
            (*vtableDispatch)
                      ((int)(__this_05->fields).m_OnDirtyVertsCallback,(pUVar22->fields).method_code,
                       (__this_05->fields).m_OnDirtyLayoutCallback,(pUVar22->fields).method,
                       vtableDispatch);
  return pUVar16;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$CircleMarker
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleMarker (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b71790

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleMarker
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,UnityEngine_RectTransform_o *parent,
          Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  undefined4 uVar1;
  byte bVar2;
  System_Action_GisketchUIColorPickerValue__o *pSVar3;
  undefined8 uVar4;
  code *vtableDispatch;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o UVar5;
  float fVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  bool_conflict bVar10;
  System_Type_array *components;
  System_Type_o *pSVar11;
  long lVar12;
  UnityEngine_Transform_o *pUVar13;
  System_RuntimeTypeHandle_o SVar14;
  UnityEngine_Sprite_o *value;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar15;
  UnityEngine_RectTransform_o *pUVar16;
  _union_13 components_00;
  MethodInfo *pMVar17;
  Il2CppObject *pIVar18;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this_00;
  UnityEngine_EventSystems_PointerEventData_o *cam;
  UnityEngine_RectTransform_o *extraout_RAX;
  undefined4 extraout_var;
  UnityEngine_RectTransform_o *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  UnityEngine_EventSystems_PointerEventData_o *__this_02;
  UnityEngine_EventSystems_PointerEventData_o *eventData;
  UnityEngine_Events_UnityAction_o *pUVar19;
  _union_14 __this_03;
  long *__this_04;
  UnityEngine_UI_Graphic_o *__this_05;
  UnityEngine_UI_Graphic_o *__this_06;
  UnityEngine_GameObject_o *unaff_R12;
  float fVar20;
  float fVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  double dVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  uint uVar30;
  UnityEngine_Color_o UVar31;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  _union_14 _Stack_1d0;
  UnityEngine_GameObject_o *pUStack_1c8;
  _union_13 _Stack_1c0;
  _union_14 _Stack_1b8;
  UnityEngine_RectTransform_o *pUStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_150;
  _union_14 _Stack_148;
  UnityEngine_RectTransform_o *pUStack_140;
  System_Type_array *pSStack_138;
  UnityEngine_Vector2_Fields UStack_128;
  UnityEngine_Vector2_Fields UStack_120;
  undefined8 uStack_118;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_108;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_100;
  undefined1 auStack_f8 [8];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  MethodInfo *pMStack_a0;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_98;
  UnityEngine_RectTransform_o *pUStack_90;
  System_Type_array *pSStack_88;
  UnityEngine_Vector2_Fields UStack_80;
  undefined8 uStack_78;
  System_Type_o *pSStack_70;
  UnityEngine_GameObject_o *pUStack_68;
  UnityEngine_RectTransform_o *pUStack_60;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_58;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_50;
  UnityEngine_Vector2_Fields local_48;
  undefined8 uStack_40;
  
  if (g_data_057a9e05 == '\0') {
    pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717bc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717c8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717d4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717e0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717ec;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b717f8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71804;
    il2cpp_runtime_helper_023445d0(&"surface");
    pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71810;
    il2cpp_runtime_helper_023445d0(&"shadow");
    pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7181c;
    il2cpp_runtime_helper_023445d0(&"AoTTG Color Marker");
    g_data_057a9e05 = '\x01';
  }
  pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71837;
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar14 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71860;
    il2cpp_runtime_helper_02337ed0();
  }
  pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7186a;
  pSVar11 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_03b71a7e:
    pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a83;
    il2cpp_runtime_helper_022b2c90();
label_03b71a83:
    pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a88;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    SVar14.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar11;
    if (pSVar11 == (System_Type_o *)0x0) {
label_03b71894:
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar11;
        pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718b1;
        il2cpp_runtime_helper_022b4080(components->m_Items,pSVar11);
        pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718c0;
        unaff_R12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718da;
        UnityEngine_GameObject___ctor_4dfc440(unaff_R12,"AoTTG Color Marker",components,(MethodInfo *)0x0);
        if (unaff_R12 != (UnityEngine_GameObject_o *)0x0) {
          pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b718ed;
          pUVar13 = UnityEngine_GameObject__get_transform(unaff_R12,(MethodInfo *)0x0);
          if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
            pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71905;
            UnityEngine_Transform__SetParent_4e09e30
                      (pUVar13,(UnityEngine_Transform_o *)parent,0,(MethodInfo *)0x0);
            pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71917;
            parent = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent_object_(unaff_R12,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (g_data_057a694c == '\0') {
              pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7192f;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
              g_data_057a694c = '\x01';
            }
            if (parent != (UnityEngine_RectTransform_o *)0x0) {
              local_48 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
              uStack_40 = 0;
              pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71962;
              UnityEngine_RectTransform__set_anchorMax
                        (parent,(UnityEngine_Vector2_o)local_48,(MethodInfo *)0x0);
              pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71970;
              UnityEngine_RectTransform__set_anchorMin
                        (parent,(UnityEngine_Vector2_o)local_48,(MethodInfo *)0x0);
              pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71981;
              UnityEngine_RectTransform__set_pivot
                        (parent,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71992;
              UnityEngine_RectTransform__set_sizeDelta
                        (parent,(UnityEngine_Vector2_o)0x4190000041900000,(MethodInfo *)0x0);
              pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719a4;
              pMVar17 = MethodInfo_Image_AddComponent_Image;
              SVar14.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   UnityEngine_GameObject__AddComponent_object_(unaff_R12,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image);
              pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719af;
              value = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite(__this,pMVar17);
              if (SVar14.fields.value != 0) {
                pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719c5;
                UnityEngine_UI_Image__set_sprite
                          ((UnityEngine_UI_Image_o *)SVar14.fields.value,value,(MethodInfo *)0x0);
                if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                  pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719ec;
                  UVar31.fields.b = 1.0;
                  UVar31.fields.a = 1.0;
                  UVar31.fields.r = 1.0;
                  UVar31.fields.g = 1.0;
                  UVar31 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                     (theme,"surface",UVar31,(MethodInfo *)0x0);
                  pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b719ff;
                  (*(((UnityEngine_UI_Image_o *)SVar14.fields.value)->klass->vtable)._23_set_color.methodPtr)
                            (UVar31.fields.r,UVar31.fields._8_8_,SVar14.fields.value,
                             (((UnityEngine_UI_Image_o *)SVar14.fields.value)->klass->vtable)._23_set_color.
                             method);
                  pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a14;
                  (*(((UnityEngine_UI_Image_o *)SVar14.fields.value)->klass->vtable)._25_set_raycastTarget.
                    methodPtr)(SVar14.fields.value,0,
                               (((UnityEngine_UI_Image_o *)SVar14.fields.value)->klass->vtable).
                               _25_set_raycastTarget.method);
                  pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a26;
                  pGVar15 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                            UnityEngine_GameObject__AddComponent_object_(unaff_R12,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
                  pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a47;
                  UVar31 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                     (theme,"shadow",
                                      (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                                      (MethodInfo *)0x0);
                  SVar14.fields.value = (System_RuntimeTypeHandle_Fields)0;
                  if (pGVar15 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                    pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a6c;
                    Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
                              (pGVar15,UVar31,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,0,
                               (MethodInfo *)0x0);
                    return parent;
                  }
                }
              }
            }
          }
        }
        goto label_03b71a7e;
      }
      goto label_03b71a83;
    }
    pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b7188b;
    lVar12 = il2cpp_runtime_helper_023051f0(pSVar11);
    if (lVar12 != 0) goto label_03b71894;
  }
  pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a8d;
  pUVar16 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_0231b270();
  __this_01 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
  pGStack_50 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71a97;
  il2cpp_runtime_helper_022b2b10();
  pSStack_70 = (System_Type_o *)SVar14.fields.value;
  pUStack_68 = unaff_R12;
  pUStack_60 = parent;
  pGStack_58 = __this;
  pGStack_50 = theme;
  if (g_data_057a9e06 == '\0') {
    pSStack_88 = (System_Type_array *)0x3b71ac8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    pSStack_88 = (System_Type_array *)0x3b71ad4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    pSStack_88 = (System_Type_array *)0x3b71ae0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pSStack_88 = (System_Type_array *)0x3b71aec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pSStack_88 = (System_Type_array *)0x3b71af8;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pSStack_88 = (System_Type_array *)0x3b71b04;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pSStack_88 = (System_Type_array *)0x3b71b10;
    il2cpp_runtime_helper_023445d0(&"AoTTG Color Slider Marker");
    pSStack_88 = (System_Type_array *)0x3b71b1c;
    il2cpp_runtime_helper_023445d0(&"shadow");
    g_data_057a9e06 = '\x01';
  }
  pSStack_88 = (System_Type_array *)0x3b71b37;
  components_00.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar14 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pSStack_88 = (System_Type_array *)0x3b71b60;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_88 = (System_Type_array *)0x3b71b6a;
  pMVar17 = (MethodInfo *)System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
  if (components_00.rgctx_data == (Il2CppRGCTXData *)0x0) {
label_03b71d51:
    pSStack_88 = (System_Type_array *)0x3b71d56;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    SVar14.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pMVar17;
    if (pMVar17 != (MethodInfo *)0x0) {
      pSStack_88 = (System_Type_array *)0x3b71b8b;
      lVar12 = il2cpp_runtime_helper_023051f0(pMVar17);
      if (lVar12 == 0) goto label_03b71d5b;
    }
    if (*(int *)(components_00.rgctx_data + 3) != 0) {
      components_00.rgctx_data[4].method = pMVar17;
      pSStack_88 = (System_Type_array *)0x3b71bb2;
      il2cpp_runtime_helper_022b4080(components_00.rgctx_data + 4,pMVar17);
      pSStack_88 = (System_Type_array *)0x3b71bc1;
      unaff_R12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      pSStack_88 = (System_Type_array *)0x3b71bdb;
      UnityEngine_GameObject___ctor_4dfc440
                (unaff_R12,"AoTTG Color Slider Marker",(System_Type_array *)components_00.rgctx_data,(MethodInfo *)0x0);
      if (unaff_R12 != (UnityEngine_GameObject_o *)0x0) {
        pSStack_88 = (System_Type_array *)0x3b71bee;
        pUVar13 = UnityEngine_GameObject__get_transform(unaff_R12,(MethodInfo *)0x0);
        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
          pSStack_88 = (System_Type_array *)0x3b71c06;
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar13,(UnityEngine_Transform_o *)pUVar16,0,(MethodInfo *)0x0);
          pSStack_88 = (System_Type_array *)0x3b71c18;
          pUVar16 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent_object_(unaff_R12,MethodInfo_RectTransform_GetComponent_RectTransform);
          if (g_data_057a694c == '\0') {
            pSStack_88 = (System_Type_array *)0x3b71c30;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          if (pUVar16 != (UnityEngine_RectTransform_o *)0x0) {
            UStack_80 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
            uStack_78 = 0;
            pSStack_88 = (System_Type_array *)0x3b71c63;
            UnityEngine_RectTransform__set_anchorMax
                      (pUVar16,(UnityEngine_Vector2_o)UStack_80,(MethodInfo *)0x0);
            pSStack_88 = (System_Type_array *)0x3b71c71;
            UnityEngine_RectTransform__set_anchorMin
                      (pUVar16,(UnityEngine_Vector2_o)UStack_80,(MethodInfo *)0x0);
            pSStack_88 = (System_Type_array *)0x3b71c82;
            UnityEngine_RectTransform__set_pivot
                      (pUVar16,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
            pSStack_88 = (System_Type_array *)0x3b71c93;
            UnityEngine_RectTransform__set_sizeDelta
                      (pUVar16,(UnityEngine_Vector2_o)0x4200000040800000,(MethodInfo *)0x0);
            pSStack_88 = (System_Type_array *)0x3b71ca5;
            pIVar18 = UnityEngine_GameObject__AddComponent_object_
                                (unaff_R12,(MethodInfo_255A020 *)MethodInfo_Image_AddComponent_Image);
            if (pIVar18 != (Il2CppObject *)0x0) {
              pSStack_88 = (System_Type_array *)0x3b71cce;
              (*pIVar18->klass->vtable[0x17].methodPtr)(pIVar18,pIVar18->klass->vtable[0x17].method);
              pSStack_88 = (System_Type_array *)0x3b71ce3;
              (*pIVar18->klass->vtable[0x19].methodPtr)(pIVar18,0,pIVar18->klass->vtable[0x19].method);
              pSStack_88 = (System_Type_array *)0x3b71cf5;
              pGVar15 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                        UnityEngine_GameObject__AddComponent_object_(unaff_R12,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
              SVar14.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pIVar18;
              if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                pSStack_88 = (System_Type_array *)0x3b71d1b;
                UVar31 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                   (__this_01,"shadow",
                                    (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                                    (MethodInfo *)0x0);
                SVar14.fields.value = (System_RuntimeTypeHandle_Fields)0;
                if (pGVar15 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                  pSStack_88 = (System_Type_array *)0x3b71d40;
                  Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
                            (pGVar15,UVar31,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,0,
                             (MethodInfo *)0x0);
                  return pUVar16;
                }
              }
            }
          }
        }
      }
      goto label_03b71d51;
    }
  }
  pSStack_88 = (System_Type_array *)0x3b71d5b;
  il2cpp_runtime_helper_022b2ca0();
label_03b71d5b:
  pSStack_88 = (System_Type_array *)0x3b71d60;
  __this_00 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_0231b270();
  __this_02 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  pSStack_88 = (System_Type_array *)0x3b71d6a;
  il2cpp_runtime_helper_022b2b10();
  __this_03 = (_union_14)(__this_00->fields)._square;
  pMStack_a0 = (MethodInfo *)SVar14.fields.value;
  pGStack_98 = __this_01;
  pUStack_90 = pUVar16;
  pSStack_88 = components;
  if (__this_03.genericMethod != (UnityEngine_UI_RawImage_o *)0x0) {
    pGStack_100 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71d94;
    pUVar16 = UnityEngine_UI_Graphic__get_rectTransform(__this_03.genericMethod,(MethodInfo *)0x0);
    pGStack_100 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71d9f;
    UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar16,__this_02,method_00);
    auStack_e8._8_4_ = extraout_XMM0_Dc;
    auStack_e8._0_4_ = UVar5.fields.x;
    auStack_e8._4_4_ = UVar5.fields.y;
    auStack_e8._12_4_ = extraout_XMM0_Dd;
    auStack_f8._4_4_ = UVar5.fields.y;
    auStack_f8._0_4_ = UVar5.fields.y;
    uStack_f0 = extraout_XMM0_Dc;
    uStack_ec = extraout_XMM0_Dd;
    fVar20 = (__this_00->fields)._value.fields.H;
    auStack_d8 = ZEXT416((uint)fVar20);
    bVar2 = (__this_00->fields)._value.fields.A;
    pGStack_100 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71dc2;
    fVar20 = floorf(fVar20);
    fVar20 = (float)auStack_d8._0_4_ - fVar20;
    auVar23 = ZEXT812(0x3f800000);
    if (fVar20 <= 1.0) {
      auVar23._4_8_ = 0;
      auVar23._0_4_ = fVar20;
    }
    fVar20 = (float)(-(uint)(0.0 <= fVar20) & auVar23._0_4_);
    auStack_d8._4_4_ = 0;
    auStack_d8._0_4_ = fVar20;
    auStack_d8._8_4_ = auStack_d8._8_4_ & auVar23._8_4_;
    auStack_d8._12_4_ = 0;
    auVar24 = ZEXT812(0x3f800000);
    if ((float)auStack_e8._0_4_ <= 1.0) {
      auVar24._4_8_ = 0;
      auVar24._0_4_ = auStack_e8._0_4_;
    }
    fVar29 = (float)(-(uint)(0.0 <= (float)auStack_e8._0_4_) & auVar24._0_4_);
    uVar30 = auStack_e8._8_4_ & auVar24._8_4_;
    auVar27 = ZEXT416(uVar30) << 0x40;
    auStack_e8._4_4_ = 0;
    auStack_e8._0_4_ = fVar29;
    auStack_e8._8_4_ = uVar30;
    auStack_e8._12_4_ = 0;
    fVar28 = 1.0;
    if ((float)auStack_f8._0_4_ <= 1.0) {
      fVar28 = (float)auStack_f8._0_4_;
    }
    fVar28 = (float)(-(uint)(0.0 <= (float)auStack_f8._0_4_) & (uint)fVar28);
    _auStack_f8 = ZEXT416((uint)fVar28);
    pMVar17 = (MethodInfo *)0x1;
    pGStack_100 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e29;
    UVar31 = UnityEngine_Color__HSVToRGB_4de5b40(fVar20,fVar29,fVar28,1,(MethodInfo *)0x0);
    uStack_b0 = auVar27._8_8_;
    uStack_b8 = UVar31.fields._8_8_;
    auStack_c8._8_4_ = extraout_XMM0_Dc_00;
    auStack_c8._0_8_ = UVar31.fields._0_8_;
    auStack_c8._12_4_ = extraout_XMM0_Dd_00;
    pGStack_100 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e38;
    bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar31.fields.r,pMVar17);
    pGStack_100 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e49;
    bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)auStack_c8._4_4_,pMVar17);
    pGStack_100 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e56;
    bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)uStack_b8,pMVar17);
    pMVar17 = (MethodInfo *)
              ((ulong)bVar7 | (ulong)bVar2 << 0x18 | (ulong)bVar8 << 8 | (ulong)bVar9 << 0x10 |
              (ulong)(uint)auStack_d8._0_4_ << 0x20);
    *(MethodInfo **)&(__this_00->fields)._value.fields = pMVar17;
    (__this_00->fields)._value.fields.S = (float)auStack_e8._0_4_;
    (__this_00->fields)._value.fields.V = (float)auStack_f8._0_4_;
    pGStack_100 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71ea3;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this_00,pMVar17);
    pGStack_100 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71eab;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this_00,pMVar17);
    pSVar3 = (__this_00->fields).Changed;
    if (pSVar3 == (System_Action_GisketchUIColorPickerValue__o *)0x0) {
      return (UnityEngine_RectTransform_o *)0x0;
    }
    uVar1 = (__this_00->fields)._value.fields.S;
    uVar4._0_1_ = (__this_00->fields)._value.fields.R;
    uVar4._1_1_ = (__this_00->fields)._value.fields.G;
    uVar4._2_1_ = (__this_00->fields)._value.fields.B;
    uVar4._3_1_ = (__this_00->fields)._value.fields.A;
    uVar4._4_4_ = (__this_00->fields)._value.fields.H;
    vtableDispatch = (code *)(pSVar3->fields).invoke_impl;
    pUVar16 = (UnityEngine_RectTransform_o *)
              (*vtableDispatch)
                        (uVar1,(pSVar3->fields).method_code,uVar4,(pSVar3->fields).method,
                         vtableDispatch);
    return pUVar16;
  }
  pGStack_100 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71eeb;
  il2cpp_runtime_helper_022b2c90();
  eventData = __this_02;
  __this_04 = (long *)__this_03;
  pGStack_108 = __this_00;
  pGStack_100 = __this_01;
  if (g_data_057a9e07 == '\0') {
    __this_04 = &TypeInfo_RectTransformUtility;
    pSStack_138 = (System_Type_array *)0x3b71f12;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e07 = '\x01';
  }
  UStack_128.x = 0.0;
  UStack_128.y = 0.0;
  cam = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  if (__this_02 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    UStack_120 = (__this_02->fields)._position_k__BackingField.fields;
    uStack_118 = 0;
    pSStack_138 = (System_Type_array *)0x3b71f42;
    cam = (UnityEngine_EventSystems_PointerEventData_o *)
          UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_02,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      pSStack_138 = (System_Type_array *)0x3b71f5d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_138 = (System_Type_array *)0x3b71f74;
    eventData = cam;
    __this_04 = (long *)__this_03;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (__this_03.genericMethod,(UnityEngine_Vector2_o)UStack_120,(UnityEngine_Camera_o *)cam,
               (UnityEngine_Vector2_o *)&UStack_128,(MethodInfo *)0x0);
    if (__this_03.genericMethod != (UnityEngine_UI_RawImage_o *)0x0) {
      pSStack_138 = (System_Type_array *)0x3b71f87;
      UnityEngine_RectTransform__get_rect(__this_03.genericMethod,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  pSStack_138 = (System_Type_array *)0x3b72015;
  il2cpp_runtime_helper_022b2c90();
  __this_05 = *(UnityEngine_UI_Graphic_o **)&((UnityEngine_Color_o *)((long)__this_04 + 0x28))->fields;
  pUStack_150 = cam;
  _Stack_148 = __this_03;
  pUStack_140 = pUVar16;
  pSStack_138 = components;
  if (__this_05 == (UnityEngine_UI_Graphic_o *)0x0) {
    pUStack_1b0 = (UnityEngine_RectTransform_o *)0x3b721a5;
    il2cpp_runtime_helper_022b2c90();
    __this_06 = *(UnityEngine_UI_Graphic_o **)&(__this_05->fields).m_Color.fields.b;
    _Stack_1d0 = (_union_14)__this_04;
    pUStack_1c8 = unaff_R12;
    _Stack_1c0.rgctx_data = components_00.rgctx_data;
    _Stack_1b8 = __this_03;
    pUStack_1b0 = pUVar16;
    if (__this_06 == (UnityEngine_UI_Graphic_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9e01 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9e01 = '\x01';
      }
      x = *(UnityEngine_Object_o **)&(__this_06->fields).m_SkipLayoutUpdate;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar17 = (MethodInfo *)0x0;
      bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return (UnityEngine_RectTransform_o *)CONCAT44(extraout_var,bVar10);
      }
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
                ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_06,pMVar17);
      return extraout_RAX_00;
    }
    pUVar16 = UnityEngine_UI_Graphic__get_rectTransform(__this_06,(MethodInfo *)0x0);
    UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar16,eventData,method_02);
    if (g_data_057a7b0a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a7b0a = '\x01';
    }
    fVar20 = UVar5.fields.x * 255.0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    dVar22 = (double)fVar20;
    pMVar17 = (MethodInfo *)auStack_1f8;
    auStack_1f0._0_8_ = dVar22;
    dVar22 = modf(dVar22,(double *)pMVar17,(MethodInfo *)eventData);
    if (0.0 <= fVar20) {
      if ((dVar22 != 0.5) || (NAN(dVar22))) {
        auStack_1f8 = (undefined1  [8])floor((double)auStack_1f0._0_8_ + 0.5,pMVar17);
      }
      else if (((long)(double)auStack_1f8 & 1U) != 0) {
        auStack_1f8 = (undefined1  [8])((double)auStack_1f8 + 1.0);
      }
    }
    else if ((dVar22 != -0.5) || (NAN(dVar22))) {
      auStack_1f8 = (undefined1  [8])ceil((double)auStack_1f0._0_8_ + -0.5,pMVar17);
    }
    else if (((long)(double)auStack_1f8 & 1U) != 0) {
      auStack_1f8 = (undefined1  [8])((double)auStack_1f8 + -1.0);
    }
    bVar2 = *(byte *)&(__this_05->fields).m_OnDirtyLayoutCallback;
    bVar7 = *(byte *)((long)&(__this_05->fields).m_OnDirtyLayoutCallback + 1);
    bVar8 = *(byte *)((long)&(__this_05->fields).m_OnDirtyLayoutCallback + 2);
    fVar20 = *(float *)((long)&(__this_05->fields).m_OnDirtyLayoutCallback + 4);
    auStack_1e0 = ZEXT416((uint)fVar20);
    auStack_1f0 = ZEXT416(*(uint *)&(__this_05->fields).m_OnDirtyVertsCallback);
    fVar28 = *(float *)((long)&(__this_05->fields).m_OnDirtyVertsCallback + 4);
    fVar29 = floorf(fVar20);
    fVar29 = (float)auStack_1e0._0_4_ - fVar29;
    fVar20 = 1.0;
    if (fVar29 <= 1.0) {
      fVar20 = fVar29;
    }
    fVar6 = 1.0;
    if ((float)auStack_1f0._0_4_ <= 1.0) {
      fVar6 = (float)auStack_1f0._0_4_;
    }
    fVar21 = 1.0;
    if (fVar28 <= 1.0) {
      fVar21 = fVar28;
    }
    (__this_05->fields).m_OnDirtyLayoutCallback =
         (UnityEngine_Events_UnityAction_o *)
         ((ulong)bVar7 << 8 | (ulong)(uint)((int)(double)auStack_1f8 << 0x18) | (ulong)bVar2 |
          (ulong)bVar8 << 0x10 | (ulong)(-(uint)(0.0 <= fVar29) & (uint)fVar20) << 0x20);
    (__this_05->fields).m_OnDirtyVertsCallback =
         (UnityEngine_Events_UnityAction_o *)
         CONCAT44(-(uint)(0.0 <= fVar28) & (uint)fVar21,-(uint)(0.0 <= (float)auStack_1f0._0_4_) & (uint)fVar6
                 );
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_05,(MethodInfo *)eventData);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_05,(MethodInfo *)eventData);
    pUVar19 = (__this_05->fields).m_OnDirtyMaterialCallback;
    if (pUVar19 == (UnityEngine_Events_UnityAction_o *)0x0) {
      return (UnityEngine_RectTransform_o *)0x0;
    }
    vtableDispatch = (code *)(pUVar19->fields).invoke_impl;
    pUVar16 = (UnityEngine_RectTransform_o *)
              (*vtableDispatch)
                        ((int)(__this_05->fields).m_OnDirtyVertsCallback,(pUVar19->fields).method_code,
                         (__this_05->fields).m_OnDirtyLayoutCallback,(pUVar19->fields).method,
                         vtableDispatch);
    return pUVar16;
  }
  pUStack_1b0 = (UnityEngine_RectTransform_o *)0x3b72044;
  pUVar16 = UnityEngine_UI_Graphic__get_rectTransform(__this_05,(MethodInfo *)0x0);
  pUStack_1b0 = (UnityEngine_RectTransform_o *)0x3b7204f;
  UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar16,eventData,method_01);
  auStack_188._8_4_ = extraout_XMM0_Dc_01;
  auStack_188._0_4_ = UVar5.fields.x;
  auStack_188._4_4_ = UVar5.fields.y;
  auStack_188._12_4_ = extraout_XMM0_Dd_01;
  auStack_198 = ZEXT416(*(uint *)((long)__this_04 + 0x80));
  auStack_1a8 = ZEXT416(*(uint *)((long)__this_04 + 0x84));
  bVar2 = *(byte *)((long)__this_04 + 0x7b);
  pUStack_1b0 = (UnityEngine_RectTransform_o *)0x3b7207c;
  fVar20 = floorf(UVar5.fields.x);
  fVar20 = (float)auStack_188._0_4_ - fVar20;
  auVar25 = ZEXT812(0x3f800000);
  if (fVar20 <= 1.0) {
    auVar25._4_8_ = 0;
    auVar25._0_4_ = fVar20;
  }
  fVar20 = (float)(-(uint)(0.0 <= fVar20) & auVar25._0_4_);
  auStack_188._4_4_ = 0;
  auStack_188._0_4_ = fVar20;
  auStack_188._8_4_ = auStack_188._8_4_ & auVar25._8_4_;
  auStack_188._12_4_ = 0;
  auVar26 = ZEXT812(0x3f800000);
  if ((float)auStack_198._0_4_ <= 1.0) {
    auVar26._4_8_ = 0;
    auVar26._0_4_ = auStack_198._0_4_;
  }
  fVar29 = (float)(-(uint)(0.0 <= (float)auStack_198._0_4_) & auVar26._0_4_);
  uVar30 = auStack_198._8_4_ & auVar26._8_4_;
  auVar27 = ZEXT416(uVar30) << 0x40;
  auStack_198._4_4_ = 0;
  auStack_198._0_4_ = fVar29;
  auStack_198._8_4_ = uVar30;
  auStack_198._12_4_ = 0;
  fVar28 = 1.0;
  if ((float)auStack_1a8._0_4_ <= 1.0) {
    fVar28 = (float)auStack_1a8._0_4_;
  }
  fVar28 = (float)(-(uint)(0.0 <= (float)auStack_1a8._0_4_) & (uint)fVar28);
  auStack_1a8 = ZEXT416((uint)fVar28);
  pMVar17 = (MethodInfo *)0x1;
  pUStack_1b0 = (UnityEngine_RectTransform_o *)0x3b720e3;
  UVar31 = UnityEngine_Color__HSVToRGB_4de5b40(fVar20,fVar29,fVar28,1,(MethodInfo *)0x0);
  uStack_160 = auVar27._8_8_;
  uStack_168 = UVar31.fields._8_8_;
  auStack_178._8_4_ = extraout_XMM0_Dc_02;
  auStack_178._0_8_ = UVar31.fields._0_8_;
  auStack_178._12_4_ = extraout_XMM0_Dd_02;
  pUStack_1b0 = (UnityEngine_RectTransform_o *)0x3b720f2;
  bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar31.fields.r,pMVar17);
  pUStack_1b0 = (UnityEngine_RectTransform_o *)0x3b72103;
  bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)auStack_178._4_4_,pMVar17);
  pUStack_1b0 = (UnityEngine_RectTransform_o *)0x3b72110;
  bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)uStack_168,pMVar17);
  pUVar19 = (UnityEngine_Events_UnityAction_o *)
            ((ulong)bVar7 | (ulong)bVar2 << 0x18 | (ulong)bVar8 << 8 | (ulong)(uint)auStack_188._0_4_ << 0x20
            | (ulong)bVar9 << 0x10);
  *(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x78) = pUVar19;
  *(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x80) =
       (UnityEngine_Events_UnityAction_o *)CONCAT44(auStack_1a8._0_4_,auStack_198._0_4_);
  pUStack_1b0 = (UnityEngine_RectTransform_o *)0x3b7215d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_04,(MethodInfo *)pUVar19);
  pUStack_1b0 = (UnityEngine_RectTransform_o *)0x3b72165;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_04,(MethodInfo *)pUVar19);
  pUVar19 = *(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x88);
  if (pUVar19 == (UnityEngine_Events_UnityAction_o *)0x0) {
    return (UnityEngine_RectTransform_o *)0x0;
  }
  vtableDispatch = (code *)(pUVar19->fields).invoke_impl;
  pUVar16 = (UnityEngine_RectTransform_o *)
            (*vtableDispatch)
                      ((int)*(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x80),
                       (pUVar19->fields).method_code,
                       *(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x78),(pUVar19->fields).method
                       ,vtableDispatch);
  return pUVar16;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$LineMarker
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__LineMarker (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b71aa0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__LineMarker
          (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
          MethodInfo *method)

{
  undefined4 uVar1;
  UnityEngine_Vector2_Fields value;
  byte bVar2;
  System_Action_GisketchUIColorPickerValue__o *pSVar3;
  undefined8 uVar4;
  code *vtableDispatch;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o UVar5;
  float fVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  bool_conflict bVar10;
  _union_13 components;
  MethodInfo *pMVar11;
  long lVar12;
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar13;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this_01;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_EventSystems_PointerEventData_o *cam;
  UnityEngine_RectTransform_o *extraout_RAX;
  undefined4 extraout_var;
  UnityEngine_RectTransform_o *extraout_RAX_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_RuntimeTypeHandle_o SVar15;
  UnityEngine_EventSystems_PointerEventData_o *__this_02;
  UnityEngine_EventSystems_PointerEventData_o *eventData;
  UnityEngine_Events_UnityAction_o *pUVar16;
  _union_14 __this_03;
  long *__this_04;
  UnityEngine_UI_Graphic_o *__this_05;
  UnityEngine_UI_Graphic_o *__this_06;
  UnityEngine_GameObject_o *unaff_R12;
  float fVar17;
  float fVar18;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  double dVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  uint uVar27;
  UnityEngine_Color_o UVar28;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  _union_14 _Stack_188;
  UnityEngine_GameObject_o *pUStack_180;
  _union_13 _Stack_178;
  _union_14 _Stack_170;
  UnityEngine_RectTransform_o *pUStack_168;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_108;
  _union_14 _Stack_100;
  UnityEngine_RectTransform_o *pUStack_f8;
  UnityEngine_Vector2_Fields UStack_e0;
  UnityEngine_Vector2_Fields UStack_d8;
  undefined8 uStack_d0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_c0;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_b8;
  undefined1 local_b0 [8];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  MethodInfo *pMStack_58;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStack_50;
  UnityEngine_RectTransform_o *pUStack_48;
  
  if (g_data_057a9e06 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Color Slider Marker");
    il2cpp_runtime_helper_023445d0(&"shadow");
    g_data_057a9e06 = '\x01';
    method = extraout_RDX;
  }
  components.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type,1,method);
  SVar15 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar11 = (MethodInfo *)System_Type__GetTypeFromHandle(SVar15,(MethodInfo *)0x0);
  if (components.rgctx_data == (Il2CppRGCTXData *)0x0) {
label_03b71d51:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    SVar15.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pMVar11;
    if ((pMVar11 != (MethodInfo *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pMVar11), lVar12 == 0))
    goto label_03b71d5b;
    if (*(int *)(components.rgctx_data + 3) != 0) {
      components.rgctx_data[4].method = pMVar11;
      il2cpp_runtime_helper_022b4080(components.rgctx_data + 4,pMVar11);
      unaff_R12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440
                (unaff_R12,"AoTTG Color Slider Marker",(System_Type_array *)components.rgctx_data,(MethodInfo *)0x0);
      if ((unaff_R12 != (UnityEngine_GameObject_o *)0x0) &&
         (__this = UnityEngine_GameObject__get_transform(unaff_R12,(MethodInfo *)0x0),
         __this != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_4e09e30(__this,(UnityEngine_Transform_o *)parent,0,(MethodInfo *)0x0)
        ;
        parent = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent_object_(unaff_R12,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (g_data_057a694c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        if (parent != (UnityEngine_RectTransform_o *)0x0) {
          value = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
          UnityEngine_RectTransform__set_anchorMax(parent,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMin(parent,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (parent,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_sizeDelta
                    (parent,(UnityEngine_Vector2_o)0x4200000040800000,(MethodInfo *)0x0);
          pIVar13 = UnityEngine_GameObject__AddComponent_object_(unaff_R12,MethodInfo_Image_AddComponent_Image);
          if (pIVar13 != (Il2CppObject *)0x0) {
            (*pIVar13->klass->vtable[0x17].methodPtr)(pIVar13,pIVar13->klass->vtable[0x17].method);
            (*pIVar13->klass->vtable[0x19].methodPtr)(pIVar13,0,pIVar13->klass->vtable[0x19].method);
            __this_00 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                        UnityEngine_GameObject__AddComponent_object_(unaff_R12,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
            SVar15.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pIVar13;
            if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              UVar28 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                 (theme,"shadow",
                                  (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),(MethodInfo *)0x0
                                 );
              SVar15.fields.value = (System_RuntimeTypeHandle_Fields)0;
              if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
                          (__this_00,UVar28,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,0,
                           (MethodInfo *)0x0);
                return parent;
              }
            }
          }
        }
      }
      goto label_03b71d51;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_03b71d5b:
  __this_01 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_0231b270();
  __this_02 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  __this_03 = (_union_14)(__this_01->fields)._square;
  pMStack_58 = (MethodInfo *)SVar15.fields.value;
  pGStack_50 = theme;
  pUStack_48 = parent;
  if (__this_03.genericMethod != (UnityEngine_UI_RawImage_o *)0x0) {
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71d94;
    pUVar14 = UnityEngine_UI_Graphic__get_rectTransform(__this_03.genericMethod,(MethodInfo *)0x0);
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71d9f;
    UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar14,__this_02,method_00);
    local_a0._8_4_ = extraout_XMM0_Dc;
    local_a0._0_4_ = UVar5.fields.x;
    local_a0._4_4_ = UVar5.fields.y;
    local_a0._12_4_ = extraout_XMM0_Dd;
    local_b0._4_4_ = UVar5.fields.y;
    local_b0._0_4_ = UVar5.fields.y;
    uStack_a8 = extraout_XMM0_Dc;
    uStack_a4 = extraout_XMM0_Dd;
    fVar17 = (__this_01->fields)._value.fields.H;
    local_90 = ZEXT416((uint)fVar17);
    bVar2 = (__this_01->fields)._value.fields.A;
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71dc2;
    fVar17 = floorf(fVar17);
    fVar17 = (float)local_90._0_4_ - fVar17;
    auVar20 = ZEXT812(0x3f800000);
    if (fVar17 <= 1.0) {
      auVar20._4_8_ = 0;
      auVar20._0_4_ = fVar17;
    }
    fVar17 = (float)(-(uint)(0.0 <= fVar17) & auVar20._0_4_);
    local_90._4_4_ = 0;
    local_90._0_4_ = fVar17;
    local_90._8_4_ = local_90._8_4_ & auVar20._8_4_;
    local_90._12_4_ = 0;
    auVar21 = ZEXT812(0x3f800000);
    if ((float)local_a0._0_4_ <= 1.0) {
      auVar21._4_8_ = 0;
      auVar21._0_4_ = local_a0._0_4_;
    }
    fVar26 = (float)(-(uint)(0.0 <= (float)local_a0._0_4_) & auVar21._0_4_);
    uVar27 = local_a0._8_4_ & auVar21._8_4_;
    auVar24 = ZEXT416(uVar27) << 0x40;
    local_a0._4_4_ = 0;
    local_a0._0_4_ = fVar26;
    local_a0._8_4_ = uVar27;
    local_a0._12_4_ = 0;
    fVar25 = 1.0;
    if ((float)local_b0._0_4_ <= 1.0) {
      fVar25 = (float)local_b0._0_4_;
    }
    fVar25 = (float)(-(uint)(0.0 <= (float)local_b0._0_4_) & (uint)fVar25);
    _local_b0 = ZEXT416((uint)fVar25);
    pMVar11 = (MethodInfo *)0x1;
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e29;
    UVar28 = UnityEngine_Color__HSVToRGB_4de5b40(fVar17,fVar26,fVar25,1,(MethodInfo *)0x0);
    uStack_68 = auVar24._8_8_;
    local_70 = UVar28.fields._8_8_;
    local_80._8_4_ = extraout_XMM0_Dc_00;
    local_80._0_8_ = UVar28.fields._0_8_;
    local_80._12_4_ = extraout_XMM0_Dd_00;
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e38;
    bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar28.fields.r,pMVar11);
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e49;
    bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)local_80._4_4_,pMVar11);
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71e56;
    bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)local_70,pMVar11);
    pMVar11 = (MethodInfo *)
              ((ulong)bVar7 | (ulong)bVar2 << 0x18 | (ulong)bVar8 << 8 | (ulong)bVar9 << 0x10 |
              (ulong)(uint)local_90._0_4_ << 0x20);
    *(MethodInfo **)&(__this_01->fields)._value.fields = pMVar11;
    (__this_01->fields)._value.fields.S = (float)local_a0._0_4_;
    (__this_01->fields)._value.fields.V = (float)local_b0._0_4_;
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71ea3;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this_01,pMVar11);
    pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71eab;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this_01,pMVar11);
    pSVar3 = (__this_01->fields).Changed;
    if (pSVar3 == (System_Action_GisketchUIColorPickerValue__o *)0x0) {
      return (UnityEngine_RectTransform_o *)0x0;
    }
    uVar1 = (__this_01->fields)._value.fields.S;
    uVar4._0_1_ = (__this_01->fields)._value.fields.R;
    uVar4._1_1_ = (__this_01->fields)._value.fields.G;
    uVar4._2_1_ = (__this_01->fields)._value.fields.B;
    uVar4._3_1_ = (__this_01->fields)._value.fields.A;
    uVar4._4_4_ = (__this_01->fields)._value.fields.H;
    vtableDispatch = (code *)(pSVar3->fields).invoke_impl;
    pUVar14 = (UnityEngine_RectTransform_o *)
              (*vtableDispatch)
                        (uVar1,(pSVar3->fields).method_code,uVar4,(pSVar3->fields).method,
                         vtableDispatch);
    return pUVar14;
  }
  pGStack_b8 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x3b71eeb;
  il2cpp_runtime_helper_022b2c90();
  eventData = __this_02;
  __this_04 = (long *)__this_03;
  pGStack_c0 = __this_01;
  pGStack_b8 = theme;
  if (g_data_057a9e07 == '\0') {
    __this_04 = &TypeInfo_RectTransformUtility;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e07 = '\x01';
  }
  UStack_e0.x = 0.0;
  UStack_e0.y = 0.0;
  cam = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  if (__this_02 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    UStack_d8 = (__this_02->fields)._position_k__BackingField.fields;
    uStack_d0 = 0;
    cam = (UnityEngine_EventSystems_PointerEventData_o *)
          UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_02,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    eventData = cam;
    __this_04 = (long *)__this_03;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (__this_03.genericMethod,(UnityEngine_Vector2_o)UStack_d8,(UnityEngine_Camera_o *)cam,
               (UnityEngine_Vector2_o *)&UStack_e0,(MethodInfo *)0x0);
    if (__this_03.genericMethod != (UnityEngine_UI_RawImage_o *)0x0) {
      UnityEngine_RectTransform__get_rect(__this_03.genericMethod,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_05 = *(UnityEngine_UI_Graphic_o **)&((UnityEngine_Color_o *)((long)__this_04 + 0x28))->fields;
  pUStack_108 = cam;
  _Stack_100 = __this_03;
  pUStack_f8 = parent;
  if (__this_05 == (UnityEngine_UI_Graphic_o *)0x0) {
    pUStack_168 = (UnityEngine_RectTransform_o *)0x3b721a5;
    il2cpp_runtime_helper_022b2c90();
    __this_06 = *(UnityEngine_UI_Graphic_o **)&(__this_05->fields).m_Color.fields.b;
    _Stack_188 = (_union_14)__this_04;
    pUStack_180 = unaff_R12;
    _Stack_178.rgctx_data = components.rgctx_data;
    _Stack_170 = __this_03;
    pUStack_168 = parent;
    if (__this_06 == (UnityEngine_UI_Graphic_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9e01 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9e01 = '\x01';
      }
      x = *(UnityEngine_Object_o **)&(__this_06->fields).m_SkipLayoutUpdate;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar11 = (MethodInfo *)0x0;
      bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return (UnityEngine_RectTransform_o *)CONCAT44(extraout_var,bVar10);
      }
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
                ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_06,pMVar11);
      return extraout_RAX_00;
    }
    pUVar14 = UnityEngine_UI_Graphic__get_rectTransform(__this_06,(MethodInfo *)0x0);
    UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar14,eventData,method_02);
    if (g_data_057a7b0a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a7b0a = '\x01';
    }
    fVar17 = UVar5.fields.x * 255.0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    dVar19 = (double)fVar17;
    pMVar11 = (MethodInfo *)auStack_1b0;
    auStack_1a8._0_8_ = dVar19;
    dVar19 = modf(dVar19,(double *)pMVar11,(MethodInfo *)eventData);
    if (0.0 <= fVar17) {
      if ((dVar19 != 0.5) || (NAN(dVar19))) {
        auStack_1b0 = (undefined1  [8])floor((double)auStack_1a8._0_8_ + 0.5,pMVar11);
      }
      else if (((long)(double)auStack_1b0 & 1U) != 0) {
        auStack_1b0 = (undefined1  [8])((double)auStack_1b0 + 1.0);
      }
    }
    else if ((dVar19 != -0.5) || (NAN(dVar19))) {
      auStack_1b0 = (undefined1  [8])ceil((double)auStack_1a8._0_8_ + -0.5,pMVar11);
    }
    else if (((long)(double)auStack_1b0 & 1U) != 0) {
      auStack_1b0 = (undefined1  [8])((double)auStack_1b0 + -1.0);
    }
    bVar2 = *(byte *)&(__this_05->fields).m_OnDirtyLayoutCallback;
    bVar7 = *(byte *)((long)&(__this_05->fields).m_OnDirtyLayoutCallback + 1);
    bVar8 = *(byte *)((long)&(__this_05->fields).m_OnDirtyLayoutCallback + 2);
    fVar17 = *(float *)((long)&(__this_05->fields).m_OnDirtyLayoutCallback + 4);
    auStack_198 = ZEXT416((uint)fVar17);
    auStack_1a8 = ZEXT416(*(uint *)&(__this_05->fields).m_OnDirtyVertsCallback);
    fVar25 = *(float *)((long)&(__this_05->fields).m_OnDirtyVertsCallback + 4);
    fVar26 = floorf(fVar17);
    fVar26 = (float)auStack_198._0_4_ - fVar26;
    fVar17 = 1.0;
    if (fVar26 <= 1.0) {
      fVar17 = fVar26;
    }
    fVar6 = 1.0;
    if ((float)auStack_1a8._0_4_ <= 1.0) {
      fVar6 = (float)auStack_1a8._0_4_;
    }
    fVar18 = 1.0;
    if (fVar25 <= 1.0) {
      fVar18 = fVar25;
    }
    (__this_05->fields).m_OnDirtyLayoutCallback =
         (UnityEngine_Events_UnityAction_o *)
         ((ulong)bVar7 << 8 | (ulong)(uint)((int)(double)auStack_1b0 << 0x18) | (ulong)bVar2 |
          (ulong)bVar8 << 0x10 | (ulong)(-(uint)(0.0 <= fVar26) & (uint)fVar17) << 0x20);
    (__this_05->fields).m_OnDirtyVertsCallback =
         (UnityEngine_Events_UnityAction_o *)
         CONCAT44(-(uint)(0.0 <= fVar25) & (uint)fVar18,-(uint)(0.0 <= (float)auStack_1a8._0_4_) & (uint)fVar6
                 );
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_05,(MethodInfo *)eventData);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_05,(MethodInfo *)eventData);
    pUVar16 = (__this_05->fields).m_OnDirtyMaterialCallback;
    if (pUVar16 == (UnityEngine_Events_UnityAction_o *)0x0) {
      return (UnityEngine_RectTransform_o *)0x0;
    }
    vtableDispatch = (code *)(pUVar16->fields).invoke_impl;
    pUVar14 = (UnityEngine_RectTransform_o *)
              (*vtableDispatch)
                        ((int)(__this_05->fields).m_OnDirtyVertsCallback,(pUVar16->fields).method_code,
                         (__this_05->fields).m_OnDirtyLayoutCallback,(pUVar16->fields).method,
                         vtableDispatch);
    return pUVar14;
  }
  pUStack_168 = (UnityEngine_RectTransform_o *)0x3b72044;
  pUVar14 = UnityEngine_UI_Graphic__get_rectTransform(__this_05,(MethodInfo *)0x0);
  pUStack_168 = (UnityEngine_RectTransform_o *)0x3b7204f;
  UVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar14,eventData,method_01);
  auStack_140._8_4_ = extraout_XMM0_Dc_01;
  auStack_140._0_4_ = UVar5.fields.x;
  auStack_140._4_4_ = UVar5.fields.y;
  auStack_140._12_4_ = extraout_XMM0_Dd_01;
  auStack_150 = ZEXT416(*(uint *)((long)__this_04 + 0x80));
  auStack_160 = ZEXT416(*(uint *)((long)__this_04 + 0x84));
  bVar2 = *(byte *)((long)__this_04 + 0x7b);
  pUStack_168 = (UnityEngine_RectTransform_o *)0x3b7207c;
  fVar17 = floorf(UVar5.fields.x);
  fVar17 = (float)auStack_140._0_4_ - fVar17;
  auVar22 = ZEXT812(0x3f800000);
  if (fVar17 <= 1.0) {
    auVar22._4_8_ = 0;
    auVar22._0_4_ = fVar17;
  }
  fVar17 = (float)(-(uint)(0.0 <= fVar17) & auVar22._0_4_);
  auStack_140._4_4_ = 0;
  auStack_140._0_4_ = fVar17;
  auStack_140._8_4_ = auStack_140._8_4_ & auVar22._8_4_;
  auStack_140._12_4_ = 0;
  auVar23 = ZEXT812(0x3f800000);
  if ((float)auStack_150._0_4_ <= 1.0) {
    auVar23._4_8_ = 0;
    auVar23._0_4_ = auStack_150._0_4_;
  }
  fVar26 = (float)(-(uint)(0.0 <= (float)auStack_150._0_4_) & auVar23._0_4_);
  uVar27 = auStack_150._8_4_ & auVar23._8_4_;
  auVar24 = ZEXT416(uVar27) << 0x40;
  auStack_150._4_4_ = 0;
  auStack_150._0_4_ = fVar26;
  auStack_150._8_4_ = uVar27;
  auStack_150._12_4_ = 0;
  fVar25 = 1.0;
  if ((float)auStack_160._0_4_ <= 1.0) {
    fVar25 = (float)auStack_160._0_4_;
  }
  fVar25 = (float)(-(uint)(0.0 <= (float)auStack_160._0_4_) & (uint)fVar25);
  auStack_160 = ZEXT416((uint)fVar25);
  pMVar11 = (MethodInfo *)0x1;
  pUStack_168 = (UnityEngine_RectTransform_o *)0x3b720e3;
  UVar28 = UnityEngine_Color__HSVToRGB_4de5b40(fVar17,fVar26,fVar25,1,(MethodInfo *)0x0);
  uStack_118 = auVar24._8_8_;
  uStack_120 = UVar28.fields._8_8_;
  auStack_130._8_4_ = extraout_XMM0_Dc_02;
  auStack_130._0_8_ = UVar28.fields._0_8_;
  auStack_130._12_4_ = extraout_XMM0_Dd_02;
  pUStack_168 = (UnityEngine_RectTransform_o *)0x3b720f2;
  bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar28.fields.r,pMVar11);
  pUStack_168 = (UnityEngine_RectTransform_o *)0x3b72103;
  bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)auStack_130._4_4_,pMVar11);
  pUStack_168 = (UnityEngine_RectTransform_o *)0x3b72110;
  bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte((float)uStack_120,pMVar11);
  pUVar16 = (UnityEngine_Events_UnityAction_o *)
            ((ulong)bVar7 | (ulong)bVar2 << 0x18 | (ulong)bVar8 << 8 | (ulong)(uint)auStack_140._0_4_ << 0x20
            | (ulong)bVar9 << 0x10);
  *(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x78) = pUVar16;
  *(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x80) =
       (UnityEngine_Events_UnityAction_o *)CONCAT44(auStack_160._0_4_,auStack_150._0_4_);
  pUStack_168 = (UnityEngine_RectTransform_o *)0x3b7215d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_04,(MethodInfo *)pUVar16);
  pUStack_168 = (UnityEngine_RectTransform_o *)0x3b72165;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_04,(MethodInfo *)pUVar16);
  pUVar16 = *(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x88);
  if (pUVar16 == (UnityEngine_Events_UnityAction_o *)0x0) {
    return (UnityEngine_RectTransform_o *)0x0;
  }
  vtableDispatch = (code *)(pUVar16->fields).invoke_impl;
  pUVar14 = (UnityEngine_RectTransform_o *)
            (*vtableDispatch)
                      ((int)*(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x80),
                       (pUVar16->fields).method_code,
                       *(UnityEngine_Events_UnityAction_o **)((long)__this_04 + 0x78),(pUVar16->fields).method
                       ,vtableDispatch);
  return pUVar14;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Normalized
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized (UnityEngine_RectTransform_o* rect, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b71ef0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized
          (UnityEngine_RectTransform_o *rect,UnityEngine_EventSystems_PointerEventData_o *eventData,
          MethodInfo *method)

{
  undefined4 uVar1;
  byte bVar2;
  System_Action_GisketchUIColorPickerValue__o *pSVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector2_o UVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  bool_conflict bVar14;
  UnityEngine_EventSystems_PointerEventData_o *eventData_00;
  UnityEngine_RectTransform_o *pUVar15;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this;
  MethodInfo *pMVar16;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_UI_Graphic_o *__this_01;
  float fVar17;
  float extraout_XMM0_Da;
  float fVar18;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar19;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  double dVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Rect_o UVar23;
  UnityEngine_Color_o UVar24;
  Il2CppMethodPointer local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_d8;
  float fStack_7c;
  float local_70;
  UnityEngine_Vector2_Fields local_30;
  UnityEngine_Vector2_Fields local_28;
  undefined8 uStack_20;
  
  eventData_00 = eventData;
  __this = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)rect;
  if (g_data_057a9e07 == '\0') {
    __this = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)&TypeInfo_RectTransformUtility;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e07 = '\x01';
  }
  local_30.x = 0.0;
  local_30.y = 0.0;
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    local_28 = (eventData->fields)._position_k__BackingField.fields;
    uStack_20 = 0;
    eventData_00 = (UnityEngine_EventSystems_PointerEventData_o *)
                   UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                             (eventData,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)rect;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,(UnityEngine_Vector2_o)local_28,(UnityEngine_Camera_o *)eventData_00,
               (UnityEngine_Vector2_o *)&local_30,(MethodInfo *)0x0);
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      UVar23 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
      fVar21 = UVar23.fields.m_XMin;
      fVar19 = UVar23.fields.m_YMin;
      fVar22 = UVar23.fields.m_Width + fVar21;
      if ((fVar21 != fVar22) || (fVar17 = 0.0, NAN(fVar21) || NAN(fVar22))) {
        fVar21 = (local_30.x - fVar21) / (fVar22 - fVar21);
        fVar17 = 0.0;
        if ((0.0 <= fVar21) && (fVar17 = 1.0, fVar21 <= 1.0)) {
          fVar17 = fVar21;
        }
      }
      fVar21 = UVar23.fields.m_Height + fVar19;
      if ((fVar19 != fVar21) || (fVar22 = 0.0, NAN(fVar19) || NAN(fVar21))) {
        fVar21 = (local_30.y - fVar19) / (fVar21 - fVar19);
        fVar22 = 0.0;
        if ((0.0 <= fVar21) && (fVar22 = 1.0, fVar21 <= 1.0)) {
          fVar22 = fVar21;
        }
      }
      UVar6.fields.y = fVar22;
      UVar6.fields.x = fVar17;
      return (UnityEngine_Vector2_o)UVar6.fields;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (__this->fields)._hue;
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    pUVar15 = UnityEngine_UI_Graphic__get_rectTransform
                        ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
    UVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar15,eventData_00,method_00);
    fVar21 = (__this->fields)._value.fields.S;
    fVar19 = (__this->fields)._value.fields.V;
    bVar2 = (__this->fields)._value.fields.A;
    fVar17 = floorf(UVar10.fields.x);
    fVar17 = UVar10.fields.x - fVar17;
    fVar22 = 1.0;
    if (fVar17 <= 1.0) {
      fVar22 = fVar17;
    }
    fVar22 = (float)(-(uint)(0.0 <= fVar17) & (uint)fVar22);
    fVar17 = 1.0;
    if (fVar21 <= 1.0) {
      fVar17 = fVar21;
    }
    fVar17 = (float)(-(uint)(0.0 <= fVar21) & (uint)fVar17);
    fVar21 = 1.0;
    if (fVar19 <= 1.0) {
      fVar21 = fVar19;
    }
    fVar21 = (float)(-(uint)(0.0 <= fVar19) & (uint)fVar21);
    pMVar16 = (MethodInfo *)0x1;
    UVar24 = UnityEngine_Color__HSVToRGB_4de5b40(fVar22,fVar17,fVar21,1,(MethodInfo *)0x0);
    bVar11 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar24.fields.r,pMVar16);
    fStack_7c = UVar24.fields.g;
    bVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_7c,pMVar16);
    local_70 = UVar24.fields.b;
    bVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(local_70,pMVar16);
    pMVar16 = (MethodInfo *)
              ((ulong)bVar11 | (ulong)bVar2 << 0x18 | (ulong)bVar12 << 8 | (ulong)(uint)fVar22 << 0x20 |
              (ulong)bVar13 << 0x10);
    *(MethodInfo **)&(__this->fields)._value.fields = pMVar16;
    (__this->fields)._value.fields.S = fVar17;
    (__this->fields)._value.fields.V = fVar21;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,pMVar16);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,pMVar16);
    pSVar3 = (__this->fields).Changed;
    if (pSVar3 != (System_Action_GisketchUIColorPickerValue__o *)0x0) {
      uVar1 = (__this->fields)._value.fields.S;
      uVar4._0_1_ = (__this->fields)._value.fields.R;
      uVar4._1_1_ = (__this->fields)._value.fields.G;
      uVar4._2_1_ = (__this->fields)._value.fields.B;
      uVar4._3_1_ = (__this->fields)._value.fields.A;
      uVar4._4_4_ = (__this->fields)._value.fields.H;
      UNRECOVERED_JUMPTABLE_00 = (code *)(pSVar3->fields).invoke_impl;
      UVar10.fields =
           (UnityEngine_Vector2_Fields)
           (*UNRECOVERED_JUMPTABLE_00)
                     (uVar1,(pSVar3->fields).method_code,uVar4,(pSVar3->fields).method,
                      UNRECOVERED_JUMPTABLE_00);
      return (UnityEngine_Vector2_o)UVar10.fields;
    }
    UVar7.fields.y = extraout_XMM0_Db;
    UVar7.fields.x = extraout_XMM0_Da;
    return (UnityEngine_Vector2_o)UVar7.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = *(UnityEngine_UI_Graphic_o **)&(__this_00->fields).m_Color.fields.b;
  pGStack_d8 = __this;
  if (__this_01 != (UnityEngine_UI_Graphic_o *)0x0) {
    pUVar15 = UnityEngine_UI_Graphic__get_rectTransform(__this_01,(MethodInfo *)0x0);
    UVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(pUVar15,eventData_00,method_01);
    if (g_data_057a7b0a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a7b0a = '\x01';
    }
    fVar21 = UVar10.fields.x * 255.0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    dVar20 = (double)fVar21;
    pMVar16 = (MethodInfo *)&local_100;
    local_f8._0_8_ = dVar20;
    dVar20 = modf(dVar20,(double *)pMVar16,(MethodInfo *)eventData_00);
    if (0.0 <= fVar21) {
      if ((dVar20 != 0.5) || (NAN(dVar20))) {
        local_100 = (Il2CppMethodPointer)floor((double)local_f8._0_8_ + 0.5,pMVar16);
      }
      else if (((long)(double)local_100 & 1U) != 0) {
        local_100 = (Il2CppMethodPointer)((double)local_100 + 1.0);
      }
    }
    else if ((dVar20 != -0.5) || (NAN(dVar20))) {
      local_100 = (Il2CppMethodPointer)ceil((double)local_f8._0_8_ + -0.5,pMVar16);
    }
    else if (((long)(double)local_100 & 1U) != 0) {
      local_100 = (Il2CppMethodPointer)((double)local_100 + -1.0);
    }
    bVar2 = *(byte *)&(__this_00->fields).m_OnDirtyLayoutCallback;
    bVar11 = *(byte *)((long)&(__this_00->fields).m_OnDirtyLayoutCallback + 1);
    bVar12 = *(byte *)((long)&(__this_00->fields).m_OnDirtyLayoutCallback + 2);
    fVar21 = *(float *)((long)&(__this_00->fields).m_OnDirtyLayoutCallback + 4);
    local_e8 = ZEXT416((uint)fVar21);
    local_f8 = ZEXT416(*(uint *)&(__this_00->fields).m_OnDirtyVertsCallback);
    fVar19 = *(float *)((long)&(__this_00->fields).m_OnDirtyVertsCallback + 4);
    fVar22 = floorf(fVar21);
    fVar22 = (float)local_e8._0_4_ - fVar22;
    fVar21 = 1.0;
    if (fVar22 <= 1.0) {
      fVar21 = fVar22;
    }
    fVar17 = 1.0;
    if ((float)local_f8._0_4_ <= 1.0) {
      fVar17 = (float)local_f8._0_4_;
    }
    fVar18 = 1.0;
    if (fVar19 <= 1.0) {
      fVar18 = fVar19;
    }
    (__this_00->fields).m_OnDirtyLayoutCallback =
         (UnityEngine_Events_UnityAction_o *)
         ((ulong)bVar11 << 8 | (ulong)(uint)((int)(double)local_100 << 0x18) | (ulong)bVar2 |
          (ulong)bVar12 << 0x10 | (ulong)(-(uint)(0.0 <= fVar22) & (uint)fVar21) << 0x20);
    (__this_00->fields).m_OnDirtyVertsCallback =
         (UnityEngine_Events_UnityAction_o *)
         CONCAT44(-(uint)(0.0 <= fVar19) & (uint)fVar18,-(uint)(0.0 <= (float)local_f8._0_4_) & (uint)fVar17);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_00,(MethodInfo *)eventData_00);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_00,(MethodInfo *)eventData_00);
    pUVar5 = (__this_00->fields).m_OnDirtyMaterialCallback;
    if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = (code *)(pUVar5->fields).invoke_impl;
      UVar10.fields =
           (UnityEngine_Vector2_Fields)
           (*UNRECOVERED_JUMPTABLE_00)
                     ((int)(__this_00->fields).m_OnDirtyVertsCallback,(pUVar5->fields).method_code,
                      (__this_00->fields).m_OnDirtyLayoutCallback,(pUVar5->fields).method,
                      UNRECOVERED_JUMPTABLE_00);
      return (UnityEngine_Vector2_o)UVar10.fields;
    }
    UVar8.fields.y = extraout_XMM0_Db_00;
    UVar8.fields.x = extraout_XMM0_Da_00;
    return (UnityEngine_Vector2_o)UVar8.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9e01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e01 = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(__this_01->fields).m_SkipLayoutUpdate;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar16 = (MethodInfo *)0x0;
  bVar14 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)__this_01,pMVar16);
    UVar9.fields.y = extraout_XMM0_Db_02;
    UVar9.fields.x = extraout_XMM0_Da_02;
    return (UnityEngine_Vector2_o)UVar9.fields;
  }
  UVar10.fields.y = extraout_XMM0_Db_01;
  UVar10.fields.x = extraout_XMM0_Da_01;
  return (UnityEngine_Vector2_o)UVar10.fields;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Place
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Place (UnityEngine_RectTransform_o* marker, float x, float y, const MethodInfo* method);
// 0x3b72630

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Place
               (UnityEngine_RectTransform_o *marker,float x,float y,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Vector2_o value;
  double dVar3;
  double dVar4;
  bool_conflict bVar5;
  UnityEngine_RectTransform_o *__this;
  MethodInfo *pMVar6;
  UnityEngine_Sprite_o *pUVar7;
  int x_00;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  UnityEngine_Texture2D_o *__this_00;
  int iVar10;
  void **ppvVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  UnityEngine_Rect_o UVar17;
  UnityEngine_Color_o color;
  Il2CppMethodPointer pIStack_60;
  UnityEngine_RectTransform_o *pUStack_58;
  
  if (g_data_057a9e08 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9e08 = '\x01';
  }
  if ((marker == (UnityEngine_RectTransform_o *)0x0) ||
     (__this = (UnityEngine_RectTransform_o *)
               UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)marker,(MethodInfo *)0x0),
     __this == (UnityEngine_RectTransform_o *)0x0)) {
    __this = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_022b2c90();
  }
  else if (__this->klass == TypeInfo_RectTransform) {
    UVar17 = UnityEngine_RectTransform__get_rect(__this,(MethodInfo *)0x0);
    fVar12 = 1.0;
    if (x <= 1.0) {
      fVar12 = x;
    }
    fVar13 = 1.0;
    if (y <= 1.0) {
      fVar13 = y;
    }
    value.fields.y = (float)(-(uint)(0.0 <= y) & (uint)fVar13) * UVar17.fields.m_Height;
    value.fields.x = (float)(-(uint)(0.0 <= x) & (uint)fVar12) * UVar17.fields.m_Width;
    UnityEngine_RectTransform__set_anchoredPosition(marker,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2fd0();
  pUStack_58 = marker;
  if (g_data_057a9e0b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057a9e0b = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)__this[4].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pMVar6 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
  iVar10 = 0;
  pMVar9 = pMVar6;
  UnityEngine_Texture2D___ctor_4dd9130((UnityEngine_Texture2D_o *)pMVar6,0x20,0x20,4,0,(MethodInfo *)0x0);
  if (pMVar6 != (MethodInfo *)0x0) {
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)pMVar6,1,(MethodInfo *)0x0);
    __this[4].monitor = pMVar6;
    ppvVar11 = &__this[4].monitor;
    il2cpp_runtime_helper_022b4080(ppvVar11);
    do {
      fVar12 = ((float)iVar10 + -15.5) * ((float)iVar10 + -15.5);
      pMVar8 = (MethodInfo *)0x0;
      do {
        x_00 = (int)pMVar8;
        if (g_data_057a6847 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6847 = '\x01';
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto label_03b7285f;
label_03b72814:
          fVar13 = (float)x_00 + -15.5;
          fVar13 = fVar13 * fVar13 + fVar12;
          if (0.0 <= fVar13) goto label_03b72827;
label_03b72883:
          fVar13 = sqrtf(fVar13);
        }
        else {
          if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto label_03b72814;
label_03b7285f:
          fVar13 = (float)x_00 + -15.5;
          il2cpp_runtime_helper_02337ed0();
          fVar13 = fVar13 * fVar13 + fVar12;
          if (fVar13 < 0.0) goto label_03b72883;
label_03b72827:
          fVar13 = SQRT(fVar13);
        }
        fVar16 = (16.0 - fVar13) + (16.0 - fVar13);
        fVar13 = 1.0;
        if (fVar16 <= 1.0) {
          fVar13 = fVar16;
        }
        fVar13 = (float)(-(uint)(0.0 <= fVar16) & (uint)(fVar13 * 255.0));
        if (g_data_057a7b0a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a7b0a = '\x01';
          iVar1 = *(int *)(TypeInfo_Math + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_Math + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        dVar3 = (double)fVar13;
        pMVar9 = (MethodInfo *)&pIStack_60;
        dVar4 = modf(dVar3,(double *)&pIStack_60,pMVar6);
        uVar14 = SUB84(pIStack_60,0);
        uVar15 = (undefined4)((ulong)pIStack_60 >> 0x20);
        if (0.0 <= fVar13) {
          if ((dVar4 != 0.5) || (NAN(dVar4))) {
            dVar3 = floor(dVar3 + 0.5,pMVar9);
            uVar14 = SUB84(dVar3,0);
            uVar15 = (undefined4)((ulong)dVar3 >> 0x20);
          }
          else if (((long)(double)pIStack_60 & 1U) != 0) {
            dVar3 = (double)pIStack_60 + 1.0;
            __this_00 = *ppvVar11;
            if (__this_00 != (UnityEngine_Texture2D_o *)0x0) goto label_03b729fc;
            pMVar9 = (MethodInfo *)0x0;
            goto label_03b72a9d;
          }
label_03b729f0:
          dVar3 = (double)CONCAT44(uVar15,uVar14);
          __this_00 = *ppvVar11;
          pMVar9 = (MethodInfo *)0x0;
          if (__this_00 == (UnityEngine_Texture2D_o *)0x0) goto label_03b72a9d;
        }
        else if ((dVar4 != -0.5) || (NAN(dVar4))) {
          dVar3 = ceil(dVar3 + -0.5,pMVar9);
          __this_00 = *ppvVar11;
          if (__this_00 == (UnityEngine_Texture2D_o *)0x0) {
            pMVar9 = (MethodInfo *)0x0;
            goto label_03b72a9d;
          }
        }
        else {
          if (((long)(double)pIStack_60 & 1U) == 0) goto label_03b729f0;
          dVar3 = (double)pIStack_60 + -1.0;
          __this_00 = *ppvVar11;
          if (__this_00 == (UnityEngine_Texture2D_o *)0x0) {
            pMVar9 = (MethodInfo *)0x0;
            goto label_03b72a9d;
          }
        }
label_03b729fc:
        color.fields.a = (float)((int)dVar3 & 0xff) / 255.0;
        color.fields.b = 1.0;
        color.fields.r = 1.0;
        color.fields.g = 1.0;
        pMVar6 = pMVar8;
        UnityEngine_Texture2D__SetPixel(__this_00,x_00,iVar10,color,(MethodInfo *)0x0);
        pMVar8 = (MethodInfo *)(ulong)(x_00 + 1U);
      } while (x_00 + 1U != 0x20);
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0x20);
    pMVar9 = (MethodInfo *)0x0;
    if (*ppvVar11 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply_4dd97b0(*ppvVar11,0,(MethodInfo *)0x0);
      pUVar7 = UnityEngine_Sprite__Create_4e0d6a0
                         (*ppvVar11,(UnityEngine_Rect_o)(ZEXT816(0x4200000042000000) << 0x40),
                          (UnityEngine_Vector2_o)0x3f0000003f000000,32.0,(MethodInfo *)0x0);
      __this[4].fields.m_CachedPtr = (intptr_t)pUVar7;
      il2cpp_runtime_helper_022b4080(&__this[4].fields,pUVar7);
      return;
    }
  }
label_03b72a9d:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9e0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0a = '\x01';
    pUVar2 = *(UnityEngine_Object_o **)&pMVar9->slot;
  }
  else {
    pUVar2 = *(UnityEngine_Object_o **)&pMVar9->slot;
  }
  if (g_data_057a9e0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0c = '\x01';
    iVar10 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar10 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar10 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar6 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject(pUVar2,pMVar6);
    pUVar2 = (UnityEngine_Object_o *)pMVar9[1].methodPointer;
  }
  else {
    pUVar2 = (UnityEngine_Object_o *)pMVar9[1].methodPointer;
  }
  if (g_data_057a9e0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0c = '\x01';
    iVar10 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar10 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar10 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar6 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject(pUVar2,pMVar6);
    pUVar2 = (UnityEngine_Object_o *)pMVar9[1].virtualMethodPointer;
  }
  else {
    pUVar2 = (UnityEngine_Object_o *)pMVar9[1].virtualMethodPointer;
  }
  if (g_data_057a9e0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0c = '\x01';
    iVar10 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar10 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar10 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar6 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject(pUVar2,pMVar6);
    pUVar2 = (UnityEngine_Object_o *)pMVar9[1].invoker_method;
  }
  else {
    pUVar2 = (UnityEngine_Object_o *)pMVar9[1].invoker_method;
  }
  if (g_data_057a9e0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0c = '\x01';
    iVar10 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar10 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar10 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar6 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject(pUVar2,pMVar6);
  }
  pUVar2 = (UnityEngine_Object_o *)pMVar9[1].name;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar6 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)pMVar9[1].name,pMVar6);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$SetTexture
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture (UnityEngine_Texture2D_o** texture, UnityEngine_UI_RawImage_o* target, int32_t width, int32_t height, System_Func_int__int__Color32__o* pixel, const MethodInfo* method);
// 0x3b72450

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
               (UnityEngine_Texture2D_o **texture,UnityEngine_UI_RawImage_o *target,int32_t width,
               int32_t height,System_Func_int__int__Color32__o *pixel,MethodInfo *method)

{
  UnityEngine_Texture2D_o *__this;
  bool_conflict bVar1;
  uint uVar2;
  UnityEngine_UI_RawImage_o *__this_00;
  int x;
  int32_t y;
  UnityEngine_UI_RawImage_o *x_00;
  UnityEngine_Color_o color;
  
  if (g_data_057a9e09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057a9e09 = '\x01';
  }
  x_00 = (UnityEngine_UI_RawImage_o *)*texture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (UnityEngine_UI_RawImage_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
    x_00 = __this_00;
    UnityEngine_Texture2D___ctor_4dd9130
              ((UnityEngine_Texture2D_o *)__this_00,width,height,4,0,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto label_03b72615;
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)__this_00,1,(MethodInfo *)0x0);
    *texture = (UnityEngine_Texture2D_o *)__this_00;
    x_00 = (UnityEngine_UI_RawImage_o *)texture;
    il2cpp_runtime_helper_022b4080();
    if (target == (UnityEngine_UI_RawImage_o *)0x0) goto label_03b72615;
    UnityEngine_UI_RawImage__set_texture(target,(UnityEngine_Texture_o *)*texture,(MethodInfo *)0x0);
    x_00 = target;
  }
  if ((0 < height) && (0 < width)) {
    if (pixel == (System_Func_int__int__Color32__o *)0x0) goto label_03b72615;
    y = 0;
    do {
      x = 0;
      do {
        __this = *texture;
        x_00 = (UnityEngine_UI_RawImage_o *)(pixel->fields).method_code;
        uVar2 = (*(code *)(pixel->fields).invoke_impl)(x_00,x,y,(pixel->fields).method);
        if (__this == (UnityEngine_Texture2D_o *)0x0) goto label_03b72615;
        color.fields.r = (float)(uVar2 & 0xff) / 255.0;
        color.fields.g = (float)(uVar2 >> 8 & 0xff) / 255.0;
        color.fields.b = (float)(uVar2 >> 0x10 & 0xff) / 255.0;
        color.fields.a = (float)(uVar2 >> 0x18) / 255.0;
        UnityEngine_Texture2D__SetPixel(__this,x,y,color,(MethodInfo *)0x0);
        x = x + 1;
      } while (width != x);
      y = y + 1;
    } while (y != height);
  }
  x_00 = (UnityEngine_UI_RawImage_o *)0x0;
  if (*texture != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture2D__Apply_4dd97b0(*texture,0,(MethodInfo *)0x0);
    return;
  }
label_03b72615:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)x_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnDestroy (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x3b72ab0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnDestroy
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Texture2D_o *pUVar2;
  UnityEngine_Object_o *x;
  bool_conflict bVar3;
  MethodInfo *pMVar4;
  
  if (g_data_057a9e0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0a = '\x01';
    pUVar2 = (__this->fields)._squareTexture;
  }
  else {
    pUVar2 = (__this->fields)._squareTexture;
  }
  if (g_data_057a9e0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0c = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
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
  if (g_data_057a9e0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0c = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
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
  if (g_data_057a9e0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0c = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
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
  if (g_data_057a9e0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0c = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
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
    il2cpp_runtime_helper_02337ed0();
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
// 0x3b726f0

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_Sprite_o **ppUVar1;
  int iVar2;
  UnityEngine_Object_o *pUVar3;
  bool_conflict bVar4;
  MethodInfo *pMVar5;
  UnityEngine_Sprite_o *pUVar6;
  undefined4 extraout_var;
  UnityEngine_Sprite_o *extraout_RAX;
  int x;
  MethodInfo *pMVar7;
  MethodInfo *pMVar8;
  UnityEngine_Texture2D_o *__this_00;
  int iVar9;
  UnityEngine_Texture2D_o **ppUVar10;
  float fVar11;
  float fVar12;
  double x_00;
  double dVar13;
  Il2CppMethodPointer pIVar14;
  float fVar15;
  UnityEngine_Color_o color;
  Il2CppMethodPointer local_38;
  
  if (g_data_057a9e0b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057a9e0b = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._circleSprite;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._circleSprite;
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
label_03b72a8b:
    return *ppUVar1;
  }
  pMVar5 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
  iVar9 = 0;
  pMVar8 = pMVar5;
  UnityEngine_Texture2D___ctor_4dd9130((UnityEngine_Texture2D_o *)pMVar5,0x20,0x20,4,0,(MethodInfo *)0x0);
  if (pMVar5 != (MethodInfo *)0x0) {
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)pMVar5,1,(MethodInfo *)0x0);
    (__this->fields)._circleTexture = (UnityEngine_Texture2D_o *)pMVar5;
    ppUVar10 = &(__this->fields)._circleTexture;
    il2cpp_runtime_helper_022b4080(ppUVar10);
    do {
      fVar11 = ((float)iVar9 + -15.5) * ((float)iVar9 + -15.5);
      pMVar7 = (MethodInfo *)0x0;
      do {
        x = (int)pMVar7;
        if (g_data_057a6847 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6847 = '\x01';
          if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto label_03b72814;
label_03b7285f:
          fVar12 = (float)x + -15.5;
          il2cpp_runtime_helper_02337ed0();
          fVar12 = fVar12 * fVar12 + fVar11;
          if (0.0 <= fVar12) goto label_03b72827;
label_03b72883:
          fVar12 = sqrtf(fVar12);
        }
        else {
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto label_03b7285f;
label_03b72814:
          fVar12 = (float)x + -15.5;
          fVar12 = fVar12 * fVar12 + fVar11;
          if (fVar12 < 0.0) goto label_03b72883;
label_03b72827:
          fVar12 = SQRT(fVar12);
        }
        fVar15 = (16.0 - fVar12) + (16.0 - fVar12);
        fVar12 = 1.0;
        if (fVar15 <= 1.0) {
          fVar12 = fVar15;
        }
        fVar12 = (float)(-(uint)(0.0 <= fVar15) & (uint)(fVar12 * 255.0));
        if (g_data_057a7b0a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a7b0a = '\x01';
          iVar2 = *(int *)(TypeInfo_Math + 0xe4);
        }
        else {
          iVar2 = *(int *)(TypeInfo_Math + 0xe4);
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        x_00 = (double)fVar12;
        pMVar8 = (MethodInfo *)&stack0xffffffffffffffc8;
        dVar13 = modf(x_00,(double *)&stack0xffffffffffffffc8,pMVar5);
        pIVar14 = local_38;
        if (0.0 <= fVar12) {
          if ((dVar13 != 0.5) || (NAN(dVar13))) {
            pIVar14 = (Il2CppMethodPointer)floor(x_00 + 0.5,pMVar8);
          }
          else if (((long)(double)local_38 & 1U) != 0) {
            pIVar14 = (Il2CppMethodPointer)((double)local_38 + 1.0);
            __this_00 = *ppUVar10;
            if (__this_00 != (UnityEngine_Texture2D_o *)0x0) goto label_03b729fc;
            pMVar8 = (MethodInfo *)0x0;
            goto label_03b72a9d;
          }
label_03b729f0:
          __this_00 = *ppUVar10;
          pMVar8 = (MethodInfo *)0x0;
          if (__this_00 == (UnityEngine_Texture2D_o *)0x0) goto label_03b72a9d;
        }
        else if ((dVar13 != -0.5) || (NAN(dVar13))) {
          pIVar14 = (Il2CppMethodPointer)ceil(x_00 + -0.5,pMVar8);
          __this_00 = *ppUVar10;
          if (__this_00 == (UnityEngine_Texture2D_o *)0x0) {
            pMVar8 = (MethodInfo *)0x0;
            goto label_03b72a9d;
          }
        }
        else {
          if (((long)(double)local_38 & 1U) == 0) goto label_03b729f0;
          pIVar14 = (Il2CppMethodPointer)((double)local_38 + -1.0);
          __this_00 = *ppUVar10;
          if (__this_00 == (UnityEngine_Texture2D_o *)0x0) {
            pMVar8 = (MethodInfo *)0x0;
            goto label_03b72a9d;
          }
        }
label_03b729fc:
        color.fields.a = (float)((int)(double)pIVar14 & 0xff) / 255.0;
        color.fields.b = 1.0;
        color.fields.r = 1.0;
        color.fields.g = 1.0;
        pMVar5 = pMVar7;
        UnityEngine_Texture2D__SetPixel(__this_00,x,iVar9,color,(MethodInfo *)0x0);
        pMVar7 = (MethodInfo *)(ulong)(x + 1U);
      } while (x + 1U != 0x20);
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x20);
    pMVar8 = (MethodInfo *)0x0;
    if (*ppUVar10 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply_4dd97b0(*ppUVar10,0,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Sprite__Create_4e0d6a0
                         (*ppUVar10,(UnityEngine_Rect_o)(ZEXT816(0x4200000042000000) << 0x40),
                          (UnityEngine_Vector2_o)0x3f0000003f000000,32.0,(MethodInfo *)0x0);
      *ppUVar1 = pUVar6;
      il2cpp_runtime_helper_022b4080(ppUVar1,pUVar6);
      goto label_03b72a8b;
    }
  }
label_03b72a9d:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9e0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0a = '\x01';
    pUVar3 = *(UnityEngine_Object_o **)&pMVar8->slot;
  }
  else {
    pUVar3 = *(UnityEngine_Object_o **)&pMVar8->slot;
  }
  if (g_data_057a9e0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0c = '\x01';
    iVar9 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar9 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar9 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar5 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject(pUVar3,pMVar5);
    pUVar3 = (UnityEngine_Object_o *)pMVar8[1].methodPointer;
  }
  else {
    pUVar3 = (UnityEngine_Object_o *)pMVar8[1].methodPointer;
  }
  if (g_data_057a9e0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0c = '\x01';
    iVar9 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar9 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar9 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar5 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject(pUVar3,pMVar5);
    pUVar3 = (UnityEngine_Object_o *)pMVar8[1].virtualMethodPointer;
  }
  else {
    pUVar3 = (UnityEngine_Object_o *)pMVar8[1].virtualMethodPointer;
  }
  if (g_data_057a9e0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0c = '\x01';
    iVar9 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar9 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar9 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar5 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject(pUVar3,pMVar5);
    pUVar3 = (UnityEngine_Object_o *)pMVar8[1].invoker_method;
  }
  else {
    pUVar3 = (UnityEngine_Object_o *)pMVar8[1].invoker_method;
  }
  if (g_data_057a9e0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0c = '\x01';
    iVar9 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar9 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar9 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar5 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject(pUVar3,pMVar5);
  }
  pUVar3 = (UnityEngine_Object_o *)pMVar8[1].name;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar5 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (UnityEngine_Sprite_o *)CONCAT44(extraout_var,bVar4);
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
            ((UnityEngine_Object_o *)pMVar8[1].name,pMVar5);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Blend
// il2cpp: uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Blend (uint8_t back, uint8_t front, float t, const MethodInfo* method);
// 0x3b72df0

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
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  fVar7 = (fVar5 - fVar7) * fVar6 + fVar7;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
// 0x3b72d10

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyTexture
               (UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *method_00;
  
  if (g_data_057a9e0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0c = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
// 0x3b72d60

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
               (UnityEngine_Object_o *target,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057a9e0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e0d = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar1 != '\0') {
    UnityEngine_Object__Destroy_4e01c60(target,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__DestroyImmediate_4e01e00(target,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x3b72f40

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$<RefreshTextures>b__30_0
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___RefreshTextures_b__30_0 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, int32_t x, int32_t y, const MethodInfo* method);
// 0x3b72f50

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___RefreshTextures_b__30_0
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,int32_t x,int32_t y,MethodInfo *method
          )

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
  UVar11 = UnityEngine_Color__HSVToRGB_4de5b40
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


