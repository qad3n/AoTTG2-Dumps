// Type: Gisketch.Aottg2UI.Building.GisketchFullscreenStretch
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchFullscreenStretch.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$Mark
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Mark (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3b86bf0

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Mark
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector2_o UVar2;
  bool_conflict bVar3;
  uint uVar4;
  Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *pGVar5;
  Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *pGVar6;
  System_Object_array *pSVar7;
  uint uVar8;
  MethodInfo *pMVar9;
  float fVar10;
  float fVar11;
  
  if (g_data_057a9e80 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchFullscreenStretch_AddComponent_GisketchFullscree);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchFullscreenStretch_GetComponent_GisketchFullscree);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e80 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar6 = (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)go;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pGVar5 = (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)
             UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_GisketchFullscreenStretch_GetComponent_GisketchFullscree);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar9 = (MethodInfo *)0x0;
    pGVar6 = pGVar5;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pMVar9 = MethodInfo_GisketchFullscreenStretch_AddComponent_GisketchFullscree;
      pGVar5 = (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)
               UnityEngine_GameObject__AddComponent_object_(go,(MethodInfo_255A020 *)MethodInfo_GisketchFullscreenStretch_AddComponent_GisketchFullscree);
      pGVar6 = (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)go;
    }
    if (pGVar5 != (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)0x0) {
      Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply(pGVar5,pMVar9);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9e82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e82 = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pGVar6,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar5 = pGVar6;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (pGVar6 != (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_anchorMin((UnityEngine_RectTransform_o *)pGVar6,(MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    fVar10 = UVar2.fields.x - (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
    fVar11 = UVar2.fields.y - (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
    if (fVar11 * fVar11 + fVar10 * fVar10 < 9.9999994e-11) {
      UVar2 = UnityEngine_RectTransform__get_anchorMax
                        ((UnityEngine_RectTransform_o *)pGVar6,(MethodInfo *)0x0);
      if (g_data_057a9c86 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a9c86 = '\x01';
      }
      uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
      fVar10 = UVar2.fields.x - (float)uVar1;
      fVar11 = UVar2.fields.y - (float)((ulong)uVar1 >> 0x20);
      if (9.9999994e-11 <= fVar11 * fVar11 + fVar10 * fVar10) {
        if (g_data_057a694c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
      }
      else {
        UVar2 = UnityEngine_RectTransform__get_offsetMin
                          ((UnityEngine_RectTransform_o *)pGVar6,(MethodInfo *)0x0);
        if (g_data_057a694c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        fVar10 = UVar2.fields.x - (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
        fVar11 = UVar2.fields.y - (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
        if (fVar11 * fVar11 + fVar10 * fVar10 < 9.9999994e-11) {
          UVar2 = UnityEngine_RectTransform__get_offsetMax
                            ((UnityEngine_RectTransform_o *)pGVar6,(MethodInfo *)0x0);
          if (g_data_057a694c == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          fVar10 = UVar2.fields.x - (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
          fVar11 = UVar2.fields.y - (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
          if (fVar11 * fVar11 + fVar10 * fVar10 < 9.9999994e-11) {
            return;
          }
        }
      }
    }
    UnityEngine_RectTransform__set_anchorMin
              ((UnityEngine_RectTransform_o *)pGVar6,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    if (g_data_057a9c86 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              ((UnityEngine_RectTransform_o *)pGVar6,
               (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
               (MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              ((UnityEngine_RectTransform_o *)pGVar6,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              ((UnityEngine_RectTransform_o *)pGVar6,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9e81 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchFullscreenStretch_GetComponentsInChildren_Gisket);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e81 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar6 = pGVar5;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (pGVar5 != (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)0x0) {
    pMVar9 = (MethodInfo *)0x1;
    pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object_
                       ((UnityEngine_GameObject_o *)pGVar5,1,MethodInfo_GisketchFullscreenStretch_GetComponentsInChildren_Gisket);
    pGVar6 = pGVar5;
    if (pSVar7 != (System_Object_array *)0x0) {
      uVar4 = (uint)pSVar7->max_length;
      if ((int)uVar4 < 1) {
        return;
      }
      uVar8 = 0;
      while (uVar8 < uVar4) {
        pGVar5 = (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)pSVar7->m_Items[(int)uVar8];
        pGVar6 = pGVar5;
        if (pGVar5 == (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)0x0) goto label_03b8705c;
        Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply(pGVar5,pMVar9);
        uVar8 = uVar8 + 1;
        uVar4 = (uint)pSVar7->max_length;
        if ((int)uVar4 <= (int)uVar8) {
          return;
        }
      }
      il2cpp_runtime_helper_022b2ca0();
      pGVar6 = pGVar5;
    }
  }
label_03b8705c:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pGVar6,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$ApplyAll
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__ApplyAll (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3b86fa0

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__ApplyAll
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *__this;
  
  if (g_data_057a9e81 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchFullscreenStretch_GetComponentsInChildren_Gisket);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e81 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)root;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x1;
    pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object_(root,1,MethodInfo_GisketchFullscreenStretch_GetComponentsInChildren_Gisket);
    __this = (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)root;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (uint)pSVar3->max_length;
      if ((int)uVar2 < 1) {
        return;
      }
      uVar4 = 0;
      while (uVar4 < uVar2) {
        root = (UnityEngine_GameObject_o *)pSVar3->m_Items[(int)uVar4];
        __this = (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)root;
        if ((Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)root ==
            (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)0x0) goto label_03b8705c;
        Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply
                  ((Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)root,method_00);
        uVar4 = uVar4 + 1;
        uVar2 = (uint)pSVar3->max_length;
        if ((int)uVar2 <= (int)uVar4) {
          return;
        }
      }
      il2cpp_runtime_helper_022b2ca0();
      __this = (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)root;
    }
  }
label_03b8705c:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$Apply
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o* __this, const MethodInfo* method);
// 0x3b86cc0

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply
               (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector2_o UVar2;
  bool_conflict bVar3;
  uint uVar4;
  Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *pGVar5;
  System_Object_array *pSVar6;
  uint uVar7;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *__this_00;
  float fVar8;
  float fVar9;
  
  if (g_data_057a9e82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e82 = '\x01';
  }
  pGVar5 = (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = pGVar5;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (pGVar5 != (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_anchorMin((UnityEngine_RectTransform_o *)pGVar5,(MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    fVar8 = UVar2.fields.x - (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
    fVar9 = UVar2.fields.y - (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
    if (fVar9 * fVar9 + fVar8 * fVar8 < 9.9999994e-11) {
      UVar2 = UnityEngine_RectTransform__get_anchorMax
                        ((UnityEngine_RectTransform_o *)pGVar5,(MethodInfo *)0x0);
      if (g_data_057a9c86 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a9c86 = '\x01';
      }
      uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
      fVar8 = UVar2.fields.x - (float)uVar1;
      fVar9 = UVar2.fields.y - (float)((ulong)uVar1 >> 0x20);
      if (9.9999994e-11 <= fVar9 * fVar9 + fVar8 * fVar8) {
        if (g_data_057a694c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
      }
      else {
        UVar2 = UnityEngine_RectTransform__get_offsetMin
                          ((UnityEngine_RectTransform_o *)pGVar5,(MethodInfo *)0x0);
        if (g_data_057a694c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        fVar8 = UVar2.fields.x - (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
        fVar9 = UVar2.fields.y - (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
        if (fVar9 * fVar9 + fVar8 * fVar8 < 9.9999994e-11) {
          UVar2 = UnityEngine_RectTransform__get_offsetMax
                            ((UnityEngine_RectTransform_o *)pGVar5,(MethodInfo *)0x0);
          if (g_data_057a694c == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          fVar8 = UVar2.fields.x - (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
          fVar9 = UVar2.fields.y - (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
          if (fVar9 * fVar9 + fVar8 * fVar8 < 9.9999994e-11) {
            return;
          }
        }
      }
    }
    UnityEngine_RectTransform__set_anchorMin
              ((UnityEngine_RectTransform_o *)pGVar5,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    if (g_data_057a9c86 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              ((UnityEngine_RectTransform_o *)pGVar5,
               (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
               (MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              ((UnityEngine_RectTransform_o *)pGVar5,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              ((UnityEngine_RectTransform_o *)pGVar5,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9e81 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchFullscreenStretch_GetComponentsInChildren_Gisket);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e81 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar5 = __this_00;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)0x0) {
    method_00 = (MethodInfo *)0x1;
    pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object_
                       ((UnityEngine_GameObject_o *)__this_00,1,MethodInfo_GisketchFullscreenStretch_GetComponentsInChildren_Gisket);
    pGVar5 = __this_00;
    if (pSVar6 != (System_Object_array *)0x0) {
      uVar4 = (uint)pSVar6->max_length;
      if ((int)uVar4 < 1) {
        return;
      }
      uVar7 = 0;
      while (uVar7 < uVar4) {
        __this_00 = (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)pSVar6->m_Items[(int)uVar7];
        pGVar5 = __this_00;
        if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)0x0) goto label_03b8705c;
        Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply(__this_00,method_00);
        uVar7 = uVar7 + 1;
        uVar4 = (uint)pSVar6->max_length;
        if ((int)uVar4 <= (int)uVar7) {
          return;
        }
      }
      il2cpp_runtime_helper_022b2ca0();
      pGVar5 = __this_00;
    }
  }
label_03b8705c:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pGVar5,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch___ctor (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o* __this, const MethodInfo* method);
// 0x3b87070

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch___ctor
               (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


