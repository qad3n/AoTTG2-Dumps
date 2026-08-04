// Type: Controllers.ErenShifterPlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/ErenShifterPlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/ErenShifterPlayerController.cs
// --------------------------------

// Controllers.ErenShifterPlayerController$$Awake
// il2cpp: void Controllers_ErenShifterPlayerController__Awake (Controllers_ErenShifterPlayerController_o* __this, const MethodInfo* method);
// 0x4292d70

void Controllers_ErenShifterPlayerController__Awake
               (Controllers_ErenShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_ErenShifter_o **ppCVar1;
  byte bVar2;
  ushort uVar3;
  Characters_ErenShifter_o *pCVar4;
  System_Action_Hashtable__o *pSVar5;
  Characters_BaseHitbox_o *__this_00;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *__this_01;
  System_Collections_Specialized_OrderedDictionary_o *pSVar7;
  System_Collections_ICollection_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  char cVar10;
  bool_conflict bVar11;
  Characters_ErenShifter_o *pCVar12;
  System_Collections_ICollection_o *pSVar13;
  VirtualInvokeData *pVVar14;
  System_String_o *__this_02;
  Settings_KeybindSetting_o *pSVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Characters_BaseHitbox_o *__this_03;
  long lVar19;
  long lVar20;
  long *unaff_R12;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [12];
  UnityEngine_Vector3_o UVar24;
  long lStack_68;
  
  if (g_data_057adce6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ErenShifter_GetComponent_ErenShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057adce6 = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,method);
  pCVar12 = (Characters_ErenShifter_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_ErenShifter_GetComponent_ErenShifter);
  ppCVar1 = &(__this->fields)._shifter;
  (__this->fields)._shifter = pCVar12;
  __this_03 = (Characters_BaseHitbox_o *)ppCVar1;
  il2cpp_runtime_helper_022b4080();
  lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar19 != 0) {
    pCVar12 = *(Characters_ErenShifter_o **)(lVar19 + 0x40);
    __this_03 = (Characters_BaseHitbox_o *)&(__this->fields)._shifterInput;
    (__this->fields)._shifterInput = (Settings_ErenShifterInputSettings_o *)pCVar12;
    il2cpp_runtime_helper_022b4080();
    pCVar4 = (__this->fields)._shifter;
    if (((pCVar4 != (Characters_ErenShifter_o *)0x0) &&
        (pSVar5 = (pCVar4->fields).OnPlayerPropertiesChanged, pSVar5 != (System_Action_Hashtable__o *)0x0)) &&
       (__this_03 = pSVar5[1].monitor, __this_03 != (Characters_BaseHitbox_o *)0x0)) {
      pCVar12 = (Characters_ErenShifter_o *)0x0;
      Characters_BaseHitbox__ScaleSphereCollider(__this_03,1.5,(MethodInfo *)0x0);
      if (((*ppCVar1 != (Characters_ErenShifter_o *)0x0) &&
          (pSVar5 = ((*ppCVar1)->fields).OnPlayerPropertiesChanged,
          pSVar5 != (System_Action_Hashtable__o *)0x0)) &&
         (__this_03 = (Characters_BaseHitbox_o *)pSVar5[1].fields.method_ptr,
         __this_03 != (Characters_BaseHitbox_o *)0x0)) {
        pCVar12 = (Characters_ErenShifter_o *)0x0;
        Characters_BaseHitbox__ScaleSphereCollider(__this_03,1.5,(MethodInfo *)0x0);
        if (((*ppCVar1 != (Characters_ErenShifter_o *)0x0) &&
            (pSVar5 = ((*ppCVar1)->fields).OnPlayerPropertiesChanged,
            pSVar5 != (System_Action_Hashtable__o *)0x0)) &&
           (__this_03 = (Characters_BaseHitbox_o *)pSVar5[1].fields.invoke_impl,
           __this_03 != (Characters_BaseHitbox_o *)0x0)) {
          pCVar12 = (Characters_ErenShifter_o *)0x0;
          Characters_BaseHitbox__ScaleSphereCollider(__this_03,1.5,(MethodInfo *)0x0);
          if ((*ppCVar1 != (Characters_ErenShifter_o *)0x0) &&
             (pSVar5 = ((*ppCVar1)->fields).OnPlayerPropertiesChanged,
             pSVar5 != (System_Action_Hashtable__o *)0x0)) {
            __this_00 = (Characters_BaseHitbox_o *)pSVar5[1].fields.m_target;
            __this_03 = (Characters_BaseHitbox_o *)0x0;
            if (__this_00 != (Characters_BaseHitbox_o *)0x0) {
              Characters_BaseHitbox__ScaleSphereCollider(__this_00,1.5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX;
  if (g_data_057adce7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&"Attack");
    g_data_057adce7 = '\x01';
    method_00 = extraout_RDX_00;
  }
  __this_02 = (System_String_o *)((ulong)pCVar12 & 0xff);
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this_03,(bool_conflict)__this_02,method_00);
  if ((char)pCVar12 != '\0') {
    return;
  }
  if ((__this_03[1].klass == (Characters_BaseHitbox_c *)0x0) ||
     (pSVar15 = ((__this_03[1].klass)->_1).this_arg.data, pSVar15 == (Settings_KeybindSetting_o *)0x0)) {
label_0429335e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_02 = (System_String_o *)(__this_03->fields)._debugObject;
    bVar11 = Settings_KeybindSetting__GetKey(pSVar15,0,(MethodInfo *)0x0);
    if (__this_02 == (System_String_o *)0x0) goto label_0429335e;
    *(char *)&__this_02[0xb].klass = (char)bVar11;
    pUVar6 = (__this_03->fields)._debugObject;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_0429335e;
    cVar10 = (*(code *)pUVar6->klass[6]._1.namespaze)();
    if (cVar10 == '\0') {
      return;
    }
    if ((__this_03[1].klass == (Characters_BaseHitbox_c *)0x0) ||
       (pSVar15 = *(Settings_KeybindSetting_o **)&((__this_03[1].klass)->_1).byval_arg.bits,
       pSVar15 == (Settings_KeybindSetting_o *)0x0)) goto label_0429335e;
    bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar15,0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      __this_02 = (System_String_o *)(__this_03->fields)._debugObject;
      if (__this_02 != (System_String_o *)0x0) {
        cVar10 = *(char *)((long)&__this_02[8].monitor + 4);
        if (g_data_057a6844 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
        }
        fVar21 = (float)*(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        fVar22 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
        if (cVar10 == '\0') {
label_0429306e:
          (*__this_02->klass[3]._1.generic_class)
                    (fVar21,fVar22,__this_02,__this_02->klass[3]._1.typeMetadataHandle);
          return;
        }
        pUVar6 = (__this_03->fields)._debugObject;
        if (((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
            (lVar19 = pUVar6[4].fields.m_CachedPtr, lVar19 != 0)) &&
           (__this_01 = *(UnityEngine_Transform_o **)(lVar19 + 0x10),
           __this_01 != (UnityEngine_Transform_o *)0x0)) {
          UVar24 = UnityEngine_Transform__get_forward(__this_01,(MethodInfo *)0x0);
          fVar21 = UVar24.fields.x + fVar21;
          fVar22 = UVar24.fields.z + fVar22;
          goto label_0429306e;
        }
      }
      goto label_0429335e;
    }
    if ((__this_03[1].klass == (Characters_BaseHitbox_c *)0x0) ||
       (pSVar15 = ((__this_03[1].klass)->_1).byval_arg.data, pSVar15 == (Settings_KeybindSetting_o *)0x0))
    goto label_0429335e;
    bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar15,0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      pUVar6 = (__this_03->fields)._debugObject;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        (*pUVar6->klass[6]._1.methods)(pUVar6,pUVar6->klass[6]._1.nestedTypes);
        return;
      }
      goto label_0429335e;
    }
    if (((__this_03[1].klass == (Characters_BaseHitbox_c *)0x0) ||
        (pSVar7 = (System_Collections_Specialized_OrderedDictionary_o *)((__this_03[1].klass)->_1).name,
        pSVar7 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) ||
       (pSVar13 = System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar7,(MethodInfo *)0x0),
       pSVar13 == (System_Collections_ICollection_o *)0x0)) goto label_0429335e;
    pSVar8 = pSVar13->klass;
    uVar3._0_1_ = (pSVar8->_2).rank;
    uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar9 = (pSVar8->_1).interfaceOffsets;
      lVar19 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerable) {
          pVVar14 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar19);
          goto label_04293171;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar19);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar13,TypeInfo_IEnumerable,0);
label_04293171:
    unaff_R12 = (long *)(*pVVar14->methodPtr)(pSVar13,pVVar14->method);
    if (unaff_R12 == (long *)0x0) goto label_0429338c;
    lStack_68 = 0;
label_042931b0:
    lVar19 = *unaff_R12;
    if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
      lVar20 = 0;
      do {
        if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IEnumerator) {
          puVar17 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + lVar19 + 0x138);
          goto label_04293213;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
    }
    puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,0);
label_04293213:
    cVar10 = (*(code *)*puVar17)(unaff_R12,puVar17[1]);
    if (cVar10 == '\0') goto label_0429345a;
    lVar19 = *unaff_R12;
    if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
      lVar20 = 0;
      do {
        if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IEnumerator) {
          puVar17 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) + 1) * 0x10 + lVar19 + 0x138);
          goto label_04293298;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
    }
    puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,1);
label_04293298:
    __this_02 = (System_String_o *)(*(code *)*puVar17)(unaff_R12,puVar17[1]);
    if (__this_02 == (System_String_o *)0x0) goto label_0429336b;
    if (__this_02->klass == g_data_057b9c00) {
      bVar11 = System_String__StartsWith(__this_02,"Attack",(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        if (__this_03[1].klass == (Characters_BaseHitbox_c *)0x0) goto label_04293378;
        pSVar7 = (System_Collections_Specialized_OrderedDictionary_o *)((__this_03[1].klass)->_1).name;
        if (pSVar7 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_0429337d;
        pSVar15 = (Settings_KeybindSetting_o *)
                  System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar7,(Il2CppObject *)__this_02,(MethodInfo *)0x0);
        if (pSVar15 == (Settings_KeybindSetting_o *)0x0) goto label_04293382;
        bVar2 = (TypeInfo_KeybindSetting->_2).naturalAligment;
        if (((pSVar15->klass->_2).naturalAligment < bVar2) ||
           ((pSVar15->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_KeybindSetting)) goto label_04293370;
        bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar15,0,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          pUVar6 = (__this_03->fields)._debugObject;
          if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_04293387;
          (*pUVar6->klass[6]._1.typeMetadataHandle)(pUVar6,__this_02,pUVar6->klass[6]._1.interopData);
        }
      }
      goto label_042931b0;
    }
  }
  il2cpp_runtime_helper_022b2fd0(__this_02);
label_0429336b:
  pSVar15 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_022b2c90();
label_04293370:
  il2cpp_runtime_helper_022b2fd0(pSVar15);
label_04293378:
  il2cpp_runtime_helper_022b2c90();
label_0429337d:
  il2cpp_runtime_helper_022b2c90();
label_04293382:
  il2cpp_runtime_helper_022b2c90();
label_04293387:
  il2cpp_runtime_helper_022b2c90();
label_0429338c:
  auVar23 = il2cpp_runtime_helper_022b2c90();
  uVar18 = auVar23._0_8_;
  if (auVar23._8_4_ != 1) {
    lStack_68 = 0;
    goto label_042934fa;
  }
  plVar16 = (long *)__cxa_begin_catch(uVar18);
  lStack_68 = *plVar16;
  __cxa_end_catch();
label_0429345a:
  plVar16 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
  if (plVar16 != (long *)0x0) {
    lVar19 = *plVar16;
    if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
      lVar20 = 0;
      do {
        if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
          puVar17 = (undefined8 *)
                    (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
          goto label_042934cd;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
    }
    puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IDisposable,0);
label_042934cd:
    (*(code *)*puVar17)(plVar16,puVar17[1]);
  }
  if (lStack_68 == 0) {
    return;
  }
  do {
    uVar18 = il2cpp_runtime_helper_022fefe0();
label_042934fa:
    plVar16 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
    if (plVar16 != (long *)0x0) {
      lVar19 = *plVar16;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        lVar20 = 0;
        do {
          if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
            puVar17 = (undefined8 *)
                      (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
            goto label_0429356d;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
      }
      puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IDisposable,0);
label_0429356d:
      (*(code *)*puVar17)(plVar16,puVar17[1]);
    }
    if (lStack_68 == 0) {
      _Unwind_Resume(uVar18);
    }
    il2cpp_runtime_helper_022fefe0(lStack_68);
  } while( true );
}


// Controllers.ErenShifterPlayerController$$UpdateActionInput
// il2cpp: void Controllers_ErenShifterPlayerController__UpdateActionInput (Controllers_ErenShifterPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x4292ee0

void Controllers_ErenShifterPlayerController__UpdateActionInput
               (Controllers_ErenShifterPlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Settings_ErenShifterInputSettings_o *pSVar3;
  Characters_ErenShifter_o *pCVar4;
  UnityEngine_Transform_o *__this_00;
  System_Collections_Specialized_OrderedDictionary_o *pSVar5;
  System_Collections_ICollection_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  char cVar8;
  bool_conflict bVar9;
  System_Collections_ICollection_o *pSVar10;
  VirtualInvokeData *pVVar11;
  Characters_ErenShifter_o *__this_01;
  Settings_KeybindSetting_o *pSVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  MethodInfo *extraout_RDX;
  long lVar16;
  long lVar17;
  long *unaff_R12;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [12];
  UnityEngine_Vector3_o UVar21;
  long lStack_50;
  
  if (g_data_057adce7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&"Attack");
    g_data_057adce7 = '\x01';
    method = extraout_RDX;
  }
  __this_01 = (Characters_ErenShifter_o *)((ulong)(uint)inMenu & 0xff);
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,(bool_conflict)__this_01,method);
  if ((char)inMenu != '\0') {
    return;
  }
  pSVar3 = (__this->fields)._shifterInput;
  if ((pSVar3 == (Settings_ErenShifterInputSettings_o *)0x0) ||
     (pSVar12 = (pSVar3->fields).Walk, pSVar12 == (Settings_KeybindSetting_o *)0x0)) {
label_0429335e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_01 = (__this->fields)._shifter;
    bVar9 = Settings_KeybindSetting__GetKey(pSVar12,0,(MethodInfo *)0x0);
    if (__this_01 == (Characters_ErenShifter_o *)0x0) goto label_0429335e;
    *(char *)&(__this_01->fields).State = (char)bVar9;
    pCVar4 = (__this->fields)._shifter;
    if (pCVar4 == (Characters_ErenShifter_o *)0x0) goto label_0429335e;
    cVar8 = (*(pCVar4->klass->vtable)._123_CanAction.methodPtr)();
    if (cVar8 == '\0') {
      return;
    }
    pSVar3 = (__this->fields)._shifterInput;
    if ((pSVar3 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (pSVar12 = (pSVar3->fields).Jump, pSVar12 == (Settings_KeybindSetting_o *)0x0)) goto label_0429335e;
    bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      __this_01 = (__this->fields)._shifter;
      if (__this_01 != (Characters_ErenShifter_o *)0x0) {
        cVar8 = *(char *)((long)&(__this_01->fields).Detection + 4);
        if (g_data_057a6844 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
        }
        fVar18 = (float)*(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        fVar19 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
        if (cVar8 == '\0') {
label_0429306e:
          (*(__this_01->klass->vtable)._126_Jump.methodPtr)
                    (fVar18,fVar19,__this_01,(__this_01->klass->vtable)._126_Jump.method);
          return;
        }
        pCVar4 = (__this->fields)._shifter;
        if (((pCVar4 != (Characters_ErenShifter_o *)0x0) &&
            (lVar16 = *(long *)&(pCVar4->fields).Dead, lVar16 != 0)) &&
           (__this_00 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
           __this_00 != (UnityEngine_Transform_o *)0x0)) {
          UVar21 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
          fVar18 = UVar21.fields.x + fVar18;
          fVar19 = UVar21.fields.z + fVar19;
          goto label_0429306e;
        }
      }
      goto label_0429335e;
    }
    pSVar3 = (__this->fields)._shifterInput;
    if ((pSVar3 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (pSVar12 = (pSVar3->fields).Kick, pSVar12 == (Settings_KeybindSetting_o *)0x0)) goto label_0429335e;
    bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pCVar4 = (__this->fields)._shifter;
      if (pCVar4 != (Characters_ErenShifter_o *)0x0) {
        (*(pCVar4->klass->vtable)._131_Kick.methodPtr)(pCVar4,(pCVar4->klass->vtable)._131_Kick.method);
        return;
      }
      goto label_0429335e;
    }
    pSVar3 = (__this->fields)._shifterInput;
    if (((pSVar3 == (Settings_ErenShifterInputSettings_o *)0x0) ||
        (pSVar5 = (pSVar3->fields).Settings,
        pSVar5 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) ||
       (pSVar10 = System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar5,(MethodInfo *)0x0),
       pSVar10 == (System_Collections_ICollection_o *)0x0)) goto label_0429335e;
    pSVar6 = pSVar10->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_IEnumerable) {
          pVVar11 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar16);
          goto label_04293171;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar16);
    }
    pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar10,TypeInfo_IEnumerable,0);
label_04293171:
    unaff_R12 = (long *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
    if (unaff_R12 == (long *)0x0) goto label_0429338c;
    lStack_50 = 0;
label_042931b0:
    lVar16 = *unaff_R12;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
          puVar14 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 + 0x138);
          goto label_04293213;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,0);
label_04293213:
    cVar8 = (*(code *)*puVar14)(unaff_R12,puVar14[1]);
    if (cVar8 == '\0') goto label_0429345a;
    lVar16 = *unaff_R12;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
          puVar14 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) + 1) * 0x10 + lVar16 + 0x138);
          goto label_04293298;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,1);
label_04293298:
    __this_01 = (Characters_ErenShifter_o *)(*(code *)*puVar14)(unaff_R12,puVar14[1]);
    if (__this_01 == (Characters_ErenShifter_o *)0x0) goto label_0429336b;
    if (__this_01->klass == g_data_057b9c00) {
      bVar9 = System_String__StartsWith((System_String_o *)__this_01,"Attack",(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        pSVar3 = (__this->fields)._shifterInput;
        if (pSVar3 == (Settings_ErenShifterInputSettings_o *)0x0) goto label_04293378;
        pSVar5 = (pSVar3->fields).Settings;
        if (pSVar5 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_0429337d;
        pSVar12 = (Settings_KeybindSetting_o *)
                  System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar5,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
        if (pSVar12 == (Settings_KeybindSetting_o *)0x0) goto label_04293382;
        bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
        if (((pSVar12->klass->_2).naturalAligment < bVar1) ||
           ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) goto label_04293370;
        bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          pCVar4 = (__this->fields)._shifter;
          if (pCVar4 == (Characters_ErenShifter_o *)0x0) goto label_04293387;
          (*(pCVar4->klass->vtable)._128_Attack.methodPtr)
                    (pCVar4,__this_01,(pCVar4->klass->vtable)._128_Attack.method);
        }
      }
      goto label_042931b0;
    }
  }
  il2cpp_runtime_helper_022b2fd0(__this_01);
label_0429336b:
  pSVar12 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_022b2c90();
label_04293370:
  il2cpp_runtime_helper_022b2fd0(pSVar12);
label_04293378:
  il2cpp_runtime_helper_022b2c90();
label_0429337d:
  il2cpp_runtime_helper_022b2c90();
label_04293382:
  il2cpp_runtime_helper_022b2c90();
label_04293387:
  il2cpp_runtime_helper_022b2c90();
label_0429338c:
  auVar20 = il2cpp_runtime_helper_022b2c90();
  uVar15 = auVar20._0_8_;
  if (auVar20._8_4_ != 1) {
    lStack_50 = 0;
    goto label_042934fa;
  }
  plVar13 = (long *)__cxa_begin_catch(uVar15);
  lStack_50 = *plVar13;
  __cxa_end_catch();
label_0429345a:
  plVar13 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
  if (plVar13 != (long *)0x0) {
    lVar16 = *plVar13;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
          puVar14 = (undefined8 *)
                    (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
          goto label_042934cd;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IDisposable,0);
label_042934cd:
    (*(code *)*puVar14)(plVar13,puVar14[1]);
  }
  if (lStack_50 == 0) {
    return;
  }
  do {
    uVar15 = il2cpp_runtime_helper_022fefe0();
label_042934fa:
    plVar13 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
    if (plVar13 != (long *)0x0) {
      lVar16 = *plVar13;
      if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
        lVar17 = 0;
        do {
          if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
            puVar14 = (undefined8 *)
                      (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
            goto label_0429356d;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
      }
      puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IDisposable,0);
label_0429356d:
      (*(code *)*puVar14)(plVar13,puVar14[1]);
    }
    if (lStack_50 == 0) {
      _Unwind_Resume(uVar15);
    }
    il2cpp_runtime_helper_022fefe0(lStack_50);
  } while( true );
}


// Controllers.ErenShifterPlayerController$$.ctor
// il2cpp: void Controllers_ErenShifterPlayerController___ctor (Controllers_ErenShifterPlayerController_o* __this, const MethodInfo* method);
// 0x42935b0

void Controllers_ErenShifterPlayerController___ctor
               (Controllers_ErenShifterPlayerController_o *__this,MethodInfo *method)

{
  Controllers_BasePlayerController___ctor(__this,method);
  return;
}


