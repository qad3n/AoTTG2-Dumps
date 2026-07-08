// Type: Cameras.InGameCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Cameras/InGameCamera.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Cameras/InGameCamera.cs  [CHANGED since prior version]
// --------------------------------

// Cameras.InGameCamera.<>c$$.cctor
// il2cpp: void Cameras_InGameCamera___c___cctor (const MethodInfo* method);
// 0x4148bd0

void Cameras_InGameCamera_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057049ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057049ae = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Cameras.InGameCamera.<>c$$.ctor
// il2cpp: void Cameras_InGameCamera___c___ctor (Cameras_InGameCamera___c_o* __this, const MethodInfo* method);
// 0x4148c40

void Cameras_InGameCamera_<>c___ctor(Cameras_InGameCamera___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Cameras.InGameCamera.<>c$$<GetSortedCharacters>b__52_0
// il2cpp: int32_t Cameras_InGameCamera___c___GetSortedCharacters_b__52_0 (Cameras_InGameCamera___c_o* __this, Characters_BaseCharacter_o* x, const MethodInfo* method);
// 0x4148c50

int32_t Cameras_InGameCamera_<>c__<GetSortedCharacters>b__52_0
                  (Cameras_InGameCamera___c_o *__this,Characters_BaseCharacter_o *x,
                  MethodInfo *method)

{
  long lVar1;
  
  if ((((x != (Characters_BaseCharacter_o *)0x0) && (lVar1 = *(long *)&(x->fields).Dead, lVar1 != 0)
       ) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x80), lVar1 != 0)) {
    return *(int32_t *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$CheckSpectateRateLimit
// il2cpp: bool Cameras_InGameCamera__CheckSpectateRateLimit (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x41432f0

bool_conflict
Cameras_InGameCamera__CheckSpectateRateLimit(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  bVar1 = 1.0 <= fVar2 - (__this->fields)._lastChangeSpectateID;
  if (bVar1) {
    fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._lastChangeSpectateID = fVar2;
  }
  return (uint)bVar1;
}


// Cameras.InGameCamera$$SetCameraDistance
// il2cpp: void Cameras_InGameCamera__SetCameraDistance (Cameras_InGameCamera_o* __this, float distance, const MethodInfo* method);
// 0x4143340

void Cameras_InGameCamera__SetCameraDistance
               (Cameras_InGameCamera_o *__this,float distance,MethodInfo *method)

{
  (__this->fields)._cameraDistance = distance;
  return;
}


// Cameras.InGameCamera$$ApplyGraphicsSettings
// il2cpp: void Cameras_InGameCamera__ApplyGraphicsSettings (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4143350

void Cameras_InGameCamera__ApplyGraphicsSettings(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *pUVar2;
  UnityEngine_Behaviour_o *__this_00;
  
  if (DAT_05704995 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Antialiasing_GetComponent_Antialiasing);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704995 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x60), lVar1 != 0)) &&
     (pUVar2 = (__this->fields).Camera, pUVar2 != (UnityEngine_Camera_o *)0x0)) {
    UnityEngine_Camera__set_farClipPlane(pUVar2,(float)*(int *)(lVar1 + 0x14),(MethodInfo *)0x0);
    pUVar2 = (__this->fields).Camera;
    if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
      __this_00 = (UnityEngine_Behaviour_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar2,MethodInfo_Antialiasing_GetComponent_Antialiasing);
      lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x88), lVar1 != 0)) &&
         (__this_00 != (UnityEngine_Behaviour_o *)0x0)) {
        UnityEngine_Behaviour__set_enabled
                  (__this_00,(uint)(0 < *(int *)(lVar1 + 0x14)),(MethodInfo *)0x0);
        lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
        if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x118), lVar1 != 0)) &&
           (pUVar2 = (__this->fields).Camera, pUVar2 != (UnityEngine_Camera_o *)0x0)) {
          UnityEngine_Camera__set_allowHDR(pUVar2,(uint)*(byte *)(lVar1 + 0x11),(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$ApplyGeneralSettings
// il2cpp: void Cameras_InGameCamera__ApplyGeneralSettings (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4143470

void Cameras_InGameCamera__ApplyGeneralSettings(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  long lVar1;
  
  Cameras_InGameCamera__ResetDistance(__this,method);
  if (DAT_05704997 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704997 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x80), lVar1 != 0)) {
    (__this->fields).CurrentCameraMode = *(int32_t *)(lVar1 + 0x14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$ResetDistance
// il2cpp: void Cameras_InGameCamera__ResetDistance (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x41434e0

void Cameras_InGameCamera__ResetDistance(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  long lVar2;
  System_String_o *key;
  undefined8 in_RAX;
  Photon_Realtime_Player_o *player;
  Il2CppObject *value;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (DAT_05704996 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    DAT_05704996 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x30), lVar2 != 0)) {
    (__this->fields)._cameraDistance = *(float *)(lVar2 + 0x14) + 0.3;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x78);
    uStack_28 = CONCAT44((__this->fields)._cameraDistance,(undefined4)uStack_28);
    value = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,(long)&uStack_28 + 4);
    PhotonExtensions__SetCustomProperty(player,key,value,(MethodInfo *)0x0);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x30), lVar2 != 0)) {
      fVar1 = *(float *)(lVar2 + 0x14);
      if ((fVar1 == 0.0) && (!NAN(fVar1))) {
        (__this->fields)._cameraDistance = 0.0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$ResetCameraMode
// il2cpp: void Cameras_InGameCamera__ResetCameraMode (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4143630

void Cameras_InGameCamera__ResetCameraMode(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704997 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704997 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x80), lVar1 != 0)) {
    (__this->fields).CurrentCameraMode = *(int32_t *)(lVar1 + 0x14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$GetCameraDistance
// il2cpp: float Cameras_InGameCamera__GetCameraDistance (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4143690

float Cameras_InGameCamera__GetCameraDistance(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  Photon_Realtime_Player_o *player;
  bool_conflict bVar3;
  float fVar4;
  
  if (DAT_05704998 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05704998 = '\x01';
  }
  pCVar1 = (__this->fields)._follow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pCVar1 = (__this->fields)._follow;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') goto LAB_04143703;
      pCVar1 = (__this->fields)._follow;
      if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
          (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
        player = *(Photon_Realtime_Player_o **)(lVar2 + 0x80);
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          il2cpp_init_class();
        }
        fVar4 = PhotonExtensions__GetFloatProperty
                          (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x78),1.0,
                           (MethodInfo *)0x0);
        return fVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04143703:
  fVar4 = 0.0;
  if ((__this->fields).CurrentCameraMode != 2) {
    fVar4 = (__this->fields)._cameraDistance;
  }
  return fVar4;
}


// Cameras.InGameCamera$$StartShake
// il2cpp: void Cameras_InGameCamera__StartShake (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4143790

void Cameras_InGameCamera__StartShake(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  (__this->fields)._shakeTimeLeft = 1.0;
  (__this->fields)._currentShakeDistance = 10.0;
  *(undefined1 *)&(__this->fields)._shakeFlip = 0;
  return;
}


// Cameras.InGameCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_InGameCamera__SetDefaultCameraPosition (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x41437b0

void Cameras_InGameCamera__SetDefaultCameraPosition
               (Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_String_o *tag;
  Utility_BaseComponentCache_o *pUVar2;
  bool_conflict bVar3;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Quaternion_Fields value;
  
  if (DAT_05704999 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_MapTags);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704999 = '\x01';
  }
  if (*(int *)(TypeInfo_MapTags + 0xe4) == 0) {
    il2cpp_init_class();
  }
  tag = (System_String_o *)**(undefined8 **)(TypeInfo_MapTags + 0xb8);
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag(tag,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).Cache;
  if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar5 = (pUVar2->fields).Transform;
    if ((char)bVar3 == '\0') {
      if (DAT_056fde1f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde1f = '\x01';
      }
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        UVar6.fields.x = (float)uVar1 * 100.0;
        UVar6.fields.y = (float)((ulong)uVar1 >> 0x20) * 100.0;
        UVar6.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 100.0;
        UnityEngine_Transform__set_position(pUVar5,UVar6,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).Cache;
        if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar5 = (pUVar2->fields).Transform;
          if (DAT_056fde1e == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Quaternion);
            DAT_056fde1e = '\x01';
          }
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            value = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
            goto LAB_0414398b;
          }
        }
      }
    }
    else if (((x != (UnityEngine_Object_o *)0x0) &&
             (pUVar4 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_Transform_o *)0x0)) &&
            (UVar6 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0),
            pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_position(pUVar5,UVar6,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).Cache;
      if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
        pUVar5 = (pUVar2->fields).Transform;
        pUVar4 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        if ((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
           (value = (UnityEngine_Quaternion_Fields)
                    UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_Transform_o *)0x0)) {
LAB_0414398b:
          UnityEngine_Transform__set_rotation
                    (pUVar5,(UnityEngine_Quaternion_o)value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$SetFollow
// il2cpp: void Cameras_InGameCamera__SetFollow (Cameras_InGameCamera_o* __this, Characters_BaseCharacter_o* character, bool resetRotation, const MethodInfo* method);
// 0x41439a0

void Cameras_InGameCamera__SetFollow
               (Cameras_InGameCamera_o *__this,Characters_BaseCharacter_o *character,
               bool_conflict resetRotation,MethodInfo *method)

{
  Characters_BaseCharacter_o **ppCVar1;
  byte bVar2;
  byte bVar3;
  Characters_BaseCharacter_o *x;
  UI_InGameMenu_o *pUVar4;
  UI_HUDBottomHandler_o *pUVar5;
  Characters_BaseCharacter_c *pCVar6;
  Utility_BaseComponentCache_o *pUVar7;
  long lVar8;
  UnityEngine_Transform_o *pUVar9;
  bool_conflict bVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  Photon_Realtime_Player_o *pPVar13;
  Il2CppObject *pIVar14;
  UnityEngine_Transform_o *pUVar15;
  System_String_o *pSVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Quaternion_o UVar23;
  float local_68;
  float fStack_64;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (DAT_0570499a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_0570499a = '\x01';
  }
  ppCVar1 = &(__this->fields)._follow;
  x = (__this->fields)._follow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)character,(MethodInfo *)0x0)
  ;
  *ppCVar1 = character;
  il2cpp_runtime_glue(ppCVar1);
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)*ppCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                     );
  if ((char)bVar11 != '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar13 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar12 = PhotonExtensions__GetIntProperty
                       (pPVar13,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),-1,
                        (MethodInfo *)0x0);
    if ((iVar12 != -1) &&
       (fVar17 = UnityEngine_Time__get_time((MethodInfo *)0x0),
       1.0 <= fVar17 - (__this->fields)._lastChangeSpectateID)) {
      fVar17 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastChangeSpectateID = fVar17;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar13 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar16 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88);
      local_34 = 0xffffffff;
      pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
      PhotonExtensions__SetCustomProperty(pPVar13,pSVar16,pIVar14,(MethodInfo *)0x0);
    }
    pUVar4 = (__this->fields)._menu;
    if ((pUVar4 != (UI_InGameMenu_o *)0x0) &&
       (pUVar5 = (pUVar4->fields).HUDBottomHandler, pUVar5 != (UI_HUDBottomHandler_o *)0x0)) {
      UI_HUDBottomHandler__SetBottomHUD(pUVar5,(Characters_BaseCharacter_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    goto LAB_041443a9;
  }
  if (character == (Characters_BaseCharacter_o *)0x0) {
LAB_04143c22:
    (__this->fields)._heightDistance = 1.0;
    (__this->fields)._anchorDistance = 1.0;
joined_r0x04143cff:
    if ((char)resetRotation == '\0') goto LAB_04143d05;
LAB_04143c39:
    pUVar7 = (__this->fields).Cache;
    if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
       (character == (Characters_BaseCharacter_o *)0x0)) goto LAB_041443a9;
    pUVar15 = (pUVar7->fields).Transform;
    bVar11 = Characters_BaseCharacter__IsMine(character,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      UVar23 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)0x0);
      fVar19 = UVar23.fields.z;
      fVar20 = UVar23.fields.w;
      fVar17 = UVar23.fields.x;
      fVar18 = UVar23.fields.y;
    }
    else {
      if (((*ppCVar1 == (Characters_BaseCharacter_o *)0x0) ||
          (lVar8 = *(long *)&((*ppCVar1)->fields).Dead, lVar8 == 0)) ||
         (pUVar9 = *(UnityEngine_Transform_o **)(lVar8 + 0x10),
         pUVar9 == (UnityEngine_Transform_o *)0x0)) goto LAB_041443a9;
      UVar23 = UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UVar23 = Utility_Util__ConstrainedToY(UVar23,(MethodInfo *)0x0);
      fVar19 = UVar23.fields.z;
      fVar20 = UVar23.fields.w;
      fVar17 = UVar23.fields.x;
      fVar18 = UVar23.fields.y;
    }
    if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto LAB_041443a9;
    UVar23.fields.y = fVar18;
    UVar23.fields.x = fVar17;
    UVar23.fields.w = fVar20;
    UVar23.fields.z = fVar19;
    UnityEngine_Transform__set_rotation(pUVar15,UVar23,(MethodInfo *)0x0);
  }
  else {
    pCVar6 = character->klass;
    bVar2 = (pCVar6->_2).naturalAligment;
    bVar3 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar3 <= bVar2) && ((pCVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_Human)) {
      (__this->fields)._heightDistance = 0.64;
      (__this->fields)._anchorDistance = 0.64;
      goto joined_r0x04143cff;
    }
    bVar3 = (TypeInfo_BaseShifter->_2).naturalAligment;
    if ((bVar2 < bVar3) || ((pCVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_BaseShifter)) {
      bVar3 = (TypeInfo_BasicTitan->_2).naturalAligment;
      if ((bVar2 < bVar3) || ((pCVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_BasicTitan))
      goto LAB_04143c22;
      pSVar16 = character[2].fields.FeedVictimName;
      if ((pSVar16 == (System_String_o *)0x0) ||
         (pUVar15 = pSVar16[2].monitor, pUVar15 == (UnityEngine_Transform_o *)0x0))
      goto LAB_041443a9;
      UVar21 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
      lVar8 = *(long *)&(character->fields).Dead;
      if ((lVar8 == 0) ||
         (pUVar9 = *(UnityEngine_Transform_o **)(lVar8 + 0x10),
         pUVar9 == (UnityEngine_Transform_o *)0x0)) goto LAB_041443a9;
      UVar22 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      if (DAT_056fdea6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdea6 = '\x01';
      }
      local_68 = UVar21.fields.x;
      fStack_64 = UVar21.fields.y;
      local_68 = local_68 - UVar22.fields.x;
      fStack_64 = fStack_64 - UVar22.fields.y;
      fVar17 = UVar21.fields.z - UVar22.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar17 = fVar17 * fVar17 + fStack_64 * fStack_64 + local_68 * local_68;
      if (fVar17 < 0.0) {
        fVar17 = sqrtf(fVar17);
      }
      else {
        fVar17 = SQRT(fVar17);
      }
      (__this->fields)._anchorDistance = fVar17 * 0.25;
      UVar21 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
      lVar8 = *(long *)&(character->fields).Dead;
      if ((lVar8 == 0) ||
         (pUVar15 = *(UnityEngine_Transform_o **)(lVar8 + 0x10),
         pUVar15 == (UnityEngine_Transform_o *)0x0)) goto LAB_041443a9;
      UVar22 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
      if (DAT_056fdea6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdea6 = '\x01';
      }
      local_68 = UVar21.fields.x;
      fStack_64 = UVar21.fields.y;
      local_68 = local_68 - UVar22.fields.x;
      fStack_64 = fStack_64 - UVar22.fields.y;
      fVar17 = UVar21.fields.z - UVar22.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar17 = fVar17 * fVar17 + fStack_64 * fStack_64 + local_68 * local_68;
      if (0.0 <= fVar17) {
        (__this->fields)._heightDistance = SQRT(fVar17) * 1.39;
        goto joined_r0x04143cff;
      }
      fVar17 = sqrtf(fVar17);
      (__this->fields)._heightDistance = fVar17 * 1.39;
    }
    else {
      pUVar15 = (UnityEngine_Transform_o *)
                (*(pCVar6->vtable)._67_GetCameraAnchor.methodPtr)(character);
      if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto LAB_041443a9;
      UVar21 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
      lVar8 = *(long *)&(character->fields).Dead;
      if ((lVar8 == 0) ||
         (pUVar15 = *(UnityEngine_Transform_o **)(lVar8 + 0x10),
         pUVar15 == (UnityEngine_Transform_o *)0x0)) goto LAB_041443a9;
      UVar22 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
      if (DAT_056fdea6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdea6 = '\x01';
      }
      local_68 = UVar21.fields.x;
      fStack_64 = UVar21.fields.y;
      local_68 = local_68 - UVar22.fields.x;
      fStack_64 = fStack_64 - UVar22.fields.y;
      fVar17 = UVar21.fields.z - UVar22.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar17 = fVar17 * fVar17 + fStack_64 * fStack_64 + local_68 * local_68;
      if (fVar17 < 0.0) {
        fVar17 = sqrtf(fVar17);
      }
      else {
        fVar17 = SQRT(fVar17);
      }
      (__this->fields)._anchorDistance = fVar17 * 0.25;
      pUVar15 = (UnityEngine_Transform_o *)
                (*(character->klass->vtable)._67_GetCameraAnchor.methodPtr)(character);
      if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto LAB_041443a9;
      UVar21 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
      lVar8 = *(long *)&(character->fields).Dead;
      if ((lVar8 == 0) ||
         (pUVar15 = *(UnityEngine_Transform_o **)(lVar8 + 0x10),
         pUVar15 == (UnityEngine_Transform_o *)0x0)) goto LAB_041443a9;
      UVar22 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
      if (DAT_056fdea6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdea6 = '\x01';
      }
      local_68 = UVar21.fields.x;
      fStack_64 = UVar21.fields.y;
      local_68 = local_68 - UVar22.fields.x;
      fStack_64 = fStack_64 - UVar22.fields.y;
      fVar17 = UVar21.fields.z - UVar22.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar17 = fVar17 * fVar17 + fStack_64 * fStack_64 + local_68 * local_68;
      if (fVar17 < 0.0) {
        fVar17 = sqrtf(fVar17);
        (__this->fields)._heightDistance = fVar17 * 0.35;
      }
      else {
        (__this->fields)._heightDistance = SQRT(fVar17) * 0.35;
      }
    }
    if ((char)resetRotation != '\0') goto LAB_04143c39;
LAB_04143d05:
    if (character == (Characters_BaseCharacter_o *)0x0) goto LAB_041443a9;
  }
  bVar11 = Characters_BaseCharacter__IsMine(character,(MethodInfo *)0x0);
  pUVar4 = (__this->fields)._menu;
  if ((pUVar4 == (UI_InGameMenu_o *)0x0) ||
     (pUVar5 = (pUVar4->fields).HUDBottomHandler, pUVar5 == (UI_HUDBottomHandler_o *)0x0))
  goto LAB_041443a9;
  if ((char)bVar11 == '\0') {
    UI_HUDBottomHandler__SetBottomHUD(pUVar5,(Characters_BaseCharacter_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      fVar17 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      if (fVar17 - (__this->fields)._lastChangeSpectateID < 1.0) goto LAB_04143ed4;
      fVar17 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastChangeSpectateID = fVar17;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar13 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar8 = *(long *)&(character->fields).Dead;
    if (((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x20), lVar8 == 0)) ||
       (lVar8 = *(long *)(lVar8 + 0x80), lVar8 == 0)) goto LAB_041443a9;
    pSVar16 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88);
    local_3c = *(undefined4 *)(lVar8 + 0x18);
    pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_3c);
LAB_04143eca:
    PhotonExtensions__SetCustomProperty(pPVar13,pSVar16,pIVar14,(MethodInfo *)0x0);
  }
  else {
    UI_HUDBottomHandler__SetBottomHUD(pUVar5,character,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
LAB_04143d7d:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar13 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar16 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88);
      local_38 = 0xffffffff;
      pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
      goto LAB_04143eca;
    }
    fVar17 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (1.0 <= fVar17 - (__this->fields)._lastChangeSpectateID) {
      fVar17 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastChangeSpectateID = fVar17;
      goto LAB_04143d7d;
    }
  }
LAB_04143ed4:
  pUVar4 = (__this->fields)._menu;
  if (pUVar4 != (UI_InGameMenu_o *)0x0) {
    (pUVar4->fields)._spectateUpdateTimeLeft = 0.0;
    return;
  }
LAB_041443a9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$Awake
// il2cpp: void Cameras_InGameCamera__Awake (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x41443b0

void Cameras_InGameCamera__Awake(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_GameObject_o *__this_00;
  UI_SnapshotHandler_o *pUVar2;
  Characters_CameraDetection_o *__this_01;
  
  if (DAT_0570499b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CameraDetection);
    il2cpp_init_method_metadata(&MethodInfo_SnapshotHandler_AddComponent_SnapshotHandler);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_0570499b = '\x01';
  }
  Cameras_BaseCamera__Awake((Cameras_BaseCamera_o *)__this,method);
  Cameras_InGameCamera__ApplyGraphicsSettings(__this,method);
  Cameras_InGameCamera__ResetDistance(__this,method);
  if (DAT_05704997 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704997 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x80) != 0)) {
    (__this->fields).CurrentCameraMode = *(int32_t *)(*(long *)(lVar1 + 0x80) + 0x14);
    if (*(long *)(lVar1 + 0x58) != 0) {
      if (*(char *)(*(long *)(lVar1 + 0x58) + 0x11) != '\0') {
        __this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_041444eb;
        pUVar2 = (UI_SnapshotHandler_o *)
                 UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_SnapshotHandler_AddComponent_SnapshotHandler);
        (__this->fields)._snapshotHandler = pUVar2;
        il2cpp_runtime_glue(&(__this->fields)._snapshotHandler,pUVar2);
      }
      __this_01 = (Characters_CameraDetection_o *)il2cpp_runtime_glue(TypeInfo_CameraDetection);
      Characters_CameraDetection___ctor(__this_01,__this,(MethodInfo *)0x0);
      (__this->fields)._detection = __this_01;
      il2cpp_runtime_glue(&(__this->fields)._detection,__this_01);
      return;
    }
  }
LAB_041444eb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$TakeSnapshot
// il2cpp: void Cameras_InGameCamera__TakeSnapshot (Cameras_InGameCamera_o* __this, UnityEngine_Vector3_o position, int32_t damage, const MethodInfo* method);
// 0x41444f0

void Cameras_InGameCamera__TakeSnapshot
               (Cameras_InGameCamera_o *__this,UnityEngine_Vector3_o position,int32_t damage,
               MethodInfo *method)

{
  UI_SnapshotHandler_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_0570499c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570499c = '\x01';
  }
  pUVar1 = (__this->fields)._snapshotHandler;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pUVar1 = (__this->fields)._snapshotHandler;
  if (pUVar1 != (UI_SnapshotHandler_o *)0x0) {
    UI_SnapshotHandler__TakeSnapshot(pUVar1,position,damage,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$Start
// il2cpp: void Cameras_InGameCamera__Start (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4144590

void Cameras_InGameCamera__Start(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Il2CppClass *pIVar3;
  UI_InGameMenu_o *pUVar4;
  
  if (DAT_0570499d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570499d = '\x01';
  }
  pIVar3 = TypeInfo_InGameManager;
  pUVar4 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pUVar4 == (UI_InGameMenu_o *)0x0) {
    (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if (((((GameManagers_InGameManager_c *)pUVar4->klass)->_2).naturalAligment < bVar1) ||
       ((((GameManagers_InGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        TypeInfo_InGameManager)) goto LAB_04144704;
    (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)pUVar4;
    if (((((GameManagers_InGameManager_c *)pUVar4->klass)->_2).naturalAligment < bVar1) ||
       ((((GameManagers_InGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        pIVar3)) goto LAB_04144704;
  }
  il2cpp_runtime_glue(&(__this->fields)._inGameManager);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (__this->fields)._input = *(Settings_GeneralInputSettings_o **)(lVar2 + 0x20);
  il2cpp_runtime_glue(&(__this->fields)._input);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar4 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    pIVar3 = TypeInfo_InGameMenu;
  }
  else {
    pUVar4 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    pIVar3 = TypeInfo_InGameMenu;
  }
  TypeInfo_InGameMenu = pIVar3;
  if (pUVar4 == (UI_InGameMenu_o *)0x0) {
    (__this->fields)._menu = (UI_InGameMenu_o *)0x0;
LAB_0414472f:
    il2cpp_runtime_glue(&(__this->fields)._menu);
    return;
  }
  bVar1 = (pIVar3->_2).naturalAligment;
  if ((bVar1 <= (((GameManagers_InGameManager_c *)pUVar4->klass)->_2).naturalAligment) &&
     ((((GameManagers_InGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      pIVar3)) {
    (__this->fields)._menu = pUVar4;
    if ((bVar1 <= (((GameManagers_InGameManager_c *)pUVar4->klass)->_2).naturalAligment) &&
       ((((GameManagers_InGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        pIVar3)) goto LAB_0414472f;
  }
LAB_04144704:
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pUVar4,pIVar3);
}


// Cameras.InGameCamera$$SyncCustomPosition
// il2cpp: void Cameras_InGameCamera__SyncCustomPosition (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4144750

void Cameras_InGameCamera__SyncCustomPosition(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Camera_o *__this_00;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  float value;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value_00;
  
  if (DAT_0570499e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_0570499e = '\x01';
  }
  __this_00 = (__this->fields).Camera;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x3c);
  if (value <= 0.0) {
    value = 50.0;
  }
  else if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    value = *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x3c);
  }
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__set_fieldOfView(__this_00,value,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).Cache;
    if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
      pUVar3 = (pUVar2->fields).Transform;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position
                  (pUVar3,(UnityEngine_Vector3_o)
                          *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x44),
                   (MethodInfo *)0x0);
        pUVar2 = (__this->fields).Cache;
        if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar3 = (pUVar2->fields).Transform;
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x50);
          euler.fields.x = (float)uVar1 * 0.017453292;
          euler.fields.y = (float)((ulong)uVar1 >> 0x20) * 0.017453292;
          euler.fields.z = *(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x58) * 0.017453292;
          value_00 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_rotation(pUVar3,value_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$UpdateMapLights
// il2cpp: void Cameras_InGameCamera__UpdateMapLights (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4144880

void Cameras_InGameCamera__UpdateMapLights(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *cameraPosition;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  Map_MapLight_o *__this_03;
  
  if (DAT_0570499f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapLight_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapLight__GetEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_0570499f = '\x01';
  }
  pSVar3 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  __this_03 = (Map_MapLight_o *)0x0;
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    cameraPosition = (pUVar1->fields).Transform;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(System_Collections_Generic_List_object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x30);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 __this_00,MethodInfo_List_1_T__Enumerator_Map_MapLight__GetEnumerator);
      while( true ) {
        __this_01.fields._8_8_ = pIVar4;
        __this_01.fields._list = pSVar3;
        __this_01.fields._current = (Il2CppObject *)__this_03;
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
        if ((char)bVar2 == '\0') {
          __this_02.fields._8_8_ = pIVar4;
          __this_02.fields._list = pSVar3;
          __this_02.fields._current = (Il2CppObject *)__this_03;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
          return;
        }
        if (__this_03 == (Map_MapLight_o *)0x0) break;
        Map_MapLight__UpdateCull(__this_03,cameraPosition,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$FixedUpdate
// il2cpp: void Cameras_InGameCamera__FixedUpdate (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4144a10

void Cameras_InGameCamera__FixedUpdate(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Characters_CameraDetection_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  Cameras_InGameCamera__UpdateMapLights(__this,method);
  pCVar1 = (__this->fields)._detection;
  if (pCVar1 != (Characters_CameraDetection_o *)0x0) {
    vtable_dispatch = (pCVar1->klass->vtable)._5_OnFixedUpdate.methodPtr;
    (*vtable_dispatch)
              (pCVar1,(pCVar1->klass->vtable)._5_OnFixedUpdate.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$LateUpdate
// il2cpp: void Cameras_InGameCamera__LateUpdate (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4144a40

void Cameras_InGameCamera__LateUpdate(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  GameManagers_InGameManager_o *pGVar5;
  Settings_GeneralInputSettings_o *pSVar6;
  Settings_KeybindSetting_o *__this_00;
  UI_InGameMenu_o *pUVar7;
  UI_HUDBottomHandler_o *pUVar8;
  Characters_BaseCharacter_o *pCVar9;
  Characters_BaseCharacter_c *pCVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  Characters_BaseCharacter_o *pCVar13;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  Characters_BaseCharacter_o *pCVar14;
  Utility_Cycle_InGameCamera_SpecateMode__o *pUVar15;
  float fVar16;
  
  if (DAT_057049a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_InGameCamera_SpecateMode_Current);
    il2cpp_init_method_metadata(&MethodInfo_InGameCamera_SpecateMode_Next);
    il2cpp_init_method_metadata(&MethodInfo_InGameCamera_SpecateMode_Set);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_057049a0 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto LAB_04144a6f;
LAB_04144cc4:
    il2cpp_init_class();
    lVar4 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    cVar1 = *(char *)(lVar4 + 0x38);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto LAB_04144cc4;
LAB_04144a6f:
    lVar4 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    cVar1 = *(char *)(lVar4 + 0x38);
  }
  if (cVar1 != '\0') {
LAB_04144cf7:
    Cameras_InGameCamera__SyncCustomPosition(__this,method);
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x39);
  }
  else {
    cVar1 = *(char *)(lVar4 + 0x39);
  }
  if (cVar1 != '\0') goto LAB_04144cf7;
  pGVar5 = (__this->fields)._inGameManager;
  if (pGVar5 == (GameManagers_InGameManager_o *)0x0) goto LAB_04144f60;
  pCVar14 = (__this->fields)._follow;
  pCVar13 = (pGVar5->fields).CurrentCharacter;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)pCVar13,
                      (MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    pGVar5 = (__this->fields)._inGameManager;
    if (pGVar5 == (GameManagers_InGameManager_o *)0x0) goto LAB_04144f60;
    pCVar14 = (pGVar5->fields).CurrentCharacter;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      pGVar5 = (__this->fields)._inGameManager;
      if (pGVar5 == (GameManagers_InGameManager_o *)0x0) goto LAB_04144f60;
      Cameras_InGameCamera__SetFollow(__this,(pGVar5->fields).CurrentCharacter,1,in_RCX);
    }
  }
  pGVar5 = (__this->fields)._inGameManager;
  if (pGVar5 == (GameManagers_InGameManager_o *)0x0) goto LAB_04144f60;
  pCVar14 = (pGVar5->fields).CurrentCharacter;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar11 == '\0') {
    pUVar15 = (__this->fields).SpecMode;
    if (pUVar15 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto LAB_04144f60;
    iVar12 = 0;
LAB_04144d23:
    Utility_Cycle<Int32Enum>__Set((Utility_Cycle_T__o *)pUVar15,iVar12,MethodInfo_InGameCamera_SpecateMode_Set);
LAB_04144d28:
    pUVar15 = (__this->fields).SpecMode;
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar11 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if (((char)bVar11 != '\0') ||
       (bVar11 = UI_InGameMenu__InMenu((MethodInfo *)0x0), (char)bVar11 != '\0')) goto LAB_04144d28;
    pSVar6 = (__this->fields)._input;
    if ((pSVar6 == (Settings_GeneralInputSettings_o *)0x0) ||
       (__this_00 = (pSVar6->fields).ChangeCamera, __this_00 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_04144f60;
    bVar11 = Settings_KeybindSetting__GetKeyDown(__this_00,0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') goto LAB_04144d28;
    pCVar14 = (__this->fields)._follow;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      pUVar15 = (__this->fields).SpecMode;
      if (pUVar15 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto LAB_04144f60;
      iVar12 = Utility_Cycle<Int32Enum>__Current
                         ((Utility_Cycle_T__o *)pUVar15,(MethodInfo_2FA17F0 *)MethodInfo_InGameCamera_SpecateMode_Current);
      if (iVar12 == 0) {
        pUVar15 = (__this->fields).SpecMode;
        if (pUVar15 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto LAB_04144f60;
        iVar12 = 2;
        goto LAB_04144d23;
      }
    }
    pUVar15 = (__this->fields).SpecMode;
    if (pUVar15 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto LAB_04144f60;
    Utility_Cycle<Int32Enum>__Next((Utility_Cycle_T__o *)pUVar15,MethodInfo_InGameCamera_SpecateMode_Next);
    pUVar15 = (__this->fields).SpecMode;
  }
  if (pUVar15 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto LAB_04144f60;
  iVar12 = Utility_Cycle<Int32Enum>__Current
                     ((Utility_Cycle_T__o *)pUVar15,(MethodInfo_2FA17F0 *)MethodInfo_InGameCamera_SpecateMode_Current);
  if (iVar12 == 2) {
    Cameras_InGameCamera__SetFollow(__this,(Characters_BaseCharacter_o *)0x0,1,in_RCX);
    pCVar14 = (__this->fields)._follow;
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pCVar14 = (__this->fields)._follow;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)0x0;
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      Cameras_InGameCamera__FindNextSpectate(__this,method_00);
    }
    pCVar14 = (__this->fields)._follow;
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar11 == '\0') {
    pUVar15 = (__this->fields).SpecMode;
    if (pUVar15 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) goto LAB_04144f60;
    pCVar14 = MethodInfo_InGameCamera_SpecateMode_Current;
    iVar12 = Utility_Cycle<Int32Enum>__Current
                       ((Utility_Cycle_T__o *)pUVar15,(MethodInfo_2FA17F0 *)MethodInfo_InGameCamera_SpecateMode_Current);
    if (iVar12 == 2) {
      Cameras_InGameCamera__UpdateFreeCam(__this,(MethodInfo *)pCVar14);
    }
    goto LAB_04144ed0;
  }
  pGVar5 = (__this->fields)._inGameManager;
  if (pGVar5 == (GameManagers_InGameManager_o *)0x0) goto LAB_04144f60;
  pCVar13 = (__this->fields)._follow;
  pCVar14 = (pGVar5->fields).CurrentCharacter;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pCVar13,(UnityEngine_Object_o *)pCVar14,
                      (MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    Cameras_InGameCamera__UpdateSpectate(__this,(MethodInfo *)pCVar14);
  }
  else {
    Cameras_InGameCamera__UpdateMain(__this,(MethodInfo *)pCVar14);
    pCVar13 = (__this->fields)._follow;
    if (pCVar13 == (Characters_BaseCharacter_o *)0x0) goto LAB_04144f60;
    if (*(char *)&(pCVar13->fields).FeedVictimName != '\0') {
      pUVar7 = (__this->fields)._menu;
      if ((pUVar7 == (UI_InGameMenu_o *)0x0) ||
         (pUVar8 = (pUVar7->fields).HUDBottomHandler, pUVar8 == (UI_HUDBottomHandler_o *)0x0))
      goto LAB_04144f60;
      pCVar14 = (Characters_BaseCharacter_o *)0x0;
      UI_HUDBottomHandler__SetBottomHUD(pUVar8,(Characters_BaseCharacter_o *)0x0,(MethodInfo *)0x0);
    }
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x90), lVar4 == 0)) goto LAB_04144f60;
  if (*(char *)(lVar4 + 0x11) == '\0') {
    pCVar9 = (__this->fields)._follow;
    pCVar13 = (Characters_BaseCharacter_o *)0x0;
    if (pCVar9 != (Characters_BaseCharacter_o *)0x0) {
      pCVar10 = pCVar9->klass;
      bVar2 = (TypeInfo_Human->_2).naturalAligment;
      if (((bVar2 <= (pCVar10->_2).naturalAligment) &&
          ((pCVar10->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) &&
         (fVar16 = Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)pCVar14),
         0.0 < fVar16)) {
        Cameras_InGameCamera__UpdateObstacles(__this,(MethodInfo *)pCVar14);
      }
      goto LAB_04144e97;
    }
  }
  else {
LAB_04144e97:
    pCVar13 = (__this->fields)._follow;
  }
  if (pCVar13 == (Characters_BaseCharacter_o *)0x0) {
LAB_04144f60:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(char *)&(pCVar13->fields).FeedVictimName != '\0') {
    pUVar7 = (__this->fields)._menu;
    if ((pUVar7 == (UI_InGameMenu_o *)0x0) ||
       (pUVar8 = (pUVar7->fields).HUDBottomHandler, pUVar8 == (UI_HUDBottomHandler_o *)0x0))
    goto LAB_04144f60;
    pCVar14 = (Characters_BaseCharacter_o *)0x0;
    UI_HUDBottomHandler__SetBottomHUD(pUVar8,(Characters_BaseCharacter_o *)0x0,(MethodInfo *)0x0);
  }
LAB_04144ed0:
  Cameras_InGameCamera__UpdateFOV(__this,(MethodInfo *)pCVar14);
  Cameras_InGameCamera__UpdateNapeLockImage(__this,(MethodInfo *)pCVar14);
  return;
}


// Cameras.InGameCamera$$UpdateNapeLockImage
// il2cpp: void Cameras_InGameCamera__UpdateNapeLockImage (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4147710

void Cameras_InGameCamera__UpdateNapeLockImage(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BaseCharacter_o *pCVar2;
  GameManagers_InGameManager_o *pGVar3;
  Characters_BaseCharacter_o *y;
  Characters_BaseTitan_o *pCVar4;
  UI_InGameMenu_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  System_Action_Hashtable__o *pSVar7;
  long lVar8;
  UnityEngine_Camera_o *__this_00;
  bool_conflict bVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o position;
  float local_38;
  float fStack_34;
  
  if (DAT_057049a1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057049a1 = '\x01';
  }
  pCVar2 = (__this->fields)._follow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pGVar3 = (__this->fields)._inGameManager;
    if (pGVar3 == (GameManagers_InGameManager_o *)0x0) goto LAB_04147969;
    pCVar2 = (__this->fields)._follow;
    y = (pGVar3->fields).CurrentCharacter;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if (((char)bVar9 != '\0') && ((char)(__this->fields)._napeLock != '\0')) {
      pCVar4 = (__this->fields)._napeLockTitan;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        pUVar5 = (__this->fields)._menu;
        if ((pUVar5 != (UI_InGameMenu_o *)0x0) &&
           (pUVar6 = (pUVar5->fields).NapeLock, pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar6,1,(MethodInfo *)0x0);
          pCVar4 = (__this->fields)._napeLockTitan;
          if ((pCVar4 != (Characters_BaseTitan_o *)0x0) &&
             ((pSVar7 = (pCVar4->fields).OnPlayerPropertiesChanged,
              pSVar7 != (System_Action_Hashtable__o *)0x0 &&
              (pUVar10 = (UnityEngine_Transform_o *)(pSVar7->fields).method_code,
              pUVar10 != (UnityEngine_Transform_o *)0x0)))) {
            UVar11 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
            pCVar4 = (__this->fields)._napeLockTitan;
            if ((pCVar4 != (Characters_BaseTitan_o *)0x0) &&
               (pSVar7 = (pCVar4->fields).OnPlayerPropertiesChanged,
               pSVar7 != (System_Action_Hashtable__o *)0x0)) {
              pUVar10 = (UnityEngine_Transform_o *)(pSVar7->fields).method_code;
              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                UVar12 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
                pCVar4 = (__this->fields)._napeLockTitan;
                if (((pCVar4 != (Characters_BaseTitan_o *)0x0) &&
                    (lVar8 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18), lVar8 != 0)) &&
                   (__this_00 = *(UnityEngine_Camera_o **)(lVar8 + 0x20),
                   __this_00 != (UnityEngine_Camera_o *)0x0)) {
                  fVar1 = *(float *)((long)&(pCVar4->fields).TitanColliderToggler + 4);
                  local_38 = UVar11.fields.x;
                  fStack_34 = UVar11.fields.y;
                  position.fields.y = fStack_34 - UVar12.fields.y * fVar1;
                  position.fields.x = local_38 - UVar12.fields.x * fVar1;
                  position.fields.z = UVar11.fields.z - UVar12.fields.z * fVar1;
                  UVar11 = UnityEngine_Camera__WorldToScreenPoint
                                     (__this_00,position,(MethodInfo *)0x0);
                  pUVar5 = (__this->fields)._menu;
                  if (pUVar5 != (UI_InGameMenu_o *)0x0) {
                    pUVar6 = (pUVar5->fields).NapeLock;
                    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar10 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                        UnityEngine_Transform__set_position(pUVar10,UVar11,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_04147969;
      }
    }
  }
  pUVar5 = (__this->fields)._menu;
  if ((pUVar5 != (UI_InGameMenu_o *)0x0) &&
     (pUVar6 = (pUVar5->fields).NapeLock, pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
    return;
  }
LAB_04147969:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$UpdateMain
// il2cpp: void Cameras_InGameCamera__UpdateMain (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4144ff0

void Cameras_InGameCamera__UpdateMain(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o **ppUVar1;
  Characters_BaseTitan_o **ppCVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  Settings_GeneralInputSettings_o *pSVar7;
  Settings_KeybindSetting_o *pSVar8;
  Characters_BaseCharacter_o *pCVar9;
  UnityEngine_Camera_o *__this_00;
  Utility_BaseComponentCache_o *pUVar10;
  System_Action_Hashtable__o *pSVar11;
  char cVar12;
  bool_conflict bVar13;
  int32_t iVar14;
  uint uVar15;
  int32_t iVar16;
  long lVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *pUVar19;
  Characters_BaseTitan_o *pCVar20;
  MethodInfo *pMVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  UnityEngine_Vector3_o UVar29;
  UnityEngine_Vector3_o UVar30;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o worldPosition;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Quaternion_o UVar31;
  UnityEngine_Vector3_o axis;
  float local_b8;
  float fStack_b4;
  float local_a8;
  float fStack_a4;
  float local_88;
  float local_78;
  float fStack_74;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  
  if (DAT_057049a2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_CameraInputMode_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&"Mouse Y");
    il2cpp_init_method_metadata(&"Mouse X");
    DAT_057049a2 = '\x01';
    if (*(int *)(TypeInfo_ChatManager + 0xe4) != 0) goto LAB_04145028;
LAB_04145147:
    il2cpp_init_class();
    bVar13 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    cVar12 = (char)bVar13;
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) goto LAB_04145147;
LAB_04145028:
    bVar13 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    cVar12 = (char)bVar13;
  }
  if ((cVar12 == '\0') && (bVar13 = UI_InGameMenu__InMenu((MethodInfo *)0x0), (char)bVar13 == '\0'))
  {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar17 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      if (*(char *)(lVar17 + 0x68) != '\0') goto LAB_0414506e;
LAB_04145179:
      pSVar7 = (__this->fields)._input;
      if ((pSVar7 == (Settings_GeneralInputSettings_o *)0x0) ||
         (pSVar8 = (pSVar7->fields).ChangeCamera, pSVar8 == (Settings_KeybindSetting_o *)0x0))
      goto LAB_04146052;
      bVar13 = Settings_KeybindSetting__GetKeyDown(pSVar8,0,(MethodInfo *)0x0);
      if ((char)bVar13 != '\0') {
        iVar6 = (__this->fields).CurrentCameraMode;
        if (iVar6 == 1) {
          (__this->fields).CurrentCameraMode = 2;
        }
        else if (iVar6 == 0) {
          (__this->fields).CurrentCameraMode = 1;
        }
        else {
          (__this->fields).CurrentCameraMode = 0;
        }
      }
    }
    else {
      lVar17 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      if (*(char *)(lVar17 + 0x68) == '\0') goto LAB_04145179;
LAB_0414506e:
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
        lVar17 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      }
      iVar14 = System_Nullable<Int32Enum>__get_Value
                         ((System_Nullable_Int32Enum__o)(lVar17 + 0x68),MethodInfo_CameraInputMode_get_Value);
      (__this->fields).CurrentCameraMode = iVar14;
    }
    lVar17 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x28), lVar17 == 0)) ||
       (pSVar8 = *(Settings_KeybindSetting_o **)(lVar17 + 0x90),
       pSVar8 == (Settings_KeybindSetting_o *)0x0)) goto LAB_04146052;
    method = (MethodInfo *)0x0;
    bVar13 = Settings_KeybindSetting__GetKeyDown(pSVar8,0,(MethodInfo *)0x0);
    if (((char)bVar13 == '\0') ||
       (bVar5 = (byte)(__this->fields)._napeLock, *(byte *)&(__this->fields)._napeLock = bVar5 ^ 1,
       bVar5 != 0)) {
      cVar12 = (char)(__this->fields)._napeLock;
    }
    else {
      method = (MethodInfo *)Cameras_InGameCamera__GetNearestTitan(__this,method);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar20 = (Characters_BaseTitan_o *)0x0;
      bVar13 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        pCVar9 = (__this->fields)._follow;
        if (((pCVar9 == (Characters_BaseCharacter_o *)0x0) ||
            (lVar17 = *(long *)&(pCVar9->fields).Dead, lVar17 == 0)) ||
           (pUVar19 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
           pUVar19 == (UnityEngine_Transform_o *)0x0)) goto LAB_04146052;
        UVar29 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
        if ((((Characters_BaseTitan_o *)method == (Characters_BaseTitan_o *)0x0) ||
            (lVar17 = *(long *)&(((Characters_BaseTitan_o *)method)->fields).Dead, lVar17 == 0)) ||
           (pUVar19 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
           pUVar19 == (UnityEngine_Transform_o *)0x0)) goto LAB_04146052;
        pCVar20 = (Characters_BaseTitan_o *)0x0;
        UVar30 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
        if (DAT_056fdea6 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fdea6 = '\x01';
        }
        local_78 = UVar29.fields.x;
        fStack_74 = UVar29.fields.y;
        fStack_74 = fStack_74 - UVar30.fields.y;
        fVar22 = UVar29.fields.z - UVar30.fields.z;
        local_78 = local_78 - UVar30.fields.x;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
        }
        fVar22 = local_78 * local_78 + fStack_74 * fStack_74 + fVar22 * fVar22;
        if (fVar22 < 0.0) {
          fVar22 = sqrtf(fVar22);
        }
        else {
          fVar22 = SQRT(fVar22);
        }
        if (fVar22 < 150.0) {
          (__this->fields)._napeLockTitan = (Characters_BaseTitan_o *)method;
          il2cpp_runtime_glue(&(__this->fields)._napeLockTitan);
          cVar12 = (char)(__this->fields)._napeLock;
          goto joined_r0x0414541a;
        }
      }
      *(undefined1 *)&(__this->fields)._napeLock = 0;
      cVar12 = (char)(__this->fields)._napeLock;
      method = (MethodInfo *)pCVar20;
    }
joined_r0x0414541a:
    if ((cVar12 != '\0') &&
       (pCVar9 = (__this->fields)._follow, pCVar9 != (Characters_BaseCharacter_o *)0x0)) {
      bVar5 = (TypeInfo_Human->_2).naturalAligment;
      method = (MethodInfo *)(ulong)bVar5;
      if ((bVar5 <= (pCVar9->klass->_2).naturalAligment) &&
         ((pCVar9->klass->_2).typeHierarchy
          [(long)&(((Characters_BaseTitan_o *)((long)method + -0x2a0))->fields).field_0x28f] ==
          TypeInfo_Human)) {
        lVar17 = *(long *)&pCVar9[1].fields.FootstepsEnabled;
        if (lVar17 == 0) goto LAB_04146052;
        if (*(int *)(lVar17 + 0x1d0) != 0) {
          *(undefined1 *)&(__this->fields)._napeLock = 0;
        }
      }
    }
  }
  fVar22 = Cameras_InGameCamera__GetCameraDistance(__this,method);
  __this_00 = (__this->fields).Camera;
  if (__this_00 == (UnityEngine_Camera_o *)0x0) goto LAB_04146052;
  fVar23 = UnityEngine_Camera__get_fieldOfView(__this_00,(MethodInfo *)0x0);
  if ((fVar22 != 0.0) || (NAN(fVar22))) {
    fVar23 = ((200.0 - fVar23) * fVar22) / 150.0;
    pUVar10 = (__this->fields).Cache;
  }
  else {
    fVar23 = 0.1;
    pUVar10 = (__this->fields).Cache;
  }
  if ((pUVar10 == (Utility_BaseComponentCache_o *)0x0) ||
     (pCVar9 = (__this->fields)._follow, pCVar9 == (Characters_BaseCharacter_o *)0x0))
  goto LAB_04146052;
  pUVar19 = (pUVar10->fields).Transform;
  pUVar18 = (UnityEngine_Transform_o *)(*(pCVar9->klass->vtable)._67_GetCameraAnchor.methodPtr)();
  if ((pUVar18 == (UnityEngine_Transform_o *)0x0) ||
     (UVar29 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0),
     pUVar19 == (UnityEngine_Transform_o *)0x0)) goto LAB_04146052;
  ppUVar1 = &(__this->fields).Cache;
  UnityEngine_Transform__set_position(pUVar19,UVar29,(MethodInfo *)0x0);
  if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar19 = ((*ppUVar1)->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0))
  goto LAB_04146052;
  pMVar21 = (MethodInfo *)0x0;
  UVar29 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  uVar4 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  fVar27 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  fVar24 = Cameras_InGameCamera__GetHeightDistance(__this,pMVar21);
  lVar17 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x38), lVar17 == 0)) goto LAB_04146052;
  local_58 = (float)uVar4;
  fStack_54 = (float)((ulong)uVar4 >> 0x20);
  fVar26 = *(float *)(lVar17 + 0x14);
  local_a8 = UVar29.fields.x;
  fStack_a4 = UVar29.fields.y;
  UVar29.fields.z = UVar29.fields.z + fVar27 * fVar24 * fVar26;
  UVar29.fields.y = fStack_a4 + fVar26 * fStack_54 * fVar24;
  UVar29.fields.x = local_a8 + fVar26 * local_58 * fVar24;
  UnityEngine_Transform__set_position(pUVar19,UVar29,(MethodInfo *)0x0);
  if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar19 = ((*ppUVar1)->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0))
  goto LAB_04146052;
  uVar15 = 0;
  UVar29 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  uVar4 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  fVar22 = (float)(~-(uint)(fVar22 == 0.0) & (uint)(0.6 - fVar22));
  fVar27 = fVar22 * (float)uVar4;
  fVar24 = fVar22 * (float)((ulong)uVar4 >> 0x20);
  fVar22 = fVar22 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  UVar30.fields.x = UVar29.fields.x - (fVar27 + fVar27);
  UVar30.fields.y = UVar29.fields.y - (fVar24 + fVar24);
  UVar30.fields.z = UVar29.fields.z - (fVar22 + fVar22);
  UnityEngine_Transform__set_position(pUVar19,UVar30,(MethodInfo *)0x0);
  if ((char)(__this->fields)._napeLock != '\0') {
    pCVar20 = (__this->fields)._napeLockTitan;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar15 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar20,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    uVar15 = uVar15 & 0xff;
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
    bVar13 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    cVar12 = (char)bVar13;
  }
  else {
    bVar13 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    cVar12 = (char)bVar13;
  }
  if ((cVar12 == '\0') && (bVar13 = UI_InGameMenu__InMenu((MethodInfo *)0x0), (char)bVar13 == '\0'))
  {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      cVar12 = *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x70);
    }
    else {
      cVar12 = *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x70);
    }
    if (cVar12 == '\0') {
      lVar17 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if (((lVar17 == 0) || (*(long *)(lVar17 + 0x28) == 0)) || (*(long *)(lVar17 + 0x48) == 0))
      goto LAB_04146052;
      cVar12 = *(char *)(*(long *)(lVar17 + 0x48) + 0x11);
      if ((*(long *)(lVar17 + 0xb8) == 0) || (*(long *)(lVar17 + 0xc0) == 0)) goto LAB_04146052;
      fVar22 = *(float *)(*(long *)(lVar17 + 0x28) + 0x14);
      if ((__this->fields).CurrentCameraMode == 1) {
        fVar27 = *(float *)(*(long *)(lVar17 + 0xb8) + 0x14);
        fVar24 = *(float *)(*(long *)(lVar17 + 0xc0) + 0x14);
        iVar14 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
        fVar26 = (float)iVar14;
        fVar28 = (1.0 - fVar27) * 0.5 * fVar26;
        fVar27 = (fVar27 + 1.0) * 0.5 * fVar26;
        UVar29 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        UVar30 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        local_88 = UVar29.fields.x;
        if ((local_88 < fVar28) || (fVar27 < local_88)) {
          if (fVar28 <= local_88) {
            if (local_88 <= fVar27) goto LAB_04145952;
            fVar28 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar19 = ((*ppUVar1)->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0)
               ) goto LAB_04146052;
            fVar25 = fVar28 * fVar22 * 62.0;
            fVar28 = local_88 - fVar27;
          }
          else {
            fVar27 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar19 = ((*ppUVar1)->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0)
               ) goto LAB_04146052;
            fVar25 = fVar27 * fVar22 * -62.0;
            fVar28 = fVar28 - local_88;
          }
          UVar29 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
          if (DAT_056fde1f == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fde1f = '\x01';
          }
          UnityEngine_Transform__RotateAround
                    (pUVar19,UVar29,
                     (UnityEngine_Vector3_o)
                     *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
                     fVar24 * (fVar28 / fVar26) * fVar25,(MethodInfo *)0x0);
        }
LAB_04145952:
        iVar14 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        iVar16 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar19 = ((*ppUVar1)->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0))
        goto LAB_04146052;
        UVar31 = UnityEngine_Transform__get_rotation(pUVar19,(MethodInfo *)0x0);
        UVar29 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar31,(MethodInfo *)0x0);
        euler.fields.x = UVar29.fields.x * 57.29578;
        euler.fields.y = UVar29.fields.y * 57.29578;
        euler.fields.z = UVar29.fields.z * 57.29578;
        UVar29 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar18 = ((*ppUVar1)->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0))
        goto LAB_04146052;
        fStack_44 = UVar30.fields.y;
        UVar31 = UnityEngine_Transform__get_rotation(pUVar18,(MethodInfo *)0x0);
        UVar30 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar31,(MethodInfo *)0x0);
        euler_00.fields.x = UVar30.fields.x * 57.29578;
        euler_00.fields.y = UVar30.fields.y * 57.29578;
        euler_00.fields.z = UVar30.fields.z * 57.29578;
        UVar30 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
        fStack_b4 = UVar29.fields.y;
        euler_01.fields.x =
             ((((float)iVar14 * 0.6 - fStack_44) * 280.0 * 0.5) / (float)iVar16) * 0.017453292;
        euler_01.fields.y = fStack_b4 * 0.017453292;
        euler_01.fields.z = UVar30.fields.z * 0.017453292;
        UVar31 = UnityEngine_Quaternion__Internal_FromEulerRad(euler_01,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar19,UVar31,(MethodInfo *)0x0);
      }
      if ((uVar15 == 0) && (((__this->fields).CurrentCameraMode | 2U) == 2)) {
        fVar27 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
        fVar24 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
        if (DAT_056fde1f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
        }
        if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar19 = ((*ppUVar1)->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0))
        goto LAB_04146052;
        uVar4 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        uVar3 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
        UVar29 = UnityEngine_Transform__get_up(pUVar19,(MethodInfo *)0x0);
        if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar19 = ((*ppUVar1)->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0))
        goto LAB_04146052;
        UVar30 = UnityEngine_Transform__get_right(pUVar19,(MethodInfo *)0x0);
        local_58 = (float)uVar4;
        local_48 = UVar29.fields.x;
        fVar26 = (float)il2cpp_glue_03ddae10(local_58,uVar3,local_48,UVar29.fields.z,UVar30.fields._0_8_,
                                     UVar30.fields.z,0);
        if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar19 = ((*ppUVar1)->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0))
        goto LAB_04146052;
        fVar24 = fVar24 * -10.0 * fVar22 * *(float *)(&DAT_00cd0ef0 + (ulong)(cVar12 == '\0') * 4);
        UVar29 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
        if (DAT_056fde1f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
        }
        UnityEngine_Transform__RotateAround
                  (pUVar19,UVar29,
                   (UnityEngine_Vector3_o)
                   *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
                   fVar27 * 10.0 * fVar22,(MethodInfo *)0x0);
        pUVar10 = *ppUVar1;
        if ((80.0 < fVar24 + fVar26) || (fVar24 + fVar26 < -80.0)) {
          if ((pUVar10 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar19 = (pUVar10->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0))
          goto LAB_04146052;
          UVar29 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
          fVar22 = UVar29.fields.z;
          if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar18 = ((*ppUVar1)->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0))
          goto LAB_04146052;
          UVar30 = UnityEngine_Transform__get_right(pUVar18,(MethodInfo *)0x0);
          fVar25 = UVar30.fields.z;
          fVar27 = UVar30.fields.x;
          fVar28 = UVar30.fields.y;
          fVar24 = *(float *)(&DAT_00cd0e08 + (ulong)(0.0 <= fVar26) * 4) - fVar26;
          local_b8 = UVar29.fields.x;
          fStack_b4 = UVar29.fields.y;
        }
        else {
          if ((pUVar10 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar19 = (pUVar10->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0))
          goto LAB_04146052;
          UVar29 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
          fVar22 = UVar29.fields.z;
          if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar18 = ((*ppUVar1)->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0))
          goto LAB_04146052;
          UVar30 = UnityEngine_Transform__get_right(pUVar18,(MethodInfo *)0x0);
          fVar25 = UVar30.fields.z;
          fVar27 = UVar30.fields.x;
          fVar28 = UVar30.fields.y;
          local_b8 = UVar29.fields.x;
          fStack_b4 = UVar29.fields.y;
        }
        point.fields.y = fStack_b4;
        point.fields.x = local_b8;
        point.fields.z = fVar22;
        axis.fields.y = fVar28;
        axis.fields.x = fVar27;
        axis.fields.z = fVar25;
        UnityEngine_Transform__RotateAround(pUVar19,point,axis,fVar24,(MethodInfo *)0x0);
      }
    }
  }
  if ((*ppUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar19 = ((*ppUVar1)->fields).Transform, pUVar19 != (UnityEngine_Transform_o *)0x0)) {
    UVar29 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
    if ((*ppUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar18 = ((*ppUVar1)->fields).Transform, pUVar18 != (UnityEngine_Transform_o *)0x0)) {
      UVar30 = UnityEngine_Transform__get_forward(pUVar18,(MethodInfo *)0x0);
      fVar22 = (__this->fields)._anchorDistance;
      local_b8 = UVar29.fields.x;
      fStack_b4 = UVar29.fields.y;
      value.fields.x = local_b8 + fVar23 * fVar22 * UVar30.fields.x * -10.0;
      value.fields.y = fStack_b4 + fVar23 * fVar22 * UVar30.fields.y * -10.0;
      value.fields.z = UVar30.fields.z * -10.0 * fVar22 * fVar23 + UVar29.fields.z;
      UnityEngine_Transform__set_position(pUVar19,value,(MethodInfo *)0x0);
      if (uVar15 != 0) {
        if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar19 = ((*ppUVar1)->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0))
        goto LAB_04146052;
        UVar29 = UnityEngine_Transform__get_eulerAngles(pUVar19,(MethodInfo *)0x0);
        value_00.fields.z = UVar29.fields.z;
        pCVar20 = (__this->fields)._napeLockTitan;
        if ((pCVar20 == (Characters_BaseTitan_o *)0x0) ||
           (((pSVar11 = (pCVar20->fields).OnPlayerPropertiesChanged,
             pSVar11 == (System_Action_Hashtable__o *)0x0 ||
             (*ppUVar1 == (Utility_BaseComponentCache_o *)0x0)) ||
            (pCVar9 = (__this->fields)._follow, pCVar9 == (Characters_BaseCharacter_o *)0x0))))
        goto LAB_04146052;
        pUVar19 = (UnityEngine_Transform_o *)(pSVar11->fields).method_code;
        pUVar18 = ((*ppUVar1)->fields).Transform;
        __this_01 = (UnityEngine_Transform_o *)
                    (*(pCVar9->klass->vtable)._67_GetCameraAnchor.methodPtr)(UVar29.fields.x);
        if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_04146052;
        UVar29 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
        if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto LAB_04146052;
        UVar30 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
        if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto LAB_04146052;
        local_a8 = UVar29.fields.x;
        fStack_a4 = UVar29.fields.y;
        worldPosition.fields.z = UVar30.fields.z * 0.2 + UVar29.fields.z * 0.8;
        worldPosition.fields.y = UVar30.fields.y * 0.2 + fStack_a4 * 0.8;
        worldPosition.fields.x = UVar30.fields.x * 0.2 + local_a8 * 0.8;
        UnityEngine_Transform__LookAt(pUVar18,worldPosition,(MethodInfo *)0x0);
        if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar19 = ((*ppUVar1)->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0))
        goto LAB_04146052;
        UVar29 = UnityEngine_Transform__get_eulerAngles(pUVar19,(MethodInfo *)0x0);
        if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar18 = ((*ppUVar1)->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0))
        goto LAB_04146052;
        ppCVar2 = &(__this->fields)._napeLockTitan;
        UVar30 = UnityEngine_Transform__get_eulerAngles(pUVar18,(MethodInfo *)0x0);
        value_00.fields.y = UVar30.fields.y;
        local_78 = UVar29.fields.x;
        value_00.fields.x = local_78;
        UnityEngine_Transform__set_localEulerAngles(pUVar19,value_00,(MethodInfo *)0x0);
        pCVar20 = *ppCVar2;
        if (pCVar20 == (Characters_BaseTitan_o *)0x0) goto LAB_04146052;
        if (*(char *)&(pCVar20->fields).FeedVictimName != '\0') {
          (__this->fields)._napeLockTitan = (Characters_BaseTitan_o *)0x0;
          il2cpp_runtime_glue(ppCVar2);
          *(undefined1 *)&(__this->fields)._napeLock = 0;
        }
      }
      if ((*ppUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar19 = ((*ppUVar1)->fields).Transform, pUVar19 != (UnityEngine_Transform_o *)0x0)) {
        UVar29 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
        if ((*ppUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar18 = ((*ppUVar1)->fields).Transform, pUVar18 != (UnityEngine_Transform_o *)0x0)) {
          UVar30 = UnityEngine_Transform__get_right(pUVar18,(MethodInfo *)0x0);
          lVar17 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
          if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x40), lVar17 != 0)) {
            fVar22 = *(float *)(lVar17 + 0x14) + -1.0;
            local_b8 = UVar29.fields.x;
            fStack_b4 = UVar29.fields.y;
            pMVar21 = (MethodInfo *)0x0;
            value_01.fields.y = fStack_b4 + UVar30.fields.y * fVar22;
            value_01.fields.x = local_b8 + UVar30.fields.x * fVar22;
            value_01.fields.z = UVar29.fields.z + UVar30.fields.z * fVar22;
            UnityEngine_Transform__set_position(pUVar19,value_01,(MethodInfo *)0x0);
            Cameras_InGameCamera__UpdateShake(__this,pMVar21);
            return;
          }
        }
      }
    }
  }
LAB_04146052:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$UpdateSpectate
// il2cpp: void Cameras_InGameCamera__UpdateSpectate (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4146060

void Cameras_InGameCamera__UpdateSpectate(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Camera_o *__this_00;
  Utility_Cycle_InGameCamera_SpecateMode__o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  Utility_BaseComponentCache_o *pUVar3;
  long lVar4;
  Settings_GeneralInputSettings_o *pSVar5;
  Settings_KeybindSetting_o *pSVar6;
  UnityEngine_Quaternion_Fields b;
  char cVar7;
  int32_t iVar8;
  bool_conflict bVar9;
  uint uVar10;
  int32_t iVar11;
  Il2CppObject *pIVar12;
  UnityEngine_Transform_o *pUVar13;
  System_Collections_Generic_List_BaseCharacter__o *pSVar14;
  Characters_BaseCharacter_o *pCVar15;
  MethodInfo *pMVar16;
  MethodInfo_35A7000 **method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *pMVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Quaternion_o UVar25;
  float local_78;
  float fStack_74;
  float local_48;
  float fStack_44;
  
  if (DAT_057049a3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_BaseMovementSync_GetComponent_BaseMovementSync);
    il2cpp_init_method_metadata(&MethodInfo_InGameCamera_SpecateMode_Current);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&"Mouse Y");
    il2cpp_init_method_metadata(&"Mouse X");
    DAT_057049a3 = '\x01';
  }
  fVar18 = Cameras_InGameCamera__GetCameraDistance(__this,method);
  __this_00 = (__this->fields).Camera;
  if (__this_00 == (UnityEngine_Camera_o *)0x0) goto LAB_04146a82;
  fVar19 = UnityEngine_Camera__get_fieldOfView(__this_00,(MethodInfo *)0x0);
  pCVar15 = (__this->fields)._follow;
  if (((pCVar15 == (Characters_BaseCharacter_o *)0x0) ||
      (pIVar12 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pCVar15,MethodInfo_BaseMovementSync_GetComponent_BaseMovementSync),
      pIVar12 == (Il2CppObject *)0x0)) ||
     (__this_01 = (__this->fields).SpecMode,
     __this_01 == (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0)) goto LAB_04146a82;
  b = *(UnityEngine_Quaternion_Fields *)((long)&pIVar12[5].klass + 4);
  iVar8 = Utility_Cycle<Int32Enum>__Current((Utility_Cycle_T__o *)__this_01,MethodInfo_InGameCamera_SpecateMode_Current);
  pMVar16 = (MethodInfo *)(__this->fields).Cache;
  if (pMVar16 == (MethodInfo *)0x0) goto LAB_04146a82;
  pUVar2 = (UnityEngine_Transform_o *)pMVar16->invoker_method;
  if (iVar8 == 1) {
    pCVar15 = (__this->fields)._follow;
    if (((pCVar15 == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar13 = (UnityEngine_Transform_o *)
                   (*(pCVar15->klass->vtable)._67_GetCameraAnchor.methodPtr)(),
        pUVar13 == (UnityEngine_Transform_o *)0x0)) ||
       (UVar23 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_04146a82;
    UnityEngine_Transform__set_position(pUVar2,UVar23,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).Cache;
    if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar2 = (pUVar3->fields).Transform, pUVar2 == (UnityEngine_Transform_o *)0x0))
    goto LAB_04146a82;
    pMVar16 = (MethodInfo *)0x0;
    UVar23 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar21 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    fVar20 = Cameras_InGameCamera__GetHeightDistance(__this,pMVar16);
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x38), lVar4 == 0)) goto LAB_04146a82;
    local_48 = (float)uVar1;
    fStack_44 = (float)((ulong)uVar1 >> 0x20);
    fVar22 = *(float *)(lVar4 + 0x14);
    local_78 = UVar23.fields.x;
    fStack_74 = UVar23.fields.y;
    value.fields.z = UVar23.fields.z + fVar21 * fVar20 * fVar22;
    value.fields.y = fStack_74 + fVar22 * fStack_44 * fVar20;
    value.fields.x = local_78 + fVar22 * local_48 * fVar20;
    UnityEngine_Transform__set_position(pUVar2,value,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).Cache;
    if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar2 = (pUVar3->fields).Transform, pUVar2 == (UnityEngine_Transform_o *)0x0))
    goto LAB_04146a82;
    UVar23 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar21 = (float)(~-(uint)(fVar18 == 0.0) & (uint)(0.6 - fVar18));
    fVar20 = fVar21 * (float)uVar1;
    fVar22 = fVar21 * (float)((ulong)uVar1 >> 0x20);
    fVar21 = fVar21 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    value_00.fields.x = UVar23.fields.x - (fVar20 + fVar20);
    value_00.fields.y = UVar23.fields.y - (fVar22 + fVar22);
    value_00.fields.z = UVar23.fields.z - (fVar21 + fVar21);
    UnityEngine_Transform__set_position(pUVar2,value_00,(MethodInfo *)0x0);
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if (((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) || (*(long *)(lVar4 + 0x48) == 0))
    goto LAB_04146a82;
    fVar21 = *(float *)(*(long *)(lVar4 + 0x28) + 0x14);
    cVar7 = *(char *)(*(long *)(lVar4 + 0x48) + 0x11);
    bVar9 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
    local_78 = 0.0;
    if ((char)bVar9 == '\0') {
      local_78 = fVar21;
    }
    fVar21 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
    fVar20 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
    pUVar3 = (__this->fields).Cache;
    if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar2 = (pUVar3->fields).Transform, pUVar2 == (UnityEngine_Transform_o *)0x0))
    goto LAB_04146a82;
    UVar23 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    UnityEngine_Transform__RotateAround
              (pUVar2,UVar23,
               (UnityEngine_Vector3_o)
               *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
               fVar21 * 10.0 * local_78,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).Cache;
    if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar2 = (pUVar3->fields).Transform, pUVar2 == (UnityEngine_Transform_o *)0x0))
    goto LAB_04146a82;
    fVar20 = local_78 * fVar20 * -10.0 * *(float *)(&DAT_00cd0ef0 + (ulong)(cVar7 == '\0') * 4);
    UVar25 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
    UVar23 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar25,(MethodInfo *)0x0);
    euler.fields.x = UVar23.fields.x * 57.29578;
    euler.fields.y = UVar23.fields.y * 57.29578;
    euler.fields.z = UVar23.fields.z * 57.29578;
    pMVar16 = (MethodInfo *)0x0;
    UVar23 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    fVar21 = fmodf(UVar23.fields.x,360.0,pMVar16);
    fVar22 = fVar20 + fVar21;
    uVar10 = 1;
    if ((0.0 < fVar20) &&
       (((260.0 <= fVar21 || (uVar10 = 0, fVar22 <= 260.0)) && (uVar10 = 1, fVar21 < 80.0)))) {
      uVar10 = (uint)(fVar22 <= 80.0);
    }
    if (fVar20 < 0.0) {
      if ((fVar21 <= 280.0) || (pMVar16 = (MethodInfo *)0x0, 280.0 <= fVar22)) {
        if (fVar21 <= 100.0) goto LAB_0414685b;
        pMVar16 = (MethodInfo *)(ulong)(100.0 <= fVar22);
      }
      uVar10 = (uint)pMVar16 & uVar10;
    }
    else {
LAB_0414685b:
      pMVar16 = (MethodInfo *)0x1;
    }
    if (uVar10 == 0) {
      pUVar3 = (__this->fields).Cache;
    }
    else {
      pUVar3 = (__this->fields).Cache;
      if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar2 = (pUVar3->fields).Transform, pUVar2 == (UnityEngine_Transform_o *)0x0))
      goto LAB_04146a82;
      UVar23 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).Cache;
      if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar13 = (pUVar3->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0))
      goto LAB_04146a82;
      UVar24 = UnityEngine_Transform__get_right(pUVar13,(MethodInfo *)0x0);
      UnityEngine_Transform__RotateAround(pUVar2,UVar23,UVar24,fVar20,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).Cache;
    }
  }
  else {
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_04146a82;
    UVar25 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
    fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    UVar25 = UnityEngine_Quaternion__Lerp(UVar25,b,fVar21 * 10.0,(MethodInfo *)0x0);
    UnityEngine_Transform__set_rotation(pUVar2,UVar25,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).Cache;
    if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
       (pCVar15 = (__this->fields)._follow, pCVar15 == (Characters_BaseCharacter_o *)0x0))
    goto LAB_04146a82;
    pUVar2 = (pUVar3->fields).Transform;
    pUVar13 = (UnityEngine_Transform_o *)(*(pCVar15->klass->vtable)._67_GetCameraAnchor.methodPtr)()
    ;
    if ((pUVar13 == (UnityEngine_Transform_o *)0x0) ||
       (UVar23 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_04146a82;
    UnityEngine_Transform__set_position(pUVar2,UVar23,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).Cache;
    if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar2 = (pUVar3->fields).Transform, pUVar2 == (UnityEngine_Transform_o *)0x0))
    goto LAB_04146a82;
    pMVar17 = (MethodInfo *)0x0;
    UVar23 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar21 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    fVar20 = Cameras_InGameCamera__GetHeightDistance(__this,pMVar17);
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x38), lVar4 == 0)) goto LAB_04146a82;
    local_48 = (float)uVar1;
    fStack_44 = (float)((ulong)uVar1 >> 0x20);
    fVar22 = *(float *)(lVar4 + 0x14);
    local_78 = UVar23.fields.x;
    fStack_74 = UVar23.fields.y;
    UVar23.fields.z = UVar23.fields.z + fVar21 * fVar20 * fVar22;
    UVar23.fields.y = fStack_74 + fVar22 * fStack_44 * fVar20;
    UVar23.fields.x = local_78 + fVar22 * local_48 * fVar20;
    UnityEngine_Transform__set_position(pUVar2,UVar23,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).Cache;
    if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar2 = (pUVar3->fields).Transform, pUVar2 == (UnityEngine_Transform_o *)0x0))
    goto LAB_04146a82;
    UVar23 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar22 = 0.6 - fVar18;
    fVar21 = fVar22 * (float)uVar1;
    fVar20 = fVar22 * (float)((ulong)uVar1 >> 0x20);
    fVar22 = fVar22 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    UVar24.fields.x = UVar23.fields.x - (fVar21 + fVar21);
    UVar24.fields.y = UVar23.fields.y - (fVar20 + fVar20);
    UVar24.fields.z = UVar23.fields.z - (fVar22 + fVar22);
    UnityEngine_Transform__set_position(pUVar2,UVar24,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).Cache;
  }
  if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar2 = (pUVar3->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar23 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar13 = (pUVar3->fields).Transform, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
      UVar24 = UnityEngine_Transform__get_forward(pUVar13,(MethodInfo *)0x0);
      fVar21 = (__this->fields)._anchorDistance;
      if (fVar18 <= 0.3) {
        fVar18 = 0.3;
      }
      fVar18 = ((200.0 - fVar19) * fVar18) / 150.0;
      local_78 = UVar23.fields.x;
      fStack_74 = UVar23.fields.y;
      value_01.fields.x = local_78 - fVar18 * fVar21 * UVar24.fields.x * 10.0;
      value_01.fields.y = fStack_74 - fVar18 * fVar21 * UVar24.fields.y * 10.0;
      value_01.fields.z = UVar23.fields.z - fVar18 * UVar24.fields.z * 10.0 * fVar21;
      UnityEngine_Transform__set_position(pUVar2,value_01,(MethodInfo *)0x0);
      bVar9 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
          bVar9 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
          cVar7 = (char)bVar9;
        }
        else {
          bVar9 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
          cVar7 = (char)bVar9;
        }
        if (cVar7 == '\0') {
          pSVar5 = (__this->fields)._input;
          if ((pSVar5 != (Settings_GeneralInputSettings_o *)0x0) &&
             (pSVar6 = (pSVar5->fields).SpectateNextPlayer,
             pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
            pMVar17 = (MethodInfo *)0x0;
            bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar6,0,(MethodInfo *)0x0);
            if ((char)bVar9 != '\0') {
              pSVar14 = Cameras_InGameCamera__GetSortedCharacters(__this,pMVar17);
              if (pSVar14 == (System_Collections_Generic_List_BaseCharacter__o *)0x0)
              goto LAB_04146a82;
              if (0 < (pSVar14->fields)._size) {
                iVar11 = Cameras_InGameCamera__GetSpectateIndex(__this,pSVar14,method_01);
                iVar8 = 0;
                if (iVar11 + 1 < (pSVar14->fields)._size) {
                  iVar8 = iVar11 + 1;
                }
                pCVar15 = (Characters_BaseCharacter_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar14,iVar8,
                                     MethodInfo_BaseCharacter_get_Item);
                Cameras_InGameCamera__SetFollow(__this,pCVar15,1,pMVar16);
              }
            }
            pSVar5 = (__this->fields)._input;
            if ((pSVar5 != (Settings_GeneralInputSettings_o *)0x0) &&
               (pSVar6 = (pSVar5->fields).SpectatePreviousPlayer,
               pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
              pMVar16 = (MethodInfo *)0x0;
              bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar6,0,(MethodInfo *)0x0);
              if ((char)bVar9 == '\0') {
                return;
              }
              pSVar14 = Cameras_InGameCamera__GetSortedCharacters(__this,pMVar16);
              if (pSVar14 != (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
                if ((pSVar14->fields)._size < 1) {
                  return;
                }
                iVar8 = Cameras_InGameCamera__GetSpectateIndex(__this,pSVar14,method_02);
                iVar8 = iVar8 + -1;
                if (iVar8 < 0) {
                  iVar8 = (pSVar14->fields)._size + -1;
                }
                method_00 = &MethodInfo_BaseCharacter_get_Item;
                pCVar15 = (Characters_BaseCharacter_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar14,iVar8,
                                     MethodInfo_BaseCharacter_get_Item);
                Cameras_InGameCamera__SetFollow(__this,pCVar15,1,(MethodInfo *)method_00);
                return;
              }
            }
          }
          goto LAB_04146a82;
        }
      }
      return;
    }
  }
LAB_04146a82:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$UpdateFreeCam
// il2cpp: void Cameras_InGameCamera__UpdateFreeCam (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4146d40

void Cameras_InGameCamera__UpdateFreeCam(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  Utility_Cycle_InGameCamera_SpecateMode__o *__this_00;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  long lVar6;
  UnityEngine_Transform_o *__this_01;
  char cVar7;
  bool_conflict bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  float local_5c;
  undefined8 local_58;
  float local_28;
  float fStack_24;
  
  if (DAT_057049a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_InGameCamera_SpecateMode_Next);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&"Mouse Y");
    il2cpp_init_method_metadata();
    DAT_057049a4 = '\x01';
  }
  bVar8 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
    bVar8 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  else {
    bVar8 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  if (cVar7 != '\0') {
    return;
  }
  pSVar2 = (__this->fields)._input;
  if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).SpectateNextPlayer, pSVar3 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_04147319;
  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pSVar2 = (__this->fields)._input;
    if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).SpectatePreviousPlayer, pSVar3 == (Settings_KeybindSetting_o *)0x0
       )) goto LAB_04147319;
    bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      pSVar2 = (__this->fields)._input;
      if ((pSVar2 != (Settings_GeneralInputSettings_o *)0x0) &&
         (pSVar3 = (pSVar2->fields).Modifier, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
        uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        local_5c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        bVar8 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          fVar9 = 200.0;
          pSVar2 = (__this->fields)._input;
        }
        else {
          fVar9 = 400.0;
          pSVar2 = (__this->fields)._input;
        }
        if ((pSVar2 != (Settings_GeneralInputSettings_o *)0x0) &&
           (pSVar3 = (pSVar2->fields).Forward, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
          bVar8 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
          local_58._0_4_ = (float)uVar1;
          local_58._4_4_ = (float)((ulong)uVar1 >> 0x20);
          if ((char)bVar8 == '\0') {
            pSVar2 = (__this->fields)._input;
            if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
               (pSVar3 = (pSVar2->fields).Back, pSVar3 == (Settings_KeybindSetting_o *)0x0))
            goto LAB_04147319;
            bVar8 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
            if ((char)bVar8 != '\0') {
              pUVar4 = (__this->fields).Cache;
              if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
                 (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
              goto LAB_04147319;
              UVar12 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
              local_58 = CONCAT44(local_58._4_4_ - UVar12.fields.y,(float)local_58 - UVar12.fields.x
                                 );
              local_5c = local_5c - UVar12.fields.z;
              uVar1 = local_58;
            }
          }
          else {
            pUVar4 = (__this->fields).Cache;
            if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
            goto LAB_04147319;
            UVar12 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
            local_58 = CONCAT44(local_58._4_4_ + UVar12.fields.y,(float)local_58 + UVar12.fields.x);
            local_5c = local_5c + UVar12.fields.z;
            uVar1 = local_58;
          }
          local_58 = uVar1;
          pSVar2 = (__this->fields)._input;
          if ((pSVar2 != (Settings_GeneralInputSettings_o *)0x0) &&
             (pSVar3 = (pSVar2->fields).Right, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
            bVar8 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              pSVar2 = (__this->fields)._input;
              if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
                 (pSVar3 = (pSVar2->fields).Left, pSVar3 == (Settings_KeybindSetting_o *)0x0))
              goto LAB_04147319;
              bVar8 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                pUVar4 = (__this->fields).Cache;
                if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
                   (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
                goto LAB_04147319;
                UVar12 = UnityEngine_Transform__get_right(pUVar5,(MethodInfo *)0x0);
                local_58 = CONCAT44(local_58._4_4_ - UVar12.fields.y,
                                    (float)local_58 - UVar12.fields.x);
                local_5c = local_5c - UVar12.fields.z;
              }
            }
            else {
              pUVar4 = (__this->fields).Cache;
              if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
                 (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
              goto LAB_04147319;
              UVar12 = UnityEngine_Transform__get_right(pUVar5,(MethodInfo *)0x0);
              local_58 = CONCAT44(local_58._4_4_ + UVar12.fields.y,(float)local_58 + UVar12.fields.x
                                 );
              local_5c = local_5c + UVar12.fields.z;
            }
            pSVar2 = (__this->fields)._input;
            if ((pSVar2 != (Settings_GeneralInputSettings_o *)0x0) &&
               (pSVar3 = (pSVar2->fields).Up, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
              bVar8 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
                pSVar2 = (__this->fields)._input;
                if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
                   (pSVar3 = (pSVar2->fields).Down, pSVar3 == (Settings_KeybindSetting_o *)0x0))
                goto LAB_04147319;
                bVar8 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
                if ((char)bVar8 != '\0') {
                  pUVar4 = (__this->fields).Cache;
                  if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
                     (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)
                     ) goto LAB_04147319;
                  UVar12 = UnityEngine_Transform__get_up(pUVar5,(MethodInfo *)0x0);
                  local_58 = CONCAT44(local_58._4_4_ - UVar12.fields.y,
                                      (float)local_58 - UVar12.fields.x);
                  local_5c = local_5c - UVar12.fields.z;
                }
              }
              else {
                pUVar4 = (__this->fields).Cache;
                if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
                   (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
                goto LAB_04147319;
                UVar12 = UnityEngine_Transform__get_up(pUVar5,(MethodInfo *)0x0);
                local_58 = CONCAT44(local_58._4_4_ + UVar12.fields.y,
                                    (float)local_58 + UVar12.fields.x);
                local_5c = local_5c + UVar12.fields.z;
              }
              pUVar4 = (__this->fields).Cache;
              if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                UVar12 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                local_28 = UVar12.fields.x;
                fStack_24 = UVar12.fields.y;
                UVar13.fields.x = local_28 + fVar9 * (float)local_58 * fVar10;
                UVar13.fields.y = fStack_24 + fVar9 * local_58._4_4_ * fVar10;
                UVar13.fields.z = UVar12.fields.z + local_5c * fVar10 * fVar9;
                UnityEngine_Transform__set_position(pUVar5,UVar13,(MethodInfo *)0x0);
                fVar9 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
                fVar10 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
                lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
                if ((lVar6 != 0) &&
                   (((lVar6 = *(long *)(lVar6 + 0x28), lVar6 != 0 &&
                     (pUVar4 = (__this->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0
                     )) && (pUVar5 = (pUVar4->fields).Transform,
                           pUVar5 != (UnityEngine_Transform_o *)0x0)))) {
                  fVar11 = *(float *)(lVar6 + 0x14) * 10.0;
                  UVar12 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                  if (DAT_056fde1f == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_Vector3);
                    DAT_056fde1f = '\x01';
                  }
                  UnityEngine_Transform__RotateAround
                            (pUVar5,UVar12,
                             (UnityEngine_Vector3_o)
                             *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
                             fVar9 * fVar11,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).Cache;
                  if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
                     (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)
                     ) {
                    UVar12 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                    pUVar4 = (__this->fields).Cache;
                    if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
                       (__this_01 = (pUVar4->fields).Transform,
                       __this_01 != (UnityEngine_Transform_o *)0x0)) {
                      UVar13 = UnityEngine_Transform__get_right(__this_01,(MethodInfo *)0x0);
                      UnityEngine_Transform__RotateAround
                                (pUVar5,UVar12,UVar13,-(fVar10 * fVar11),(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_04147319;
    }
  }
  __this_00 = (__this->fields).SpecMode;
  if (__this_00 != (Utility_Cycle_InGameCamera_SpecateMode__o *)0x0) {
    Utility_Cycle<Int32Enum>__Next((Utility_Cycle_T__o *)__this_00,MethodInfo_InGameCamera_SpecateMode_Next);
    return;
  }
LAB_04147319:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$GetHeightDistance
// il2cpp: float Cameras_InGameCamera__GetHeightDistance (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4147fd0

float Cameras_InGameCamera__GetHeightDistance(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Characters_BaseCharacter_c *pCVar3;
  bool_conflict bVar4;
  float fVar5;
  
  if (DAT_057049a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057049a5 = '\x01';
  }
  fVar5 = Cameras_InGameCamera__GetCameraDistance(__this,method);
  if ((fVar5 == 0.0) && (!NAN(fVar5))) {
    pCVar2 = (__this->fields)._follow;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (((char)bVar4 != '\0') &&
       (pCVar2 = (__this->fields)._follow, pCVar2 != (Characters_BaseCharacter_o *)0x0)) {
      pCVar3 = pCVar2->klass;
      bVar1 = (TypeInfo_Human->_2).naturalAligment;
      if ((bVar1 <= (pCVar3->_2).naturalAligment) &&
         ((pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
        return 0.3;
      }
    }
  }
  return (__this->fields)._heightDistance;
}


// Cameras.InGameCamera$$UpdateObstacles
// il2cpp: void Cameras_InGameCamera__UpdateObstacles (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4146a90

/* WARNING: Type propagation algorithm not settling */

void Cameras_InGameCamera__UpdateObstacles(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  undefined1 auVar3 [16];
  UnityEngine_RaycastHit_o __this_00;
  int32_t layerMask;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  float fVar6;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Dd_01;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o end;
  undefined8 in_stack_ffffffffffffff88;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_48 [32];
  float fStack_28;
  undefined8 uStack_24;
  float fVar9;
  
  if (DAT_057049a6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_057049a6 = '\x01';
  }
  fStack_28 = 0.0;
  uStack_24 = 0;
  local_48._16_8_ = (InvokerMethod)0x0;
  local_48._24_4_ = 0;
  local_48._28_4_ = 0.0;
  local_48._0_8_ = (Il2CppMethodPointer)0x0;
  local_48._8_8_ = (Il2CppMethodPointer)0x0;
  pCVar1 = (__this->fields)._follow;
  if ((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
     (pUVar5 = (UnityEngine_Transform_o *)(*(pCVar1->klass->vtable)._67_GetCameraAnchor.methodPtr)()
     , pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_04146d3b;
  UVar13 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
  fVar9 = UVar13.fields.z;
  pUVar2 = (__this->fields).Cache;
  if (pUVar2 == (Utility_BaseComponentCache_o *)0x0) goto LAB_04146d3b;
  fVar14 = UVar13.fields.x;
  fVar15 = UVar13.fields.y;
  pUVar5 = (pUVar2->fields).Transform;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_04146d3b;
  fVar16 = extraout_XMM0_Dc;
  UVar13 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
  fVar10 = UVar13.fields.z;
  auVar11._0_4_ = UVar13.fields.x;
  auVar11._4_4_ = UVar13.fields.y;
  auVar11._8_4_ = extraout_XMM0_Dc_00;
  auVar11._12_4_ = extraout_XMM0_Dd_00;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar11._0_4_ = fVar14 - auVar11._0_4_;
  auVar11._4_4_ = fVar15 - auVar11._4_4_;
  auVar11._8_4_ = fVar16 - auVar11._8_4_;
  auVar11._12_4_ = extraout_XMM0_Dd - auVar11._12_4_;
  fVar10 = fVar9 - fVar10;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar7 = 0;
  uVar8 = 0;
  fVar6 = fVar10 * fVar10 + auVar11._4_4_ * auVar11._4_4_ + auVar11._0_4_ * auVar11._0_4_;
  if (fVar6 < 0.0) {
    uVar7 = auVar11._8_4_;
    uVar8 = auVar11._12_4_;
    fVar6 = sqrtf(fVar6);
    auVar11._8_4_ = (float)uVar7;
    auVar11._12_4_ = (float)uVar8;
    uVar7 = extraout_XMM0_Dc_01;
    uVar8 = extraout_XMM0_Dd_01;
    if (fVar6 <= 1e-05) goto LAB_04146bdb;
LAB_04146c43:
    fVar10 = fVar10 / fVar6;
    auVar3._4_4_ = fVar6;
    auVar3._0_4_ = fVar6;
    auVar3._8_4_ = uVar7;
    auVar3._12_4_ = uVar8;
    auVar12 = divps(auVar11,auVar3);
  }
  else {
    fVar6 = SQRT(fVar6);
    if (1e-05 < fVar6) goto LAB_04146c43;
LAB_04146bdb:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar10 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  auVar11._8_4_ = (__this->fields)._anchorDistance;
  auVar11._4_4_ = fVar10 * -10.0 * auVar11._8_4_;
  fVar10 = auVar11._8_4_ * auVar12._0_4_ * -10.0;
  auVar11._8_4_ = auVar11._8_4_ * auVar12._4_4_ * -10.0;
  auVar11._12_4_ = auVar12._8_4_ * 0.0 * 0.0;
  auVar11._0_4_ = auVar12._12_4_ * 0.0 * 0.0;
  if (*(int *)(TypeInfo_InGameCamera + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar10 = fVar10 + fVar14;
  auVar11._8_4_ = auVar11._8_4_ + fVar15;
  auVar11._12_4_ = auVar11._12_4_ + fVar16;
  auVar11._0_4_ = auVar11._0_4_ + extraout_XMM0_Dd;
  auVar11._4_4_ = auVar11._4_4_ + fVar9;
  layerMask = UnityEngine_LayerMask__op_Implicit
                        ((UnityEngine_LayerMask_o)
                         (*(UnityEngine_LayerMask_Fields **)(TypeInfo_InGameCamera + 0xb8))->m_Mask,
                         (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UVar13.fields.y = fVar15;
  UVar13.fields.x = fVar14;
  end.fields.y = auVar11._8_4_;
  end.fields.x = fVar10;
  UVar13.fields.z = fVar9;
  end.fields.z = auVar11._4_4_;
  bVar4 = UnityEngine_Physics__Linecast
                    (UVar13,end,(UnityEngine_RaycastHit_o *)local_48,layerMask,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pUVar2 = (__this->fields).Cache;
  if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar5 = (pUVar2->fields).Transform;
    __this_00.fields.m_Point.fields.z = auVar11._4_4_;
    __this_00.fields.m_Point.fields.x = (float)(int)in_stack_ffffffffffffff88;
    __this_00.fields.m_Point.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff88 >> 0x20);
    __this_00.fields.m_Normal.fields.x = fVar9;
    __this_00.fields.m_Normal.fields.y = fVar10;
    __this_00.fields.m_Normal.fields.z = auVar11._8_4_;
    __this_00.fields.m_FaceID = (uint32_t)auVar11._12_4_;
    __this_00.fields.m_Distance = auVar11._0_4_;
    __this_00.fields.m_UV.fields.x = fVar14;
    __this_00.fields.m_UV.fields.y = fVar15;
    __this_00.fields.m_Collider = (int32_t)fVar16;
    UVar13 = UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)local_48);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_position(pUVar5,UVar13,(MethodInfo *)0x0);
      return;
    }
  }
LAB_04146d3b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$UpdateFOV
// il2cpp: void Cameras_InGameCamera__UpdateFOV (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4147320

void Cameras_InGameCamera__UpdateFOV(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Characters_BaseCharacter_c *pCVar3;
  long lVar4;
  bool_conflict bVar5;
  UnityEngine_Camera_o *pUVar6;
  MethodInfo *method_00;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  float local_34;
  float local_30;
  
  if (DAT_057049a7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    DAT_057049a7 = '\x01';
  }
  pCVar2 = (__this->fields)._follow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar5 == '\0') ||
     (pCVar2 = (__this->fields)._follow, pCVar2 == (Characters_BaseCharacter_o *)0x0)) {
LAB_041473db:
    pUVar6 = (__this->fields).Camera;
    if (pUVar6 == (UnityEngine_Camera_o *)0x0) goto LAB_041476f8;
    fVar7 = UnityEngine_Camera__get_fieldOfView(pUVar6,(MethodInfo *)0x0);
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x98), lVar4 == 0)) goto LAB_041476f8;
    local_34 = *(float *)(lVar4 + 0x14);
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar8 = fVar8 * 5.0;
    fVar9 = 1.0;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    fVar9 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar9);
  }
  else {
    pCVar3 = pCVar2->klass;
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if (((pCVar3->_2).naturalAligment < bVar1) ||
       ((pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) goto LAB_041473db;
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if (((lVar4 == 0) || (*(long *)(lVar4 + 0x98) == 0)) || (*(long *)(lVar4 + 0xa0) == 0))
    goto LAB_041476f8;
    local_34 = *(float *)(*(long *)(lVar4 + 0x98) + 0x14);
    local_30 = *(float *)(*(long *)(lVar4 + 0xa0) + 0x14);
    fVar7 = Cameras_InGameCamera__GetCameraDistance(__this,method_00);
    if (fVar7 <= 0.0) {
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if (((lVar4 == 0) || (*(long *)(lVar4 + 0xa8) == 0)) || (*(long *)(lVar4 + 0xb0) == 0))
      goto LAB_041476f8;
      local_34 = *(float *)(*(long *)(lVar4 + 0xa8) + 0x14);
      local_30 = *(float *)(*(long *)(lVar4 + 0xb0) + 0x14);
    }
    pCVar2 = (__this->fields)._follow;
    if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto LAB_041476f8;
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if (((pCVar2->klass->_2).naturalAligment < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    UVar10 = Characters_BaseCharacter__GetVelocity(pCVar2,(MethodInfo *)0x0);
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar7 = UVar10.fields.z * UVar10.fields.z +
            UVar10.fields.y * UVar10.fields.y + UVar10.fields.x * UVar10.fields.x;
    if (fVar7 < 0.0) {
      fVar7 = sqrtf(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    if (10.0 < fVar7) {
      fVar7 = fVar7 + local_34;
      if (local_34 <= local_30) {
        local_34 = local_30;
      }
      fVar7 = fVar7 + -10.0;
      if (fVar7 <= local_34) {
        local_34 = fVar7;
      }
    }
    pUVar6 = (__this->fields).Camera;
    if (pUVar6 == (UnityEngine_Camera_o *)0x0) goto LAB_041476f8;
    fVar7 = UnityEngine_Camera__get_fieldOfView(pUVar6,(MethodInfo *)0x0);
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar8 = fVar8 * 5.0;
    fVar9 = 1.0;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    fVar9 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar9);
  }
  UnityEngine_Camera__set_fieldOfView(pUVar6,fVar9 * (local_34 - fVar7) + fVar7,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (*(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x3c) <= 0.0) {
    return;
  }
  pUVar6 = (__this->fields).Camera;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pUVar6 != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__set_fieldOfView
              (pUVar6,*(float *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x3c),(MethodInfo *)0x0);
    return;
  }
LAB_041476f8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$FindNextSpectate
// il2cpp: void Cameras_InGameCamera__FindNextSpectate (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4144f70

void Cameras_InGameCamera__FindNextSpectate(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BaseCharacter__o *__this_00;
  Characters_BaseCharacter_o *character;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (DAT_057049a8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_get_Item);
    DAT_057049a8 = '\x01';
  }
  __this_00 = Cameras_InGameCamera__GetSortedCharacters(__this,method);
  if (__this_00 != (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      method_00 = (MethodInfo *)&MethodInfo_BaseCharacter_get_Item;
      character = (Characters_BaseCharacter_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_BaseCharacter_get_Item);
      Cameras_InGameCamera__SetFollow(__this,character,1,method_00);
      return;
    }
    Cameras_InGameCamera__SetFollow(__this,(Characters_BaseCharacter_o *)0x0,1,in_RCX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$GetSpectateIndex
// il2cpp: int32_t Cameras_InGameCamera__GetSpectateIndex (Cameras_InGameCamera_o* __this, System_Collections_Generic_List_BaseCharacter__o* characters, const MethodInfo* method);
// 0x4148990

int32_t Cameras_InGameCamera__GetSpectateIndex
                  (Cameras_InGameCamera_o *__this,
                  System_Collections_Generic_List_BaseCharacter__o *characters,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  int index;
  
  if (DAT_057049a9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057049a9 = '\x01';
  }
  pCVar1 = (__this->fields)._follow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (characters == (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (characters->fields)._size) {
      index = 0;
      do {
        x = (UnityEngine_Object_o *)
            System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)characters,index,MethodInfo_BaseCharacter_get_Item);
        pCVar1 = (__this->fields)._follow;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)pCVar1,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          return index;
        }
        index = index + 1;
      } while (index < (characters->fields)._size);
    }
  }
  return -1;
}


// Cameras.InGameCamera$$GetSensitivityDeltaTime
// il2cpp: float Cameras_InGameCamera__GetSensitivityDeltaTime (Cameras_InGameCamera_o* __this, float sensitivity, const MethodInfo* method);
// 0x4148090

float Cameras_InGameCamera__GetSensitivityDeltaTime
                (Cameras_InGameCamera_o *__this,float sensitivity,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  return fVar1 * sensitivity * 62.0;
}


// Cameras.InGameCamera$$GetNearestTitan
// il2cpp: Characters_BaseTitan_o* Cameras_InGameCamera__GetNearestTitan (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4147970

/* WARNING: Removing unreachable block (ram,0x04147fae) */

Characters_BaseTitan_o *
Cameras_InGameCamera__GetNearestTitan(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  GameManagers_InGameManager_o *__this_00;
  System_Collections_Generic_IEnumerable_BaseCharacter__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Characters_BaseCharacter_o *pCVar6;
  System_Action_Hashtable__o *pSVar7;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  char cVar8;
  bool_conflict bVar9;
  System_Collections_Generic_IEnumerable_BaseCharacter__o *pSVar10;
  VirtualInvokeData *pVVar11;
  long *plVar12;
  undefined8 *puVar13;
  Characters_BaseTitan_o *a;
  long lVar14;
  long lVar15;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  float local_8c;
  Characters_BaseTitan_o *local_88;
  float local_78;
  float fStack_74;
  float local_58;
  float fStack_54;
  
  if (DAT_057049aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseTitan);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_057049aa = '\x01';
  }
  __this_00 = (__this->fields)._inGameManager;
  if ((__this_00 == (GameManagers_InGameManager_o *)0x0) ||
     (pSVar10 = GameManagers_InGameManager__GetAllCharactersEnumerable(__this_00,(MethodInfo *)0x0),
     pSVar10 == (System_Collections_Generic_IEnumerable_BaseCharacter__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar4 = pSVar10->klass;
  uVar2._0_1_ = (pSVar4->_2).rank;
  uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar5 = (pSVar4->_1).interfaceOffsets;
    lVar14 = 0;
    do {
      if (*(long *)((long)&pIVar5->interfaceType + lVar14) == TypeInfo_IEnumerable_BaseCharacter) {
        pVVar11 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar14);
        goto LAB_04147a61;
      }
      lVar14 = lVar14 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar14);
  }
  pVVar11 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar10,TypeInfo_IEnumerable_BaseCharacter,0);
LAB_04147a61:
  plVar12 = (long *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  local_8c = INFINITY;
  local_88 = (Characters_BaseTitan_o *)0x0;
  do {
    lVar14 = *plVar12;
    if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
          puVar13 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + lVar14 + 0x138);
          goto LAB_04147b03;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
    }
    puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IEnumerator,0);
LAB_04147b03:
    cVar8 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    if (cVar8 == '\0') {
      if (plVar12 == (long *)0x0) {
        return local_88;
      }
      lVar14 = *plVar12;
      if ((ulong)*(ushort *)(lVar14 + 0x12e) == 0) goto LAB_04147edf;
      lVar15 = 0;
      break;
    }
    lVar14 = *plVar12;
    if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator_BaseCharacter) {
          puVar13 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + lVar14 + 0x138);
          goto LAB_04147b73;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
    }
    puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IEnumerator_BaseCharacter,0);
LAB_04147b73:
    a = (Characters_BaseTitan_o *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    if (a != (Characters_BaseTitan_o *)0x0) {
      bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
      if ((bVar1 <= (a->klass->_2).naturalAligment) &&
         ((a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseTitan)) {
        pCVar6 = (__this->fields)._follow;
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar9 = GameManagers_TeamInfo__SameTeam
                          ((Characters_BaseCharacter_o *)a,pCVar6,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
          if (((a->klass->_2).naturalAligment < bVar1) ||
             ((a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseTitan)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(a);
          }
          pSVar7 = (a->fields).OnPlayerPropertiesChanged;
          if (pSVar7 == (System_Action_Hashtable__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pCVar6 = (__this->fields)._follow;
          if (pCVar6 == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          lVar14 = *(long *)&(pCVar6->fields).Dead;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          __this_01 = *(UnityEngine_Transform_o **)(lVar14 + 0x10);
          if (__this_01 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          __this_02 = (UnityEngine_Transform_o *)(pSVar7->fields).method_code;
          UVar17 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
          if (__this_02 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UVar18 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
          if (DAT_056fdea6 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Math);
            DAT_056fdea6 = '\x01';
            iVar3 = *(int *)(TypeInfo_Math + 0xe4);
          }
          else {
            iVar3 = *(int *)(TypeInfo_Math + 0xe4);
          }
          if (iVar3 == 0) {
            il2cpp_init_class();
          }
          local_58 = UVar17.fields.x;
          fStack_54 = UVar17.fields.y;
          local_78 = UVar18.fields.x;
          fStack_74 = UVar18.fields.y;
          fVar16 = UVar17.fields.z - UVar18.fields.z;
          fVar16 = (local_58 - local_78) * (local_58 - local_78) +
                   (fStack_54 - fStack_74) * (fStack_54 - fStack_74) + fVar16 * fVar16;
          if (fVar16 < 0.0) {
            fVar16 = sqrtf(fVar16);
          }
          else {
            fVar16 = SQRT(fVar16);
          }
          if (fVar16 < local_8c) {
            bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
            if (((a->klass->_2).naturalAligment < bVar1) ||
               (local_8c = fVar16, local_88 = a,
               (a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseTitan)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(a);
            }
          }
        }
      }
    }
  } while( true );
  while (lVar15 = lVar15 + 0x10, (ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15) {
    if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)
                (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
      goto LAB_04147efd;
    }
  }
LAB_04147edf:
  puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IDisposable,0);
LAB_04147efd:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
  return local_88;
}


// Cameras.InGameCamera$$GetSortedCharacters
// il2cpp: System_Collections_Generic_List_BaseCharacter__o* Cameras_InGameCamera__GetSortedCharacters (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x41481e0

System_Collections_Generic_List_BaseCharacter__o *
Cameras_InGameCamera__GetSortedCharacters(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  GameManagers_InGameManager_o *pGVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Object_array *pSVar5;
  long lVar6;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_07;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_08;
  bool_conflict bVar7;
  System_Collections_Generic_List_object__o *__this_09;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_BaseCharacter__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  _union_329995 _Var10;
  Il2CppMethodPointer pIVar11;
  Il2CppType *pIVar12;
  Il2CppObject *pIVar13;
  _union_329995 local_78;
  Il2CppType *pIStack_70;
  Il2CppObject *local_68;
  _union_329995 local_58;
  Il2CppType *pIStack_50;
  Il2CppObject *local_48;
  _union_329995 local_40;
  Il2CppType *pIStack_38;
  Il2CppObject *local_30;
  
  if (DAT_057049ab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_Characters_BaseCharacter__O);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Characters_BaseCharacter__ToList_BaseChar);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_BaseShifter_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Func_BaseCharacter__int);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Characters_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_List_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_Int32__GetSortedCharacters_b__52_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057049ab = '\x01';
  }
  local_58.genericMethod = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_48 = (Il2CppObject *)0x0;
  local_78.genericMethod = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIStack_70 = (Il2CppType *)0x0;
  local_68 = (Il2CppObject *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  pIVar13 = (Il2CppObject *)0x0;
  __this_09 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_BaseCharacter);
  System_Collections_Generic_List<object>___ctor(__this_09,MethodInfo_List_1_Characters_BaseCharacter);
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
     (pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pGVar3->fields).Humans,
     pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_40,pSVar4,MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    local_48 = local_30;
    local_58 = local_40;
    pIStack_50 = pIStack_38;
    if (__this_09 == (System_Collections_Generic_List_object__o *)0x0) {
      while (__this_00.fields._8_8_ = pIVar11,
            __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar9,
            __this_00.fields._current = pIVar13,
            bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                              (__this_00,(MethodInfo_3185890 *)&local_58), (char)bVar7 != '\0') {
        if (local_48 == (Il2CppObject *)0x0) goto LAB_04148758;
        if (*(char *)&local_48[7].monitor == '\0') {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
    else {
      while (__this_01.fields._8_8_ = pIVar11,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar9,
            __this_01.fields._current = pIVar13,
            bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185890 *)&local_58), lVar6 = MethodInfo_Void_Add,
            (char)bVar7 != '\0') {
        if (local_48 == (Il2CppObject *)0x0) {
LAB_04148758:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (*(char *)&local_48[7].monitor == '\0') {
          piVar1 = &(__this_09->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_09->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_09->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this_09->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = local_48;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_09,local_48,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    __this_02.fields._8_8_ = pIVar11;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar9;
    __this_02.fields._current = pIVar13;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185880 *)&local_58);
    pGVar3 = (__this->fields)._inGameManager;
    if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
       (pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pGVar3->fields).Shifters,
       pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet<object>__GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_40,pSVar4,MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter
                );
      local_68 = local_30;
      local_78 = local_40;
      pIStack_70 = pIStack_38;
      if (__this_09 == (System_Collections_Generic_List_object__o *)0x0) {
        while (__this_03.fields._8_8_ = pIVar11,
              __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar9,
              __this_03.fields._current = pIVar13,
              bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                (__this_03,(MethodInfo_3185890 *)&local_78), (char)bVar7 != '\0') {
          if (local_68 == (Il2CppObject *)0x0) goto LAB_0414875d;
          if (*(char *)&local_68[7].monitor == '\0') {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
      else {
        while (__this_04.fields._8_8_ = pIVar11,
              __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar9,
              __this_04.fields._current = pIVar13,
              bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                (__this_04,(MethodInfo_3185890 *)&local_78), lVar6 = MethodInfo_Void_Add,
              (char)bVar7 != '\0') {
          if (local_68 == (Il2CppObject *)0x0) {
LAB_0414875d:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(char *)&local_68[7].monitor == '\0') {
            piVar1 = &(__this_09->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_09->fields)._items;
            if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_09->fields)._size;
            if (uVar2 < (uint)pSVar5->max_length) {
              (__this_09->fields)._size = uVar2 + 1;
              pSVar5->m_Items[(int)uVar2] = local_68;
              il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_09,local_68,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
      __this_05.fields._8_8_ = pIVar11;
      __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar9;
      __this_05.fields._current = pIVar13;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (__this_05,(MethodInfo_3185880 *)&local_78);
      pGVar3 = (__this->fields)._inGameManager;
      if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
         (pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pGVar3->fields).Titans,
         pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet<object>__GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_40,pSVar4,
                   MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
        _Var10 = local_40;
        pIVar12 = pIStack_38;
        pIVar13 = local_30;
        if (__this_09 == (System_Collections_Generic_List_object__o *)0x0) {
          while (__this_06.fields._8_8_ = pIVar12, __this_06.fields._set = _Var10.genericMethod,
                __this_06.fields._current = pIVar13,
                bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                  (__this_06,(MethodInfo_3185890 *)&stack0xffffffffffffff68),
                (char)bVar7 != '\0') {
            if (pIVar13 == (Il2CppObject *)0x0) goto LAB_04148762;
            if (*(char *)&pIVar13[7].monitor == '\0') {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
        }
        else {
          while (__this_07.fields._8_8_ = pIVar12, __this_07.fields._set = _Var10.genericMethod,
                __this_07.fields._current = pIVar13,
                bVar7 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                  (__this_07,(MethodInfo_3185890 *)&stack0xffffffffffffff68),
                lVar6 = MethodInfo_Void_Add, (char)bVar7 != '\0') {
            if (pIVar13 == (Il2CppObject *)0x0) {
LAB_04148762:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (*(char *)&pIVar13[7].monitor == '\0') {
              piVar1 = &(__this_09->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (__this_09->fields)._items;
              if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              uVar2 = (__this_09->fields)._size;
              if (uVar2 < (uint)pSVar5->max_length) {
                (__this_09->fields)._size = uVar2 + 1;
                pSVar5->m_Items[(int)uVar2] = pIVar13;
                il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_09,pIVar13,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        __this_08.fields._8_8_ = pIVar12;
        __this_08.fields._set = _Var10.genericMethod;
        __this_08.fields._current = pIVar13;
        System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                  (__this_08,(MethodInfo_3185880 *)&stack0xffffffffffffff68);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
          keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_BaseCharacter__int);
          System_Func<object__int>___ctor();
          lVar6 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_TSource__TKey__o **)(lVar6 + 8) = keySelector;
          il2cpp_runtime_glue(lVar6 + 8,keySelector);
        }
        source = System_Linq_Enumerable__OrderBy<object__int>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)__this_09,
                            keySelector,MethodInfo_IOrderedEnumerable_1_Characters_BaseCharacter__O);
        pSVar8 = (System_Collections_Generic_List_BaseCharacter__o *)
                 System_Linq_Enumerable__ToList<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_Characters_BaseCharacter__ToList_BaseChar
                           );
        return pSVar8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.InGameCamera$$UpdateShake
// il2cpp: void Cameras_InGameCamera__UpdateShake (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x41480b0

void Cameras_InGameCamera__UpdateShake(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  undefined8 uVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  bool_conflict bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  
  fVar6 = (__this->fields)._shakeTimeLeft;
  if (0.0 < fVar6) {
    fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._shakeTimeLeft = fVar6 - fVar5;
    pUVar3 = (__this->fields).Cache;
    if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
       (__this_00 = (pUVar3->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar4 = (__this->fields)._shakeFlip;
    UVar8 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    fVar6 = (__this->fields)._currentShakeDistance;
    fVar7 = fVar6 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar5 = fVar6 * (float)uVar2;
    fVar6 = fVar6 * (float)((ulong)uVar2 >> 0x20);
    if ((char)bVar4 == '\0') {
      fVar5 = UVar8.fields.x - fVar5;
      fVar6 = UVar8.fields.y - fVar6;
      fVar7 = UVar8.fields.z - fVar7;
    }
    else {
      fVar5 = UVar8.fields.x + fVar5;
      fVar6 = UVar8.fields.y + fVar6;
      fVar7 = UVar8.fields.z + fVar7;
    }
    UVar8.fields.y = fVar6;
    UVar8.fields.x = fVar5;
    UVar8.fields.z = fVar7;
    UnityEngine_Transform__set_position(__this_00,UVar8,(MethodInfo *)0x0);
    pbVar1 = &(__this->fields)._shakeFlip;
    *(byte *)pbVar1 = (byte)*pbVar1 ^ 1;
    fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._currentShakeDistance =
         (fVar6 * -0.15 * 60.0 + 1.0) * (__this->fields)._currentShakeDistance;
  }
  return;
}


// Cameras.InGameCamera$$.ctor
// il2cpp: void Cameras_InGameCamera___ctor (Cameras_InGameCamera_o* __this, const MethodInfo* method);
// 0x4148a90

void Cameras_InGameCamera___ctor(Cameras_InGameCamera_o *__this,MethodInfo *method)

{
  Utility_Cycle_InGameCamera_SpecateMode__o *__this_00;
  
  if (DAT_057049ac == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Cycle_1_Cameras_InGameCamera_SpecateMode);
    il2cpp_init_method_metadata(&TypeInfo_Cycle_SpecateMode);
    DAT_057049ac = '\x01';
  }
  __this_00 = (Utility_Cycle_InGameCamera_SpecateMode__o *)il2cpp_runtime_glue(TypeInfo_Cycle_SpecateMode);
  Utility_Cycle<Int32Enum>___ctor((Utility_Cycle_T__o *)__this_00,MethodInfo_Cycle_1_Cameras_InGameCamera_SpecateMode);
  (__this->fields).SpecMode = __this_00;
  il2cpp_runtime_glue(&(__this->fields).SpecMode);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Cameras.InGameCamera$$.cctor
// il2cpp: void Cameras_InGameCamera___cctor (const MethodInfo* method);
// 0x4148b10

/* WARNING: Type propagation algorithm not settling */

void Cameras_InGameCamera___cctor(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Int32_array *layers;
  
  if (DAT_057049ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_057049ad = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (layers != (System_Int32_array *)0x0) {
    iVar1 = (int)layers->max_length;
    if (iVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x3c);
      if (iVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x38);
        UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        (*(UnityEngine_LayerMask_Fields **)(TypeInfo_InGameCamera + 0xb8))->m_Mask =
             (int32_t)UVar3.fields.m_Mask;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


