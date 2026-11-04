// Type: Characters.DummyTitan
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/DummyTitan.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/DummyTitan.cs
// --------------------------------

// Characters.DummyTitan$$Awake
// il2cpp: void Characters_DummyTitan__Awake (Characters_DummyTitan_o* __this, const MethodInfo* method);
// 0x1821a8ac0

void Characters_DummyTitan__Awake(Characters_DummyTitan_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  Characters_BasicTitanComponentCache_o *pCVar4;
  Characters_BasicTitanSetup_o *value;
  CustomSkins_TitanCustomSkinLoader_o *value_00;
  Characters_BasicTitanAnimations_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar5;
  UnityEngine_Material_o *__this_02;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346e42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TitanCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e42 = '\x01';
  }
  Characters_DummyCharacter__Awake((Characters_DummyCharacter_o *)__this,(MethodInfo *)0x0);
  pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pCVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
  Characters_BasicTitanComponentCache___ctor(pCVar4,pUVar3,(MethodInfo *)0x0);
  (__this->fields).Cache = pCVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Cache,pCVar4);
  pCVar4 = (__this->fields).Cache;
  if ((pCVar4 != (Characters_BasicTitanComponentCache_o *)0x0) &&
     (pUVar1 = (pCVar4->fields).Rigidbody, pUVar1 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_freezeRotation(pUVar1,true,(MethodInfo *)0x0);
    pCVar4 = (__this->fields).Cache;
    if ((pCVar4 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pUVar1 = (pCVar4->fields).Rigidbody, pUVar1 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__set_useGravity(pUVar1,false,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        value = UnityEngine_GameObject__AddComponent_object_
                          (pUVar3,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_BasicTitanSetup);
        (__this->fields).Setup = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Setup,value);
        pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          value_00 = UnityEngine_GameObject__AddComponent_object_
                               (pUVar3,(MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_TitanCustomSkinLoader);
          (__this->fields)._customSkinLoader = value_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._customSkinLoader,value_00);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BasicTitanAnimations);
          Characters_BasicTitanAnimations___ctor(__this_00,(MethodInfo *)0x0);
          (__this->fields).BasicAnimations = __this_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields).BasicAnimations,__this_00);
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            local_18.fields.x = 0.1;
            local_18.fields.y = 0.1;
            local_18.fields.z = 0.1;
            UnityEngine_Transform__set_localScale(__this_01,&local_18,(MethodInfo *)0x0);
            x = (UnityEngine_Object_o *)Characters_DummyTitan__GetBodyRenderer(__this,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar2) {
              if (x == (UnityEngine_Object_o *)0x0) goto label_1821a8d33;
              pUVar5 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0)
              ;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar2 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar2) {
                pUVar5 = UnityEngine_Renderer__get_sharedMaterial
                                   ((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
                __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
                UnityEngine_Material___ctor_2ee55e0(__this_02,pUVar5,(MethodInfo *)0x0);
                (__this->fields)._defaultBodyMaterial = __this_02;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._defaultBodyMaterial,__this_02);
              }
            }
            return;
          }
        }
      }
    }
  }
label_1821a8d33:
  ThrowNullReferenceException();
}


// Characters.DummyTitan$$LoadSet
// il2cpp: void Characters_DummyTitan__LoadSet (Characters_DummyTitan_o* __this, Settings_TitanCustomSet_o* set, bool applySkins, const MethodInfo* method);
// 0x1821a8f60

void Characters_DummyTitan__LoadSet
               (Characters_DummyTitan_o *__this,Settings_TitanCustomSet_o *set,bool applySkins,
               MethodInfo *method)

{
  UnityEngine_Material_o *x;
  Characters_BasicTitanSetup_o *__this_00;
  CustomSkins_TitanCustomSkinLoader_o *__this_01;
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t head;
  UnityEngine_Object_o *x_00;
  Settings_TitanCustomSkinSet_o *skinSet;
  System_String_o *value;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_184346e44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e44 = '\x01';
  }
  x = (__this->fields)._defaultBodyMaterial;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    x_00 = (UnityEngine_Object_o *)Characters_DummyTitan__GetBodyRenderer(__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (x_00 == (UnityEngine_Object_o *)0x0) goto label_1821a9153;
      UnityEngine_Renderer__set_sharedMaterial
                ((UnityEngine_Renderer_o *)x_00,(__this->fields)._defaultBodyMaterial,(MethodInfo *)0x0);
    }
  }
  __this_00 = (__this->fields).Setup;
  if (__this_00 != (Characters_BasicTitanSetup_o *)0x0) {
    Characters_BasicTitanSetup__Load(__this_00,set,(MethodInfo *)0x0);
    if (!applySkins) {
      return;
    }
    if (Il2CppMethodInitialized_184346e43 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
      Il2CppMethodInitialized_184346e43 = '\x01';
    }
    skinSet = UI_CharacterEditorTitanSkinsPanel__GetPreviewSkinSet((MethodInfo *)0x0);
    if (set != (Settings_TitanCustomSet_o *)0x0) {
      iVar2 = Settings_TitanCustomSet__GetBody(set,(MethodInfo *)0x0);
      iVar3 = Settings_TitanCustomSet__GetHead(set,(MethodInfo *)0x0);
      iVar2 = CustomSkins_TitanSkinPicker__FindSlotIndex(skinSet,iVar2,iVar3,false,(MethodInfo *)0x0);
      iVar3 = Settings_TitanCustomSet__GetBody(set,(MethodInfo *)0x0);
      head = Settings_TitanCustomSet__GetHead(set,(MethodInfo *)0x0);
      value = CustomSkins_TitanSkinPicker__GetSkinUrls(skinSet,iVar2,iVar3,head,false,(MethodInfo *)0x0);
      bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      __this_01 = (__this->fields)._customSkinLoader;
      pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      if (pSVar4 != (System_Object_array *)0x0) {
        if ((value != (System_String_o *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)value,(((pSVar4->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) {
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
        if ((int)pSVar4->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        pSVar4->m_Items[0] = (Il2CppObject *)value;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items,value);
        if (__this_01 != (CustomSkins_TitanCustomSkinLoader_o *)0x0) {
          routine = (*(__this_01->klass->vtable)._7_LoadSkinsFromRPC.methodPtr)
                              (__this_01,pSVar4,(__this_01->klass->vtable)._7_LoadSkinsFromRPC.method);
          UnityEngine_MonoBehaviour__StartCoroutine_Auto
                    ((UnityEngine_MonoBehaviour_o *)__this_01,routine,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_1821a9153:
  ThrowNullReferenceException();
}


// Characters.DummyTitan$$LoadSkin
// il2cpp: void Characters_DummyTitan__LoadSkin (Characters_DummyTitan_o* __this, Settings_TitanCustomSet_o* set, const MethodInfo* method);
// 0x1821a9170

void Characters_DummyTitan__LoadSkin
               (Characters_DummyTitan_o *__this,Settings_TitanCustomSet_o *set,MethodInfo *method)

{
  CustomSkins_TitanCustomSkinLoader_o *__this_00;
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t head;
  Settings_TitanCustomSkinSet_o *skinSet;
  System_String_o *value;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_184346e43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184346e43 = '\x01';
  }
  skinSet = UI_CharacterEditorTitanSkinsPanel__GetPreviewSkinSet((MethodInfo *)0x0);
  if (set != (Settings_TitanCustomSet_o *)0x0) {
    iVar2 = Settings_TitanCustomSet__GetBody(set,(MethodInfo *)0x0);
    iVar3 = Settings_TitanCustomSet__GetHead(set,(MethodInfo *)0x0);
    iVar2 = CustomSkins_TitanSkinPicker__FindSlotIndex(skinSet,iVar2,iVar3,false,(MethodInfo *)0x0);
    iVar3 = Settings_TitanCustomSet__GetBody(set,(MethodInfo *)0x0);
    head = Settings_TitanCustomSet__GetHead(set,(MethodInfo *)0x0);
    value = CustomSkins_TitanSkinPicker__GetSkinUrls(skinSet,iVar2,iVar3,head,false,(MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    __this_00 = (__this->fields)._customSkinLoader;
    pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((value != (System_String_o *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)value,(((pSVar4->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((int)pSVar4->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar4->m_Items[0] = (Il2CppObject *)value;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items,value);
      if (__this_00 != (CustomSkins_TitanCustomSkinLoader_o *)0x0) {
        routine = (*(__this_00->klass->vtable)._7_LoadSkinsFromRPC.methodPtr)
                            (__this_00,pSVar4,(__this_00->klass->vtable)._7_LoadSkinsFromRPC.method);
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.DummyTitan$$RestoreDefaultMaterials
// il2cpp: void Characters_DummyTitan__RestoreDefaultMaterials (Characters_DummyTitan_o* __this, const MethodInfo* method);
// 0x1821a9380

void Characters_DummyTitan__RestoreDefaultMaterials(Characters_DummyTitan_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *x;
  bool bVar1;
  UnityEngine_Object_o *x_00;
  
  if (Il2CppMethodInitialized_184346e44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e44 = '\x01';
  }
  x = (__this->fields)._defaultBodyMaterial;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    x_00 = (UnityEngine_Object_o *)Characters_DummyTitan__GetBodyRenderer(__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (x_00 == (UnityEngine_Object_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Renderer__set_sharedMaterial
                ((UnityEngine_Renderer_o *)x_00,(__this->fields)._defaultBodyMaterial,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.DummyTitan$$OnDestroy
// il2cpp: void Characters_DummyTitan__OnDestroy (Characters_DummyTitan_o* __this, const MethodInfo* method);
// 0x1821a92f0

void Characters_DummyTitan__OnDestroy(Characters_DummyTitan_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346e45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e45 = '\x01';
  }
  pUVar1 = (__this->fields)._defaultBodyMaterial;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._defaultBodyMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// Characters.DummyTitan$$GetBodyRenderer
// il2cpp: UnityEngine_Renderer_o* Characters_DummyTitan__GetBodyRenderer (Characters_DummyTitan_o* __this, const MethodInfo* method);
// 0x1821a8d40

UnityEngine_Renderer_o *
Characters_DummyTitan__GetBodyRenderer(Characters_DummyTitan_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_SkinnedMeshRenderer_o *pUVar3;
  
  if (Il2CppMethodInitialized_184346e46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    Il2CppMethodInitialized_184346e46 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Body",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (UnityEngine_Renderer_o *)0x0;
    }
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar2,
                          (MethodInfo_6651A0 *)
                          MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
      return (UnityEngine_Renderer_o *)pUVar3;
    }
  }
  ThrowNullReferenceException();
}


// Characters.DummyTitan$$GetIdleAnimation
// il2cpp: System_String_o* Characters_DummyTitan__GetIdleAnimation (Characters_DummyTitan_o* __this, const MethodInfo* method);
// 0x1821a8f30

System_String_o * Characters_DummyTitan__GetIdleAnimation(Characters_DummyTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  System_String_o *pSVar2;
  
  pCVar1 = (__this->fields).BasicAnimations;
  if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
    pSVar2 = (*(pCVar1->klass->vtable)._4_get_Idle.methodPtr)
                       (pCVar1,(pCVar1->klass->vtable)._4_get_Idle.method);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Characters.DummyTitan$$GetEmoteAnimation
// il2cpp: System_String_o* Characters_DummyTitan__GetEmoteAnimation (Characters_DummyTitan_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x1821a8df0

System_String_o *
Characters_DummyTitan__GetEmoteAnimation
          (Characters_DummyTitan_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346e47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Roar");
    il2cpp_codegen_initialize_runtime_metadata(&"Shake");
    il2cpp_codegen_initialize_runtime_metadata(&"Nod");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh");
    Il2CppMethodInitialized_184346e47 = '\x01';
  }
  bVar2 = System_String__op_Equality(emote,"Laugh",(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
      return (pCVar1->fields).EmoteLaugh;
    }
  }
  else {
    bVar2 = System_String__op_Equality(emote,"Nod",(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields).BasicAnimations;
      if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
        return (pCVar1->fields).EmoteNod;
      }
    }
    else {
      bVar2 = System_String__op_Equality(emote,"Shake",(MethodInfo *)0x0);
      if (bVar2) {
        pCVar1 = (__this->fields).BasicAnimations;
        if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
          return (pCVar1->fields).EmoteShake;
        }
      }
      else {
        bVar2 = System_String__op_Equality(emote,"Roar",(MethodInfo *)0x0);
        if (!bVar2) {
          return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        pCVar1 = (__this->fields).BasicAnimations;
        if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
          return (pCVar1->fields).EmoteRoar;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.DummyTitan$$.ctor
// il2cpp: void Characters_DummyTitan___ctor (Characters_DummyTitan_o* __this, const MethodInfo* method);
// 0x18190eda0

void
Characters_DummyTitan___ctor(Characters_DummyTitan_o* __this, MethodInfo* method)

{
  Characters_DummyCharacter___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


