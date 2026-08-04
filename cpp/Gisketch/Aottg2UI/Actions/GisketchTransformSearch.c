// Type: Gisketch.Aottg2UI.Actions.GisketchTransformSearch
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchTransformSearch.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchTransformSearch$$FindDeep
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
// 0x3b8f810

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  System_String_o *a;
  VirtualInvokeData *pVVar8;
  UnityEngine_Transform_o *x;
  long *plVar9;
  undefined8 *puVar10;
  MethodInfo *method_00;
  long lVar11;
  long lVar12;
  System_Collections_IEnumerator_o *unaff_R12;
  int iVar13;
  UnityEngine_Transform_o *pUVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  long local_38;
  
  if (g_data_057a9f29 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    g_data_057a9f29 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar14 = (UnityEngine_Transform_o *)0x0;
  if ((char)bVar7 == '\0') {
    if (root == (UnityEngine_Transform_o *)0x0) {
label_03b8faf4:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
      bVar7 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return root;
      }
      unaff_R12 = UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
      if (unaff_R12 != (System_Collections_IEnumerator_o *)0x0) {
        local_38 = 0;
        do {
          pSVar4 = unaff_R12->klass;
          uVar2._0_1_ = (pSVar4->_2).rank;
          uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar11 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar11) == TypeInfo_IEnumerator) {
                pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar11);
                goto label_03b8f953;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar11);
          }
          pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,0);
label_03b8f953:
          cVar6 = (*pVVar8->methodPtr)(unaff_R12,pVVar8->method);
          if (cVar6 == '\0') {
            iVar13 = 7;
            goto label_03b8fa53;
          }
          pSVar4 = unaff_R12->klass;
          uVar3._0_1_ = (pSVar4->_2).rank;
          uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar11 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar11) == TypeInfo_IEnumerator) {
                pVVar8 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar11) + 1);
                goto label_03b8f9d8;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar11);
          }
          pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,1);
label_03b8f9d8:
          auVar16 = (*pVVar8->methodPtr)(unaff_R12,pVVar8->method);
          method_00 = auVar16._8_8_;
          pUVar14 = auVar16._0_8_;
          if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
            bVar1 = (TypeInfo_Transform->_2).naturalAligment;
            method_00 = (MethodInfo *)(ulong)bVar1;
            if (((pUVar14->klass->_2).naturalAligment < bVar1) ||
               ((pUVar14->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] != TypeInfo_Transform)) {
              il2cpp_runtime_helper_022b2fd0(pUVar14);
              goto label_03b8faf4;
            }
          }
          x = Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep(pUVar14,name,method_00);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            iVar13 = 6;
            goto label_03b8fa55;
          }
        } while( true );
      }
    }
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar15 = il2cpp_runtime_helper_022fefe0();
      iVar13 = 0;
      if (auVar15._8_4_ != 1) {
        plVar9 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
        if (plVar9 == (long *)0x0) goto label_03b8fbf6;
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) == 0) goto label_03b8fbcf;
        lVar12 = 0;
        goto label_03b8fbc0;
      }
      plVar9 = (long *)__cxa_begin_catch(auVar15._0_8_);
      local_38 = *plVar9;
      __cxa_end_catch();
label_03b8fa53:
      x = (UnityEngine_Transform_o *)0x0;
label_03b8fa55:
      plVar9 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
      if (plVar9 != (long *)0x0) {
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
              puVar10 = (undefined8 *)
                        (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
              goto label_03b8fabd;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_03b8fabd:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
      }
    } while (local_38 != 0);
    pUVar14 = (UnityEngine_Transform_o *)0x0;
    if (iVar13 == 6) {
      pUVar14 = x;
    }
  }
  return pUVar14;
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12) {
label_03b8fbc0:
    if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar10 = (undefined8 *)(lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto label_03b8fbed;
    }
  }
label_03b8fbcf:
  puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_03b8fbed:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
label_03b8fbf6:
  _Unwind_Resume(auVar15._0_8_);
}


