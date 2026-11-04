// Type: Projectiles.ThunderspearProjectile
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Projectiles/ThunderspearProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/ThunderspearProjectile.cs
// --------------------------------

// Projectiles.ThunderspearProjectile$$SetupSettings
// il2cpp: void Projectiles_ThunderspearProjectile__SetupSettings (Projectiles_ThunderspearProjectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x1820d3ef0

void Projectiles_ThunderspearProjectile__SetupSettings
               (Projectiles_ThunderspearProjectile_o *__this,System_Object_array *settings,MethodInfo *method)

{
  float fVar1;
  Il2CppObject *pIVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined1 *puVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346926 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    Il2CppMethodInitialized_184346926 = '\x01';
  }
  if (settings != (System_Object_array *)0x0) {
    if ((int)settings->max_length == 0) {
label_1820d4070:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = settings->m_Items[0];
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e38 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar2,g_data_184354e38);
      }
      pfVar5 = il2cpp_object_unbox(pIVar2);
      (__this->fields)._radius = *pfVar5;
      if ((uint)settings->max_length < 2) goto label_1820d4070;
      pIVar2 = settings->m_Items[1];
      if (pIVar2 != (Il2CppObject *)0x0) {
        if ((pIVar2->klass->_1).element_class != (TypeInfo_UnityEngine_Color->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar2,TypeInfo_UnityEngine_Color);
        }
        pfVar5 = il2cpp_object_unbox(pIVar2);
        fVar1 = pfVar5[1];
        fVar3 = pfVar5[2];
        fVar4 = pfVar5[3];
        (__this->fields)._color.fields.r = *pfVar5;
        (__this->fields)._color.fields.g = fVar1;
        (__this->fields)._color.fields.b = fVar3;
        (__this->fields)._color.fields.a = fVar4;
        if ((uint)settings->max_length < 3) goto label_1820d4070;
        pIVar2 = settings->m_Items[2];
        if (pIVar2 != (Il2CppObject *)0x0) {
          if ((pIVar2->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar2,g_data_184354de8);
          }
          puVar6 = il2cpp_object_unbox(pIVar2);
          (__this->fields)._usesEmbed = (bool)*puVar6;
          pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            pUVar8 = UnityEngine_Transform__get_position(&local_18,pUVar7,(MethodInfo *)0x0);
            fVar1 = (pUVar8->fields).z;
            fVar3 = (pUVar8->fields).y;
            (__this->fields)._lastPosition.fields.x = (pUVar8->fields).x;
            (__this->fields)._lastPosition.fields.y = fVar3;
            (__this->fields)._lastPosition.fields.z = fVar1;
            pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              pUVar8 = UnityEngine_Transform__get_position(&local_18,pUVar7,(MethodInfo *)0x0);
              fVar3 = (pUVar8->fields).y;
              fVar1 = (pUVar8->fields).z;
              (__this->fields)._startPosition.fields.x = (pUVar8->fields).x;
              (__this->fields)._startPosition.fields.y = fVar3;
              (__this->fields)._startPosition.fields.z = fVar1;
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$RegisterObjects
// il2cpp: void Projectiles_ThunderspearProjectile__RegisterObjects (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x1820d3b50

void Projectiles_ThunderspearProjectile__RegisterObjects
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  UnityEngine_GameObject_array *pUVar4;
  Settings_AbilitySettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  MethodInfo *pMVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_ParticleSystem_o *__this_00;
  UnityEngine_ParticleSystem_o *__this_01;
  UnityEngine_GameObject_o *item;
  UnityEngine_GameObject_o *item_00;
  UnityEngine_ParticleSystem_MinMaxGradient_o *pUVar9;
  UnityEngine_ParticleSystem_MainModule_o local_res18 [2];
  UnityEngine_Color_Fields local_a8;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields local_98;
  UnityEngine_ParticleSystem_MinMaxGradient_o local_58;
  
  if (Il2CppMethodInitialized_184346927 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Flame");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearModel");
    il2cpp_codegen_initialize_runtime_metadata(&"Trail");
    Il2CppMethodInitialized_184346927 = '\x01';
  }
  local_res18[0].fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    pUVar8 = UnityEngine_Transform__Find(pUVar8,"Trail",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_1820d3ed5;
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar8,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_1820d3ed5;
    pUVar8 = UnityEngine_Transform__Find(pUVar8,"Flame",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_1820d3ed5;
    __this_01 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar8,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_1820d3ed5;
    pUVar8 = UnityEngine_Transform__Find(pUVar8,"ThunderspearModel",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_1820d3ed5;
    item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_ParticleSystem_o *)0x0) goto label_1820d3ed5;
    pSVar3 = (__this->fields)._hideObjects;
    item_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    pMVar7 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
    if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_1820d3ed5;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UnityEngine_GameObject_array *)0x0) goto label_1820d3ed5;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1820d3edb;
      pUVar4->m_Items[(int)uVar2] = item_00;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,item_00);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item_00,
                 (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
    pSVar3 = (__this->fields)._hideObjects;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (pSVar3->fields)._items;
      if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          if ((uint)pUVar4->max_length <= uVar2) {
label_1820d3edb:
            ThrowIndexOutOfRangeException();
          }
          pUVar4->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
        }
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
        if ((pSVar5 != (Settings_AbilitySettings_o *)0x0) &&
           (pSVar6 = (pSVar5->fields).ShowBombColors, pSVar6 != (Settings_BoolSetting_o *)0x0)) {
          if ((pSVar6->fields)._value != false) {
            if (__this_00 == (UnityEngine_ParticleSystem_o *)0x0) goto label_1820d3ed5;
            local_res18[0].fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_MainModule_Fields)
                 UnityEngine_ParticleSystem__get_noise(__this_00,(MethodInfo *)0x0);
            local_a8.r = (__this->fields)._color.fields.r;
            local_a8.g = (__this->fields)._color.fields.g;
            local_a8.b = (__this->fields)._color.fields.b;
            local_a8.a = (__this->fields)._color.fields.a;
            pUVar9 = UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                               (&local_58,(UnityEngine_Color_o *)&local_a8,(MethodInfo *)0x0);
            local_98.m_Mode = (pUVar9->fields).m_Mode;
            local_98._4_4_ = *(undefined4 *)&(pUVar9->fields).field_0x4;
            local_98.m_GradientMin = (pUVar9->fields).m_GradientMin;
            local_98.m_GradientMax = (pUVar9->fields).m_GradientMax;
            local_98.m_ColorMin.fields.r = (pUVar9->fields).m_ColorMin.fields.r;
            local_98.m_ColorMin.fields.g = (pUVar9->fields).m_ColorMin.fields.g;
            local_98.m_ColorMin.fields.b = (pUVar9->fields).m_ColorMin.fields.b;
            local_98.m_ColorMin.fields.a = (pUVar9->fields).m_ColorMin.fields.a;
            local_98.m_ColorMax.fields.r = (pUVar9->fields).m_ColorMax.fields.r;
            local_98.m_ColorMax.fields.g = (pUVar9->fields).m_ColorMax.fields.g;
            local_98.m_ColorMax.fields.b = (pUVar9->fields).m_ColorMax.fields.b;
            local_98.m_ColorMax.fields.a = (pUVar9->fields).m_ColorMax.fields.a;
            UnityEngine_ParticleSystem_MainModule__set_startColor
                      (local_res18,(UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_98,(MethodInfo *)0x0)
            ;
            local_res18[0].fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_MainModule_Fields)
                 UnityEngine_ParticleSystem__get_noise(__this_01,(MethodInfo *)0x0);
            local_a8.r = (__this->fields)._color.fields.r;
            local_a8.g = (__this->fields)._color.fields.g;
            local_a8.b = (__this->fields)._color.fields.b;
            local_a8.a = (__this->fields)._color.fields.a;
            pUVar9 = UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                               (&local_58,(UnityEngine_Color_o *)&local_a8,(MethodInfo *)0x0);
            local_98.m_Mode = (pUVar9->fields).m_Mode;
            local_98._4_4_ = *(undefined4 *)&(pUVar9->fields).field_0x4;
            local_98.m_GradientMin = (pUVar9->fields).m_GradientMin;
            local_98.m_GradientMax = (pUVar9->fields).m_GradientMax;
            local_98.m_ColorMin.fields.r = (pUVar9->fields).m_ColorMin.fields.r;
            local_98.m_ColorMin.fields.g = (pUVar9->fields).m_ColorMin.fields.g;
            local_98.m_ColorMin.fields.b = (pUVar9->fields).m_ColorMin.fields.b;
            local_98.m_ColorMin.fields.a = (pUVar9->fields).m_ColorMin.fields.a;
            local_98.m_ColorMax.fields.r = (pUVar9->fields).m_ColorMax.fields.r;
            local_98.m_ColorMax.fields.g = (pUVar9->fields).m_ColorMax.fields.g;
            local_98.m_ColorMax.fields.b = (pUVar9->fields).m_ColorMax.fields.b;
            local_98.m_ColorMax.fields.a = (pUVar9->fields).m_ColorMax.fields.a;
            UnityEngine_ParticleSystem_MainModule__set_startColor
                      (local_res18,(UnityEngine_ParticleSystem_MinMaxGradient_o *)&local_98,(MethodInfo *)0x0)
            ;
          }
          return;
        }
      }
    }
  }
label_1820d3ed5:
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_ThunderspearProjectile__OnCollisionEnter (Projectiles_ThunderspearProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x1820d3040
// eh: try 0x1820d33e0..0x1820d3afd -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d33dd: nop dword ptr [rax]
// asm:   0x1820d3420: mov rdx, qword ptr [rip + 0x1fa5aa9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x1820d3427: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1820d342c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820d3431: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820d3436: test rcx, rcx
// asm:   0x1820d3439: jne 0x1820d3afd
// asm:   0x1820d343f: mov rsi, qword ptr [rsp + 0xf8]
// asm:   0x1820d3447: mov rdi, qword ptr [rsp + 0xf0]
// asm:   0x1820d3ad0: mov byte ptr [rdi + 0x130], 1
// asm:   0x1820d3ad7: jmp 0x1820d3301
// asm:   0x1820d3adc: xor edx, edx
// asm:   0x1820d3ade: mov rcx, rdi
// asm:   0x1820d3ae1: call 0x1820d1520  ; Projectiles_ThunderspearProjectile__Explode()
// asm:   0x1820d3ae6: jmp 0x1820d3301
// asm:   0x1820d3afd: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317875: push rbp
// asm:   0x183317876: sub rsp, 0x20
// asm:   0x18331787a: mov rbp, rdx
// asm:   0x18331787d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317881: mov rcx, qword ptr [rax]
// asm:   0x183317884: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317888: movabs rax, 0
// asm:   0x183317892: add rsp, 0x20
// asm:   0x183317896: pop rbp
// asm:   0x183317897: ret 

void Projectiles_ThunderspearProjectile__OnCollisionEnter
               (Projectiles_ThunderspearProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Settings_InGameSet_o *pSVar9;
  Settings_InGameMiscSettings_o *pSVar10;
  Settings_BoolSetting_o *pSVar11;
  Settings_AbilitySettings_o *pSVar12;
  UnityEngine_Rigidbody_o *pUVar13;
  UnityEngine_Vector3_StaticFields *pUVar14;
  System_Collections_Generic_List_Collider__o *__this_00;
  bool bVar15;
  Photon_Pun_PhotonView_o *pPVar16;
  UnityEngine_Vector3_o *pUVar17;
  UnityEngine_ContactPoint_array *pUVar18;
  UnityEngine_Transform_o *pUVar19;
  Characters_BaseTitan_o *x;
  UnityEngine_Quaternion_o *pUVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_Vector3_Fields local_b8;
  undefined1 local_a8 [16];
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_object__o local_80 [5];
  
  if (Il2CppMethodInitialized_184346928 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Embed1TimeMax");
    il2cpp_codegen_initialize_runtime_metadata(&"Embed2TimeTotal");
    il2cpp_codegen_initialize_runtime_metadata(&"Embed1TimeMin");
    il2cpp_codegen_initialize_runtime_metadata(&"Embed2TimeMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"Embed1Time");
    il2cpp_codegen_initialize_runtime_metadata(&"Embed1TimeMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"AATriggerRange");
    Il2CppMethodInitialized_184346928 = '\x01';
  }
  local_80[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80[0].fields._index = 0;
  local_80[0].fields._version = 0;
  local_80[0].fields._current = (Il2CppObject *)0x0;
  pPVar16 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar16 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((pPVar16->fields)._IsMine_k__BackingField == false) || ((__this->fields).Disabled != false)) {
      return;
    }
    pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if ((pSVar9 != (Settings_InGameSet_o *)0x0) &&
       ((pSVar10 = (pSVar9->fields).Misc, pSVar10 != (Settings_InGameMiscSettings_o *)0x0 &&
        (pSVar11 = (pSVar10->fields).ThunderspearPVP, pSVar11 != (Settings_BoolSetting_o *)0x0)))) {
      if ((pSVar11->fields)._value != false) {
        pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
        if ((pSVar12 == (Settings_AbilitySettings_o *)0x0) ||
           (pSVar11 = (pSVar12->fields).BombCollision, pSVar11 == (Settings_BoolSetting_o *)0x0))
        goto label_1820d3aeb;
        if ((pSVar11->fields)._value != false) {
          pUVar13 = (__this->fields)._rigidbody;
          if ((pUVar13 != (UnityEngine_Rigidbody_o *)0x0) &&
             (pUVar17 = UnityEngine_Rigidbody__get_linearVelocity
                                  ((UnityEngine_Vector3_o *)local_a8,pUVar13,(MethodInfo *)0x0),
             collision != (UnityEngine_Collision_o *)0x0)) {
            fVar21 = (pUVar17->fields).x;
            fVar28 = (pUVar17->fields).y;
            fVar30 = (pUVar17->fields).z;
            pUVar18 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0);
            if (pUVar18 != (UnityEngine_ContactPoint_array *)0x0) {
              if ((int)pUVar18->max_length == 0) {
                ThrowIndexOutOfRangeException();
              }
              pUVar17 = UnityEngine_RaycastHit__get_normal
                                  ((UnityEngine_Vector3_o *)local_a8,
                                   (UnityEngine_RaycastHit_o *)pUVar18->m_Items,(MethodInfo *)0x0);
              fVar22 = (pUVar17->fields).x;
              fVar27 = (pUVar17->fields).y;
              fVar29 = (pUVar17->fields).z;
              fVar24 = (fVar28 * fVar27 + fVar21 * fVar22 + fVar30 * fVar29) * -2.0;
              pUVar13 = (__this->fields)._rigidbody;
              if (pUVar13 != (UnityEngine_Rigidbody_o *)0x0) {
                local_b8.y = (fVar27 * fVar24 + fVar28) * 0.8;
                local_b8.x = (fVar22 * fVar24 + fVar21) * 0.8;
                local_b8.z = (fVar29 * fVar24 + fVar30) * 0.8;
                UnityEngine_Rigidbody__set_linearVelocity
                          (pUVar13,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
                pUVar13 = (__this->fields)._rigidbody;
                if (pUVar13 != (UnityEngine_Rigidbody_o *)0x0) {
                  pUVar17 = UnityEngine_Rigidbody__get_linearVelocity
                                      ((UnityEngine_Vector3_o *)local_a8,pUVar13,(MethodInfo *)0x0);
                  fVar21 = (pUVar17->fields).z;
                  fVar28 = (pUVar17->fields).y;
                  (__this->fields)._velocity.fields.x = (pUVar17->fields).x;
                  (__this->fields)._velocity.fields.y = fVar28;
                  (__this->fields)._velocity.fields.z = fVar21;
                  return;
                }
              }
            }
          }
          goto label_1820d3aeb;
        }
      }
      (__this->fields)._wasImpact = true;
      pUVar13 = (__this->fields)._rigidbody;
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      if (pUVar13 != (UnityEngine_Rigidbody_o *)0x0) {
        pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_b8.x = (pUVar14->zeroVector).fields.x;
        local_b8.y = (pUVar14->zeroVector).fields.y;
        local_b8.z = (pUVar14->zeroVector).fields.z;
        UnityEngine_Rigidbody__set_linearVelocity
                  (pUVar13,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._colliders;
        if (__this_00 != (System_Collections_Generic_List_Collider__o *)0x0) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    (&local_98,(System_Collections_Generic_List_T__o *)__this_00,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
          local_80[0].fields._list = local_98.fields._list;
          local_80[0].fields._index = local_98.fields._index;
          local_80[0].fields._version = local_98.fields._version;
          local_80[0].fields._current = local_98.fields._current;
          local_a8._0_4_ = 0.0;
          local_a8._4_4_ = 0.0;
          local_a8._8_8_ = local_80;
          while (bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (local_80,(MethodInfo_153A2A0 *)
                                              MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext
                                    ), bVar15) {
            if ((UnityEngine_Collider_o *)local_80[0].fields._current == (UnityEngine_Collider_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_Collider__set_enabled
                      ((UnityEngine_Collider_o *)local_80[0].fields._current,false,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
                     MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
          pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
          if (((pSVar9 != (Settings_InGameSet_o *)0x0) &&
              (pSVar10 = (pSVar9->fields).Misc, pSVar10 != (Settings_InGameMiscSettings_o *)0x0)) &&
             (pSVar11 = (pSVar10->fields).ThunderspearPVP, pSVar11 != (Settings_BoolSetting_o *)0x0)) {
            if (((pSVar11->fields)._value != false) || ((__this->fields)._usesEmbed == false)) {
              Projectiles_ThunderspearProjectile__Explode(__this,(MethodInfo *)0x0);
              return;
            }
            (__this->fields)._isEmbed = true;
            fVar21 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
            (__this->fields)._embedTime = fVar21;
            if ((collision != (UnityEngine_Collision_o *)0x0) &&
               (pUVar18 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0),
               pUVar18 != (UnityEngine_ContactPoint_array *)0x0)) {
              if ((int)pUVar18->max_length == 0) {
                ThrowIndexOutOfRangeException();
              }
              pUVar17 = UnityEngine_RaycastHit__get_normal
                                  ((UnityEngine_Vector3_o *)local_a8,
                                   (UnityEngine_RaycastHit_o *)pUVar18->m_Items,(MethodInfo *)0x0);
              fVar21 = (pUVar17->fields).x;
              fVar28 = (pUVar17->fields).y;
              fVar30 = (pUVar17->fields).z;
              if (Il2CppMethodInitialized_18433de5f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5f = '\x01';
              }
              fVar22 = (float)il2cpp_runtime_helper_180546a40(&(__this->fields)._velocity);
              if (fVar22 <= 1e-05) {
                pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar27 = (pUVar14->zeroVector).fields.x;
                fVar29 = (pUVar14->zeroVector).fields.y;
                fVar22 = (pUVar14->zeroVector).fields.z;
              }
              else {
                fVar27 = (__this->fields)._velocity.fields.x / fVar22;
                fVar29 = (__this->fields)._velocity.fields.y / fVar22;
                fVar22 = (__this->fields)._velocity.fields.z / fVar22;
              }
              fVar27 = fVar27 + -fVar21;
              fVar29 = fVar29 + -fVar28;
              fVar22 = fVar22 + -fVar30;
              local_b8.y = fVar29;
              local_b8.x = fVar27;
              local_b8.z = fVar22;
              if (Il2CppMethodInitialized_18433de5f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5f = '\x01';
              }
              fVar21 = (float)il2cpp_runtime_helper_180546a40(&local_b8);
              if (fVar21 <= 1e-05) {
                pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar27 = (pUVar14->zeroVector).fields.x;
                fVar29 = (pUVar14->zeroVector).fields.y;
                fVar22 = (pUVar14->zeroVector).fields.z;
              }
              else {
                fVar27 = fVar27 / fVar21;
                fVar29 = fVar29 / fVar21;
                fVar22 = fVar22 / fVar21;
              }
              (__this->fields)._velocity.fields.x = fVar27;
              (__this->fields)._velocity.fields.y = fVar29;
              (__this->fields)._velocity.fields.z = fVar22;
              pUVar19 = UnityEngine_Collision__get_transform(collision,(MethodInfo *)0x0);
              (__this->fields)._embedParent = pUVar19;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._embedParent,pUVar19);
              pUVar19 = UnityEngine_Collision__get_transform(collision,(MethodInfo *)0x0);
              if ((pUVar19 != (UnityEngine_Transform_o *)0x0) &&
                 (pUVar19 = UnityEngine_Transform__GetRoot(pUVar19,(MethodInfo *)0x0),
                 pUVar19 != (UnityEngine_Transform_o *)0x0)) {
                fVar21 = 0.1;
                x = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar19,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseTitan);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar15 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar15) {
                  fVar21 = 0.5;
                }
                pUVar19 = UnityEngine_Collision__get_transform(collision,(MethodInfo *)0x0);
                pUVar18 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0);
                if (pUVar18 != (UnityEngine_ContactPoint_array *)0x0) {
                  if ((int)pUVar18->max_length == 0) {
                    ThrowIndexOutOfRangeException();
                  }
                  pUVar17 = UnityEngine_RaycastHit__get_point
                                      ((UnityEngine_Vector3_o *)local_a8,
                                       (UnityEngine_RaycastHit_o *)pUVar18->m_Items,(MethodInfo *)0x0);
                  uVar1 = (__this->fields)._velocity.fields.x;
                  uVar5 = (__this->fields)._velocity.fields.y;
                  uVar2 = (pUVar17->fields).x;
                  uVar6 = (pUVar17->fields).y;
                  uVar25._0_4_ = (float)uVar1 * fVar21 + (float)uVar2;
                  uVar25._4_4_ = (float)uVar5 * fVar21 + (float)uVar6;
                  if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                    local_b8.z = fVar21 * (__this->fields)._velocity.fields.z + (pUVar17->fields).z;
                    local_b8._0_8_ = uVar25;
                    pUVar17 = UnityEngine_Transform__InverseTransformPoint
                                        ((UnityEngine_Vector3_o *)local_a8,pUVar19,
                                         (UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
                    fVar28 = (pUVar17->fields).z;
                    fVar30 = (pUVar17->fields).y;
                    (__this->fields)._embedPosition.fields.x = (pUVar17->fields).x;
                    (__this->fields)._embedPosition.fields.y = fVar30;
                    (__this->fields)._embedPosition.fields.z = fVar28;
                    pUVar19 = (__this->fields)._transform;
                    pUVar18 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0);
                    if (pUVar18 != (UnityEngine_ContactPoint_array *)0x0) {
                      if ((int)pUVar18->max_length == 0) {
                        ThrowIndexOutOfRangeException();
                      }
                      pUVar17 = UnityEngine_RaycastHit__get_point
                                          ((UnityEngine_Vector3_o *)local_a8,
                                           (UnityEngine_RaycastHit_o *)pUVar18->m_Items,(MethodInfo *)0x0);
                      uVar3 = (__this->fields)._velocity.fields.x;
                      uVar7 = (__this->fields)._velocity.fields.y;
                      uVar4 = (pUVar17->fields).x;
                      uVar8 = (pUVar17->fields).y;
                      uVar26._0_4_ = (float)uVar3 * fVar21 + (float)uVar4;
                      uVar26._4_4_ = (float)uVar7 * fVar21 + (float)uVar8;
                      if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                        local_b8.z = fVar21 * (__this->fields)._velocity.fields.z + (pUVar17->fields).z;
                        local_b8._0_8_ = uVar26;
                        UnityEngine_Transform__set_position
                                  (pUVar19,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
                        pUVar19 = (__this->fields)._transform;
                        local_a8._0_4_ = (__this->fields)._velocity.fields.x;
                        local_a8._4_4_ = (__this->fields)._velocity.fields.y;
                        local_a8._8_4_ = (__this->fields)._velocity.fields.z;
                        local_b8.x = 0.0;
                        local_b8.y = 0.0;
                        local_b8.z = 0.0;
                        if (Il2CppMethodInitialized_18433de5c == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                          Il2CppMethodInitialized_18433de5c = '\x01';
                        }
                        pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
                        local_b8.x = (pUVar14->upVector).fields.x;
                        local_b8.y = (pUVar14->upVector).fields.y;
                        local_b8.z = (pUVar14->upVector).fields.z;
                        pUVar20 = UnityEngine_Quaternion__Internal_LookRotation
                                            ((UnityEngine_Quaternion_o *)&local_98,
                                             (UnityEngine_Vector3_o *)local_a8,
                                             (UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
                        if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                          local_a8._0_4_ = (pUVar20->fields).x;
                          local_a8._4_4_ = (pUVar20->fields).y;
                          local_a8._8_8_ = *(undefined8 *)&(pUVar20->fields).z;
                          UnityEngine_Transform__set_rotation
                                    (pUVar19,(UnityEngine_Quaternion_o *)local_a8,(MethodInfo *)0x0);
                          pUVar19 = (__this->fields)._transform;
                          if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                            fVar21 = (__this->fields)._startPosition.fields.x;
                            fVar28 = (__this->fields)._startPosition.fields.y;
                            fVar30 = (__this->fields)._startPosition.fields.z;
                            pUVar17 = UnityEngine_Transform__get_position
                                                ((UnityEngine_Vector3_o *)local_a8,pUVar19,(MethodInfo *)0x0);
                            fVar22 = (pUVar17->fields).x;
                            fVar27 = (pUVar17->fields).y;
                            fVar29 = (pUVar17->fields).z;
                            if (Il2CppMethodInitialized_18433dee7 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                              Il2CppMethodInitialized_18433dee7 = '\x01';
                            }
                            fVar21 = fVar21 - fVar22;
                            fVar28 = fVar28 - fVar27;
                            fVar30 = fVar30 - fVar29;
                            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                            }
                            dVar23 = (double)(fVar28 * fVar28 + fVar21 * fVar21 + fVar30 * fVar30);
                            if (dVar23 < 0.0) {
                              dVar23 = sqrt(dVar23);
                            }
                            else {
                              dVar23 = SQRT(dVar23);
                            }
                            fVar21 = Projectiles_ThunderspearProjectile__GetStat
                                               (__this,"Embed1Time",(MethodInfo *)0x0);
                            fVar28 = Projectiles_ThunderspearProjectile__GetStat
                                               (__this,"Embed1TimeMultiplier",(MethodInfo *)0x0);
                            fVar30 = (float)il2cpp_runtime_helper_180546a40(&(__this->fields).InitialPlayerVelocity,0);
                            fVar21 = fVar30 * fVar28 + fVar21;
                            fVar28 = Projectiles_ThunderspearProjectile__GetStat
                                               (__this,"Embed1TimeMax",(MethodInfo *)0x0);
                            if (fVar28 <= fVar21) {
                              fVar21 = fVar28;
                            }
                            fVar28 = Projectiles_ThunderspearProjectile__GetStat
                                               (__this,"Embed1TimeMin",(MethodInfo *)0x0);
                            if (fVar21 <= fVar28) {
                              fVar21 = fVar28;
                            }
                            fVar28 = Projectiles_ThunderspearProjectile__GetStat
                                               (__this,"Embed2TimeTotal",(MethodInfo *)0x0);
                            fVar30 = Projectiles_ThunderspearProjectile__GetStat
                                               (__this,"Embed2TimeMultiplier",(MethodInfo *)0x0);
                            fVar28 = fVar28 - fVar30 * (float)dVar23;
                            if (fVar28 <= 0.0) {
                              fVar28 = 0.0;
                            }
                            (__this->fields)._timeLeft = fVar28 + fVar21;
                            pUVar19 = (__this->fields)._transform;
                            if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                              pUVar17 = UnityEngine_Transform__get_position
                                                  ((UnityEngine_Vector3_o *)local_a8,pUVar19,(MethodInfo *)0x0
                                                  );
                              fVar21 = (pUVar17->fields).x;
                              fVar28 = (pUVar17->fields).y;
                              fVar30 = (pUVar17->fields).z;
                              fVar22 = (__this->fields)._startPosition.fields.x;
                              fVar27 = (__this->fields)._startPosition.fields.y;
                              fVar29 = (__this->fields)._startPosition.fields.z;
                              if (Il2CppMethodInitialized_18433dee7 == '\0') {
                                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                                Il2CppMethodInitialized_18433dee7 = '\x01';
                              }
                              fVar21 = fVar21 - fVar22;
                              fVar28 = fVar28 - fVar27;
                              fVar30 = fVar30 - fVar29;
                              if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                              }
                              dVar23 = (double)(fVar28 * fVar28 + fVar21 * fVar21 + fVar30 * fVar30);
                              if (dVar23 < 0.0) {
                                dVar23 = sqrt(dVar23);
                              }
                              else {
                                dVar23 = SQRT(dVar23);
                              }
                              fVar21 = Projectiles_ThunderspearProjectile__GetStat
                                                 (__this,"AATriggerRange",(MethodInfo *)0x0);
                              if (fVar21 <= (float)dVar23) {
                                return;
                              }
                              (__this->fields)._isAA = true;
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_1820d3aeb:
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$OnExceedLiveTime
// il2cpp: void Projectiles_ThunderspearProjectile__OnExceedLiveTime (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x1820d3b20

void Projectiles_ThunderspearProjectile__OnExceedLiveTime
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  (__this->fields)._wasMaxRange = true;
  if ((__this->fields)._isEmbed != false) {
    (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
              (__this,(__this->klass->vtable)._17_DestroySelf.method);
    return;
  }
  Projectiles_ThunderspearProjectile__Explode(__this,(MethodInfo *)0x0);
  return;
}


// Projectiles.ThunderspearProjectile$$Explode
// il2cpp: void Projectiles_ThunderspearProjectile__Explode (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x1820d1520

void Projectiles_ThunderspearProjectile__Explode
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameMiscSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Projectiles_ThunderspearProjectile_StaticFields *pPVar5;
  Characters_BaseCharacter_o *attacker;
  System_String_o *name;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Vector3_o *pUVar12;
  UnityEngine_Quaternion_o *pUVar13;
  System_Object_array *settings;
  Il2CppObject *pIVar14;
  Il2CppObject *pIVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 local_res8 [8];
  uint local_res18 [4];
  UnityEngine_Vector3_Fields local_c8;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  UnityEngine_Quaternion_Fields local_a8 [8];
  
  if (Il2CppMethodInitialized_184346929 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_TSKillType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ThunderspearProjectile);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Embed1TimeMax");
    il2cpp_codegen_initialize_runtime_metadata(&"RestrictAngleEmbed1");
    il2cpp_codegen_initialize_runtime_metadata(&"RestrictAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"RadiusEmbed2Multiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"Embed1TimeMin");
    il2cpp_codegen_initialize_runtime_metadata(&"RestrictAngleEmbed2");
    il2cpp_codegen_initialize_runtime_metadata(&"RadiusEmbed1Multiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"Embed1Time");
    il2cpp_codegen_initialize_runtime_metadata(&"Embed1TimeMultiplier");
    Il2CppMethodInitialized_184346929 = '\x01';
  }
  if ((__this->fields).Disabled != false) {
    return;
  }
  fVar16 = Projectiles_ThunderspearProjectile__GetStat(__this,"RestrictAngle",(MethodInfo *)0x0);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Misc, pSVar3 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).ThunderspearPVP, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
    fVar21 = 1.0;
    fVar22 = (__this->fields)._color.fields.r;
    fVar23 = (__this->fields)._color.fields.g;
    fVar24 = (__this->fields)._color.fields.b;
    fVar25 = (__this->fields)._color.fields.a;
    if ((pSVar4->fields)._value == false) {
      if ((__this->fields)._isEmbed != false) {
        fVar17 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
        fVar16 = (__this->fields)._embedTime;
        fVar18 = Projectiles_ThunderspearProjectile__GetStat(__this,"Embed1Time",(MethodInfo *)0x0);
        fVar19 = Projectiles_ThunderspearProjectile__GetStat(__this,"Embed1TimeMultiplier",(MethodInfo *)0x0);
        fVar20 = (float)il2cpp_runtime_helper_180546a40(&(__this->fields).InitialPlayerVelocity,0);
        fVar18 = fVar20 * fVar19 + fVar18;
        fVar19 = Projectiles_ThunderspearProjectile__GetStat(__this,"Embed1TimeMax",(MethodInfo *)0x0);
        if (fVar19 <= fVar18) {
          fVar18 = fVar19;
        }
        fVar19 = Projectiles_ThunderspearProjectile__GetStat(__this,"Embed1TimeMin",(MethodInfo *)0x0);
        if (fVar18 <= fVar19) {
          fVar18 = fVar19;
        }
        if (fVar17 - fVar16 <= fVar18) {
          fVar21 = Projectiles_ThunderspearProjectile__GetStat(__this,"RadiusEmbed1Multiplier",(MethodInfo *)0x0)
          ;
          (__this->fields)._radius = fVar21 * (__this->fields)._radius;
          fVar16 = Projectiles_ThunderspearProjectile__GetStat(__this,"RestrictAngleEmbed1",(MethodInfo *)0x0)
          ;
          if ((TypeInfo_Projectiles_ThunderspearProjectile->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ThunderspearProjectile);
          }
          pPVar5 = TypeInfo_Projectiles_ThunderspearProjectile->static_fields;
          fVar22 = (pPVar5->CritColor).fields.r;
          fVar23 = (pPVar5->CritColor).fields.g;
          fVar24 = (pPVar5->CritColor).fields.b;
          fVar25 = (pPVar5->CritColor).fields.a;
        }
        else {
          fVar16 = (__this->fields)._radius;
          fVar18 = Projectiles_ThunderspearProjectile__GetStat(__this,"RadiusEmbed2Multiplier",(MethodInfo *)0x0)
          ;
          (__this->fields)._radius = fVar18 * fVar16;
          fVar16 = Projectiles_ThunderspearProjectile__GetStat(__this,"RestrictAngleEmbed2",(MethodInfo *)0x0)
          ;
        }
      }
      fVar18 = (__this->fields)._radius * 4.0;
    }
    else {
      fVar18 = (__this->fields)._radius;
      fVar18 = fVar18 + fVar18;
    }
    uVar8 = Projectiles_ThunderspearProjectile__KillPlayersInRadius
                      (__this,(__this->fields)._radius,(MethodInfo *)0x0);
    Projectiles_ThunderspearProjectile__DamageHorsesInRadius
              (__this,(__this->fields)._radius,(MethodInfo *)0x0);
    uVar9 = Projectiles_ThunderspearProjectile__KillTitansInRadius
                      (__this,(__this->fields)._radius,fVar16,(MethodInfo *)0x0);
    attacker = (__this->fields)._owner;
    pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      pUVar12 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_c8,pUVar11,(MethodInfo *)0x0);
      local_c8.x = (pUVar12->fields).x;
      local_c8.y = (pUVar12->fields).y;
      local_c8.z = (pUVar12->fields).z;
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      Map_MapDestruction__Explode
                (attacker,(UnityEngine_Vector3_o *)&local_c8,(fVar18 * 0.5) / fVar21,(MethodInfo *)0x0);
      uVar10 = (uint)((__this->fields)._wasImpact != false);
      if ((int)uVar8 < (int)uVar10) {
        uVar8 = uVar10;
      }
      if ((int)uVar9 < (int)uVar8) {
        uVar9 = uVar8;
      }
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      name = TypeInfo_Effects_EffectPrefabs->static_fields->ThunderspearExplode;
      pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
        pUVar12 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_c8,pUVar11,(MethodInfo *)0x0);
        uVar1._0_4_ = (pUVar12->fields).x;
        uVar1._4_4_ = (pUVar12->fields).y;
        fVar16 = (pUVar12->fields).z;
        pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
          pUVar13 = UnityEngine_Transform__get_rotation
                              ((UnityEngine_Quaternion_o *)local_a8,pUVar11,(MethodInfo *)0x0);
          uVar6._0_4_ = (pUVar13->fields).x;
          uVar6._4_4_ = (pUVar13->fields).y;
          uVar7._0_4_ = (pUVar13->fields).z;
          uVar7._4_4_ = (pUVar13->fields).w;
          settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
          local_b8 = fVar22;
          fStack_b4 = fVar23;
          fStack_b0 = fVar24;
          fStack_ac = fVar25;
          pIVar14 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_b8);
          if (settings != (System_Object_array *)0x0) {
            if ((pIVar14 != (Il2CppObject *)0x0) &&
               (pIVar15 = il2cpp_vm_Object_IsInst(pIVar14,(((settings->obj).klass)->_1).element_class),
               pIVar15 == (Il2CppObject *)0x0)) {
              pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
            }
            if ((int)settings->max_length != 0) {
              settings->m_Items[0] = pIVar14;
              Il2CppCodeGenWriteBarrier(settings->m_Items,pIVar14);
              local_res18[0] = uVar9;
              pIVar14 = il2cpp_value_box((Il2CppClass *)TypeInfo_Projectiles_TSKillType,local_res18);
              if ((pIVar14 != (Il2CppObject *)0x0) &&
                 (pIVar15 = il2cpp_vm_Object_IsInst(pIVar14,(((settings->obj).klass)->_1).element_class),
                 pIVar15 == (Il2CppObject *)0x0)) {
                pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
              }
              if (1 < (uint)settings->max_length) {
                settings->m_Items[1] = pIVar14;
                Il2CppCodeGenWriteBarrier(settings->m_Items + 1,pIVar14);
                local_res8[0] = (__this->fields)._wasImpact;
                pIVar14 = il2cpp_value_box(g_data_184354de8,local_res8);
                if ((pIVar14 != (Il2CppObject *)0x0) &&
                   (pIVar15 = il2cpp_vm_Object_IsInst(pIVar14,(((settings->obj).klass)->_1).element_class),
                   pIVar15 == (Il2CppObject *)0x0)) {
                  pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
                }
                if (2 < (uint)settings->max_length) {
                  settings->m_Items[2] = pIVar14;
                  Il2CppCodeGenWriteBarrier(settings->m_Items + 2,pIVar14);
                  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
                  }
                  local_c8._0_8_ = uVar1;
                  local_c8.z = fVar16;
                  local_a8[0]._0_8_ = uVar6;
                  local_a8[0]._8_8_ = uVar7;
                  Effects_EffectSpawner__Spawn
                            (name,(UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Quaternion_o *)local_a8,
                             fVar18,true,settings,(MethodInfo *)0x0);
                  Projectiles_ThunderspearProjectile__StunMyHuman(__this,(MethodInfo *)0x0);
                  (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
                            (__this,(__this->klass->vtable)._17_DestroySelf.method);
                  return;
                }
              }
            }
            ThrowIndexOutOfRangeException();
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$StunMyHuman
// il2cpp: void Projectiles_ThunderspearProjectile__StunMyHuman (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x1820d4080

void Projectiles_ThunderspearProjectile__StunMyHuman
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  Characters_BaseCharacter_o *pCVar3;
  Characters_BaseCharacter_c *pCVar4;
  Settings_InGameSet_o *pSVar5;
  Settings_InGameMiscSettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  Utility_BaseComponentCache_o *pUVar9;
  Characters_Human_o *__this_00;
  Characters_Human_c *pCVar10;
  Il2CppClass **ppIVar11;
  bool bVar12;
  System_Xml_Schema_XmlSchema_o *pSVar13;
  longlong *plVar14;
  UnityEngine_Vector3_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38 [4];
  
  if (Il2CppMethodInitialized_18434692a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"StunRange");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_18434692a = '\x01';
  }
  pCVar3 = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar12) && (pCVar3 = (__this->fields)._owner, pCVar3 != (Characters_BaseCharacter_o *)0x0)) {
    pCVar4 = pCVar3->klass;
    bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar2 <= (pCVar4->_2).typeHierarchyDepth) &&
       (((pCVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_Human &&
        (bVar12 = Characters_BaseCharacter__IsMainCharacter((__this->fields)._owner,(MethodInfo *)0x0), bVar12
        )))) {
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if ((pSVar5 != (Settings_InGameSet_o *)0x0) &&
         ((pSVar6 = (pSVar5->fields).Misc, pSVar6 != (Settings_InGameMiscSettings_o *)0x0 &&
          (pSVar7 = (pSVar6->fields).ThunderspearPVP, pSVar7 != (Settings_BoolSetting_o *)0x0)))) {
        if ((pSVar7->fields)._value != false) {
          return;
        }
        if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
        }
        pSVar8 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
        if (((pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
            (pSVar13 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar8,(MethodInfo *)"Thunderspear"),
            pSVar13 != (System_Xml_Schema_XmlSchema_o *)0x0)) &&
           (plVar14 = (longlong *)
                      (*(pSVar13->klass->vtable)._7_get_IdAttribute.methodPtr)
                                (pSVar13,(MethodInfo *)"StunRange"), plVar14 != (longlong *)0x0)) {
          fVar17 = (float)(**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
          pCVar3 = (__this->fields)._owner;
          if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
              (pUVar9 = (pCVar3->fields).Cache, pUVar9 != (Utility_BaseComponentCache_o *)0x0)) &&
             (pUVar16 = (pUVar9->fields).Transform, pUVar16 != (UnityEngine_Transform_o *)0x0)) {
            pUVar15 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)local_38,pUVar16,(MethodInfo *)0x0);
            uVar1._0_4_ = (pUVar15->fields).x;
            uVar1._4_4_ = (pUVar15->fields).y;
            fVar18 = (pUVar15->fields).z;
            pUVar16 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
              pUVar15 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)local_38,pUVar16,(MethodInfo *)0x0);
              local_48.x = (pUVar15->fields).x;
              local_48.y = (pUVar15->fields).y;
              local_48.z = (pUVar15->fields).z;
              local_38[0]._0_8_ = uVar1;
              local_38[0].z = fVar18;
              fVar18 = (float)il2cpp_runtime_helper_180562c80(local_38);
              if (fVar17 <= fVar18) {
                return;
              }
              __this_00 = (Characters_Human_o *)(__this->fields)._owner;
              pUVar16 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if ((pUVar16 != (UnityEngine_Transform_o *)0x0) &&
                 (pUVar15 = UnityEngine_Transform__get_position
                                      ((UnityEngine_Vector3_o *)&local_48,pUVar16,(MethodInfo *)0x0),
                 __this_00 != (Characters_Human_o *)0x0)) {
                pCVar10 = __this_00->klass;
                bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
                if ((bVar2 <= (pCVar10->_2).typeHierarchyDepth) &&
                   (ppIVar11 = (pCVar10->_2).typeHierarchy,
                   ppIVar11[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
                  local_38[0].x = (pUVar15->fields).x;
                  local_38[0].y = (pUVar15->fields).y;
                  local_38[0].z = (pUVar15->fields).z;
                  bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
                  if ((bVar2 <= (pCVar10->_2).typeHierarchyDepth) &&
                     (ppIVar11[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
                    Characters_Human__GetStunnedByTS
                              (__this_00,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
                    return;
                  }
                  il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Characters_Human);
                }
                il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Characters_Human);
              }
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Projectiles.ThunderspearProjectile$$KillTitansInRadius
// il2cpp: int32_t Projectiles_ThunderspearProjectile__KillTitansInRadius (Projectiles_ThunderspearProjectile_o* __this, float radius, float restrictAngle, const MethodInfo* method);
// 0x1820d2770

int32_t Projectiles_ThunderspearProjectile__KillTitansInRadius
                  (Projectiles_ThunderspearProjectile_o *__this,float radius,float restrictAngle,
                  MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  UnityEngine_Object_o *x;
  Characters_BaseCharacter_o *pCVar5;
  Characters_BaseTitanComponentCache_o *pCVar6;
  UnityEngine_Object_o *y;
  Characters_BaseCharacter_c *pCVar7;
  UI_InGameMenu_o *__this_00;
  Cameras_InGameCamera_o *__this_01;
  Cameras_InGameCamera_c *pCVar8;
  Il2CppClass **ppIVar9;
  System_Threading_CancellationTokenSource_o *pSVar10;
  System_Threading_CancellationTokenSource_c *pSVar11;
  Characters_RechargeableUseable_o *__this_02;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  UnityEngine_LayerMask_o UVar15;
  int32_t iVar16;
  uint uVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_Vector3_o *pUVar19;
  System_Int32_array *layers;
  UnityEngine_GameObject_o *pUVar20;
  Characters_BaseTitan_o *a;
  CustomLogic_CustomLogicCollisionHandler_o *__this_03;
  System_String_o *pSVar21;
  System_String_o *pSVar22;
  undefined8 uVar23;
  uint uVar24;
  UnityEngine_Collider_array *local_b8;
  float local_b0;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_o local_78;
  UnityEngine_Vector3_o local_68 [5];
  
  if (Il2CppMethodInitialized_18434692b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_RechargeableUseable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TitanStun");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_18434692b = '\x01';
  }
  pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
    pUVar19 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_a8,pUVar18,(MethodInfo *)0x0);
    fVar3 = (pUVar19->fields).z;
    uVar1._0_4_ = (pUVar19->fields).x;
    uVar1._4_4_ = (pUVar19->fields).y;
    layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (layers != (System_Int32_array *)0x0) {
      if ((int)layers->max_length == 0) {
label_1820d3038:
        ThrowIndexOutOfRangeException();
      }
      layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox;
      UVar15 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      UVar15 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar15.fields.m_Mask,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      local_b8 = (UnityEngine_Collider_array *)uVar1;
      local_b0 = fVar3;
      local_b8 = UnityEngine_Physics__OverlapSphere_2fe3980
                           ((UnityEngine_Vector3_o *)&local_b8,radius,(int32_t)UVar15.fields.m_Mask,
                            (MethodInfo *)0x0);
      if (local_b8 != (UnityEngine_Collider_array *)0x0) {
        uVar24 = 0;
        uVar17 = 0;
label_1820d2977:
        do {
          if ((int)local_b8->max_length <= (int)uVar17) {
            return uVar24;
          }
          if ((uint)local_b8->max_length <= uVar17) goto label_1820d3038;
          x = (UnityEngine_Object_o *)local_b8->m_Items[(int)uVar17];
          if (x == (UnityEngine_Object_o *)0x0) break;
          pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (pUVar18 == (UnityEngine_Transform_o *)0x0) break;
          pUVar18 = UnityEngine_Transform__GetRoot(pUVar18,(MethodInfo *)0x0);
          if (pUVar18 == (UnityEngine_Transform_o *)0x0) break;
          pUVar20 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
          if (pUVar20 == (UnityEngine_GameObject_o *)0x0) break;
          a = UnityEngine_GameObject__GetComponent_object_
                        (pUVar20,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_BaseTitan
                        );
          pUVar20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (pUVar20 == (UnityEngine_GameObject_o *)0x0) break;
          __this_03 = UnityEngine_GameObject__GetComponent_object_
                                (pUVar20,(MethodInfo_6F5650 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler
                                );
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar13 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if (bVar13) {
            iVar16 = Projectiles_ThunderspearProjectile__CalculateDamage(__this,false,(MethodInfo *)0x0);
            pCVar5 = (__this->fields)._owner;
            if (pCVar5 == (Characters_BaseCharacter_o *)0x0) break;
            pSVar22 = (pCVar5->fields).RichTextName;
            pUVar18 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar18 == (UnityEngine_Transform_o *)0x0) break;
            pUVar19 = UnityEngine_Transform__get_position(local_68,pUVar18,(MethodInfo *)0x0);
            if (__this_03 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) break;
            local_a8.x = (pUVar19->fields).x;
            local_a8.y = (pUVar19->fields).y;
            local_a8.z = (pUVar19->fields).z;
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      (__this_03,pCVar5,pSVar22,iVar16,"Thunderspear",
                       (UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
          }
          else {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar13 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar13) {
              pCVar5 = (__this->fields)._owner;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar13 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)pCVar5,(MethodInfo *)0x0);
              if (bVar13) {
                pSVar22 = (__this->fields)._team;
                if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
                }
                bVar13 = GameManagers_TeamInfo__SameTeam_1e76f20
                                   ((Characters_BaseCharacter_o *)a,pSVar22,(MethodInfo *)0x0);
                if (!bVar13) {
                  if (a == (Characters_BaseTitan_o *)0x0) break;
                  if ((a->fields).Dead == false) {
                    pCVar6 = (a->fields).BaseTitanCache;
                    if (pCVar6 == (Characters_BaseTitanComponentCache_o *)0x0) break;
                    y = (UnityEngine_Object_o *)(pCVar6->fields).NapeHurtbox;
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar13 = UnityEngine_Object__op_Equality(x,y,(MethodInfo *)0x0);
                    if (bVar13) {
                      local_98._0_8_ = uVar1;
                      local_98.z = fVar3;
                      bVar13 = (*(a->klass->vtable)._201_CheckNapeAngle.methodPtr)
                                         (a,(UnityEngine_Vector3_o *)&local_98,restrictAngle,
                                          (a->klass->vtable)._201_CheckNapeAngle.method);
                      iVar16 = 100;
                      iVar4 = (a->fields).CurrentHealth;
                      pCVar5 = (__this->fields)._owner;
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar14 = UnityEngine_Object__op_Equality
                                         ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if ((bVar14) ||
                         (pCVar5 = (__this->fields)._owner, pCVar5 == (Characters_BaseCharacter_o *)0x0)) {
label_1820d2db4:
                        pSVar21 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                        uVar23 = 100;
                        pSVar22 = "Thunderspear";
label_1820d2dd2:
                        il2cpp_runtime_helper_18017a990(0x60,a,"Thunderspear",uVar23,pSVar22,pSVar21);
                      }
                      else {
                        pCVar7 = pCVar5->klass;
                        bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
                        if (((pCVar7->_2).typeHierarchyDepth < bVar2) ||
                           ((pCVar7->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                            (Il2CppClass *)TypeInfo_Characters_Human)) goto label_1820d2db4;
                        if (bVar13 && (__this->fields)._isEmbed == false) {
label_1820d2be5:
                          iVar16 = 0;
                          pSVar21 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                          uVar23 = 0;
                          pSVar22 = "TitanStun";
                          goto label_1820d2dd2;
                        }
                        if (bVar13) {
                          iVar16 = Projectiles_ThunderspearProjectile__CalculateDamage
                                             (__this,false,(MethodInfo *)0x0);
                          pCVar5 = (__this->fields)._owner;
                          if (pCVar5 == (Characters_BaseCharacter_o *)0x0) break;
                          if ((pCVar5->fields).AI == false) {
                            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                            }
                            __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                            if (__this_00 == (UI_InGameMenu_o *)0x0) break;
                            bVar2 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
                            if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
                               ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                                (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                              il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
                            }
                            UI_InGameMenu__ShowKillScore(__this_00,iVar16,false,(MethodInfo *)0x0);
                            pCVar6 = (a->fields).BaseTitanCache;
                            if ((pCVar6 == (Characters_BaseTitanComponentCache_o *)0x0) ||
                               (pUVar18 = (pCVar6->fields).Neck, pUVar18 == (UnityEngine_Transform_o *)0x0))
                            break;
                            __this_01 = (Cameras_InGameCamera_o *)
                                        TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera
                            ;
                            pUVar19 = UnityEngine_Transform__get_position(&local_78,pUVar18,(MethodInfo *)0x0)
                            ;
                            if (__this_01 == (Cameras_InGameCamera_o *)0x0) break;
                            pCVar8 = __this_01->klass;
                            bVar2 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
                            if (((pCVar8->_2).typeHierarchyDepth < bVar2) ||
                               (ppIVar9 = (pCVar8->_2).typeHierarchy,
                               ppIVar9[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
                            {
                              il2cpp_codegen_raise_invalid_cast_exception
                                        (__this_01,TypeInfo_Cameras_InGameCamera);
                            }
                            local_88.x = (pUVar19->fields).x;
                            local_88.y = (pUVar19->fields).y;
                            local_88.z = (pUVar19->fields).z;
                            bVar2 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
                            if (((pCVar8->_2).typeHierarchyDepth < bVar2) ||
                               (ppIVar9[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera)
                               ) {
                              il2cpp_codegen_raise_invalid_cast_exception
                                        (__this_01,TypeInfo_Cameras_InGameCamera);
                            }
                            Cameras_InGameCamera__TakeSnapshot
                                      (__this_01,(UnityEngine_Vector3_o *)&local_88,iVar16,(MethodInfo *)0x0);
                          }
                          pCVar5 = (__this->fields)._owner;
                          pSVar22 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                          il2cpp_runtime_helper_18017a990(0x5f,a,pCVar5,iVar16,"Thunderspear",pSVar22);
                        }
                        else if ((__this->fields)._isEmbed != false) goto label_1820d2be5;
                      }
                      pCVar5 = (__this->fields)._owner;
                      if (pCVar5 == (Characters_BaseCharacter_o *)0x0) break;
                      bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
                      if (((pCVar5->klass->_2).typeHierarchyDepth < bVar2) ||
                         ((pCVar5->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                          (Il2CppClass *)TypeInfo_Characters_Human)) {
                        il2cpp_codegen_raise_invalid_cast_exception(pCVar5);
                      }
                      pSVar10 = (*(uint64_t *)((char *)pCVar5 + 0x110));
                      if (pSVar10 != (System_Threading_CancellationTokenSource_o *)0x0) {
                        pSVar11 = pSVar10->klass;
                        bVar2 = (TypeInfo_Characters_RechargeableUseable->_2).typeHierarchyDepth;
                        if ((bVar2 <= (pSVar11->_2).typeHierarchyDepth) &&
                           ((pSVar11->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
                            (Il2CppClass *)TypeInfo_Characters_RechargeableUseable)) {
                          __this_02 = (Characters_RechargeableUseable_o *)
                                      (__this->fields)._owner[1].fields.m_CancellationTokenSource;
                          bVar2 = (TypeInfo_Characters_RechargeableUseable->_2).typeHierarchyDepth;
                          if (((__this_02->klass->_2).typeHierarchyDepth < bVar2) ||
                             ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                              (Il2CppClass *)TypeInfo_Characters_RechargeableUseable)) {
                            il2cpp_codegen_raise_invalid_cast_exception
                                      (__this_02,TypeInfo_Characters_RechargeableUseable);
                          }
                          Characters_RechargeableUseable__ReduceCooldown(__this_02,(MethodInfo *)0x0);
                        }
                      }
                      if ((float)iVar4 <= (float)iVar16) {
                        uVar12 = 2;
                        if (2 < uVar24) {
                          uVar12 = uVar24;
                        }
                        uVar24 = uVar12;
                        uVar17 = uVar17 + 1;
                      }
                      else {
                        uVar12 = 3;
                        if (3 < uVar24) {
                          uVar12 = uVar24;
                        }
                        uVar24 = uVar12;
                        uVar17 = uVar17 + 1;
                      }
                      goto label_1820d2977;
                    }
                  }
                }
              }
            }
          }
          uVar17 = uVar17 + 1;
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$KillPlayersInRadius
// il2cpp: int32_t Projectiles_ThunderspearProjectile__KillPlayersInRadius (Projectiles_ThunderspearProjectile_o* __this, float radius, const MethodInfo* method);
// 0x1820d20a0
// eh: try 0x1820d2260..0x1820d275c -> pad 0x18333b330 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d25ce: mov edi, eax
// asm:   0x1820d25d0: mov dword ptr [rsp + 0x158], eax
// asm:   0x1820d25d7: jmp 0x1820d2260
// asm:   0x1820d2666: mov edi, eax
// asm:   0x1820d2668: mov dword ptr [rsp + 0x158], eax
// asm:   0x1820d266f: jmp 0x1820d2260
// asm:   0x1820d267e: mov edi, eax
// asm:   0x1820d2680: mov dword ptr [rsp + 0x158], eax
// asm:   0x1820d2687: jmp 0x1820d2260
// asm:   0x1820d2696: mov edi, eax
// asm:   0x1820d2698: mov dword ptr [rsp + 0x158], eax
// asm:   0x1820d269f: jmp 0x1820d2260
// asm:   0x1820d26b5: mov rdx, qword ptr [rip + 0x1faf86c]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x1820d26bc: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1820d26c1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820d26c6: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820d26cb: test rcx, rcx
// asm:   0x1820d26ce: jne 0x1820d275c
// asm:   0x1820d26d4: mov edi, dword ptr [rsp + 0x158]
// asm:   0x1820d275c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333b330: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333b335: push rbp
// asm:   0x18333b336: sub rsp, 0x30
// asm:   0x18333b33a: mov rbp, rdx
// asm:   0x18333b33d: mov rax, qword ptr [rbp + 0xb0]
// asm:   0x18333b344: mov rcx, qword ptr [rax]
// asm:   0x18333b347: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18333b34b: movabs rax, 0
// asm:   0x18333b355: add rsp, 0x30
// asm:   0x18333b359: pop rbp
// asm:   0x18333b35a: ret 

int32_t Projectiles_ThunderspearProjectile__KillPlayersInRadius
                  (Projectiles_ThunderspearProjectile_o *__this,float radius,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  float fVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  Utility_BaseComponentCache_o *pUVar5;
  Characters_BaseCharacter_o *pCVar6;
  System_String_o *b;
  Characters_BaseCharacter_c *pCVar7;
  UI_InGameMenu_o *__this_01;
  Cameras_InGameCamera_o *__this_02;
  Cameras_InGameCamera_c *pCVar8;
  Il2CppObject *a;
  uint uVar9;
  bool bVar10;
  int32_t score;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Vector3_o *pUVar12;
  uint uVar13;
  float fVar14;
  UnityEngine_Vector3_Fields local_108;
  undefined1 local_f8 [16];
  Characters_BaseCharacter_o *local_e8;
  System_Collections_Generic_HashSet_Enumerator_T__o local_e0;
  UnityEngine_Vector3_Fields local_c8;
  undefined8 local_b8;
  float local_b0;
  UnityEngine_Vector3_Fields local_a8;
  undefined8 local_98;
  float local_90;
  UnityEngine_Vector3_o local_80;
  UnityEngine_Vector3_o local_70;
  UnityEngine_Vector3_o local_60 [4];
  
  if (Il2CppMethodInitialized_18434692c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_18434692c = '\x01';
  }
  local_e0.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_e0.fields._index = 0;
  local_e0.fields._version = 0;
  local_e0.fields._current = (Il2CppObject *)0x0;
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar12 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_108,pUVar11,(MethodInfo *)0x0),
     pGVar4 != (GameManagers_BaseGameManager_o *)0x0)) {
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar4,TypeInfo_GameManagers_InGameManager);
    }
    __this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(*(uint64_t *)((char *)pGVar4 + 0x40))
    ;
    if (__this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
      uVar1._0_4_ = (pUVar12->fields).x;
      uVar1._4_4_ = (pUVar12->fields).y;
      fVar3 = (pUVar12->fields).z;
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_f8,__this_00,
                 (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
      local_e0.fields._set = (System_Collections_Generic_HashSet_T__o *)local_f8._0_8_;
      local_e0.fields._index = local_f8._8_4_;
      local_e0.fields._version = local_f8._12_4_;
      local_e0.fields._current = (Il2CppObject *)local_e8;
      local_f8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_f8._8_8_ = &local_e0;
      uVar9 = 0;
      do {
        do {
          do {
            do {
              do {
                do {
                  uVar13 = uVar9;
                  bVar10 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                     (&local_e0,
                                      (MethodInfo_15381F0 *)
                                      MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext)
                  ;
                  a = local_e0.fields._current;
                  if (!bVar10) {
                    System_Collections_Generic_HashSet_Enumerator_object___Dispose
                              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_e0,
                               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
                    return uVar13;
                  }
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar10 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
                  ;
                  uVar9 = uVar13;
                } while (bVar10);
                if ((Characters_BaseCharacter_o *)a == (Characters_BaseCharacter_o *)0x0) {
                  ThrowNullReferenceException();
                }
              } while (((Characters_BaseCharacter_Fields *)((longlong)a + 0x10))->Dead != false);
              pUVar5 = ((Characters_BaseCharacter_Fields *)((longlong)a + 0x10))->Cache;
              if (pUVar5 == (Utility_BaseComponentCache_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar11 = (pUVar5->fields).Transform;
              if (pUVar11 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar12 = UnityEngine_Transform__get_position(&local_80,pUVar11,(MethodInfo *)0x0);
              local_b8._0_4_ = (pUVar12->fields).x;
              local_b8._4_4_ = (pUVar12->fields).y;
              local_b0 = (pUVar12->fields).z;
              local_c8._0_8_ = uVar1;
              local_c8.z = fVar3;
              fVar14 = (float)il2cpp_runtime_helper_180562c80(&local_b8,&local_c8);
            } while (radius <= fVar14);
            pCVar6 = (__this->fields)._owner;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar10 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)pCVar6,(MethodInfo *)0x0);
          } while (!bVar10);
          b = (__this->fields)._team;
          if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
          }
          bVar10 = GameManagers_TeamInfo__SameTeam_1e76f20
                             ((Characters_BaseCharacter_o *)a,b,(MethodInfo *)0x0);
        } while (bVar10);
        pCVar6 = (__this->fields)._owner;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((bVar10) || (pCVar6 = (__this->fields)._owner, pCVar6 == (Characters_BaseCharacter_o *)0x0)) {
label_1820d258f:
          il2cpp_runtime_helper_18017a990(0x60,a,"",100,"Thunderspear","");
        }
        else {
          pCVar7 = pCVar6->klass;
          bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if (((pCVar7->_2).typeHierarchyDepth < bVar2) ||
             ((pCVar7->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
          goto label_1820d258f;
          score = Projectiles_ThunderspearProjectile__CalculateDamage(__this,true,(MethodInfo *)0x0);
          il2cpp_runtime_helper_18017a990(0x5f,a,(__this->fields)._owner,score,"Thunderspear","");
          if (((Characters_BaseCharacter_Fields *)((longlong)a + 0x10))->AI == false) {
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            __this_01 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (__this_01 == (UI_InGameMenu_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar2 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
            if (((__this_01->klass->_2).typeHierarchyDepth < bVar2) ||
               ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_UI_InGameMenu);
            }
            UI_InGameMenu__ShowKillScore(__this_01,score,false,(MethodInfo *)0x0);
            pUVar5 = ((Characters_BaseCharacter_Fields *)((longlong)a + 0x10))->Cache;
            if (pUVar5 == (Utility_BaseComponentCache_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar11 = (pUVar5->fields).Transform;
            if (pUVar11 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_02 = (Cameras_InGameCamera_o *)
                        TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
            pUVar12 = UnityEngine_Transform__get_position(&local_70,pUVar11,(MethodInfo *)0x0);
            if (__this_02 == (Cameras_InGameCamera_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar8 = __this_02->klass;
            bVar2 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
            if (((pCVar8->_2).typeHierarchyDepth < bVar2) ||
               ((pCVar8->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_02,TypeInfo_Cameras_InGameCamera);
            }
            local_a8.x = (pUVar12->fields).x;
            local_a8.y = (pUVar12->fields).y;
            local_a8.z = (pUVar12->fields).z;
            bVar2 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
            if (((pCVar8->_2).typeHierarchyDepth < bVar2) ||
               ((pCVar8->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_02,TypeInfo_Cameras_InGameCamera);
            }
            Cameras_InGameCamera__TakeSnapshot
                      (__this_02,(UnityEngine_Vector3_o *)&local_a8,score,(MethodInfo *)0x0);
          }
        }
        if (((Characters_BaseCharacter_Fields *)((longlong)a + 0x10))->CurrentHealth < 1) {
          pCVar6 = (__this->fields)._owner;
          if (pCVar6 == (Characters_BaseCharacter_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar5 = (pCVar6->fields).Cache;
          if (pUVar5 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar11 = (pUVar5->fields).Transform;
          if (pUVar11 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar12 = UnityEngine_Transform__get_position(local_60,pUVar11,(MethodInfo *)0x0);
          local_98._0_4_ = (pUVar12->fields).x;
          local_98._4_4_ = (pUVar12->fields).y;
          local_90 = (pUVar12->fields).z;
          local_108._0_8_ = uVar1;
          local_108.z = fVar3;
          fVar14 = (float)il2cpp_runtime_helper_180562c80(&local_108,&local_98);
          if (fVar14 < radius) {
            uVar9 = 4;
            if (4 < uVar13) {
              uVar9 = uVar13;
            }
          }
          else if ((__this->fields)._wasMaxRange == false) {
            uVar9 = 2;
            if (2 < uVar13) {
              uVar9 = uVar13;
            }
          }
          else {
            uVar9 = 5;
            if (5 < uVar13) {
              uVar9 = uVar13;
            }
          }
        }
        else {
          uVar9 = 3;
          if (3 < uVar13) {
            uVar9 = uVar13;
          }
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$DamageHorsesInRadius
// il2cpp: void Projectiles_ThunderspearProjectile__DamageHorsesInRadius (Projectiles_ThunderspearProjectile_o* __this, float radius, const MethodInfo* method);
// 0x1820d1170
// eh: try 0x1820d12e0..0x1820d1509 -> pad 0x18333e060 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d14b3: mov rdx, qword ptr [rip + 0x1fb07ce]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose
// asm:   0x1820d14ba: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1820d14bf: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820d14c4: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1820d14c9: test rcx, rcx
// asm:   0x1820d14cc: jne 0x1820d1509
// asm:   0x1820d1509: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333e060: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e065: push rbp
// asm:   0x18333e066: sub rsp, 0x30
// asm:   0x18333e06a: mov rbp, rdx
// asm:   0x18333e06d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x18333e071: mov rcx, qword ptr [rax]
// asm:   0x18333e074: mov qword ptr [rbp + 0x58], rcx
// asm:   0x18333e078: movabs rax, 0
// asm:   0x18333e082: add rsp, 0x30
// asm:   0x18333e086: pop rbp
// asm:   0x18333e087: ret 

void Projectiles_ThunderspearProjectile__DamageHorsesInRadius
               (Projectiles_ThunderspearProjectile_o *__this,float radius,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  System_String_o *b;
  Utility_BaseComponentCache_o *pUVar3;
  Characters_BaseCharacter_o *pCVar4;
  Characters_BaseCharacter_c *pCVar5;
  Il2CppObject *a;
  bool bVar6;
  int32_t iVar7;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o local_c0;
  UnityEngine_Vector3_o local_b0;
  undefined1 local_a0 [16];
  Characters_BaseCharacter_o *local_90;
  System_Collections_Generic_HashSet_Enumerator_T__o local_88 [4];
  
  if (Il2CppMethodInitialized_18434692d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_18434692d = '\x01';
  }
  local_88[0].fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_88[0].fields._index = 0;
  local_88[0].fields._version = 0;
  local_88[0].fields._current = (Il2CppObject *)0x0;
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
    }
    if ((*(uint64_t *)((char *)pGVar2 + 0x58)) != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a0,(*(uint64_t *)((char *)pGVar2 + 0x58)),
                 (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
      local_88[0].fields._set = (System_Collections_Generic_HashSet_T__o *)local_a0._0_8_;
      local_88[0].fields._index = local_a0._8_4_;
      local_88[0].fields._version = local_a0._12_4_;
      local_88[0].fields._current = (Il2CppObject *)local_90;
      local_a0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_a0._8_8_ = local_88;
label_1820d12e0:
      do {
        do {
          do {
            do {
              do {
                bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                  (local_88,(MethodInfo_15381F0 *)
                                            MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext
                                  );
                a = local_88[0].fields._current;
                if (!bVar6) {
                  System_Collections_Generic_HashSet_Enumerator_object___Dispose
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88,
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
                  return;
                }
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar6 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              } while (bVar6);
              if ((Characters_BaseCharacter_o *)a == (Characters_BaseCharacter_o *)0x0) {
                ThrowNullReferenceException();
              }
            } while (((Characters_BaseCharacter_Fields *)((longlong)a + 0x10))->Dead != false);
            b = (__this->fields)._team;
            if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
            }
            bVar6 = GameManagers_TeamInfo__SameTeam_1e76f20
                              ((Characters_BaseCharacter_o *)a,b,(MethodInfo *)0x0);
          } while (bVar6);
          pUVar3 = ((Characters_BaseCharacter_Fields *)((longlong)a + 0x10))->Cache;
          if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar9 = (pUVar3->fields).Transform;
          if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar8 = UnityEngine_Transform__get_position(&local_c0,pUVar9,(MethodInfo *)0x0);
          fVar12 = (pUVar8->fields).x;
          fVar10 = (pUVar8->fields).y;
          fVar11 = (pUVar8->fields).z;
          pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar8 = UnityEngine_Transform__get_position(&local_b0,pUVar9,(MethodInfo *)0x0);
          fVar12 = fVar12 - (pUVar8->fields).x;
          fVar10 = fVar10 - (pUVar8->fields).y;
          fVar11 = fVar11 - (pUVar8->fields).z;
        } while (radius * radius <= fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12);
        pCVar4 = (__this->fields)._owner;
        if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
          pCVar5 = pCVar4->klass;
          bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if ((bVar1 <= (pCVar5->_2).typeHierarchyDepth) &&
             ((pCVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
            pCVar4 = (__this->fields)._owner;
            iVar7 = Projectiles_ThunderspearProjectile__CalculateDamage(__this,false,(MethodInfo *)0x0);
            il2cpp_runtime_helper_18017a990(0x5f,a,pCVar4,iVar7,"Thunderspear","");
            goto label_1820d12e0;
          }
        }
        il2cpp_runtime_helper_18017a990(0x60,a,"Thunderspear",100,"Thunderspear","");
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$CalculateDamage
// il2cpp: int32_t Projectiles_ThunderspearProjectile__CalculateDamage (Projectiles_ThunderspearProjectile_o* __this, bool dmgOverride, const MethodInfo* method);
// 0x1820d0f20

int32_t Projectiles_ThunderspearProjectile__CalculateDamage
                  (Projectiles_ThunderspearProjectile_o *__this,bool dmgOverride,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameMiscSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  Characters_BaseCharacter_o *pCVar6;
  Characters_BaseCharacter_c *pCVar7;
  bool bVar8;
  int iVar9;
  System_Xml_Schema_XmlSchema_o *pSVar10;
  longlong *plVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  
  if (Il2CppMethodInitialized_18434692e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"DamageMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_18434692e = '\x01';
  }
  if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
  }
  pSVar2 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
  if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar10 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Thunderspear");
    if (pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      plVar11 = (longlong *)
                (*(pSVar10->klass->vtable)._7_get_IdAttribute.methodPtr)
                          (pSVar10,(MethodInfo *)"DamageMultiplier");
      if (plVar11 != (longlong *)0x0) {
        fVar13 = (float)(**(code **)(*plVar11 + 0x388))(plVar11);
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
            (pSVar4 = (pSVar3->fields).Misc, pSVar4 != (Settings_InGameMiscSettings_o *)0x0)) &&
           (pSVar5 = (pSVar4->fields).ThunderspearPVP, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
          if ((pSVar5->fields)._value != false) {
            fVar13 = 1.0;
          }
          fVar14 = (float)il2cpp_runtime_helper_180546a40(&(__this->fields).InitialPlayerVelocity);
          iVar9 = (int)(fVar14 * 10.0 * fVar13);
          iVar12 = 10;
          if (10 < iVar9) {
            iVar12 = iVar9;
          }
          pCVar6 = (__this->fields)._owner;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((bVar8) && (pCVar6 = (__this->fields)._owner, pCVar6 != (Characters_BaseCharacter_o *)0x0)) {
            pCVar7 = pCVar6->klass;
            bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
            if ((bVar1 <= (pCVar7->_2).typeHierarchyDepth) &&
               ((pCVar7->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human))
            {
              pCVar6 = (__this->fields)._owner;
              bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
              if (((pCVar6->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pCVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Characters_Human)) {
                il2cpp_codegen_raise_invalid_cast_exception(pCVar6,TypeInfo_Characters_Human);
              }
              if ((pCVar6->fields).CustomDamageEnabled != false) {
                return (pCVar6->fields).CustomDamage;
              }
            }
          }
          return iVar12;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$Update
// il2cpp: void Projectiles_ThunderspearProjectile__Update (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x1820d43c0

void Projectiles_ThunderspearProjectile__Update
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o *pUVar3;
  float fVar4;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  Projectiles_BaseProjectile__Update((Projectiles_BaseProjectile_o *)__this,(MethodInfo *)0x0);
  pPVar1 = (__this->fields)._photonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((pPVar1->fields)._IsMine_k__BackingField != false) {
      fVar4 = (float)il2cpp_runtime_helper_180546a40(&(__this->fields)._velocity);
      if (0.0 < fVar4) {
        __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        local_28.x = (__this->fields)._velocity.fields.x;
        local_28.y = (__this->fields)._velocity.fields.y;
        local_28.z = (__this->fields)._velocity.fields.z;
        local_38.x = 0.0;
        local_38.y = 0.0;
        local_38.z = 0.0;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_38.x = (pUVar2->upVector).fields.x;
        local_38.y = (pUVar2->upVector).fields.y;
        local_38.z = (pUVar2->upVector).fields.z;
        pUVar3 = UnityEngine_Quaternion__Internal_LookRotation
                           (&local_18,(UnityEngine_Vector3_o *)&local_28,(UnityEngine_Vector3_o *)&local_38,
                            (MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_1820d44b2;
        local_28.x = (pUVar3->fields).x;
        local_28.y = (pUVar3->fields).y;
        local_28.z = (pUVar3->fields).z;
        local_28.w = (pUVar3->fields).w;
        UnityEngine_Transform__set_rotation(__this_00,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0)
        ;
      }
    }
    return;
  }
label_1820d44b2:
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$FixedUpdate
// il2cpp: void Projectiles_ThunderspearProjectile__FixedUpdate (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x1820d1bd0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d1fbf: xor edx, edx
// asm:   0x1820d1fc1: mov rcx, rbx
// asm:   0x1820d1fc4: call 0x1820d1520  ; Projectiles_ThunderspearProjectile__Explode()
// asm:   0x1820d1fc9: jmp 0x1820d1e89

void Projectiles_ThunderspearProjectile__FixedUpdate
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Characters_BaseCharacter_o *x;
  bool bVar7;
  UnityEngine_LayerMask_o layerMask;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Vector3_o *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_RaycastHit_o local_78 [2];
  
  if (Il2CppMethodInitialized_18434692f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ThunderspearProjectile);
    Il2CppMethodInitialized_18434692f = '\x01';
  }
  pPVar5 = (__this->fields)._photonView;
  local_78[0].fields.m_Normal.fields.y = 0.0;
  local_78[0].fields.m_Normal.fields.z = 0.0;
  local_78[0].fields.m_FaceID = 0;
  local_78[0].fields.m_Distance = 0.0;
  local_78[0].fields.m_UV.fields.x = 0.0;
  local_78[0].fields.m_UV.fields.y = 0.0;
  local_78[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_78[0].fields.m_Point.fields.x = 0.0;
  local_78[0].fields.m_Point.fields.y = 0.0;
  local_78[0].fields.m_Point.fields.z = 0.0;
  local_78[0].fields.m_Normal.fields.x = 0.0;
  if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((pPVar5->fields)._IsMine_k__BackingField == false) {
      return;
    }
    if ((__this->fields)._isEmbed == false) {
      pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        pUVar9 = UnityEngine_Transform__get_position
                           ((UnityEngine_Vector3_o *)&local_88,pUVar8,(MethodInfo *)0x0);
        uVar2._0_4_ = (__this->fields)._lastPosition.fields.x;
        uVar2._4_4_ = (__this->fields)._lastPosition.fields.y;
        fVar4 = (__this->fields)._lastPosition.fields.z;
        uVar1 = (pUVar9->fields).x;
        uVar3 = (pUVar9->fields).y;
        fVar12 = (pUVar9->fields).z - (__this->fields)._lastPosition.fields.z;
        local_98.y = (float)uVar3 - uVar2._4_4_;
        local_98.x = (float)uVar1 - (float)uVar2;
        local_98.z = fVar12;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar10 = (float)il2cpp_runtime_helper_180546a40(&local_98);
        if (fVar10 <= 1e-05) {
          pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar11 = (pUVar6->zeroVector).fields.x;
          fVar13 = (pUVar6->zeroVector).fields.y;
          fVar12 = (pUVar6->zeroVector).fields.z;
        }
        else {
          fVar11 = ((float)uVar1 - (float)uVar2) / fVar10;
          fVar13 = ((float)uVar3 - uVar2._4_4_) / fVar10;
          fVar12 = fVar12 / fVar10;
        }
        fVar10 = (float)il2cpp_runtime_helper_180546a40(&local_98);
        if ((TypeInfo_Projectiles_ThunderspearProjectile->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ThunderspearProjectile);
        }
        layerMask = UnityEngine_LayerMask__op_Implicit
                              ((TypeInfo_Projectiles_ThunderspearProjectile->static_fields->_collideMask).
                               fields.m_Mask,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        local_98.y = fVar13;
        local_98.x = fVar11;
        local_98.z = fVar12;
        local_88._0_8_ = uVar2;
        local_88.z = fVar4;
        bVar7 = UnityEngine_Physics__SphereCast_2fe64a0
                          ((UnityEngine_Vector3_o *)&local_88,0.5,(UnityEngine_Vector3_o *)&local_98,local_78,
                           fVar10,(int32_t)layerMask.fields.m_Mask,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar9 = UnityEngine_RaycastHit__get_point
                             ((UnityEngine_Vector3_o *)&local_98,local_78,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_1820d1fce;
          local_88.z = (pUVar9->fields).z;
          local_88.x = (pUVar9->fields).x;
          local_88.y = (pUVar9->fields).y;
          UnityEngine_Transform__set_position(pUVar8,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
        }
        pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          pUVar9 = UnityEngine_Transform__get_position
                             ((UnityEngine_Vector3_o *)&local_88,pUVar8,(MethodInfo *)0x0);
          fVar4 = (pUVar9->fields).y;
          fVar12 = (pUVar9->fields).z;
          (__this->fields)._lastPosition.fields.x = (pUVar9->fields).x;
          (__this->fields)._lastPosition.fields.y = fVar4;
          (__this->fields)._lastPosition.fields.z = fVar12;
          return;
        }
      }
    }
    else {
      __this_00 = (__this->fields)._rigidbody;
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
        pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_88.x = (pUVar6->zeroVector).fields.x;
        local_88.y = (pUVar6->zeroVector).fields.y;
        local_88.z = (pUVar6->zeroVector).fields.z;
        UnityEngine_Rigidbody__set_linearVelocity
                  (__this_00,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
        pUVar8 = (__this->fields)._embedParent;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar7) {
label_1820d1f81:
          x = (__this->fields)._owner;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar7) {
            return;
          }
          if ((__this->fields)._isAA == false) {
            return;
          }
          Projectiles_ThunderspearProjectile__Explode(__this,(MethodInfo *)0x0);
          return;
        }
        pUVar8 = (__this->fields)._embedParent;
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          local_88.x = (__this->fields)._embedPosition.fields.x;
          local_88.y = (__this->fields)._embedPosition.fields.y;
          local_88.z = (__this->fields)._embedPosition.fields.z;
          __this_01 = (__this->fields)._transform;
          pUVar9 = UnityEngine_Transform__TransformPoint
                             ((UnityEngine_Vector3_o *)&local_98,pUVar8,(UnityEngine_Vector3_o *)&local_88,
                              (MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            local_88.x = (pUVar9->fields).x;
            local_88.y = (pUVar9->fields).y;
            local_88.z = (pUVar9->fields).z;
            UnityEngine_Transform__set_position
                      (__this_01,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
            goto label_1820d1f81;
          }
        }
      }
    }
  }
label_1820d1fce:
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$GetStat
// il2cpp: float Projectiles_ThunderspearProjectile__GetStat (Projectiles_ThunderspearProjectile_o* __this, System_String_o* field, const MethodInfo* method);
// 0x1820d1fe0

float Projectiles_ThunderspearProjectile__GetStat
                (Projectiles_ThunderspearProjectile_o *__this,System_String_o *field,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  longlong *plVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346930 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_184346930 = '\x01';
  }
  if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
  }
  pSVar1 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,(MethodInfo *)"Thunderspear");
    if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      plVar3 = (longlong *)(*(pSVar2->klass->vtable)._7_get_IdAttribute.methodPtr)(pSVar2,(MethodInfo *)field)
      ;
      if (plVar3 != (longlong *)0x0) {
        fVar4 = (float)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
        return fVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$.ctor
// il2cpp: void Projectiles_ThunderspearProjectile___ctor (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x1820d46d0

void Projectiles_ThunderspearProjectile___ctor
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._embedPosition.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._embedPosition.fields.y = fVar3;
  (__this->fields)._embedPosition.fields.z = fVar1;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._startPosition.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._startPosition.fields.y = fVar3;
  (__this->fields)._startPosition.fields.z = fVar1;
  Projectiles_BaseProjectile___ctor((Projectiles_BladeThrowProjectile_o *)__this,(MethodInfo *)0x0);
  return;
}


// Projectiles.ThunderspearProjectile$$.cctor
// il2cpp: void Projectiles_ThunderspearProjectile___cctor (const MethodInfo* method);
// 0x1820d44c0

void Projectiles_ThunderspearProjectile___cctor(MethodInfo *method)

{
  Projectiles_ThunderspearProjectile_StaticFields *pPVar1;
  UnityEngine_LayerMask_o UVar2;
  System_Int32_array *pSVar3;
  
  if (Il2CppMethodInitialized_184346931 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ThunderspearProjectile);
    Il2CppMethodInitialized_184346931 = '\x01';
  }
  pSVar3 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (pSVar3 != (System_Int32_array *)0x0) {
    if (((((int)pSVar3->max_length != 0) &&
         (pSVar3->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
         1 < (uint)pSVar3->max_length)) &&
        (pSVar3->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
        2 < (uint)pSVar3->max_length)) &&
       (pSVar3->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectProjectiles,
       3 < (uint)pSVar3->max_length)) {
      pSVar3->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox;
      UVar2 = Utility_PhysicsLayer__GetMask(pSVar3,(MethodInfo *)0x0);
      (TypeInfo_Projectiles_ThunderspearProjectile->static_fields->_collideMask).fields.m_Mask =
           (int32_t)UVar2.fields.m_Mask;
      pSVar3 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,5);
      if (pSVar3 == (System_Int32_array *)0x0) goto label_1820d46c2;
      if ((((int)pSVar3->max_length != 0) &&
          (pSVar3->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
          1 < (uint)pSVar3->max_length)) &&
         ((pSVar3->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
          2 < (uint)pSVar3->max_length &&
          ((pSVar3->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectProjectiles,
           3 < (uint)pSVar3->max_length &&
           (pSVar3->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox,
           4 < (uint)pSVar3->max_length)))))) {
        pSVar3->m_Items[4] = TypeInfo_Utility_PhysicsLayer->static_fields->Human;
        UVar2 = Utility_PhysicsLayer__GetMask(pSVar3,(MethodInfo *)0x0);
        (TypeInfo_Projectiles_ThunderspearProjectile->static_fields->_blockMask).fields.m_Mask =
             (int32_t)UVar2.fields.m_Mask;
        pPVar1 = TypeInfo_Projectiles_ThunderspearProjectile->static_fields;
        (pPVar1->CritColor).fields.r = 0.475;
        (pPVar1->CritColor).fields.g = 0.7;
        (pPVar1->CritColor).fields.b = 1.0;
        (pPVar1->CritColor).fields.a = 1.0;
        return;
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1820d46c2:
  ThrowNullReferenceException();
}


