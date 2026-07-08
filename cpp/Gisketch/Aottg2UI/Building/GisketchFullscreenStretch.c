// Type: Gisketch.Aottg2UI.Building.GisketchFullscreenStretch
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchFullscreenStretch.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$Mark
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Mark (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3b1a9b0

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Mark
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *__this;
  MethodInfo *method_00;
  
  if (DAT_05701551 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchFullscreenStretch_AddComponent_GisketchF);
    il2cpp_init_method_metadata(&MethodInfo_GisketchFullscreenStretch_GetComponent_GisketchF);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701551 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)
             UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_GisketchFullscreenStretch_GetComponent_GisketchF);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      method_00 = MethodInfo_GisketchFullscreenStretch_AddComponent_GisketchF;
      __this = (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)
               UnityEngine_GameObject__AddComponent<object>(go,(MethodInfo_24F0EB0 *)MethodInfo_GisketchFullscreenStretch_AddComponent_GisketchF);
    }
    if (__this != (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)0x0) {
      Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$ApplyAll
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__ApplyAll (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3b1ad60

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__ApplyAll
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  MethodInfo *method_00;
  
  if (DAT_05701552 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchFullscreenStretch___GetComponentsInChild);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701552 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x1;
    pSVar3 = UnityEngine_GameObject__GetComponentsInChildren<object>(root,1,MethodInfo_GisketchFullscreenStretch___GetComponentsInChild);
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (uint)pSVar3->max_length;
      if ((int)uVar2 < 1) {
        return;
      }
      uVar4 = 0;
      while( true ) {
        if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)pSVar3->m_Items[(int)uVar4] ==
            (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)0x0) break;
        Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply
                  ((Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)
                   pSVar3->m_Items[(int)uVar4],method_00);
        uVar4 = uVar4 + 1;
        uVar2 = (uint)pSVar3->max_length;
        if ((int)uVar2 <= (int)uVar4) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$Apply
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o* __this, const MethodInfo* method);
// 0x3b1aa80

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply
               (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector2_o UVar2;
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *__this_00;
  float fVar4;
  float fVar5;
  
  if (DAT_05701553 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701553 = '\x01';
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar3 != '\0') {
    return;
  }
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UVar2 = UnityEngine_RectTransform__get_anchorMin(__this_00,(MethodInfo *)0x0);
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  fVar4 = UVar2.fields.x - (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
  fVar5 = UVar2.fields.y - (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
  if (fVar5 * fVar5 + fVar4 * fVar4 < 9.9999994e-11) {
    UVar2 = UnityEngine_RectTransform__get_anchorMax(__this_00,(MethodInfo *)0x0);
    if (DAT_0570136e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_0570136e = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
    fVar4 = UVar2.fields.x - (float)uVar1;
    fVar5 = UVar2.fields.y - (float)((ulong)uVar1 >> 0x20);
    if (9.9999994e-11 <= fVar5 * fVar5 + fVar4 * fVar4) {
      if (DAT_056fe093 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_056fe093 = '\x01';
      }
    }
    else {
      UVar2 = UnityEngine_RectTransform__get_offsetMin(__this_00,(MethodInfo *)0x0);
      if (DAT_056fe093 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_056fe093 = '\x01';
      }
      fVar4 = UVar2.fields.x - (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
      fVar5 = UVar2.fields.y - (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
      if (fVar5 * fVar5 + fVar4 * fVar4 < 9.9999994e-11) {
        UVar2 = UnityEngine_RectTransform__get_offsetMax(__this_00,(MethodInfo *)0x0);
        if (DAT_056fe093 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector2);
          DAT_056fe093 = '\x01';
        }
        fVar4 = UVar2.fields.x - (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
        fVar5 = UVar2.fields.y - (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
        if (fVar5 * fVar5 + fVar4 * fVar4 < 9.9999994e-11) {
          return;
        }
      }
    }
  }
  UnityEngine_RectTransform__set_anchorMin
            (__this_00,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
             ,(MethodInfo *)0x0);
  if (DAT_0570136e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_0570136e = '\x01';
  }
  UnityEngine_RectTransform__set_anchorMax
            (__this_00,
             (UnityEngine_Vector2_o)
             *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMin
            (__this_00,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
             ,(MethodInfo *)0x0);
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax
            (__this_00,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
             ,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch___ctor (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o* __this, const MethodInfo* method);
// 0x3b1ae30

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch___ctor
               (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


