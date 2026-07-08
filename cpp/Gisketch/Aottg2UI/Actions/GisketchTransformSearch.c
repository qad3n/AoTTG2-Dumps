// Type: Gisketch.Aottg2UI.Actions.GisketchTransformSearch
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchTransformSearch.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchTransformSearch$$FindDeep
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
// 0x3b236c0

/* WARNING: Removing unreachable block (ram,0x03b239ae) */

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
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  UnityEngine_Transform_o *x;
  long *plVar10;
  undefined8 *puVar11;
  MethodInfo *method_00;
  long lVar12;
  long lVar13;
  int iVar14;
  UnityEngine_Transform_o *pUVar15;
  undefined1 auVar16 [16];
  
  if (DAT_057015f1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Transform);
    DAT_057015f1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar15 = (UnityEngine_Transform_o *)0x0;
  if ((char)bVar7 == '\0') {
    if (root == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    bVar7 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
    pUVar15 = root;
    if ((char)bVar7 == '\0') {
      pSVar8 = UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        pSVar4 = pSVar8->klass;
        uVar2._0_1_ = (pSVar4->_2).rank;
        uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_IEnumerator) {
              pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
              goto LAB_03b23803;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar12);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerator,0);
LAB_03b23803:
        cVar6 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
        if (cVar6 == '\0') {
          iVar14 = 7;
          x = (UnityEngine_Transform_o *)0x0;
          goto LAB_03b23905;
        }
        pSVar4 = pSVar8->klass;
        uVar3._0_1_ = (pSVar4->_2).rank;
        uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_IEnumerator) {
              pVVar9 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar12) + 1);
              goto LAB_03b23888;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar12);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerator,1);
LAB_03b23888:
        auVar16 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
        method_00 = auVar16._8_8_;
        pUVar15 = auVar16._0_8_;
        if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
          bVar1 = (TypeInfo_Transform->_2).naturalAligment;
          method_00 = (MethodInfo *)(ulong)bVar1;
          if (((pUVar15->klass->_2).naturalAligment < bVar1) ||
             ((pUVar15->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] != TypeInfo_Transform))
          {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pUVar15);
          }
        }
        x = Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep(pUVar15,name,method_00);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while ((char)bVar7 == '\0');
      iVar14 = 6;
LAB_03b23905:
      plVar10 = (long *)il2cpp_runtime_glue(pSVar8,TypeInfo_IDisposable);
      if (plVar10 != (long *)0x0) {
        lVar12 = *plVar10;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
              puVar11 = (undefined8 *)
                        (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 +
                        0x138);
              goto LAB_03b2396d;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IDisposable,0);
LAB_03b2396d:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      }
      pUVar15 = (UnityEngine_Transform_o *)0x0;
      if (iVar14 == 6) {
        pUVar15 = x;
      }
    }
  }
  return pUVar15;
}


