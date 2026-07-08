// Type: Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchSurfaceMaterial.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$get_Shared
// il2cpp: UnityEngine_Material_o* Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared (const MethodInfo* method);
// 0x3acc3a0

UnityEngine_Material_o *
Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Object_o *pUVar4;
  MethodInfo *method_00;
  
  if (DAT_05701343 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Material_Load_Material);
    il2cpp_init_method_metadata(&"GisketchUI/Materials/AottgUiSurface");
    il2cpp_init_method_metadata(&"Gisketch/AoTTG2 UI Surface");
    il2cpp_init_method_metadata(&"AoTTG UI Textured Surface");
    DAT_05701343 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar4 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x68);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pIVar3 = UnityEngine_Resources__Load<object>("GisketchUI/Materials/AottgUiSurface",MethodInfo_Material_Load_Material);
    if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar1 = *(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8);
    *(Il2CppObject **)(lVar1 + 0x68) = pIVar3;
    il2cpp_runtime_glue(lVar1 + 0x68);
    pUVar4 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x68);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pUVar4 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("Gisketch/AoTTG2 UI Surface",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return (UnityEngine_Material_o *)0x0;
      }
      method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_Material);
      UnityEngine_Material___ctor
                ((UnityEngine_Material_o *)method_00,(UnityEngine_Shader_o *)pUVar4,
                 (MethodInfo *)0x0);
      if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_Object__set_name((UnityEngine_Object_o *)method_00,"AoTTG UI Textured Surface",(MethodInfo *)0x0)
      ;
      UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)method_00,0x3d,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = *(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8);
      *(MethodInfo **)(lVar1 + 0x68) = method_00;
      il2cpp_runtime_glue(lVar1 + 0x68);
      Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyDefaults
                (*(UnityEngine_Material_o **)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x68),method_00);
      goto LAB_03acc5b0;
    }
  }
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_init_class();
  }
LAB_03acc5b0:
  return *(UnityEngine_Material_o **)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x68);
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyDefaults (UnityEngine_Material_o* material, const MethodInfo* method);
// 0x3acc5d0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyDefaults
               (UnityEngine_Material_o *material,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (DAT_05701344 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&"AOTTG_WORN");
    DAT_05701344 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyPreset
            (material,205.0,0.0147,72.0,0.0014,0.0089,method);
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyLightPreset
            (material,263.0,0.04,120.0,0.007,0.018,method);
  if (material != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x28),0.0,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x2c),0.0,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x30),225.0,(MethodInfo *)0x0)
    ;
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x34),4.0,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x38),0.0,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x48),1.0,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x4c),1.0,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x50),0.0,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x54),0.46,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x58),42.0,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x5c),0.0,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60),0.0,(MethodInfo *)0x0);
    method_00 = "AOTTG_WORN";
    UnityEngine_Material__DisableKeyword(material,(System_String_o *)"AOTTG_WORN",(MethodInfo *)0x0)
    ;
    Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
              (material,0.18,0.34,18.0,method_00);
    Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefSettings
              (225.0,4.0,(MethodInfo *)material);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$Instance
// il2cpp: UnityEngine_Material_o* Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance (float relief, bool reliefGradient, bool worn, System_Nullable_float__o stainScaleOverride, bool brushStreak, bool verticalLightGradient, const MethodInfo* method);
// 0x3acce80

UnityEngine_Material_o *
Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance
          (float relief,bool_conflict reliefGradient,bool_conflict worn,
          System_Nullable_float__o stainScaleOverride,bool_conflict brushStreak,
          bool_conflict verticalLightGradient,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  long lVar6;
  bool_conflict bVar7;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *__this_01;
  MethodInfo *method_00;
  char cVar8;
  float fVar9;
  char local_44;
  System_Nullable_float__Fields local_38;
  
  local_38 = stainScaleOverride.fields;
  if (DAT_05701345 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"AoTTG UI Surface Instance");
    il2cpp_init_method_metadata(&"AOTTG_WORN");
    DAT_05701345 = '\x01';
  }
  method_00 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return (UnityEngine_Material_o *)0x0;
  }
  __this_01 = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_Material);
  UnityEngine_Material___ctor
            ((UnityEngine_Material_o *)__this_01,(UnityEngine_Material_o *)x,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_Object_o *)0x0) goto LAB_03acd335;
  UnityEngine_Object__set_name(__this_01,"AoTTG UI Surface Instance",(MethodInfo *)0x0);
  UnityEngine_Object__set_hideFlags(__this_01,0x34,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Material__SetFloat
            ((UnityEngine_Material_o *)__this_01,
             *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x28),relief,(MethodInfo *)0x0);
  if ((char)reliefGradient == '\0') {
    fVar9 = 0.0;
  }
  else {
    fVar9 = 1.0;
  }
  UnityEngine_Material__SetFloat
            ((UnityEngine_Material_o *)__this_01,
             *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x2c),fVar9,(MethodInfo *)0x0);
  cVar8 = (char)worn;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    il2cpp_init_class();
    if (cVar8 == '\0') goto LAB_03acd02b;
LAB_03acd03e:
    fVar9 = 1.0;
  }
  else {
    if (cVar8 != '\0') goto LAB_03acd03e;
LAB_03acd02b:
    fVar9 = 0.0;
  }
  UnityEngine_Material__SetFloat
            ((UnityEngine_Material_o *)__this_01,
             *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x38),fVar9,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Material__SetFloat
            ((UnityEngine_Material_o *)__this_01,
             *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x48),1.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat
            ((UnityEngine_Material_o *)__this_01,
             *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x4c),1.0,(MethodInfo *)0x0);
  fVar9 = 1.0;
  if ((char)brushStreak == '\0') {
    fVar9 = 0.0;
  }
  UnityEngine_Material__SetFloat
            ((UnityEngine_Material_o *)__this_01,
             *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x50),fVar9,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  if (x != (UnityEngine_Object_o *)0x0) {
    iVar2 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x54);
    fVar9 = UnityEngine_Material__GetFloat((UnityEngine_Material_o *)x,iVar2,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              ((UnityEngine_Material_o *)__this_01,iVar2,fVar9,(MethodInfo *)0x0);
    iVar2 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x58);
    fVar9 = UnityEngine_Material__GetFloat((UnityEngine_Material_o *)x,iVar2,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              ((UnityEngine_Material_o *)__this_01,iVar2,fVar9,(MethodInfo *)0x0);
    local_44 = (char)verticalLightGradient;
    if (local_44 == '\0') {
      fVar9 = 0.0;
    }
    else {
      fVar9 = 1.0;
    }
    UnityEngine_Material__SetFloat
              ((UnityEngine_Material_o *)__this_01,
               *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x5c),fVar9,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Material__SetFloat
              ((UnityEngine_Material_o *)__this_01,
               *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x60),0.0,(MethodInfo *)0x0);
    if (cVar8 == '\0') {
      UnityEngine_Material__DisableKeyword
                ((UnityEngine_Material_o *)__this_01,"AOTTG_WORN",(MethodInfo *)0x0);
      iVar3 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
    else {
      UnityEngine_Material__EnableKeyword
                ((UnityEngine_Material_o *)__this_01,"AOTTG_WORN",(MethodInfo *)0x0);
      iVar3 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
    if (iVar3 == 0) {
      il2cpp_init_class();
    }
    iVar2 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30);
    fVar9 = UnityEngine_Material__GetFloat((UnityEngine_Material_o *)x,iVar2,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              ((UnityEngine_Material_o *)__this_01,iVar2,fVar9,(MethodInfo *)0x0);
    iVar2 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34);
    fVar9 = UnityEngine_Material__GetFloat((UnityEngine_Material_o *)x,iVar2,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              ((UnityEngine_Material_o *)__this_01,iVar2,fVar9,(MethodInfo *)0x0);
    if ((char)stainScaleOverride.fields.hasValue != '\0') {
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      iVar2 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x44);
      fVar9 = System_Nullable<float>__get_Value((System_Nullable_float__o)&local_38,MethodInfo_Single_get_Value);
      UnityEngine_Material__SetFloat
                ((UnityEngine_Material_o *)__this_01,iVar2,fVar9,(MethodInfo *)0x0);
      __this = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
      fVar9 = System_Nullable<float>__get_Value((System_Nullable_float__o)&local_38,MethodInfo_Single_get_Value);
      if (__this == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto LAB_03acd335;
      System_Collections_Generic_Dictionary<object__float>__set_Item
                (__this,(Il2CppObject *)__this_01,fVar9,MethodInfo_Void_set_Item);
    }
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    lVar6 = MethodInfo_Void_Add;
    __this_00 = *(System_Collections_Generic_List_object__o **)
                 (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_00->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar4 = (__this_00->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)__this_01;
          il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar4,__this_01);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,(Il2CppObject *)__this_01,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        return (UnityEngine_Material_o *)__this_01;
      }
    }
  }
LAB_03acd335:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyReliefLightAngle
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefLightAngle (float angle, const MethodInfo* method);
// 0x3acd340

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefLightAngle
               (float angle,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *__this;
  MethodInfo *pMVar3;
  float shadowSize;
  
  if (DAT_05701346 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701346 = '\x01';
  }
  pMVar3 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar3);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    shadowSize = 4.0;
    iVar1 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    pMVar3 = TypeInfo_GisketchSurfaceMaterial;
  }
  else {
    pMVar3 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    __this = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar3);
    if (__this == (UnityEngine_Material_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    shadowSize = UnityEngine_Material__GetFloat
                           (__this,*(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34),
                            (MethodInfo *)0x0);
    iVar1 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    pMVar3 = TypeInfo_GisketchSurfaceMaterial;
  }
  TypeInfo_GisketchSurfaceMaterial = pMVar3;
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefSettings(angle,shadowSize,pMVar3);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyReliefSettings
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefSettings (float angle, float shadowSize, const MethodInfo* method);
// 0x3accbb0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefSettings
               (float angle,float shadowSize,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *pUVar3;
  MethodInfo *method_00;
  int iVar4;
  
  if (DAT_05701347 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701347 = '\x01';
  }
  method_00 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pUVar3 = (UnityEngine_Object_o *)
           Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    if (pUVar3 == (UnityEngine_Object_o *)0x0) goto LAB_03acce6c;
    UnityEngine_Material__SetFloat
              ((UnityEngine_Material_o *)pUVar3,
               *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30),angle,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              ((UnityEngine_Material_o *)pUVar3,
               *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34),shadowSize,
               (MethodInfo *)0x0);
  }
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  if (*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) != 0) {
    iVar4 = *(int *)(*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) + 0x18);
    if (-1 < iVar4 + -1) {
      iVar4 = iVar4 + -2;
      iVar1 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
      while( true ) {
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        if (*(System_Collections_Generic_List_object__o **)
             (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) ==
            (System_Collections_Generic_List_object__o *)0x0) goto LAB_03acce6c;
        pUVar3 = (UnityEngine_Object_o *)
                 System_Collections_Generic_List<object>__get_Item
                           (*(System_Collections_Generic_List_object__o **)
                             (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70),iVar4 + 1,MethodInfo_Material_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Equality
                          (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          if (pUVar3 == (UnityEngine_Object_o *)0x0) goto LAB_03acce6c;
          UnityEngine_Material__SetFloat
                    ((UnityEngine_Material_o *)pUVar3,
                     *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30),angle,
                     (MethodInfo *)0x0);
          UnityEngine_Material__SetFloat
                    ((UnityEngine_Material_o *)pUVar3,
                     *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34),shadowSize,
                     (MethodInfo *)0x0);
        }
        else {
          if (pUVar3 != (UnityEngine_Object_o *)0x0) {
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              il2cpp_init_class();
            }
            if (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                 (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78) ==
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto LAB_03acce6c;
            System_Collections_Generic_Dictionary<object__float>__Remove
                      (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                        (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78),(Il2CppObject *)pUVar3,
                       MethodInfo_Boolean_Remove);
          }
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          if (*(System_Collections_Generic_List_object__o **)
               (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) ==
              (System_Collections_Generic_List_object__o *)0x0) goto LAB_03acce6c;
          System_Collections_Generic_List<object>__RemoveAt
                    (*(System_Collections_Generic_List_object__o **)
                      (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70),iVar4 + 1,MethodInfo_Void_RemoveAt);
        }
        if (iVar4 < 0) break;
        iVar4 = iVar4 + -1;
        iVar1 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
      }
    }
    return;
  }
LAB_03acce6c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyWearSettings
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearSettings (float wearStrength, float chipStrength, float stainScale, const MethodInfo* method);
// 0x3acd440

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearSettings
               (float wearStrength,float chipStrength,float stainScale,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  UnityEngine_Material_o *material;
  MethodInfo *pMVar3;
  MethodInfo *in_RSI;
  MethodInfo *method_00;
  int iVar4;
  float stainScale_00;
  float fStack_38;
  float fStack_34;
  
  if (DAT_05701348 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701348 = '\x01';
  }
  fStack_38 = 0.0;
  pMVar3 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  material = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar3);
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
            (material,wearStrength,chipStrength,stainScale,in_RSI);
  if (*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) != 0) {
    iVar4 = *(int *)(*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) + 0x18);
    if (-1 < iVar4 + -1) {
      iVar4 = iVar4 + -2;
      iVar1 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
      while( true ) {
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        if (*(System_Collections_Generic_List_object__o **)
             (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) ==
            (System_Collections_Generic_List_object__o *)0x0) goto LAB_03acd6f4;
        pMVar3 = (MethodInfo *)
                 System_Collections_Generic_List<object>__get_Item
                           (*(System_Collections_Generic_List_object__o **)
                             (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70),iVar4 + 1,MethodInfo_Material_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pMVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          if (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
               (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78) ==
              (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto LAB_03acd6f4;
          method_00 = pMVar3;
          bVar2 = System_Collections_Generic_Dictionary<object__float>__TryGetValue
                            (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                              (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78),(Il2CppObject *)pMVar3,
                             &fStack_38,MethodInfo_Boolean_TryGetValue);
          if ((char)bVar2 == '\0') {
            iVar1 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
            stainScale_00 = stainScale;
          }
          else {
            iVar1 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
            stainScale_00 = fStack_38;
          }
          if (iVar1 == 0) {
            fStack_34 = stainScale_00;
            il2cpp_init_class();
            stainScale_00 = fStack_34;
          }
          Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
                    ((UnityEngine_Material_o *)pMVar3,wearStrength,chipStrength,stainScale_00,
                     method_00);
        }
        else {
          if (pMVar3 != (MethodInfo *)0x0) {
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              il2cpp_init_class();
            }
            if (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                 (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78) ==
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto LAB_03acd6f4;
            System_Collections_Generic_Dictionary<object__float>__Remove
                      (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                        (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78),(Il2CppObject *)pMVar3,
                       MethodInfo_Boolean_Remove);
          }
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          if (*(System_Collections_Generic_List_object__o **)
               (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) ==
              (System_Collections_Generic_List_object__o *)0x0) goto LAB_03acd6f4;
          System_Collections_Generic_List<object>__RemoveAt
                    (*(System_Collections_Generic_List_object__o **)
                      (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70),iVar4 + 1,MethodInfo_Void_RemoveAt);
        }
        if (iVar4 < 0) break;
        iVar4 = iVar4 + -1;
        iVar1 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
      }
    }
    return;
  }
LAB_03acd6f4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyPreset
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyPreset (UnityEngine_Material_o* material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength, const MethodInfo* method);
// 0x3acc830

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyPreset
               (UnityEngine_Material_o *material,float fineScale,float fineStrength,
               float coarseScale,float coarseStrength,float gradientStrength,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05701349 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701349 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (material != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat
              (material,**(int32_t **)(TypeInfo_GisketchSurfaceMaterial + 0xb8),fineScale,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 4),fineStrength,
               (MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 8),coarseScale,
               (MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0xc),coarseStrength,
               (MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x10),gradientStrength,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyLightPreset
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyLightPreset (UnityEngine_Material_o* material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength, const MethodInfo* method);
// 0x3acc970

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyLightPreset
               (UnityEngine_Material_o *material,float fineScale,float fineStrength,
               float coarseScale,float coarseStrength,float gradientStrength,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_0570134a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570134a = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (material != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x14),fineScale,
               (MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x18),fineStrength,
               (MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x1c),coarseScale,
               (MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x20),coarseStrength,
               (MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x24),gradientStrength,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyWearPreset
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset (UnityEngine_Material_o* material, float wearStrength, float chipStrength, float stainScale, const MethodInfo* method);
// 0x3accab0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
               (UnityEngine_Material_o *material,float wearStrength,float chipStrength,
               float stainScale,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_0570134b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570134b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (material != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x3c),wearStrength,
               (MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x40),chipStrength,
               (MethodInfo *)0x0);
    UnityEngine_Material__SetFloat
              (material,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x44),stainScale,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial___cctor (const MethodInfo* method);
// 0x3acd700

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial___cctor(MethodInfo *method)

{
  long lVar1;
  int32_t iVar2;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  
  if (DAT_0570134c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_Material__float);
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_init_method_metadata(&TypeInfo_List_Material);
    il2cpp_init_method_metadata(&"_BrushStreakScale");
    il2cpp_init_method_metadata(&"_GradientStrength");
    il2cpp_init_method_metadata(&"_CoarseStrength");
    il2cpp_init_method_metadata(&"_ChipStrength");
    il2cpp_init_method_metadata(&"_BrushReveal");
    il2cpp_init_method_metadata(&"_LightFineScale");
    il2cpp_init_method_metadata(&"_ReliefShadowSize");
    il2cpp_init_method_metadata(&"_LightCoarseScale");
    il2cpp_init_method_metadata(&"_FineScale");
    il2cpp_init_method_metadata(&"_HorizontalBlur");
    il2cpp_init_method_metadata(&"_VerticalLightGradient");
    il2cpp_init_method_metadata(&"_BrushStreakStrength");
    il2cpp_init_method_metadata(&"_LightCoarseStrength");
    il2cpp_init_method_metadata(&"_BrushRevealDirection");
    il2cpp_init_method_metadata(&"_CoarseScale");
    il2cpp_init_method_metadata(&"_Relief");
    il2cpp_init_method_metadata(&"_FineStrength");
    il2cpp_init_method_metadata(&"_WearStrength");
    il2cpp_init_method_metadata(&"_LightGradientStrength");
    il2cpp_init_method_metadata(&"_LightFineStrength");
    il2cpp_init_method_metadata(&"_BrushStreak");
    il2cpp_init_method_metadata(&"_Worn");
    il2cpp_init_method_metadata(&"_StainScale");
    il2cpp_init_method_metadata(&"_ReliefGradient");
    il2cpp_init_method_metadata(&"_ReliefLightAngle");
    DAT_0570134c = '\x01';
  }
  iVar2 = UnityEngine_Shader__PropertyToID("_FineScale",(MethodInfo *)0x0);
  **(int32_t **)(TypeInfo_GisketchSurfaceMaterial + 0xb8) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_FineStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 4) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_CoarseScale",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 8) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_CoarseStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0xc) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_GradientStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x10) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightFineScale",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x14) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightFineStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x18) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightCoarseScale",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x1c) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightCoarseStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x20) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightGradientStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x24) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_Relief",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x28) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_ReliefGradient",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x2c) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_ReliefLightAngle",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x30) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_ReliefShadowSize",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x34) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_Worn",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x38) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_WearStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x3c) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_ChipStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x40) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_StainScale",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x44) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushReveal",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x48) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushRevealDirection",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x4c) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushStreak",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x50) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushStreakStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x54) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushStreakScale",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x58) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_VerticalLightGradient",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x5c) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_HorizontalBlur",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60) = iVar2;
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Material);
  System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_UnityEngine_Material);
  lVar1 = *(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x70) = __this;
  il2cpp_runtime_glue(lVar1 + 0x70,__this);
  __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_Material__float);
  System_Collections_Generic_Dictionary<object__float>___ctor(__this_00,MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
  lVar1 = *(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8);
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar1 + 0x78) = __this_00;
  il2cpp_runtime_glue(lVar1 + 0x78,__this_00);
  return;
}


