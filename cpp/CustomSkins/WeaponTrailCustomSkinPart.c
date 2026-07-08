// Type: CustomSkins.WeaponTrailCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/WeaponTrailCustomSkinPart.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/CustomSkinParts/WeaponTrailCustomSkinPart.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.WeaponTrailCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_WeaponTrailCustomSkinPart___ctor (CustomSkins_WeaponTrailCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_MeleeWeaponTrail__o* weaponTrails, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x4244700

void CustomSkins_WeaponTrailCustomSkinPart___ctor
               (CustomSkins_WeaponTrailCustomSkinPart_o *__this,
               CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_MeleeWeaponTrail__o *weaponTrails,
               System_String_o *rendererId,int32_t maxSize,System_Nullable_Vector2__o textureScale,
               MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,
             (System_Collections_Generic_List_Renderer__o *)0x0,rendererId,maxSize,textureScale,1,
             in_stack_ffffffffffffffe0);
  (__this->fields)._weaponTrails = weaponTrails;
  il2cpp_runtime_glue(&(__this->fields)._weaponTrails,weaponTrails);
  return;
}


// CustomSkins.WeaponTrailCustomSkinPart$$IsValidPart
// il2cpp: bool CustomSkins_WeaponTrailCustomSkinPart__IsValidPart (CustomSkins_WeaponTrailCustomSkinPart_o* __this, const MethodInfo* method);
// 0x4248060

bool_conflict
CustomSkins_WeaponTrailCustomSkinPart__IsValidPart
          (CustomSkins_WeaponTrailCustomSkinPart_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail__o *__this_00;
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  
  if (DAT_057051de == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_MeleeWeaponTrail_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057051de = '\x01';
  }
  __this_00 = (__this->fields)._weaponTrails;
  if (__this_00 != (System_Collections_Generic_List_MeleeWeaponTrail__o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_MeleeWeaponTrail_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return bVar1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.WeaponTrailCustomSkinPart$$DisableRenderers
// il2cpp: void CustomSkins_WeaponTrailCustomSkinPart__DisableRenderers (CustomSkins_WeaponTrailCustomSkinPart_o* __this, const MethodInfo* method);
// 0x42480f0

void CustomSkins_WeaponTrailCustomSkinPart__DisableRenderers
               (CustomSkins_WeaponTrailCustomSkinPart_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  if (DAT_057051df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MaterialCache);
    DAT_057051df = '\x01';
  }
  if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
    il2cpp_init_class();
  }
  vtable_dispatch = (__this->klass->vtable)._6_SetMaterial.methodPtr;
  (*vtable_dispatch)
            (__this,*(undefined8 *)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 0x10),
             (__this->klass->vtable)._6_SetMaterial.method,vtable_dispatch);
  return;
}


// CustomSkins.WeaponTrailCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_WeaponTrailCustomSkinPart__SetMaterial (CustomSkins_WeaponTrailCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4248160

void CustomSkins_WeaponTrailCustomSkinPart__SetMaterial
               (CustomSkins_WeaponTrailCustomSkinPart_o *__this,UnityEngine_Material_o *material,
               MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  MeleeWeaponTrail_o *__this_03;
  
  if (DAT_057051e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MeleeWeaponTrail_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_MeleeWeaponTrail__GetEnumer);
    DAT_057051e0 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  __this_03 = (MeleeWeaponTrail_o *)0x0;
  __this_00 = (__this->fields)._weaponTrails;
  if (__this_00 != (System_Collections_Generic_List_MeleeWeaponTrail__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_MeleeWeaponTrail__GetEnumer);
    while( true ) {
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = pSVar2;
      __this_01.fields._current = (Il2CppObject *)__this_03;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar1 == '\0') {
        __this_02.fields._8_8_ = pIVar3;
        __this_02.fields._list = pSVar2;
        __this_02.fields._current = (Il2CppObject *)__this_03;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
        return;
      }
      if (__this_03 == (MeleeWeaponTrail_o *)0x0) break;
      MeleeWeaponTrail__SetMaterial(__this_03,material,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.WeaponTrailCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_WeaponTrailCustomSkinPart__SetNewTexture (CustomSkins_WeaponTrailCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x42482c0

UnityEngine_Material_o *
CustomSkins_WeaponTrailCustomSkinPart__SetNewTexture
          (CustomSkins_WeaponTrailCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  System_Collections_Generic_List_MeleeWeaponTrail__o *__this_00;
  UnityEngine_Material_o *source;
  Il2CppObject *pIVar3;
  UnityEngine_Material_o *__this_01;
  float fVar4;
  float fVar6;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o value;
  
  if (DAT_057051e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MeleeWeaponTrail_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    DAT_057051e1 = '\x01';
  }
  __this_00 = (__this->fields)._weaponTrails;
  if (__this_00 != (System_Collections_Generic_List_MeleeWeaponTrail__o *)0x0) {
    pIVar3 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_MeleeWeaponTrail_get_Item);
    if (pIVar3 != (Il2CppObject *)0x0) {
      source = pIVar3[2].monitor;
      __this_01 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
      UnityEngine_Material___ctor(__this_01,source,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture
                  (__this_01,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
        UVar1 = (__this->fields)._textureScale.fields;
        UVar2 = (__this->fields)._defaultTextureScale.fields;
        fVar4 = UVar1.x - UVar2.x;
        fVar6 = UVar1.y - UVar2.y;
        if (9.9999994e-11 <= fVar6 * fVar6 + fVar4 * fVar4) {
          UVar5 = UnityEngine_Material__get_mainTextureScale(__this_01,(MethodInfo *)0x0);
          UVar1 = (__this->fields)._textureScale.fields;
          value.fields.x = UVar5.fields.x * UVar1.x;
          value.fields.y = UVar5.fields.y * UVar1.y;
          UnityEngine_Material__set_mainTextureScale(__this_01,value,(MethodInfo *)0x0);
        }
        (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                  (__this,__this_01,(__this->klass->vtable)._6_SetMaterial.method);
        return __this_01;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


