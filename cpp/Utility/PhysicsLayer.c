// Type: Utility.PhysicsLayer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/PhysicsLayer.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/PhysicsLayer.cs
// --------------------------------

// Utility.PhysicsLayer$$Init
// il2cpp: void Utility_PhysicsLayer__Init (const MethodInfo* method);
// 0x4492dc0

void Utility_PhysicsLayer__Init(MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  UnityEngine_LayerMask_o UVar3;
  uint uVar4;
  System_Int32_array *pSVar5;
  int iVar6;
  uint uVar7;
  MethodInfo *pMVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  System_Int32_array *pSVar12;
  int32_t iVar13;
  undefined8 uVar14;
  System_Collections_Generic_Dictionary_int__LayerMask__o *pSVar15;
  undefined1 auVar16 [16];
  
  if (g_data_057ae917 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057ae917 = '\x01';
  }
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar13 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 4);
  auVar16 = il2cpp_runtime_helper_022b2a40(TypeInfo_int,0);
  Utility_PhysicsLayer__SetLayerCollisions(iVar13,auVar16._0_8_,auVar16._8_8_);
  iVar13 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 8);
  pSVar12 = (System_Int32_array *)0x3;
  uVar14 = TypeInfo_int;
  pSVar5 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
  uVar4 = (uint)uVar14;
  if (pSVar5 == (System_Int32_array *)0x0) goto label_0449368d;
  uVar7 = (uint)pSVar5->max_length;
  if (uVar7 != 0) {
    pMVar8 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
    uVar1 = *(uint *)((long)&pMVar8->virtualMethodPointer + 4);
    pSVar12 = (System_Int32_array *)(ulong)uVar1;
    pSVar5->m_Items[0] = uVar1;
    if (uVar7 != 1) {
      uVar1 = *(uint *)((long)&pMVar8->invoker_method + 4);
      pSVar12 = (System_Int32_array *)(ulong)uVar1;
      pSVar5->m_Items[1] = uVar1;
      if (2 < uVar7) {
        pSVar5->m_Items[2] = *(int32_t *)&pMVar8->name;
        Utility_PhysicsLayer__SetLayerCollisions(iVar13,pSVar5,pMVar8);
        iVar13 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc);
        pSVar12 = (System_Int32_array *)&g_data_00000008;
        uVar14 = TypeInfo_int;
        pSVar5 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
        uVar4 = (uint)uVar14;
        if (pSVar5 == (System_Int32_array *)0x0) goto label_0449368d;
        uVar7 = (uint)pSVar5->max_length;
        if (uVar7 != 0) {
          pMVar8 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
          pSVar12 = (System_Int32_array *)(ulong)*(uint *)&pMVar8->virtualMethodPointer;
          pSVar5->m_Items[0] = *(uint *)&pMVar8->virtualMethodPointer;
          if (uVar7 != 1) {
            uVar1 = *(uint *)((long)&pMVar8->invoker_method + 4);
            pSVar12 = (System_Int32_array *)(ulong)uVar1;
            pSVar5->m_Items[1] = uVar1;
            if (2 < uVar7) {
              uVar1 = *(uint *)((long)&pMVar8->name + 4);
              pSVar12 = (System_Int32_array *)(ulong)uVar1;
              pSVar5->m_Items[2] = uVar1;
              if (uVar7 != 3) {
                uVar1 = *(uint *)((long)&pMVar8->klass + 4);
                pSVar12 = (System_Int32_array *)(ulong)uVar1;
                pSVar5->m_Items[3] = uVar1;
                if (4 < uVar7) {
                  uVar1 = *(uint *)((long)&pMVar8->field7_0x38 + 4);
                  pSVar12 = (System_Int32_array *)(ulong)uVar1;
                  pSVar5->m_Items[4] = uVar1;
                  if (uVar7 != 5) {
                    pSVar12 = (System_Int32_array *)(ulong)*(uint *)&pMVar8->field7_0x38;
                    pSVar5->m_Items[5] = *(uint *)&pMVar8->field7_0x38;
                    if (6 < uVar7) {
                      uVar1 = *(uint *)((long)&pMVar8->parameters + 4);
                      pSVar12 = (System_Int32_array *)(ulong)uVar1;
                      pSVar5->m_Items[6] = uVar1;
                      if (uVar7 != 7) {
                        pSVar5->m_Items[7] = *(int32_t *)&pMVar8->field_0x54;
                        Utility_PhysicsLayer__SetLayerCollisions(iVar13,pSVar5,pMVar8);
                        iVar13 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x10);
                        pSVar12 = (System_Int32_array *)0x6;
                        uVar14 = TypeInfo_int;
                        pSVar5 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
                        uVar4 = (uint)uVar14;
                        if (pSVar5 == (System_Int32_array *)0x0) goto label_0449368d;
                        uVar7 = (uint)pSVar5->max_length;
                        if (uVar7 != 0) {
                          pMVar8 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                          pSVar12 = (System_Int32_array *)(ulong)*(uint *)&pMVar8->invoker_method;
                          pSVar5->m_Items[0] = *(uint *)&pMVar8->invoker_method;
                          if (uVar7 != 1) {
                            uVar1 = *(uint *)((long)&pMVar8->klass + 4);
                            pSVar12 = (System_Int32_array *)(ulong)uVar1;
                            pSVar5->m_Items[1] = uVar1;
                            if (2 < uVar7) {
                              uVar1 = *(uint *)((long)&pMVar8->field7_0x38 + 4);
                              pSVar12 = (System_Int32_array *)(ulong)uVar1;
                              pSVar5->m_Items[2] = uVar1;
                              if (uVar7 != 3) {
                                pSVar12 = (System_Int32_array *)(ulong)*(uint *)&pMVar8->field7_0x38;
                                pSVar5->m_Items[3] = *(uint *)&pMVar8->field7_0x38;
                                if (4 < uVar7) {
                                  uVar1 = *(uint *)((long)&pMVar8->parameters + 4);
                                  pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                  pSVar5->m_Items[4] = uVar1;
                                  if (uVar7 != 5) {
                                    pSVar5->m_Items[5] = *(int32_t *)&pMVar8->slot;
                                    Utility_PhysicsLayer__SetLayerCollisions(iVar13,pSVar5,pMVar8);
                                    iVar13 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x14);
                                    pSVar12 = (System_Int32_array *)&g_data_00000004;
                                    uVar14 = TypeInfo_int;
                                    pSVar5 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
                                    uVar4 = (uint)uVar14;
                                    if (pSVar5 == (System_Int32_array *)0x0) goto label_0449368d;
                                    uVar7 = (uint)pSVar5->max_length;
                                    if (uVar7 != 0) {
                                      pMVar8 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                                      pSVar12 = (System_Int32_array *)
                                                (ulong)*(uint *)&pMVar8->virtualMethodPointer;
                                      pSVar5->m_Items[0] = *(uint *)&pMVar8->virtualMethodPointer;
                                      if (uVar7 != 1) {
                                        uVar1 = *(uint *)((long)&pMVar8->virtualMethodPointer + 4);
                                        pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                        pSVar5->m_Items[1] = uVar1;
                                        if (2 < uVar7) {
                                          uVar1 = *(uint *)((long)&pMVar8->name + 4);
                                          pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                          pSVar5->m_Items[2] = uVar1;
                                          if (uVar7 != 3) {
                                            pSVar5->m_Items[3] = *(int32_t *)&pMVar8->return_type;
                                            Utility_PhysicsLayer__SetLayerCollisions(iVar13,pSVar5,pMVar8);
                                            iVar13 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x1c);
                                            pSVar12 = (System_Int32_array *)0x6;
                                            uVar14 = TypeInfo_int;
                                            pSVar5 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
                                            uVar4 = (uint)uVar14;
                                            if (pSVar5 == (System_Int32_array *)0x0) goto label_0449368d;
                                            uVar7 = (uint)pSVar5->max_length;
                                            if (uVar7 != 0) {
                                              pMVar8 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                                              uVar1 = *(uint *)((long)&pMVar8->virtualMethodPointer + 4);
                                              pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                              pSVar5->m_Items[0] = uVar1;
                                              if (uVar7 != 1) {
                                                uVar1 = *(uint *)((long)&pMVar8->invoker_method + 4);
                                                pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                pSVar5->m_Items[1] = uVar1;
                                                if (2 < uVar7) {
                                                  pSVar12 = (System_Int32_array *)
                                                            (ulong)*(uint *)&pMVar8->klass;
                                                  pSVar5->m_Items[2] = *(uint *)&pMVar8->klass;
                                                  if (uVar7 != 3) {
                                                    pSVar12 = (System_Int32_array *)
                                                              (ulong)*(uint *)&pMVar8->field7_0x38;
                                                    pSVar5->m_Items[3] = *(uint *)&pMVar8->field7_0x38;
                                                    if (4 < uVar7) {
                                                      uVar1 = *(uint *)((long)&pMVar8->field7_0x38 + 4);
                                                      pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                      pSVar5->m_Items[4] = uVar1;
                                                      if (uVar7 != 5) {
                                                        pSVar5->m_Items[5] = *(int32_t *)&pMVar8->parameters;
                                                        Utility_PhysicsLayer__SetLayerCollisions
                                                                  (iVar13,pSVar5,pMVar8);
                                                        iVar13 = *(int32_t *)
                                                                  (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x20);
                                                        pSVar12 = (System_Int32_array *)0x1;
                                                        uVar14 = TypeInfo_int;
                                                        auVar16 = il2cpp_runtime_helper_022b2a40();
                                                        pSVar5 = auVar16._0_8_;
                                                        uVar4 = (uint)uVar14;
                                                        if (pSVar5 == (System_Int32_array *)0x0)
                                                        goto label_0449368d;
                                                        if ((int)pSVar5->max_length != 0) {
                                                          pSVar5->m_Items[0] =
                                                               *(int32_t *)
                                                                (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x1c);
                                                          Utility_PhysicsLayer__SetLayerCollisions
                                                                    (iVar13,pSVar5,auVar16._8_8_);
                                                          iVar13 = *(int32_t *)
                                                                    (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x24);
                                                          pSVar12 = (System_Int32_array *)0x2;
                                                          uVar14 = TypeInfo_int;
                                                          pSVar5 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
                                                          uVar4 = (uint)uVar14;
                                                          if (pSVar5 == (System_Int32_array *)0x0)
                                                          goto label_0449368d;
                                                          iVar6 = (int)pSVar5->max_length;
                                                          if (iVar6 != 0) {
                                                            pMVar8 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                                                            uVar7 = *(uint *)((long)&pMVar8->
                                                       virtualMethodPointer + 4);
                                                       pSVar12 = (System_Int32_array *)(ulong)uVar7;
                                                       pSVar5->m_Items[0] = uVar7;
                                                       if (iVar6 != 1) {
                                                         pSVar5->m_Items[1] =
                                                              *(int32_t *)&pMVar8->invoker_method;
                                                         Utility_PhysicsLayer__SetLayerCollisions
                                                                   (iVar13,pSVar5,pMVar8);
                                                         iVar13 = *(int32_t *)
                                                                   (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x28);
                                                         pSVar12 = (System_Int32_array *)&g_data_00000004;
                                                         uVar14 = TypeInfo_int;
                                                         pSVar5 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
                                                         uVar4 = (uint)uVar14;
                                                         if (pSVar5 == (System_Int32_array *)0x0)
                                                         goto label_0449368d;
                                                         uVar7 = (uint)pSVar5->max_length;
                                                         if (uVar7 != 0) {
                                                           pMVar8 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                                                           uVar1 = *(uint *)((long)&pMVar8->invoker_method + 4
                                                                            );
                                                           pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                           pSVar5->m_Items[0] = uVar1;
                                                           if (uVar7 != 1) {
                                                             uVar1 = *(uint *)((long)&pMVar8->parameters + 4);
                                                             pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                             pSVar5->m_Items[1] = uVar1;
                                                             if (2 < uVar7) {
                                                               pSVar12 = (System_Int32_array *)
                                                                         (ulong)*(uint *)&pMVar8->field7_0x38;
                                                               pSVar5->m_Items[2] =
                                                                    *(uint *)&pMVar8->field7_0x38;
                                                               if (uVar7 != 3) {
                                                                 pSVar5->m_Items[3] =
                                                                      *(int32_t *)
                                                                       ((long)&pMVar8->field7_0x38 + 4);
                                                                 Utility_PhysicsLayer__SetLayerCollisions
                                                                           (iVar13,pSVar5,pMVar8);
                                                                 iVar13 = *(int32_t *)
                                                                           (*(long *)(TypeInfo_PhysicsLayer + 0xb8) +
                                                                           0x18);
                                                                 pSVar12 = (System_Int32_array *)0x1;
                                                                 uVar14 = TypeInfo_int;
                                                                 auVar16 = il2cpp_runtime_helper_022b2a40();
                                                                 pSVar5 = auVar16._0_8_;
                                                                 uVar4 = (uint)uVar14;
                                                                 if (pSVar5 == (System_Int32_array *)0x0)
                                                                 goto label_0449368d;
                                                                 if ((int)pSVar5->max_length != 0) {
                                                                   pSVar5->m_Items[0] =
                                                                        *(int32_t *)
                                                                         (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 8);
                                                                   Utility_PhysicsLayer__SetLayerCollisions
                                                                             (iVar13,pSVar5,auVar16._8_8_);
                                                                   iVar13 = *(int32_t *)
                                                                             (*(long *)(TypeInfo_PhysicsLayer + 0xb8) +
                                                                             0x2c);
                                                                   pSVar12 = (System_Int32_array *)0x7;
                                                                   uVar14 = TypeInfo_int;
                                                                   pSVar5 = (System_Int32_array *)
                                                                            il2cpp_runtime_helper_022b2a40();
                                                                   uVar4 = (uint)uVar14;
                                                                   if (pSVar5 == (System_Int32_array *)0x0)
                                                                   goto label_0449368d;
                                                                   uVar7 = (uint)pSVar5->max_length;
                                                                   if (uVar7 != 0) {
                                                                     pMVar8 = *(MethodInfo **)
                                                                               (TypeInfo_PhysicsLayer + 0xb8);
                                                                     uVar1 = *(uint *)((long)&pMVar8->
                                                       field7_0x38 + 4);
                                                       pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                       pSVar5->m_Items[0] = uVar1;
                                                       if (uVar7 != 1) {
                                                         uVar1 = *(uint *)((long)&pMVar8->return_type + 4);
                                                         pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                         pSVar5->m_Items[1] = uVar1;
                                                         if (2 < uVar7) {
                                                           pSVar12 = (System_Int32_array *)
                                                                     (ulong)*(uint *)&pMVar8->parameters;
                                                           pSVar5->m_Items[2] = *(uint *)&pMVar8->parameters;
                                                           if (uVar7 != 3) {
                                                             uVar1._0_2_ = pMVar8->slot;
                                                             uVar1._2_1_ = pMVar8->parameters_count;
                                                             uVar1._3_1_ = pMVar8->bitflags;
                                                             pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                             pSVar5->m_Items[3] = uVar1;
                                                             if (4 < uVar7) {
                                                               pSVar12 = (System_Int32_array *)
                                                                         (ulong)*(uint *)&pMVar8->field_0x54;
                                                               pSVar5->m_Items[4] =
                                                                    *(uint *)&pMVar8->field_0x54;
                                                               if (uVar7 != 5) {
                                                                 uVar1 = *(uint *)((long)&pMVar8->parameters +
                                                                                  4);
                                                                 pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                                 pSVar5->m_Items[5] = uVar1;
                                                                 if (6 < uVar7) {
                                                                   pSVar5->m_Items[6] =
                                                                        *(int32_t *)&pMVar8->field7_0x38;
                                                                   Utility_PhysicsLayer__SetLayerCollisions
                                                                             (iVar13,pSVar5,pMVar8);
                                                                   iVar13 = *(int32_t *)
                                                                             (*(long *)(TypeInfo_PhysicsLayer + 0xb8) +
                                                                             0x30);
                                                                   pSVar12 = (System_Int32_array *)0x3;
                                                                   uVar14 = TypeInfo_int;
                                                                   pSVar5 = (System_Int32_array *)
                                                                            il2cpp_runtime_helper_022b2a40();
                                                                   uVar4 = (uint)uVar14;
                                                                   if (pSVar5 == (System_Int32_array *)0x0)
                                                                   goto label_0449368d;
                                                                   uVar7 = (uint)pSVar5->max_length;
                                                                   if (uVar7 != 0) {
                                                                     pMVar8 = *(MethodInfo **)
                                                                               (TypeInfo_PhysicsLayer + 0xb8);
                                                                     uVar1 = *(uint *)((long)&pMVar8->
                                                       field7_0x38 + 4);
                                                       pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                       pSVar5->m_Items[0] = uVar1;
                                                       if (uVar7 != 1) {
                                                         uVar1 = *(uint *)((long)&pMVar8->return_type + 4);
                                                         pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                         pSVar5->m_Items[1] = uVar1;
                                                         if (2 < uVar7) {
                                                           pSVar5->m_Items[2] =
                                                                *(int32_t *)((long)&pMVar8->name + 4);
                                                           Utility_PhysicsLayer__SetLayerCollisions
                                                                     (iVar13,pSVar5,pMVar8);
                                                           iVar13 = *(int32_t *)
                                                                     (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x50);
                                                           pSVar12 = (System_Int32_array *)0x3;
                                                           uVar14 = TypeInfo_int;
                                                           pSVar5 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
                                                           uVar4 = (uint)uVar14;
                                                           if (pSVar5 == (System_Int32_array *)0x0)
                                                           goto label_0449368d;
                                                           uVar7 = (uint)pSVar5->max_length;
                                                           if (uVar7 != 0) {
                                                             pMVar8 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                                                             uVar1 = *(uint *)((long)&pMVar8->field7_0x38 + 4)
                                                             ;
                                                             pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                             pSVar5->m_Items[0] = uVar1;
                                                             if (uVar7 != 1) {
                                                               uVar1 = *(uint *)((long)&pMVar8->return_type +
                                                                                4);
                                                               pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                               pSVar5->m_Items[1] = uVar1;
                                                               if (2 < uVar7) {
                                                                 pSVar5->m_Items[2] =
                                                                      *(int32_t *)&pMVar8->invoker_method;
                                                                 Utility_PhysicsLayer__SetLayerCollisions
                                                                           (iVar13,pSVar5,pMVar8);
                                                                 iVar13 = *(int32_t *)
                                                                           (*(long *)(TypeInfo_PhysicsLayer + 0xb8) +
                                                                           0x54);
                                                                 pSVar12 = (System_Int32_array *)0x3;
                                                                 uVar14 = TypeInfo_int;
                                                                 pSVar5 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40()
                                                                 ;
                                                                 uVar4 = (uint)uVar14;
                                                                 if (pSVar5 == (System_Int32_array *)0x0)
                                                                 goto label_0449368d;
                                                                 uVar7 = (uint)pSVar5->max_length;
                                                                 if (uVar7 != 0) {
                                                                   pMVar8 = *(MethodInfo **)
                                                                             (TypeInfo_PhysicsLayer + 0xb8);
                                                                   uVar1 = *(uint *)((long)&pMVar8->
                                                       field7_0x38 + 4);
                                                       pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                       pSVar5->m_Items[0] = uVar1;
                                                       if (uVar7 != 1) {
                                                         uVar1 = *(uint *)((long)&pMVar8->return_type + 4);
                                                         pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                         pSVar5->m_Items[1] = uVar1;
                                                         if (2 < uVar7) {
                                                           pSVar5->m_Items[2] =
                                                                *(int32_t *)
                                                                 ((long)&pMVar8->virtualMethodPointer + 4);
                                                           Utility_PhysicsLayer__SetLayerCollisions
                                                                     (iVar13,pSVar5,pMVar8);
                                                           iVar13 = *(int32_t *)
                                                                     (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x34);
                                                           pSVar12 = (System_Int32_array *)&g_data_00000005;
                                                           uVar14 = TypeInfo_int;
                                                           pSVar5 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
                                                           uVar4 = (uint)uVar14;
                                                           if (pSVar5 == (System_Int32_array *)0x0)
                                                           goto label_0449368d;
                                                           uVar7 = (uint)pSVar5->max_length;
                                                           if (uVar7 != 0) {
                                                             pMVar8 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                                                             uVar1 = *(uint *)((long)&pMVar8->field7_0x38 + 4)
                                                             ;
                                                             pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                             pSVar5->m_Items[0] = uVar1;
                                                             if (uVar7 != 1) {
                                                               uVar1 = *(uint *)((long)&pMVar8->return_type +
                                                                                4);
                                                               pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                               pSVar5->m_Items[1] = uVar1;
                                                               if (2 < uVar7) {
                                                                 uVar1 = *(uint *)((long)&pMVar8->
                                                       virtualMethodPointer + 4);
                                                       pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                       pSVar5->m_Items[2] = uVar1;
                                                       if (uVar7 != 3) {
                                                         pSVar12 = (System_Int32_array *)
                                                                   (ulong)*(uint *)&pMVar8->invoker_method;
                                                         pSVar5->m_Items[3] = *(uint *)&pMVar8->invoker_method
                                                         ;
                                                         if (4 < uVar7) {
                                                           pSVar5->m_Items[4] =
                                                                *(int32_t *)&pMVar8->return_type;
                                                           Utility_PhysicsLayer__SetLayerCollisions
                                                                     (iVar13,pSVar5,pMVar8);
                                                           iVar13 = *(int32_t *)
                                                                     (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x38);
                                                           pSVar12 = (System_Int32_array *)0x6;
                                                           uVar14 = TypeInfo_int;
                                                           pSVar5 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
                                                           uVar4 = (uint)uVar14;
                                                           if (pSVar5 == (System_Int32_array *)0x0)
                                                           goto label_0449368d;
                                                           uVar7 = (uint)pSVar5->max_length;
                                                           if (uVar7 != 0) {
                                                             pMVar8 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                                                             uVar1 = *(uint *)((long)&pMVar8->field7_0x38 + 4)
                                                             ;
                                                             pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                             pSVar5->m_Items[0] = uVar1;
                                                             if (uVar7 != 1) {
                                                               uVar1 = *(uint *)((long)&pMVar8->return_type +
                                                                                4);
                                                               pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                               pSVar5->m_Items[1] = uVar1;
                                                               if (2 < uVar7) {
                                                                 pSVar12 = (System_Int32_array *)
                                                                           (ulong)*(uint *)&pMVar8->
                                                       invoker_method;
                                                       pSVar5->m_Items[2] = *(uint *)&pMVar8->invoker_method;
                                                       if (uVar7 != 3) {
                                                         uVar1 = *(uint *)((long)&pMVar8->virtualMethodPointer
                                                                          + 4);
                                                         pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                         pSVar5->m_Items[3] = uVar1;
                                                         if (4 < uVar7) {
                                                           uVar1 = *(uint *)((long)&pMVar8->name + 4);
                                                           pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                           pSVar5->m_Items[4] = uVar1;
                                                           if (uVar7 != 5) {
                                                             pSVar5->m_Items[5] =
                                                                  *(int32_t *)&pMVar8->return_type;
                                                             Utility_PhysicsLayer__SetLayerCollisions
                                                                       (iVar13,pSVar5,pMVar8);
                                                             iVar13 = *(int32_t *)
                                                                       (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x3c)
                                                             ;
                                                             pSVar12 = (System_Int32_array *)&g_data_0000000b;
                                                             uVar14 = TypeInfo_int;
                                                             pSVar5 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
                                                             uVar4 = (uint)uVar14;
                                                             if (pSVar5 == (System_Int32_array *)0x0)
                                                             goto label_0449368d;
                                                             uVar7 = (uint)pSVar5->max_length;
                                                             if (uVar7 != 0) {
                                                               pMVar8 = *(MethodInfo **)(TypeInfo_PhysicsLayer + 0xb8);
                                                               uVar1 = *(uint *)((long)&pMVar8->
                                                       virtualMethodPointer + 4);
                                                       pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                       pSVar5->m_Items[0] = uVar1;
                                                       if (uVar7 != 1) {
                                                         pSVar12 = (System_Int32_array *)
                                                                   (ulong)*(uint *)&pMVar8->invoker_method;
                                                         pSVar5->m_Items[1] = *(uint *)&pMVar8->invoker_method
                                                         ;
                                                         if (2 < uVar7) {
                                                           uVar1 = *(uint *)((long)&pMVar8->name + 4);
                                                           pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                           pSVar5->m_Items[2] = uVar1;
                                                           if (uVar7 != 3) {
                                                             uVar1 = *(uint *)((long)&pMVar8->field7_0x38 + 4)
                                                             ;
                                                             pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                             pSVar5->m_Items[3] = uVar1;
                                                             if (4 < uVar7) {
                                                               uVar2._0_2_ = pMVar8->slot;
                                                               uVar2._2_1_ = pMVar8->parameters_count;
                                                               uVar2._3_1_ = pMVar8->bitflags;
                                                               pSVar12 = (System_Int32_array *)(ulong)uVar2;
                                                               pSVar5->m_Items[4] = uVar2;
                                                               if (uVar7 != 5) {
                                                                 pSVar12 = (System_Int32_array *)
                                                                           (ulong)*(uint *)&pMVar8->field_0x54
                                                                 ;
                                                                 pSVar5->m_Items[5] =
                                                                      *(uint *)&pMVar8->field_0x54;
                                                                 if (6 < uVar7) {
                                                                   uVar1 = *(uint *)((long)&pMVar8->
                                                       return_type + 4);
                                                       pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                       pSVar5->m_Items[6] = uVar1;
                                                       if (uVar7 != 7) {
                                                         pSVar12 = (System_Int32_array *)
                                                                   (ulong)*(uint *)&pMVar8->field7_0x38;
                                                         pSVar5->m_Items[7] = *(uint *)&pMVar8->field7_0x38;
                                                         if (8 < uVar7) {
                                                           uVar1 = *(uint *)((long)&pMVar8->parameters + 4);
                                                           pSVar12 = (System_Int32_array *)(ulong)uVar1;
                                                           pSVar5->m_Items[8] = uVar1;
                                                           if (uVar7 != 9) {
                                                             pSVar12 = (System_Int32_array *)
                                                                       (ulong)*(uint *)&pMVar8->parameters;
                                                             pSVar5->m_Items[9] = *(uint *)&pMVar8->parameters
                                                             ;
                                                             if (10 < uVar7) {
                                                               pSVar5->m_Items[10] =
                                                                    *(int32_t *)&pMVar8->return_type;
                                                               Utility_PhysicsLayer__SetLayerCollisions
                                                                         (iVar13,pSVar5,pMVar8);
                                                               iVar13 = *(int32_t *)
                                                                         (*(long *)(TypeInfo_PhysicsLayer + 0xb8) +
                                                                         0x40);
                                                               auVar16 = il2cpp_runtime_helper_022b2a40(TypeInfo_int,0);
                                                               Utility_PhysicsLayer__SetLayerCollisions
                                                                         (iVar13,auVar16._0_8_,auVar16._8_8_);
                                                               iVar13 = *(int32_t *)
                                                                         (*(long *)(TypeInfo_PhysicsLayer + 0xb8) +
                                                                         0x44);
                                                               auVar16 = il2cpp_runtime_helper_022b2a40(TypeInfo_int,0);
                                                               Utility_PhysicsLayer__SetLayerCollisions
                                                                         (iVar13,auVar16._0_8_,auVar16._8_8_);
                                                               iVar13 = *(int32_t *)
                                                                         (*(long *)(TypeInfo_PhysicsLayer + 0xb8) +
                                                                         0x48);
                                                               auVar16 = il2cpp_runtime_helper_022b2a40(TypeInfo_int,0);
                                                               Utility_PhysicsLayer__SetLayerCollisions
                                                                         (iVar13,auVar16._0_8_,auVar16._8_8_);
                                                               iVar13 = *(int32_t *)
                                                                         (*(long *)(TypeInfo_PhysicsLayer + 0xb8) +
                                                                         0x4c);
                                                               auVar16 = il2cpp_runtime_helper_022b2a40(TypeInfo_int,0);
                                                               Utility_PhysicsLayer__SetLayerCollisions
                                                                         (iVar13,auVar16._0_8_,auVar16._8_8_);
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
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0449368d:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae919 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057ae919 = '\x01';
  }
  iVar6 = *(int *)(TypeInfo_Physics + 0xe4);
  pMVar8 = (MethodInfo *)0x0;
  while( true ) {
    if (iVar6 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar6 = (int)pMVar8;
    pSVar5 = (System_Int32_array *)(ulong)uVar4;
    UnityEngine_Physics__IgnoreLayerCollision(uVar4,iVar6,1,(MethodInfo *)0x0);
    uVar7 = iVar6 + 1;
    if (uVar7 == 0x20) break;
    iVar6 = *(int *)(TypeInfo_Physics + 0xe4);
    pMVar8 = (MethodInfo *)(ulong)uVar7;
  }
  if (pSVar12 != (System_Int32_array *)0x0) {
    if ((int)pSVar12->max_length < 1) {
label_0449378d:
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = *(System_Collections_Generic_Dictionary_int__LayerMask__o **)
                 (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x58);
      UVar3 = Utility_PhysicsLayer__GetMask(pSVar12,pMVar8);
      pSVar5 = pSVar12;
      if (pSVar15 != (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) {
        System_Collections_Generic_Dictionary_int__LayerMask___Add(pSVar15,uVar4,UVar3,MethodInfo_Void_Add);
        return;
      }
    }
    else {
      uVar11 = 0;
      if ((pSVar12->max_length & 0xffffffff) != 0) {
        do {
          uVar7 = pSVar12->m_Items[uVar11];
          pMVar8 = (MethodInfo *)(ulong)uVar7;
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = (System_Int32_array *)(ulong)uVar4;
          UnityEngine_Physics__IgnoreLayerCollision(uVar4,uVar7,0,(MethodInfo *)0x0);
          uVar11 = uVar11 + 1;
          uVar7 = (uint)pSVar12->max_length;
          if ((long)(int)uVar7 <= (long)uVar11) goto label_0449378d;
        } while (uVar11 < uVar7);
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar12 = pSVar5;
  if (pSVar5 != (System_Int32_array *)0x0) {
    if (pSVar5->max_length == 0) {
      UnityEngine_LayerMask__op_Implicit_4dfc6f0(0,(MethodInfo *)0x0);
      return;
    }
    if ((int)pSVar5->max_length != 0) {
      UVar3 = UnityEngine_LayerMask__op_Implicit_4dfc6f0
                        (1 << ((byte)pSVar5->m_Items[0] & 0x1f),(MethodInfo *)0x0);
      if (1 < (int)pSVar5->max_length) {
        lVar9 = 9;
        do {
          pSVar12 = (System_Int32_array *)(ulong)(uint)UVar3.fields.m_Mask;
          uVar4 = UnityEngine_LayerMask__op_Implicit(UVar3,(MethodInfo *)0x0);
          if ((ulong)(uint)pSVar5->max_length <= lVar9 - 8U) goto label_0449387f;
          UVar3 = UnityEngine_LayerMask__op_Implicit_4dfc6f0
                            (uVar4 | 1 << ((byte)pSVar5->m_Items[lVar9 + -8] & 0x1f),(MethodInfo *)0x0);
          lVar10 = lVar9 + -7;
          lVar9 = lVar9 + 1;
        } while (lVar10 < (int)pSVar5->max_length);
      }
      return;
    }
label_0449387f:
    il2cpp_runtime_helper_022b2ca0();
  }
  iVar13 = (int32_t)pSVar12;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae918 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayerMask_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057ae918 = '\x01';
    iVar6 = *(int *)(TypeInfo_PhysicsLayer + 0xe4);
  }
  else {
    iVar6 = *(int *)(TypeInfo_PhysicsLayer + 0xe4);
  }
  if (iVar6 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar15 = *(System_Collections_Generic_Dictionary_int__LayerMask__o **)
               (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x58);
  }
  else {
    pSVar15 = *(System_Collections_Generic_Dictionary_int__LayerMask__o **)
               (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x58);
  }
  if (pSVar15 != (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) {
    System_Collections_Generic_Dictionary_int__LayerMask___get_Item(pSVar15,iVar13,MethodInfo_LayerMask_get_Item);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
  return;
}


// Utility.PhysicsLayer$$GetMask
// il2cpp: UnityEngine_LayerMask_o Utility_PhysicsLayer__GetMask (System_Int32_array* layers, const MethodInfo* method);
// 0x44937f0

UnityEngine_LayerMask_o Utility_PhysicsLayer__GetMask(System_Int32_array *layers,MethodInfo *method)

{
  int iVar1;
  UnityEngine_LayerMask_o UVar2;
  uint uVar3;
  UnityEngine_LayerMask_Fields extraout_EAX;
  long lVar4;
  long lVar5;
  int32_t key;
  System_Int32_array *pSVar6;
  System_Collections_Generic_Dictionary_int__LayerMask__o *__this;
  
  pSVar6 = layers;
  if (layers != (System_Int32_array *)0x0) {
    if (layers->max_length == 0) {
      UVar2 = UnityEngine_LayerMask__op_Implicit_4dfc6f0(0,(MethodInfo *)0x0);
      return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar2;
    }
    if ((int)layers->max_length != 0) {
      UVar2 = UnityEngine_LayerMask__op_Implicit_4dfc6f0
                        (1 << ((byte)layers->m_Items[0] & 0x1f),(MethodInfo *)0x0);
      if (1 < (int)layers->max_length) {
        lVar4 = 9;
        do {
          pSVar6 = (System_Int32_array *)(ulong)(uint)UVar2.fields.m_Mask;
          uVar3 = UnityEngine_LayerMask__op_Implicit(UVar2,(MethodInfo *)0x0);
          if ((ulong)(uint)layers->max_length <= lVar4 - 8U) goto label_0449387f;
          UVar2 = UnityEngine_LayerMask__op_Implicit_4dfc6f0
                            (uVar3 | 1 << ((byte)layers->m_Items[lVar4 + -8] & 0x1f),(MethodInfo *)0x0);
          lVar5 = lVar4 + -7;
          lVar4 = lVar4 + 1;
        } while (lVar5 < (int)layers->max_length);
      }
      return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar2;
    }
label_0449387f:
    il2cpp_runtime_helper_022b2ca0();
  }
  key = (int32_t)pSVar6;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae918 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayerMask_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057ae918 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhysicsLayer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhysicsLayer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(System_Collections_Generic_Dictionary_int__LayerMask__o **)
              (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x58);
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_int__LayerMask__o **)
              (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x58);
  }
  if (__this != (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) {
    UVar2 = System_Collections_Generic_Dictionary_int__LayerMask___get_Item(__this,key,MethodInfo_LayerMask_get_Item);
    return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)extraout_EAX.m_Mask;
}


// Utility.PhysicsLayer$$CopyMask
// il2cpp: UnityEngine_LayerMask_o Utility_PhysicsLayer__CopyMask (int32_t originLayer, const MethodInfo* method);
// 0x4493890

UnityEngine_LayerMask_o Utility_PhysicsLayer__CopyMask(int32_t originLayer,MethodInfo *method)

{
  int iVar1;
  UnityEngine_LayerMask_o UVar2;
  UnityEngine_LayerMask_Fields extraout_EAX;
  System_Collections_Generic_Dictionary_int__LayerMask__o *__this;
  
  if (g_data_057ae918 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayerMask_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057ae918 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhysicsLayer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhysicsLayer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(System_Collections_Generic_Dictionary_int__LayerMask__o **)
              (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x58);
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_int__LayerMask__o **)
              (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x58);
  }
  if (__this != (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) {
    UVar2 = System_Collections_Generic_Dictionary_int__LayerMask___get_Item(__this,originLayer,MethodInfo_LayerMask_get_Item);
    return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)extraout_EAX.m_Mask;
}


// Utility.PhysicsLayer$$SetLayerCollisions
// il2cpp: void Utility_PhysicsLayer__SetLayerCollisions (int32_t layer, System_Int32_array* others, const MethodInfo* method);
// 0x44936a0

void Utility_PhysicsLayer__SetLayerCollisions(int32_t layer,System_Int32_array *others,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  int iVar2;
  uint uVar3;
  MethodInfo *method_00;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int32_t key;
  System_Int32_array *pSVar7;
  System_Int32_array *pSVar8;
  System_Collections_Generic_Dictionary_int__LayerMask__o *pSVar9;
  
  if (g_data_057ae919 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057ae919 = '\x01';
  }
  iVar2 = *(int *)(TypeInfo_Physics + 0xe4);
  method_00 = (MethodInfo *)0x0;
  while( true ) {
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_Int32_array *)(ulong)(uint)layer;
    iVar2 = (int)method_00;
    UnityEngine_Physics__IgnoreLayerCollision(layer,iVar2,1,(MethodInfo *)0x0);
    uVar3 = iVar2 + 1;
    if (uVar3 == 0x20) break;
    iVar2 = *(int *)(TypeInfo_Physics + 0xe4);
    method_00 = (MethodInfo *)(ulong)uVar3;
  }
  if (others != (System_Int32_array *)0x0) {
    if ((int)others->max_length < 1) {
label_0449378d:
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = *(System_Collections_Generic_Dictionary_int__LayerMask__o **)
                (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x58);
      UVar1 = Utility_PhysicsLayer__GetMask(others,method_00);
      pSVar7 = others;
      if (pSVar9 != (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) {
        System_Collections_Generic_Dictionary_int__LayerMask___Add(pSVar9,layer,UVar1,MethodInfo_Void_Add);
        return;
      }
    }
    else {
      uVar6 = 0;
      if ((others->max_length & 0xffffffff) != 0) {
        do {
          uVar3 = others->m_Items[uVar6];
          method_00 = (MethodInfo *)(ulong)uVar3;
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = (System_Int32_array *)(ulong)(uint)layer;
          UnityEngine_Physics__IgnoreLayerCollision(layer,uVar3,0,(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
          uVar3 = (uint)others->max_length;
          if ((long)(int)uVar3 <= (long)uVar6) goto label_0449378d;
        } while (uVar6 < uVar3);
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar8 = pSVar7;
  if (pSVar7 != (System_Int32_array *)0x0) {
    if (pSVar7->max_length == 0) {
      UnityEngine_LayerMask__op_Implicit_4dfc6f0(0,(MethodInfo *)0x0);
      return;
    }
    if ((int)pSVar7->max_length != 0) {
      UVar1 = UnityEngine_LayerMask__op_Implicit_4dfc6f0
                        (1 << ((byte)pSVar7->m_Items[0] & 0x1f),(MethodInfo *)0x0);
      if (1 < (int)pSVar7->max_length) {
        lVar4 = 9;
        do {
          pSVar8 = (System_Int32_array *)(ulong)(uint)UVar1.fields.m_Mask;
          uVar3 = UnityEngine_LayerMask__op_Implicit(UVar1,(MethodInfo *)0x0);
          if ((ulong)(uint)pSVar7->max_length <= lVar4 - 8U) goto label_0449387f;
          UVar1 = UnityEngine_LayerMask__op_Implicit_4dfc6f0
                            (uVar3 | 1 << ((byte)pSVar7->m_Items[lVar4 + -8] & 0x1f),(MethodInfo *)0x0);
          lVar5 = lVar4 + -7;
          lVar4 = lVar4 + 1;
        } while (lVar5 < (int)pSVar7->max_length);
      }
      return;
    }
label_0449387f:
    il2cpp_runtime_helper_022b2ca0();
  }
  key = (int32_t)pSVar8;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae918 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayerMask_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057ae918 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhysicsLayer + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhysicsLayer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar9 = *(System_Collections_Generic_Dictionary_int__LayerMask__o **)
              (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x58);
  }
  else {
    pSVar9 = *(System_Collections_Generic_Dictionary_int__LayerMask__o **)
              (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x58);
  }
  if (pSVar9 != (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) {
    System_Collections_Generic_Dictionary_int__LayerMask___get_Item(pSVar9,key,MethodInfo_LayerMask_get_Item);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
  return;
}


// Utility.PhysicsLayer$$.ctor
// il2cpp: void Utility_PhysicsLayer___ctor (Utility_PhysicsLayer_o* __this, const MethodInfo* method);
// 0x4493930

void Utility_PhysicsLayer___ctor(Utility_PhysicsLayer_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.PhysicsLayer$$.cctor
// il2cpp: void Utility_PhysicsLayer___cctor (const MethodInfo* method);
// 0x4493940

void Utility_PhysicsLayer___cctor(MethodInfo *method)

{
  undefined8 *puVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_int__LayerMask__o *__this;
  
  if (g_data_057ae91a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_LayerMask);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_LayerMask);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057ae91a = '\x01';
  }
  puVar1 = *(undefined8 **)(TypeInfo_PhysicsLayer + 0xb8);
  *puVar1 = 0x800000005;
  puVar1[1] = 0xa00000009;
  puVar1[2] = 0xc0000000b;
  puVar1[3] = 0xe0000000d;
  puVar1[4] = 0x100000000f;
  puVar1[5] = 0x1400000011;
  puVar1[6] = 0x1600000015;
  puVar1[7] = 0x1800000017;
  *(undefined4 *)(puVar1 + 8) = 0x19;
  *(undefined4 *)((long)puVar1 + 0x44) = 0x1a;
  *(undefined4 *)(puVar1 + 9) = 0x1b;
  *(undefined4 *)((long)puVar1 + 0x4c) = 0x1c;
  puVar1[10] = 0x1e0000001d;
  __this = (System_Collections_Generic_Dictionary_int__LayerMask__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_LayerMask);
  System_Collections_Generic_Dictionary_int__LayerMask____ctor(__this,MethodInfo_Dictionary_2_System_Int32_UnityEngine_LayerMask);
  lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
  *(System_Collections_Generic_Dictionary_int__LayerMask__o **)(lVar2 + 0x58) = __this;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x58,__this);
  return;
}


