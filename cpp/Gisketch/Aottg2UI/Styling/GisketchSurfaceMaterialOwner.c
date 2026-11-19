// Type: Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchSurfaceMaterialOwner.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$Assign
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Assign (UnityEngine_UI_Graphic_o* graphic, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x5335090

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Assign
               (UnityEngine_UI_Graphic_o *graphic,UnityEngine_Material_o *material,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *__this;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542889 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchSurfaceMaterialOwner);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSurfaceMaterialOwner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542889 = '\x01';
  }
  if (graphic != (UnityEngine_UI_Graphic_o *)0x0) {
    (*(graphic->klass->vtable)._33_set_material.methodPtr)
              (graphic,material,(graphic->klass->vtable)._33_set_material.method);
    __this = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)graphic,
                        (MethodInfo_34B0830 *)
                        MethodInfo_UnityEngine_Component_GetComponent_GisketchSurfaceMaterialOwner);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (bVar1) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)graphic,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_0533519c;
      __this = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_353B6A0 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSurfaceMaterialOwner);
      method_00 = extraout_RDX_00;
    }
    if (__this != (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *)0x0) {
      Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Setup(__this,material,method_00);
      return;
    }
  }
label_0533519c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$ReleaseAll
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__ReleaseAll (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5335260

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__ReleaseAll
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  uint uVar4;
  
  if (Il2CppMethodInitialized_0754288a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchSurfaceMaterialOwner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754288a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((root != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object_
                         (root,true,
                          (MethodInfo_353C0B0 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchSurfaceMaterialOwner
                         ), pSVar3 != (System_Object_array *)0x0)) {
    uVar2 = (uint)pSVar3->max_length;
    if ((int)uVar2 < 1) {
      return;
    }
    uVar4 = 0;
    method_00 = extraout_RDX;
    while( true ) {
      if (uVar2 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      if ((Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *)pSVar3->m_Items[(int)uVar4] ==
          (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *)0x0) break;
      Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Setup
                ((Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *)pSVar3->m_Items[(int)uVar4],
                 (UnityEngine_Material_o *)0x0,method_00);
      uVar4 = uVar4 + 1;
      uVar2 = (uint)pSVar3->max_length;
      method_00 = extraout_RDX_00;
      if ((int)uVar2 <= (int)uVar4) {
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Setup (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x53351b0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Setup
               (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *__this,
               UnityEngine_Material_o *material,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  UnityEngine_Material_o **targetAddress;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754288b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754288b = '\x01';
  }
  pUVar1 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._material;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = *targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)material;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)material,(MethodInfo *)0x0);
    if (bVar2) {
      Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Release(*targetAddress,method_00);
    }
  }
  *targetAddress = material;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__OnDestroy (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o* __this, const MethodInfo* method);
// 0x53353d0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__OnDestroy
               (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *x;
  bool bVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754288c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754288c = '\x01';
  }
  x = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Release((__this->fields)._material,method_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$Release
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Release (UnityEngine_Material_o* material, const MethodInfo* method);
// 0x5335330

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Release
               (UnityEngine_Material_o *material,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754288d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754288d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  if (bVar2) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)material,(MethodInfo *)0x0);
      return;
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)material,(MethodInfo *)0x0);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    UnityEngine_Object__DestroyImmediate_6921750((UnityEngine_Object_o *)material,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__DestroyImmediate_6921750((UnityEngine_Object_o *)material,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterialOwner$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner___ctor (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o* __this, const MethodInfo* method);
// 0x5335440

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner___ctor
               (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


