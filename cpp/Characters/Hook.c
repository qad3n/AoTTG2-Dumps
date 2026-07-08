// Type: Characters.Hook
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/Hook.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Hook.cs  [CHANGED since prior version]
// --------------------------------

// Characters.Hook.<>c$$.cctor
// il2cpp: void Characters_Hook___c___cctor (const MethodInfo* method);
// 0x3fa8770

void Characters_Hook_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570404a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570404a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Characters.Hook.<>c$$.ctor
// il2cpp: void Characters_Hook___c___ctor (Characters_Hook___c_o* __this, const MethodInfo* method);
// 0x3fa87e0

void Characters_Hook_<>c___ctor(Characters_Hook___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.Hook.<>c$$<FixedUpdateHooking>b__44_0
// il2cpp: int32_t Characters_Hook___c___FixedUpdateHooking_b__44_0 (Characters_Hook___c_o* __this, UnityEngine_RaycastHit_o x, UnityEngine_RaycastHit_o y, const MethodInfo* method);
// 0x3fa87f0

int32_t Characters_Hook_<>c__<FixedUpdateHooking>b__44_0
                  (Characters_Hook___c_o *__this,UnityEngine_RaycastHit_o x,
                  UnityEngine_RaycastHit_o y,MethodInfo *method)

{
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_RaycastHit_o __this_01;
  undefined4 in_EAX;
  int32_t iVar1;
  undefined4 in_register_00000004;
  float fVar2;
  float in_XMM1_Da;
  undefined8 unaff_retaddr;
  undefined8 uVar3;
  
  uVar3 = unaff_retaddr;
  unique0x100000dd = x.fields;
  __this_01.fields.m_Point.fields.z = (float)(int)uVar3;
  __this_01.fields.m_Normal.fields.x = (float)SUB84(uVar3,4);
  __this_00.fields.m_Point.fields.y = (float)in_register_00000004;
  __this_00.fields.m_Point.fields.x = (float)in_EAX;
  __this_00.fields.m_Point.fields.z = (float)(int)unaff_retaddr;
  __this_00.fields.m_Normal.fields.x = (float)(int)((ulong)unaff_retaddr >> 0x20);
  __this_00.fields.m_Normal.fields.y = x.fields.m_Point.fields.x;
  __this_00.fields.m_Normal.fields.z = x.fields.m_Point.fields.y;
  __this_00.fields.m_FaceID = (uint32_t)x.fields.m_Point.fields.z;
  __this_00.fields.m_Distance = x.fields.m_Normal.fields.x;
  __this_00.fields.m_UV.fields.x = x.fields.m_Normal.fields.y;
  __this_00.fields.m_UV.fields.y = x.fields.m_Normal.fields.z;
  __this_00.fields.m_Collider = x.fields.m_FaceID;
  fVar2 = UnityEngine_RaycastHit__get_distance(__this_00,(MethodInfo *)&x);
  __this_01.fields.m_Point.fields.y = fVar2;
  __this_01.fields.m_Point.fields.x = (float)in_EAX;
  fVar2 = UnityEngine_RaycastHit__get_distance(__this_01,(MethodInfo *)&y);
  iVar1 = System_Single__CompareTo(fVar2,in_XMM1_Da,(MethodInfo *)&stack0xfffffffffffffffc);
  return iVar1;
}


// Characters.Hook$$ResetState
// il2cpp: void Characters_Hook__ResetState (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa4290

void Characters_Hook__ResetState(Characters_Hook_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  
  *(undefined1 *)&(__this->fields)._usingDeathTimer = 0;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._lastGoodHookPoint.fields.x = (float)(int)uVar2;
  (__this->fields)._lastGoodHookPoint.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._lastGoodHookPoint.fields.z = fVar1;
  *(undefined1 *)&(__this->fields)._firstDeathFrame = 1;
  return;
}


// Characters.Hook$$CreateHook
// il2cpp: Characters_Hook_o* Characters_Hook__CreateHook (Characters_Human_o* owner, bool left, int32_t id, float maxLiveTime, bool gun, const MethodInfo* method);
// 0x3fa42f0

Characters_Hook_o *
Characters_Hook__CreateHook
          (Characters_Human_o *owner,bool_conflict left,int32_t id,float maxLiveTime,
          bool_conflict gun,MethodInfo *method)

{
  Outline_o *pOVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *p;
  Characters_Hook_o *pCVar2;
  System_Collections_Generic_HashSet_Renderer__o **ppSVar3;
  
  if (DAT_05704038 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Hook_AddComponent_Hook);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    DAT_05704038 = '\x01';
  }
  __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (owner != (Characters_Human_o *)0x0) {
      p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)owner,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_00,p,(MethodInfo *)0x0);
        pCVar2 = (Characters_Hook_o *)
                 UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_Hook_AddComponent_Hook);
        if (pCVar2 != (Characters_Hook_o *)0x0) {
          *(char *)((long)&(pCVar2->fields).HasOffset + 1) = (char)left;
          (pCVar2->fields)._owner = owner;
          il2cpp_runtime_glue(&(pCVar2->fields)._owner,owner);
          (pCVar2->fields)._maxLiveTime = maxLiveTime;
          (pCVar2->fields)._id = id;
          pOVar1 = (owner->fields).OutlineComponent;
          if (pOVar1 != (Outline_o *)0x0) {
            if ((char)left == '\0') {
              if ((char)gun == '\0') {
                ppSVar3 = (System_Collections_Generic_HashSet_Renderer__o **)
                          &pOVar1[1].fields.bakeKeys;
              }
              else {
                ppSVar3 = &pOVar1[1].fields.renderers;
              }
            }
            else if ((char)gun == '\0') {
              ppSVar3 = (System_Collections_Generic_HashSet_Renderer__o **)
                        &pOVar1[1].fields.precomputeOutline;
            }
            else {
              ppSVar3 = (System_Collections_Generic_HashSet_Renderer__o **)
                        &pOVar1[1].fields.bakeValues;
            }
            (pCVar2->fields).Anchor = (UnityEngine_Transform_o *)*ppSVar3;
            il2cpp_runtime_glue(&(pCVar2->fields).Anchor);
            return pCVar2;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$Awake
// il2cpp: void Characters_Hook__Awake (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa4440

void Characters_Hook__Awake(Characters_Hook_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o **ppUVar1;
  UnityEngine_Renderer_o *__this_00;
  System_String_o *path;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_LineRenderer_o *pUVar3;
  UnityEngine_Material_o *value;
  UnityEngine_ParticleSystem_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  
  if (DAT_05704039 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LineRenderer_AddComponent_LineRenderer);
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"Human/Particles/Materials/HookMat");
    il2cpp_init_method_metadata(&"Human/Particles/Prefabs/HookParticle");
    il2cpp_init_method_metadata(&"HookEnd");
    DAT_05704039 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = (UnityEngine_LineRenderer_o *)
             UnityEngine_GameObject__AddComponent<object>(pUVar2,MethodInfo_LineRenderer_AddComponent_LineRenderer);
    ppUVar1 = &(__this->fields)._renderer;
    (__this->fields)._renderer = pUVar3;
    il2cpp_runtime_glue(ppUVar1,pUVar3);
    __this_00 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = (UnityEngine_Material_o *)
            ApplicationManagers_ResourceManager__InstantiateAsset<object>
                      (path,"Human/Particles/Materials/HookMat",1,MethodInfo_Material_InstantiateAsset_Material);
    if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_material(__this_00,value,(MethodInfo *)0x0);
      pUVar3 = *ppUVar1;
      if (pUVar3 != (UnityEngine_LineRenderer_o *)0x0) {
        UnityEngine_LineRenderer__set_positionCount(pUVar3,0,(MethodInfo *)0x0);
        pUVar2 = (UnityEngine_GameObject_o *)
                 ApplicationManagers_ResourceManager__InstantiateAsset<object>
                           (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"Human/Particles/Prefabs/HookParticle",1
                            ,MethodInfo_GameObject_InstantiateAsset_GameObject);
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = (UnityEngine_ParticleSystem_o *)
                   UnityEngine_GameObject__GetComponent<object>(pUVar2,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
          (__this->fields)._particles = pUVar4;
          il2cpp_runtime_glue(&(__this->fields)._particles);
          __this_01 = (UnityEngine_Component_o *)(__this->fields)._particles;
          if (__this_01 != (UnityEngine_Component_o *)0x0) {
            pUVar5 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              pUVar5 = UnityEngine_Transform__Find(pUVar5,"HookEnd",(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                (__this->fields)._endSprite = pUVar2;
                il2cpp_runtime_glue(&(__this->fields)._endSprite,pUVar2);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$SetSkin
// il2cpp: void Characters_Hook__SetSkin (Characters_Hook_o* __this, float tiling, const MethodInfo* method);
// 0x3fa4650

void Characters_Hook__SetSkin(Characters_Hook_o *__this,float tiling,MethodInfo *method)

{
  (__this->fields)._tiling = tiling;
  return;
}


// Characters.Hook$$UpdateSkin
// il2cpp: void Characters_Hook__UpdateSkin (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa4660

void Characters_Hook__UpdateSkin(Characters_Hook_o *__this,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Renderer_o *__this_01;
  UnityEngine_Vector2_o value;
  UnityEngine_Material_o *__this_02;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o UVar4;
  float local_38;
  float fStack_34;
  
  if ((__this->fields)._tiling <= 0.0) {
    return;
  }
  UVar3 = Characters_Hook__GetHookPosition(__this,method);
  __this_00 = (__this->fields).Anchor;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UVar4 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    local_38 = UVar3.fields.x;
    fStack_34 = UVar3.fields.y;
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    fStack_34 = fStack_34 - UVar4.fields.y;
    fVar2 = UVar3.fields.z - UVar4.fields.z;
    local_38 = local_38 - UVar4.fields.x;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar2 = local_38 * local_38 + fStack_34 * fStack_34 + fVar2 * fVar2;
    if (fVar2 < 0.0) {
      fVar2 = sqrtf(fVar2);
      pfVar1 = &(__this->fields)._lastLength;
      if ((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) {
        return;
      }
    }
    else {
      fVar2 = SQRT(fVar2);
      pfVar1 = &(__this->fields)._lastLength;
      if ((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) {
        return;
      }
    }
    (__this->fields)._lastLength = fVar2;
    __this_01 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
    if ((__this_01 != (UnityEngine_Renderer_o *)0x0) &&
       (__this_02 = UnityEngine_Renderer__get_material(__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_Material_o *)0x0)) {
      value.fields.y = 1.0;
      value.fields.x = fVar2 * (__this->fields)._tiling;
      UnityEngine_Material__set_mainTextureScale(__this_02,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$OnSetHookState
// il2cpp: void Characters_Hook__OnSetHookState (Characters_Hook_o* __this, int32_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3fa48a0

void Characters_Hook__OnSetHookState
               (Characters_Hook_o *__this,int32_t state,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  char cVar1;
  Characters_Human_o *pCVar2;
  long lVar3;
  UnityEngine_GameObject_o *__this_00;
  Characters_Human_c *pCVar4;
  MethodInfo *pMVar5;
  undefined8 uVar6;
  Photon_Pun_PhotonMessageInfo_Fields local_70;
  Photon_Pun_PhotonMessageInfo_Fields local_58;
  Photon_Pun_PhotonMessageInfo_Fields local_38;
  
  if (DAT_0570403a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_0570403a = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (((pCVar2 != (Characters_Human_o *)0x0) &&
      (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
    if (info.fields.Sender == *(Photon_Realtime_Player_o **)(lVar3 + 0x80)) {
      (__this->fields).State = state;
      (__this->fields)._currentLiveTime = 0.0;
      if (state - 3U < 2) {
        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x60), lVar3 == 0)) goto LAB_03fa4a8f;
        if (*(char *)(lVar3 + 0x11) != '\0') {
          cVar1 = *(char *)((long)&(__this->fields).HasOffset + 1);
          if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (cVar1 == '\0') {
            uVar6 = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa8);
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_init_class();
            }
            Utility_Util__CreateLocalPhotonInfo
                      ((Photon_Pun_PhotonMessageInfo_o *)&local_70,(MethodInfo *)0x0);
            local_58.photonView = local_70.photonView;
            local_58.timeInt = local_70.timeInt;
            local_58._4_4_ = local_70._4_4_;
            local_58.Sender = local_70.Sender;
            pCVar4 = pCVar2->klass;
            pMVar5 = (pCVar4->vtable)._76_PlaySoundRPC.method;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa0);
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_init_class();
            }
            Utility_Util__CreateLocalPhotonInfo
                      ((Photon_Pun_PhotonMessageInfo_o *)&local_70,(MethodInfo *)0x0);
            local_38.photonView = local_70.photonView;
            local_38.timeInt = local_70.timeInt;
            local_38._4_4_ = local_70._4_4_;
            local_38.Sender = local_70.Sender;
            pCVar4 = pCVar2->klass;
            pMVar5 = (pCVar4->vtable)._76_PlaySoundRPC.method;
          }
          (*(pCVar4->vtable)._76_PlaySoundRPC.methodPtr)(pCVar2,uVar6,pMVar5);
        }
      }
      __this_00 = (__this->fields)._endSprite;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_03fa4a8f;
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
    }
    return;
  }
LAB_03fa4a8f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$SetHookStateLocal
// il2cpp: void Characters_Hook__SetHookStateLocal (Characters_Hook_o* __this, int32_t state, const MethodInfo* method);
// 0x3fa4aa0

void Characters_Hook__SetHookStateLocal(Characters_Hook_o *__this,int32_t state,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if ((__this->fields).State == 0) {
    return;
  }
  (__this->fields).State = state;
  (__this->fields)._currentLiveTime = 0.0;
  __this_00 = (__this->fields)._endSprite;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$OnSetHooking
// il2cpp: void Characters_Hook__OnSetHooking (Characters_Hook_o* __this, UnityEngine_Vector3_o baseVelocity, UnityEngine_Vector3_o relativeVelocity, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3fa4ae0

void Characters_Hook__OnSetHooking
               (Characters_Hook_o *__this,UnityEngine_Vector3_o baseVelocity,
               UnityEngine_Vector3_o relativeVelocity,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  Characters_Human_o *pCVar8;
  System_Collections_Generic_List_Vector3__o *__this_00;
  UnityEngine_Vector3_array *pUVar9;
  UnityEngine_LineRenderer_o *__this_01;
  undefined8 uVar10;
  UnityEngine_Component_o *pUVar11;
  UnityEngine_ParticleSystem_o *pUVar12;
  UnityEngine_GameObject_o *__this_02;
  undefined1 auVar13 [16];
  UnityEngine_Vector3_Fields item;
  float fVar14;
  UnityEngine_Transform_o *pUVar15;
  long lVar16;
  MethodInfo *method_00;
  float fVar17;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar18;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar19;
  float fVar20;
  undefined1 auVar22 [16];
  UnityEngine_Vector3_o UVar23;
  Photon_Pun_PhotonMessageInfo_o local_50;
  undefined1 local_38 [24];
  ulong uVar21;
  
  fVar20 = baseVelocity.fields.x;
  fVar17 = baseVelocity.fields.y;
  if (DAT_0570403b == '\0') {
    local_38._8_4_ = in_XMM0_Dc;
    local_38._0_8_ = baseVelocity.fields._0_8_;
    local_38._12_4_ = in_XMM0_Dd;
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_0570403b = '\x01';
    fVar20 = (float)local_38._0_4_;
    fVar17 = (float)local_38._4_4_;
  }
  pCVar8 = (__this->fields)._owner;
  if (((pCVar8 == (Characters_Human_o *)0x0) ||
      (lVar16 = *(long *)&(pCVar8->fields).Dead, lVar16 == 0)) ||
     (lVar16 = *(long *)(lVar16 + 0x20), lVar16 == 0)) goto LAB_03fa4fd3;
  if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar16 + 0x80)) {
    return;
  }
  (__this->fields).State = 1;
  (__this->fields)._baseVelocity.fields.x = fVar20;
  (__this->fields)._baseVelocity.fields.y = fVar17;
  (__this->fields)._baseVelocity.fields.z = baseVelocity.fields.z;
  (__this->fields)._relativeVelocity.fields.x = (float)(int)relativeVelocity.fields._0_8_;
  (__this->fields)._relativeVelocity.fields.y =
       (float)(int)((ulong)relativeVelocity.fields._0_8_ >> 0x20);
  (__this->fields)._relativeVelocity.fields.z = relativeVelocity.fields.z;
  pUVar15 = (__this->fields).Anchor;
  if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto LAB_03fa4fd3;
  UVar23 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
  (__this->fields)._hookPosition.fields.x = (float)(int)UVar23.fields._0_8_;
  (__this->fields)._hookPosition.fields.y = (float)(int)((ulong)UVar23.fields._0_8_ >> 0x20);
  (__this->fields)._hookPosition.fields.z = UVar23.fields.z;
  *(undefined1 *)&(__this->fields)._hasHookParent = 0;
  __this_00 = (__this->fields)._nodes;
  if (__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_03fa4fd3;
  iVar7 = (__this_00->fields)._version;
  (__this_00->fields)._version = iVar7 + 1;
  (__this_00->fields)._size = 0;
  (__this->fields)._currentLiveTime = 0.0;
  lVar16 = MethodInfo_Void_Add;
  pUVar1 = &(__this->fields)._hookPosition;
  fVar17 = (pUVar1->fields).x;
  fVar14 = (pUVar1->fields).y;
  fVar20 = (__this->fields)._hookPosition.fields.z;
  item = pUVar1->fields;
  (__this_00->fields)._version = iVar7 + 2;
  pUVar9 = (__this_00->fields)._items;
  if (pUVar9 == (UnityEngine_Vector3_array *)0x0) goto LAB_03fa4fd3;
  if ((int)pUVar9->max_length == 0) {
    System_Collections_Generic_List<Vector3>__AddWithResize
              (__this_00,(UnityEngine_Vector3_o)item,
               *(MethodInfo_361DDD0 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    __this_01 = (__this->fields)._renderer;
  }
  else {
    (__this_00->fields)._size = 1;
    pUVar9->m_Items[0].fields.x = fVar17;
    pUVar9->m_Items[0].fields.y = fVar14;
    pUVar9->m_Items[0].fields.z = fVar20;
    __this_01 = (__this->fields)._renderer;
  }
  if (__this_01 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_03fa4fd3;
  UnityEngine_LineRenderer__set_endWidth(__this_01,0.1,(MethodInfo *)0x0);
  UnityEngine_LineRenderer__set_startWidth(__this_01,0.1,(MethodInfo *)0x0);
  lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x80), lVar16 == 0)) goto LAB_03fa4fd3;
  cVar6 = *(char *)(lVar16 + 0x11);
  pCVar8 = (__this->fields)._owner;
  if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
    il2cpp_init_class();
    lVar16 = *(long *)(TypeInfo_HumanSounds + 0xb8);
    if (cVar6 != '\0') goto LAB_03fa4d39;
LAB_03fa4fb0:
    uVar10 = *(undefined8 *)(lVar16 + 0x90);
    iVar7 = *(int *)(TypeInfo_Util + 0xe4);
  }
  else {
    lVar16 = *(long *)(TypeInfo_HumanSounds + 0xb8);
    if (cVar6 == '\0') goto LAB_03fa4fb0;
LAB_03fa4d39:
    uVar10 = *(undefined8 *)(lVar16 + 0x98);
    iVar7 = *(int *)(TypeInfo_Util + 0xe4);
  }
  if (iVar7 == 0) {
    il2cpp_init_class();
  }
  Utility_Util__CreateLocalPhotonInfo(&local_50,(MethodInfo *)0x0);
  if (pCVar8 == (Characters_Human_o *)0x0) goto LAB_03fa4fd3;
  (*(pCVar8->klass->vtable)._76_PlaySoundRPC.methodPtr)
            (pCVar8,uVar10,(pCVar8->klass->vtable)._76_PlaySoundRPC.method);
  pUVar11 = (UnityEngine_Component_o *)(__this->fields)._particles;
  if (pUVar11 == (UnityEngine_Component_o *)0x0) goto LAB_03fa4fd3;
  method_00 = (MethodInfo *)0x0;
  pUVar15 = UnityEngine_Component__get_transform(pUVar11,(MethodInfo *)0x0);
  UVar23 = Characters_Hook__GetHookPosition(__this,method_00);
  if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto LAB_03fa4fd3;
  UnityEngine_Transform__set_position(pUVar15,UVar23,(MethodInfo *)0x0);
  pUVar11 = (UnityEngine_Component_o *)(__this->fields)._particles;
  if (pUVar11 == (UnityEngine_Component_o *)0x0) goto LAB_03fa4fd3;
  pUVar15 = UnityEngine_Component__get_transform(pUVar11,(MethodInfo *)0x0);
  uVar2 = (__this->fields)._baseVelocity.fields.x;
  uVar4 = (__this->fields)._baseVelocity.fields.y;
  uVar3 = (__this->fields)._relativeVelocity.fields.x;
  uVar5 = (__this->fields)._relativeVelocity.fields.y;
  fVar20 = (__this->fields)._baseVelocity.fields.z * 50.0 +
           (__this->fields)._relativeVelocity.fields.z;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar22._0_4_ = (float)uVar2 * 50.0 + (float)uVar3;
  auVar22._4_4_ = (float)uVar4 * 50.0 + (float)uVar5;
  auVar22._8_8_ = 0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar19 = 0;
  uVar18 = 0;
  fVar17 = fVar20 * fVar20 + auVar22._4_4_ * auVar22._4_4_ + auVar22._0_4_ * auVar22._0_4_;
  if (fVar17 < 0.0) {
    fVar17 = sqrtf(fVar17);
    uVar18 = extraout_XMM0_Dc;
    uVar19 = extraout_XMM0_Dd;
    if (fVar17 <= 1e-05) goto LAB_03fa4ec1;
LAB_03fa4f1e:
    fVar20 = fVar20 / fVar17;
    auVar13._4_4_ = fVar17;
    auVar13._0_4_ = fVar17;
    auVar13._8_4_ = uVar18;
    auVar13._12_4_ = uVar19;
    auVar22 = divps(auVar22,auVar13);
    uVar21 = auVar22._0_8_;
  }
  else {
    fVar17 = SQRT(fVar17);
    if (1e-05 < fVar17) goto LAB_03fa4f1e;
LAB_03fa4ec1:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar21 = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar20 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
    UVar23.fields.z = -fVar20;
    UVar23.fields.x = (float)(int)(uVar21 ^ 0x8000000080000000);
    UVar23.fields.y = (float)(int)((uVar21 ^ 0x8000000080000000) >> 0x20);
    UnityEngine_Transform__set_forward(pUVar15,UVar23,(MethodInfo *)0x0);
    pUVar12 = (__this->fields)._particles;
    if (pUVar12 != (UnityEngine_ParticleSystem_o *)0x0) {
      UnityEngine_ParticleSystem__Stop(pUVar12,(MethodInfo *)0x0);
      pUVar12 = (__this->fields)._particles;
      if (pUVar12 != (UnityEngine_ParticleSystem_o *)0x0) {
        UnityEngine_ParticleSystem__Play(pUVar12,(MethodInfo *)0x0);
        __this_02 = (__this->fields)._endSprite;
        if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_02,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03fa4fd3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$OnSetHooked
// il2cpp: void Characters_Hook__OnSetHooked (Characters_Hook_o* __this, UnityEngine_Vector3_o position, int32_t photonViewId, int32_t objectId, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3fa4fe0

void Characters_Hook__OnSetHooked
               (Characters_Hook_o *__this,UnityEngine_Vector3_o position,int32_t photonViewId,
               int32_t objectId,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  char cVar1;
  Characters_Human_o *pCVar2;
  long lVar3;
  bool_conflict bVar4;
  Photon_Pun_PhotonView_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *transform;
  Il2CppObject *pIVar5;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,objectId);
  if (DAT_0570403c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    DAT_0570403c = '\x01';
    method_00 = extraout_RDX;
  }
  pCVar2 = (__this->fields)._owner;
  if (((pCVar2 == (Characters_Human_o *)0x0) ||
      (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 == 0)) ||
     (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) goto LAB_03fa51cc;
  if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar3 + 0x80)) {
    return;
  }
  if (photonViewId == -1) {
    transform = (UnityEngine_Transform_o *)0x0;
  }
  else {
    __this_00 = Photon_Pun_PhotonView__Find(photonViewId,(MethodInfo *)0x0);
    if ((__this_00 == (Photon_Pun_PhotonView_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03fa51cc;
    transform = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  if (objectId != -1) {
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_init_class();
      cVar1 = **(char **)(TypeInfo_MapManager + 0xb8);
      method_00 = extraout_RDX_03;
    }
    else {
      cVar1 = **(char **)(TypeInfo_MapManager + 0xb8);
    }
    if (cVar1 != '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_int__object__o *)
          **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
LAB_03fa51cc:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar4 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_int__object__o *)
                         **(undefined8 **)(TypeInfo_MapLoader + 0xb8),objectId,MethodInfo_Boolean_ContainsKey);
      method_00 = extraout_RDX_01;
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if ((((System_Collections_Generic_Dictionary_int__object__o *)
              **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
              (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
            (pIVar5 = System_Collections_Generic_Dictionary<int__object>__get_Item
                                ((System_Collections_Generic_Dictionary_int__object__o *)
                                 **(undefined8 **)(TypeInfo_MapLoader + 0xb8),objectId,MethodInfo_MapObject_get_Item),
            pIVar5 == (Il2CppObject *)0x0)) ||
           (pIVar5[1].monitor == (UnityEngine_GameObject_o *)0x0)) goto LAB_03fa51cc;
        transform = UnityEngine_GameObject__get_transform(pIVar5[1].monitor,(MethodInfo *)0x0);
        method_00 = extraout_RDX_02;
      }
    }
  }
  Characters_Hook__OnSetHooked(__this,position,transform,method_00);
  return;
}


// Characters.Hook$$OnSetHooked
// il2cpp: void Characters_Hook__OnSetHooked (Characters_Hook_o* __this, UnityEngine_Vector3_o position, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x3fa51e0

void Characters_Hook__OnSetHooked
               (Characters_Hook_o *__this,UnityEngine_Vector3_o position,
               UnityEngine_Transform_o *transform,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  Characters_BaseCharacter_o **ppCVar2;
  byte bVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  Characters_Human_o *pCVar8;
  UI_InGameMenu_o *__this_00;
  UnityEngine_LineRenderer_o *__this_01;
  Characters_BaseCharacter_c *pCVar9;
  undefined8 uVar10;
  UnityEngine_GameObject_o *__this_02;
  bool_conflict bVar11;
  uint score;
  UnityEngine_Transform_o *__this_03;
  Characters_BaseCharacter_o *pCVar12;
  MethodInfo *extraout_RDX;
  UnityEngine_Vector3_o UVar13;
  Photon_Pun_PhotonMessageInfo_o local_48;
  
  uVar10 = position.fields._0_8_;
  if (DAT_0570403d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Hook");
    il2cpp_init_method_metadata(&"");
    DAT_0570403d = '\x01';
    method = extraout_RDX;
  }
  (__this->fields).State = 2;
  (__this->fields)._hookPosition.fields.x = (float)(int)uVar10;
  (__this->fields)._hookPosition.fields.y = (float)(int)((ulong)uVar10 >> 0x20);
  (__this->fields)._hookPosition.fields.z = position.fields.z;
  ppUVar1 = &(__this->fields).HookParent;
  (__this->fields).HookParent = (UnityEngine_Transform_o *)0x0;
  il2cpp_runtime_glue(ppUVar1,0,method);
  ppCVar2 = &(__this->fields).HookCharacter;
  (__this->fields).HookCharacter = (Characters_BaseCharacter_o *)0x0;
  il2cpp_runtime_glue(ppCVar2);
  *(undefined1 *)&(__this->fields)._hasHookParent = 0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)transform,(UnityEngine_Object_o *)0x0,
                      (MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    *(undefined1 *)&(__this->fields)._usingDeathTimer = 0;
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar6 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar4 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    (__this->fields)._lastGoodHookPoint.fields.x = (float)(int)uVar6;
    (__this->fields)._lastGoodHookPoint.fields.y = (float)(int)((ulong)uVar6 >> 0x20);
    (__this->fields)._lastGoodHookPoint.fields.z = fVar4;
    *(undefined1 *)&(__this->fields)._firstDeathFrame = 1;
    (__this->fields).HookParent = transform;
    il2cpp_runtime_glue(ppUVar1);
    if (transform == (UnityEngine_Transform_o *)0x0) goto LAB_03fa5845;
    UVar13 = UnityEngine_Transform__InverseTransformPoint(transform,position,(MethodInfo *)0x0);
    (__this->fields)._hookPosition.fields.x = (float)(int)UVar13.fields._0_8_;
    (__this->fields)._hookPosition.fields.y = (float)(int)((ulong)UVar13.fields._0_8_ >> 0x20);
    (__this->fields)._hookPosition.fields.z = UVar13.fields.z;
    *(undefined1 *)&(__this->fields)._hasHookParent = 1;
    (__this->fields)._lastWorldHookPosition.fields.x = (float)(int)uVar10;
    (__this->fields)._lastWorldHookPosition.fields.y = (float)(int)((ulong)uVar10 >> 0x20);
    (__this->fields)._lastWorldHookPosition.fields.z = position.fields.z;
    __this_03 = UnityEngine_Transform__get_root(transform,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_Transform_o *)0x0) goto LAB_03fa5845;
    pCVar12 = (Characters_BaseCharacter_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this_03,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    *ppCVar2 = pCVar12;
    il2cpp_runtime_glue(ppCVar2);
    lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x58), lVar7 == 0)) ||
       (lVar7 = *(long *)(lVar7 + 0xe8), lVar7 == 0)) goto LAB_03fa5845;
    if (0 < *(int *)(lVar7 + 0x14)) {
      pCVar12 = *ppCVar2;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar12,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      if (((char)bVar11 != '\0') &&
         (pCVar12 = *ppCVar2, pCVar12 != (Characters_BaseCharacter_o *)0x0)) {
        bVar3 = (TypeInfo_Human->_2).naturalAligment;
        if ((bVar3 <= (pCVar12->klass->_2).naturalAligment) &&
           ((pCVar12->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_Human)) {
          pCVar8 = (__this->fields)._owner;
          if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar11 = GameManagers_TeamInfo__SameTeam
                             (pCVar12,(Characters_BaseCharacter_o *)pCVar8,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            pCVar8 = (__this->fields)._owner;
            if (((pCVar8 == (Characters_Human_o *)0x0) ||
                (lVar7 = *(long *)&(pCVar8->fields).Dead, lVar7 == 0)) ||
               (lVar7 = *(long *)(lVar7 + 0x20), lVar7 == 0)) goto LAB_03fa5845;
            if (*(char *)(lVar7 + 0x68) != '\0') {
              lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
              if (((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x58), lVar7 == 0)) ||
                 (lVar7 = *(long *)(lVar7 + 0xe8), lVar7 == 0)) goto LAB_03fa5845;
              fVar4 = *(float *)&(pCVar8->fields).Animation;
              iVar5 = *(int *)(lVar7 + 0x14);
              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                il2cpp_init_class();
              }
              score = System_Math__Max(10,(int)(fVar4 * (float)iVar5),(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (__this_00 == (UI_InGameMenu_o *)0x0) goto LAB_03fa5845;
              bVar3 = (TypeInfo_InGameMenu->_2).naturalAligment;
              if (((__this_00->klass->_2).naturalAligment < bVar3) ||
                 ((__this_00->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume();
              }
              UI_InGameMenu__ShowKillScore(__this_00,score,0,(MethodInfo *)0x0);
              pCVar12 = *ppCVar2;
              if (pCVar12 == (Characters_BaseCharacter_o *)0x0) goto LAB_03fa5845;
              (*(pCVar12->klass->vtable)._84_GetHit.methodPtr)
                        (pCVar12,(__this->fields)._owner,(ulong)score,"Hook","",
                         (pCVar12->klass->vtable)._84_GetHit.method);
            }
          }
        }
      }
    }
  }
  (__this->fields)._currentLiveTime = 0.0;
  __this_01 = (__this->fields)._renderer;
  if (__this_01 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_03fa5845;
  UnityEngine_LineRenderer__set_endWidth(__this_01,0.1,(MethodInfo *)0x0);
  UnityEngine_LineRenderer__set_startWidth(__this_01,0.1,(MethodInfo *)0x0);
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x68), lVar7 == 0)) goto LAB_03fa5845;
  if (*(char *)(lVar7 + 0x11) != '\0') {
    pCVar12 = *ppCVar2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar12,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if (((char)bVar11 == '\0') || (*ppCVar2 == (Characters_BaseCharacter_o *)0x0)) {
LAB_03fa5737:
      pCVar8 = (__this->fields)._owner;
      if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar10 = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb0);
      iVar5 = *(int *)(TypeInfo_Util + 0xe4);
    }
    else {
      pCVar9 = (*ppCVar2)->klass;
      bVar3 = (TypeInfo_Human->_2).naturalAligment;
      if (((pCVar9->_2).naturalAligment < bVar3) ||
         ((pCVar9->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_Human)) goto LAB_03fa5737;
      pCVar8 = (__this->fields)._owner;
      if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar10 = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb8);
      iVar5 = *(int *)(TypeInfo_Util + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_init_class();
    }
    Utility_Util__CreateLocalPhotonInfo(&local_48,(MethodInfo *)0x0);
    if (pCVar8 == (Characters_Human_o *)0x0) goto LAB_03fa5845;
    (*(pCVar8->klass->vtable)._76_PlaySoundRPC.methodPtr)
              (pCVar8,uVar10,(pCVar8->klass->vtable)._76_PlaySoundRPC.method);
  }
  __this_02 = (__this->fields)._endSprite;
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_02,1,(MethodInfo *)0x0);
    return;
  }
LAB_03fa5845:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$SetHookState
// il2cpp: void Characters_Hook__SetHookState (Characters_Hook_o* __this, int32_t state, const MethodInfo* method);
// 0x3fa5850

void Characters_Hook__SetHookState(Characters_Hook_o *__this,int32_t state,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  MethodInfo *extraout_RDX;
  undefined1 local_39;
  int32_t local_38;
  int32_t local_34;
  
  if (DAT_0570403e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetHookStateRPC");
    DAT_0570403e = '\x01';
    method = extraout_RDX;
  }
  pCVar1 = (__this->fields)._owner;
  if ((pCVar1 == (Characters_Human_o *)0x0) || (lVar3 = *(long *)&(pCVar1->fields).Dead, lVar3 == 0)
     ) {
LAB_03fa59ea:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_00 = *(Photon_Pun_PhotonView_o **)(lVar3 + 0x20);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3,method);
  local_39 = *(undefined1 *)((long)&(__this->fields).HasOffset + 1);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_39);
  if (parameters == (System_Object_array *)0x0) goto LAB_03fa59ea;
  if (pIVar2 != (Il2CppObject *)0x0) {
    lVar3 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_03fa59f4;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar2;
    il2cpp_runtime_glue(parameters->m_Items,pIVar2);
    local_34 = (__this->fields)._id;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar3 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_03fa59f4;
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = pIVar2;
      il2cpp_runtime_glue(parameters->m_Items + 1,pIVar2);
      local_38 = state;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
      if (pIVar2 != (Il2CppObject *)0x0) {
        lVar3 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
LAB_03fa59f4:
          uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar4,0);
        }
      }
      if (2 < (uint)parameters->max_length) {
        parameters->m_Items[2] = pIVar2;
        il2cpp_runtime_glue(parameters->m_Items + 2,pIVar2);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SetHookStateRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
        goto LAB_03fa59ea;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$SetHooking
// il2cpp: void Characters_Hook__SetHooking (Characters_Hook_o* __this, UnityEngine_Vector3_o baseVelocity, UnityEngine_Vector3_o relativeVelocity, const MethodInfo* method);
// 0x3fa5a10

void Characters_Hook__SetHooking
               (Characters_Hook_o *__this,UnityEngine_Vector3_o baseVelocity,
               UnityEngine_Vector3_o relativeVelocity,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 local_75;
  float local_74;
  float local_70;
  int32_t local_6c;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  local_70 = relativeVelocity.fields.z;
  local_38 = relativeVelocity.fields._0_8_;
  local_74 = baseVelocity.fields.z;
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = baseVelocity.fields._0_8_;
  local_48._12_4_ = in_XMM0_Dd;
  if (DAT_0570403f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&"SetHookingRPC");
    DAT_0570403f = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if ((pCVar1 == (Characters_Human_o *)0x0) || (lVar3 = *(long *)&(pCVar1->fields).Dead, lVar3 == 0)
     ) {
LAB_03fa5c45:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_00 = *(Photon_Pun_PhotonView_o **)(lVar3 + 0x20);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,4);
  local_75 = *(undefined1 *)((long)&(__this->fields).HasOffset + 1);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_75);
  if (parameters == (System_Object_array *)0x0) goto LAB_03fa5c45;
  if (pIVar2 != (Il2CppObject *)0x0) {
    lVar3 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_03fa5c4a;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar2;
    il2cpp_runtime_glue(parameters->m_Items,pIVar2);
    local_6c = (__this->fields)._id;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_6c);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar3 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_03fa5c4a;
    }
    if ((uint)parameters->max_length < 2) goto LAB_03fa5c40;
    parameters->m_Items[1] = pIVar2;
    il2cpp_runtime_glue(parameters->m_Items + 1,pIVar2);
    local_58 = local_48._0_8_;
    local_50 = local_74;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&local_58);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar3 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_03fa5c4a;
    }
    if (2 < (uint)parameters->max_length) {
      parameters->m_Items[2] = pIVar2;
      il2cpp_runtime_glue(parameters->m_Items + 2,pIVar2);
      local_68 = local_38;
      local_60 = local_70;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&local_68);
      if (pIVar2 != (Il2CppObject *)0x0) {
        lVar3 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
LAB_03fa5c4a:
          uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar4,0);
        }
      }
      if (3 < (uint)parameters->max_length) {
        parameters->m_Items[3] = pIVar2;
        il2cpp_runtime_glue(parameters->m_Items + 3,pIVar2);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SetHookingRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
        goto LAB_03fa5c45;
      }
    }
  }
LAB_03fa5c40:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$SetHooked
// il2cpp: void Characters_Hook__SetHooked (Characters_Hook_o* __this, UnityEngine_Vector3_o position, UnityEngine_Transform_o* t, int32_t viewId, int32_t objectId, const MethodInfo* method);
// 0x3fa5c60

void Characters_Hook__SetHooked
               (Characters_Hook_o *__this,UnityEngine_Vector3_o position,UnityEngine_Transform_o *t,
               int32_t viewId,int32_t objectId,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Photon_Pun_PhotonView_o *__this_00;
  undefined1 auVar3 [16];
  UnityEngine_Transform_o *x;
  bool_conflict bVar4;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  long lVar6;
  UnityEngine_Object_o *x_00;
  Characters_Human_o *human;
  undefined8 uVar7;
  MethodInfo *method_00;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o position_02;
  undefined1 local_71;
  float local_70;
  int32_t local_6c;
  int32_t local_68;
  int32_t local_64;
  int32_t local_60;
  int32_t local_5c;
  undefined1 local_58 [16];
  UnityEngine_Transform_o *local_48;
  undefined8 local_40;
  float local_38;
  
  local_70 = position.fields.z;
  local_58._8_4_ = in_XMM0_Dc;
  local_58._0_8_ = position.fields._0_8_;
  local_58._12_4_ = in_XMM0_Dd;
  if (DAT_05704040 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Human_GetComponent_Human);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&"SetHookedRPC");
    DAT_05704040 = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 == (Characters_Human_o *)0x0) goto LAB_03fa5fda;
  lVar6 = *(long *)&(pCVar2->fields).Dead;
  local_6c = viewId;
  local_68 = objectId;
  local_48 = t;
  if (lVar6 == 0) goto LAB_03fa5fda;
  __this_00 = *(Photon_Pun_PhotonView_o **)(lVar6 + 0x20);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,5);
  local_71 = *(undefined1 *)((long)&(__this->fields).HasOffset + 1);
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_71);
  if (parameters == (System_Object_array *)0x0) goto LAB_03fa5fda;
  if (pIVar5 != (Il2CppObject *)0x0) {
    lVar6 = il2cpp_runtime_glue(pIVar5,(((parameters->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_03fa5fe4;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar5;
    il2cpp_runtime_glue(parameters->m_Items,pIVar5);
    local_5c = (__this->fields)._id;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_5c);
    if (pIVar5 != (Il2CppObject *)0x0) {
      lVar6 = il2cpp_runtime_glue(pIVar5,(((parameters->obj).klass)->_1).element_class);
      if (lVar6 == 0) goto LAB_03fa5fe4;
    }
    if ((uint)parameters->max_length < 2) goto LAB_03fa5fdf;
    parameters->m_Items[1] = pIVar5;
    il2cpp_runtime_glue(parameters->m_Items + 1,pIVar5);
    local_40 = local_58._0_8_;
    local_38 = local_70;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&local_40);
    if (pIVar5 != (Il2CppObject *)0x0) {
      lVar6 = il2cpp_runtime_glue(pIVar5,(((parameters->obj).klass)->_1).element_class);
      if (lVar6 == 0) goto LAB_03fa5fe4;
    }
    if ((uint)parameters->max_length < 3) goto LAB_03fa5fdf;
    parameters->m_Items[2] = pIVar5;
    il2cpp_runtime_glue(parameters->m_Items + 2,pIVar5);
    local_60 = local_6c;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_60);
    if (pIVar5 != (Il2CppObject *)0x0) {
      lVar6 = il2cpp_runtime_glue(pIVar5,(((parameters->obj).klass)->_1).element_class);
      if (lVar6 == 0) goto LAB_03fa5fe4;
    }
    if (3 < (uint)parameters->max_length) {
      parameters->m_Items[3] = pIVar5;
      il2cpp_runtime_glue(parameters->m_Items + 3,pIVar5);
      local_64 = local_68;
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_64);
      if (pIVar5 != (Il2CppObject *)0x0) {
        lVar6 = il2cpp_runtime_glue(pIVar5,(((parameters->obj).klass)->_1).element_class);
        if (lVar6 == 0) {
LAB_03fa5fe4:
          uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar7,0);
        }
      }
      if (4 < (uint)parameters->max_length) {
        parameters->m_Items[4] = pIVar5;
        il2cpp_runtime_glue(parameters->m_Items + 4,pIVar5);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SetHookedRPC",1,parameters,(MethodInfo *)0x0);
          x = local_48;
          auVar3 = local_58;
          position_00.fields.z = local_70;
          position_00.fields.x = (float)local_58._0_4_;
          position_00.fields.y = (float)local_58._4_4_;
          local_58 = auVar3;
          Characters_Hook__OnSetHooked(__this,position_00,local_48,method_00);
          auVar3 = local_58;
          pCVar2 = (__this->fields)._owner;
          if (pCVar2 != (Characters_Human_o *)0x0) {
            position_01.fields.z = local_70;
            position_01.fields.x = (float)local_58._0_4_;
            position_01.fields.y = (float)local_58._4_4_;
            local_58 = auVar3;
            Characters_Human__OnHooked
                      (pCVar2,(uint)*(byte *)((long)&(__this->fields).HasOffset + 1),position_01,
                       (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar4 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (x == (UnityEngine_Transform_o *)0x0) goto LAB_03fa5fda;
              x_00 = (UnityEngine_Object_o *)
                     UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)x,MethodInfo_Human_GetComponent_Human);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar4 = UnityEngine_Object__op_Inequality
                                (x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                pCVar2 = (__this->fields)._owner;
                bVar1 = *(byte *)((long)&(__this->fields).HasOffset + 1);
                human = (Characters_Human_o *)
                        UnityEngine_Component__GetComponent<object>
                                  ((UnityEngine_Component_o *)x,MethodInfo_Human_GetComponent_Human);
                auVar3 = local_58;
                if (pCVar2 == (Characters_Human_o *)0x0) goto LAB_03fa5fda;
                position_02.fields.z = local_70;
                position_02.fields.x = (float)local_58._0_4_;
                position_02.fields.y = (float)local_58._4_4_;
                local_58 = auVar3;
                Characters_Human__OnHookedHuman
                          (pCVar2,(uint)bVar1,position_02,human,(MethodInfo *)0x0);
              }
            }
            return;
          }
        }
LAB_03fa5fda:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_03fa5fdf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$FinishDisable
// il2cpp: void Characters_Hook__FinishDisable (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa6000

void Characters_Hook__FinishDisable(Characters_Hook_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._renderer;
  if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_positionCount(__this_00,0,(MethodInfo *)0x0);
    (__this->fields).State = 0;
    __this_01 = (__this->fields)._endSprite;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$UpdateHooking
// il2cpp: void Characters_Hook__UpdateHooking (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa6040

void Characters_Hook__UpdateHooking(Characters_Hook_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_LineRenderer_o *pUVar4;
  uint index;
  MethodInfo *method_00;
  CustomLogic_CustomLogicMathBuiltin_o *__this_00;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  if (DAT_05704041 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    DAT_05704041 = '\x01';
  }
  pSVar2 = (__this->fields)._nodes;
  if (pSVar2 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    if ((pSVar2->fields)._size < 1) {
      return;
    }
    pUVar3 = (__this->fields).Anchor;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar6 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._nodes;
      if (pSVar2 != (System_Collections_Generic_List_Vector3__o *)0x0) {
        UVar7 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,0,MethodInfo_Vector3_get_Item);
        pSVar2 = (__this->fields)._nodes;
        if ((pSVar2 != (System_Collections_Generic_List_Vector3__o *)0x0) &&
           (pUVar4 = (__this->fields)._renderer, pUVar4 != (UnityEngine_LineRenderer_o *)0x0)) {
          index = 0;
          UnityEngine_LineRenderer__set_positionCount
                    (pUVar4,(pSVar2->fields)._size,(MethodInfo *)0x0);
          __this_00 = (CustomLogic_CustomLogicMathBuiltin_o *)(__this->fields)._nodes;
          if (__this_00 != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
            local_58 = UVar6.fields.x;
            fStack_54 = UVar6.fields.y;
            local_48 = UVar7.fields.x;
            fStack_44 = UVar7.fields.y;
            do {
              iVar1 = *(int *)&(__this_00->fields).Variables;
              if (iVar1 <= (int)index) {
                if (iVar1 < 2) {
                  return;
                }
                pUVar3 = (__this->fields).Anchor;
                if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                  pUVar4 = (__this->fields)._renderer;
                  UVar6 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
                    UnityEngine_LineRenderer__SetPosition(pUVar4,1,UVar6,(MethodInfo *)0x0);
                    return;
                  }
                }
                break;
              }
              pUVar4 = (__this->fields)._renderer;
              method_00 = (MethodInfo *)(ulong)index;
              UVar8 = System_Collections_Generic_List<Vector3>__get_Item
                                ((System_Collections_Generic_List_Vector3__o *)__this_00,index,
                                 MethodInfo_Vector3_get_Item);
              fVar5 = powf(__this_00,0.75,(float)(int)index,method_00);
              if (pUVar4 == (UnityEngine_LineRenderer_o *)0x0) break;
              local_38 = UVar8.fields.x;
              fStack_34 = UVar8.fields.y;
              UVar8.fields.z = UVar8.fields.z + fVar5 * (UVar6.fields.z - UVar7.fields.z);
              UVar8.fields.y = fStack_34 + fVar5 * (fStack_54 - fStack_44);
              UVar8.fields.x = local_38 + fVar5 * (local_58 - local_48);
              UnityEngine_LineRenderer__SetPosition(pUVar4,index,UVar8,(MethodInfo *)0x0);
              index = index + 1;
              __this_00 = (CustomLogic_CustomLogicMathBuiltin_o *)(__this->fields)._nodes;
            } while (__this_00 != (CustomLogic_CustomLogicMathBuiltin_o *)0x0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$UpdateHooked
// il2cpp: void Characters_Hook__UpdateHooked (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa6200

void Characters_Hook__UpdateHooked(Characters_Hook_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  long lVar2;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_LineRenderer_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  uint uVar10;
  uint uVar11;
  uint index;
  MethodInfo *method_00;
  CustomLogic_CustomLogicMathBuiltin_o *__this_01;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float __x;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Dc_05;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Dd_05;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o upwards;
  float local_118;
  float fStack_114;
  float local_108;
  float fStack_104;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  float local_d8;
  float fStack_d4;
  float local_c8;
  float fStack_c4;
  
  if (DAT_05704042 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05704042 = '\x01';
  }
  UVar31 = Characters_Hook__GetHookPosition(__this,method);
  pUVar8 = (__this->fields).Anchor;
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_03fa6cbf;
  UVar32 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
  pCVar1 = (__this->fields)._owner;
  if (((pCVar1 == (Characters_Human_o *)0x0) ||
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 == 0)) ||
     (__this_00 = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18),
     __this_00 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03fa6cbf;
  UVar33 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
  fVar21 = UVar33.fields.z;
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  local_c8 = UVar31.fields.x;
  fStack_c4 = UVar31.fields.y;
  local_108 = UVar32.fields.x;
  fStack_104 = UVar32.fields.y;
  local_f8._0_4_ = local_c8 - local_108;
  local_f8._4_4_ = fStack_c4 - fStack_104;
  fVar25 = UVar31.fields.z - UVar32.fields.z;
  fStack_f0 = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
  fStack_ec = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
  if (TypeInfo_Math[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_init_class();
  }
  fVar26 = fVar25 * fVar25 +
           (float)local_f8._4_4_ * (float)local_f8._4_4_ +
           (float)local_f8._0_4_ * (float)local_f8._0_4_;
  if (fVar26 < 0.0) {
    fVar14 = sqrtf(fVar26);
  }
  else {
    fVar14 = SQRT(fVar26);
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  if (TypeInfo_Math[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_init_class();
  }
  local_d8 = UVar33.fields.x;
  fStack_d4 = UVar33.fields.y;
  __x = fVar21 * fVar21 + fStack_d4 * fStack_d4 + local_d8 * local_d8;
  if (__x < 0.0) {
    fVar15 = sqrtf(__x);
  }
  else {
    fVar15 = SQRT(__x);
  }
  uVar7 = (uint)((fVar14 + fVar15) / 5.0);
  uVar12 = 6;
  if ((int)uVar7 < 7) {
    uVar12 = uVar7;
  }
  uVar7 = 2;
  if (1 < (int)uVar12) {
    uVar7 = uVar12;
  }
  pUVar3 = (__this->fields)._renderer;
  if (pUVar3 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_03fa6cbf;
  UnityEngine_LineRenderer__set_positionCount(pUVar3,uVar7,(MethodInfo *)0x0);
  pUVar8 = (__this->fields).Anchor;
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_03fa6cbf;
  pUVar3 = (__this->fields)._renderer;
  UVar32 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_03fa6cbf;
  method_00 = (MethodInfo *)0x0;
  UnityEngine_LineRenderer__SetPosition(pUVar3,0,UVar32,(MethodInfo *)0x0);
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
    if (TypeInfo_Math[4].fields._Namespace_k__BackingField.fields.hasValue != 0) goto LAB_03fa6443;
LAB_03fa647d:
    __this_01 = TypeInfo_Math;
    il2cpp_init_class();
    if (0.0 <= fVar26) goto LAB_03fa6451;
LAB_03fa6490:
    fVar14 = sqrtf(fVar26);
  }
  else {
    if (TypeInfo_Math[4].fields._Namespace_k__BackingField.fields.hasValue == 0) goto LAB_03fa647d;
LAB_03fa6443:
    __this_01 = TypeInfo_Math;
    if (fVar26 < 0.0) goto LAB_03fa6490;
LAB_03fa6451:
    fVar14 = SQRT(fVar26);
  }
  fVar14 = powf(__this_01,fVar14,0.3,method_00);
  uVar12 = uVar7 - 1;
  if (1 < (int)uVar12) {
    uVar10 = uVar7 >> 1;
    index = 1;
    uVar11 = uVar10;
    do {
      uVar11 = uVar11 - 1;
      if (DAT_05700143 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_05700143 = '\x01';
      }
      if (TypeInfo_Math[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
        il2cpp_init_class();
      }
      uVar13 = index - uVar10;
      if ((int)(index - uVar10) < 0) {
        uVar13 = uVar11;
      }
      fVar15 = ((float)uVar10 - (float)(int)uVar13) / (float)uVar10;
      if (fVar15 < 0.0) {
        fVar16 = sqrtf(fVar15);
      }
      else {
        fVar16 = SQRT(fVar15);
      }
      if (DAT_056fde1c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde1c = '\x01';
      }
      if (TypeInfo_Math[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
        il2cpp_init_class();
      }
      fVar17 = SQRT(__x);
      if (__x < 0.0) {
        fVar17 = sqrtf(__x);
      }
      fVar18 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      fVar27 = (float)(int)index;
      fVar18 = fVar18 + fVar18;
      fVar19 = sinf(fVar27 * 0.5 + fVar18);
      fVar20 = sinf(fVar18 * 1.2 + fVar27 * 0.7);
      fVar18 = sinf(fVar18 * 0.8 + fVar27 * 0.3);
      pUVar8 = (__this->fields).Anchor;
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_03fa6cbf;
      UVar32 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
      if (DAT_056fde1f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde1f = '\x01';
      }
      pUVar3 = (__this->fields)._renderer;
      if (pUVar3 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_03fa6cbf;
      fVar15 = (float)(~-(uint)(fVar15 <= -INFINITY) & (uint)ABS(fVar16) |
                      -(uint)(fVar15 <= -INFINITY) & 0x7f800000);
      fVar16 = (fVar17 + fVar14) * 0.0015 * fVar15;
      fVar27 = fVar27 / (float)(int)uVar7;
      uVar28 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      UVar33.fields.x =
           ((float)uVar28 * fVar14 * -0.05 * fVar15 +
           fVar27 * (float)local_f8._0_4_ + fVar16 * fVar19 * 0.3 + UVar32.fields.x) -
           fVar15 * local_d8 * 0.001 * fVar14;
      UVar33.fields.y =
           ((float)((ulong)uVar28 >> 0x20) * fVar14 * -0.05 * fVar15 +
           fVar27 * (float)local_f8._4_4_ + fVar16 * fVar20 * 0.3 + UVar32.fields.y) -
           fVar15 * fStack_d4 * 0.001 * fVar14;
      UVar33.fields.z =
           (*(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * fVar14 * -0.05 * fVar15 +
           fVar16 * fVar18 * 0.3 + UVar32.fields.z + fVar25 * fVar27) -
           fVar15 * fVar21 * 0.001 * fVar14;
      UnityEngine_LineRenderer__SetPosition(pUVar3,index,UVar33,(MethodInfo *)0x0);
      index = index + 1;
    } while (index < uVar12);
  }
  pUVar3 = (__this->fields)._renderer;
  if (pUVar3 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_03fa6cbf;
  UnityEngine_LineRenderer__SetPosition(pUVar3,uVar12,UVar31,(MethodInfo *)0x0);
  pUVar4 = (__this->fields)._endSprite;
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_03fa6cbf;
  pUVar8 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    if (TypeInfo_Math[4].fields._Namespace_k__BackingField.fields.hasValue != 0) goto LAB_03fa68d3;
LAB_03fa6966:
    il2cpp_init_class();
    if (0.0 <= fVar26) goto LAB_03fa68e5;
LAB_03fa697d:
    fVar21 = sqrtf(fVar26);
    uVar22 = extraout_XMM0_Dc_01;
    uVar23 = extraout_XMM0_Dd_01;
    if (fVar21 <= 1e-05) goto LAB_03fa68fc;
LAB_03fa6995:
    fVar14 = fVar25 / fVar21;
    auVar24._4_4_ = fVar21;
    auVar24._0_4_ = fVar21;
    auVar24._8_4_ = uVar22;
    auVar24._12_4_ = uVar23;
    auVar24 = divps(_local_f8,auVar24);
    uVar28 = auVar24._0_8_;
  }
  else {
    if (TypeInfo_Math[4].fields._Namespace_k__BackingField.fields.hasValue == 0) goto LAB_03fa6966;
LAB_03fa68d3:
    if (fVar26 < 0.0) goto LAB_03fa697d;
LAB_03fa68e5:
    uVar23 = 0;
    uVar22 = 0;
    fVar21 = SQRT(fVar26);
    if (1e-05 < fVar21) goto LAB_03fa6995;
LAB_03fa68fc:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar28 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar14 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_03fa6cbf;
  UVar32.fields.x = local_c8 + (float)uVar28 * 0.1;
  UVar32.fields.y = fStack_c4 + (float)((ulong)uVar28 >> 0x20) * 0.1;
  UVar32.fields.z = UVar31.fields.z + fVar14 * 0.1;
  UnityEngine_Transform__set_position(pUVar8,UVar32,(MethodInfo *)0x0);
  pUVar4 = (__this->fields)._endSprite;
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_03fa6cbf;
  pUVar8 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    if (TypeInfo_Math[4].fields._Namespace_k__BackingField.fields.hasValue != 0) goto LAB_03fa6a16;
LAB_03fa6aa6:
    il2cpp_init_class();
    if (0.0 <= fVar26) goto LAB_03fa6a28;
LAB_03fa6abd:
    fVar26 = sqrtf(fVar26);
    uVar22 = extraout_XMM0_Dc_02;
    uVar23 = extraout_XMM0_Dd_02;
    if (fVar26 <= 1e-05) goto LAB_03fa6a44;
LAB_03fa6ada:
    fVar25 = fVar25 / fVar26;
    auVar6._4_4_ = fVar26;
    auVar6._0_4_ = fVar26;
    auVar6._8_4_ = uVar22;
    auVar6._12_4_ = uVar23;
    auVar24 = divps(_local_f8,auVar6);
    uVar28 = auVar24._0_8_;
  }
  else {
    if (TypeInfo_Math[4].fields._Namespace_k__BackingField.fields.hasValue == 0) goto LAB_03fa6aa6;
LAB_03fa6a16:
    if (fVar26 < 0.0) goto LAB_03fa6abd;
LAB_03fa6a28:
    uVar23 = 0;
    uVar22 = 0;
    fVar26 = SQRT(fVar26);
    if (1e-05 < fVar26) goto LAB_03fa6ada;
LAB_03fa6a44:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar28 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar25 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x28), lVar2 == 0)) ||
     (pUVar9 = *(UnityEngine_Transform_o **)(lVar2 + 0x10), pUVar9 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_03fa6cbf;
  UVar31 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
  pUVar4 = (__this->fields)._endSprite;
  if ((pUVar4 == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar9 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
     pUVar9 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fa6cbf;
  UVar32 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  local_118 = UVar31.fields.x;
  fStack_114 = UVar31.fields.y;
  auVar29._0_4_ = local_118 - UVar32.fields.x;
  auVar29._4_4_ = fStack_114 - UVar32.fields.y;
  auVar29._8_4_ = extraout_XMM0_Dc_03 - extraout_XMM0_Dc_04;
  auVar29._12_4_ = extraout_XMM0_Dd_03 - extraout_XMM0_Dd_04;
  fVar21 = UVar31.fields.z - UVar32.fields.z;
  if (TypeInfo_Math[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_init_class();
  }
  uVar22 = 0;
  uVar23 = 0;
  fVar26 = fVar21 * fVar21 + auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_;
  if (fVar26 < 0.0) {
    fVar26 = sqrtf(fVar26);
    uVar22 = extraout_XMM0_Dc_05;
    uVar23 = extraout_XMM0_Dd_05;
    if (fVar26 <= 1e-05) goto LAB_03fa6c18;
LAB_03fa6c8a:
    fVar21 = fVar21 / fVar26;
    auVar5._4_4_ = fVar26;
    auVar5._0_4_ = fVar26;
    auVar5._8_4_ = uVar22;
    auVar5._12_4_ = uVar23;
    auVar30 = divps(auVar29,auVar5);
  }
  else {
    fVar26 = SQRT(fVar26);
    if (1e-05 < fVar26) goto LAB_03fa6c8a;
LAB_03fa6c18:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fdd15 = '\x01';
    }
    auVar30._8_8_ = 0;
    auVar30._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar21 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  UVar31.fields.z = fVar25;
  UVar31.fields.x = (float)(int)uVar28;
  UVar31.fields.y = (float)(int)((ulong)uVar28 >> 0x20);
  upwards.fields._0_8_ = auVar30._0_8_;
  upwards.fields.z = fVar21;
  value = UnityEngine_Quaternion__LookRotation(UVar31,upwards,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_rotation(pUVar8,value,(MethodInfo *)0x0);
    return;
  }
LAB_03fa6cbf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$UpdateDisablingHooking
// il2cpp: void Characters_Hook__UpdateDisablingHooking (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa6cd0

void Characters_Hook__UpdateDisablingHooking(Characters_Hook_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  System_Collections_Generic_List_Vector3__o *pSVar7;
  UnityEngine_Vector3_array *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_LineRenderer_o *pUVar10;
  UnityEngine_GameObject_o *__this_00;
  long lVar11;
  uint uVar12;
  MethodInfo *method_00;
  CustomLogic_CustomLogicMathBuiltin_o *__this_01;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  float local_88;
  float fStack_84;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  if (DAT_05704043 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    DAT_05704043 = '\x01';
  }
  UVar16 = Characters_Hook__GetHookPosition(__this,method);
  uVar2 = (__this->fields)._baseVelocity.fields.x;
  uVar4 = (__this->fields)._baseVelocity.fields.y;
  fVar14 = (__this->fields)._baseVelocity.fields.z;
  uVar3 = (__this->fields)._relativeVelocity.fields.x;
  uVar5 = (__this->fields)._relativeVelocity.fields.y;
  fVar15 = (__this->fields)._relativeVelocity.fields.z;
  fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  lVar11 = MethodInfo_Void_Add;
  pSVar7 = (__this->fields)._nodes;
  if (pSVar7 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar8 = (pSVar7->fields)._items;
    if (pUVar8 != (UnityEngine_Vector3_array *)0x0) {
      local_48 = UVar16.fields.x;
      fStack_44 = UVar16.fields.y;
      UVar17.fields.x = local_48 + (float)uVar2 + (float)uVar3 * fVar13;
      UVar17.fields.y = fStack_44 + (float)uVar4 + (float)uVar5 * fVar13;
      UVar17.fields.z = UVar16.fields.z + fVar14 + fVar15 * fVar13;
      uVar12 = (pSVar7->fields)._size;
      if (uVar12 < (uint)pUVar8->max_length) {
        (pSVar7->fields)._size = uVar12 + 1;
        pUVar8->m_Items[(int)uVar12].fields.x = UVar17.fields.x;
        pUVar8->m_Items[(int)uVar12].fields.y = UVar17.fields.y;
        pUVar8->m_Items[(int)uVar12].fields.z = UVar17.fields.z;
        pUVar9 = (__this->fields).Anchor;
      }
      else {
        System_Collections_Generic_List<Vector3>__AddWithResize
                  (pSVar7,UVar17,
                   *(MethodInfo_361DDD0 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        pUVar9 = (__this->fields).Anchor;
      }
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        UVar16 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
        pSVar7 = (__this->fields)._nodes;
        if (pSVar7 != (System_Collections_Generic_List_Vector3__o *)0x0) {
          UVar17 = System_Collections_Generic_List<Vector3>__get_Item(pSVar7,0,MethodInfo_Vector3_get_Item);
          pSVar7 = (__this->fields)._nodes;
          if ((pSVar7 != (System_Collections_Generic_List_Vector3__o *)0x0) &&
             (pUVar10 = (__this->fields)._renderer, pUVar10 != (UnityEngine_LineRenderer_o *)0x0)) {
            uVar12 = 0;
            UnityEngine_LineRenderer__set_positionCount
                      (pUVar10,(pSVar7->fields)._size,(MethodInfo *)0x0);
            __this_01 = (CustomLogic_CustomLogicMathBuiltin_o *)(__this->fields)._nodes;
            if (__this_01 != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
              local_58 = UVar16.fields.x;
              fStack_54 = UVar16.fields.y;
              local_48 = UVar17.fields.x;
              fStack_44 = UVar17.fields.y;
              do {
                iVar6 = *(int *)&(__this_01->fields).Variables;
                if (iVar6 <= (int)uVar12) {
                  if (1 < iVar6) {
                    pUVar9 = (__this->fields).Anchor;
                    if (pUVar9 == (UnityEngine_Transform_o *)0x0) break;
                    pUVar10 = (__this->fields)._renderer;
                    UVar16 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
                    if (pUVar10 == (UnityEngine_LineRenderer_o *)0x0) break;
                    UnityEngine_LineRenderer__SetPosition(pUVar10,1,UVar16,(MethodInfo *)0x0);
                  }
                  fVar14 = (__this->fields)._currentLiveTime;
                  fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                  fVar15 = fVar15 + fVar14;
                  (__this->fields)._currentLiveTime = fVar15;
                  pUVar10 = (__this->fields)._renderer;
                  if (pUVar10 != (UnityEngine_LineRenderer_o *)0x0) {
                    fVar14 = fVar15 * -0.2 + 0.1;
                    UnityEngine_LineRenderer__set_endWidth(pUVar10,fVar14,(MethodInfo *)0x0);
                    UnityEngine_LineRenderer__set_startWidth(pUVar10,fVar14,(MethodInfo *)0x0);
                    if ((__this->fields)._currentLiveTime <= 0.5) {
                      return;
                    }
                    pUVar10 = (__this->fields)._renderer;
                    if (pUVar10 != (UnityEngine_LineRenderer_o *)0x0) {
                      UnityEngine_LineRenderer__set_positionCount(pUVar10,0,(MethodInfo *)0x0);
                      (__this->fields).State = 0;
                      __this_00 = (__this->fields)._endSprite;
                      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                        UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                  break;
                }
                pUVar10 = (__this->fields)._renderer;
                method_00 = (MethodInfo *)(ulong)uVar12;
                UVar18 = System_Collections_Generic_List<Vector3>__get_Item
                                   ((System_Collections_Generic_List_Vector3__o *)__this_01,uVar12,
                                    MethodInfo_Vector3_get_Item);
                fVar14 = powf(__this_01,0.75,(float)(int)uVar12,method_00);
                if (pUVar10 == (UnityEngine_LineRenderer_o *)0x0) break;
                local_88 = UVar18.fields.x;
                fStack_84 = UVar18.fields.y;
                UVar18.fields.z = UVar18.fields.z + fVar14 * (UVar16.fields.z - UVar17.fields.z);
                UVar18.fields.y = fStack_84 + fVar14 * (fStack_54 - fStack_44);
                UVar18.fields.x = local_88 + fVar14 * (local_58 - local_48);
                UnityEngine_LineRenderer__SetPosition(pUVar10,uVar12,UVar18,(MethodInfo *)0x0);
                uVar12 = uVar12 + 1;
                __this_01 = (CustomLogic_CustomLogicMathBuiltin_o *)(__this->fields)._nodes;
              } while (__this_01 != (CustomLogic_CustomLogicMathBuiltin_o *)0x0);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$UpdateDisablingHooked
// il2cpp: void Characters_Hook__UpdateDisablingHooked (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa7010

void Characters_Hook__UpdateDisablingHooked(Characters_Hook_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  
  pUVar1 = (__this->fields)._renderer;
  if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
    method_00 = (MethodInfo *)0x2;
    UnityEngine_LineRenderer__set_positionCount(pUVar1,2,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._renderer;
    UVar4 = Characters_Hook__GetHookPosition(__this,method_00);
    if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__SetPosition(pUVar1,0,UVar4,(MethodInfo *)0x0);
      __this_00 = (__this->fields).Anchor;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = (__this->fields)._renderer;
        UVar4 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
          UnityEngine_LineRenderer__SetPosition(pUVar1,1,UVar4,(MethodInfo *)0x0);
          fVar3 = (__this->fields)._currentLiveTime;
          fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          fVar2 = fVar2 + fVar3;
          (__this->fields)._currentLiveTime = fVar2;
          pUVar1 = (__this->fields)._renderer;
          if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
            fVar3 = fVar2 * -0.2 + 0.1;
            UnityEngine_LineRenderer__set_endWidth(pUVar1,fVar3,(MethodInfo *)0x0);
            UnityEngine_LineRenderer__set_startWidth(pUVar1,fVar3,(MethodInfo *)0x0);
            if ((__this->fields)._currentLiveTime <= 0.5) {
              return;
            }
            pUVar1 = (__this->fields)._renderer;
            if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
              UnityEngine_LineRenderer__set_positionCount(pUVar1,0,(MethodInfo *)0x0);
              (__this->fields).State = 0;
              __this_01 = (__this->fields)._endSprite;
              if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$FixedUpdateHooking
// il2cpp: void Characters_Hook__FixedUpdateHooking (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa7150

/* WARNING: Type propagation algorithm not settling */

void Characters_Hook__FixedUpdateHooking(Characters_Hook_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Vector3_o *pUVar2;
  float *pfVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar10;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  Characters_Human_o *pCVar19;
  long lVar20;
  System_Collections_Generic_List_Vector3__o *pSVar21;
  UnityEngine_Vector2_Fields UVar22;
  System_String_o *pSVar23;
  UnityEngine_Vector3_array *pUVar24;
  Map_MapScriptBaseObject_o *pMVar25;
  undefined1 auVar26 [16];
  double dVar27;
  UnityEngine_Vector3_Fields item;
  undefined4 uVar28;
  undefined4 uVar29;
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_RaycastHit_o __this_02;
  UnityEngine_RaycastHit_o __this_03;
  UnityEngine_RaycastHit_o __this_04;
  UnityEngine_RaycastHit_o __this_05;
  UnityEngine_RaycastHit_o __this_06;
  UnityEngine_RaycastHit_o __this_07;
  undefined1 auVar30 [12];
  UnityEngine_RaycastHit_o __this_08;
  UnityEngine_RaycastHit_o __this_09;
  UnityEngine_RaycastHit_o __this_10;
  int32_t iVar31;
  bool_conflict bVar32;
  int32_t iVar33;
  UnityEngine_RaycastHit_array *array;
  System_Comparison_T__o *comparison;
  UnityEngine_Collider_o *pUVar34;
  UnityEngine_GameObject_o *pUVar35;
  UnityEngine_Object_o *pUVar36;
  Characters_TitanProjectileDetection_o *__this_11;
  UnityEngine_Object_o *pUVar37;
  UnityEngine_Transform_o *pUVar38;
  UnityEngine_Transform_o *t;
  Photon_Pun_PhotonView_o *pPVar39;
  CustomLogic_CustomLogicCollisionHandler_o *__this_12;
  Map_MapObject_o *pMVar40;
  MethodInfo *method_00;
  bool bVar41;
  MethodInfo *method_01;
  MethodInfo *in_R8;
  _union_14 *p_Var42;
  ulong uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  UnityEngine_Vector3_o UVar50;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o direction;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined8 in_stack_fffffffffffffef8;
  Characters_Hook_o *pCVar55;
  undefined8 local_e8;
  float local_d8;
  float fStack_d4;
  _union_14 local_b8;
  _union_14 _Stack_b0;
  _union_14 _Stack_a8;
  undefined4 uStack_a0;
  undefined4 local_9c;
  float fStack_98;
  float fStack_94;
  int32_t iStack_90;
  float local_88;
  float fStack_84;
  int32_t iStack_80;
  undefined4 uStack_7c;
  _union_14 local_78;
  _union_14 _Stack_70;
  _union_14 _Stack_68;
  undefined4 uStack_60;
  undefined4 local_5c;
  float fStack_58;
  float fStack_54;
  int32_t iStack_50;
  float local_48;
  float fStack_44;
  
  if (DAT_05704044 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Sort_RaycastHit);
    il2cpp_init_method_metadata(&TypeInfo_Comparison_RaycastHit);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
    il2cpp_init_method_metadata(&MethodInfo_TitanProjectileDetection_GetComponent_TitanProje);
    il2cpp_init_method_metadata(&TypeInfo_Hook);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_PunExtensions);
    il2cpp_init_method_metadata(&MethodInfo_Int32__FixedUpdateHooking_b__44_0);
    il2cpp_init_method_metadata();
    DAT_05704044 = '\x01';
  }
  fStack_98 = 0.0;
  fStack_94 = 0.0;
  iStack_90 = 0;
  _Stack_a8.genericMethod = (void *)0x0;
  uStack_a0 = 0;
  local_9c = 0;
  local_b8.genericMethod = (void *)0x0;
  _Stack_b0.genericMethod = (void *)0x0;
  fStack_58 = 0.0;
  fStack_54 = 0.0;
  iStack_50 = 0;
  _Stack_68.genericMethod = (void *)0x0;
  uStack_60 = 0;
  local_5c = 0;
  local_78.genericMethod = (void *)0x0;
  _Stack_70.genericMethod = (void *)0x0;
  pCVar19 = (__this->fields)._owner;
  if (((pCVar19 == (Characters_Human_o *)0x0) ||
      (lVar20 = *(long *)&(pCVar19->fields).Dead, lVar20 == 0)) ||
     (lVar20 = *(long *)(lVar20 + 0x20), lVar20 == 0)) goto LAB_03fa8135;
  if (*(char *)(lVar20 + 0x68) == '\0') {
    fVar7 = (__this->fields)._hookPosition.fields.x;
    fVar14 = (__this->fields)._hookPosition.fields.y;
    fVar46 = (__this->fields)._hookPosition.fields.z;
    uVar8 = (__this->fields)._baseVelocity.fields.x;
    uVar15 = (__this->fields)._baseVelocity.fields.y;
    fVar44 = (__this->fields)._baseVelocity.fields.z;
    fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar11 = fVar44 * fVar4 * 50.0;
    uVar9 = (__this->fields)._relativeVelocity.fields.x;
    uVar16 = (__this->fields)._relativeVelocity.fields.y;
    local_88 = (__this->fields)._relativeVelocity.fields.z;
    fVar44 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    UVar50.fields.x = fVar44 * (float)uVar9 + fVar4 * (float)uVar8 * 50.0 + fVar7;
    UVar50.fields.y = fVar44 * (float)uVar16 + fVar4 * (float)uVar15 * 50.0 + fVar14;
    UVar50.fields.z = local_88 * fVar44 + fVar11 + fVar46;
    (__this->fields)._hookPosition.fields.x = UVar50.fields.x;
    (__this->fields)._hookPosition.fields.y = UVar50.fields.y;
    (__this->fields)._hookPosition.fields.z = UVar50.fields.z;
    lVar20 = MethodInfo_Void_Add;
    pSVar21 = (__this->fields)._nodes;
    if (pSVar21 != (System_Collections_Generic_List_Vector3__o *)0x0) {
      piVar1 = &(pSVar21->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar24 = (pSVar21->fields)._items;
      if (pUVar24 != (UnityEngine_Vector3_array *)0x0) {
        uVar18 = (pSVar21->fields)._size;
        if (uVar18 < (uint)pUVar24->max_length) {
          (pSVar21->fields)._size = uVar18 + 1;
          pUVar24->m_Items[(int)uVar18].fields.x = UVar50.fields.x;
          pUVar24->m_Items[(int)uVar18].fields.y = UVar50.fields.y;
          pUVar24->m_Items[(int)uVar18].fields.z = UVar50.fields.z;
          return;
        }
        System_Collections_Generic_List<Vector3>__AddWithResize
                  (pSVar21,UVar50,
                   *(MethodInfo_361DDD0 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
    goto LAB_03fa8135;
  }
  *(undefined1 *)&(__this->fields).HasOffset = 0;
  fVar4 = (__this->fields)._hookPosition.fields.x;
  fVar11 = (__this->fields)._hookPosition.fields.y;
  iVar33 = 0;
  fVar46 = (__this->fields)._hookPosition.fields.z;
  uVar5 = (__this->fields)._baseVelocity.fields.x;
  uVar12 = (__this->fields)._baseVelocity.fields.y;
  fVar44 = (__this->fields)._baseVelocity.fields.z;
  fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar14 = fVar44 * fVar7 * 50.0;
  uVar6 = (__this->fields)._relativeVelocity.fields.x;
  uVar13 = (__this->fields)._relativeVelocity.fields.y;
  local_88 = (__this->fields)._relativeVelocity.fields.z;
  fVar44 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._hookPosition.fields.x =
       fVar44 * (float)uVar6 + fVar7 * (float)uVar5 * 50.0 + fVar4;
  (__this->fields)._hookPosition.fields.y =
       fVar44 * (float)uVar13 + fVar7 * (float)uVar12 * 50.0 + fVar11;
  (__this->fields)._hookPosition.fields.z = local_88 * fVar44 + fVar14 + fVar46;
  pSVar21 = (__this->fields)._nodes;
  if (pSVar21 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_03fa8135;
  UVar50 = System_Collections_Generic_List<Vector3>__get_Item
                     (pSVar21,(pSVar21->fields)._size + -1,MethodInfo_Vector3_get_Item);
  fVar7 = UVar50.fields.z;
  fVar46 = UVar50.fields.x;
  fVar44 = UVar50.fields.y;
  pSVar21 = (__this->fields)._nodes;
  if (pSVar21 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_03fa8135;
  iVar17 = (pSVar21->fields)._size;
  fVar14 = extraout_XMM0_Dc;
  fVar4 = extraout_XMM0_Dd;
  if (1 < iVar17) {
    UVar50 = System_Collections_Generic_List<Vector3>__get_Item(pSVar21,iVar17 + -2,MethodInfo_Vector3_get_Item);
    fVar7 = UVar50.fields.z;
    fVar46 = UVar50.fields.x;
    fVar44 = UVar50.fields.y;
    fVar14 = extraout_XMM0_Dc_00;
    fVar4 = extraout_XMM0_Dd_00;
  }
  uVar43._0_4_ = (__this->fields)._hookPosition.fields.x;
  uVar43._4_4_ = (__this->fields)._hookPosition.fields.y;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar43;
  fVar49 = (__this->fields)._hookPosition.fields.z;
  if (DAT_056fde20 == '\0') {
    uVar54 = 0;
    uVar53 = 0;
    il2cpp_init_method_metadata(&TypeInfo_Math);
    auVar48._4_4_ = uVar43._4_4_;
    auVar48._0_4_ = (undefined4)uVar43;
    auVar48._8_4_ = uVar54;
    auVar48._12_4_ = uVar53;
    DAT_056fde20 = '\x01';
  }
  auVar47._0_4_ = auVar48._0_4_ - fVar46;
  auVar47._4_4_ = auVar48._4_4_ - fVar44;
  auVar47._8_4_ = auVar48._8_4_ - fVar14;
  auVar47._12_4_ = auVar48._12_4_ - fVar4;
  fVar49 = fVar49 - fVar7;
  if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  fVar4 = auVar47._0_4_;
  fVar14 = fVar49 * fVar49 + auVar47._4_4_ * auVar47._4_4_ + fVar4 * fVar4;
  if (fVar14 < 0.0) {
    uVar43._0_4_ = auVar47._8_4_;
    uVar43._4_4_ = auVar47._12_4_;
    fVar45 = sqrtf(fVar14);
    auVar47._0_4_ = fVar4;
    auVar47._8_4_ = (float)(undefined4)uVar43;
    auVar47._12_4_ = (float)uVar43._4_4_;
    uVar43._0_4_ = extraout_XMM0_Dc_01;
    uVar43._4_4_ = extraout_XMM0_Dd_01;
    if (1e-05 < fVar45) goto LAB_03fa75fb;
LAB_03fa7460:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar10 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar49 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    uVar43._0_4_ = (undefined4)uVar10;
    uVar43._4_4_ = (undefined4)((ulong)uVar10 >> 0x20);
    uVar54 = 0;
    uVar53 = 0;
  }
  else {
    uVar43._0_4_ = 0;
    uVar43._4_4_ = 0;
    fVar45 = SQRT(fVar14);
    if (fVar45 <= 1e-05) goto LAB_03fa7460;
LAB_03fa75fb:
    fVar49 = fVar49 / fVar45;
    auVar26._4_4_ = fVar45;
    auVar26._0_4_ = fVar45;
    auVar26._8_4_ = (undefined4)uVar43;
    auVar26._12_4_ = uVar43._4_4_;
    auVar48 = divps(auVar47,auVar26);
    uVar43._0_4_ = auVar48._0_4_;
    uVar43._4_4_ = auVar48._4_4_;
    uVar54 = auVar48._8_4_;
    uVar53 = auVar48._12_4_;
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
    il2cpp_init_class();
    if (fVar14 < 0.0) goto LAB_03fa7662;
LAB_03fa7646:
    fVar14 = SQRT(fVar14);
  }
  else {
    if (0.0 <= fVar14) goto LAB_03fa7646;
LAB_03fa7662:
    fVar14 = sqrtf(fVar14);
  }
  if (*(int *)(TypeInfo_Hook + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar31 = UnityEngine_LayerMask__get_value
                     ((UnityEngine_LayerMask_Fields)(int32_t)*(undefined8 *)(TypeInfo_Hook + 0xb8),
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  direction.fields.y = (float)uVar43._4_4_;
  direction.fields.x = (float)(undefined4)uVar43;
  origin.fields.z = fVar7;
  origin.fields.x = fVar46;
  origin.fields.y = fVar44;
  direction.fields.z = fVar49;
  array = UnityEngine_Physics__RaycastAll(origin,direction,fVar14,iVar31,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    comparison = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    comparison = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (comparison == (System_Comparison_T__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    comparison = (System_Comparison_T__o *)il2cpp_runtime_glue(TypeInfo_Comparison_RaycastHit);
    System_Comparison<RaycastHit>___ctor();
    lVar20 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Comparison_T__o **)(lVar20 + 8) = comparison;
    il2cpp_runtime_glue(lVar20 + 8,comparison);
  }
  System_Array__Sort<RaycastHit>(array,comparison,MethodInfo_Void_Sort_RaycastHit);
  if (array != (UnityEngine_RaycastHit_array *)0x0) {
    uVar51 = SUB84(array,0);
    uVar52 = (undefined4)((ulong)array >> 0x20);
    if (array->max_length != 0) {
      if ((int)array->max_length == 0) {
LAB_03fa813a:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      local_b8 = *(_union_14 *)&array->m_Items[0].fields.m_Point.fields;
      _Stack_b0 = *(_union_14 *)&array->m_Items[0].fields.m_Point.fields.z;
      _Stack_a8 = *(_union_14 *)&array->m_Items[0].fields.m_Normal.fields.y;
      uVar28 = array->m_Items[0].fields.m_FaceID;
      uVar29 = array->m_Items[0].fields.m_Distance;
      UVar22 = array->m_Items[0].fields.m_UV.fields;
      iStack_90 = array->m_Items[0].fields.m_Collider;
      fStack_98 = UVar22.x;
      fStack_94 = UVar22.y;
      uStack_a0 = uVar28;
      local_9c = uVar29;
      if (0 < (int)array->max_length) {
        p_Var42 = (_union_14 *)array->m_Items;
        uVar43 = 0;
        pCVar55 = __this;
        if ((array->max_length & 0xffffffff) != 0) {
          do {
            local_78 = *p_Var42;
            _Stack_70 = p_Var42[1];
            _Stack_68 = p_Var42[2];
            iStack_50 = *(int32_t *)(p_Var42 + 5);
            fStack_58 = SUB84(p_Var42[4],0);
            fStack_54 = SUB84(p_Var42[4],4);
            uStack_60 = SUB84(p_Var42[3],0);
            local_5c = SUB84(p_Var42[3],4);
            __this_00.fields.m_Point.fields.y = (float)uVar52;
            __this_00.fields.m_Point.fields.x = (float)uVar51;
            __this_00.fields.m_Point.fields.z = (float)uVar54;
            __this_00.fields.m_Normal.fields.x = (float)uVar53;
            __this_00.fields.m_Normal.fields.y = (float)(int)in_stack_fffffffffffffef8;
            __this_00.fields.m_Normal.fields.z =
                 (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
            __this_00.fields.m_FaceID = (int)pCVar55;
            __this_00.fields.m_Distance = (float)(int)((ulong)pCVar55 >> 0x20);
            __this_00.fields.m_UV.fields.x = fVar14;
            __this_00.fields.m_UV.fields.y = fVar11;
            __this_00.fields.m_Collider = iVar33;
            pUVar34 = UnityEngine_RaycastHit__get_collider(__this_00,(MethodInfo *)&local_78);
            if ((pUVar34 == (UnityEngine_Collider_o *)0x0) ||
               (pUVar35 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar34,(MethodInfo *)0x0),
               pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03fa8135;
            iVar31 = UnityEngine_GameObject__get_layer(pUVar35,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
              il2cpp_init_class();
            }
            iVar17 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x20);
            __this_01.fields.m_Point.fields.y = (float)uVar52;
            __this_01.fields.m_Point.fields.x = (float)uVar51;
            __this_01.fields.m_Point.fields.z = (float)uVar54;
            __this_01.fields.m_Normal.fields.x = (float)uVar53;
            __this_01.fields.m_Normal.fields.y = (float)(int)in_stack_fffffffffffffef8;
            __this_01.fields.m_Normal.fields.z =
                 (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
            __this_01.fields.m_FaceID = (int)pCVar55;
            __this_01.fields.m_Distance = (float)(int)((ulong)pCVar55 >> 0x20);
            __this_01.fields.m_UV.fields.x = fVar14;
            __this_01.fields.m_UV.fields.y = fVar11;
            __this_01.fields.m_Collider = iVar33;
            pUVar34 = UnityEngine_RaycastHit__get_collider(__this_01,(MethodInfo *)&local_78);
            if (pUVar34 == (UnityEngine_Collider_o *)0x0) goto LAB_03fa8135;
            __this = pCVar55;
            pUVar36 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar34,(MethodInfo *)0x0);
            pCVar55 = __this;
            if (iVar31 == iVar17) {
              if ((pUVar36 == (UnityEngine_Object_o *)0x0) ||
                 (__this_11 = (Characters_TitanProjectileDetection_o *)
                              UnityEngine_GameObject__GetComponent<object>
                                        ((UnityEngine_GameObject_o *)pUVar36,MethodInfo_TitanProjectileDetection_GetComponent_TitanProje),
                 __this_11 == (Characters_TitanProjectileDetection_o *)0x0)) goto LAB_03fa8135;
              Characters_TitanProjectileDetection__RegisterHook(__this_11,__this,(MethodInfo *)0x0);
            }
            else {
              pCVar19 = (__this->fields)._owner;
              if (pCVar19 == (Characters_Human_o *)0x0) goto LAB_03fa8135;
              pUVar37 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pCVar19,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar32 = UnityEngine_Object__op_Equality(pUVar36,pUVar37,(MethodInfo *)0x0);
              if ((char)bVar32 == '\0') {
                pCVar19 = (__this->fields)._owner;
                if (pCVar19 == (Characters_Human_o *)0x0) goto LAB_03fa8135;
                pUVar38 = (pCVar19->fields).GrabHand;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar32 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pUVar38,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar32 != '\0') {
                  __this_02.fields.m_Point.fields.y = (float)uVar52;
                  __this_02.fields.m_Point.fields.x = (float)uVar51;
                  __this_02.fields.m_Point.fields.z = (float)uVar54;
                  __this_02.fields.m_Normal.fields.x = (float)uVar53;
                  __this_02.fields.m_Normal.fields.y = (float)(int)in_stack_fffffffffffffef8;
                  __this_02.fields.m_Normal.fields.z =
                       (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
                  __this_02.fields.m_FaceID = (int)pCVar55;
                  __this_02.fields.m_Distance = (float)(int)((ulong)pCVar55 >> 0x20);
                  __this_02.fields.m_UV.fields.x = fVar14;
                  __this_02.fields.m_UV.fields.y = fVar11;
                  __this_02.fields.m_Collider = iVar33;
                  pUVar34 = UnityEngine_RaycastHit__get_collider(__this_02,(MethodInfo *)&local_78);
                  if (pUVar34 == (UnityEngine_Collider_o *)0x0) goto LAB_03fa8135;
                  pUVar36 = (UnityEngine_Object_o *)
                            UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar34,(MethodInfo *)0x0);
                  pCVar19 = (__this->fields)._owner;
                  if ((pCVar19 == (Characters_Human_o *)0x0) ||
                     (pUVar38 = (pCVar19->fields).GrabHand,
                     pUVar38 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fa8135;
                  pUVar37 = (UnityEngine_Object_o *)
                            UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar38,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar32 = UnityEngine_Object__op_Equality(pUVar36,pUVar37,(MethodInfo *)0x0);
                  if ((char)bVar32 != '\0') goto LAB_03fa7820;
                }
                pCVar19 = (__this->fields)._owner;
                if (pCVar19 == (Characters_Human_o *)0x0) goto LAB_03fa8135;
                if (*(int *)((long)&(pCVar19->fields).Weapon + 4) == 1) {
                  pSVar23 = (pCVar19->fields).CurrentSpecial;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar32 = UnityEngine_Object__op_Inequality
                                     ((UnityEngine_Object_o *)pSVar23,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if ((char)bVar32 != '\0') {
                    __this_03.fields.m_Point.fields.y = (float)uVar52;
                    __this_03.fields.m_Point.fields.x = (float)uVar51;
                    __this_03.fields.m_Point.fields.z = (float)uVar54;
                    __this_03.fields.m_Normal.fields.x = (float)uVar53;
                    __this_03.fields.m_Normal.fields.y = (float)(int)in_stack_fffffffffffffef8;
                    __this_03.fields.m_Normal.fields.z =
                         (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
                    __this_03.fields.m_FaceID = (int)pCVar55;
                    __this_03.fields.m_Distance = (float)(int)((ulong)pCVar55 >> 0x20);
                    __this_03.fields.m_UV.fields.x = fVar14;
                    __this_03.fields.m_UV.fields.y = fVar11;
                    __this_03.fields.m_Collider = iVar33;
                    pUVar34 = UnityEngine_RaycastHit__get_collider
                                        (__this_03,(MethodInfo *)&local_78);
                    if (pUVar34 == (UnityEngine_Collider_o *)0x0) goto LAB_03fa8135;
                    pUVar36 = (UnityEngine_Object_o *)
                              UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar34,(MethodInfo *)0x0);
                    pCVar19 = (__this->fields)._owner;
                    if ((pCVar19 == (Characters_Human_o *)0x0) ||
                       (pSVar23 = (pCVar19->fields).CurrentSpecial,
                       pSVar23 == (System_String_o *)0x0)) goto LAB_03fa8135;
                    pUVar37 = (UnityEngine_Object_o *)
                              UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pSVar23,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    bVar32 = UnityEngine_Object__op_Equality(pUVar36,pUVar37,(MethodInfo *)0x0);
                    if ((char)bVar32 != '\0') goto LAB_03fa7820;
                  }
                }
                fStack_98 = fStack_58;
                fStack_94 = fStack_54;
                iStack_90 = iStack_50;
                _Stack_a8 = _Stack_68;
                uStack_a0 = uStack_60;
                local_9c = local_5c;
                local_b8 = local_78;
                _Stack_b0 = _Stack_70;
                __this_04.fields.m_Point.fields.y = (float)uVar52;
                __this_04.fields.m_Point.fields.x = (float)uVar51;
                __this_04.fields.m_Point.fields.z = (float)uVar54;
                __this_04.fields.m_Normal.fields.x = (float)uVar53;
                __this_04.fields.m_Normal.fields.y = (float)(int)in_stack_fffffffffffffef8;
                __this_04.fields.m_Normal.fields.z =
                     (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
                __this_04.fields.m_FaceID = (int)pCVar55;
                __this_04.fields.m_Distance = (float)(int)((ulong)pCVar55 >> 0x20);
                __this_04.fields.m_UV.fields.x = fVar14;
                __this_04.fields.m_UV.fields.y = fVar11;
                __this_04.fields.m_Collider = iVar33;
                pUVar34 = UnityEngine_RaycastHit__get_collider(__this_04,(MethodInfo *)&local_b8);
                if ((pUVar34 == (UnityEngine_Collider_o *)0x0) ||
                   (pUVar35 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar34,(MethodInfo *)0x0),
                   pUVar35 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03fa8135;
                iVar31 = UnityEngine_GameObject__get_layer(pUVar35,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                  il2cpp_init_class();
                  if (iVar31 != *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc)) goto LAB_03fa7c53;
LAB_03fa7c88:
                  __this_05.fields.m_Point.fields.y = (float)uVar52;
                  __this_05.fields.m_Point.fields.x = (float)uVar51;
                  __this_05.fields.m_Point.fields.z = (float)uVar54;
                  __this_05.fields.m_Normal.fields.x = (float)uVar53;
                  __this_05.fields.m_Normal.fields.y = (float)(int)in_stack_fffffffffffffef8;
                  __this_05.fields.m_Normal.fields.z =
                       (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
                  __this_05.fields.m_FaceID = (int)pCVar55;
                  __this_05.fields.m_Distance = (float)(int)((ulong)pCVar55 >> 0x20);
                  __this_05.fields.m_UV.fields.x = fVar14;
                  __this_05.fields.m_UV.fields.y = fVar11;
                  __this_05.fields.m_Collider = iVar33;
                  UVar50 = UnityEngine_RaycastHit__get_point(__this_05,(MethodInfo *)&local_b8);
                  fVar7 = UVar50.fields.z;
                  fVar46 = UVar50.fields.x;
                  fVar44 = UVar50.fields.y;
                  iVar33 = UnityEngine_GameObject__get_layer(pUVar35,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  if (iVar33 == *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc)) {
                    pUVar38 = UnityEngine_GameObject__get_transform(pUVar35,(MethodInfo *)0x0);
                    if (pUVar38 == (UnityEngine_Transform_o *)0x0) goto LAB_03fa8135;
                    UVar50 = UnityEngine_Transform__get_position(pUVar38,(MethodInfo *)0x0);
                    fVar7 = UVar50.fields.z;
                    fVar46 = UVar50.fields.x;
                    fVar44 = UVar50.fields.y;
                    if (DAT_056fde1f == '\0') {
                      il2cpp_init_method_metadata(&TypeInfo_Vector3);
                      DAT_056fde1f = '\x01';
                    }
                    uVar10 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
                    fVar46 = fVar46 + (float)uVar10 * 0.8;
                    fVar44 = fVar44 + (float)((ulong)uVar10 >> 0x20) * 0.8;
                    fVar7 = fVar7 + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 0.8;
                  }
                  t = UnityEngine_GameObject__get_transform(pUVar35,(MethodInfo *)0x0);
                  pUVar38 = UnityEngine_GameObject__get_transform(pUVar35,(MethodInfo *)0x0);
                  if ((pUVar38 == (UnityEngine_Transform_o *)0x0) ||
                     (pUVar38 = UnityEngine_Transform__get_root(pUVar38,(MethodInfo *)0x0),
                     pUVar38 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fa8135;
                  pUVar35 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar38,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_PunExtensions + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pPVar39 = Photon_Pun_PunExtensions__GetPhotonView(pUVar35,(MethodInfo *)0x0);
                  if (pPVar39 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03fa8135;
                  iVar33 = (pPVar39->fields).viewIdField;
                }
                else {
                  if (iVar31 == *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc)) goto LAB_03fa7c88;
LAB_03fa7c53:
                  iVar31 = UnityEngine_GameObject__get_layer(pUVar35,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  if (iVar31 == *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x14)) goto LAB_03fa7c88;
                  __this_12 = (CustomLogic_CustomLogicCollisionHandler_o *)
                              UnityEngine_GameObject__GetComponent<object>(pUVar35,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar32 = UnityEngine_Object__op_Inequality
                                     ((UnityEngine_Object_o *)__this_12,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if ((char)bVar32 != '\0') {
                    pCVar19 = (__this->fields)._owner;
                    __this_06.fields.m_Point.fields.y = (float)uVar52;
                    __this_06.fields.m_Point.fields.x = (float)uVar51;
                    __this_06.fields.m_Point.fields.z = (float)uVar54;
                    __this_06.fields.m_Normal.fields.x = (float)uVar53;
                    __this_06.fields.m_Normal.fields.y = (float)(int)in_stack_fffffffffffffef8;
                    __this_06.fields.m_Normal.fields.z =
                         (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
                    __this_06.fields.m_FaceID = (int)pCVar55;
                    __this_06.fields.m_Distance = (float)(int)((ulong)pCVar55 >> 0x20);
                    __this_06.fields.m_UV.fields.x = fVar14;
                    __this_06.fields.m_UV.fields.y = fVar11;
                    __this_06.fields.m_Collider = iVar33;
                    UVar50 = UnityEngine_RaycastHit__get_point(__this_06,(MethodInfo *)&local_b8);
                    if (__this_12 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0)
                    goto LAB_03fa8135;
                    CustomLogic_CustomLogicCollisionHandler__GetHooked
                              (__this_12,pCVar19,UVar50,
                               (uint)*(byte *)((long)&(__this->fields).HasOffset + 1),
                               (MethodInfo *)0x0);
                  }
                  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pMVar40 = Map_MapLoader__GetMapObject(pUVar35,(MethodInfo *)0x0);
                  uVar43._0_4_ = (undefined4)((ulong)pCVar55 >> 0x20);
                  if (pMVar40 == (Map_MapObject_o *)0x0) {
                    __this_08.fields.m_Point.fields.y = (float)uVar52;
                    __this_08.fields.m_Point.fields.x = (float)uVar51;
                    __this_08.fields.m_Point.fields.z = (float)uVar54;
                    __this_08.fields.m_Normal.fields.x = (float)uVar53;
                    __this_08.fields.m_Normal.fields.y = (float)(int)in_stack_fffffffffffffef8;
                    __this_08.fields.m_Normal.fields.z =
                         (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
                    __this_08.fields.m_FaceID = (int)pCVar55;
                    __this_08.fields.m_Distance = (float)(undefined4)uVar43;
                    __this_08.fields.m_UV.fields.x = fVar14;
                    __this_08.fields.m_UV.fields.y = fVar11;
                    __this_08.fields.m_Collider = iVar33;
                    UVar50 = UnityEngine_RaycastHit__get_point(__this_08,(MethodInfo *)&local_b8);
                    fVar7 = UVar50.fields.z;
                    fVar46 = UVar50.fields.x;
                    fVar44 = UVar50.fields.y;
LAB_03fa80ec:
                    t = (UnityEngine_Transform_o *)0x0;
                  }
                  else {
                    pMVar25 = (pMVar40->fields).ScriptObject;
                    if (pMVar25 == (Map_MapScriptBaseObject_o *)0x0) goto LAB_03fa8135;
                    if (*(char *)((long)&(pMVar25->fields).Active + 1) != '\0') {
                      if (DAT_056fde1f == '\0') {
                        il2cpp_init_method_metadata(&TypeInfo_Vector3);
                        DAT_056fde1f = '\x01';
                      }
                      uVar10 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
                      fVar44 = (float)uVar10;
                      fVar7 = (float)((ulong)uVar10 >> 0x20);
                      iVar33 = 0;
                      fVar46 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
                      uVar43._0_4_ = 0;
                      uVar43._4_4_ = 0;
                      uVar54 = 0;
                      __this_07.fields.m_Normal.fields.y = (float)(int)in_stack_fffffffffffffef8;
                      __this_07.fields.m_Normal.fields.z =
                           (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
                      auVar30 = SUB1612(ZEXT416((uint)fVar46),0);
                      __this_07.fields.m_Point.fields.x = (float)auVar30._0_4_;
                      __this_07.fields.m_Point.fields.y = (float)auVar30._4_4_;
                      __this_07.fields.m_Point.fields.z = (float)auVar30._8_4_;
                      __this_07.fields.m_Normal.fields.x = (float)SUB164(ZEXT416((uint)fVar46),0xc);
                      __this_07.fields.m_FaceID = (int)pCVar55;
                      __this_07.fields.m_Distance = (float)(int)((ulong)pCVar55 >> 0x20);
                      __this_07.fields.m_UV.fields.x = fVar44;
                      __this_07.fields.m_UV.fields.y = fVar7;
                      __this_07.fields.m_Collider = 0;
                      UVar50 = UnityEngine_RaycastHit__get_normal(__this_07,(MethodInfo *)&local_b8)
                      ;
                      fVar4 = UVar50.fields.z;
                      fVar14 = UVar50.fields.x;
                      local_48 = UVar50.fields.y;
                      if (DAT_0570266a == '\0') {
                        il2cpp_init_method_metadata(&TypeInfo_Math);
                        DAT_0570266a = '\x01';
                      }
                      auVar47._0_4_ = fVar44 * fVar44;
                      uStack_7c = 0;
                      fVar11 = fVar7 * fVar7;
                      auVar47._4_4_ = fVar46 * fVar46;
                      fVar49 = local_48 * local_48;
                      local_88 = fVar7;
                      fStack_84 = fVar7;
                      iStack_80 = iVar33;
                      fStack_44 = local_48;
                      if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
                        il2cpp_init_class();
                      }
                      fVar11 = (auVar47._4_4_ + fVar11 + auVar47._0_4_) *
                               (fVar4 * fVar4 + fVar49 + fVar14 * fVar14);
                      if (fVar11 < 0.0) {
                        fVar11 = sqrtf(fVar11);
                        method_01 = TypeInfo_Math;
                      }
                      else {
                        fVar11 = SQRT(fVar11);
                        method_01 = TypeInfo_Math;
                      }
                      bVar41 = true;
                      TypeInfo_Math = method_01;
                      if (1e-15 <= fVar11) {
                        fVar11 = (fVar46 * fVar4 + local_48 * local_88 + fVar14 * fVar44) / fVar11;
                        fVar14 = 1.0;
                        if (fVar11 <= 1.0) {
                          fVar14 = fVar11;
                        }
                        fVar14 = (float)(~-(uint)(-1.0 <= fVar11) & 0xbf800000 |
                                        (uint)fVar14 & -(uint)(-1.0 <= fVar11));
                        if (*(int *)((long)&method_01[2].parameters + 4) == 0) {
                          uVar43._0_4_ = 0;
                          uVar43._4_4_ = 0;
                          uVar54 = 0;
                          il2cpp_init_class();
                          fVar46 = fVar14;
                        }
                        dVar27 = acos((double)fVar14,method_01);
                        bVar41 = (float)dVar27 * 57.29578 < 10.0;
                      }
                      *(bool *)&(__this->fields).HasOffset = bVar41;
                      __this_10.fields.m_Point.fields.y = (float)(undefined4)uVar43;
                      __this_10.fields.m_Point.fields.x = fVar46;
                      __this_10.fields.m_Point.fields.z = (float)uVar43._4_4_;
                      __this_10.fields.m_Normal.fields.x = (float)uVar54;
                      __this_10.fields.m_Normal.fields.y = (float)(int)in_stack_fffffffffffffef8;
                      __this_10.fields.m_Normal.fields.z =
                           (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
                      __this_10.fields.m_FaceID = (int)pCVar55;
                      __this_10.fields.m_Distance = (float)(int)((ulong)pCVar55 >> 0x20);
                      __this_10.fields.m_UV.fields.x = fVar44;
                      __this_10.fields.m_UV.fields.y = fVar7;
                      __this_10.fields.m_Collider = iVar33;
                      UVar50 = UnityEngine_RaycastHit__get_point(__this_10,(MethodInfo *)&local_b8);
                      fVar7 = UVar50.fields.z;
                      fVar46 = UVar50.fields.x;
                      fVar44 = UVar50.fields.y;
                      if (bVar41 != false) {
                        fVar46 = fVar46 + 0.0;
                        fVar44 = fVar44 + 0.1;
                        fVar7 = fVar7 + 0.0;
                      }
                      goto LAB_03fa80ec;
                    }
                    bVar32 = (pMVar40->fields).RuntimeCreated;
                    __this_09.fields.m_Point.fields.y = (float)uVar52;
                    __this_09.fields.m_Point.fields.x = (float)uVar51;
                    __this_09.fields.m_Point.fields.z = (float)uVar54;
                    __this_09.fields.m_Normal.fields.x = (float)uVar53;
                    __this_09.fields.m_Normal.fields.y = (float)(int)in_stack_fffffffffffffef8;
                    __this_09.fields.m_Normal.fields.z =
                         (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
                    __this_09.fields.m_FaceID = (int)pCVar55;
                    __this_09.fields.m_Distance = (float)(undefined4)uVar43;
                    __this_09.fields.m_UV.fields.x = fVar14;
                    __this_09.fields.m_UV.fields.y = fVar11;
                    __this_09.fields.m_Collider = iVar33;
                    UVar50 = UnityEngine_RaycastHit__get_point(__this_09,(MethodInfo *)&local_b8);
                    fVar7 = UVar50.fields.z;
                    fVar46 = UVar50.fields.x;
                    fVar44 = UVar50.fields.y;
                    t = UnityEngine_GameObject__get_transform(pUVar35,(MethodInfo *)0x0);
                    if ((char)bVar32 == '\0') {
                      pMVar25 = (pMVar40->fields).ScriptObject;
                      if (pMVar25 != (Map_MapScriptBaseObject_o *)0x0) {
                        iVar31 = (pMVar25->fields).Id;
                        iVar33 = -1;
                        goto LAB_03fa80fb;
                      }
                      goto LAB_03fa8135;
                    }
                  }
                  iVar33 = -1;
                }
                iVar31 = -1;
LAB_03fa80fb:
                position.fields.y = fVar44;
                position.fields.x = fVar46;
                position.fields.z = fVar7;
                Characters_Hook__SetHooked(__this,position,t,iVar33,iVar31,in_R8);
                return;
              }
            }
LAB_03fa7820:
            uVar43 = uVar43 + 1;
            uVar18 = *(uint *)(CONCAT44(uVar52,uVar51) + 0x18);
            p_Var42 = (_union_14 *)((long)p_Var42 + 0x2c);
            if ((long)(int)uVar18 <= (long)uVar43) goto LAB_03fa7af8;
          } while (uVar43 < uVar18);
        }
        goto LAB_03fa813a;
      }
    }
LAB_03fa7af8:
    lVar20 = MethodInfo_Void_Add;
    pSVar21 = (__this->fields)._nodes;
    if (pSVar21 != (System_Collections_Generic_List_Vector3__o *)0x0) {
      pUVar2 = &(__this->fields)._hookPosition;
      fVar44 = (pUVar2->fields).x;
      fVar7 = (pUVar2->fields).y;
      fVar46 = (__this->fields)._hookPosition.fields.z;
      item = pUVar2->fields;
      piVar1 = &(pSVar21->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar24 = (pSVar21->fields)._items;
      if (pUVar24 != (UnityEngine_Vector3_array *)0x0) {
        uVar18 = (pSVar21->fields)._size;
        if (uVar18 < (uint)pUVar24->max_length) {
          (pSVar21->fields)._size = uVar18 + 1;
          pUVar24->m_Items[(int)uVar18].fields.x = fVar44;
          pUVar24->m_Items[(int)uVar18].fields.y = fVar7;
          pUVar24->m_Items[(int)uVar18].fields.z = fVar46;
        }
        else {
          System_Collections_Generic_List<Vector3>__AddWithResize
                    (pSVar21,(UnityEngine_Vector3_o)item,
                     *(MethodInfo_361DDD0 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        }
        fVar46 = (__this->fields)._currentLiveTime;
        fVar44 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar44 = fVar44 + fVar46;
        (__this->fields)._currentLiveTime = fVar44;
        pfVar3 = &(__this->fields)._maxLiveTime;
        if (*pfVar3 <= fVar44 && fVar44 != *pfVar3) {
          Characters_Hook__SetHookState(__this,3,method_00);
        }
        return;
      }
    }
  }
LAB_03fa8135:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$FixedUpdateHooked
// il2cpp: void Characters_Hook__FixedUpdateHooked (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa8140

void Characters_Hook__FixedUpdateHooked(Characters_Hook_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_Human_o *pCVar3;
  long lVar4;
  UnityEngine_Transform_o *pUVar5;
  Characters_BaseCharacter_o *pCVar6;
  Characters_BasicTitan_o *__this_00;
  bool_conflict bVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  float fVar8;
  UnityEngine_Vector3_Fields UVar9;
  
  if (DAT_05704045 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704045 = '\x01';
  }
  pCVar3 = (__this->fields)._owner;
  if (((pCVar3 == (Characters_Human_o *)0x0) ||
      (lVar4 = *(long *)&(pCVar3->fields).Dead, lVar4 == 0)) ||
     (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) goto LAB_03fa838d;
  if (*(char *)(lVar4 + 0x68) == '\0') {
    return;
  }
  if ((char)(__this->fields)._hasHookParent == '\0') {
    return;
  }
  pUVar5 = (__this->fields).HookParent;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((char)bVar7 == '\0') {
    pCVar6 = (__this->fields).HookCharacter;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar7 != '\0') {
      pCVar6 = (__this->fields).HookCharacter;
      if (pCVar6 == (Characters_BaseCharacter_o *)0x0) goto LAB_03fa838d;
      if (*(char *)&(pCVar6->fields).FeedVictimName != '\0') {
        bVar1 = (TypeInfo_Human->_2).naturalAligment;
        method_00 = (MethodInfo *)(ulong)bVar1;
        if ((bVar1 <= (pCVar6->klass->_2).naturalAligment) &&
           ((pCVar6->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] == TypeInfo_Human))
        goto LAB_03fa81e4;
      }
    }
    pUVar5 = (__this->fields).HookParent;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
LAB_03fa81e4:
    Characters_Hook__SetHookState(__this,4,method_00);
    pUVar5 = (__this->fields).HookParent;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pCVar6 = (__this->fields).HookCharacter;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (((char)bVar7 != '\0') &&
       (__this_00 = (Characters_BasicTitan_o *)(__this->fields).HookCharacter,
       __this_00 != (Characters_BasicTitan_o *)0x0)) {
      bVar1 = (TypeInfo_BasicTitan->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BasicTitan)) {
        if (__this_00 == (Characters_BasicTitan_o *)0x0) {
LAB_03fa838d:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (((*(char *)&(__this_00->fields).FeedVictimName != '\0') &&
            (fVar8 = Characters_BasicTitan__DeathTimeElapsed(__this_00,(MethodInfo *)0x0),
            0.0 <= fVar8)) && (fVar8 < (__this->fields)._deathTimerOffset)) {
          if ((char)(__this->fields)._firstDeathFrame != '\0') {
            pUVar5 = (__this->fields).HookParent;
            if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03fa838d;
            UVar9 = (UnityEngine_Vector3_Fields)
                    UnityEngine_Transform__TransformPoint
                              (pUVar5,(UnityEngine_Vector3_o)(__this->fields)._hookPosition.fields,
                               (MethodInfo *)0x0);
            (__this->fields)._lastGoodHookPoint.fields = UVar9;
            fVar8 = (__this->fields)._lastGoodHookPoint.fields.y;
            (__this->fields)._lastWorldHookPosition.fields.x =
                 (__this->fields)._lastGoodHookPoint.fields.x;
            (__this->fields)._lastWorldHookPosition.fields.y = fVar8;
            (__this->fields)._lastWorldHookPosition.fields.z =
                 (__this->fields)._lastGoodHookPoint.fields.z;
            *(undefined1 *)&(__this->fields)._firstDeathFrame = 0;
          }
          *(undefined1 *)&(__this->fields)._usingDeathTimer = 1;
          return;
        }
      }
    }
  }
  return;
}


// Characters.Hook$$Update
// il2cpp: void Characters_Hook__Update (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa83a0

void Characters_Hook__Update(Characters_Hook_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).State;
  switch(iVar1) {
  case 1:
    Characters_Hook__UpdateHooking(__this,method);
    break;
  case 2:
    Characters_Hook__UpdateHooked(__this,method);
    break;
  case 3:
    Characters_Hook__UpdateDisablingHooking(__this,method);
    break;
  case 4:
    Characters_Hook__UpdateDisablingHooked(__this,method);
    break;
  default:
    goto switchD_03fa83bd_default;
  }
  iVar1 = (__this->fields).State;
switchD_03fa83bd_default:
  if (iVar1 == 0) {
    return;
  }
  Characters_Hook__UpdateSkin(__this,method);
  return;
}


// Characters.Hook$$FixedUpdateMock
// il2cpp: void Characters_Hook__FixedUpdateMock (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa8400

void Characters_Hook__FixedUpdateMock(Characters_Hook_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  int iVar1;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *pMVar2;
  UnityEngine_Vector3_o value;
  
  *(undefined1 *)&(__this->fields)._usingDeathTimer = 0;
  iVar1 = (__this->fields).State;
  if (iVar1 == 1) {
    Characters_Hook__FixedUpdateHooking(__this,method);
    iVar1 = (__this->fields).State;
  }
  if (1 < iVar1 - 1U) {
    return;
  }
  __this_00 = (UnityEngine_Component_o *)(__this->fields)._particles;
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    pMVar2 = (MethodInfo *)0x0;
    __this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    value = Characters_Hook__GetHookPosition(__this,pMVar2);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pMVar2 = (MethodInfo *)0x0;
      UnityEngine_Transform__set_position(__this_01,value,(MethodInfo *)0x0);
      if ((__this->fields).State != 2) {
        return;
      }
      Characters_Hook__FixedUpdateHooked(__this,pMVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$GetHookPosition
// il2cpp: UnityEngine_Vector3_o Characters_Hook__GetHookPosition (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa47c0

UnityEngine_Vector3_o Characters_Hook__GetHookPosition(Characters_Hook_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Vector3_o *pUVar4;
  float fVar5;
  bool_conflict bVar6;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_Vector3_Fields UVar8;
  UnityEngine_Vector3_o UVar9;
  
  if (DAT_05704046 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704046 = '\x01';
  }
  if ((char)(__this->fields)._hasHookParent == '\0') {
    pUVar7 = &(__this->fields)._hookPosition;
    pUVar4 = &(__this->fields)._hookPosition;
  }
  else {
    pUVar3 = (__this->fields).HookParent;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar6 != '\0') {
      if ((char)(__this->fields)._usingDeathTimer == '\0') {
        pUVar3 = (__this->fields).HookParent;
        if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UVar8 = (UnityEngine_Vector3_Fields)
                UnityEngine_Transform__TransformPoint
                          (pUVar3,(UnityEngine_Vector3_o)(__this->fields)._hookPosition.fields,
                           (MethodInfo *)0x0);
        (__this->fields)._lastWorldHookPosition.fields = UVar8;
      }
      else {
        (__this->fields)._lastWorldHookPosition.fields.z =
             (__this->fields)._lastGoodHookPoint.fields.z;
        fVar5 = (__this->fields)._lastGoodHookPoint.fields.y;
        (__this->fields)._lastWorldHookPosition.fields.x =
             (__this->fields)._lastGoodHookPoint.fields.x;
        (__this->fields)._lastWorldHookPosition.fields.y = fVar5;
      }
    }
    pUVar7 = &(__this->fields)._lastWorldHookPosition;
    pUVar4 = &(__this->fields)._lastWorldHookPosition;
  }
  uVar1 = (pUVar7->fields).x;
  uVar2 = (pUVar7->fields).y;
  UVar9.fields.y = (float)uVar2;
  UVar9.fields.x = (float)uVar1;
  UVar9.fields.z = (pUVar4->fields).z;
  return (UnityEngine_Vector3_o)UVar9.fields;
}


// Characters.Hook$$OnDestroy
// il2cpp: void Characters_Hook__OnDestroy (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa8480

void Characters_Hook__OnDestroy(Characters_Hook_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *pUVar3;
  
  if (DAT_05704047 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704047 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._particles;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pUVar1 = (UnityEngine_Component_o *)(__this->fields)._particles;
  if (pUVar1 != (UnityEngine_Component_o *)0x0) {
    pUVar3 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(pUVar1,(MethodInfo *)0x0)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    pUVar1 = (UnityEngine_Component_o *)(__this->fields)._particles;
    if (pUVar1 != (UnityEngine_Component_o *)0x0) {
      pUVar3 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject(pUVar1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(pUVar3,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Hook$$.ctor
// il2cpp: void Characters_Hook___ctor (Characters_Hook_o* __this, const MethodInfo* method);
// 0x3fa8550

void Characters_Hook___ctor(Characters_Hook_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  System_Collections_Generic_List_Vector3__o *__this_00;
  
  if (DAT_05704048 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_List_Vector3);
    DAT_05704048 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(__this_00,MethodInfo_List_1_UnityEngine_Vector3);
  (__this->fields)._nodes = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._nodes);
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  lVar3 = TypeInfo_Vector3;
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._baseVelocity.fields.x = (float)(int)uVar2;
  (__this->fields)._baseVelocity.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._baseVelocity.fields.z = fVar1;
  uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(lVar3 + 0xb8) + 1);
  (__this->fields)._relativeVelocity.fields.x = (float)(int)uVar2;
  (__this->fields)._relativeVelocity.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._relativeVelocity.fields.z = fVar1;
  uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(lVar3 + 0xb8) + 1);
  (__this->fields)._hookPosition.fields.x = (float)(int)uVar2;
  (__this->fields)._hookPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._hookPosition.fields.z = fVar1;
  uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(lVar3 + 0xb8) + 1);
  (__this->fields)._lastWorldHookPosition.fields.x = (float)(int)uVar2;
  (__this->fields)._lastWorldHookPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._lastWorldHookPosition.fields.z = fVar1;
  uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(lVar3 + 0xb8) + 1);
  (__this->fields)._lastGoodHookPoint.fields.x = (float)(int)uVar2;
  (__this->fields)._lastGoodHookPoint.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._lastGoodHookPoint.fields.z = fVar1;
  *(undefined1 *)&(__this->fields)._firstDeathFrame = 1;
  (__this->fields)._deathTimerOffset = 0.6;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.Hook$$.cctor
// il2cpp: void Characters_Hook___cctor (const MethodInfo* method);
// 0x3fa8680

/* WARNING: Type propagation algorithm not settling */

void Characters_Hook___cctor(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Int32_array *layers;
  
  if (DAT_05704049 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Hook);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_05704049 = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0xc);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x14);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x20);
          if (uVar1 != 3) {
            layers->m_Items[3] = *(int32_t *)(lVar2 + 0x30);
            if (4 < uVar1) {
              layers->m_Items[4] = *(int32_t *)(lVar2 + 0x38);
              if (uVar1 != 5) {
                layers->m_Items[5] = *(int32_t *)(lVar2 + 0x3c);
                UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
                (*(UnityEngine_LayerMask_Fields **)(TypeInfo_Hook + 0xb8))->m_Mask =
                     (int32_t)UVar3.fields.m_Mask;
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


