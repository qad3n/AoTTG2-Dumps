// Type: Gisketch.Aottg2UI.AottgUiScale
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI/AottgUiScale.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.AottgUiScale$$Value
// il2cpp: float Gisketch_Aottg2UI_AottgUiScale__Value (int32_t preset, const MethodInfo* method);
// 0x3b2c940

float Gisketch_Aottg2UI_AottgUiScale__Value(int32_t preset,MethodInfo *method)

{
  if ((uint)preset < 5) {
    return *(float *)(&g_data_00d2055c + (long)preset * 4);
  }
  return 1.0;
}


// Gisketch.Aottg2UI.AottgUiScale$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_AottgUiScale__Label (int32_t preset, const MethodInfo* method);
// 0x3b2d640

System_String_o * Gisketch_Aottg2UI_AottgUiScale__Label(int32_t preset,MethodInfo *method)

{
  int iVar1;
  undefined1 auVar2 [16];
  bool_conflict bVar3;
  long lVar4;
  undefined4 extraout_var;
  System_String_o *pSVar5;
  ulong uVar6;
  uint uVar7;
  System_String_o *pSVar8;
  undefined4 uVar9;
  
  if (g_data_057a9c09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
    g_data_057a9c09 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgUiScale[9].monitor + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgUiScale[9].monitor + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)TypeInfo_AottgUiScale[7].fields;
    pSVar5 = TypeInfo_AottgUiScale;
  }
  else {
    lVar4 = *(long *)TypeInfo_AottgUiScale[7].fields;
    pSVar5 = TypeInfo_AottgUiScale;
  }
  TypeInfo_AottgUiScale = pSVar5;
  if (lVar4 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((uint)preset < *(uint *)(lVar4 + 0x18)) {
    return *(System_String_o **)(lVar4 + 0x20 + (long)preset * 8);
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9c0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
    g_data_057a9c0a = '\x01';
  }
  uVar6 = 0;
  iVar1 = *(int *)((long)&TypeInfo_AottgUiScale[9].monitor + 4);
  do {
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar4 = *(long *)TypeInfo_AottgUiScale[7].fields;
    pSVar8 = TypeInfo_AottgUiScale;
    if (lVar4 == 0) {
label_03b2d79a:
      uVar7 = (uint)pSVar8;
      il2cpp_runtime_helper_022b2c90();
label_03b2d79f:
      pSVar5 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
      if (g_data_057a9c0b == '\0') {
        pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
        g_data_057a9c0b = '\x01';
        iVar1 = *(int *)((long)&TypeInfo_AottgUiScale[9].monitor + 4);
      }
      else {
        iVar1 = *(int *)((long)&TypeInfo_AottgUiScale[9].monitor + 4);
      }
      if (iVar1 == 0) {
        pSVar5 = (System_String_o *)il2cpp_runtime_helper_02337ed0();
      }
      if (uVar7 < 5) {
        pSVar5 = (System_String_o *)(long)(int)uVar7;
        uVar9 = *(undefined4 *)(&g_data_00d2055c + (long)pSVar5 * 4);
      }
      else {
        uVar9 = 0x3f800000;
      }
      if (g_data_057a9c0c == '\0') {
        pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
        g_data_057a9c0c = '\x01';
      }
      if (*(int *)((long)&TypeInfo_AottgUiScale[9].monitor + 4) == 0) {
        pSVar5 = (System_String_o *)il2cpp_runtime_helper_02337ed0();
      }
      auVar2._4_4_ = uVar9;
      auVar2._0_4_ = uVar9;
      auVar2._8_8_ = 0;
      divps(_DAT_00d1d030,auVar2);
      return pSVar5;
    }
    if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar6) {
      uVar6 = 2;
      pSVar5 = (System_String_o *)0x0;
      goto label_03b2d78b;
    }
    if (*(int *)((long)&TypeInfo_AottgUiScale[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar4 = *(long *)TypeInfo_AottgUiScale[7].fields;
      if (lVar4 == 0) goto label_03b2d79a;
    }
    uVar7 = (uint)pSVar8;
    if (*(uint *)(lVar4 + 0x18) <= uVar6) goto label_03b2d79f;
    bVar3 = System_String__op_Equality
                      (*(System_String_o **)(lVar4 + 0x20 + uVar6 * 8),pSVar5,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pSVar5 = (System_String_o *)CONCAT71((int7)(CONCAT44(extraout_var,bVar3) >> 8),1);
label_03b2d78b:
      *(int *)&method->methodPointer = (int)uVar6;
      return pSVar5;
    }
    uVar6 = uVar6 + 1;
    iVar1 = *(int *)((long)&TypeInfo_AottgUiScale[9].monitor + 4);
  } while( true );
}


// Gisketch.Aottg2UI.AottgUiScale$$TryParseLabel
// il2cpp: bool Gisketch_Aottg2UI_AottgUiScale__TryParseLabel (System_String_o* label, int32_t* preset, const MethodInfo* method);
// 0x3b2d6d0

bool_conflict
Gisketch_Aottg2UI_AottgUiScale__TryParseLabel(System_String_o *label,int32_t *preset,MethodInfo *method)

{
  int iVar1;
  undefined1 auVar2 [16];
  bool_conflict bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  
  if (g_data_057a9c0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
    g_data_057a9c0a = '\x01';
  }
  uVar7 = 0;
  iVar1 = *(int *)(TypeInfo_AottgUiScale + 0xe4);
  do {
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar6 = **(long **)(TypeInfo_AottgUiScale + 0xb8);
    lVar8 = TypeInfo_AottgUiScale;
    if (lVar6 == 0) {
label_03b2d79a:
      uVar5 = (uint)lVar8;
      il2cpp_runtime_helper_022b2c90();
label_03b2d79f:
      uVar4 = il2cpp_runtime_helper_022b2ca0();
      if (g_data_057a9c0b == '\0') {
        uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
        g_data_057a9c0b = '\x01';
        iVar1 = *(int *)(TypeInfo_AottgUiScale + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_AottgUiScale + 0xe4);
      }
      if (iVar1 == 0) {
        uVar4 = il2cpp_runtime_helper_02337ed0();
      }
      if (uVar5 < 5) {
        uVar9 = *(undefined4 *)(&g_data_00d2055c + (long)(int)uVar5 * 4);
      }
      else {
        uVar9 = 0x3f800000;
        uVar5 = uVar4;
      }
      if (g_data_057a9c0c == '\0') {
        uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
        g_data_057a9c0c = '\x01';
      }
      if (*(int *)(TypeInfo_AottgUiScale + 0xe4) == 0) {
        uVar5 = il2cpp_runtime_helper_02337ed0();
      }
      auVar2._4_4_ = uVar9;
      auVar2._0_4_ = uVar9;
      auVar2._8_8_ = 0;
      divps(_DAT_00d1d030,auVar2);
      return uVar5;
    }
    if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar7) {
      uVar7 = 2;
      bVar3 = 0;
      goto label_03b2d78b;
    }
    if (*(int *)(TypeInfo_AottgUiScale + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar6 = **(long **)(TypeInfo_AottgUiScale + 0xb8);
      if (lVar6 == 0) goto label_03b2d79a;
    }
    uVar5 = (uint)lVar8;
    if (*(uint *)(lVar6 + 0x18) <= uVar7) goto label_03b2d79f;
    bVar3 = System_String__op_Equality
                      (*(System_String_o **)(lVar6 + 0x20 + uVar7 * 8),label,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      bVar3 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar3 >> 8),1);
label_03b2d78b:
      *preset = (int32_t)uVar7;
      return bVar3;
    }
    uVar7 = uVar7 + 1;
    iVar1 = *(int *)(TypeInfo_AottgUiScale + 0xe4);
  } while( true );
}


// Gisketch.Aottg2UI.AottgUiScale$$Clamp
// il2cpp: float Gisketch_Aottg2UI_AottgUiScale__Clamp (float scale, const MethodInfo* method);
// 0x3b2ca60

float Gisketch_Aottg2UI_AottgUiScale__Clamp(float scale,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.5;
  if (scale <= 1.5) {
    fVar1 = scale;
  }
  return (float)(~-(uint)(0.75 <= scale) & 0x3f400000 | (uint)fVar1 & -(uint)(0.75 <= scale));
}


// Gisketch.Aottg2UI.AottgUiScale$$ReferenceResolution
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution (int32_t preset, const MethodInfo* method);
// 0x3b2d7b0

UnityEngine_Vector2_o Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution(int32_t preset,MethodInfo *method)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  
  if (g_data_057a9c0b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
    g_data_057a9c0b = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgUiScale + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgUiScale + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((uint)preset < 5) {
    uVar3 = *(undefined4 *)(&g_data_00d2055c + (long)preset * 4);
  }
  else {
    uVar3 = 0x3f800000;
  }
  if (g_data_057a9c0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
    g_data_057a9c0c = '\x01';
  }
  if (*(int *)(TypeInfo_AottgUiScale + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = uVar3;
  auVar2._8_8_ = 0;
  auVar2 = divps(_DAT_00d1d030,auVar2);
  return (UnityEngine_Vector2_o)auVar2._0_8_;
}


// Gisketch.Aottg2UI.AottgUiScale$$ReferenceResolution
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution (float scale, const MethodInfo* method);
// 0x3b2ca90

UnityEngine_Vector2_o
Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution_3a2ca90(float scale,MethodInfo *method)

{
  undefined1 auVar1 [12];
  undefined1 in_register_00001204 [12];
  undefined1 auVar2 [16];
  
  if (g_data_057a9c0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
    g_data_057a9c0c = '\x01';
  }
  if (*(int *)(TypeInfo_AottgUiScale + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auVar1 = ZEXT812(0x3fc00000);
  if (scale <= 1.5) {
    auVar1._4_8_ = 0;
    auVar1._0_4_ = scale;
  }
  auVar2._0_4_ = ~-(uint)(0.75 <= scale) & 0x3f400000 | auVar1._0_4_ & -(uint)(0.75 <= scale);
  auVar2._4_4_ = auVar2._0_4_;
  auVar2._8_4_ = auVar1._8_4_ & in_register_00001204._4_4_;
  auVar2._12_4_ = 0;
  auVar2 = divps(_DAT_00d1d030,auVar2);
  return (UnityEngine_Vector2_o)auVar2._0_8_;
}


// Gisketch.Aottg2UI.AottgUiScale$$.cctor
// il2cpp: void Gisketch_Aottg2UI_AottgUiScale___cctor (const MethodInfo* method);
// 0x3b2d880

void Gisketch_Aottg2UI_AottgUiScale___cctor(MethodInfo *method)

{
  void **ppvVar1;
  undefined8 uVar2;
  UnityEngine_UI_Selectable_o *x;
  UnityEngine_Vector2_o offsetTarget;
  char cVar3;
  bool_conflict bVar4;
  long lVar5;
  void *pvVar6;
  Il2CppObject *pIVar7;
  void *in_RCX;
  UnityEngine_Component_c *extraout_RDX;
  MethodInfo *method_00;
  long unaff_RBX;
  uint uVar8;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_Object_o *pUVar11;
  MethodInfo *pMVar12;
  UnityEngine_Component_o *__this;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_00;
  UnityEngine_UI_Selectable_o *pUVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  if (g_data_057a9c0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Large");
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"Very Large");
    il2cpp_runtime_helper_023445d0(&"Small");
    il2cpp_runtime_helper_023445d0(&"Very Small");
    g_data_057a9c0d = '\x01';
  }
  pUVar9 = (UnityEngine_Object_o *)&g_data_00000005;
  __this = TypeInfo_string;
  lVar5 = il2cpp_runtime_helper_022b2a40();
  pUVar10 = "Very Small";
  lStack_38 = unaff_RBX;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      __this = (UnityEngine_Component_o *)(lVar5 + 0x20);
      *(UnityEngine_Object_o **)(lVar5 + 0x20) = "Very Small";
      il2cpp_runtime_helper_022b4080();
      pUVar11 = "Small";
      pUVar9 = pUVar10;
      if (1 < *(uint *)(lVar5 + 0x18)) {
        __this = (UnityEngine_Component_o *)(lVar5 + 0x28);
        *(UnityEngine_Object_o **)(lVar5 + 0x28) = "Small";
        il2cpp_runtime_helper_022b4080();
        pUVar10 = "Normal";
        pUVar9 = pUVar11;
        if (2 < *(uint *)(lVar5 + 0x18)) {
          __this = (UnityEngine_Component_o *)(lVar5 + 0x30);
          *(UnityEngine_Object_o **)(lVar5 + 0x30) = "Normal";
          il2cpp_runtime_helper_022b4080();
          pUVar11 = "Large";
          pUVar9 = pUVar10;
          if (3 < *(uint *)(lVar5 + 0x18)) {
            __this = (UnityEngine_Component_o *)(lVar5 + 0x38);
            *(UnityEngine_Object_o **)(lVar5 + 0x38) = "Large";
            il2cpp_runtime_helper_022b4080();
            pUVar9 = pUVar11;
            if (4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x40) = "Very Large";
              il2cpp_runtime_helper_022b4080(lVar5 + 0x40);
              **(long **)(TypeInfo_AottgUiScale + 0xb8) = lVar5;
              il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgUiScale + 0xb8),lVar5);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    lStack_38 = lVar5;
  }
  uVar14 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c0e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c0e = '\x01';
  }
  __this[1].fields.m_CachedPtr = (intptr_t)pUVar9;
  il2cpp_runtime_helper_022b4080(&__this[1].fields);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar6 = (void *)0x0;
  uVar8 = 0;
  pUVar10 = pUVar9;
  bVar4 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (pUVar9 == (UnityEngine_Object_o *)0x0) goto label_03b2db77;
    pvVar6 = (void *)(*(code *)pUVar9->klass[2]._1.castClass)(pUVar9,pUVar9->klass[2]._1.declaringType);
  }
  __this[1].monitor = pvVar6;
  il2cpp_runtime_helper_022b4080(&__this[1].monitor,pvVar6);
  __this[2].klass = extraout_RDX;
  il2cpp_runtime_helper_022b4080(__this + 2,extraout_RDX);
  ppvVar1 = &__this[2].monitor;
  __this[2].monitor = in_RCX;
  il2cpp_runtime_helper_022b4080(ppvVar1,in_RCX);
  pIVar7 = UnityEngine_Component__GetComponent_object_(__this,MethodInfo_Selectable_GetComponent_Selectable);
  __this[2].fields.m_CachedPtr = (intptr_t)pIVar7;
  il2cpp_runtime_helper_022b4080(&__this[2].fields,pIVar7);
  *(undefined4 *)&__this[3].klass = uVar14;
  fVar15 = System_Nullable_float___GetValueOrDefault_37ebc40
                     ((System_Nullable_float__o)auStack_40,0.1,MethodInfo_Single_GetValueOrDefault);
  *(float *)((long)&__this[3].klass + 4) = fVar15;
  if (g_data_057a9c18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c18 = '\x01';
  }
  pUVar10 = *ppvVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar8 = 0;
  bVar4 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pUVar10 = (UnityEngine_Object_o *)0x0;
  if (*ppvVar1 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(*ppvVar1,0,(MethodInfo *)0x0);
    return;
  }
label_03b2db77:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c18 = '\x01';
  }
  pUVar9 = pUVar10[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    __this_00 = pUVar10[2].monitor;
    if (__this_00 != (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,uVar8 & 0xff,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9c19 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c19 = '\x01';
    }
    pUVar13 = (__this_00->fields)._selectable;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar12 = (MethodInfo *)0x0;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pUVar13 = (__this_00->fields)._selectable;
      if (pUVar13 == (UnityEngine_UI_Selectable_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9c19 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9c19 = '\x01';
        }
        x = (pUVar13->fields).m_Navigation.fields.m_SelectOnLeft;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar12 = (MethodInfo *)0x0;
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          pUVar13 = (pUVar13->fields).m_Navigation.fields.m_SelectOnLeft;
          if (pUVar13 == (UnityEngine_UI_Selectable_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057a8dd2 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
              g_data_057a8dd2 = '\x01';
            }
            Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize
                      ((Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)pUVar13,pMVar12);
            return;
          }
          (*(pUVar13->klass->vtable)._24_IsInteractable.methodPtr)
                    (pUVar13,(pUVar13->klass->vtable)._24_IsInteractable.method);
          return;
        }
        return;
      }
      pMVar12 = (pUVar13->klass->vtable)._24_IsInteractable.method;
      cVar3 = (*(pUVar13->klass->vtable)._24_IsInteractable.methodPtr)();
      if (cVar3 == '\0') {
        return;
      }
    }
    *(undefined1 *)((long)&(__this_00->fields)._ownsMaterial + 1) = 1;
    if (*(char *)((long)&(__this_00->fields)._ownsMaterial + 2) != '\0') {
      return;
    }
    fVar15 = (__this_00->fields)._baseRelief;
    if (g_data_057a8dd2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a8dd2 = '\x01';
    }
    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
    fVar16 = Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__ShadowSize(__this_00,pMVar12);
    fStack_90 = (float)uVar2;
    fStack_8c = (float)((ulong)uVar2 >> 0x20);
    offsetTarget.fields.y = fStack_8c * fVar16 * 0.5;
    offsetTarget.fields.x = fStack_90 * fVar16 * 0.5;
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Animate_3a2e1b0
              (__this_00,fVar15 * 1.35,offsetTarget,0.08,9,method_00);
    return;
  }
  return;
}


