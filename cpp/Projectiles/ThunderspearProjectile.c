// Type: Projectiles.ThunderspearProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Projectiles/ThunderspearProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/ThunderspearProjectile.cs
// --------------------------------

// Projectiles.ThunderspearProjectile$$SetupSettings
// il2cpp: void Projectiles_ThunderspearProjectile__SetupSettings (Projectiles_ThunderspearProjectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x5873c70

void Projectiles_ThunderspearProjectile__SetupSettings
               (Projectiles_ThunderspearProjectile_o *__this,System_Object_array *settings,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_o UVar8;
  
  if (Il2CppMethodInitialized_07545181 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    Il2CppMethodInitialized_07545181 = '\x01';
  }
  if (settings != (System_Object_array *)0x0) {
    if ((int)settings->max_length == 0) {
label_05873dbc:
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = settings->m_Items[0];
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((pIVar1->klass->_1).element_class != *(Il2CppClass **)(g_data_07556740 + 0x40)) {
label_05873dc1:
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pfVar4 = il2cpp_vm_Object_Unbox(pIVar1);
      (__this->fields)._radius = *pfVar4;
      if ((settings->max_length & 0xfffffffe) == 0) goto label_05873dbc;
      pIVar1 = settings->m_Items[1];
      if (pIVar1 != (Il2CppObject *)0x0) {
        if ((pIVar1->klass->_1).element_class != (TypeInfo_UnityEngine_Color->_1).element_class)
        goto label_05873dc1;
        puVar5 = il2cpp_vm_Object_Unbox(pIVar1);
        uVar2 = *puVar5;
        uVar3 = puVar5[1];
        (__this->fields)._color.fields.r = (float)(int)uVar2;
        (__this->fields)._color.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
        (__this->fields)._color.fields.b = (float)(int)uVar3;
        (__this->fields)._color.fields.a = (float)(int)((ulong)uVar3 >> 0x20);
        if ((uint)settings->max_length < 3) goto label_05873dbc;
        pIVar1 = settings->m_Items[2];
        if (pIVar1 != (Il2CppObject *)0x0) {
          if ((pIVar1->klass->_1).element_class != *(Il2CppClass **)(g_data_075566f0 + 0x40)) goto label_05873dc1;
          puVar6 = il2cpp_vm_Object_Unbox(pIVar1);
          (__this->fields)._usesEmbed = (bool)*puVar6;
          pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UVar8 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
            (__this->fields)._lastPosition.fields.x = UVar8.fields.x;
            (__this->fields)._lastPosition.fields.y = UVar8.fields.y;
            (__this->fields)._lastPosition.fields.z = UVar8.fields.z;
            pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              UVar8 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
              (__this->fields)._startPosition.fields.x = UVar8.fields.x;
              (__this->fields)._startPosition.fields.y = UVar8.fields.y;
              (__this->fields)._startPosition.fields.z = UVar8.fields.z;
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
// 0x5873dd0

void Projectiles_ThunderspearProjectile__RegisterObjects
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  UnityEngine_GameObject_array *pUVar4;
  Settings_AbilitySettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  UnityEngine_ParticleSystem_MinMaxGradient_o value;
  UnityEngine_ParticleSystem_MinMaxGradient_o value_00;
  MethodInfo *pMVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_ParticleSystem_o *__this_00;
  UnityEngine_ParticleSystem_o *__this_01;
  UnityEngine_GameObject_o *item;
  UnityEngine_GameObject_o *item_00;
  UnityEngine_ParticleSystem_MainModule_o UStack_a8;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields UStack_a0;
  UnityEngine_ParticleSystem_MinMaxGradient_Fields UStack_68;
  
  if (Il2CppMethodInitialized_07545182 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Flame");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearModel");
    il2cpp_codegen_initialize_runtime_metadata(&"Trail");
    Il2CppMethodInitialized_07545182 = '\x01';
  }
  UStack_a8.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    pUVar8 = UnityEngine_Transform__Find(pUVar8,"Trail",(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar8,
                             (MethodInfo_34B0830 *)
                             MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
      pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        pUVar8 = UnityEngine_Transform__Find(pUVar8,"Flame",(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          __this_01 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar8,
                                 (MethodInfo_34B0830 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
          pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            pUVar8 = UnityEngine_Transform__Find(pUVar8,"ThunderspearModel",(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              item = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
              if (__this_01 != (UnityEngine_ParticleSystem_o *)0x0) {
                pSVar3 = (__this->fields)._hideObjects;
                item_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                pMVar7 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
                if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                  piVar1 = &(pSVar3->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar4 = (pSVar3->fields)._items;
                  if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
                    uVar2 = (pSVar3->fields)._size;
                    if (uVar2 < (uint)pUVar4->max_length) {
                      (pSVar3->fields)._size = uVar2 + 1;
                      pUVar4->m_Items[(int)uVar2] = item_00;
                      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item_00,
                                 (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
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
                          pUVar4->m_Items[(int)uVar2] = item;
                          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                                     (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                        }
                        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
                        if ((pSVar5 != (Settings_AbilitySettings_o *)0x0) &&
                           (pSVar6 = (pSVar5->fields).ShowBombColors, pSVar6 != (Settings_BoolSetting_o *)0x0)
                           ) {
                          if ((pSVar6->fields)._value != false) {
                            if (__this_00 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05874110;
                            UStack_a8 = UnityEngine_ParticleSystem__get_main(__this_00,(MethodInfo *)0x0);
                            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                                      ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&UStack_68,
                                       (UnityEngine_Color_o)(__this->fields)._color.fields,(MethodInfo *)0x0);
                            value.fields.m_GradientMin = UStack_68.m_GradientMin;
                            value.fields.m_Mode = UStack_68.m_Mode;
                            value.fields._4_4_ = UStack_68._4_4_;
                            value.fields.m_GradientMax = UStack_68.m_GradientMax;
                            value.fields.m_ColorMin.fields.r = UStack_68.m_ColorMin.fields.r;
                            value.fields.m_ColorMin.fields.g = UStack_68.m_ColorMin.fields.g;
                            value.fields.m_ColorMin.fields.b = UStack_68.m_ColorMin.fields.b;
                            value.fields.m_ColorMin.fields.a = UStack_68.m_ColorMin.fields.a;
                            value.fields.m_ColorMax.fields.r = UStack_68.m_ColorMax.fields.r;
                            value.fields.m_ColorMax.fields.g = UStack_68.m_ColorMax.fields.g;
                            value.fields.m_ColorMax.fields.b = UStack_68.m_ColorMax.fields.b;
                            value.fields.m_ColorMax.fields.a = UStack_68.m_ColorMax.fields.a;
                            UnityEngine_ParticleSystem_MainModule__set_startColor
                                      (&UStack_a8,value,(MethodInfo *)0x0);
                            UStack_a8 = UnityEngine_ParticleSystem__get_main(__this_01,(MethodInfo *)0x0);
                            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                                      ((UnityEngine_ParticleSystem_MinMaxGradient_o *)&UStack_a0,
                                       (UnityEngine_Color_o)(__this->fields)._color.fields,(MethodInfo *)0x0);
                            value_00.fields.m_GradientMin = UStack_a0.m_GradientMin;
                            value_00.fields.m_Mode = UStack_a0.m_Mode;
                            value_00.fields._4_4_ = UStack_a0._4_4_;
                            value_00.fields.m_GradientMax = UStack_a0.m_GradientMax;
                            value_00.fields.m_ColorMin.fields.r = UStack_a0.m_ColorMin.fields.r;
                            value_00.fields.m_ColorMin.fields.g = UStack_a0.m_ColorMin.fields.g;
                            value_00.fields.m_ColorMin.fields.b = UStack_a0.m_ColorMin.fields.b;
                            value_00.fields.m_ColorMin.fields.a = UStack_a0.m_ColorMin.fields.a;
                            value_00.fields.m_ColorMax.fields.r = UStack_a0.m_ColorMax.fields.r;
                            value_00.fields.m_ColorMax.fields.g = UStack_a0.m_ColorMax.fields.g;
                            value_00.fields.m_ColorMax.fields.b = UStack_a0.m_ColorMax.fields.b;
                            value_00.fields.m_ColorMax.fields.a = UStack_a0.m_ColorMax.fields.a;
                            UnityEngine_ParticleSystem_MainModule__set_startColor
                                      (&UStack_a8,value_00,(MethodInfo *)0x0);
                          }
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
label_05874110:
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_ThunderspearProjectile__OnCollisionEnter (Projectiles_ThunderspearProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x5874120
// eh: try 0x5874434..0x5874c60 -> pad 0x5874c6e (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5874c86..0x5874c8b -> pad 0x5874cb0 cleanup
// eh: try 0x5874cb3..0x5874cbd -> pad 0x5874cc5 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5874c4e: mov byte ptr [r13 + 0x130], 1
// asm:   0x5874c56: jmp 0x58744ad
// asm:   0x5874c6a: jmp 0x5874c6e
// asm:   0x5874c6c: jmp 0x5874c6e
// asm:   0x5874c6e: mov rbx, rax
// asm:   0x5874c71: cmp edx, 1
// asm:   0x5874c74: jne 0x5874cb3
// asm:   0x5874c76: mov rdi, rbx
// asm:   0x5874c79: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5874c7e: mov rbx, qword ptr [rax]
// asm:   0x5874c81: mov qword ptr [rsp + 0x40], rbx
// asm:   0x5874c86: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5874c8b: lea rax, [rip + 0x1a18cae]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x5874c92: mov rsi, qword ptr [rax]
// asm:   0x5874c95: lea rdi, [rsp + 0x60]
// asm:   0x5874c9a: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5874c9f: test rbx, rbx
// asm:   0x5874ca2: je 0x587446d
// asm:   0x5874ca8: mov rdi, rbx
// asm:   0x5874cab: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5874cb0: mov rbx, rax
// asm:   0x5874cb3: lea rdi, [rsp + 0x40]
// asm:   0x5874cb8: call 0x2fcf720  ; il2cpp_runtime_helper_02fcf720()
// asm:   0x5874cbd: mov rdi, rbx
// asm:   0x5874cc0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5874cc5: mov rdi, rax
// asm:   0x5874cc8: call 0x2ab61e0  ; __clang_call_terminate()

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
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  Settings_InGameSet_o *pSVar15;
  Settings_InGameMiscSettings_o *pSVar16;
  Settings_BoolSetting_o *pSVar17;
  Settings_AbilitySettings_o *pSVar18;
  UnityEngine_Rigidbody_o *pUVar19;
  System_Collections_Generic_List_Collider__o *__this_00;
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  bool bVar23;
  Photon_Pun_PhotonView_o *pPVar24;
  UnityEngine_ContactPoint_array *pUVar25;
  UnityEngine_Vector3_StaticFields *pUVar26;
  UnityEngine_Transform_o *pUVar27;
  Characters_BaseTitan_o *x;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *pMVar28;
  System_Math_c *pSVar29;
  UnityEngine_Vector3_StaticFields *pUVar30;
  float fVar31;
  float fVar32;
  float extraout_XMM0_Db;
  undefined4 uVar33;
  undefined4 extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o value_00;
  float fStack_b8;
  float fStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_88;
  float fStack_84;
  undefined1 auStack_78 [16];
  UnityEngine_Collider_o *pUStack_68;
  float fStack_5c;
  undefined1 auStack_58 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_50;
  UnityEngine_Collider_o *pUStack_48;
  UnityEngine_Vector3_Fields UStack_40;
  
  if (Il2CppMethodInitialized_07545183 == '\0') {
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
    Il2CppMethodInitialized_07545183 = '\x01';
  }
  auStack_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pUStack_48 = (UnityEngine_Collider_o *)0x0;
  pPVar24 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar24 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((pPVar24->fields)._IsMine_k__BackingField == false) || ((__this->fields).Disabled != false)) {
      return;
    }
    pSVar15 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar15 == (Settings_InGameSet_o *)0x0) ||
        (pSVar16 = (pSVar15->fields).Misc, pSVar16 == (Settings_InGameMiscSettings_o *)0x0)) ||
       (pSVar17 = (pSVar16->fields).ThunderspearPVP, pSVar17 == (Settings_BoolSetting_o *)0x0))
    goto label_05874c60;
    if ((pSVar17->fields)._value != false) {
      pSVar18 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
      if ((pSVar18 == (Settings_AbilitySettings_o *)0x0) ||
         (pSVar17 = (pSVar18->fields).BombCollision, pSVar17 == (Settings_BoolSetting_o *)0x0))
      goto label_05874c60;
      if ((pSVar17->fields)._value != false) {
        pUVar19 = (__this->fields)._rigidbody;
        if (pUVar19 == (UnityEngine_Rigidbody_o *)0x0) goto label_05874c60;
        UVar39 = UnityEngine_Rigidbody__get_linearVelocity(pUVar19,(MethodInfo *)0x0);
        if ((collision == (UnityEngine_Collision_o *)0x0) ||
           (pUVar25 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0),
           pUVar25 == (UnityEngine_ContactPoint_array *)0x0)) goto label_05874c60;
        if ((int)pUVar25->max_length != 0) {
          UVar40 = UnityEngine_ContactPoint__get_normal(pUVar25->m_Items,(MethodInfo *)0x0);
          pUVar19 = (__this->fields)._rigidbody;
          if (pUVar19 != (UnityEngine_Rigidbody_o *)0x0) {
            fStack_b8 = UVar39.fields.x;
            fStack_b4 = UVar39.fields.y;
            fVar36 = (fStack_b4 * UVar40.fields.y + fStack_b8 * UVar40.fields.x +
                     UVar39.fields.z * UVar40.fields.z) * -2.0;
            UVar39.fields.z = (UVar40.fields.z * fVar36 + UVar39.fields.z) * 0.8;
            UVar39.fields.y = (fVar36 * UVar40.fields.y + fStack_b4) * 0.8;
            UVar39.fields.x = (fVar36 * UVar40.fields.x + fStack_b8) * 0.8;
            UnityEngine_Rigidbody__set_linearVelocity(pUVar19,UVar39,(MethodInfo *)0x0);
            pUVar19 = (__this->fields)._rigidbody;
            if (pUVar19 != (UnityEngine_Rigidbody_o *)0x0) {
              UVar39 = UnityEngine_Rigidbody__get_linearVelocity(pUVar19,(MethodInfo *)0x0);
              (__this->fields)._velocity.fields.x = UVar39.fields.x;
              (__this->fields)._velocity.fields.y = UVar39.fields.y;
              (__this->fields)._velocity.fields.z = UVar39.fields.z;
              return;
            }
          }
          goto label_05874c60;
        }
        goto label_05874c65;
      }
    }
    (__this->fields)._wasImpact = true;
    pUVar19 = (__this->fields)._rigidbody;
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    if (pUVar19 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_linearVelocity
                (pUVar19,(UnityEngine_Vector3_o)
                         (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._colliders;
      if (__this_00 != (System_Collections_Generic_List_Collider__o *)0x0) {
        pUVar30 = (UnityEngine_Vector3_StaticFields *)auStack_78;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)pUVar30,
                   (System_Collections_Generic_List_object__o *)__this_00,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
        pUStack_48 = pUStack_68;
        auStack_58 = (undefined1  [8])auStack_78._0_8_;
        pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_78._8_8_;
        auStack_78._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        auStack_78._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_58;
        while (bVar23 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
                                   (MethodInfo_4C45C50 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext),
              bVar23) {
          if (pUStack_48 == (UnityEngine_Collider_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Collider__set_enabled(pUStack_48,false,(MethodInfo *)0x0);
        }
        pMVar28 = MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
        pSVar15 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if (((pSVar15 != (Settings_InGameSet_o *)0x0) &&
            (pSVar16 = (pSVar15->fields).Misc, pSVar16 != (Settings_InGameMiscSettings_o *)0x0)) &&
           (pSVar17 = (pSVar16->fields).ThunderspearPVP, pSVar17 != (Settings_BoolSetting_o *)0x0)) {
          if (((pSVar17->fields)._value != false) || ((__this->fields)._usesEmbed == false)) {
            Projectiles_ThunderspearProjectile__Explode(__this,pMVar28);
            return;
          }
          (__this->fields)._isEmbed = true;
          fVar36 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
          (__this->fields)._embedTime = fVar36;
          if ((collision != (UnityEngine_Collision_o *)0x0) &&
             (pUVar25 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0),
             pUVar25 != (UnityEngine_ContactPoint_array *)0x0)) {
            if ((int)pUVar25->max_length == 0) {
label_05874c65:
              ThrowIndexOutOfRangeException();
            }
            UVar39 = UnityEngine_ContactPoint__get_normal(pUVar25->m_Items,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753e72d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e72d = '\x01';
            }
            auStack_78._0_4_ = 0.0;
            auStack_78._4_4_ = 0.0;
            if (Il2CppMethodInitialized_0753e729 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
              Il2CppMethodInitialized_0753e729 = '\x01';
            }
            fVar36 = (__this->fields)._velocity.fields.x;
            uVar1 = (__this->fields)._velocity.fields.y;
            uVar8 = (__this->fields)._velocity.fields.z;
            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            }
            fVar32 = (float)uVar8 * (float)uVar8;
            fVar36 = fVar32 + fVar36 * fVar36 + (float)uVar1 * (float)uVar1;
            if (fVar36 < 0.0) {
              fVar36 = sqrtf(fVar36);
              fVar32 = extraout_XMM0_Db;
            }
            else {
              fVar36 = SQRT(fVar36);
            }
            if (fVar36 <= 1e-05) {
              pUVar26 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar36 = (pUVar26->zeroVector).fields.z;
            }
            else {
              uVar2 = (__this->fields)._velocity.fields.x;
              uVar9 = (__this->fields)._velocity.fields.y;
              auVar34._4_4_ = uVar9;
              auVar34._0_4_ = uVar2;
              auVar34._8_8_ = 0;
              auVar35._4_4_ = fVar36;
              auVar35._0_4_ = fVar36;
              auVar35._8_4_ = fVar32;
              auVar35._12_4_ = fVar32;
              auVar35 = divps(auVar34,auVar35);
              auStack_78._0_4_ = auVar35._0_4_;
              auStack_78._4_4_ = auVar35._4_4_;
              fVar36 = (__this->fields)._velocity.fields.z / fVar36;
              pUVar26 = (UnityEngine_Vector3_StaticFields *)auStack_78;
            }
            uVar21 = (pUVar26->zeroVector).fields.x;
            uVar22 = (pUVar26->zeroVector).fields.y;
            fVar32 = (pUVar26->zeroVector).fields.x;
            fVar37 = (pUVar26->zeroVector).fields.y;
            if (Il2CppMethodInitialized_0753e72d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e72d = '\x01';
              fVar32 = (float)uVar21;
              fVar37 = (float)uVar22;
            }
            auStack_78._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            if (Il2CppMethodInitialized_0753e729 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
              Il2CppMethodInitialized_0753e729 = '\x01';
            }
            fStack_88 = UVar39.fields.x;
            fStack_84 = UVar39.fields.y;
            auVar38._0_4_ = fVar32 - fStack_88;
            auVar38._4_4_ = fVar37 - fStack_84;
            auVar38._8_4_ = 0.0 - extraout_XMM0_Dc;
            auVar38._12_4_ = 0.0 - extraout_XMM0_Dd;
            fVar36 = fVar36 - UVar39.fields.z;
            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            }
            uVar33 = 0;
            fVar32 = fVar36 * fVar36 + auVar38._4_4_ * auVar38._4_4_ + auVar38._0_4_ * auVar38._0_4_;
            if (fVar32 < 0.0) {
              fVar32 = sqrtf(fVar32);
              uVar33 = extraout_XMM0_Db_00;
            }
            else {
              fVar32 = SQRT(fVar32);
            }
            if (fVar32 <= 1e-05) {
              pUVar30 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar36 = (float)((System_Collections_Generic_List_Enumerator_T__Fields *)&pUVar30->zeroVector)->
                              _index;
            }
            else {
              fVar36 = fVar36 / fVar32;
              auVar20._4_4_ = fVar32;
              auVar20._0_4_ = fVar32;
              auVar20._8_4_ = uVar33;
              auVar20._12_4_ = uVar33;
              auVar35 = divps(auVar38,auVar20);
              auStack_78._0_8_ = auVar35._0_8_;
            }
            *(System_Collections_Generic_List_T__o **)&(__this->fields)._velocity.fields =
                 ((System_Collections_Generic_List_Enumerator_T__Fields *)&pUVar30->zeroVector)->_list;
            (__this->fields)._velocity.fields.z = fVar36;
            pUVar27 = UnityEngine_Collision__get_transform(collision,(MethodInfo *)0x0);
            (__this->fields)._embedParent = pUVar27;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._embedParent);
            pUVar27 = UnityEngine_Collision__get_transform(collision,(MethodInfo *)0x0);
            if ((pUVar27 != (UnityEngine_Transform_o *)0x0) &&
               (pUVar27 = UnityEngine_Transform__get_root(pUVar27,(MethodInfo *)0x0),
               pUVar27 != (UnityEngine_Transform_o *)0x0)) {
              x = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar27,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseTitan);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar23 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar23) {
                fVar36 = 0.5;
              }
              else {
                fVar36 = 0.1;
              }
              pUVar27 = UnityEngine_Collision__get_transform(collision,(MethodInfo *)0x0);
              pUVar25 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0);
              if (pUVar25 != (UnityEngine_ContactPoint_array *)0x0) {
                if ((int)pUVar25->max_length == 0) goto label_05874c65;
                UVar39 = UnityEngine_ContactPoint__get_point(pUVar25->m_Items,(MethodInfo *)0x0);
                if (pUVar27 != (UnityEngine_Transform_o *)0x0) {
                  UVar40.fields.z = UVar39.fields.z + (__this->fields)._velocity.fields.z * fVar36;
                  uVar3 = (__this->fields)._velocity.fields.x;
                  uVar10 = (__this->fields)._velocity.fields.y;
                  UVar40.fields.x = UVar39.fields.x + (float)uVar3 * fVar36;
                  UVar40.fields.y = UVar39.fields.y + (float)uVar10 * fVar36;
                  UVar39 = UnityEngine_Transform__InverseTransformPoint(pUVar27,UVar40,(MethodInfo *)0x0);
                  (__this->fields)._embedPosition.fields.x = UVar39.fields.x;
                  (__this->fields)._embedPosition.fields.y = UVar39.fields.y;
                  (__this->fields)._embedPosition.fields.z = UVar39.fields.z;
                  pUVar27 = (__this->fields)._transform;
                  pUVar25 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0);
                  if (pUVar25 != (UnityEngine_ContactPoint_array *)0x0) {
                    if ((int)pUVar25->max_length == 0) goto label_05874c65;
                    UVar39 = UnityEngine_ContactPoint__get_point(pUVar25->m_Items,(MethodInfo *)0x0);
                    if (pUVar27 != (UnityEngine_Transform_o *)0x0) {
                      value_00.fields.z = UVar39.fields.z + fVar36 * (__this->fields)._velocity.fields.z;
                      uVar4 = (__this->fields)._velocity.fields.x;
                      uVar11 = (__this->fields)._velocity.fields.y;
                      value_00.fields.x = UVar39.fields.x + fVar36 * (float)uVar4;
                      value_00.fields.y = UVar39.fields.y + fVar36 * (float)uVar11;
                      UnityEngine_Transform__set_position(pUVar27,value_00,(MethodInfo *)0x0);
                      pUVar27 = (__this->fields)._transform;
                      auStack_78._0_8_ = *(undefined8 *)&(__this->fields)._velocity.fields;
                      auStack_78._8_4_ = (__this->fields)._velocity.fields.z;
                      if (Il2CppMethodInitialized_0753e72c == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                        Il2CppMethodInitialized_0753e72c = '\x01';
                      }
                      pUVar30 = TypeInfo_UnityEngine_Vector3->static_fields;
                      UStack_40.x = (pUVar30->upVector).fields.x;
                      UStack_40.y = (pUVar30->upVector).fields.y;
                      UStack_40.z = (pUVar30->upVector).fields.z;
                      value = UnityEngine_Quaternion__Internal_LookRotation
                                        ((UnityEngine_Vector3_o *)auStack_78,
                                         (UnityEngine_Vector3_o *)&UStack_40,(MethodInfo *)0x0);
                      if (pUVar27 != (UnityEngine_Transform_o *)0x0) {
                        UnityEngine_Transform__set_rotation(pUVar27,value,(MethodInfo *)0x0);
                        pUVar27 = (__this->fields)._transform;
                        if (pUVar27 != (UnityEngine_Transform_o *)0x0) {
                          uVar5 = (__this->fields)._startPosition.fields.x;
                          uVar12 = (__this->fields)._startPosition.fields.y;
                          fVar36 = (__this->fields)._startPosition.fields.z;
                          UVar39 = UnityEngine_Transform__get_position(pUVar27,(MethodInfo *)0x0);
                          pMVar28 = extraout_RDX;
                          if (Il2CppMethodInitialized_0753e7b7 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                            Il2CppMethodInitialized_0753e7b7 = '\x01';
                            pMVar28 = extraout_RDX_00;
                          }
                          pSVar29 = TypeInfo_System_Math;
                          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                            pMVar28 = extraout_RDX_01;
                          }
                          fVar36 = fVar36 - UVar39.fields.z;
                          fVar32 = (float)uVar5 - UVar39.fields.x;
                          fVar37 = (float)uVar12 - UVar39.fields.y;
                          fVar36 = fVar36 * fVar36 + fVar37 * fVar37 + fVar32 * fVar32;
                          if (fVar36 < 0.0) {
                            fVar36 = sqrtf(fVar36);
                            pMVar28 = extraout_RDX_02;
                          }
                          else {
                            fVar36 = SQRT(fVar36);
                          }
                          fVar32 = Projectiles_ThunderspearProjectile__GetStat
                                             ((Projectiles_ThunderspearProjectile_o *)pSVar29,
                                              "Embed1Time",pMVar28);
                          fVar37 = Projectiles_ThunderspearProjectile__GetStat
                                             ((Projectiles_ThunderspearProjectile_o *)pSVar29,
                                              "Embed1TimeMultiplier",method_00);
                          pMVar28 = extraout_RDX_03;
                          if (Il2CppMethodInitialized_0753e729 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                            Il2CppMethodInitialized_0753e729 = '\x01';
                            pMVar28 = extraout_RDX_04;
                          }
                          fVar31 = (__this->fields).InitialPlayerVelocity.fields.x;
                          uVar6 = (__this->fields).InitialPlayerVelocity.fields.y;
                          uVar13 = (__this->fields).InitialPlayerVelocity.fields.z;
                          pSVar29 = TypeInfo_System_Math;
                          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                            fStack_5c = fVar31;
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                            pMVar28 = extraout_RDX_05;
                            fVar31 = fStack_5c;
                          }
                          fVar31 = (float)uVar13 * (float)uVar13 +
                                   fVar31 * fVar31 + (float)uVar6 * (float)uVar6;
                          if (fVar31 < 0.0) {
                            fVar31 = sqrtf(fVar31);
                            pMVar28 = extraout_RDX_06;
                          }
                          else {
                            fVar31 = SQRT(fVar31);
                          }
                          fVar32 = fVar32 + fVar37 * fVar31;
                          fVar37 = Projectiles_ThunderspearProjectile__GetStat
                                             ((Projectiles_ThunderspearProjectile_o *)pSVar29,
                                              "Embed1TimeMax",pMVar28);
                          if (fVar37 <= fVar32) {
                            fVar32 = fVar37;
                          }
                          fVar37 = Projectiles_ThunderspearProjectile__GetStat
                                             ((Projectiles_ThunderspearProjectile_o *)pSVar29,
                                              "Embed1TimeMin",method_01);
                          if (fVar32 <= fVar37) {
                            fVar32 = fVar37;
                          }
                          fVar31 = Projectiles_ThunderspearProjectile__GetStat
                                             ((Projectiles_ThunderspearProjectile_o *)pSVar29,
                                              "Embed2TimeTotal",method_02);
                          fVar37 = Projectiles_ThunderspearProjectile__GetStat
                                             ((Projectiles_ThunderspearProjectile_o *)pSVar29,
                                              "Embed2TimeMultiplier",method_03);
                          fVar31 = fVar31 - fVar36 * fVar37;
                          if (fVar31 <= 0.0) {
                            fVar31 = 0.0;
                          }
                          (__this->fields)._timeLeft = fVar31 + fVar32;
                          pUVar27 = (__this->fields)._transform;
                          if (pUVar27 != (UnityEngine_Transform_o *)0x0) {
                            UVar39 = UnityEngine_Transform__get_position(pUVar27,(MethodInfo *)0x0);
                            uVar7 = (__this->fields)._startPosition.fields.x;
                            uVar14 = (__this->fields)._startPosition.fields.y;
                            fVar36 = (__this->fields)._startPosition.fields.z;
                            pMVar28 = extraout_RDX_07;
                            if (Il2CppMethodInitialized_0753e7b7 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                              Il2CppMethodInitialized_0753e7b7 = '\x01';
                              pMVar28 = extraout_RDX_08;
                            }
                            pSVar29 = TypeInfo_System_Math;
                            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                              pMVar28 = extraout_RDX_09;
                            }
                            fVar32 = UVar39.fields.y - (float)uVar14;
                            fVar36 = UVar39.fields.z - fVar36;
                            fVar37 = UVar39.fields.x - (float)uVar7;
                            fVar36 = fVar32 * fVar32 + fVar37 * fVar37 + fVar36 * fVar36;
                            if (fVar36 < 0.0) {
                              fVar36 = sqrtf(fVar36);
                              pMVar28 = extraout_RDX_10;
                            }
                            else {
                              fVar36 = SQRT(fVar36);
                            }
                            fVar32 = Projectiles_ThunderspearProjectile__GetStat
                                               ((Projectiles_ThunderspearProjectile_o *)pSVar29,
                                                "AATriggerRange",pMVar28);
                            if (fVar32 <= fVar36) {
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
label_05874c60:
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$OnExceedLiveTime
// il2cpp: void Projectiles_ThunderspearProjectile__OnExceedLiveTime (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x5875450

void Projectiles_ThunderspearProjectile__OnExceedLiveTime
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  (__this->fields)._wasMaxRange = true;
  if ((__this->fields)._isEmbed == false) {
    Projectiles_ThunderspearProjectile__Explode(__this,method);
    return;
  }
  (*(__this->klass->vtable)._17_DestroySelf.methodPtr)(__this,(__this->klass->vtable)._17_DestroySelf.method);
  return;
}


// Projectiles.ThunderspearProjectile$$Explode
// il2cpp: void Projectiles_ThunderspearProjectile__Explode (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x5874cd0

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
  uint uVar6;
  uint uVar7;
  uint uVar8;
  UnityEngine_Transform_o *pUVar9;
  System_Object_array *settings;
  Il2CppObject *pIVar10;
  Il2CppObject *pIVar11;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *pMVar12;
  System_String_o **__this_00;
  Projectiles_ThunderspearProjectile_o *__this_01;
  System_Math_c *__this_02;
  float fVar13;
  float fVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar15;
  undefined4 uVar16;
  UnityEngine_Quaternion_o UVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o position;
  float local_b0;
  undefined1 local_a9;
  undefined1 local_a8 [24];
  float local_90;
  uint local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  __this_00 = (System_String_o **)__this;
  if (Il2CppMethodInitialized_07545184 == '\0') {
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
    __this_00 = &"Embed1TimeMultiplier";
    il2cpp_codegen_initialize_runtime_metadata(&"Embed1TimeMultiplier");
    Il2CppMethodInitialized_07545184 = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((__this->fields).Disabled != false) {
    return;
  }
  pMVar12 = (MethodInfo *)"RestrictAngle";
  fVar13 = Projectiles_ThunderspearProjectile__GetStat
                     ((Projectiles_ThunderspearProjectile_o *)__this_00,"RestrictAngle",in_RDX);
  local_58._0_4_ = (__this->fields)._color.fields.r;
  local_58._4_4_ = (__this->fields)._color.fields.g;
  uStack_50._0_4_ = (__this->fields)._color.fields.b;
  uStack_50._4_4_ = (__this->fields)._color.fields.a;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Misc, pSVar3 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).ThunderspearPVP, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar4->fields)._value == false) {
      local_78._0_4_ = 0x3f800000;
      if ((__this->fields)._isEmbed == false) {
        local_a8._0_4_ = fVar13;
      }
      else {
        __this_01 = (Projectiles_ThunderspearProjectile_o *)0x0;
        fVar13 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
        local_a8._0_4_ = fVar13;
        local_88._0_4_ = (__this->fields)._embedTime;
        fVar13 = Projectiles_ThunderspearProjectile__GetStat(__this_01,"Embed1Time",method_00);
        fVar14 = Projectiles_ThunderspearProjectile__GetStat(__this_01,"Embed1TimeMultiplier",method_01);
        local_68._0_4_ = fVar14;
        pMVar12 = extraout_RDX_00;
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e729 = '\x01';
          pMVar12 = extraout_RDX_01;
        }
        fVar14 = (__this->fields).InitialPlayerVelocity.fields.x;
        uVar1._0_4_ = (__this->fields).InitialPlayerVelocity.fields.y;
        uVar1._4_4_ = (__this->fields).InitialPlayerVelocity.fields.z;
        __this_02 = TypeInfo_System_Math;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          uStack_40 = 0;
          local_90 = fVar14;
          local_48 = uVar1;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          pMVar12 = extraout_RDX_02;
          uVar1._0_4_ = (float)local_48;
          uVar1._4_4_ = local_48._4_4_;
          fVar14 = local_90;
        }
        fVar14 = uVar1._4_4_ * uVar1._4_4_ + fVar14 * fVar14 + (float)uVar1 * (float)uVar1;
        if (fVar14 < 0.0) {
          fVar14 = sqrtf(fVar14);
          pMVar12 = extraout_RDX_03;
        }
        else {
          fVar14 = SQRT(fVar14);
        }
        fVar13 = fVar13 + (float)local_68._0_4_ * fVar14;
        fVar14 = Projectiles_ThunderspearProjectile__GetStat
                           ((Projectiles_ThunderspearProjectile_o *)__this_02,"Embed1TimeMax",pMVar12);
        if (fVar14 <= fVar13) {
          fVar13 = fVar14;
        }
        fVar14 = Projectiles_ThunderspearProjectile__GetStat
                           ((Projectiles_ThunderspearProjectile_o *)__this_02,"Embed1TimeMin",method_02)
        ;
        if (fVar13 <= fVar14) {
          fVar13 = fVar14;
        }
        if ((float)local_a8._0_4_ - (float)local_88._0_4_ <= fVar13) {
          fVar13 = Projectiles_ThunderspearProjectile__GetStat
                             ((Projectiles_ThunderspearProjectile_o *)__this_02,"RadiusEmbed1Multiplier",
                              method_03);
          local_78._0_4_ = fVar13;
          (__this->fields)._radius = (__this->fields)._radius * fVar13;
          pMVar12 = (MethodInfo *)"RestrictAngleEmbed1";
          fVar13 = Projectiles_ThunderspearProjectile__GetStat
                             ((Projectiles_ThunderspearProjectile_o *)__this_02,"RestrictAngleEmbed1",
                              method_05);
          local_a8._0_4_ = fVar13;
          if ((TypeInfo_Projectiles_ThunderspearProjectile->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ThunderspearProjectile);
          }
          pPVar5 = TypeInfo_Projectiles_ThunderspearProjectile->static_fields;
          local_58._0_4_ = (pPVar5->CritColor).fields.r;
          local_58._4_4_ = (pPVar5->CritColor).fields.g;
          uStack_50._0_4_ = (pPVar5->CritColor).fields.b;
          uStack_50._4_4_ = (pPVar5->CritColor).fields.a;
        }
        else {
          fVar13 = (__this->fields)._radius;
          fVar14 = Projectiles_ThunderspearProjectile__GetStat
                             ((Projectiles_ThunderspearProjectile_o *)__this_02,"RadiusEmbed2Multiplier",
                              method_03);
          (__this->fields)._radius = fVar14 * fVar13;
          pMVar12 = (MethodInfo *)"RestrictAngleEmbed2";
          fVar13 = Projectiles_ThunderspearProjectile__GetStat
                             ((Projectiles_ThunderspearProjectile_o *)__this_02,"RestrictAngleEmbed2",
                              method_04);
          local_a8._0_4_ = fVar13;
        }
      }
      fVar13 = (__this->fields)._radius;
      local_b0 = fVar13 * 4.0;
    }
    else {
      local_a8._0_4_ = fVar13;
      fVar13 = (__this->fields)._radius;
      local_b0 = fVar13 + fVar13;
      local_78._0_4_ = 0x3f800000;
    }
    uVar6 = Projectiles_ThunderspearProjectile__KillPlayersInRadius(__this,fVar13,pMVar12);
    Projectiles_ThunderspearProjectile__DamageHorsesInRadius(__this,(__this->fields)._radius,pMVar12);
    uVar15 = 0;
    uVar16 = 0;
    uVar7 = Projectiles_ThunderspearProjectile__KillTitansInRadius
                      (__this,(__this->fields)._radius,(float)local_a8._0_4_,pMVar12);
    attacker = (__this->fields)._owner;
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      UVar18 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      fVar13 = UVar18.fields.x;
      fVar14 = UVar18.fields.y;
      uVar1._0_4_ = UVar18.fields.z;
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        local_a8._8_4_ = extraout_XMM0_Dc;
        local_a8._0_8_ = UVar18.fields._0_8_;
        local_a8._12_4_ = extraout_XMM0_Dd;
        local_88._0_4_ = UVar18.fields.z;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        uVar15 = 0;
        uVar16 = 0;
        fVar13 = (float)local_a8._0_4_;
        fVar14 = (float)local_a8._4_4_;
        uVar1._0_4_ = (float)local_88._0_4_;
      }
      UVar18.fields.y = fVar14;
      UVar18.fields.x = fVar13;
      UVar18.fields.z = (float)uVar1;
      Map_MapDestruction__Explode(attacker,UVar18,(local_b0 * 0.5) / (float)local_78._0_4_,(MethodInfo *)0x0);
      uVar8 = (uint)(__this->fields)._wasImpact;
      if ((int)uVar6 < (int)uVar8) {
        uVar6 = uVar8;
      }
      if ((int)uVar6 <= (int)uVar7) {
        uVar6 = uVar7;
      }
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      name = TypeInfo_Effects_EffectPrefabs->static_fields->ThunderspearExplode;
      pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        UVar18 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
        local_78._8_4_ = extraout_XMM0_Dc_00;
        local_78._0_8_ = UVar18.fields._0_8_;
        local_78._12_4_ = extraout_XMM0_Dd_00;
        local_a8._0_4_ = UVar18.fields.z;
        pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          UVar17 = UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
          local_88._8_4_ = extraout_XMM0_Dc_01;
          local_88._0_8_ = UVar17.fields._0_8_;
          local_88._12_4_ = extraout_XMM0_Dd_01;
          local_68._8_4_ = uVar15;
          local_68._0_8_ = UVar17.fields._8_8_;
          local_68._12_4_ = uVar16;
          settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
          local_38 = local_58;
          uStack_30 = uStack_50;
          pIVar10 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_38);
          if (settings != (System_Object_array *)0x0) {
            if ((pIVar10 != (Il2CppObject *)0x0) &&
               (pIVar11 = il2cpp_vm_Object_IsInst(pIVar10,(((settings->obj).klass)->_1).element_class),
               pIVar11 == (Il2CppObject *)0x0)) {
label_0587535c:
              pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
            }
            if ((int)settings->max_length != 0) {
              settings->m_Items[0] = pIVar10;
              Il2CppCodeGenWriteBarrier(settings->m_Items);
              local_8c = uVar6;
              pIVar10 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_Projectiles_TSKillType,&local_8c);
              if ((pIVar10 != (Il2CppObject *)0x0) &&
                 (pIVar11 = il2cpp_vm_Object_IsInst(pIVar10,(((settings->obj).klass)->_1).element_class),
                 pIVar11 == (Il2CppObject *)0x0)) goto label_0587535c;
              if ((settings->max_length & 0xfffffffe) != 0) {
                settings->m_Items[1] = pIVar10;
                Il2CppCodeGenWriteBarrier(settings->m_Items + 1);
                local_a9 = (__this->fields)._wasImpact;
                pIVar10 = il2cpp_vm_Object_Box(g_data_075566f0,&local_a9);
                if ((pIVar10 != (Il2CppObject *)0x0) &&
                   (pIVar11 = il2cpp_vm_Object_IsInst(pIVar10,(((settings->obj).klass)->_1).element_class),
                   pIVar11 == (Il2CppObject *)0x0)) goto label_0587535c;
                if (2 < (uint)settings->max_length) {
                  settings->m_Items[2] = pIVar10;
                  Il2CppCodeGenWriteBarrier(settings->m_Items + 2);
                  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
                  }
                  pMVar12 = (MethodInfo *)0x1;
                  UVar17.fields.z = (float)local_68._0_4_;
                  UVar17.fields.w = (float)local_68._4_4_;
                  UVar17.fields.x = (float)local_88._0_4_;
                  UVar17.fields.y = (float)local_88._4_4_;
                  position.fields.z = (float)local_a8._0_4_;
                  position.fields.x = (float)local_78._0_4_;
                  position.fields.y = (float)local_78._4_4_;
                  Effects_EffectSpawner__Spawn(name,position,UVar17,local_b0,true,settings,(MethodInfo *)0x0);
                  Projectiles_ThunderspearProjectile__StunMyHuman(__this,pMVar12);
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
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$StunMyHuman
// il2cpp: void Projectiles_ThunderspearProjectile__StunMyHuman (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x5876880

void Projectiles_ThunderspearProjectile__StunMyHuman
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameMiscSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  Utility_BaseComponentCache_o *pUVar6;
  bool bVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  UnityEngine_Transform_o *pUVar10;
  Il2CppObject *pIVar11;
  Characters_Human_o *__this_00;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07545185 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"StunRange");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_07545185 = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar7) && (pCVar2 = (__this->fields)._owner, pCVar2 != (Characters_BaseCharacter_o *)0x0)) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       (((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human &&
        (bVar7 = Characters_BaseCharacter__IsMainCharacter(pCVar2,(MethodInfo *)0x0), bVar7)))) {
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if ((pSVar3 != (Settings_InGameSet_o *)0x0) &&
         ((pSVar4 = (pSVar3->fields).Misc, pSVar4 != (Settings_InGameMiscSettings_o *)0x0 &&
          (pSVar5 = (pSVar4->fields).ThunderspearPVP, pSVar5 != (Settings_BoolSetting_o *)0x0)))) {
        if ((pSVar5->fields)._value != false) {
          return;
        }
        if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
        }
        pSVar8 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
        if (((pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
            (pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar8,"Thunderspear",(pSVar8->klass->vtable)._7_get_Item.method),
            pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0)) &&
           (plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar8,"StunRange",
                                        *(MethodInfo **)((long)&(pSVar8->klass->vtable)._7_get_Item + 8)),
           plVar9 != (long *)0x0)) {
          fVar12 = (float)(**(code **)(*plVar9 + 0x388))(plVar9);
          pCVar2 = (__this->fields)._owner;
          if (((pCVar2 != (Characters_BaseCharacter_o *)0x0) &&
              (pUVar6 = (pCVar2->fields).Cache, pUVar6 != (Utility_BaseComponentCache_o *)0x0)) &&
             (pUVar10 = (pUVar6->fields).Transform, pUVar10 != (UnityEngine_Transform_o *)0x0)) {
            UVar14 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
            pUVar10 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
              UVar15 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_0753e7b7 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                Il2CppMethodInitialized_0753e7b7 = '\x01';
              }
              if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              }
              local_38 = UVar14.fields.x;
              fStack_34 = UVar14.fields.y;
              fStack_34 = fStack_34 - UVar15.fields.y;
              fVar13 = UVar14.fields.z - UVar15.fields.z;
              local_38 = local_38 - UVar15.fields.x;
              fVar13 = fStack_34 * fStack_34 + local_38 * local_38 + fVar13 * fVar13;
              if (fVar13 < 0.0) {
                fVar13 = sqrtf(fVar13);
              }
              else {
                fVar13 = SQRT(fVar13);
              }
              if (fVar12 <= fVar13) {
                return;
              }
              pCVar2 = (__this->fields)._owner;
              pUVar10 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                UVar14 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
                pIVar11 = il2cpp_codegen_is_inst_class
                                    ((Il2CppObject *)pCVar2,(Il2CppClass *)TypeInfo_Characters_Human);
                if (pIVar11 != (Il2CppObject *)0x0) {
                  __this_00 = (Characters_Human_o *)
                              il2cpp_codegen_is_inst_class
                                        ((Il2CppObject *)pCVar2,(Il2CppClass *)TypeInfo_Characters_Human);
                  Characters_Human__GetStunnedByTS(__this_00,UVar14,(MethodInfo *)0x0);
                  return;
                }
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
// 0x5876000
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58761e0: mov eax, dword ptr [rsp + 4]
// asm:   0x58761e4: mov ebx, eax

int32_t Projectiles_ThunderspearProjectile__KillTitansInRadius
                  (Projectiles_ThunderspearProjectile_o *__this,float radius,float restrictAngle,
                  MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_Object_o *x;
  Characters_BaseTitanComponentCache_o *pCVar3;
  UnityEngine_Object_o *y;
  Characters_BaseCharacter_c *pCVar4;
  Characters_RechargeableUseable_o *__this_00;
  UI_BaseMenu_o *obj;
  Cameras_BaseCamera_o *obj_00;
  bool bVar5;
  bool bVar6;
  UnityEngine_LayerMask_o mask;
  int32_t iVar7;
  uint uVar8;
  UnityEngine_Transform_o *pUVar9;
  System_Int32_array *layers;
  UnityEngine_Collider_array *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  Characters_BaseTitan_o *a;
  CustomLogic_CustomLogicCollisionHandler_o *__this_01;
  System_String_o *pSVar12;
  Il2CppObject *pIVar13;
  UI_InGameMenu_o *__this_02;
  Cameras_InGameCamera_o *__this_03;
  System_String_o *pSVar14;
  MethodInfo *method_00;
  Characters_BaseCharacter_o *pCVar15;
  Characters_BaseTitan_c *pCVar16;
  uint uVar17;
  MethodInfo *pMVar18;
  uint uVar19;
  Characters_BaseCharacter_o *pCVar20;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o UVar21;
  int local_78;
  
  if (Il2CppMethodInitialized_07545186 == '\0') {
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
    Il2CppMethodInitialized_07545186 = '\x01';
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
    position = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
    layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (layers != (System_Int32_array *)0x0) {
      if ((int)layers->max_length == 0) {
label_05876873:
        ThrowIndexOutOfRangeException();
      }
      layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox;
      mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      iVar7 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      uVar17 = 0;
      pUVar10 = UnityEngine_Physics__OverlapSphere_69dcbd0(position,radius,iVar7,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_Collider_array *)0x0) {
        uVar8 = (uint)pUVar10->max_length;
        if (0 < (int)uVar8) {
          uVar19 = 0;
          uVar17 = 0;
          do {
            if (uVar8 <= uVar19) goto label_05876873;
            x = (UnityEngine_Object_o *)pUVar10->m_Items[(int)uVar19];
            if ((((x == (UnityEngine_Object_o *)0x0) ||
                 (pUVar9 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
                 pUVar9 == (UnityEngine_Transform_o *)0x0)) ||
                (pUVar9 = UnityEngine_Transform__get_root(pUVar9,(MethodInfo *)0x0),
                pUVar9 == (UnityEngine_Transform_o *)0x0)) ||
               (pUVar11 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
               pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_0587686e;
            a = UnityEngine_GameObject__GetComponent_object_
                          (pUVar11,(MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_BaseTitan);
            pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
            if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_0587686e;
            __this_01 = UnityEngine_GameObject__GetComponent_object_
                                  (pUVar11,(MethodInfo_353B730 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler
                                  );
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            uVar8 = uVar17;
            if (bVar5) {
              iVar7 = Projectiles_ThunderspearProjectile__CalculateDamage(__this,false,method_00);
              pSVar14 = "Thunderspear";
              pCVar20 = (__this->fields)._owner;
              pCVar15 = pCVar20;
              if (Il2CppMethodInitialized_07545163 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                Il2CppMethodInitialized_07545163 = '\x01';
                pCVar15 = (__this->fields)._owner;
              }
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar5 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              if (bVar5) {
                pCVar15 = (__this->fields)._owner;
                if (pCVar15 == (Characters_BaseCharacter_o *)0x0) goto label_0587686e;
                pSVar14 = (pCVar15->fields).RichTextName;
              }
              pUVar9 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if ((pUVar9 == (UnityEngine_Transform_o *)0x0) ||
                 (UVar21 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0),
                 __this_01 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0)) goto label_0587686e;
              CustomLogic_CustomLogicCollisionHandler__GetHit
                        (__this_01,pCVar20,pSVar14,iVar7,"Thunderspear",UVar21,(MethodInfo *)0x0);
            }
            else {
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar5 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar5) {
                pCVar20 = (__this->fields)._owner;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)pCVar20,(MethodInfo *)0x0
                                  );
                if (bVar5) {
                  pSVar14 = (__this->fields)._team;
                  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
                  }
                  bVar5 = GameManagers_TeamInfo__SameTeam_5858ba0
                                    ((Characters_BaseCharacter_o *)a,pSVar14,(MethodInfo *)0x0);
                  if (!bVar5) {
                    if (a == (Characters_BaseTitan_o *)0x0) goto label_0587686e;
                    if ((a->fields).Dead == false) {
                      pCVar3 = (a->fields).BaseTitanCache;
                      if (pCVar3 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_0587686e;
                      y = (UnityEngine_Object_o *)(pCVar3->fields).NapeHurtbox;
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar5 = UnityEngine_Object__op_Equality(x,y,(MethodInfo *)0x0);
                      if (bVar5) {
                        bVar5 = (*(a->klass->vtable)._202_CheckNapeAngle.methodPtr)
                                          (a,position,restrictAngle,
                                           (a->klass->vtable)._202_CheckNapeAngle.method);
                        iVar2 = (a->fields).CurrentHealth;
                        pCVar20 = (__this->fields)._owner;
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar6 = UnityEngine_Object__op_Equality
                                          ((UnityEngine_Object_o *)pCVar20,(UnityEngine_Object_o *)0x0,
                                           (MethodInfo *)0x0);
                        if ((bVar6) ||
                           (pCVar20 = (__this->fields)._owner, pCVar20 == (Characters_BaseCharacter_o *)0x0))
                        {
label_05876540:
                          pSVar12 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                          pCVar16 = a->klass;
                          pMVar18 = (pCVar16->vtable)._96_GetHit.method;
                          local_78 = 100;
                          iVar7 = 100;
                          pSVar14 = "Thunderspear";
label_05876574:
                          (*(pCVar16->vtable)._96_GetHit.methodPtr)
                                    (a,"Thunderspear",iVar7,pSVar14,pSVar12,pMVar18);
                        }
                        else {
                          pCVar4 = pCVar20->klass;
                          bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
                          if (((pCVar4->_2).typeHierarchyDepth < bVar1) ||
                             ((pCVar4->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                              (Il2CppClass *)TypeInfo_Characters_Human)) goto label_05876540;
                          bVar6 = (__this->fields)._isEmbed;
                          if ((~bVar6 & bVar5) != 0) {
                            local_78 = 0;
                            pSVar12 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                            pCVar16 = a->klass;
                            pMVar18 = (pCVar16->vtable)._96_GetHit.method;
                            iVar7 = 0;
                            pSVar14 = "TitanStun";
                            goto label_05876574;
                          }
                          if (bVar5) {
                            local_78 = Projectiles_ThunderspearProjectile__CalculateDamage
                                                 (__this,false,(MethodInfo *)(ulong)bVar5);
                            pCVar20 = (__this->fields)._owner;
                            if (pCVar20 == (Characters_BaseCharacter_o *)0x0) goto label_0587686e;
                            if ((pCVar20->fields).AI == false) {
                              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                              }
                              obj = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                              pIVar13 = il2cpp_codegen_is_inst_class
                                                  ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UI_InGameMenu);
                              if (pIVar13 == (Il2CppObject *)0x0) goto label_0587686e;
                              __this_02 = (UI_InGameMenu_o *)
                                          il2cpp_codegen_is_inst_class
                                                    ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UI_InGameMenu
                                                    );
                              UI_InGameMenu__ShowKillScore(__this_02,local_78,false,(MethodInfo *)0x0);
                              pCVar3 = (a->fields).BaseTitanCache;
                              if ((pCVar3 == (Characters_BaseTitanComponentCache_o *)0x0) ||
                                 (pUVar9 = (pCVar3->fields).Neck, pUVar9 == (UnityEngine_Transform_o *)0x0))
                              goto label_0587686e;
                              obj_00 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
                              UVar21 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
                              pIVar13 = il2cpp_codegen_is_inst_class
                                                  ((Il2CppObject *)obj_00,
                                                   (Il2CppClass *)TypeInfo_Cameras_InGameCamera);
                              if (pIVar13 == (Il2CppObject *)0x0) goto label_0587686e;
                              __this_03 = (Cameras_InGameCamera_o *)
                                          il2cpp_codegen_is_inst_class
                                                    ((Il2CppObject *)obj_00,
                                                     (Il2CppClass *)TypeInfo_Cameras_InGameCamera);
                              Cameras_InGameCamera__TakeSnapshot(__this_03,UVar21,local_78,(MethodInfo *)0x0);
                              pCVar20 = (__this->fields)._owner;
                            }
                            pSVar14 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                            (*(a->klass->vtable)._95_GetHit.methodPtr)
                                      (a,pCVar20,local_78,"Thunderspear",pSVar14,
                                       (a->klass->vtable)._95_GetHit.method);
                          }
                          else if (bVar6 == false) {
                            local_78 = 100;
                          }
                          else {
                            local_78 = 0;
                            pSVar14 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                            (*(a->klass->vtable)._96_GetHit.methodPtr)
                                      (a,"Thunderspear",0,"TitanStun",pSVar14,
                                       (a->klass->vtable)._96_GetHit.method);
                          }
                        }
                        pCVar20 = (__this->fields)._owner;
                        if (pCVar20 != (Characters_BaseCharacter_o *)0x0) {
                          bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
                          if (((bVar1 <= (pCVar20->klass->_2).typeHierarchyDepth) &&
                              ((pCVar20->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                               (Il2CppClass *)TypeInfo_Characters_Human)) &&
                             (__this_00 = (Characters_RechargeableUseable_o *)
                                          (*(uint64_t *)((char *)pCVar20 + 0x118)),
                             __this_00 != (Characters_RechargeableUseable_o *)0x0)) {
                            bVar1 = (TypeInfo_Characters_RechargeableUseable->_2).typeHierarchyDepth;
                            if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
                               ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                                (Il2CppClass *)TypeInfo_Characters_RechargeableUseable)) {
                              Characters_RechargeableUseable__ReduceCooldown(__this_00,(MethodInfo *)0x0);
                            }
                          }
                        }
                        uVar8 = 3;
                        if ((float)iVar2 <= (float)local_78) {
                          if (uVar17 < 3) {
                            uVar17 = 2;
                          }
                          uVar8 = uVar17;
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar17 = uVar8;
            uVar19 = uVar19 + 1;
            uVar8 = (uint)pUVar10->max_length;
          } while ((int)uVar19 < (int)uVar8);
        }
        return uVar17;
      }
    }
  }
label_0587686e:
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$KillPlayersInRadius
// il2cpp: int32_t Projectiles_ThunderspearProjectile__KillPlayersInRadius (Projectiles_ThunderspearProjectile_o* __this, float radius, const MethodInfo* method);
// 0x5875480
// eh: try 0x5875653..0x5875b80 -> pad 0x5875bbe (+32 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5875bd6..0x5875bdb -> pad 0x5875c00 cleanup
// eh: try 0x5875c03..0x5875c0d -> pad 0x5875c15 catch (...) [compiler noexcept guard]
// asm: 61 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5875649: nop dword ptr [rax]
// asm:   0x58756e6: jmp 0x587570e
// asm:   0x587575a: jmp 0x5875770
// asm:   0x587587c: jmp 0x58759a0
// asm:   0x587590b: jmp 0x5875933
// asm:   0x58759a0: mov qword ptr [rsp], rax
// asm:   0x58759a4: jmp 0x5875650
// asm:   0x5875b80: jmp 0x5875bbe
// asm:   0x5875b82: jmp 0x5875bbe
// asm:   0x5875b84: jmp 0x5875bbe
// asm:   0x5875b86: jmp 0x5875bbe
// asm:   0x5875b88: jmp 0x5875bbe
// asm:   0x5875b8a: jmp 0x5875bbe
// asm:   0x5875b8c: jmp 0x5875bbe
// asm:   0x5875b8e: jmp 0x5875bbe
// asm:   0x5875b90: jmp 0x5875bbe
// asm:   0x5875b92: jmp 0x5875bbe
// asm:   0x5875b94: jmp 0x5875bbe
// asm:   0x5875b96: jmp 0x5875bbe
// asm:   0x5875b98: jmp 0x5875bbe
// asm:   0x5875b9a: jmp 0x5875bbe
// asm:   0x5875b9c: jmp 0x5875bbe
// asm:   0x5875b9e: jmp 0x5875bbe
// asm:   0x5875ba0: jmp 0x5875bbe
// asm:   0x5875ba2: jmp 0x5875bbe
// asm:   0x5875ba4: jmp 0x5875bbe
// asm:   0x5875ba6: jmp 0x5875bbe
// asm:   0x5875ba8: jmp 0x5875bbe
// asm:   0x5875baa: jmp 0x5875bbe
// asm:   0x5875bac: jmp 0x5875bbe
// asm:   0x5875bae: jmp 0x5875bbe
// asm:   0x5875bb0: jmp 0x5875bbe
// asm:   0x5875bb2: jmp 0x5875bbe
// asm:   0x5875bb4: jmp 0x5875bbe
// asm:   0x5875bb6: jmp 0x5875bbe
// asm:   0x5875bb8: jmp 0x5875bbe
// asm:   0x5875bba: jmp 0x5875bbe
// asm:   0x5875bbc: jmp 0x5875bbe
// asm:   0x5875bbe: mov rbx, rax
// asm:   0x5875bc1: cmp edx, 1
// asm:   0x5875bc4: jne 0x5875c03
// asm:   0x5875bc6: mov rdi, rbx
// asm:   0x5875bc9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5875bce: mov rbx, qword ptr [rax]
// asm:   0x5875bd1: mov qword ptr [rsp + 0x58], rbx
// asm:   0x5875bd6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5875bdb: lea rax, [rip + 0x1a18286]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x5875be2: mov rsi, qword ptr [rax]
// asm:   0x5875be5: lea rdi, [rsp + 0x20]
// asm:   0x5875bea: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5875bef: test rbx, rbx
// asm:   0x5875bf2: je 0x5875b1e
// asm:   0x5875bf8: mov rdi, rbx
// asm:   0x5875bfb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5875c00: mov rbx, rax
// asm:   0x5875c03: lea rdi, [rsp + 0x58]
// asm:   0x5875c08: call 0x2fcf750  ; il2cpp_runtime_helper_02fcf750()
// asm:   0x5875c0d: mov rdi, rbx
// asm:   0x5875c10: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5875c15: mov rdi, rax
// asm:   0x5875c18: call 0x2ab61e0  ; __clang_call_terminate()

int32_t Projectiles_ThunderspearProjectile__KillPlayersInRadius
                  (Projectiles_ThunderspearProjectile_o *__this,float radius,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Utility_BaseComponentCache_o *pUVar4;
  Characters_BaseCharacter_o *pCVar5;
  System_String_o *b;
  Characters_BaseCharacter_c *pCVar6;
  UI_InGameMenu_o *__this_01;
  Cameras_InGameCamera_o *__this_02;
  int iVar7;
  Il2CppObject *a;
  bool bVar8;
  uint uVar9;
  int32_t score;
  UnityEngine_Transform_o *pUVar10;
  uint uVar11;
  float fVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar13;
  float local_b8;
  float fStack_b4;
  System_Collections_Generic_HashSet_Enumerator_T__o local_a8;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_70 [16];
  Characters_BaseCharacter_o *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (Il2CppMethodInitialized_07545187 == '\0') {
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
    Il2CppMethodInitialized_07545187 = '\x01';
  }
  local_a8.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_a8.fields._index = 0;
  local_a8.fields._version = 0;
  local_a8.fields._current = (Il2CppObject *)0x0;
  pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
    UVar13 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    local_88 = UVar13.fields.z;
    local_58._8_4_ = extraout_XMM0_Dc;
    local_58._0_8_ = UVar13.fields._0_8_;
    local_58._12_4_ = extraout_XMM0_Dd;
    if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar3);
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(*(uint64_t *)((char *)pGVar3 + 0x40));
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        fStack_84 = (float)in_XMM1_Db;
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_70,__this_00,
                   (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
        uStack_80 = fStack_84;
        local_a8.fields._current = (Il2CppObject *)local_60;
        local_a8.fields._set = (System_Collections_Generic_HashSet_T__o *)local_70._0_8_;
        local_a8.fields._index = local_70._8_4_;
        local_a8.fields._version = local_70._12_4_;
        local_70._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        fStack_84 = (float)local_58._0_4_;
        uStack_7c = local_58._4_4_;
        uVar9 = 0;
        local_70._8_8_ = &local_a8;
label_05875650:
        do {
          do {
            do {
              do {
                do {
                  do {
                    bVar8 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                      (&local_a8,
                                       (MethodInfo_4C456D0 *)
                                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext
                                      );
                    a = local_a8.fields._current;
                    if (!bVar8) {
                      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                                (&local_a8,
                                 (MethodInfo_4C456C0 *)
                                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
                      return uVar9;
                    }
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar8 = UnityEngine_Object__op_Equality
                                      ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                      );
                  } while (bVar8);
                  if ((Characters_BaseCharacter_o *)a == (Characters_BaseCharacter_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                } while (((Characters_BaseCharacter_Fields *)((long)a + 0x10))->Dead != false);
                pUVar4 = ((Characters_BaseCharacter_Fields *)((long)a + 0x10))->Cache;
                if (pUVar4 == (Utility_BaseComponentCache_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar10 = (pUVar4->fields).Transform;
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                UVar13 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
                local_48._4_4_ = in_XMM1_Db;
                local_48._0_4_ = UVar13.fields.z;
                uStack_40 = in_XMM1_Dc;
                uStack_3c = in_XMM1_Dd;
                if (Il2CppMethodInitialized_0753e7b7 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                  Il2CppMethodInitialized_0753e7b7 = '\x01';
                  uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                }
                else {
                  uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                }
                if (uVar2 == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                }
                local_b8 = UVar13.fields.x;
                fStack_b4 = UVar13.fields.y;
                fVar12 = (fStack_b4 - (float)local_58._4_4_) * (fStack_b4 - (float)local_58._4_4_) +
                         (local_b8 - fStack_84) * (local_b8 - fStack_84) +
                         ((float)local_48._0_4_ - local_88) * ((float)local_48._0_4_ - local_88);
                if (fVar12 < 0.0) {
                  fVar12 = sqrtf(fVar12);
                }
                else {
                  fVar12 = SQRT(fVar12);
                }
                in_XMM1_Dd = 0;
                in_XMM1_Dc = 0;
                in_XMM1_Db = 0;
              } while (radius <= fVar12);
              in_XMM1_Dd = 0;
              in_XMM1_Dc = 0;
              in_XMM1_Db = 0;
              pCVar5 = (__this->fields)._owner;
              if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar8 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)pCVar5,(MethodInfo *)0x0);
            } while (!bVar8);
            b = (__this->fields)._team;
            if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
            }
            bVar8 = GameManagers_TeamInfo__SameTeam_5858ba0
                              ((Characters_BaseCharacter_o *)a,b,(MethodInfo *)0x0);
          } while (bVar8);
          pCVar5 = (__this->fields)._owner;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar8 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((bVar8) || (pCVar5 = (__this->fields)._owner, pCVar5 == (Characters_BaseCharacter_o *)0x0)) {
label_05875835:
            (*(((Characters_BaseCharacter_c *)a->klass)->vtable)._96_GetHit.methodPtr)
                      (a,"",100,"Thunderspear","",
                       (((Characters_BaseCharacter_c *)a->klass)->vtable)._96_GetHit.method);
          }
          else {
            pCVar6 = pCVar5->klass;
            bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
            if (((pCVar6->_2).typeHierarchyDepth < bVar1) ||
               ((pCVar6->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar1)[-1].field_0x57] !=
                (Il2CppClass *)TypeInfo_Characters_Human)) goto label_05875835;
            score = Projectiles_ThunderspearProjectile__CalculateDamage
                              (__this,false,(MethodInfo *)(ulong)bVar1);
            (*(((Characters_BaseCharacter_c *)a->klass)->vtable)._95_GetHit.methodPtr)
                      (a,(__this->fields)._owner,score,"Thunderspear","",
                       (((Characters_BaseCharacter_c *)a->klass)->vtable)._95_GetHit.method);
            if (((Characters_BaseCharacter_Fields *)((long)a + 0x10))->AI == false) {
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              __this_01 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
              if (__this_01 == (UI_InGameMenu_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
              if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                il2cpp_codegen_raise_invalid_cast_exception();
              }
              UI_InGameMenu__ShowKillScore(__this_01,score,false,(MethodInfo *)0x0);
              pUVar4 = ((Characters_BaseCharacter_Fields *)((long)a + 0x10))->Cache;
              if (pUVar4 == (Utility_BaseComponentCache_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar10 = (pUVar4->fields).Transform;
              if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              __this_02 = (Cameras_InGameCamera_o *)
                          TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
              UVar13 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
              if (__this_02 == (Cameras_InGameCamera_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
              if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
                il2cpp_codegen_raise_invalid_cast_exception(__this_02);
              }
              Cameras_InGameCamera__TakeSnapshot(__this_02,UVar13,score,(MethodInfo *)0x0);
            }
          }
          if (0 < ((Characters_BaseCharacter_Fields *)((long)a + 0x10))->CurrentHealth) {
            bVar8 = SBORROW4(uVar9,4);
            iVar7 = uVar9 - 4;
            uVar11 = 3;
label_05875879:
            if (bVar8 != iVar7 < 0) {
              uVar9 = uVar11;
            }
            goto label_05875650;
          }
          pCVar5 = (__this->fields)._owner;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar8) {
            pCVar5 = (__this->fields)._owner;
            if (pCVar5 == (Characters_BaseCharacter_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar4 = (pCVar5->fields).Cache;
            if (pUVar4 == (Utility_BaseComponentCache_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar10 = (pUVar4->fields).Transform;
            if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            UVar13 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
            uStack_40 = extraout_XMM0_Dc_00;
            local_48 = (undefined1  [8])UVar13.fields._0_8_;
            uStack_3c = extraout_XMM0_Dd_00;
            if (Il2CppMethodInitialized_0753e7b7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
              Il2CppMethodInitialized_0753e7b7 = '\x01';
              uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
            }
            else {
              uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
            }
            if (uVar2 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            }
            fVar12 = local_88 - UVar13.fields.z;
            fVar12 = ((float)local_58._4_4_ - (float)local_48._4_4_) *
                     ((float)local_58._4_4_ - (float)local_48._4_4_) +
                     (fStack_84 - (float)local_48._0_4_) * (fStack_84 - (float)local_48._0_4_) +
                     fVar12 * fVar12;
            if (fVar12 < 0.0) {
              fVar12 = sqrtf(fVar12);
            }
            else {
              fVar12 = SQRT(fVar12);
            }
            in_XMM1_Dd = 0;
            in_XMM1_Dc = 0;
            in_XMM1_Db = 0;
            if (fVar12 < radius) {
              in_XMM1_Dd = 0;
              in_XMM1_Dc = 0;
              in_XMM1_Db = 0;
              bVar8 = SBORROW4(uVar9,5);
              iVar7 = uVar9 - 5;
              uVar11 = 4;
              goto label_05875879;
            }
          }
          if (uVar9 < 3) {
            uVar9 = 2;
          }
          if ((__this->fields)._wasMaxRange != false) {
            uVar9 = 5;
          }
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$DamageHorsesInRadius
// il2cpp: void Projectiles_ThunderspearProjectile__DamageHorsesInRadius (Projectiles_ThunderspearProjectile_o* __this, float radius, const MethodInfo* method);
// 0x5875c20
// eh: try 0x5875db6..0x5875f7d -> pad 0x5875f89 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5875fb9..0x5875fbe -> pad 0x5875fdf cleanup
// eh: try 0x5875fe2..0x5875fec -> pad 0x5875ff4 catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5875f87: jmp 0x5875fa1
// asm:   0x5875f89: jmp 0x5875fa1
// asm:   0x5875f8b: jmp 0x5875fa1
// asm:   0x5875f8d: jmp 0x5875fa1
// asm:   0x5875f8f: jmp 0x5875fa1
// asm:   0x5875f91: jmp 0x5875fa1
// asm:   0x5875f93: jmp 0x5875fa1
// asm:   0x5875f95: jmp 0x5875fa1
// asm:   0x5875f97: jmp 0x5875fa1
// asm:   0x5875f99: jmp 0x5875fa1
// asm:   0x5875f9b: jmp 0x5875fa1
// asm:   0x5875f9d: jmp 0x5875fa1
// asm:   0x5875f9f: jmp 0x5875fa1
// asm:   0x5875fa1: mov rbx, rax
// asm:   0x5875fa4: cmp edx, 1
// asm:   0x5875fa7: jne 0x5875fe2
// asm:   0x5875fa9: mov rdi, rbx
// asm:   0x5875fac: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5875fb1: mov rbx, qword ptr [rax]
// asm:   0x5875fb4: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5875fb9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5875fbe: lea rax, [rip + 0x1a17e8b]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose
// asm:   0x5875fc5: mov rsi, qword ptr [rax]
// asm:   0x5875fc8: lea rdi, [rsp + 0x10]
// asm:   0x5875fcd: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5875fd2: test rbx, rbx
// asm:   0x5875fd5: je 0x5875f5a
// asm:   0x5875fd7: mov rdi, rbx
// asm:   0x5875fda: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5875fdf: mov rbx, rax
// asm:   0x5875fe2: lea rdi, [rsp + 0x28]
// asm:   0x5875fe7: call 0x2fcf780  ; il2cpp_runtime_helper_02fcf780()
// asm:   0x5875fec: mov rdi, rbx
// asm:   0x5875fef: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5875ff4: mov rdi, rax
// asm:   0x5875ff7: call 0x2ab61e0  ; __clang_call_terminate()

void Projectiles_ThunderspearProjectile__DamageHorsesInRadius
               (Projectiles_ThunderspearProjectile_o *__this,float radius,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  System_String_o *b;
  Utility_BaseComponentCache_o *pUVar3;
  Characters_BaseCharacter_o *pCVar4;
  Il2CppObject *a;
  bool bVar5;
  int32_t iVar6;
  UnityEngine_Transform_o *pUVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Db;
  float fVar8;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o local_88;
  undefined1 local_70 [16];
  Characters_BaseCharacter_o *local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [24];
  
  if (Il2CppMethodInitialized_07545188 == '\0') {
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
    Il2CppMethodInitialized_07545188 = '\x01';
  }
  local_88.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    if ((*(uint64_t *)((char *)pGVar2 + 0x58)) != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_70,(*(uint64_t *)((char *)pGVar2 + 0x58)),
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
      local_88.fields._current = (Il2CppObject *)local_60;
      local_88.fields._set = (System_Collections_Generic_HashSet_T__o *)local_70._0_8_;
      local_88.fields._index = local_70._8_4_;
      local_88.fields._version = local_70._12_4_;
      local_70._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_70._8_8_ = &local_88;
label_05875dd0:
      do {
        do {
          do {
            do {
              do {
                bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                  (&local_88,
                                   (MethodInfo_4C456D0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext);
                a = local_88.fields._current;
                if (!bVar5) {
                  System_Collections_Generic_HashSet_Enumerator_object___Dispose
                            (&local_88,
                             (MethodInfo_4C456C0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
                  return;
                }
                fVar8 = in_XMM1_Db;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  fVar8 = in_XMM1_Db;
                }
                bVar5 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                in_XMM1_Db = fVar8;
              } while (bVar5);
              if ((Characters_BaseCharacter_o *)a == (Characters_BaseCharacter_o *)0x0) {
                ThrowNullReferenceException();
              }
            } while (((Characters_BaseCharacter_Fields *)((long)a + 0x10))->Dead != false);
            b = (__this->fields)._team;
            if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
            }
            bVar5 = GameManagers_TeamInfo__SameTeam_5858ba0
                              ((Characters_BaseCharacter_o *)a,b,(MethodInfo *)0x0);
            in_XMM1_Db = fVar8;
          } while (bVar5);
          pUVar3 = ((Characters_BaseCharacter_Fields *)((long)a + 0x10))->Cache;
          if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = (pUVar3->fields).Transform;
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar10 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
          local_58 = UVar10.fields.z;
          local_48._8_4_ = extraout_XMM0_Dc;
          local_48._0_8_ = UVar10.fields._0_8_;
          local_48._12_4_ = extraout_XMM0_Dd;
          fStack_54 = fVar8;
          fStack_50 = in_XMM1_Dc;
          fStack_4c = in_XMM1_Dd;
          pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar10 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
          in_XMM1_Db = UVar10.fields.x;
          in_XMM1_Dd = UVar10.fields.y;
          fVar9 = local_58 - UVar10.fields.z;
          in_XMM1_Dc = fVar8;
        } while (radius * radius <=
                 ((float)local_48._4_4_ - in_XMM1_Dd) * ((float)local_48._4_4_ - in_XMM1_Dd) +
                 ((float)local_48._0_4_ - in_XMM1_Db) * ((float)local_48._0_4_ - in_XMM1_Db) + fVar9 * fVar9);
        pCVar4 = (__this->fields)._owner;
        if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
          bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if ((bVar1 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
             ((pCVar4->klass->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar1)[-1].field_0x57] ==
              (Il2CppClass *)TypeInfo_Characters_Human)) {
            iVar6 = Projectiles_ThunderspearProjectile__CalculateDamage
                              (__this,false,(MethodInfo *)(ulong)bVar1);
            (*(((Characters_BaseCharacter_c *)a->klass)->vtable)._95_GetHit.methodPtr)
                      (a,pCVar4,iVar6,"Thunderspear","",
                       (((Characters_BaseCharacter_c *)a->klass)->vtable)._95_GetHit.method);
            in_XMM1_Dc = fVar8;
            goto label_05875dd0;
          }
        }
        (*(((Characters_BaseCharacter_c *)a->klass)->vtable)._96_GetHit.methodPtr)
                  (a,"Thunderspear",100,"Thunderspear","",
                   (((Characters_BaseCharacter_c *)a->klass)->vtable)._96_GetHit.method);
        in_XMM1_Dc = fVar8;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$CalculateDamage
// il2cpp: int32_t Projectiles_ThunderspearProjectile__CalculateDamage (Projectiles_ThunderspearProjectile_o* __this, bool dmgOverride, const MethodInfo* method);
// 0x5876bc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5876bfe: jmp 0x5876e6b

int32_t Projectiles_ThunderspearProjectile__CalculateDamage
                  (Projectiles_ThunderspearProjectile_o *__this,bool dmgOverride,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  uint32_t uVar4;
  Settings_InGameSet_o *pSVar5;
  Settings_InGameMiscSettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Characters_BaseCharacter_o *pCVar8;
  bool bVar9;
  int iVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  long *plVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  
  if (Il2CppMethodInitialized_07545189 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"DamageMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_07545189 = '\x01';
    uVar4 = (TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar4 = (TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor;
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    pSVar11 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
  }
  else {
    pSVar11 = *(SimpleJSONFixed_JSONNode_o **)
               ((Il2CppClass *)TypeInfo_Characters_CharacterData)->static_fields;
  }
  if (((pSVar11 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
      (pSVar11 = (*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar11,"Thunderspear",(pSVar11->klass->vtable)._7_get_Item.method),
      pSVar11 != (SimpleJSONFixed_JSONNode_o *)0x0)) &&
     (plVar12 = (long *)(*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar11,"DamageMultiplier",
                                   *(MethodInfo **)((long)&(pSVar11->klass->vtable)._7_get_Item + 8)),
     plVar12 != (long *)0x0)) {
    fVar14 = (float)(**(code **)(*plVar12 + 0x388))(plVar12);
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar5 != (Settings_InGameSet_o *)0x0) &&
        (pSVar6 = (pSVar5->fields).Misc, pSVar6 != (Settings_InGameMiscSettings_o *)0x0)) &&
       (pSVar7 = (pSVar6->fields).ThunderspearPVP, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar7->fields)._value != false) {
        fVar14 = 1.0;
      }
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
      }
      fVar15 = (__this->fields).InitialPlayerVelocity.fields.x;
      fVar1 = (__this->fields).InitialPlayerVelocity.fields.y;
      fVar2 = (__this->fields).InitialPlayerVelocity.fields.z;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar15 = fVar2 * fVar2 + fVar1 * fVar1 + fVar15 * fVar15;
      if (fVar15 < 0.0) {
        fVar15 = sqrtf(fVar15);
      }
      else {
        fVar15 = SQRT(fVar15);
      }
      iVar10 = (int)(fVar14 * fVar15 * 10.0);
      iVar13 = 10;
      if (10 < iVar10) {
        iVar13 = iVar10;
      }
      pCVar8 = (__this->fields)._owner;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar9) && (pCVar8 = (__this->fields)._owner, pCVar8 != (Characters_BaseCharacter_o *)0x0)) {
        bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if ((bVar3 <= (pCVar8->klass->_2).typeHierarchyDepth) &&
           (((pCVar8->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Characters_Human
            && ((pCVar8->fields).CustomDamageEnabled != false)))) {
          iVar13 = (pCVar8->fields).CustomDamage;
        }
      }
      return iVar13;
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$Update
// il2cpp: void Projectiles_ThunderspearProjectile__Update (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x5876e70

void Projectiles_ThunderspearProjectile__Update
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_Transform_o *__this_00;
  float fVar5;
  float fVar6;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_Fields UStack_30;
  UnityEngine_Vector3_Fields UStack_20;
  
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pPVar3 = (__this->fields)._photonView;
  if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((pPVar3->fields)._IsMine_k__BackingField != false) {
      fVar6 = (__this->fields)._timeLeft;
      fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar6 = fVar6 - fVar5;
      (__this->fields)._timeLeft = fVar6;
      if (fVar6 <= 0.0) {
        (*(__this->klass->vtable)._16_OnExceedLiveTime.methodPtr)
                  (__this,(__this->klass->vtable)._16_OnExceedLiveTime.method);
      }
    }
    pPVar3 = (__this->fields)._photonView;
    if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
      if ((pPVar3->fields)._IsMine_k__BackingField != false) {
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e729 = '\x01';
        }
        fVar6 = (__this->fields)._velocity.fields.x;
        uVar1 = (__this->fields)._velocity.fields.y;
        uVar2 = (__this->fields)._velocity.fields.z;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar6 = (float)uVar2 * (float)uVar2 + fVar6 * fVar6 + (float)uVar1 * (float)uVar1;
        if (fVar6 < 0.0) {
          fVar6 = sqrtf(fVar6);
        }
        else {
          fVar6 = SQRT(fVar6);
        }
        if (0.0 < fVar6) {
          __this_00 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          UStack_20.x = (__this->fields)._velocity.fields.x;
          UStack_20.y = (__this->fields)._velocity.fields.y;
          UStack_20.z = (__this->fields)._velocity.fields.z;
          if (Il2CppMethodInitialized_0753e72c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72c = '\x01';
          }
          pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
          UStack_30.x = (pUVar4->upVector).fields.x;
          UStack_30.y = (pUVar4->upVector).fields.y;
          UStack_30.z = (pUVar4->upVector).fields.z;
          value = UnityEngine_Quaternion__Internal_LookRotation
                            ((UnityEngine_Vector3_o *)&UStack_20,(UnityEngine_Vector3_o *)&UStack_30,
                             (MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_rotation(__this_00,value,(MethodInfo *)0x0);
            return;
          }
          goto label_05877016;
        }
      }
      return;
    }
  }
label_05877016:
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$FixedUpdate
// il2cpp: void Projectiles_ThunderspearProjectile__FixedUpdate (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x5877020

void Projectiles_ThunderspearProjectile__FixedUpdate
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Characters_BaseCharacter_o *x;
  undefined1 auVar5 [16];
  bool bVar6;
  int32_t layerMask;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  MethodInfo *method_00;
  float fVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_Fields UStack_60;
  float fStack_54;
  undefined8 uStack_50;
  undefined1 auStack_48 [48];
  
  if (Il2CppMethodInitialized_0754518a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ThunderspearProjectile);
    Il2CppMethodInitialized_0754518a = '\x01';
  }
  auStack_48._32_4_ = 0.0;
  auStack_48._36_4_ = 0.0;
  auStack_48._40_4_ = 0.0;
  auStack_48._16_4_ = 0.0;
  auStack_48._20_4_ = 0.0;
  auStack_48._24_4_ = 0.0;
  auStack_48._28_4_ = 0.0;
  auStack_48._0_4_ = 0.0;
  auStack_48._4_4_ = 0.0;
  auStack_48._8_4_ = 0.0;
  auStack_48._12_4_ = 0.0;
  pPVar4 = (__this->fields)._photonView;
  if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) goto label_0587749d;
  if ((pPVar4->fields)._IsMine_k__BackingField == false) {
    return;
  }
  if ((__this->fields)._isEmbed != false) {
    __this_00 = (__this->fields)._rigidbody;
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_linearVelocity
                (__this_00,
                 (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      pUVar7 = (__this->fields)._embedParent;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar6) {
label_05877152:
        x = (__this->fields)._owner;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        method_00 = (MethodInfo *)0x0;
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar6) {
          return;
        }
        if ((__this->fields)._isAA == false) {
          return;
        }
        Projectiles_ThunderspearProjectile__Explode(__this,method_00);
        return;
      }
      pUVar7 = (__this->fields)._embedParent;
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        __this_01 = (__this->fields)._transform;
        UVar14 = UnityEngine_Transform__TransformPoint
                           (pUVar7,(UnityEngine_Vector3_o)(__this->fields)._embedPosition.fields,
                            (MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_position(__this_01,UVar14,(MethodInfo *)0x0);
          goto label_05877152;
        }
      }
    }
    goto label_0587749d;
  }
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0587749d;
  UVar14 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  UStack_60.z = (__this->fields)._lastPosition.fields.x;
  fStack_54 = (__this->fields)._lastPosition.fields.y;
  uStack_50._0_4_ = 0.0;
  uStack_50._4_4_ = 0.0;
  fVar1 = (__this->fields)._lastPosition.fields.z;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    UStack_60.x = 0.0;
    UStack_60.y = 0.0;
  }
  else {
    UStack_60.x = 0.0;
    UStack_60.y = 0.0;
  }
  UStack_60.x = 0.0;
  UStack_60.y = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    UStack_60.x = 0.0;
    UStack_60.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  auVar12._0_4_ = UVar14.fields.x - UStack_60.z;
  auVar12._4_4_ = UVar14.fields.y - fStack_54;
  auVar12._8_4_ = extraout_XMM0_Dc - (float)uStack_50;
  auVar12._12_4_ = extraout_XMM0_Dd - uStack_50._4_4_;
  fVar11 = UVar14.fields.z - fVar1;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar13 = fVar11 * fVar11 + auVar12._4_4_ * auVar12._4_4_ + auVar12._0_4_ * auVar12._0_4_;
  if (fVar13 < 0.0) {
    fVar9 = sqrtf(fVar13);
    uVar10 = extraout_XMM0_Db;
    if (1e-05 < fVar9) goto label_058772b2;
label_0587726d:
    pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar11 = (pUVar8->zeroVector).fields.z;
  }
  else {
    uVar10 = 0;
    fVar9 = SQRT(fVar13);
    if (fVar9 <= 1e-05) goto label_0587726d;
label_058772b2:
    fVar11 = fVar11 / fVar9;
    auVar5._4_4_ = fVar9;
    auVar5._0_4_ = fVar9;
    auVar5._8_4_ = uVar10;
    auVar5._12_4_ = uVar10;
    auVar12 = divps(auVar12,auVar5);
    UStack_60.x = auVar12._0_4_;
    UStack_60.y = auVar12._4_4_;
    pUVar8 = (UnityEngine_Vector3_StaticFields *)&UStack_60;
  }
  uVar2 = (pUVar8->zeroVector).fields.x;
  uVar3 = (pUVar8->zeroVector).fields.y;
  UVar14.fields.y = (float)uVar3;
  UVar14.fields.x = (float)uVar2;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_058773a2;
label_058772f3:
    if (0.0 <= fVar13) goto label_058772ff;
label_058773b9:
    fVar13 = sqrtf(fVar13);
  }
  else {
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_058772f3;
label_058773a2:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (fVar13 < 0.0) goto label_058773b9;
label_058772ff:
    fVar13 = SQRT(fVar13);
  }
  if ((TypeInfo_Projectiles_ThunderspearProjectile->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ThunderspearProjectile);
  }
  layerMask = UnityEngine_LayerMask__op_Implicit
                        ((UnityEngine_LayerMask_o)
                         (TypeInfo_Projectiles_ThunderspearProjectile->static_fields->_collideMask).fields.
                         m_Mask,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  origin.fields.z = fVar1;
  origin.fields.x = UStack_60.z;
  origin.fields.y = fStack_54;
  UVar14.fields.z = fVar11;
  bVar6 = UnityEngine_Physics__SphereCast_69daf70
                    (origin,0.5,UVar14,(UnityEngine_RaycastHit_o *)auStack_48,fVar13,layerMask,
                     (MethodInfo *)0x0);
  if (bVar6) {
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    UVar14 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)auStack_48,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0587749d;
    UnityEngine_Transform__set_position(pUVar7,UVar14,(MethodInfo *)0x0);
  }
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    UVar14 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    (__this->fields)._lastPosition.fields.x = UVar14.fields.x;
    (__this->fields)._lastPosition.fields.y = UVar14.fields.y;
    (__this->fields)._lastPosition.fields.z = UVar14.fields.z;
    return;
  }
label_0587749d:
  ThrowNullReferenceException();
}


// Projectiles.ThunderspearProjectile$$GetStat
// il2cpp: float Projectiles_ThunderspearProjectile__GetStat (Projectiles_ThunderspearProjectile_o* __this, System_String_o* field, const MethodInfo* method);
// 0x5875370
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58753a2: jmp 0x5875447

float Projectiles_ThunderspearProjectile__GetStat
                (Projectiles_ThunderspearProjectile_o *__this,System_String_o *field,MethodInfo *method)

{
  uint32_t uVar1;
  code *vtableDispatch;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  long *plVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_0754518b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_0754518b = '\x01';
    uVar1 = (TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    pSVar2 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
  }
  else {
    pSVar2 = *(SimpleJSONFixed_JSONNode_o **)((Il2CppClass *)TypeInfo_Characters_CharacterData)->static_fields
    ;
  }
  if (((pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
      (pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar2,"Thunderspear",(pSVar2->klass->vtable)._7_get_Item.method),
      pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0)) ||
     (plVar3 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar2,field,
                                  *(MethodInfo **)((long)&(pSVar2->klass->vtable)._7_get_Item + 8)),
     plVar3 == (long *)0x0)) {
    ThrowNullReferenceException();
  }
  vtableDispatch = *(code **)(*plVar3 + 0x388);
  fVar4 = (float)(*vtableDispatch)(plVar3,*(undefined8 *)(*plVar3 + 0x390),vtableDispatch);
  return fVar4;
}


// Projectiles.ThunderspearProjectile$$.ctor
// il2cpp: void Projectiles_ThunderspearProjectile___ctor (Projectiles_ThunderspearProjectile_o* __this, const MethodInfo* method);
// 0x58774b0

void Projectiles_ThunderspearProjectile___ctor
               (Projectiles_ThunderspearProjectile_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  UnityEngine_Vector3_c *pUVar4;
  
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar4 = TypeInfo_UnityEngine_Vector3;
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._embedPosition.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._embedPosition.fields.y = fVar3;
  (__this->fields)._embedPosition.fields.z = fVar1;
  pUVar2 = pUVar4->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._startPosition.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._startPosition.fields.y = fVar3;
  (__this->fields)._startPosition.fields.z = fVar1;
  Projectiles_BaseProjectile___ctor((Projectiles_SmokeBombProjectile_o *)__this,method);
  return;
}


// Projectiles.ThunderspearProjectile$$.cctor
// il2cpp: void Projectiles_ThunderspearProjectile___cctor (const MethodInfo* method);
// 0x5877530

void Projectiles_ThunderspearProjectile___cctor(MethodInfo *method)

{
  uint uVar1;
  Utility_PhysicsLayer_StaticFields *pUVar2;
  Projectiles_ThunderspearProjectile_StaticFields *pPVar3;
  UnityEngine_LayerMask_o UVar4;
  System_Int32_array *pSVar5;
  
  if (Il2CppMethodInitialized_0754518c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ThunderspearProjectile);
    Il2CppMethodInitialized_0754518c = '\x01';
  }
  pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (pSVar5 == (System_Int32_array *)0x0) {
label_05877692:
    ThrowNullReferenceException();
  }
  uVar1 = (uint)pSVar5->max_length;
  if (uVar1 != 0) {
    pUVar2 = TypeInfo_Utility_PhysicsLayer->static_fields;
    pSVar5->m_Items[0] = pUVar2->MapObjectAll;
    if (((uVar1 != 1) && (pSVar5->m_Items[1] = pUVar2->MapObjectEntities, 2 < uVar1)) &&
       (pSVar5->m_Items[2] = pUVar2->MapObjectProjectiles, uVar1 != 3)) {
      pSVar5->m_Items[3] = pUVar2->TitanPushbox;
      UVar4 = Utility_PhysicsLayer__GetMask(pSVar5,(MethodInfo *)0x0);
      (TypeInfo_Projectiles_ThunderspearProjectile->static_fields->_collideMask).fields.m_Mask =
           (int32_t)UVar4.fields.m_Mask;
      pSVar5 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,5);
      if (pSVar5 == (System_Int32_array *)0x0) goto label_05877692;
      uVar1 = (uint)pSVar5->max_length;
      if (uVar1 != 0) {
        pUVar2 = TypeInfo_Utility_PhysicsLayer->static_fields;
        pSVar5->m_Items[0] = pUVar2->MapObjectAll;
        if (((uVar1 != 1) && (pSVar5->m_Items[1] = pUVar2->MapObjectEntities, 2 < uVar1)) &&
           ((pSVar5->m_Items[2] = pUVar2->MapObjectProjectiles, uVar1 != 3 &&
            (pSVar5->m_Items[3] = pUVar2->TitanPushbox, 4 < uVar1)))) {
          pSVar5->m_Items[4] = pUVar2->Human;
          UVar4 = Utility_PhysicsLayer__GetMask(pSVar5,(MethodInfo *)0x0);
          (TypeInfo_Projectiles_ThunderspearProjectile->static_fields->_blockMask).fields.m_Mask =
               (int32_t)UVar4.fields.m_Mask;
          pPVar3 = TypeInfo_Projectiles_ThunderspearProjectile->static_fields;
          (pPVar3->CritColor).fields.r = 0.475;
          (pPVar3->CritColor).fields.g = 0.7;
          (pPVar3->CritColor).fields.b = 1.0;
          (pPVar3->CritColor).fields.a = 1.0;
          return;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


