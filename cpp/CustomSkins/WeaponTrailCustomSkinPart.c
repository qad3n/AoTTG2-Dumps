// Type: CustomSkins.WeaponTrailCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomSkins/WeaponTrailCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/WeaponTrailCustomSkinPart.cs
// --------------------------------

// CustomSkins.WeaponTrailCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_WeaponTrailCustomSkinPart___ctor (CustomSkins_WeaponTrailCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_MeleeWeaponTrail__o* weaponTrails, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x5961540

void CustomSkins_WeaponTrailCustomSkinPart___ctor
               (CustomSkins_WeaponTrailCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_MeleeWeaponTrail__o *weaponTrails,System_String_o *rendererId,
               int32_t maxSize,System_Nullable_Vector2__o textureScale,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,
             (System_Collections_Generic_List_Renderer__o *)0x0,rendererId,maxSize,textureScale,true,
             in_stack_ffffffffffffffe0);
  (__this->fields)._weaponTrails = weaponTrails;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._weaponTrails);
  return;
}


// CustomSkins.WeaponTrailCustomSkinPart$$IsValidPart
// il2cpp: bool CustomSkins_WeaponTrailCustomSkinPart__IsValidPart (CustomSkins_WeaponTrailCustomSkinPart_o* __this, const MethodInfo* method);
// 0x5965340

bool CustomSkins_WeaponTrailCustomSkinPart__IsValidPart
               (CustomSkins_WeaponTrailCustomSkinPart_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail__o *__this_00;
  bool bVar1;
  MeleeWeaponTrail_o *x;
  
  if (Il2CppMethodInitialized_07545945 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545945 = '\x01';
  }
  __this_00 = (__this->fields)._weaponTrails;
  if (__this_00 == (System_Collections_Generic_List_MeleeWeaponTrail__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this_00->fields)._size < 1) {
    return false;
  }
  x = System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)__this_00,0,
                 (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_get_Item);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// CustomSkins.WeaponTrailCustomSkinPart$$DisableRenderers
// il2cpp: void CustomSkins_WeaponTrailCustomSkinPart__DisableRenderers (CustomSkins_WeaponTrailCustomSkinPart_o* __this, const MethodInfo* method);
// 0x59653d0

void CustomSkins_WeaponTrailCustomSkinPart__DisableRenderers
               (CustomSkins_WeaponTrailCustomSkinPart_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545946 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_07545946 = '\x01';
  }
  if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
  }
  (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
            (__this,TypeInfo_CustomSkins_MaterialCache->static_fields->TransparentMaterial,
             (__this->klass->vtable)._6_SetMaterial.method);
  return;
}


// CustomSkins.WeaponTrailCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_WeaponTrailCustomSkinPart__SetMaterial (CustomSkins_WeaponTrailCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x5965440
// eh: try 0x59654e3..0x5965526 -> pad 0x596552f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5965547..0x596554c -> pad 0x596556b cleanup
// eh: try 0x596556e..0x5965578 -> pad 0x5965580 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596552b: jmp 0x596552f
// asm:   0x596552d: jmp 0x596552f
// asm:   0x596552f: mov rbx, rax
// asm:   0x5965532: cmp edx, 1
// asm:   0x5965535: jne 0x596556e
// asm:   0x5965537: mov rdi, rbx
// asm:   0x596553a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x596553f: mov rbx, qword ptr [rax]
// asm:   0x5965542: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5965547: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x596554c: lea rax, [rip + 0x1928f75]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MeleeWeaponTrail_Dispose
// asm:   0x5965553: mov rsi, qword ptr [rax]
// asm:   0x5965556: mov rdi, rsp
// asm:   0x5965559: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x596555e: test rbx, rbx
// asm:   0x5965561: je 0x5965517
// asm:   0x5965563: mov rdi, rbx
// asm:   0x5965566: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x596556b: mov rbx, rax
// asm:   0x596556e: lea rdi, [rsp + 0x20]
// asm:   0x5965573: call 0x2fd3b60  ; il2cpp_runtime_helper_02fd3b60()
// asm:   0x5965578: mov rdi, rbx
// asm:   0x596557b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5965580: mov rdi, rax
// asm:   0x5965583: call 0x2ab61e0  ; __clang_call_terminate()

void CustomSkins_WeaponTrailCustomSkinPart__SetMaterial
               (CustomSkins_WeaponTrailCustomSkinPart_o *__this,UnityEngine_Material_o *material,
               MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  if (Il2CppMethodInitialized_07545947 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MeleeWeaponTrail_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MeleeWeaponTrail_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MeleeWeaponTrail_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_GetEnumerator);
    Il2CppMethodInitialized_07545947 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._weaponTrails;
  if (__this_00 == (System_Collections_Generic_List_MeleeWeaponTrail__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_GetEnumerator);
  local_28 = 0;
  local_20 = (undefined1 *)&local_48;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MeleeWeaponTrail_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_MeleeWeaponTrail_Dispose);
      return;
    }
    if ((MeleeWeaponTrail_o *)local_48.fields._current == (MeleeWeaponTrail_o *)0x0) break;
    MeleeWeaponTrail__SetMaterial((MeleeWeaponTrail_o *)local_48.fields._current,material,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// CustomSkins.WeaponTrailCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_WeaponTrailCustomSkinPart__SetNewTexture (CustomSkins_WeaponTrailCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x5965590

UnityEngine_Material_o *
CustomSkins_WeaponTrailCustomSkinPart__SetNewTexture
          (CustomSkins_WeaponTrailCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method
          )

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  System_Collections_Generic_List_MeleeWeaponTrail__o *__this_00;
  UnityEngine_Material_o *source;
  MeleeWeaponTrail_o *pMVar3;
  UnityEngine_Material_o *__this_01;
  float fVar4;
  float fVar6;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o value;
  
  if (Il2CppMethodInitialized_07545948 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    Il2CppMethodInitialized_07545948 = '\x01';
  }
  __this_00 = (__this->fields)._weaponTrails;
  if (__this_00 != (System_Collections_Generic_List_MeleeWeaponTrail__o *)0x0) {
    pMVar3 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,0,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_get_Item);
    if (pMVar3 != (MeleeWeaponTrail_o *)0x0) {
      source = (pMVar3->fields)._material;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor_68dcfd0(__this_01,source,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(__this_01,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


