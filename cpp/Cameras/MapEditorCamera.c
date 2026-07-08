// Type: Cameras.MapEditorCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Cameras/MapEditorCamera.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Cameras/MapEditorCamera.cs  [CHANGED since prior version]
// --------------------------------

// Cameras.MapEditorCamera$$GetClampedDeltaTime
// il2cpp: float Cameras_MapEditorCamera__GetClampedDeltaTime (const MethodInfo* method);
// 0x4148c80

float Cameras_MapEditorCamera__GetClampedDeltaTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  if (0.033333335 <= fVar1) {
    fVar1 = 0.033333335;
  }
  return fVar1;
}


// Cameras.MapEditorCamera$$GetScreenScale
// il2cpp: float Cameras_MapEditorCamera__GetScreenScale (const MethodInfo* method);
// 0x4148ca0

float Cameras_MapEditorCamera__GetScreenScale(MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  
  iVar1 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar2 = 1.0;
  if (1.0 <= (float)iVar1) {
    fVar2 = (float)iVar1;
  }
  return fVar2 / 1080.0;
}


// Cameras.MapEditorCamera$$Awake
// il2cpp: void Cameras_MapEditorCamera__Awake (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x4148cd0

void Cameras_MapEditorCamera__Awake(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *__this_00;
  
  if (DAT_057049af == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_057049af = '\x01';
  }
  Cameras_BaseCamera__Awake((Cameras_BaseCamera_o *)__this,method);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar1 != 0) {
    (__this->fields)._input = *(Settings_MapEditorInputSettings_o **)(lVar1 + 0x50);
    il2cpp_runtime_glue(&(__this->fields)._input);
    (__this->fields)._settings =
         *(Settings_MapEditorSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
    il2cpp_runtime_glue(&(__this->fields)._settings);
    if (DAT_057049b0 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
      DAT_057049b0 = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
    if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) &&
       (__this_00 = (__this->fields).Camera, __this_00 != (UnityEngine_Camera_o *)0x0)) {
      UnityEngine_Camera__set_farClipPlane
                (__this_00,(float)*(int *)(lVar1 + 0x14),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MapEditorCamera$$ApplyGraphicsSettings
// il2cpp: void Cameras_MapEditorCamera__ApplyGraphicsSettings (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x4148db0

void Cameras_MapEditorCamera__ApplyGraphicsSettings
               (Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *__this_00;
  
  if (DAT_057049b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_057049b0 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) &&
     (__this_00 = (__this->fields).Camera, __this_00 != (UnityEngine_Camera_o *)0x0)) {
    UnityEngine_Camera__set_farClipPlane(__this_00,(float)*(int *)(lVar1 + 0x14),(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MapEditorCamera$$CreateUICamera
// il2cpp: void Cameras_MapEditorCamera__CreateUICamera (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x4148e20

void Cameras_MapEditorCamera__CreateUICamera(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  return;
}


// Cameras.MapEditorCamera$$Update
// il2cpp: void Cameras_MapEditorCamera__Update (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x4148e30

void Cameras_MapEditorCamera__Update(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (DAT_057049b1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057049b1 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    if (*(char *)((long)&(pUVar1->fields).IsMouseUI + 1) == '\0') {
      Cameras_MapEditorCamera__UpdateMovement(__this,method_00);
    }
    Cameras_MapEditorCamera__UpdateRotation(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MapEditorCamera$$UpdateMovement
// il2cpp: void Cameras_MapEditorCamera__UpdateMovement (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x4148ec0

void Cameras_MapEditorCamera__UpdateMovement(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  float speed;
  undefined8 uVar1;
  Settings_MapEditorInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  Settings_MapEditorSettings_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  UnityEngine_Camera_o *pUVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  MethodInfo *method_00;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o value;
  float local_4c;
  undefined8 local_48;
  
  if (DAT_057049b2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    DAT_057049b2 = '\x01';
    if (DAT_056fdd15 != '\0') goto LAB_04148ee4;
LAB_04148fbf:
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
    pSVar2 = (__this->fields)._input;
  }
  else {
    if (DAT_056fdd15 == '\0') goto LAB_04148fbf;
LAB_04148ee4:
    pSVar2 = (__this->fields)._input;
  }
  if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).SaveMap, pSVar3 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_041493b0;
  uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  local_4c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  bVar9 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  pSVar2 = (__this->fields)._input;
  if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).Forward, pSVar3 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_041493b0;
  bVar9 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
  local_48._0_4_ = (float)uVar1;
  local_48._4_4_ = (float)((ulong)uVar1 >> 0x20);
  if ((char)bVar9 == '\0') {
    pSVar2 = (__this->fields)._input;
    if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Back, pSVar3 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_041493b0;
    bVar9 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pUVar4 = (__this->fields).Cache;
      if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
      goto LAB_041493b0;
      UVar12 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
      local_48 = CONCAT44(local_48._4_4_ - UVar12.fields.y,(float)local_48 - UVar12.fields.x);
      local_4c = local_4c - UVar12.fields.z;
      uVar1 = local_48;
    }
  }
  else {
    pUVar4 = (__this->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
    goto LAB_041493b0;
    UVar12 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
    local_48 = CONCAT44(local_48._4_4_ + UVar12.fields.y,(float)local_48 + UVar12.fields.x);
    local_4c = local_4c + UVar12.fields.z;
    uVar1 = local_48;
  }
  local_48 = uVar1;
  pSVar2 = (__this->fields)._input;
  if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).Right, pSVar3 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_041493b0;
  bVar9 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    pSVar2 = (__this->fields)._input;
    if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Left, pSVar3 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_041493b0;
    bVar9 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pUVar4 = (__this->fields).Cache;
      if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
      goto LAB_041493b0;
      UVar12 = UnityEngine_Transform__get_right(pUVar5,(MethodInfo *)0x0);
      local_48 = CONCAT44(local_48._4_4_ - UVar12.fields.y,(float)local_48 - UVar12.fields.x);
      local_4c = local_4c - UVar12.fields.z;
    }
  }
  else {
    pUVar4 = (__this->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
    goto LAB_041493b0;
    UVar12 = UnityEngine_Transform__get_right(pUVar5,(MethodInfo *)0x0);
    local_48 = CONCAT44(local_48._4_4_ + UVar12.fields.y,(float)local_48 + UVar12.fields.x);
    local_4c = local_4c + UVar12.fields.z;
  }
  pSVar2 = (__this->fields)._input;
  if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).Up, pSVar3 == (Settings_KeybindSetting_o *)0x0)) goto LAB_041493b0;
  bVar9 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    pSVar2 = (__this->fields)._input;
    if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Down, pSVar3 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_041493b0;
    bVar9 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pUVar4 = (__this->fields).Cache;
      if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
      goto LAB_041493b0;
      UVar12 = UnityEngine_Transform__get_up(pUVar5,(MethodInfo *)0x0);
      local_48 = CONCAT44(local_48._4_4_ - UVar12.fields.y,(float)local_48 - UVar12.fields.x);
      local_4c = local_4c - UVar12.fields.z;
    }
  }
  else {
    pUVar4 = (__this->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
    goto LAB_041493b0;
    UVar12 = UnityEngine_Transform__get_up(pUVar5,(MethodInfo *)0x0);
    local_48 = CONCAT44(local_48._4_4_ + UVar12.fields.y,(float)local_48 + UVar12.fields.x);
    local_4c = local_4c + UVar12.fields.z;
  }
  pSVar6 = (__this->fields)._settings;
  if ((((pSVar6 == (Settings_MapEditorSettings_o *)0x0) ||
       (pSVar7 = (pSVar6->fields).CameraMoveSpeed, pSVar7 == (Settings_FloatSetting_o *)0x0)) ||
      (pSVar2 = (__this->fields)._input, pSVar2 == (Settings_MapEditorInputSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).Slow, pSVar3 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_041493b0;
  speed = (pSVar7->fields)._value;
  bVar9 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    pSVar2 = (__this->fields)._input;
    if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Fast, pSVar3 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_041493b0;
    bVar9 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pSVar6 = (__this->fields)._settings;
      if (pSVar6 == (Settings_MapEditorSettings_o *)0x0) goto LAB_041493b0;
      pSVar7 = (pSVar6->fields).CameraFastMoveSpeed;
      goto joined_r0x04149276;
    }
  }
  else {
    pSVar6 = (__this->fields)._settings;
    if (pSVar6 == (Settings_MapEditorSettings_o *)0x0) goto LAB_041493b0;
    pSVar7 = (pSVar6->fields).CameraSlowMoveSpeed;
joined_r0x04149276:
    if (pSVar7 == (Settings_FloatSetting_o *)0x0) goto LAB_041493b0;
    speed = (pSVar7->fields)._value;
  }
  fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pUVar4 = (__this->fields).Cache;
  if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    if (0.033333335 <= fVar11) {
      fVar11 = 0.033333335;
    }
    UVar12 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    value.fields.x = UVar12.fields.x + speed * (float)local_48 * fVar11;
    value.fields.y = UVar12.fields.y + speed * local_48._4_4_ * fVar11;
    value.fields.z = UVar12.fields.z + local_4c * fVar11 * speed;
    method_00 = (MethodInfo *)0x0;
    UnityEngine_Transform__set_position(pUVar5,value,(MethodInfo *)0x0);
    Cameras_MapEditorCamera__UpdateDragMovement(__this,speed,method_00);
    Cameras_MapEditorCamera__UpdateZoomMovement(__this,speed,method_00);
    pSVar2 = (__this->fields)._input;
    if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).ToggleOrthographic, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
      bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pUVar8 = (__this->fields).Camera;
      if (pUVar8 != (UnityEngine_Camera_o *)0x0) {
        bVar9 = UnityEngine_Camera__get_orthographic(pUVar8,(MethodInfo *)0x0);
        UnityEngine_Camera__set_orthographic(pUVar8,(uint)(byte)((byte)bVar9 ^ 1),(MethodInfo *)0x0)
        ;
        pUVar8 = (__this->fields).Camera;
        if (pUVar8 != (UnityEngine_Camera_o *)0x0) {
          bVar9 = UnityEngine_Camera__get_orthographic(pUVar8,(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pUVar8 = (__this->fields).Camera;
          iVar10 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Camera_o *)0x0) {
            UnityEngine_Camera__set_orthographicSize(pUVar8,(float)iVar10 * 0.25,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_041493b0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MapEditorCamera$$UpdateDragMovement
// il2cpp: void Cameras_MapEditorCamera__UpdateDragMovement (Cameras_MapEditorCamera_o* __this, float speed, const MethodInfo* method);
// 0x41497c0

void Cameras_MapEditorCamera__UpdateDragMovement
               (Cameras_MapEditorCamera_o *__this,float speed,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Settings_MapEditorInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *pSVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  float local_58;
  float fStack_54;
  
  pSVar3 = (__this->fields)._input;
  if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).Pan, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
    bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar4,0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      *(undefined1 *)((long)&(__this->fields)._wasRotating + 1) = 1;
      UVar12 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      (__this->fields)._startDrag = (int)UVar12.fields._0_8_;
      (__this->fields)._lastDragPosition.fields.x = (float)(int)((ulong)UVar12.fields._0_8_ >> 0x20)
      ;
      (__this->fields)._lastDragPosition.fields.y = UVar12.fields.z;
      return;
    }
    pSVar3 = (__this->fields)._input;
    if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (pSVar4 = (pSVar3->fields).Pan, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
      bVar8 = Settings_KeybindSetting__GetKey(pSVar4,0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        pSVar3 = (__this->fields)._input;
        if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
           (pSVar4 = (pSVar3->fields).Pan, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
          bVar8 = Settings_KeybindSetting__GetKeyUp(pSVar4,0,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          *(undefined1 *)((long)&(__this->fields)._wasRotating + 1) = 0;
          return;
        }
      }
      else {
        if (*(char *)((long)&(__this->fields)._wasRotating + 1) == '\0') {
          return;
        }
        UVar12 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        uVar1 = (__this->fields)._startDrag;
        uVar2 = (__this->fields)._lastDragPosition.fields.x;
        UVar13 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        (__this->fields)._startDrag = (int)UVar13.fields._0_8_;
        (__this->fields)._lastDragPosition.fields.x =
             (float)(int)((ulong)UVar13.fields._0_8_ >> 0x20);
        (__this->fields)._lastDragPosition.fields.y = UVar13.fields.z;
        fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        iVar9 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        pUVar5 = (__this->fields).Cache;
        if ((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar6 = (pUVar5->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          UVar13 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          pUVar5 = (__this->fields).Cache;
          if ((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar7 = (pUVar5->fields).Transform, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
            local_98 = UVar12.fields.x;
            fStack_94 = UVar12.fields.y;
            if (0.033333335 <= fVar10) {
              fVar10 = 0.033333335;
            }
            local_98 = local_98 - (float)uVar1;
            fVar11 = 1.0;
            if (1.0 <= (float)iVar9) {
              fVar11 = (float)iVar9;
            }
            fVar11 = fVar11 / 1080.0;
            UVar12 = UnityEngine_Transform__get_right(pUVar7,(MethodInfo *)0x0);
            local_88 = UVar13.fields.x;
            fStack_84 = UVar13.fields.y;
            value.fields.x = local_88 - local_98 * UVar12.fields.x * fVar10 * speed * fVar11;
            value.fields.y = fStack_84 - local_98 * UVar12.fields.y * fVar10 * speed * fVar11;
            value.fields.z = UVar13.fields.z - UVar12.fields.z * local_98 * fVar10 * speed * fVar11;
            UnityEngine_Transform__set_position(pUVar6,value,(MethodInfo *)0x0);
            pUVar5 = (__this->fields).Cache;
            if ((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar6 = (pUVar5->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
              UVar12 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
              pUVar5 = (__this->fields).Cache;
              if ((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar7 = (pUVar5->fields).Transform, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                fStack_94 = fStack_94 - (float)uVar2;
                UVar13 = UnityEngine_Transform__get_up(pUVar7,(MethodInfo *)0x0);
                local_88 = UVar12.fields.x;
                fStack_84 = UVar12.fields.y;
                value_00.fields.x = local_88 - fVar11 * fVar10 * fStack_94 * UVar13.fields.x * speed
                ;
                value_00.fields.y =
                     fStack_84 - fVar11 * fVar10 * fStack_94 * UVar13.fields.y * speed;
                value_00.fields.z =
                     UVar12.fields.z - fVar11 * fVar10 * UVar13.fields.z * fStack_94 * speed;
                UnityEngine_Transform__set_position(pUVar6,value_00,(MethodInfo *)0x0);
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


// Cameras.MapEditorCamera$$UpdateZoomMovement
// il2cpp: void Cameras_MapEditorCamera__UpdateZoomMovement (Cameras_MapEditorCamera_o* __this, float speed, const MethodInfo* method);
// 0x4149ab0

void Cameras_MapEditorCamera__UpdateZoomMovement
               (Cameras_MapEditorCamera_o *__this,float speed,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_MapEditorMenu_o *pUVar3;
  UnityEngine_Object_o *pUVar4;
  Settings_MapEditorInputSettings_o *pSVar5;
  Settings_KeybindSetting_o *pSVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  bool_conflict bVar9;
  bool_conflict bVar10;
  UnityEngine_Object_o *x;
  UnityEngine_Camera_o *pUVar11;
  UnityEngine_Transform_o *__this_00;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  float local_28;
  float fStack_24;
  
  if (DAT_057049b3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057049b3 = '\x01';
  }
  pUVar3 = (__this->fields)._menu;
  if (pUVar3 == (UI_MapEditorMenu_o *)0x0) goto LAB_04149e1d;
  if ((char)(pUVar3->fields).IsMouseUI != '\0') {
    return;
  }
  pUVar4 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pUVar4 == (UnityEngine_Object_o *)0x0) {
LAB_04149b4f:
    x = (UnityEngine_Object_o *)0x0;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if ((pUVar4->klass->_2).naturalAligment < bVar1) goto LAB_04149b4f;
    x = (UnityEngine_Object_o *)0x0;
    if ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MapEditorGameManager) {
      x = pUVar4;
    }
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    if (x == (UnityEngine_Object_o *)0x0) goto LAB_04149e1d;
    if ((x[6].monitor != (void *)0x0) && (*(char *)((long)x[6].monitor + 0x10) != '\0')) {
      return;
    }
  }
  fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pUVar11 = (__this->fields).Camera;
  if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
    bVar9 = UnityEngine_Camera__get_orthographic(pUVar11,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._input;
    if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (pSVar6 = (pSVar5->fields).ZoomIn, pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
      if (0.033333335 <= fVar12) {
        fVar12 = 0.033333335;
      }
      bVar10 = Settings_KeybindSetting__GetKey(pSVar6,0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if ((char)bVar10 == '\0') {
          pSVar5 = (__this->fields)._input;
          if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
             (pSVar6 = (pSVar5->fields).ZoomOut, pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
            bVar9 = Settings_KeybindSetting__GetKey(pSVar6,0,(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              return;
            }
            pUVar7 = (__this->fields).Cache;
            if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
               (__this_00 = (pUVar7->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)
               ) {
              UVar15 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
              pUVar7 = (__this->fields).Cache;
              if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar8 = (pUVar7->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                UVar16 = UnityEngine_Transform__get_forward(pUVar8,(MethodInfo *)0x0);
                fVar13 = UVar16.fields.z * fVar12 * speed;
                fVar14 = speed * fVar12 * UVar16.fields.x;
                fVar12 = speed * fVar12 * UVar16.fields.y;
                local_28 = UVar15.fields.x;
                fStack_24 = UVar15.fields.y;
                local_28 = local_28 - (fVar14 + fVar14);
                fStack_24 = fStack_24 - (fVar12 + fVar12);
                fVar12 = UVar15.fields.z - (fVar13 + fVar13);
                goto LAB_04149e0d;
              }
            }
          }
        }
        else {
          pUVar7 = (__this->fields).Cache;
          if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
             (__this_00 = (pUVar7->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0))
          {
            UVar15 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
            pUVar7 = (__this->fields).Cache;
            if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar8 = (pUVar7->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
              UVar16 = UnityEngine_Transform__get_forward(pUVar8,(MethodInfo *)0x0);
              fVar13 = UVar16.fields.z * fVar12 * speed;
              fVar14 = speed * fVar12 * UVar16.fields.x;
              fVar12 = speed * fVar12 * UVar16.fields.y;
              local_28 = UVar15.fields.x;
              fStack_24 = UVar15.fields.y;
              local_28 = local_28 + fVar14 + fVar14;
              fStack_24 = fStack_24 + fVar12 + fVar12;
              fVar12 = fVar13 + fVar13 + UVar15.fields.z;
LAB_04149e0d:
              UVar15.fields.y = fStack_24;
              UVar15.fields.x = local_28;
              UVar15.fields.z = fVar12;
              UnityEngine_Transform__set_position(__this_00,UVar15,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else if ((char)bVar10 == '\0') {
        pSVar5 = (__this->fields)._input;
        if ((pSVar5 != (Settings_MapEditorInputSettings_o *)0x0) &&
           (pSVar6 = (pSVar5->fields).ZoomOut, pSVar6 != (Settings_KeybindSetting_o *)0x0)) {
          bVar9 = Settings_KeybindSetting__GetKey(pSVar6,0,(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pUVar11 = (__this->fields).Camera;
          if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
            fVar13 = UnityEngine_Camera__get_orthographicSize(pUVar11,(MethodInfo *)0x0);
            fVar13 = fVar13 + fVar12 * speed + fVar12 * speed;
            goto LAB_04149d45;
          }
        }
      }
      else {
        pUVar11 = (__this->fields).Camera;
        if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
          fVar13 = UnityEngine_Camera__get_orthographicSize(pUVar11,(MethodInfo *)0x0);
          fVar13 = fVar13 - (fVar12 * speed + fVar12 * speed);
LAB_04149d45:
          UnityEngine_Camera__set_orthographicSize(pUVar11,fVar13,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_04149e1d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MapEditorCamera$$UpdateRotation
// il2cpp: void Cameras_MapEditorCamera__UpdateRotation (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x41493c0

void Cameras_MapEditorCamera__UpdateRotation(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  Settings_MapEditorInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *pSVar4;
  Settings_MapEditorSettings_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Transform_o *__this_00;
  UI_MapEditorMenu_o *pUVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  MethodInfo *method_00;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o axis;
  
  if (DAT_057049b4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&"Mouse Y");
    il2cpp_init_method_metadata(&"Mouse X");
    DAT_057049b4 = '\x01';
  }
  if ((char)(__this->fields)._wasRotating == '\0') {
    pUVar9 = (__this->fields)._menu;
    if (pUVar9 == (UI_MapEditorMenu_o *)0x0) goto LAB_041497b4;
    if ((char)(pUVar9->fields).IsMouseUI != '\0') {
      return;
    }
  }
  *(undefined1 *)&(__this->fields)._wasRotating = 0;
  pSVar3 = (__this->fields)._input;
  if ((pSVar3 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).RotateCamera, pSVar4 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_041497b4;
  bVar10 = Settings_KeybindSetting__GetKey(pSVar4,0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    fVar12 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
    fVar13 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._settings;
    if ((pSVar5 == (Settings_MapEditorSettings_o *)0x0) ||
       (pSVar6 = (pSVar5->fields).CameraRotateSpeed, pSVar6 == (Settings_FloatSetting_o *)0x0))
    goto LAB_041497b4;
    fVar1 = (pSVar6->fields)._value;
    fVar14 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    iVar11 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    pUVar7 = (__this->fields).Cache;
    if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar8 = (pUVar7->fields).Transform, pUVar8 == (UnityEngine_Transform_o *)0x0))
    goto LAB_041497b4;
    if (0.033333335 <= fVar14) {
      fVar14 = 0.033333335;
    }
    fVar17 = 1.0;
    if (1.0 <= (float)iVar11) {
      fVar17 = (float)iVar11;
    }
    UVar18 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    UnityEngine_Transform__RotateAround
              (pUVar8,UVar18,
               (UnityEngine_Vector3_o)
               *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
               fVar12 * fVar14 * fVar1 * (fVar17 / 1080.0),(MethodInfo *)0x0);
    pUVar7 = (__this->fields).Cache;
    if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar8 = (pUVar7->fields).Transform, pUVar8 == (UnityEngine_Transform_o *)0x0))
    goto LAB_041497b4;
    UVar18 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
    pUVar7 = (__this->fields).Cache;
    if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
       (__this_00 = (pUVar7->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
    goto LAB_041497b4;
    axis = UnityEngine_Transform__get_right(__this_00,(MethodInfo *)0x0);
    UnityEngine_Transform__RotateAround
              (pUVar8,UVar18,axis,-(fVar1 * fVar13 * fVar14 * (fVar17 / 1080.0)),(MethodInfo *)0x0);
    *(undefined1 *)&(__this->fields)._wasRotating = 1;
  }
  pSVar3 = (__this->fields)._input;
  if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).SnapCameraLeft, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      pSVar3 = (__this->fields)._input;
      if ((pSVar3 == (Settings_MapEditorInputSettings_o *)0x0) ||
         (pSVar4 = (pSVar3->fields).SnapCameraRight, pSVar4 == (Settings_KeybindSetting_o *)0x0))
      goto LAB_041497b4;
      method_00 = (MethodInfo *)0x0;
      bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,0,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        pSVar3 = (__this->fields)._input;
        if ((pSVar3 == (Settings_MapEditorInputSettings_o *)0x0) ||
           (pSVar4 = (pSVar3->fields).SnapCameraUp, pSVar4 == (Settings_KeybindSetting_o *)0x0))
        goto LAB_041497b4;
        method_00 = (MethodInfo *)0x0;
        bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,0,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          pSVar3 = (__this->fields)._input;
          if ((pSVar3 == (Settings_MapEditorInputSettings_o *)0x0) ||
             (pSVar4 = (pSVar3->fields).SnapCameraDown, pSVar4 == (Settings_KeybindSetting_o *)0x0))
          goto LAB_041497b4;
          method_00 = (MethodInfo *)0x0;
          bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar4,0,(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            return;
          }
          if (DAT_0570298f == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_0570298f = '\x01';
          }
          uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x30);
          uVar15 = (undefined4)uVar2;
          uVar16 = (undefined4)((ulong)uVar2 >> 0x20);
          fVar12 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x38);
        }
        else {
          if (DAT_0570222a == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_0570222a = '\x01';
          }
          uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
          uVar15 = (undefined4)uVar2;
          uVar16 = (undefined4)((ulong)uVar2 >> 0x20);
          fVar12 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
        }
      }
      else {
        if (DAT_056fde1f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
        }
        uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        uVar15 = (undefined4)uVar2;
        uVar16 = (undefined4)((ulong)uVar2 >> 0x20);
        fVar12 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      }
    }
    else {
      if (DAT_0570266b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_0570266b = '\x01';
      }
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
      uVar15 = (undefined4)uVar2;
      uVar16 = (undefined4)((ulong)uVar2 >> 0x20);
      fVar12 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
    }
    UVar18.fields.y = (float)uVar16;
    UVar18.fields.x = (float)uVar15;
    UVar18.fields.z = fVar12;
    Cameras_MapEditorCamera__SnapCameraToAxis(__this,UVar18,method_00);
    return;
  }
LAB_041497b4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MapEditorCamera$$AlignedWithWorldAxis
// il2cpp: bool Cameras_MapEditorCamera__AlignedWithWorldAxis (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x414a490

bool_conflict
Cameras_MapEditorCamera__AlignedWithWorldAxis(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  bool_conflict bVar4;
  undefined8 unaff_RBP;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  undefined7 uVar5;
  
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar3 = (pUVar2->fields).Transform, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    UVar9 = UnityEngine_Transform__get_forward(pUVar3,(MethodInfo *)0x0);
    if (DAT_056fde21 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde21 = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
    fVar8 = UVar9.fields.y - (float)((ulong)uVar1 >> 0x20);
    fVar6 = UVar9.fields.z - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
    fVar7 = UVar9.fields.x - (float)uVar1;
    uVar5 = (undefined7)((ulong)unaff_RBP >> 8);
    bVar4 = (bool_conflict)CONCAT71(uVar5,1);
    if (9.9999994e-11 <= fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6) {
      pUVar2 = (__this->fields).Cache;
      if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar3 = (pUVar2->fields).Transform, pUVar3 == (UnityEngine_Transform_o *)0x0))
      goto LAB_0414a87a;
      UVar9 = UnityEngine_Transform__get_forward(pUVar3,(MethodInfo *)0x0);
      if (DAT_057027fd == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_057027fd = '\x01';
      }
      uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x54);
      fVar8 = UVar9.fields.y - (float)((ulong)uVar1 >> 0x20);
      fVar6 = UVar9.fields.z - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x5c);
      fVar7 = UVar9.fields.x - (float)uVar1;
      if (9.9999994e-11 <= fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6) {
        pUVar2 = (__this->fields).Cache;
        if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar3 = (pUVar2->fields).Transform, pUVar3 == (UnityEngine_Transform_o *)0x0))
        goto LAB_0414a87a;
        UVar9 = UnityEngine_Transform__get_forward(pUVar3,(MethodInfo *)0x0);
        if (DAT_0570298f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_0570298f = '\x01';
        }
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x30);
        fVar8 = UVar9.fields.y - (float)((ulong)uVar1 >> 0x20);
        fVar6 = UVar9.fields.z - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x38);
        fVar7 = UVar9.fields.x - (float)uVar1;
        if (9.9999994e-11 <= fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6) {
          pUVar2 = (__this->fields).Cache;
          if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar3 = (pUVar2->fields).Transform, pUVar3 == (UnityEngine_Transform_o *)0x0))
          goto LAB_0414a87a;
          UVar9 = UnityEngine_Transform__get_forward(pUVar3,(MethodInfo *)0x0);
          if (DAT_0570222a == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_0570222a = '\x01';
          }
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
          fVar8 = UVar9.fields.y - (float)((ulong)uVar1 >> 0x20);
          fVar6 = UVar9.fields.z - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
          fVar7 = UVar9.fields.x - (float)uVar1;
          if (9.9999994e-11 <= fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6) {
            pUVar2 = (__this->fields).Cache;
            if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar3 = (pUVar2->fields).Transform, pUVar3 == (UnityEngine_Transform_o *)0x0))
            goto LAB_0414a87a;
            UVar9 = UnityEngine_Transform__get_forward(pUVar3,(MethodInfo *)0x0);
            if (DAT_056fde1f == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fde1f = '\x01';
            }
            uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
            fVar8 = UVar9.fields.y - (float)((ulong)uVar1 >> 0x20);
            fVar6 = UVar9.fields.z - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
            fVar7 = UVar9.fields.x - (float)uVar1;
            if (9.9999994e-11 <= fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6) {
              pUVar2 = (__this->fields).Cache;
              if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
                 (pUVar3 = (pUVar2->fields).Transform, pUVar3 == (UnityEngine_Transform_o *)0x0))
              goto LAB_0414a87a;
              UVar9 = UnityEngine_Transform__get_forward(pUVar3,(MethodInfo *)0x0);
              if (DAT_0570266b == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector3);
                DAT_0570266b = '\x01';
              }
              uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
              fVar8 = UVar9.fields.y - (float)((ulong)uVar1 >> 0x20);
              fVar6 = UVar9.fields.z - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
              fVar7 = UVar9.fields.x - (float)uVar1;
              bVar4 = (bool_conflict)
                      CONCAT71(uVar5,fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6 < 9.9999994e-11);
            }
          }
        }
      }
    }
    return bVar4;
  }
LAB_0414a87a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MapEditorCamera$$AlignToWorldAxis
// il2cpp: void Cameras_MapEditorCamera__AlignToWorldAxis (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x414a880

void Cameras_MapEditorCamera__AlignToWorldAxis(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  float local_98;
  float fStack_94;
  undefined8 local_88;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar2 = (pUVar1->fields).Transform, pUVar2 == (UnityEngine_Transform_o *)0x0))
  goto LAB_0414afab;
  UVar17 = UnityEngine_Transform__get_forward(pUVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar2 = (pUVar1->fields).Transform, pUVar2 == (UnityEngine_Transform_o *)0x0))
  goto LAB_0414afab;
  UVar18 = UnityEngine_Transform__get_up(pUVar2,(MethodInfo *)0x0);
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  uVar13 = (undefined4)*puVar4;
  uVar14 = (undefined4)((ulong)*puVar4 >> 0x20);
  fVar12 = *(float *)(puVar4 + 1);
  local_98 = UVar17.fields.x;
  fStack_94 = UVar17.fields.y;
  fVar11 = ABS(local_98);
  fVar5 = ABS(fStack_94);
  fVar8 = ABS(UVar17.fields.z);
  fVar16 = ABS(UVar18.fields.x);
  fVar15 = ABS(UVar18.fields.y);
  fVar10 = ABS(UVar18.fields.z);
  if ((fVar11 <= fVar5) || (fVar11 <= fVar8)) {
    if ((fVar5 <= fVar11) || (fVar5 <= fVar8)) {
      fVar9 = fVar12;
      uVar6 = uVar13;
      uVar7 = uVar14;
      if ((fVar11 < fVar8) && (fVar5 < fVar8)) {
        if (UVar17.fields.z <= 0.0) {
          if (DAT_057027fd == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_057027fd = '\x01';
            puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          }
          uVar6 = (undefined4)*(undefined8 *)((long)puVar4 + 0x54);
          uVar7 = (undefined4)((ulong)*(undefined8 *)((long)puVar4 + 0x54) >> 0x20);
          fVar9 = *(float *)((long)puVar4 + 0x5c);
        }
        else {
          if (DAT_056fde21 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fde21 = '\x01';
            puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          }
          uVar6 = (undefined4)puVar4[9];
          uVar7 = (undefined4)((ulong)puVar4[9] >> 0x20);
          fVar9 = *(float *)(puVar4 + 10);
        }
      }
    }
    else if (0.0 < fStack_94) {
      if (DAT_056fde1f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde1f = '\x01';
        puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      uVar6 = (undefined4)puVar4[3];
      uVar7 = (undefined4)((ulong)puVar4[3] >> 0x20);
      fVar9 = *(float *)(puVar4 + 4);
    }
    else {
      if (DAT_0570266b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_0570266b = '\x01';
        puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      fVar9 = *(float *)((long)puVar4 + 0x2c);
      uVar6 = (int)*(undefined8 *)((long)puVar4 + 0x24);
      uVar7 = (int)((ulong)*(undefined8 *)((long)puVar4 + 0x24) >> 0x20);
    }
joined_r0x0414ac3a:
    if (fVar16 <= fVar15) goto LAB_0414ad6e;
LAB_0414ac40:
    if (fVar16 <= fVar10) goto LAB_0414ad6e;
    if (UVar18.fields.x <= 0.0) {
      if (DAT_0570298f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_0570298f = '\x01';
      }
      puVar4 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x30);
      pfVar3 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x38);
    }
    else {
      if (DAT_0570222a == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_0570222a = '\x01';
      }
      puVar4 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
      pfVar3 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
    }
LAB_0414af49:
    uVar13 = (undefined4)*puVar4;
    uVar14 = (undefined4)((ulong)*puVar4 >> 0x20);
    fVar12 = *pfVar3;
  }
  else {
    if (local_98 <= 0.0) {
      if (DAT_0570298f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_0570298f = '\x01';
        puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      uVar6 = (undefined4)puVar4[6];
      uVar7 = (undefined4)((ulong)puVar4[6] >> 0x20);
      fVar9 = *(float *)(puVar4 + 7);
      goto joined_r0x0414ac3a;
    }
    if (DAT_0570222a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_0570222a = '\x01';
      puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    }
    uVar6 = (undefined4)*(undefined8 *)((long)puVar4 + 0x3c);
    uVar7 = (undefined4)((ulong)*(undefined8 *)((long)puVar4 + 0x3c) >> 0x20);
    fVar9 = *(float *)((long)puVar4 + 0x44);
    if (fVar15 < fVar16) goto LAB_0414ac40;
LAB_0414ad6e:
    if ((fVar16 < fVar15) && (fVar10 < fVar15)) {
      if (UVar18.fields.y <= 0.0) {
        if (DAT_0570266b == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_0570266b = '\x01';
        }
        puVar4 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
        pfVar3 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
      }
      else {
        if (DAT_056fde1f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
        }
        puVar4 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        pfVar3 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      }
      goto LAB_0414af49;
    }
    if ((fVar16 < fVar10) && (fVar15 < fVar10)) {
      if (UVar18.fields.z <= 0.0) {
        if (DAT_057027fd == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_057027fd = '\x01';
        }
        puVar4 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x54);
        pfVar3 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x5c);
      }
      else {
        if (DAT_056fde21 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde21 = '\x01';
        }
        puVar4 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
        pfVar3 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
      }
      goto LAB_0414af49;
    }
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar2 = (pUVar1->fields).Transform;
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UVar17.fields.y = (float)uVar7;
      UVar17.fields.x = (float)uVar6;
      UVar17.fields.z = fVar9;
      UnityEngine_Transform__set_forward(pUVar2,UVar17,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).Cache;
      if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar18.fields.z = fVar12;
        UVar18.fields.x = (float)uVar13;
        UVar18.fields.y = (float)uVar14;
        UnityEngine_Transform__set_up(pUVar2,UVar18,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0414afab:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MapEditorCamera$$SnapCameraToAxis
// il2cpp: void Cameras_MapEditorCamera__SnapCameraToAxis (Cameras_MapEditorCamera_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x4149e30

void Cameras_MapEditorCamera__SnapCameraToAxis
               (Cameras_MapEditorCamera_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method
               )

{
  long *plVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Utility_BaseComponentCache_o *pUVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  undefined1 auVar3 [16];
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  MethodInfo *method_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  undefined4 in_XMM0_Dd;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  float fVar12;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o worldPosition;
  UnityEngine_Quaternion_o UVar23;
  undefined1 in_stack_ffffffffffffff28 [12];
  float fStack_c0;
  float fStack_bc;
  undefined1 local_a8 [32];
  undefined1 local_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  undefined1 local_68 [16];
  float local_58;
  float fStack_54;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  
  local_58 = direction.fields.z;
  local_68._8_4_ = in_XMM0_Dc;
  local_68._0_8_ = direction.fields._0_8_;
  local_68._12_4_ = in_XMM0_Dd;
  if (DAT_057049b5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057049b5 = '\x01';
  }
  local_a8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_a8._8_8_ = (Il2CppMethodPointer)0x0;
  local_a8._16_8_ = (Il2CppObject *)0x0;
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_MapEditorGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MapEditorGameManager + 0x130) * 8) !=
        TypeInfo_MapEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar1);
    }
  }
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  if ((plVar1 == (long *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)plVar1[7],
     __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto LAB_0414a3c5;
  if ((__this_00->fields)._count == 0) {
    pUVar2 = (__this->fields).Cache;
    if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar2->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0))
    goto LAB_0414a3c5;
    UVar22 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    fVar6 = UVar22.fields.z;
    pUVar2 = (__this->fields).Cache;
    if (pUVar2 == (Utility_BaseComponentCache_o *)0x0) goto LAB_0414a3c5;
    fVar17 = UVar22.fields.x;
    fVar18 = UVar22.fields.y;
    pUVar5 = (pUVar2->fields).Transform;
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0414a3c5;
    UVar22 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
    fVar17 = fVar17 + UVar22.fields.x * 50.0;
    fVar18 = fVar18 + UVar22.fields.y * 50.0;
    fVar7 = extraout_XMM0_Dc_03 + extraout_XMM0_Dc_04 * 0.0;
    fVar20 = extraout_XMM0_Dd_03 + extraout_XMM0_Dd_04 * 0.0;
    fVar6 = fVar6 + UVar22.fields.z * 50.0;
    pUVar2 = (__this->fields).Cache;
  }
  else {
    uVar16 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar17 = (float)uVar16;
    fVar18 = (float)((ulong)uVar16 >> 0x20);
    fStack_c0 = 0.0;
    fStack_bc = 0.0;
    fVar6 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_38,__this_00,MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer
              );
    local_a8._16_8_ = local_28;
    local_a8._0_8_ = local_38._0_8_;
    local_a8._8_8_ = local_38._8_8_;
    while (__this_01.fields._version = (int32_t)fVar6,
          __this_01.fields._set =
               (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28._0_8_,
          __this_01.fields._index = in_stack_ffffffffffffff28._8_4_,
          __this_01.fields._current._0_4_ = fVar17, __this_01.fields._current._4_4_ = fVar18,
          bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185890 *)local_a8), (char)bVar4 != '\0') {
      if ((Il2CppObject *)local_a8._16_8_ == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (((Il2CppObject *)(local_a8._16_8_ + 0x10))->monitor == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar5 = UnityEngine_GameObject__get_transform
                         (((Il2CppObject *)(local_a8._16_8_ + 0x10))->monitor,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar22 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      fVar17 = fVar17 + UVar22.fields.x;
      fVar18 = fVar18 + UVar22.fields.y;
      fStack_c0 = fStack_c0 + extraout_XMM0_Dc;
      fStack_bc = fStack_bc + extraout_XMM0_Dd;
      fVar6 = fVar6 + UVar22.fields.z;
    }
    __this_02.fields._version = (int32_t)fVar6;
    __this_02.fields._set =
         (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff28._8_4_;
    __this_02.fields._current._0_4_ = fVar17;
    __this_02.fields._current._4_4_ = fVar18;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185880 *)local_a8);
    if (plVar1[7] == 0) goto LAB_0414a3c5;
    fVar7 = (float)*(int *)(plVar1[7] + 0x20);
    fVar6 = fVar6 / fVar7;
    auVar3._4_4_ = fVar18;
    auVar3._0_4_ = fVar17;
    auVar3._8_4_ = fStack_c0;
    auVar3._12_4_ = fStack_bc;
    auVar13._4_4_ = fVar7;
    auVar13._0_4_ = fVar7;
    auVar13._8_8_ = 0;
    auVar13 = divps(auVar3,auVar13);
    fVar17 = auVar13._0_4_;
    fVar18 = auVar13._4_4_;
    fVar7 = auVar13._8_4_;
    fVar20 = auVar13._12_4_;
    pUVar2 = (__this->fields).Cache;
  }
  if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar5 = (pUVar2->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    UVar22 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    fVar8 = UVar22.fields.y;
    fVar9 = UVar22.fields.x;
    uVar10 = extraout_XMM0_Dc_00;
    uVar11 = extraout_XMM0_Dd_00;
    fVar15 = fVar8;
    fVar19 = fVar8;
    fVar21 = fVar18;
    if (DAT_056fde1c == '\0') {
      uStack_80 = extraout_XMM0_Dc_00;
      local_88 = (undefined1  [8])UVar22.fields._0_8_;
      uStack_7c = extraout_XMM0_Dd_00;
      local_78 = fVar8;
      fStack_74 = fVar8;
      local_48 = fVar18;
      fStack_44 = fVar18;
      fStack_40 = fVar7;
      fStack_3c = fVar20;
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
      fVar9 = (float)local_88._0_4_;
      fVar8 = (float)local_88._4_4_;
      uVar10 = uStack_80;
      uVar11 = uStack_7c;
      fVar15 = local_78;
      fVar19 = fStack_74;
      fVar21 = local_48;
    }
    fVar12 = UVar22.fields.z - fVar6;
    fVar7 = fVar9 - fVar17;
    fVar20 = fVar15 - fVar21;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      local_88._4_4_ = fVar8;
      local_88._0_4_ = fVar9 - fVar17;
      uStack_80 = uVar10;
      uStack_7c = uVar11;
      local_78 = fVar15 - fVar21;
      fStack_74 = fVar19;
      il2cpp_init_class();
      fVar7 = (float)local_88._0_4_;
      fVar20 = local_78;
    }
    fVar7 = fVar12 * fVar12 + fVar20 * fVar20 + fVar7 * fVar7;
    if (fVar7 < 0.0) {
      fVar7 = sqrtf(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    bVar4 = Cameras_MapEditorCamera__AlignedWithWorldAxis(__this,method_00);
    auVar13 = local_68;
    if ((char)bVar4 == '\0') {
      Cameras_MapEditorCamera__AlignToWorldAxis(__this,method_00);
      return;
    }
    pUVar2 = (__this->fields).Cache;
    if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar5 = (pUVar2->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      UVar22.fields.z = local_58;
      UVar22.fields.x = (float)local_68._0_4_;
      UVar22.fields.y = (float)local_68._4_4_;
      local_68 = auVar13;
      UVar22 = UnityEngine_Transform__TransformDirection(pUVar5,UVar22,(MethodInfo *)0x0);
      auVar14._0_8_ = UVar22.fields._0_8_;
      auVar14._8_4_ = extraout_XMM0_Dc_01;
      auVar14._12_4_ = extraout_XMM0_Dd_01;
      uVar16 = auVar14._8_8_;
      UVar23 = UnityEngine_Quaternion__AngleAxis(90.0,UVar22,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).Cache;
      if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
        local_68._8_4_ = extraout_XMM0_Dc_02;
        local_68._0_8_ = UVar23.fields._0_8_;
        local_68._12_4_ = extraout_XMM0_Dd_02;
        pUVar5 = (pUVar2->fields).Transform;
        _local_58 = UVar23.fields._8_8_;
        uStack_50 = uVar16;
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          UVar23 = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
          fVar20 = UVar23.fields.x;
          fVar9 = UVar23.fields.y;
          fVar8 = UVar23.fields.z;
          fVar15 = UVar23.fields.w;
          UVar23.fields.w =
               ((fVar15 * fStack_54 - fVar20 * (float)local_68._0_4_) -
               fVar9 * (float)local_68._4_4_) - fVar8 * local_58;
          UVar23.fields.z =
               ((float)local_68._0_4_ * fVar9 + local_58 * fVar15 + fStack_54 * fVar8) -
               (float)local_68._4_4_ * fVar20;
          UVar23.fields.y =
               (local_58 * fVar20 + (float)local_68._4_4_ * fVar15 + fStack_54 * fVar9) -
               fVar8 * (float)local_68._0_4_;
          UVar23.fields.x =
               ((float)local_68._4_4_ * fVar8 + (float)local_68._0_4_ * fVar15 + fStack_54 * fVar20)
               - fVar9 * local_58;
          UnityEngine_Transform__set_rotation(pUVar5,UVar23,(MethodInfo *)0x0);
          pUVar2 = (__this->fields).Cache;
          if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar5 = (pUVar2->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
            UVar22 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
            value.fields.x = fVar17 - fVar7 * UVar22.fields.x;
            value.fields.y = fVar18 - fVar7 * UVar22.fields.y;
            value.fields.z = fVar6 - UVar22.fields.z * fVar7;
            UnityEngine_Transform__set_position(pUVar5,value,(MethodInfo *)0x0);
            pUVar2 = (__this->fields).Cache;
            if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar5 = (pUVar2->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
              worldPosition.fields.y = fVar18;
              worldPosition.fields.x = fVar17;
              worldPosition.fields.z = fVar6;
              UnityEngine_Transform__LookAt(pUVar5,worldPosition,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0414a3c5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MapEditorCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_MapEditorCamera__SetDefaultCameraPosition (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x414afb0

void Cameras_MapEditorCamera__SetDefaultCameraPosition
               (Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  System_String_o *tag;
  Utility_BaseComponentCache_o *pUVar3;
  Il2CppClass *pIVar4;
  bool_conflict bVar5;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar6;
  UI_MapEditorMenu_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Quaternion_Fields value;
  
  if (DAT_057049b6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapEditorMenu);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_MapTags);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057049b6 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto LAB_0414afdc;
LAB_0414b0aa:
    il2cpp_init_class();
    pUVar7 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar7 != (UI_MapEditorMenu_o *)0x0) goto LAB_0414aff0;
LAB_0414b0c6:
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto LAB_0414b0aa;
LAB_0414afdc:
    pUVar7 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar7 == (UI_MapEditorMenu_o *)0x0) goto LAB_0414b0c6;
LAB_0414aff0:
    pIVar4 = TypeInfo_MapEditorMenu;
    bVar2 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
    if (((pUVar7->klass->_2).naturalAligment < bVar2) ||
       ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorMenu)) {
LAB_0414b287:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar7,pIVar4);
    }
    (__this->fields)._menu = pUVar7;
    if (((pUVar7->klass->_2).naturalAligment < bVar2) ||
       ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar4)) goto LAB_0414b287;
  }
  il2cpp_runtime_glue(&(__this->fields)._menu);
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
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).Cache;
  if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar8 = (pUVar3->fields).Transform;
    if ((char)bVar5 == '\0') {
      if (DAT_056fde1f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde1f = '\x01';
      }
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        UVar9.fields.x = (float)uVar1 * 100.0;
        UVar9.fields.y = (float)((ulong)uVar1 >> 0x20) * 100.0;
        UVar9.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 100.0;
        UnityEngine_Transform__set_position(pUVar8,UVar9,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).Cache;
        if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar8 = (pUVar3->fields).Transform;
          if (DAT_056fde1e == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Quaternion);
            DAT_056fde1e = '\x01';
          }
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            value = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
            goto LAB_0414b276;
          }
        }
      }
    }
    else if (((x != (UnityEngine_Object_o *)0x0) &&
             (pUVar6 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0),
             pUVar6 != (UnityEngine_Transform_o *)0x0)) &&
            (UVar9 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0),
            pUVar8 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_position(pUVar8,UVar9,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).Cache;
      if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
        pUVar8 = (pUVar3->fields).Transform;
        pUVar6 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        if ((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
           (value = (UnityEngine_Quaternion_Fields)
                    UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0),
           pUVar8 != (UnityEngine_Transform_o *)0x0)) {
LAB_0414b276:
          UnityEngine_Transform__set_rotation
                    (pUVar8,(UnityEngine_Quaternion_o)value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MapEditorCamera$$.ctor
// il2cpp: void Cameras_MapEditorCamera___ctor (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x414b2a0

void Cameras_MapEditorCamera___ctor(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


