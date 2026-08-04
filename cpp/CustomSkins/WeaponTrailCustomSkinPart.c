// Type: CustomSkins.WeaponTrailCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/WeaponTrailCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/WeaponTrailCustomSkinPart.cs
// --------------------------------

// CustomSkins.WeaponTrailCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_WeaponTrailCustomSkinPart___ctor (CustomSkins_WeaponTrailCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_MeleeWeaponTrail__o* weaponTrails, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x40918b0

void CustomSkins_WeaponTrailCustomSkinPart___ctor
               (CustomSkins_WeaponTrailCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_MeleeWeaponTrail__o *weaponTrails,System_String_o *rendererId,
               int32_t maxSize,System_Nullable_Vector2__o textureScale,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,
             (System_Collections_Generic_List_Renderer__o *)0x0,rendererId,maxSize,textureScale,1,
             in_stack_ffffffffffffffe0);
  (__this->fields)._weaponTrails = weaponTrails;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._weaponTrails,weaponTrails);
  return;
}


// CustomSkins.WeaponTrailCustomSkinPart$$IsValidPart
// il2cpp: bool CustomSkins_WeaponTrailCustomSkinPart__IsValidPart (CustomSkins_WeaponTrailCustomSkinPart_o* __this, const MethodInfo* method);
// 0x40950c0

bool_conflict
CustomSkins_WeaponTrailCustomSkinPart__IsValidPart
          (CustomSkins_WeaponTrailCustomSkinPart_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_MeleeWeaponTrail__o *__this_00;
  
  if (g_data_057ac437 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeleeWeaponTrail_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac437 = '\x01';
  }
  __this_00 = (__this->fields)._weaponTrails;
  if (__this_00 != (System_Collections_Generic_List_MeleeWeaponTrail__o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_MeleeWeaponTrail_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return bVar1;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac438 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    g_data_057ac438 = '\x01';
  }
  if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  vtableDispatch =
       (((System_Collections_Generic_List_object__VTable *)&__this_00->klass->vtable)->_6_IndexOf).methodPtr;
  bVar1 = (*vtableDispatch)
                    (__this_00,*(undefined8 *)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 0x10),
                     (((System_Collections_Generic_List_object__VTable *)&__this_00->klass->vtable)->
                     _6_IndexOf).method,vtableDispatch);
  return bVar1;
}


// CustomSkins.WeaponTrailCustomSkinPart$$DisableRenderers
// il2cpp: void CustomSkins_WeaponTrailCustomSkinPart__DisableRenderers (CustomSkins_WeaponTrailCustomSkinPart_o* __this, const MethodInfo* method);
// 0x4095150

void CustomSkins_WeaponTrailCustomSkinPart__DisableRenderers
               (CustomSkins_WeaponTrailCustomSkinPart_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  if (g_data_057ac438 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    g_data_057ac438 = '\x01';
  }
  if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  vtableDispatch = (__this->klass->vtable)._6_SetMaterial.methodPtr;
  (*vtableDispatch)
            (__this,*(undefined8 *)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 0x10),
             (__this->klass->vtable)._6_SetMaterial.method,vtableDispatch);
  return;
}


// CustomSkins.WeaponTrailCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_WeaponTrailCustomSkinPart__SetMaterial (CustomSkins_WeaponTrailCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x40951c0

void CustomSkins_WeaponTrailCustomSkinPart__SetMaterial
               (CustomSkins_WeaponTrailCustomSkinPart_o *__this,UnityEngine_Material_o *material,
               MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  MeleeWeaponTrail_o *__this_05;
  
  if (g_data_057ac439 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeleeWeaponTrail_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_MeleeWeaponTrail_GetEnumerator);
    g_data_057ac439 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_05 = (MeleeWeaponTrail_o *)0x0;
  __this_00 = (__this->fields)._weaponTrails;
  if (__this_00 != (System_Collections_Generic_List_MeleeWeaponTrail__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_MeleeWeaponTrail_GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._list = pSVar5;
      __this_01.fields._current = (Il2CppObject *)__this_05;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar6;
        __this_02.fields._list = pSVar5;
        __this_02.fields._current = (Il2CppObject *)__this_05;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
        return;
      }
      if (__this_05 == (MeleeWeaponTrail_o *)0x0) break;
      MeleeWeaponTrail__SetMaterial(__this_05,material,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = (Il2CppObject *)__this_05;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar4._0_8_);
}


// CustomSkins.WeaponTrailCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_WeaponTrailCustomSkinPart__SetNewTexture (CustomSkins_WeaponTrailCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x4095320

UnityEngine_Material_o *
CustomSkins_WeaponTrailCustomSkinPart__SetNewTexture
          (CustomSkins_WeaponTrailCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method
          )

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  int iVar3;
  System_Collections_Generic_List_MeleeWeaponTrail__o *__this_00;
  UnityEngine_Material_o *pUVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  UnityEngine_Material_o *__this_01;
  System_String_o *pSVar7;
  UnityEngine_Material_o *extraout_RAX;
  UnityEngine_Material_o *extraout_RAX_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  float fVar8;
  float fVar10;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector2_o value;
  
  if (g_data_057ac43a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeleeWeaponTrail_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    g_data_057ac43a = '\x01';
  }
  __this_00 = (__this->fields)._weaponTrails;
  if ((__this_00 != (System_Collections_Generic_List_MeleeWeaponTrail__o *)0x0) &&
     (pIVar6 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_MeleeWeaponTrail_get_Item),
     pIVar6 != (Il2CppObject *)0x0)) {
    pUVar4 = pIVar6[2].monitor;
    __this_01 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    UnityEngine_Material___ctor_4dc9e70(__this_01,pUVar4,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__set_mainTexture(__this_01,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
      UVar1 = (__this->fields)._textureScale.fields;
      UVar2 = (__this->fields)._defaultTextureScale.fields;
      fVar8 = UVar1.x - UVar2.x;
      fVar10 = UVar1.y - UVar2.y;
      if (9.9999994e-11 <= fVar10 * fVar10 + fVar8 * fVar8) {
        UVar9 = UnityEngine_Material__get_mainTextureScale(__this_01,(MethodInfo *)0x0);
        UVar1 = (__this->fields)._textureScale.fields;
        value.fields.x = UVar9.fields.x * UVar1.x;
        value.fields.y = UVar9.fields.y * UVar1.y;
        UnityEngine_Material__set_mainTextureScale(__this_01,value,(MethodInfo *)0x0);
      }
      (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                (__this,__this_01,(__this->klass->vtable)._6_SetMaterial.method);
      return __this_01;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac43b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&"TransparentMaterial");
    il2cpp_runtime_helper_023445d0(&"Map/Materials");
    g_data_057ac43b = '\x01';
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = (System_String_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     ("Map/Materials","TransparentMaterial",0,MethodInfo_Material_InstantiateAsset_Material);
  if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar5 = *(long *)(TypeInfo_MaterialCache + 0xb8);
  *(System_String_o **)(lVar5 + 0x10) = pSVar7;
  il2cpp_runtime_helper_022b4080(lVar5 + 0x10);
  pUVar4 = *(UnityEngine_Material_o **)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 0x10);
  if (pUVar4 == (UnityEngine_Material_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac43c == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
      g_data_057ac43c = '\x01';
      iVar3 = *(int *)(TypeInfo_MaterialCache + 0xe4);
    }
    else {
      iVar3 = *(int *)(TypeInfo_MaterialCache + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
    }
    else {
      __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                  **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
    }
    if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear(__this_02,MethodInfo_Void_Clear);
      return extraout_RAX_00;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac440 == '\0') {
      il2cpp_runtime_helper_023445d0(&",");
      g_data_057ac440 = '\x01';
    }
    pSVar7 = System_String__Concat_3af7150((System_String_o *)__this_02,",",pSVar7,(MethodInfo *)0x0)
    ;
    return (UnityEngine_Material_o *)pSVar7;
  }
  UnityEngine_Material__set_color(pUVar4,(UnityEngine_Color_o)ZEXT816(0),(MethodInfo *)0x0);
  return extraout_RAX;
}


