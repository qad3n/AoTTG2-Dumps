// Type: ApplicationManagers.Changelog.AottgChangelogParser
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/AottgChangelogParser.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_3858360* method);
// 0x3958360

void ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor(void)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long in_RDX;
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 0x10) = *(undefined8 *)(in_RDX + 8);
  *(long *)(in_RDI + 0x28) = in_RDX;
  *(long *)(in_RDI + 0x20) = in_RSI;
  il2cpp_runtime_helper_022b4080(in_RDI + 0x20);
  cVar2 = *(char *)(in_RDX + 0x52);
  *(long *)(in_RDI + 0x40) = in_RDI;
  cVar1 = il2cpp_runtime_helper_022b2a80();
  if (cVar1 == '\0') {
    if (cVar2 == '\x01') {
      if (*(char *)(in_RDI + 0x70) == '\0') {
        *(undefined1 **)(in_RDI + 0x18) = &label_0208d300;
      }
      else {
        cVar2 = il2cpp_runtime_helper_02324e10();
        cVar1 = il2cpp_runtime_helper_022b3050();
        if (cVar2 == '\0') {
          if (cVar1 == '\0') {
            *(undefined1 **)(in_RDI + 0x18) = &label_0208d330;
          }
          else {
            *(undefined1 **)(in_RDI + 0x18) = &label_0208d370;
          }
        }
        else if (cVar1 == '\0') {
          *(undefined1 **)(in_RDI + 0x18) = &label_0208d400;
        }
        else {
          *(code **)(in_RDI + 0x18) = il2cpp_runtime_helper_0208d450;
        }
      }
      goto label_039583fa;
    }
    if (in_RSI == 0) {
      lVar3 = il2cpp_runtime_helper_0231a840(0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_runtime_helper_022b2b10(lVar3,0);
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
      return;
    }
  }
  else if (cVar2 == '\x02') {
    *(undefined1 **)(in_RDI + 0x18) = &label_0208d320;
    goto label_039583fa;
  }
  *(undefined8 *)(in_RDI + 0x18) = *(undefined8 *)(in_RDI + 0x10);
  *(undefined8 *)(in_RDI + 0x40) = *(undefined8 *)(in_RDI + 0x20);
label_039583fa:
  *(code **)(in_RDI + 0x38) = il2cpp_runtime_helper_0208d2b0;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$Invoke
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___Invoke (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, SimpleJSONFixed_JSONNode_o* node, Il2CppObject** value, const MethodInfo_3858460* method);
// 0x3958460

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___Invoke
          (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *__this,
          SimpleJSONFixed_JSONNode_o *node,Il2CppObject **value,MethodInfo_3858460 *method)

{
  code *vtableDispatch;
  bool_conflict bVar1;
  
  vtableDispatch = (code *)(__this->fields).invoke_impl;
  bVar1 = (*vtableDispatch)
                    ((__this->fields).method_code,node,value,(__this->fields).method,vtableDispatch);
  return bVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$BeginInvoke
// il2cpp: System_IAsyncResult_o* ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___BeginInvoke (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, SimpleJSONFixed_JSONNode_o* node, Il2CppObject** value, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo_3858480* method);
// 0x3958480

System_IAsyncResult_o *
ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___BeginInvoke
          (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *__this,
          SimpleJSONFixed_JSONNode_o *node,Il2CppObject **value,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo_3858480 *method)

{
  System_IAsyncResult_o *pSVar1;
  SimpleJSONFixed_JSONNode_o *local_18;
  Il2CppObject *local_10;
  undefined8 local_8;
  
  local_8 = 0;
  local_10 = *value;
  local_18 = node;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_0233b920(__this,&local_18,callback,object);
  return pSVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$EndInvoke
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___EndInvoke (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, Il2CppObject** value, System_IAsyncResult_o* result, const MethodInfo_38584B0* method);
// 0x39584b0

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___EndInvoke
          (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *__this,Il2CppObject **value,
          System_IAsyncResult_o *result,MethodInfo_38584B0 *method)

{
  int iVar1;
  int32_t iVar2;
  uint uVar3;
  bool_conflict bVar4;
  long lVar5;
  undefined1 *puVar6;
  System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__o *pSVar7;
  Il2CppClass *pIVar8;
  long lVar9;
  System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__o *__this_00;
  System_Object_array *pSVar10;
  System_Object_array_array *pSVar11;
  Il2CppClass *pIVar12;
  System_Object_array *pSVar13;
  ulong uVar14;
  System_Object_array *pSVar15;
  long lVar16;
  System_Object_array_array *pSVar17;
  System_Object_array_array *pSVar18;
  int32_t id;
  int32_t id_00;
  int32_t id_01;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  ulong extraout_RDX_03;
  int iVar19;
  uint uVar20;
  il2cpp_array_size_t iVar21;
  uint uVar22;
  Il2CppObject ***pppIVar23;
  MethodInfo_3786630 *pMVar24;
  MethodInfo_3786630 *pMVar25;
  Il2CppClass *pIVar26;
  Il2CppClass *pIVar27;
  MethodInfo_3786FB0 *pMVar28;
  MethodInfo_3786FB0 *pMVar29;
  System_Object_array *pSVar30;
  ulong in_R8;
  Il2CppClass *in_R9;
  System_Object_array *pSVar31;
  ulong uVar32;
  ulong uVar33;
  Il2CppArrayBounds *pIVar34;
  Il2CppObject **ppIStack_8;
  
  pppIVar23 = &ppIStack_8;
  ppIStack_8 = value;
  lVar5 = il2cpp_runtime_helper_0233bb60();
  if (lVar5 != 0) {
    puVar6 = (undefined1 *)il2cpp_runtime_helper_02305440(lVar5);
    return (bool_conflict)CONCAT71((int7)((ulong)puVar6 >> 8),*puVar6);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a951d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a951d = '\x01';
  }
  System_Object___ctor((Il2CppObject *)result,(MethodInfo *)0x0);
  iVar2 = System_Environment__get_ProcessorCount((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar3 = System_Math__Min_3cb7d70(iVar2,0x40,(MethodInfo *)0x0);
  pSVar7 = (System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__o *)
           **(long **)(*(long *)((long)pppIVar23 + 0x20) + 0xc0);
  if (((ulong)pSVar7[9].fields._arrays & 0x10000000000) == 0) {
    pSVar7 = (System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__o *)il2cpp_runtime_helper_023009c0();
  }
  pMVar24 = (MethodInfo_3786630 *)(ulong)uVar3;
  pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40();
  if (pIVar8 != (Il2CppClass *)0x0) {
    if (0 < *(int *)&(pIVar8->_1).namespaze) {
      lVar5 = 0;
      uVar32 = 0;
      do {
        lVar9 = *(long *)(*(long *)(*(long *)((long)pppIVar23 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = il2cpp_runtime_helper_023009c0();
        }
        __this_00 = (System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__o *)
                    il2cpp_runtime_helper_023052d0(lVar9);
        pMVar24 = *(MethodInfo_3786630 **)(*(long *)(*(long *)((long)pppIVar23 + 0x20) + 0xc0) + 0x10);
        pSVar7 = __this_00;
        System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_byte____ctor(__this_00,pMVar24);
        if (*(uint *)&(pIVar8->_1).namespaze <= uVar32) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_03958625;
        }
        (&(pIVar8->_1).byval_arg.data)[uVar32] = __this_00;
        il2cpp_runtime_helper_022b4080((long)&(pIVar8->_1).byval_arg.data + lVar5,__this_00);
        uVar32 = uVar32 + 1;
        lVar5 = lVar5 + 8;
      } while ((long)uVar32 < (long)*(int *)&(pIVar8->_1).namespaze);
    }
    ((Il2CppObject *)(result + 1))->klass = pIVar8;
    bVar4 = il2cpp_runtime_helper_022b4080((Il2CppObject *)(result + 1),pIVar8);
    return bVar4;
  }
label_03958625:
  il2cpp_runtime_helper_022b2c90();
  pMVar25 = pMVar24;
  if (g_data_057a951e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RuntimeThread);
    g_data_057a951e = '\x01';
  }
  pSVar11 = (pSVar7->fields)._arrays;
  if (*(int *)(TypeInfo_RuntimeThread + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar30 = (System_Object_array *)0x0;
  iVar2 = Internal_Runtime_Augments_RuntimeThread__GetCurrentProcessorId((MethodInfo *)0x0);
  if (pSVar11 != (System_Object_array_array *)0x0) {
    uVar3 = (uint)pSVar11->max_length;
    if (0 < (int)uVar3) {
      uVar32 = (long)iVar2 % (long)(int)uVar3 & 0xffffffff;
      iVar19 = 0;
      do {
        method = (MethodInfo_38584B0 *)(ulong)uVar3;
        uVar20 = (uint)uVar32;
        if (uVar3 <= uVar20) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_039586f4;
        }
        pSVar30 = pSVar11->m_Items[(int)uVar20];
        if (pSVar30 == (System_Object_array *)0x0) goto label_039586f4;
        pMVar25 = pMVar24;
        iVar2 = il2cpp_runtime_helper_02a21c30(pSVar30,pMVar24,
                             *(undefined8 *)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 0x30));
        if ((char)iVar2 != '\0') {
          return iVar2;
        }
        uVar3 = (uint)pSVar11->max_length;
        uVar32 = (ulong)(uVar20 + 1);
        if (uVar20 + 1 == uVar3) {
          uVar32 = 0;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < (int)uVar3);
    }
    return iVar2;
  }
label_039586f4:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a951f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RuntimeThread);
    g_data_057a951f = '\x01';
  }
  pIVar34 = pSVar30->bounds;
  if (*(int *)(TypeInfo_RuntimeThread + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar30 = (System_Object_array *)0x0;
  iVar2 = Internal_Runtime_Augments_RuntimeThread__GetCurrentProcessorId((MethodInfo *)0x0);
  if (pIVar34 == (Il2CppArrayBounds *)0x0) {
label_03958827:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar3 = pIVar34[1].lower_bound;
    method = (MethodInfo_38584B0 *)(ulong)uVar3;
    iVar19 = 0;
    if ((int)uVar3 < 1) {
      iVar21 = 0;
label_0395881b:
      return (bool_conflict)iVar21;
    }
    uVar32 = (long)iVar2 % (long)(int)uVar3 & 0xffffffff;
    if ((uint)((long)iVar2 % (long)(int)uVar3) < uVar3) {
      do {
        pSVar10 = (System_Object_array *)(&pIVar34[2].length)[(int)uVar32];
        if (pSVar10 == (System_Object_array *)0x0) goto label_03958827;
        pMVar25 = (MethodInfo_3786630 *)0x0;
        pSVar30 = pSVar10;
        System_Threading_Monitor__Enter((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
        iVar1 = (int)pSVar10->max_length;
        lVar5 = (long)iVar1;
        if (lVar5 < 1) {
          pMVar25 = (MethodInfo_3786630 *)0x0;
          System_Threading_Monitor__Exit((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
        }
        else {
          method = (MethodInfo_38584B0 *)
                   ((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__Fields *)
                   &pSVar10->bounds)->_arrays;
          uVar3 = iVar1 - 1;
          *(uint *)&pSVar10->max_length = uVar3;
          if ((System_Object_array_array *)method == (System_Object_array_array *)0x0) goto label_03958827;
          if ((uint)((System_Object_array_array *)method)->max_length <= uVar3) break;
          iVar21 = (&((System_Object_array_array *)method)->max_length)[lVar5];
          (&((System_Object_array_array *)method)->max_length)[lVar5] = 0;
          il2cpp_runtime_helper_022b4080(&((System_Object_array_array *)method)->max_length + lVar5);
          pMVar25 = (MethodInfo_3786630 *)0x0;
          System_Threading_Monitor__Exit((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
          if (iVar21 != 0) goto label_0395881b;
        }
        uVar22 = (int)uVar32 + 1;
        uVar3 = pIVar34[1].lower_bound;
        method = (MethodInfo_38584B0 *)(ulong)uVar3;
        iVar21 = 0;
        uVar20 = 0;
        if (uVar22 != uVar3) {
          uVar20 = uVar22;
        }
        iVar19 = iVar19 + 1;
        uVar32 = (ulong)uVar20;
        if ((int)uVar3 <= iVar19) goto label_0395881b;
        pSVar30 = pSVar10;
      } while (uVar20 < uVar3);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar11 = ((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__Fields *)&pSVar30->bounds)->
            _arrays;
  pSVar17 = (System_Object_array_array *)method;
  pMVar24 = pMVar25;
  uVar32 = in_R8;
  pIVar8 = in_R9;
  if (pSVar11 != (System_Object_array_array *)0x0) {
    uVar3 = (uint)pSVar11->max_length;
    uVar33 = (ulong)uVar3;
    if (in_R8 != 0) {
      if (0 < (int)uVar3) {
        uVar3 = 0;
        do {
          if (((uint)uVar33 <= uVar3) || (*(uint *)(in_R8 + 0x18) <= uVar3)) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_039588e6;
          }
          pSVar30 = pSVar11->m_Items[(int)uVar3];
          if (pSVar30 == (System_Object_array *)0x0) goto label_039588e6;
          uVar20 = *(uint *)(in_R8 + 0x20 + (long)(int)uVar3 * 4);
          uVar32 = (ulong)uVar20;
          pIVar8 = *(Il2CppClass **)(*(long *)((long)(in_R9->_1).byval_arg.data + 0xc0) + 0x48);
          pSVar17 = (System_Object_array_array *)((ulong)method & 0xffffffff);
          pMVar24 = (MethodInfo_3786630 *)((ulong)pMVar25 & 0xffffffff);
          System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_byte___Trim
                    ((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__o *)pSVar30,
                     (uint32_t)pMVar25,id,(int32_t)method,uVar20,(MethodInfo_3786320 *)pIVar8);
          uVar3 = uVar3 + 1;
          uVar20 = (uint)pSVar11->max_length;
          uVar33 = (ulong)uVar20;
        } while ((int)uVar3 < (int)uVar20);
      }
label_039588d0:
      return (bool_conflict)CONCAT71((int7)(uVar33 >> 8),1);
    }
    if ((int)uVar3 < 1) goto label_039588d0;
  }
label_039588e6:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9520 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a9520 = '\x01';
  }
  System_Object___ctor(&pSVar30->obj,(MethodInfo *)0x0);
  iVar2 = System_Environment__get_ProcessorCount((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar3 = System_Math__Min_3cb7d70(iVar2,0x40,(MethodInfo *)0x0);
  pSVar10 = (System_Object_array *)
            pMVar24->klass->rgctx_data->_0_System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T_;
  if ((*(byte *)((long)((Il2CppType *)pSVar10->m_Items + 0x11) + 5) & 1) == 0) {
    pSVar10 = (System_Object_array *)il2cpp_runtime_helper_023009c0();
  }
  pIVar12 = (Il2CppClass *)(ulong)uVar3;
  pSVar11 = (System_Object_array_array *)il2cpp_runtime_helper_022b2a40();
  if (pSVar11 != (System_Object_array_array *)0x0) {
    if (0 < (int)pSVar11->max_length) {
      lVar5 = 0;
      uVar33 = 0;
      do {
        pIVar12 = pMVar24->klass->rgctx_data->_1_System_Buffers_TlsOverPerCoreLockedStacksArrayPool_T_;
        if (((pIVar12->_2).field_0x6d & 1) == 0) {
          pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
        }
        pSVar13 = (System_Object_array *)il2cpp_runtime_helper_023052d0(pIVar12);
        pIVar12 = pMVar24->klass->rgctx_data->_2_System_Buffers_TlsOverPerCoreLockedStacksArrayPool_T_;
        pSVar10 = pSVar13;
        System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_char____ctor
                  ((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__o *)pSVar13,
                   (MethodInfo_3786AF0 *)pIVar12);
        if ((uint)pSVar11->max_length <= uVar33) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_03958a35;
        }
        pSVar11->m_Items[uVar33] = pSVar13;
        il2cpp_runtime_helper_022b4080((long)pSVar11->m_Items + lVar5,pSVar13);
        uVar33 = uVar33 + 1;
        lVar5 = lVar5 + 8;
      } while ((long)uVar33 < (long)(int)pSVar11->max_length);
    }
    ((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__Fields *)&pSVar30->bounds)->_arrays =
         pSVar11;
    bVar4 = il2cpp_runtime_helper_022b4080((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__Fields *)
                               &pSVar30->bounds,pSVar11);
    return bVar4;
  }
label_03958a35:
  il2cpp_runtime_helper_022b2c90();
  pIVar26 = pIVar12;
  if (g_data_057a9521 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RuntimeThread);
    g_data_057a9521 = '\x01';
  }
  pIVar34 = pSVar10->bounds;
  if (*(int *)(TypeInfo_RuntimeThread + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar21 = 0;
  iVar2 = Internal_Runtime_Augments_RuntimeThread__GetCurrentProcessorId((MethodInfo *)0x0);
  if (pIVar34 != (Il2CppArrayBounds *)0x0) {
    uVar3 = pIVar34[1].lower_bound;
    if (0 < (int)uVar3) {
      uVar33 = (long)iVar2 % (long)(int)uVar3 & 0xffffffff;
      iVar19 = 0;
      do {
        pSVar17 = (System_Object_array_array *)(ulong)uVar3;
        uVar20 = (uint)uVar33;
        if (uVar3 <= uVar20) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_03958b04;
        }
        iVar21 = (&pIVar34[2].length)[(int)uVar20];
        if (iVar21 == 0) goto label_03958b04;
        pIVar26 = pIVar12;
        iVar2 = il2cpp_runtime_helper_02a21f30(iVar21,pIVar12,
                             *(undefined8 *)(*(long *)(*(long *)(extraout_RDX_00 + 0x20) + 0xc0) + 0x30));
        if ((char)iVar2 != '\0') {
          return iVar2;
        }
        uVar3 = pIVar34[1].lower_bound;
        uVar33 = (ulong)(uVar20 + 1);
        if (uVar20 + 1 == uVar3) {
          uVar33 = 0;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < (int)uVar3);
    }
    return iVar2;
  }
label_03958b04:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9522 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RuntimeThread);
    g_data_057a9522 = '\x01';
  }
  lVar5 = *(long *)(iVar21 + 0x10);
  if (*(int *)(TypeInfo_RuntimeThread + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar30 = (System_Object_array *)0x0;
  iVar2 = Internal_Runtime_Augments_RuntimeThread__GetCurrentProcessorId((MethodInfo *)0x0);
  if (lVar5 == 0) {
label_03958c37:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar3 = *(uint *)(lVar5 + 0x18);
    pSVar17 = (System_Object_array_array *)(ulong)uVar3;
    iVar19 = 0;
    if ((int)uVar3 < 1) {
      iVar21 = 0;
label_03958c2b:
      return (bool_conflict)iVar21;
    }
    uVar33 = (long)iVar2 % (long)(int)uVar3 & 0xffffffff;
    if ((uint)((long)iVar2 % (long)(int)uVar3) < uVar3) {
      do {
        pSVar10 = *(System_Object_array **)(lVar5 + 0x20 + (long)(int)uVar33 * 8);
        if (pSVar10 == (System_Object_array *)0x0) goto label_03958c37;
        pIVar26 = (Il2CppClass *)0x0;
        pSVar30 = pSVar10;
        System_Threading_Monitor__Enter(&pSVar10->obj,(MethodInfo *)0x0);
        iVar1 = (int)pSVar10->max_length;
        lVar9 = (long)iVar1;
        if (lVar9 < 1) {
          pIVar26 = (Il2CppClass *)0x0;
          System_Threading_Monitor__Exit(&pSVar10->obj,(MethodInfo *)0x0);
        }
        else {
          pSVar17 = ((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__Fields *)
                    &pSVar10->bounds)->_arrays;
          uVar3 = iVar1 - 1;
          *(uint *)&pSVar10->max_length = uVar3;
          if (pSVar17 == (System_Object_array_array *)0x0) goto label_03958c37;
          if ((uint)pSVar17->max_length <= uVar3) break;
          iVar21 = (&pSVar17->max_length)[lVar9];
          (&pSVar17->max_length)[lVar9] = 0;
          il2cpp_runtime_helper_022b4080(&pSVar17->max_length + lVar9);
          pIVar26 = (Il2CppClass *)0x0;
          System_Threading_Monitor__Exit(&pSVar10->obj,(MethodInfo *)0x0);
          if (iVar21 != 0) goto label_03958c2b;
        }
        uVar22 = (int)uVar33 + 1;
        uVar3 = *(uint *)(lVar5 + 0x18);
        pSVar17 = (System_Object_array_array *)(ulong)uVar3;
        iVar21 = 0;
        uVar20 = 0;
        if (uVar22 != uVar3) {
          uVar20 = uVar22;
        }
        iVar19 = iVar19 + 1;
        uVar33 = (ulong)uVar20;
        if ((int)uVar3 <= iVar19) goto label_03958c2b;
        pSVar30 = pSVar10;
      } while (uVar20 < uVar3);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar11 = ((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__Fields *)&pSVar30->bounds)->
            _arrays;
  pSVar18 = pSVar17;
  pIVar27 = pIVar26;
  uVar33 = uVar32;
  pIVar12 = pIVar8;
  if (pSVar11 != (System_Object_array_array *)0x0) {
    uVar3 = (uint)pSVar11->max_length;
    uVar14 = (ulong)uVar3;
    if (uVar32 != 0) {
      if (0 < (int)uVar3) {
        uVar3 = 0;
        do {
          if (((uint)uVar14 <= uVar3) || (*(uint *)(uVar32 + 0x18) <= uVar3)) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_03958cf6;
          }
          pSVar30 = pSVar11->m_Items[(int)uVar3];
          if (pSVar30 == (System_Object_array *)0x0) goto label_03958cf6;
          uVar20 = *(uint *)(uVar32 + 0x20 + (long)(int)uVar3 * 4);
          uVar33 = (ulong)uVar20;
          pIVar12 = *(Il2CppClass **)(*(long *)((long)(pIVar8->_1).byval_arg.data + 0xc0) + 0x48);
          pSVar18 = (System_Object_array_array *)((ulong)pSVar17 & 0xffffffff);
          pIVar27 = (Il2CppClass *)((ulong)pIVar26 & 0xffffffff);
          System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_char___Trim
                    ((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__o *)pSVar30,
                     (uint32_t)pIVar26,id_00,(int32_t)pSVar17,uVar20,(MethodInfo_37867E0 *)pIVar12);
          uVar3 = uVar3 + 1;
          uVar20 = (uint)pSVar11->max_length;
          uVar14 = (ulong)uVar20;
        } while ((int)uVar3 < (int)uVar20);
      }
label_03958ce0:
      return (bool_conflict)CONCAT71((int7)(uVar14 >> 8),1);
    }
    if ((int)uVar3 < 1) goto label_03958ce0;
  }
label_03958cf6:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9523 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a9523 = '\x01';
  }
  System_Object___ctor(&pSVar30->obj,(MethodInfo *)0x0);
  iVar2 = System_Environment__get_ProcessorCount((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar3 = System_Math__Min_3cb7d70(iVar2,0x40,(MethodInfo *)0x0);
  pSVar10 = (System_Object_array *)**(undefined8 **)((long)(pIVar27->_1).byval_arg.data + 0xc0);
  if ((*(undefined1 *)((long)pSVar10->m_Items + 0x115) & 1) == 0) {
    pSVar10 = (System_Object_array *)il2cpp_runtime_helper_023009c0();
  }
  pMVar28 = (MethodInfo_3786FB0 *)(ulong)uVar3;
  pSVar11 = (System_Object_array_array *)il2cpp_runtime_helper_022b2a40();
  if (pSVar11 != (System_Object_array_array *)0x0) {
    if (0 < (int)pSVar11->max_length) {
      lVar5 = 0;
      uVar32 = 0;
      do {
        lVar9 = *(long *)(*(long *)((long)(pIVar27->_1).byval_arg.data + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = il2cpp_runtime_helper_023009c0();
        }
        pSVar13 = (System_Object_array *)il2cpp_runtime_helper_023052d0(lVar9);
        pMVar28 = *(MethodInfo_3786FB0 **)(*(long *)((long)(pIVar27->_1).byval_arg.data + 0xc0) + 0x10);
        pSVar10 = pSVar13;
        System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_int____ctor
                  ((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__o *)pSVar13,pMVar28);
        if ((uint)pSVar11->max_length <= uVar32) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_03958e45;
        }
        pSVar11->m_Items[uVar32] = pSVar13;
        il2cpp_runtime_helper_022b4080((long)pSVar11->m_Items + lVar5,pSVar13);
        uVar32 = uVar32 + 1;
        lVar5 = lVar5 + 8;
      } while ((long)uVar32 < (long)(int)pSVar11->max_length);
    }
    ((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__Fields *)&pSVar30->bounds)->_arrays =
         pSVar11;
    bVar4 = il2cpp_runtime_helper_022b4080((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__Fields *)
                               &pSVar30->bounds,pSVar11);
    return bVar4;
  }
label_03958e45:
  il2cpp_runtime_helper_022b2c90();
  pMVar29 = pMVar28;
  if (g_data_057a9524 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RuntimeThread);
    g_data_057a9524 = '\x01';
  }
  pIVar34 = pSVar10->bounds;
  if (*(int *)(TypeInfo_RuntimeThread + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar21 = 0;
  iVar2 = Internal_Runtime_Augments_RuntimeThread__GetCurrentProcessorId((MethodInfo *)0x0);
  if (pIVar34 != (Il2CppArrayBounds *)0x0) {
    uVar3 = pIVar34[1].lower_bound;
    if (0 < (int)uVar3) {
      uVar32 = (long)iVar2 % (long)(int)uVar3 & 0xffffffff;
      iVar19 = 0;
      do {
        pSVar18 = (System_Object_array_array *)(ulong)uVar3;
        uVar20 = (uint)uVar32;
        if (uVar3 <= uVar20) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_03958f14;
        }
        iVar21 = (&pIVar34[2].length)[(int)uVar20];
        if (iVar21 == 0) goto label_03958f14;
        pMVar29 = pMVar28;
        iVar2 = il2cpp_runtime_helper_02a22230(iVar21,pMVar28,
                             *(undefined8 *)(*(long *)(*(long *)(extraout_RDX_01 + 0x20) + 0xc0) + 0x30));
        if ((char)iVar2 != '\0') {
          return iVar2;
        }
        uVar3 = pIVar34[1].lower_bound;
        uVar32 = (ulong)(uVar20 + 1);
        if (uVar20 + 1 == uVar3) {
          uVar32 = 0;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < (int)uVar3);
    }
    return iVar2;
  }
label_03958f14:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9525 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RuntimeThread);
    g_data_057a9525 = '\x01';
  }
  lVar5 = *(long *)(iVar21 + 0x10);
  if (*(int *)(TypeInfo_RuntimeThread + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar30 = (System_Object_array *)0x0;
  iVar2 = Internal_Runtime_Augments_RuntimeThread__GetCurrentProcessorId((MethodInfo *)0x0);
  if (lVar5 == 0) {
label_03959047:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar3 = *(uint *)(lVar5 + 0x18);
    pSVar18 = (System_Object_array_array *)(ulong)uVar3;
    iVar19 = 0;
    if ((int)uVar3 < 1) {
      iVar21 = 0;
label_0395903b:
      return (bool_conflict)iVar21;
    }
    uVar32 = (long)iVar2 % (long)(int)uVar3 & 0xffffffff;
    if ((uint)((long)iVar2 % (long)(int)uVar3) < uVar3) {
      do {
        pSVar10 = *(System_Object_array **)(lVar5 + 0x20 + (long)(int)uVar32 * 8);
        if (pSVar10 == (System_Object_array *)0x0) goto label_03959047;
        pMVar29 = (MethodInfo_3786FB0 *)0x0;
        pSVar30 = pSVar10;
        System_Threading_Monitor__Enter(&pSVar10->obj,(MethodInfo *)0x0);
        iVar1 = (int)pSVar10->max_length;
        lVar9 = (long)iVar1;
        if (lVar9 < 1) {
          pMVar29 = (MethodInfo_3786FB0 *)0x0;
          System_Threading_Monitor__Exit(&pSVar10->obj,(MethodInfo *)0x0);
        }
        else {
          pSVar18 = ((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__Fields *)
                    &pSVar10->bounds)->_arrays;
          uVar3 = iVar1 - 1;
          *(uint *)&pSVar10->max_length = uVar3;
          if (pSVar18 == (System_Object_array_array *)0x0) goto label_03959047;
          if ((uint)pSVar18->max_length <= uVar3) break;
          iVar21 = (&pSVar18->max_length)[lVar9];
          (&pSVar18->max_length)[lVar9] = 0;
          il2cpp_runtime_helper_022b4080(&pSVar18->max_length + lVar9);
          pMVar29 = (MethodInfo_3786FB0 *)0x0;
          System_Threading_Monitor__Exit(&pSVar10->obj,(MethodInfo *)0x0);
          if (iVar21 != 0) goto label_0395903b;
        }
        uVar22 = (int)uVar32 + 1;
        uVar3 = *(uint *)(lVar5 + 0x18);
        pSVar18 = (System_Object_array_array *)(ulong)uVar3;
        iVar21 = 0;
        uVar20 = 0;
        if (uVar22 != uVar3) {
          uVar20 = uVar22;
        }
        iVar19 = iVar19 + 1;
        uVar32 = (ulong)uVar20;
        if ((int)uVar3 <= iVar19) goto label_0395903b;
        pSVar30 = pSVar10;
      } while (uVar20 < uVar3);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar11 = ((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__Fields *)&pSVar30->bounds)->
            _arrays;
  pSVar17 = pSVar18;
  pMVar28 = pMVar29;
  uVar32 = uVar33;
  pIVar8 = pIVar12;
  if (pSVar11 != (System_Object_array_array *)0x0) {
    uVar3 = (uint)pSVar11->max_length;
    uVar14 = (ulong)uVar3;
    if (uVar33 != 0) {
      if (0 < (int)uVar3) {
        uVar3 = 0;
        do {
          if (((uint)uVar14 <= uVar3) || (*(uint *)(uVar33 + 0x18) <= uVar3)) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_03959106;
          }
          pSVar30 = pSVar11->m_Items[(int)uVar3];
          if (pSVar30 == (System_Object_array *)0x0) goto label_03959106;
          uVar20 = *(uint *)(uVar33 + 0x20 + (long)(int)uVar3 * 4);
          uVar32 = (ulong)uVar20;
          pIVar8 = ((pIVar12->_1).byval_arg.data)->rgctx_data[1].
                   _0_System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T_;
          pSVar17 = (System_Object_array_array *)((ulong)pSVar18 & 0xffffffff);
          pMVar28 = (MethodInfo_3786FB0 *)((ulong)pMVar29 & 0xffffffff);
          System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_int___Trim
                    ((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__o *)pSVar30,
                     (uint32_t)pMVar29,id_01,(int32_t)pSVar18,uVar20,(MethodInfo_3786CA0 *)pIVar8);
          uVar3 = uVar3 + 1;
          uVar20 = (uint)pSVar11->max_length;
          uVar14 = (ulong)uVar20;
        } while ((int)uVar3 < (int)uVar20);
      }
label_039590f0:
      return (bool_conflict)CONCAT71((int7)(uVar14 >> 8),1);
    }
    if ((int)uVar3 < 1) goto label_039590f0;
  }
label_03959106:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9526 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a9526 = '\x01';
  }
  System_Object___ctor(&pSVar30->obj,(MethodInfo *)0x0);
  iVar2 = System_Environment__get_ProcessorCount((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar3 = System_Math__Min_3cb7d70(iVar2,0x40,(MethodInfo *)0x0);
  pSVar10 = (System_Object_array *)
            pMVar28->klass->rgctx_data->_0_System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T_;
  if ((*(byte *)((long)((Il2CppType *)pSVar10->m_Items + 0x11) + 5) & 1) == 0) {
    pSVar10 = (System_Object_array *)il2cpp_runtime_helper_023009c0();
  }
  pSVar13 = (System_Object_array *)(ulong)uVar3;
  pSVar11 = (System_Object_array_array *)il2cpp_runtime_helper_022b2a40();
  uVar3 = (uint)pSVar17;
  if (pSVar11 != (System_Object_array_array *)0x0) {
    if (0 < (int)pSVar11->max_length) {
      lVar5 = 0;
      uVar33 = 0;
      do {
        pIVar12 = pMVar28->klass->rgctx_data->_1_System_Buffers_TlsOverPerCoreLockedStacksArrayPool_T_;
        if (((pIVar12->_2).field_0x6d & 1) == 0) {
          pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
        }
        pSVar15 = (System_Object_array *)il2cpp_runtime_helper_023052d0(pIVar12);
        pSVar13 = (System_Object_array *)
                  pMVar28->klass->rgctx_data->_2_System_Buffers_TlsOverPerCoreLockedStacksArrayPool_T_;
        pSVar10 = pSVar15;
        (*((Il2CppClass_1 *)&pSVar13->obj)->image)();
        uVar3 = (uint)pSVar17;
        if ((uint)pSVar11->max_length <= uVar33) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_03959252;
        }
        pSVar11->m_Items[uVar33] = pSVar15;
        il2cpp_runtime_helper_022b4080((long)pSVar11->m_Items + lVar5,pSVar15);
        uVar33 = uVar33 + 1;
        lVar5 = lVar5 + 8;
      } while ((long)uVar33 < (long)(int)pSVar11->max_length);
    }
    ((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__Fields *)&pSVar30->bounds)->_arrays =
         pSVar11;
    bVar4 = il2cpp_runtime_helper_022b4080((System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T__Fields *)
                               &pSVar30->bounds,pSVar11);
    return bVar4;
  }
label_03959252:
  il2cpp_runtime_helper_022b2c90();
  pSVar30 = pSVar13;
  if (g_data_057a9527 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RuntimeThread);
    g_data_057a9527 = '\x01';
  }
  pIVar34 = pSVar10->bounds;
  if (*(int *)(TypeInfo_RuntimeThread + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar21 = 0;
  iVar2 = Internal_Runtime_Augments_RuntimeThread__GetCurrentProcessorId((MethodInfo *)0x0);
  if (pIVar34 != (Il2CppArrayBounds *)0x0) {
    uVar3 = pIVar34[1].lower_bound;
    if (0 < (int)uVar3) {
      pSVar10 = (System_Object_array *)((long)iVar2 % (long)(int)uVar3 & 0xffffffff);
      iVar19 = 0;
      do {
        uVar20 = (uint)pSVar10;
        if (uVar3 <= uVar20) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_03959321;
        }
        iVar21 = (&pIVar34[2].length)[(int)uVar20];
        if (iVar21 == 0) goto label_03959321;
        pSVar30 = pSVar13;
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(extraout_RDX_02 + 0x20) + 0xc0) + 0x30))();
        if ((char)iVar2 != '\0') {
          return iVar2;
        }
        uVar3 = pIVar34[1].lower_bound;
        pSVar10 = (System_Object_array *)(ulong)(uVar20 + 1);
        if (uVar20 + 1 == uVar3) {
          pSVar10 = (System_Object_array *)0x0;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < (int)uVar3);
    }
    return iVar2;
  }
label_03959321:
  il2cpp_runtime_helper_022b2c90();
  pSVar15 = pSVar30;
  if (g_data_057a9528 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RuntimeThread);
    g_data_057a9528 = '\x01';
  }
  lVar5 = *(long *)(iVar21 + 0x10);
  if (*(int *)(TypeInfo_RuntimeThread + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar9 = 0;
  iVar2 = Internal_Runtime_Augments_RuntimeThread__GetCurrentProcessorId((MethodInfo *)0x0);
  if (lVar5 != 0) {
    uVar3 = *(uint *)(lVar5 + 0x18);
    pSVar13 = (System_Object_array *)0x0;
    if (0 < (int)uVar3) {
      pSVar10 = (System_Object_array *)((long)iVar2 % (long)(int)uVar3 & 0xffffffff);
      iVar21 = 0;
      do {
        uVar20 = (uint)pSVar10;
        if (uVar3 <= uVar20) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_039593f2;
        }
        lVar9 = *(long *)(lVar5 + 0x20 + (long)(int)uVar20 * 8);
        if (lVar9 == 0) goto label_039593f2;
        pSVar15 = *(System_Object_array **)
                   (*(long *)((long)((Il2CppType *)pSVar30->m_Items)->data + 0xc0) + 0x38);
        lVar16 = (*((Il2CppClass_1 *)&pSVar15->obj)->image)();
        if (lVar16 != 0) {
          return (bool_conflict)lVar16;
        }
        uVar3 = *(uint *)(lVar5 + 0x18);
        pSVar10 = (System_Object_array *)(ulong)(uVar20 + 1);
        if (uVar20 + 1 == uVar3) {
          pSVar10 = pSVar13;
        }
        uVar20 = (int)iVar21 + 1;
        iVar21 = (il2cpp_array_size_t)uVar20;
      } while ((int)uVar20 < (int)uVar3);
    }
    return 0;
  }
label_039593f2:
  il2cpp_runtime_helper_022b2c90();
  lVar16 = *(long *)(lVar9 + 0x10);
  if (lVar16 != 0) {
    uVar20 = *(uint *)(lVar16 + 0x18);
    uVar33 = (ulong)uVar20;
    if (uVar32 == 0) {
      if (0 < (int)uVar20) goto label_039594a4;
    }
    else if (0 < (int)uVar20) {
      pSVar31 = (System_Object_array *)((ulong)pSVar15 & 0xffffffff);
      uVar20 = 0;
      do {
        if (((uint)uVar33 <= uVar20) || (*(uint *)(uVar32 + 0x18) <= uVar20)) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_039594a4;
        }
        lVar9 = *(long *)(lVar16 + 0x20 + (long)(int)uVar20 * 8);
        if (lVar9 == 0) goto label_039594a4;
        pIVar12 = ((pIVar8->_1).byval_arg.data)->rgctx_data[1].
                  _0_System_Buffers_TlsOverPerCoreLockedStacksArrayPool_LockedStack_T_;
        pSVar15 = pSVar31;
        (*(pIVar12->_1).image)
                  (lVar9,pSVar31,extraout_RDX_03 & 0xffffffff,uVar3,
                   *(undefined4 *)(uVar32 + 0x20 + (long)(int)uVar20 * 4),pIVar12,pIVar8,iVar21,lVar5,pIVar34,
                   pSVar30,pSVar13,pSVar10);
        uVar20 = uVar20 + 1;
        uVar33 = (ulong)*(uint *)(lVar16 + 0x18);
      } while ((int)uVar20 < (int)*(uint *)(lVar16 + 0x18));
    }
    return (bool_conflict)CONCAT71((int7)(uVar33 >> 8),1);
  }
label_039594a4:
  il2cpp_runtime_helper_022b2c90();
  *(System_Object_array **)(lVar9 + 0x70) = pSVar15;
  bVar4 = il2cpp_runtime_helper_022b4080(lVar9 + 0x70);
  return bVar4;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseLatestVersion
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseLatestVersion (System_String_o* json, ApplicationManagers_Changelog_LatestChangelogVersionResponse_o** version, System_String_o** error, const MethodInfo* method);
// 0x44c8bf0

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__TryParseLatestVersion
          (System_String_o *json,ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **version,
          System_String_o **error,MethodInfo *method)

{
  bool_conflict bVar1;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *parser;
  
  if (g_data_057aeae9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParseLatestVersion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_LatestChangelogVersionResponse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Parser_LatestChangelogVersionResponse);
    g_data_057aeae9 = '\x01';
  }
  parser = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Parser_LatestChangelogVersionResponse);
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor();
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                    (json,parser,(Il2CppObject **)version,error,MethodInfo_Boolean_TryParse_LatestChangelogVersionResponse);
  return bVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseEntry
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseEntry (System_String_o* json, ApplicationManagers_Changelog_ChangelogEntryResponse_o** entry, System_String_o** error, const MethodInfo* method);
// 0x44c8c90

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__TryParseEntry
          (System_String_o *json,ApplicationManagers_Changelog_ChangelogEntryResponse_o **entry,
          System_String_o **error,MethodInfo *method)

{
  bool_conflict bVar1;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *parser;
  
  if (g_data_057aeaea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParseEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_ChangelogEntryResponse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Parser_ChangelogEntryResponse);
    g_data_057aeaea = '\x01';
  }
  parser = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Parser_ChangelogEntryResponse);
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor();
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                    (json,parser,(Il2CppObject **)entry,error,MethodInfo_Boolean_TryParse_ChangelogEntryResponse);
  return bVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseList
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseList (System_String_o* json, ApplicationManagers_Changelog_PublicChangelogListResponse_o** list, System_String_o** error, const MethodInfo* method);
// 0x44c8d30

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__TryParseList
          (System_String_o *json,ApplicationManagers_Changelog_PublicChangelogListResponse_o **list,
          System_String_o **error,MethodInfo *method)

{
  bool_conflict bVar1;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *parser;
  
  if (g_data_057aeaeb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParseList);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_PublicChangelogListResponse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Parser_PublicChangelogListResponse);
    g_data_057aeaeb = '\x01';
  }
  parser = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Parser_PublicChangelogListResponse);
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor();
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                    (json,parser,(Il2CppObject **)list,error,MethodInfo_Boolean_TryParse_PublicChangelogListResponse);
  return bVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseLatestVersion
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseLatestVersion (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Changelog_LatestChangelogVersionResponse_o** version, const MethodInfo* method);
// 0x44c8dd0

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__TryParseLatestVersion_43c8dd0
          (SimpleJSONFixed_JSONNode_o *node,
          ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **version,MethodInfo *method)

{
  code *vtableDispatch;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  char cVar4;
  bool_conflict bVar5;
  long *plVar6;
  ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *__this;
  System_String_o **in_RCX;
  MethodInfo *extraout_RDX;
  System_String_o **value;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *node_00;
  System_Guid_Fields SStack_b0;
  SimpleJSONFixed_JSONNode_o *pSStack_a0;
  undefined8 uStack_98;
  SimpleJSONFixed_JSONNode_o *pSStack_90;
  ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **ppAStack_88;
  System_String_o *pSStack_80;
  System_String_o *pSStack_78;
  System_String_o *pSStack_70;
  System_String_o *pSStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  System_Guid_Fields SStack_48;
  
  if (g_data_057aeaec == '\0') {
    pSStack_80 = (System_String_o *)0x44c8df9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LatestChangelogVersionResponse);
    pSStack_80 = (System_String_o *)0x44c8e05;
    il2cpp_runtime_helper_023445d0(&"contentHash");
    pSStack_80 = (System_String_o *)0x44c8e11;
    il2cpp_runtime_helper_023445d0(&"id");
    pSStack_80 = (System_String_o *)0x44c8e1d;
    il2cpp_runtime_helper_023445d0(&"publishedAt");
    pSStack_80 = (System_String_o *)0x44c8e29;
    il2cpp_runtime_helper_023445d0(&"version");
    pSStack_80 = (System_String_o *)0x44c8e35;
    il2cpp_runtime_helper_023445d0(&"hasChangelog");
    pSStack_80 = (System_String_o *)0x44c8e41;
    il2cpp_runtime_helper_023445d0(&"updatedAt");
    g_data_057aeaec = '\x01';
    method = extraout_RDX;
  }
  pSStack_78 = (System_String_o *)0x0;
  pSStack_58 = (System_String_o *)0x0;
  pSStack_60 = (System_String_o *)0x0;
  pSStack_68 = (System_String_o *)0x0;
  pSStack_70 = (System_String_o *)0x0;
  *version = (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0;
  pSStack_80 = (System_String_o *)0x44c8e85;
  il2cpp_runtime_helper_022b4080(version,0,method);
  if (g_data_057aeaf0 == '\0') {
    pSStack_80 = (System_String_o *)0x44c8e9a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeaf0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStack_80 = (System_String_o *)0x44c8eb9;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = (System_String_o *)0x0;
  pSStack_80 = (System_String_o *)0x44c8ec7;
  a = node;
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return 0;
  }
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044c935c;
  pSStack_80 = (System_String_o *)0x44c8eeb;
  cVar4 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                    (node,(node->klass->vtable)._17_get_IsObject.method);
  if (cVar4 != '\0') {
    pSVar7 = (System_String_o *)&"hasChangelog";
    pSStack_80 = (System_String_o *)0x44c8f10;
    cVar4 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,"hasChangelog",(node->klass->vtable)._28_HasKey.method);
    if (cVar4 != '\0') {
      pSStack_80 = (System_String_o *)0x44c8f2e;
      a = node;
      plVar6 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                 (node,"hasChangelog",(node->klass->vtable)._7_get_Item.method);
      if (plVar6 == (long *)0x0) {
label_044c935c:
        pSStack_80 = (System_String_o *)0x44c9361;
        il2cpp_runtime_helper_022b2c90();
        pSStack_80 = pSVar7;
        if (g_data_057aeaf0 == '\0') {
          ppAStack_88 = (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **)0x44c9389;
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
          g_data_057aeaf0 = '\x01';
        }
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          ppAStack_88 = (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **)0x44c93a8;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = (System_String_o *)0x0;
        ppAStack_88 = (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **)0x44c93b4;
        pSVar8 = a;
        bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return 0;
        }
        if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
          bVar5 = (*(a->klass->vtable)._17_get_IsObject.methodPtr)
                            (a,(a->klass->vtable)._17_get_IsObject.method);
          return bVar5;
        }
        ppAStack_88 = (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **)0x44c93dd;
        uStack_98 = il2cpp_runtime_helper_022b2c90();
        node_00 = pSVar8;
        pSStack_90 = a;
        ppAStack_88 = version;
        if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          pSStack_a0 = (SimpleJSONFixed_JSONNode_o *)0x44c93ff;
          cVar4 = (*(pSVar8->klass->vtable)._28_HasKey.methodPtr)();
          if (cVar4 == '\0') {
            return 0;
          }
          pSStack_a0 = (SimpleJSONFixed_JSONNode_o *)0x44c9419;
          plVar6 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar8,pSVar7,(pSVar8->klass->vtable)._7_get_Item.method);
          a = pSVar8;
          if (plVar6 != (long *)0x0) {
            vtableDispatch = *(code **)(*plVar6 + 0x228);
            bVar5 = (*vtableDispatch)(plVar6,*(undefined8 *)(*plVar6 + 0x230),vtableDispatch);
            return bVar5;
          }
        }
        pSStack_a0 = (SimpleJSONFixed_JSONNode_o *)0x44c944a;
        il2cpp_runtime_helper_022b2c90();
        SStack_b0._a = 0;
        SStack_b0._b = 0;
        SStack_b0._c = 0;
        SStack_b0._d = '\0';
        SStack_b0._e = '\0';
        SStack_b0._f = '\0';
        SStack_b0._g = '\0';
        SStack_b0._h = '\0';
        SStack_b0._i = '\0';
        SStack_b0._j = '\0';
        SStack_b0._k = '\0';
        pSStack_a0 = a;
        bVar5 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                          (node_00,pSVar7,value,(MethodInfo *)in_RCX);
        if ((char)bVar5 == '\0') {
          return 0;
        }
        bVar5 = System_Guid__TryParse(*value,(System_Guid_o *)&SStack_b0,(MethodInfo *)0x0);
        return bVar5;
      }
      in_RCX = (System_String_o **)*plVar6;
      pSStack_80 = (System_String_o *)0x44c8f4a;
      cVar4 = (*((MethodInfo *)((long)in_RCX + 0x210))->virtualMethodPointer)
                        (plVar6,((MethodInfo *)((long)in_RCX + 0x210))->invoker_method);
      if (cVar4 != '\0') {
        pSStack_80 = (System_String_o *)0x44c8f68;
        a = node;
        plVar6 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                   (node,"hasChangelog",(node->klass->vtable)._7_get_Item.method);
        if (plVar6 == (long *)0x0) goto label_044c935c;
        pSStack_80 = (System_String_o *)0x44c8f84;
        cVar4 = (**(code **)(*plVar6 + 0x3a8))(plVar6,*(undefined8 *)(*plVar6 + 0x3b0));
        pSVar7 = "id";
        in_RCX = &"id";
        if (cVar4 == '\0') {
          pSStack_80 = (System_String_o *)0x44c9104;
          cVar4 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                            (node,"id",(node->klass->vtable)._28_HasKey.method);
          if (cVar4 != '\0') {
            pSStack_80 = (System_String_o *)0x44c9122;
            a = node;
            plVar6 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                       (node,pSVar7,(node->klass->vtable)._7_get_Item.method);
            if (plVar6 == (long *)0x0) goto label_044c935c;
            in_RCX = (System_String_o **)*plVar6;
            pSStack_80 = (System_String_o *)0x44c913e;
            cVar4 = (*(code *)((MethodInfo *)((long)in_RCX + 0x210))->name)
                              (plVar6,((MethodInfo *)((long)in_RCX + 0x210))->klass);
            pSVar7 = "version";
            if (cVar4 != '\0') {
              pSStack_80 = (System_String_o *)0x44c9166;
              cVar4 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                                (node,"version",(node->klass->vtable)._28_HasKey.method);
              if (cVar4 != '\0') {
                pSStack_80 = (System_String_o *)0x44c9184;
                a = node;
                plVar6 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                           (node,pSVar7,(node->klass->vtable)._7_get_Item.method);
                if (plVar6 == (long *)0x0) goto label_044c935c;
                in_RCX = (System_String_o **)*plVar6;
                pSStack_80 = (System_String_o *)0x44c91a0;
                cVar4 = (*(code *)((MethodInfo *)((long)in_RCX + 0x210))->name)
                                  (plVar6,((MethodInfo *)((long)in_RCX + 0x210))->klass);
                pSVar7 = "contentHash";
                if (cVar4 != '\0') {
                  pSStack_80 = (System_String_o *)0x44c91c8;
                  cVar4 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                                    (node,"contentHash",(node->klass->vtable)._28_HasKey.method);
                  if (cVar4 != '\0') {
                    pSStack_80 = (System_String_o *)0x44c91e6;
                    a = node;
                    plVar6 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                               (node,pSVar7,(node->klass->vtable)._7_get_Item.method);
                    if (plVar6 == (long *)0x0) goto label_044c935c;
                    in_RCX = (System_String_o **)*plVar6;
                    pSStack_80 = (System_String_o *)0x44c9202;
                    cVar4 = (*(code *)((MethodInfo *)((long)in_RCX + 0x210))->name)
                                      (plVar6,((MethodInfo *)((long)in_RCX + 0x210))->klass);
                    pSVar7 = "publishedAt";
                    if (cVar4 != '\0') {
                      pSStack_80 = (System_String_o *)0x44c922a;
                      cVar4 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                                        (node,"publishedAt",(node->klass->vtable)._28_HasKey.method);
                      if (cVar4 != '\0') {
                        pSStack_80 = (System_String_o *)0x44c9248;
                        a = node;
                        plVar6 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                                   (node,pSVar7,(node->klass->vtable)._7_get_Item.method);
                        if (plVar6 == (long *)0x0) goto label_044c935c;
                        in_RCX = (System_String_o **)*plVar6;
                        pSStack_80 = (System_String_o *)0x44c9264;
                        cVar4 = (*(code *)((MethodInfo *)((long)in_RCX + 0x210))->name)
                                          (plVar6,((MethodInfo *)((long)in_RCX + 0x210))->klass);
                        pSVar7 = "updatedAt";
                        if (cVar4 != '\0') {
                          pSStack_80 = (System_String_o *)0x44c928c;
                          cVar4 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                                            (node,"updatedAt",(node->klass->vtable)._28_HasKey.method);
                          if (cVar4 != '\0') {
                            pSStack_80 = (System_String_o *)0x44c92aa;
                            plVar6 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                                       (node,pSVar7,(node->klass->vtable)._7_get_Item.method);
                            a = node;
                            if (plVar6 == (long *)0x0) goto label_044c935c;
                            pSStack_80 = (System_String_o *)0x44c92c6;
                            cVar4 = (**(code **)(*plVar6 + 0x228))(plVar6);
                            if (cVar4 != '\0') {
                              pSStack_80 = (System_String_o *)0x44c92d9;
                              __this = (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)
                                       il2cpp_runtime_helper_023052d0(TypeInfo_LatestChangelogVersionResponse);
                              pSStack_80 = (System_String_o *)0x44c92e6;
                              System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                              *(undefined1 *)&(__this->fields)._HasChangelog_k__BackingField = 0;
                              (__this->fields)._Id_k__BackingField = (System_String_o *)0x0;
                              pSStack_80 = (System_String_o *)0x44c92fd;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._Id_k__BackingField,0);
                              (__this->fields)._Version_k__BackingField = (System_String_o *)0x0;
                              pSStack_80 = (System_String_o *)0x44c9310;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._Version_k__BackingField,0);
                              (__this->fields)._ContentHash_k__BackingField = (System_String_o *)0x0;
                              pSStack_80 = (System_String_o *)0x44c9323;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._ContentHash_k__BackingField,0);
                              (__this->fields)._PublishedAt_k__BackingField = (System_String_o *)0x0;
                              pSStack_80 = (System_String_o *)0x44c9336;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._PublishedAt_k__BackingField,0);
                              (__this->fields)._UpdatedAt_k__BackingField = (System_String_o *)0x0;
                              pSVar7 = (System_String_o *)0x0;
                              goto label_044c90d4;
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
        else {
          SStack_48._a = 0;
          SStack_48._b = 0;
          SStack_48._c = 0;
          SStack_48._d = '\0';
          SStack_48._e = '\0';
          SStack_48._f = '\0';
          SStack_48._g = '\0';
          SStack_48._h = '\0';
          SStack_48._i = '\0';
          SStack_48._j = '\0';
          SStack_48._k = '\0';
          pSStack_80 = (System_String_o *)0x44c8fac;
          bVar5 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                            (node,"id",&pSStack_78,(MethodInfo *)&"id");
          if ((char)bVar5 != '\0') {
            pSStack_80 = (System_String_o *)0x44c8fc6;
            bVar5 = System_Guid__TryParse(pSStack_78,(System_Guid_o *)&SStack_48,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              return 0;
            }
            pSStack_80 = (System_String_o *)0x44c8fe5;
            bVar5 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                              (node,"version",&pSStack_58,(MethodInfo *)in_RCX);
            if ((char)bVar5 != '\0') {
              pSStack_80 = (System_String_o *)0x44c9004;
              bVar5 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                (node,"contentHash",&pSStack_60,(MethodInfo *)in_RCX);
              if ((char)bVar5 != '\0') {
                pSStack_80 = (System_String_o *)0x44c9023;
                bVar5 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                  (node,"publishedAt",&pSStack_68,(MethodInfo *)in_RCX);
                if ((char)bVar5 != '\0') {
                  pSStack_80 = (System_String_o *)0x44c9042;
                  bVar5 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                    (node,"updatedAt",&pSStack_70,(MethodInfo *)in_RCX);
                  pSVar3 = pSStack_58;
                  pSVar2 = pSStack_60;
                  pSVar1 = pSStack_68;
                  pSVar7 = pSStack_78;
                  if ((char)bVar5 != '\0') {
                    pSStack_50 = pSStack_70;
                    pSStack_80 = (System_String_o *)0x44c9076;
                    __this = (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)
                             il2cpp_runtime_helper_023052d0(TypeInfo_LatestChangelogVersionResponse);
                    pSStack_80 = (System_String_o *)0x44c9083;
                    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    *(undefined1 *)&(__this->fields)._HasChangelog_k__BackingField = 1;
                    (__this->fields)._Id_k__BackingField = pSVar7;
                    pSStack_80 = (System_String_o *)0x44c9097;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._Id_k__BackingField,pSVar7);
                    (__this->fields)._Version_k__BackingField = pSVar3;
                    pSStack_80 = (System_String_o *)0x44c90a7;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._Version_k__BackingField,pSVar3);
                    (__this->fields)._ContentHash_k__BackingField = pSVar2;
                    pSStack_80 = (System_String_o *)0x44c90b7;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._ContentHash_k__BackingField,pSVar2);
                    (__this->fields)._PublishedAt_k__BackingField = pSVar1;
                    pSStack_80 = (System_String_o *)0x44c90c7;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._PublishedAt_k__BackingField,pSVar1);
                    (__this->fields)._UpdatedAt_k__BackingField = pSStack_50;
                    pSVar7 = pSStack_50;
label_044c90d4:
                    pSStack_80 = (System_String_o *)0x44c90d9;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._UpdatedAt_k__BackingField,pSVar7);
                    *version = __this;
                    pSStack_80 = (System_String_o *)0x44c90e7;
                    il2cpp_runtime_helper_022b4080(version,__this);
                    return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseEntry
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseEntry (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Changelog_ChangelogEntryResponse_o** entry, const MethodInfo* method);
// 0x44c9580

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__TryParseEntry_43c9580
          (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_Changelog_ChangelogEntryResponse_o **entry,
          MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  Il2CppMethodPointer pIVar6;
  code *pcVar7;
  void *pvVar8;
  Il2CppClass *pIVar9;
  void *pvVar10;
  MethodInfo *pMVar11;
  Il2CppClass **ppIVar12;
  MethodInfo_362C220 *method_00;
  char cVar13;
  uint uVar14;
  bool_conflict bVar15;
  int32_t capacity;
  int iVar16;
  System_String_o *__this;
  System_Collections_Generic_List_object__c *pSVar17;
  long *plVar18;
  Il2CppObject *pIVar19;
  ulong uVar20;
  undefined8 *puVar21;
  System_Collections_Generic_List_object__o *pSVar22;
  System_Collections_Generic_List_object__o *pSVar23;
  System_Object_array *pSVar24;
  Il2CppClass *pIVar25;
  undefined8 uVar26;
  System_Collections_Generic_List_object__c *in_RCX;
  MethodInfo *pMVar27;
  System_Collections_Generic_List_object__o *extraout_RDX;
  int *extraout_RDX_00;
  int32_t *value;
  System_Collections_Generic_List_object__o *unaff_RBX;
  MethodInfo **__this_00;
  undefined8 unaff_RBP;
  MethodInfo *pMVar28;
  System_Collections_Generic_List_object__o *pSVar29;
  System_Collections_Generic_List_object__o *node_00;
  void *in_R8;
  MethodInfo *unaff_R12;
  undefined8 unaff_R13;
  System_Collections_Generic_List_object__o *unaff_R14;
  MethodInfo *unaff_R15;
  undefined1 auVar30 [16];
  
  while( true ) {
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(MethodInfo **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(MethodInfo **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x30) = unaff_RBX;
    if (g_data_057aeaed == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c95a9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChangelogEntryResponse);
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c95b5;
      il2cpp_runtime_helper_023445d0(&"contentHash");
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c95c1;
      il2cpp_runtime_helper_023445d0(&"contentMarkdown");
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c95cd;
      il2cpp_runtime_helper_023445d0(&"id");
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c95d9;
      il2cpp_runtime_helper_023445d0(&"createdAt");
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c95e5;
      il2cpp_runtime_helper_023445d0(&"publishedAt");
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c95f1;
      il2cpp_runtime_helper_023445d0(&"version");
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c95fd;
      il2cpp_runtime_helper_023445d0(&"updatedAt");
      g_data_057aeaed = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
    ((MethodInfo *)entry)->methodPointer = (Il2CppMethodPointer)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c9653;
    il2cpp_runtime_helper_022b4080(entry);
    if (g_data_057aeaf0 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c9668;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057aeaf0 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c9687;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R15 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c9695;
    unaff_RBX = (System_Collections_Generic_List_object__o *)node;
    bVar15 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      return 0;
    }
    if ((System_Collections_Generic_List_object__o *)node != (System_Collections_Generic_List_object__o *)0x0)
    {
      pMVar27 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable).
                _17_System_Collections_IEnumerable_GetEnumerator.method;
      pIVar6 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable).
               _17_System_Collections_IEnumerable_GetEnumerator.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c96b9;
      cVar13 = (*pIVar6)(node,pMVar27);
      if (cVar13 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c96e0;
      bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                         (node,"id",(System_String_o **)((long)register0x00000020 + -0x90),
                          (MethodInfo *)in_RCX);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c96fb;
      bVar15 = System_Guid__TryParse
                         (*(System_String_o **)((long)register0x00000020 + -0x90),
                          (System_Guid_o *)((long)register0x00000020 + -0x48),(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c971a;
      bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                         (node,"version",(System_String_o **)((long)register0x00000020 + -0x68),
                          (MethodInfo *)in_RCX);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c9739;
      bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                         (node,"contentMarkdown",(System_String_o **)((long)register0x00000020 + -0x70),
                          (MethodInfo *)in_RCX);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c9758;
      bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                         (node,"contentHash",(System_String_o **)((long)register0x00000020 + -0x78),
                          (MethodInfo *)in_RCX);
      unaff_R12 = "publishedAt";
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c977e;
      il2cpp_runtime_helper_022b4080((undefined1 *)((long)register0x00000020 + -0x98),0);
      pMVar27 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._28_RemoveAt.method;
      pIVar6 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._28_RemoveAt.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c9794;
      cVar13 = (*pIVar6)(node,unaff_R12,pMVar27);
      if (cVar13 == '\0') {
        return 0;
      }
      pMVar27 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._7_Insert.method;
      pIVar6 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._7_Insert.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c97b2;
      unaff_R15 = unaff_R12;
      unaff_RBX = (System_Collections_Generic_List_object__o *)node;
      plVar18 = (long *)(*pIVar6)(node,unaff_R12,pMVar27);
      if (plVar18 != (long *)0x0) {
        pMVar27 = (MethodInfo *)*plVar18;
        pIVar25 = pMVar27[6].klass;
        pcVar7 = (code *)pMVar27[6].name;
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c97ce;
        cVar13 = (*pcVar7)(plVar18,pIVar25);
        if (cVar13 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c97e0;
          bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                             (node,(System_String_o *)unaff_R12,
                              (System_String_o **)((long)register0x00000020 + -0x98),pMVar27);
          if ((char)bVar15 == '\0') {
            return 0;
          }
        }
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c97ff;
        bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                           (node,"createdAt",(System_String_o **)((long)register0x00000020 + -0x80),pMVar27);
        if ((char)bVar15 == '\0') {
          return 0;
        }
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c981e;
        bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                           (node,"updatedAt",(System_String_o **)((long)register0x00000020 + -0x88),pMVar27);
        if ((char)bVar15 == '\0') {
          return 0;
        }
        pIVar25 = *(Il2CppClass **)((long)register0x00000020 + -0x90);
        pvVar8 = *(void **)((long)register0x00000020 + -0x68);
        pIVar9 = *(Il2CppClass **)((long)register0x00000020 + -0x70);
        pvVar10 = *(void **)((long)register0x00000020 + -0x78);
        *(undefined8 *)((long)register0x00000020 + -0x60) = *(undefined8 *)((long)register0x00000020 + -0x98);
        *(undefined8 *)((long)register0x00000020 + -0x58) = *(undefined8 *)((long)register0x00000020 + -0x80);
        *(undefined8 *)((long)register0x00000020 + -0x50) = *(undefined8 *)((long)register0x00000020 + -0x88);
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c9866;
        pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ChangelogEntryResponse);
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c9873;
        System_Object___ctor(pIVar19,(MethodInfo *)0x0);
        pIVar19[1].klass = pIVar25;
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c9883;
        il2cpp_runtime_helper_022b4080(pIVar19 + 1,pIVar25);
        pIVar19[1].monitor = pvVar8;
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c9893;
        il2cpp_runtime_helper_022b4080(&pIVar19[1].monitor,pvVar8);
        pIVar19[2].klass = pIVar9;
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c98a3;
        il2cpp_runtime_helper_022b4080(pIVar19 + 2,pIVar9);
        pIVar19[2].monitor = pvVar10;
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c98b3;
        il2cpp_runtime_helper_022b4080(&pIVar19[2].monitor,pvVar10);
        pIVar19[3].klass = *(Il2CppClass **)((long)register0x00000020 + -0x60);
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c98c5;
        il2cpp_runtime_helper_022b4080(pIVar19 + 3);
        pIVar19[3].monitor = *(void **)((long)register0x00000020 + -0x58);
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c98d7;
        il2cpp_runtime_helper_022b4080(&pIVar19[3].monitor);
        pIVar19[4].klass = *(Il2CppClass **)((long)register0x00000020 + -0x50);
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c98e9;
        il2cpp_runtime_helper_022b4080(pIVar19 + 4);
        ((MethodInfo *)entry)->methodPointer = (Il2CppMethodPointer)pIVar19;
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c98f7;
        il2cpp_runtime_helper_022b4080(entry,pIVar19);
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar19 >> 8),1);
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x44c9913;
    il2cpp_runtime_helper_022b2c90();
    *(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0xa0) = node;
    *(ApplicationManagers_Changelog_ChangelogEntryResponse_o ***)((long)register0x00000020 + -0xa8) = entry;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
    extraout_RDX->klass = (System_Collections_Generic_List_object__c *)0x0;
    pMVar27 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c993f;
    pSVar29 = extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    if (unaff_RBX == (System_Collections_Generic_List_object__o *)0x0) break;
    pMVar27 = (unaff_RBX->klass->vtable)._28_RemoveAt.method;
    pIVar6 = (unaff_RBX->klass->vtable)._28_RemoveAt.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c995a;
    cVar13 = (*pIVar6)(unaff_RBX,unaff_R15,pMVar27);
    if (cVar13 == '\0') {
      return 0;
    }
    pMVar28 = (unaff_RBX->klass->vtable)._7_Insert.method;
    pIVar6 = (unaff_RBX->klass->vtable)._7_Insert.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9974;
    pMVar27 = unaff_R15;
    pSVar29 = unaff_RBX;
    plVar18 = (long *)(*pIVar6)(unaff_RBX,unaff_R15,pMVar28);
    if (plVar18 == (long *)0x0) break;
    uVar26 = *(undefined8 *)(*plVar18 + 0x230);
    pcVar7 = *(code **)(*plVar18 + 0x228);
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c998c;
    uVar20 = (*pcVar7)(plVar18,uVar26);
    in_RCX = (System_Collections_Generic_List_object__c *)(uVar20 & 0xffffffff);
    if ((char)in_RCX != '\0') {
      return (bool_conflict)CONCAT71((int7)(uVar20 >> 8),1);
    }
    *(undefined8 *)((long)register0x00000020 + -0xa0) = *(undefined8 *)((long)register0x00000020 + -0xa0);
    *(undefined8 *)((long)register0x00000020 + -0xa8) = *(undefined8 *)((long)register0x00000020 + -0xa8);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = *(undefined8 *)((long)register0x00000020 + -0xb0);
    extraout_RDX->klass = (System_Collections_Generic_List_object__c *)0x0;
    entry = (ApplicationManagers_Changelog_ChangelogEntryResponse_o **)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c94af;
    node = (SimpleJSONFixed_JSONNode_o *)extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    if (unaff_RBX != (System_Collections_Generic_List_object__o *)0x0) {
      pMVar27 = (unaff_RBX->klass->vtable)._28_RemoveAt.method;
      pIVar6 = (unaff_RBX->klass->vtable)._28_RemoveAt.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c94ce;
      cVar13 = (*pIVar6)(unaff_RBX,unaff_R15,pMVar27);
      if (cVar13 == '\0') {
        return 0;
      }
      pMVar27 = (unaff_RBX->klass->vtable)._7_Insert.method;
      pIVar6 = (unaff_RBX->klass->vtable)._7_Insert.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c94ec;
      entry = (ApplicationManagers_Changelog_ChangelogEntryResponse_o **)unaff_R15;
      node = (SimpleJSONFixed_JSONNode_o *)unaff_RBX;
      plVar18 = (long *)(*pIVar6)(unaff_RBX,unaff_R15,pMVar27);
      if (plVar18 != (long *)0x0) {
        in_RCX = (System_Collections_Generic_List_object__c *)*plVar18;
        pMVar27 = (in_RCX->vtable)._13_Contains.method;
        pIVar6 = (in_RCX->vtable)._13_Contains.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9504;
        cVar13 = (*pIVar6)(plVar18,pMVar27);
        if (cVar13 == '\0') {
          return 0;
        }
        pMVar27 = (unaff_RBX->klass->vtable)._7_Insert.method;
        pIVar6 = (unaff_RBX->klass->vtable)._7_Insert.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c951e;
        entry = (ApplicationManagers_Changelog_ChangelogEntryResponse_o **)unaff_R15;
        node = (SimpleJSONFixed_JSONNode_o *)unaff_RBX;
        auVar30 = (*pIVar6)(unaff_RBX,unaff_R15,pMVar27);
        pSVar29 = auVar30._0_8_;
        if (pSVar29 != (System_Collections_Generic_List_object__o *)0x0) {
          in_RCX = pSVar29->klass;
          entry = (ApplicationManagers_Changelog_ChangelogEntryResponse_o **)
                  (in_RCX->vtable)._9_unknown.method;
          pIVar6 = (in_RCX->vtable)._9_unknown.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9536;
          __this = (System_String_o *)
                   (*pIVar6)((Il2CppMethodPointer)pSVar29,(MethodInfo *)entry,auVar30._8_8_,(void **)in_RCX,
                             in_R8);
          node = (SimpleJSONFixed_JSONNode_o *)pSVar29;
          if (__this != (System_String_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9545;
            pSVar17 = (System_Collections_Generic_List_object__c *)
                      System_String__Trim(__this,(MethodInfo *)0x0);
            extraout_RDX->klass = pSVar17;
            *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9553;
            il2cpp_runtime_helper_022b4080(extraout_RDX);
            pSVar17 = extraout_RDX->klass;
            *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c955d;
            uVar14 = System_String__IsNullOrEmpty((System_String_o *)pSVar17,(MethodInfo *)0x0);
            return uVar14 ^ 1;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9572;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0xb0);
    unaff_R14 = extraout_RDX;
  }
  *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c99b4;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0xb8) = unaff_RBP;
  *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0xc0) = extraout_RDX;
  *(MethodInfo **)((long)register0x00000020 + -200) = unaff_R15;
  *(undefined8 *)((long)register0x00000020 + -0xd0) = unaff_R13;
  *(MethodInfo **)((long)register0x00000020 + -0xd8) = unaff_R12;
  *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0xe0) = unaff_RBX;
  if (g_data_057aeaee == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c99e9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c99f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChangelogSummaryResponse_ToArray);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9a01;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9a0d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ChangelogSummaryResponse);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9a19;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PublicChangelogListResponse);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9a25;
    il2cpp_runtime_helper_023445d0(&"total");
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9a31;
    il2cpp_runtime_helper_023445d0(&"pageSize");
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9a3d;
    il2cpp_runtime_helper_023445d0(&"entries");
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9a49;
    il2cpp_runtime_helper_023445d0(&"page");
    g_data_057aeaee = '\x01';
  }
  *(undefined4 *)((long)register0x00000020 + -0xec) = 0;
  *(undefined4 *)((long)register0x00000020 + -0xf0) = 0;
  *(undefined4 *)((long)register0x00000020 + -0xf4) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xe8) = 0;
  pMVar27->methodPointer = (Il2CppMethodPointer)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9a82;
  il2cpp_runtime_helper_022b4080(pMVar27);
  if (g_data_057aeaf0 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9a97;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeaf0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9ab6;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (MethodInfo **)0x0;
  pMVar28 = (MethodInfo *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9ac4;
  node_00 = pSVar29;
  bVar15 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pSVar29,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    return 0;
  }
  if (pSVar29 != (System_Collections_Generic_List_object__o *)0x0) {
    pMVar28 = (pSVar29->klass->vtable)._17_System_Collections_IEnumerable_GetEnumerator.method;
    pIVar6 = (pSVar29->klass->vtable)._17_System_Collections_IEnumerable_GetEnumerator.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9ae8;
    cVar13 = (*pIVar6)(pSVar29,pMVar28);
    if (cVar13 == '\0') {
      return 0;
    }
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9b07;
    bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                       ((SimpleJSONFixed_JSONNode_o *)pSVar29,"total",
                        (int32_t *)((long)register0x00000020 + -0xec),(MethodInfo *)in_RCX);
    if ((char)bVar15 == '\0') {
      return 0;
    }
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9b26;
    bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                       ((SimpleJSONFixed_JSONNode_o *)pSVar29,"page",
                        (int32_t *)((long)register0x00000020 + -0xf0),(MethodInfo *)in_RCX);
    if ((char)bVar15 == '\0') {
      return 0;
    }
    iVar2 = *(int *)((long)register0x00000020 + -0xf0);
    if (iVar2 < 1) {
      return 0;
    }
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9b55;
    bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                       ((SimpleJSONFixed_JSONNode_o *)pSVar29,"pageSize",
                        (int32_t *)((long)register0x00000020 + -0xf4),(MethodInfo *)in_RCX);
    if ((char)bVar15 == '\0') {
      return 0;
    }
    iVar3 = *(int *)((long)register0x00000020 + -0xf4);
    if (iVar3 < 1) {
      return 0;
    }
    __this_00 = &"entries";
    pMVar28 = (pSVar29->klass->vtable)._28_RemoveAt.method;
    pIVar6 = (pSVar29->klass->vtable)._28_RemoveAt.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9b8a;
    cVar13 = (*pIVar6)(pSVar29,"entries",pMVar28);
    if (cVar13 == '\0') {
      return 0;
    }
    pMVar11 = (pSVar29->klass->vtable)._7_Insert.method;
    pIVar6 = (pSVar29->klass->vtable)._7_Insert.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9ba8;
    pMVar28 = "entries";
    node_00 = pSVar29;
    puVar21 = (undefined8 *)(*pIVar6)(pSVar29,"entries",pMVar11);
    if (puVar21 != (undefined8 *)0x0) {
      in_RCX = (System_Collections_Generic_List_object__c *)*puVar21;
      pMVar28 = (in_RCX->vtable)._16_System_Collections_Generic_IEnumerable_T__GetEnumerator.method;
      pIVar6 = (in_RCX->vtable)._16_System_Collections_Generic_IEnumerable_T__GetEnumerator.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9bc4;
      cVar13 = (*pIVar6)(puVar21,pMVar28);
      if (cVar13 == '\0') {
        return 0;
      }
      pMVar11 = (pSVar29->klass->vtable)._7_Insert.method;
      pIVar6 = (pSVar29->klass->vtable)._7_Insert.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9be2;
      pMVar28 = "entries";
      node_00 = pSVar29;
      pSVar22 = (System_Collections_Generic_List_object__o *)(*pIVar6)(pSVar29,"entries",pMVar11);
      if (pSVar22 != (System_Collections_Generic_List_object__o *)0x0) {
        in_RCX = pSVar22->klass;
        pMVar28 = (MethodInfo *)in_RCX[1]._1.implementedInterfaces;
        ppIVar12 = in_RCX[1]._1.nestedTypes;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9bfe;
        pSVar23 = (System_Collections_Generic_List_object__o *)(*(code *)ppIVar12)();
        node_00 = pSVar22;
        if (pSVar23 != (System_Collections_Generic_List_object__o *)0x0) {
          pMVar28 = (pSVar23->klass->vtable)._11_Add.method;
          pIVar6 = (pSVar23->klass->vtable)._11_Add.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9c1d;
          capacity = (*pIVar6)(pSVar23,pMVar28);
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9c2e;
          __this_00 = (MethodInfo **)il2cpp_runtime_helper_023052d0(TypeInfo_List_ChangelogSummaryResponse);
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9c45;
          System_Collections_Generic_List_object____ctor_362b930
                    ((System_Collections_Generic_List_object__o *)__this_00,capacity,MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
          pMVar28 = (pSVar23->klass->vtable)._11_Add.method;
          pIVar6 = (pSVar23->klass->vtable)._11_Add.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9c58;
          node_00 = pSVar23;
          iVar16 = (*pIVar6)();
          pSVar29 = pSVar23;
          if (iVar16 < 1) {
            if ((System_Collections_Generic_List_object__o *)__this_00 ==
                (System_Collections_Generic_List_object__o *)0x0) goto label_044c9e17;
          }
          else {
            if ((System_Collections_Generic_List_object__o *)__this_00 ==
                (System_Collections_Generic_List_object__o *)0x0) {
              pMVar28 = (pSVar23->klass->vtable)._5_set_Item.method;
              __this_00 = (MethodInfo **)0x0;
              pIVar6 = (pSVar23->klass->vtable)._5_set_Item.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9e02;
              auVar30 = (*pIVar6)(pSVar23,0,pMVar28);
              node_00 = auVar30._0_8_;
              pMVar28 = (MethodInfo *)((long)register0x00000020 + -0xe8);
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9e0f;
              bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary
                                 ((SimpleJSONFixed_JSONNode_o *)node_00,
                                  (ApplicationManagers_Changelog_ChangelogSummaryResponse_o **)pMVar28,
                                  auVar30._8_8_);
              if ((char)bVar15 == '\0') {
                return 0;
              }
              goto label_044c9e17;
            }
            uVar14 = 0;
            do {
              pMVar28 = (pSVar23->klass->vtable)._5_set_Item.method;
              pIVar6 = (pSVar23->klass->vtable)._5_set_Item.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9cb7;
              auVar30 = (*pIVar6)(pSVar23,(ulong)uVar14,pMVar28);
              node_00 = auVar30._0_8_;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9cc4;
              bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary
                                 ((SimpleJSONFixed_JSONNode_o *)node_00,
                                  (ApplicationManagers_Changelog_ChangelogSummaryResponse_o **)
                                  ((long)register0x00000020 + -0xe8),auVar30._8_8_);
              in_RCX = MethodInfo_Void_Add;
              if ((char)bVar15 == '\0') {
                return 0;
              }
              pMVar28 = *(MethodInfo **)((long)register0x00000020 + -0xe8);
              piVar1 = &(((System_Collections_Generic_List_object__o *)__this_00)->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar24 = (((System_Collections_Generic_List_object__o *)__this_00)->fields)._items;
              if (pSVar24 == (System_Object_array *)0x0) goto label_044c9e17;
              uVar4 = (((System_Collections_Generic_List_object__o *)__this_00)->fields)._size;
              if (uVar4 < (uint)pSVar24->max_length) {
                (((System_Collections_Generic_List_object__o *)__this_00)->fields)._size = uVar4 + 1;
                pSVar24->m_Items[(int)uVar4] = (Il2CppObject *)pMVar28;
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9d0d;
                il2cpp_runtime_helper_022b4080(pSVar24->m_Items + (int)uVar4);
              }
              else {
                method_00 = *(MethodInfo_362C220 **)
                             (*(long *)((long)(in_RCX->_1).byval_arg.data + 0xc0) + 0x70);
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9c84;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pMVar28,
                           method_00);
              }
              uVar14 = uVar14 + 1;
              pMVar28 = (pSVar23->klass->vtable)._11_Add.method;
              pIVar6 = (pSVar23->klass->vtable)._11_Add.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9c9a;
              iVar16 = (*pIVar6)(pSVar23,pMVar28);
            } while ((int)uVar14 < iVar16);
          }
          uVar5 = *(undefined4 *)((long)register0x00000020 + -0xec);
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9d45;
          pSVar24 = System_Collections_Generic_List_object___ToArray
                              ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_ChangelogSummaryResponse_ToArray);
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9d57;
          pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_PublicChangelogListResponse);
          if (g_data_057aeae8 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9d6f;
            il2cpp_runtime_helper_023445d0(&MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Changelog_Chang);
            *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9d7b;
            il2cpp_runtime_helper_023445d0(&TypeInfo_ChangelogSummaryResponse);
            g_data_057aeae8 = '\x01';
          }
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9d8c;
          System_Object___ctor(pIVar19,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar19[1].klass = uVar5;
          *(int *)((long)&pIVar19[1].klass + 4) = iVar2;
          *(int *)&pIVar19[1].monitor = iVar3;
          if (pSVar24 == (System_Object_array *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9dae;
            pSVar24 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_ChangelogSummaryResponse,0);
          }
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9dc3;
          pIVar25 = (Il2CppClass *)System_Array__AsReadOnly_object_(pSVar24,MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Changelog_Chang);
          pIVar19[2].klass = pIVar25;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9dd6;
          il2cpp_runtime_helper_022b4080(pIVar19 + 2,pIVar25);
          pMVar27->methodPointer = (Il2CppMethodPointer)pIVar19;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9de4;
          il2cpp_runtime_helper_022b4080(pMVar27,pIVar19);
          return (bool_conflict)CONCAT71((int7)((ulong)pIVar19 >> 8),1);
        }
      }
    }
  }
label_044c9e17:
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44c9e1c;
  il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x100) = pSVar29;
  *(MethodInfo **)((long)register0x00000020 + -0x108) = pMVar27;
  *(MethodInfo ***)((long)register0x00000020 + -0x110) = __this_00;
  *extraout_RDX_00 = 0;
  pMVar27 = pMVar28;
  pSVar29 = node_00;
  if (node_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pIVar6 = (node_00->klass->vtable)._28_RemoveAt.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9e4d;
    cVar13 = (*pIVar6)();
    if (cVar13 == '\0') {
      return 0;
    }
    pMVar11 = (node_00->klass->vtable)._7_Insert.method;
    pIVar6 = (node_00->klass->vtable)._7_Insert.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9e67;
    puVar21 = (undefined8 *)(*pIVar6)(node_00,pMVar28,pMVar11);
    __this_00 = (MethodInfo **)node_00;
    if (puVar21 != (undefined8 *)0x0) {
      in_RCX = (System_Collections_Generic_List_object__c *)*puVar21;
      pMVar27 = (in_RCX->vtable)._12_unknown.method;
      pIVar6 = (in_RCX->vtable)._12_unknown.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9e7f;
      cVar13 = (*pIVar6)(puVar21,pMVar27);
      if (cVar13 == '\0') {
        return 0;
      }
      pMVar27 = (node_00->klass->vtable)._7_Insert.method;
      pIVar6 = (node_00->klass->vtable)._7_Insert.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9e99;
      pSVar29 = node_00;
      plVar18 = (long *)(*pIVar6)(node_00,pMVar28,pMVar27);
      pMVar27 = pMVar28;
      if (plVar18 != (long *)0x0) {
        uVar26 = *(undefined8 *)(*plVar18 + 0x370);
        pcVar7 = *(code **)(*plVar18 + 0x368);
        *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9eb1;
        uVar26 = (*pcVar7)(plVar18,uVar26);
        *extraout_RDX_00 = (int)uVar26;
        return (bool_conflict)CONCAT71((int7)((ulong)uVar26 >> 8),-1 < (int)uVar26);
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9ecc;
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo ***)((long)register0x00000020 + -0x118) = __this_00;
  *(undefined8 *)((long)register0x00000020 + -0x120) = 0x44c9ed9;
  bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                     ((SimpleJSONFixed_JSONNode_o *)pSVar29,(System_String_o *)pMVar27,value,
                      (MethodInfo *)in_RCX);
  if ((char)bVar15 != '\0') {
    return CONCAT31((int3)((uint)bVar15 >> 8),0 < *value);
  }
  return 0;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseList
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseList (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Changelog_PublicChangelogListResponse_o** list, const MethodInfo* method);
// 0x44c99c0

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__TryParseList_43c99c0
          (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_Changelog_PublicChangelogListResponse_o **list
          ,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int32_t iVar3;
  int32_t iVar4;
  char cVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  int iVar8;
  long *plVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar12;
  ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this_00;
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *pSVar13;
  undefined8 uVar14;
  SimpleJSONFixed_JSONNode_c *in_RCX;
  MethodInfo *extraout_RDX;
  int *extraout_RDX_00;
  int32_t *value;
  uint uVar15;
  MethodInfo *summary;
  MethodInfo *key;
  SimpleJSONFixed_JSONNode_o *node_00;
  undefined1 auVar16 [16];
  int32_t iStack_44;
  int32_t iStack_40;
  int32_t iStack_3c;
  MethodInfo *pMStack_38;
  
  if (g_data_057aeaee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChangelogSummaryResponse_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ChangelogSummaryResponse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PublicChangelogListResponse);
    il2cpp_runtime_helper_023445d0(&"total");
    il2cpp_runtime_helper_023445d0(&"pageSize");
    il2cpp_runtime_helper_023445d0(&"entries");
    il2cpp_runtime_helper_023445d0(&"page");
    g_data_057aeaee = '\x01';
    method = extraout_RDX;
  }
  iStack_3c = 0;
  iStack_40 = 0;
  iStack_44 = 0;
  pMStack_38 = (MethodInfo *)0x0;
  *list = (ApplicationManagers_Changelog_PublicChangelogListResponse_o *)0x0;
  il2cpp_runtime_helper_022b4080(list,0,method);
  if (g_data_057aeaf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeaf0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  summary = (MethodInfo *)0x0;
  node_00 = node;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return 0;
  }
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044c9e17;
  cVar5 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                    (node,(node->klass->vtable)._17_get_IsObject.method);
  if ((cVar5 != '\0') &&
     (bVar6 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                        (node,"total",&iStack_3c,(MethodInfo *)in_RCX), (char)bVar6 != '\0')) {
    bVar6 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                      (node,"page",&iStack_40,(MethodInfo *)in_RCX);
    iVar4 = iStack_40;
    if ((char)bVar6 == '\0') {
      return 0;
    }
    if (iStack_40 < 1) {
      return 0;
    }
    bVar6 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                      (node,"pageSize",&iStack_44,(MethodInfo *)in_RCX);
    iVar3 = iStack_44;
    if ((char)bVar6 == '\0') {
      return 0;
    }
    if (iStack_44 < 1) {
      return 0;
    }
    cVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,"entries",(node->klass->vtable)._28_HasKey.method);
    if (cVar5 != '\0') {
      summary = "entries";
      node_00 = node;
      plVar9 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                 (node,"entries",(node->klass->vtable)._7_get_Item.method);
      if (plVar9 != (long *)0x0) {
        in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar9;
        cVar5 = (*(in_RCX->vtable)._16_get_IsArray.methodPtr)(plVar9,(in_RCX->vtable)._16_get_IsArray.method);
        if (cVar5 == '\0') {
          return 0;
        }
        summary = "entries";
        pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                  (*(node->klass->vtable)._7_get_Item.methodPtr)
                            (node,"entries",(node->klass->vtable)._7_get_Item.method);
        node_00 = node;
        if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          in_RCX = pSVar10->klass;
          summary = (in_RCX->vtable)._45_get_AsArray.method;
          pSVar11 = (SimpleJSONFixed_JSONNode_o *)(*(in_RCX->vtable)._45_get_AsArray.methodPtr)();
          node_00 = pSVar10;
          if (pSVar11 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            iVar7 = (*(pSVar11->klass->vtable)._11_get_Count.methodPtr)
                              (pSVar11,(pSVar11->klass->vtable)._11_get_Count.method);
            __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ChangelogSummaryResponse);
            System_Collections_Generic_List_object____ctor_362b930(__this,iVar7,MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
            summary = (pSVar11->klass->vtable)._11_get_Count.method;
            node_00 = pSVar11;
            iVar8 = (*(pSVar11->klass->vtable)._11_get_Count.methodPtr)();
            if (iVar8 < 1) {
              if (__this != (System_Collections_Generic_List_object__o *)0x0) goto label_044c9d2e;
            }
            else {
              if (__this != (System_Collections_Generic_List_object__o *)0x0) {
                uVar15 = 0;
                do {
                  auVar16 = (*(pSVar11->klass->vtable)._5_get_Item.methodPtr)
                                      (pSVar11,(ulong)uVar15,(pSVar11->klass->vtable)._5_get_Item.method);
                  node_00 = auVar16._0_8_;
                  bVar6 = ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary
                                    (node_00,(ApplicationManagers_Changelog_ChangelogSummaryResponse_o **)
                                             &stack0xffffffffffffffc8,auVar16._8_8_);
                  in_RCX = MethodInfo_Void_Add;
                  if ((char)bVar6 == '\0') {
                    return 0;
                  }
                  piVar1 = &(__this->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar12 = (__this->fields)._items;
                  summary = pMStack_38;
                  if (pSVar12 == (System_Object_array *)0x0) goto label_044c9e17;
                  uVar2 = (__this->fields)._size;
                  if (uVar2 < (uint)pSVar12->max_length) {
                    (__this->fields)._size = uVar2 + 1;
                    pSVar12->m_Items[(int)uVar2] = (Il2CppObject *)pMStack_38;
                    il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (__this,(Il2CppObject *)pMStack_38,
                               *(MethodInfo_362C220 **)
                                (*(long *)((long)(in_RCX->_1).byval_arg.data + 0xc0) + 0x70));
                  }
                  uVar15 = uVar15 + 1;
                  iVar8 = (*(pSVar11->klass->vtable)._11_get_Count.methodPtr)
                                    (pSVar11,(pSVar11->klass->vtable)._11_get_Count.method);
                } while ((int)uVar15 < iVar8);
label_044c9d2e:
                iVar7 = iStack_3c;
                pSVar12 = System_Collections_Generic_List_object___ToArray(__this,MethodInfo_ChangelogSummaryResponse_ToArray);
                __this_00 = (ApplicationManagers_Changelog_PublicChangelogListResponse_o *)
                            il2cpp_runtime_helper_023052d0(TypeInfo_PublicChangelogListResponse);
                if (g_data_057aeae8 == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Changelog_Chang);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChangelogSummaryResponse);
                  g_data_057aeae8 = '\x01';
                }
                System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
                (__this_00->fields)._Total_k__BackingField = iVar7;
                (__this_00->fields)._Page_k__BackingField = iVar4;
                (__this_00->fields)._PageSize_k__BackingField = iVar3;
                if (pSVar12 == (System_Object_array *)0x0) {
                  pSVar12 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_ChangelogSummaryResponse,0);
                }
                pSVar13 = System_Array__AsReadOnly_object_(pSVar12,MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Changelog_Chang);
                (__this_00->fields)._Entries_k__BackingField =
                     (System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *)pSVar13;
                il2cpp_runtime_helper_022b4080(&(__this_00->fields)._Entries_k__BackingField,pSVar13);
                *list = __this_00;
                il2cpp_runtime_helper_022b4080(list,__this_00);
                return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
              }
              auVar16 = (*(pSVar11->klass->vtable)._5_get_Item.methodPtr)
                                  (pSVar11,0,(pSVar11->klass->vtable)._5_get_Item.method);
              node_00 = auVar16._0_8_;
              summary = (MethodInfo *)&stack0xffffffffffffffc8;
              bVar6 = ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary
                                (node_00,(ApplicationManagers_Changelog_ChangelogSummaryResponse_o **)summary,
                                 auVar16._8_8_);
              if ((char)bVar6 == '\0') {
                return 0;
              }
            }
          }
        }
      }
label_044c9e17:
      il2cpp_runtime_helper_022b2c90();
      *extraout_RDX_00 = 0;
      key = summary;
      pSVar10 = node_00;
      if (node_00 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        cVar5 = (*(node_00->klass->vtable)._28_HasKey.methodPtr)();
        if (cVar5 == '\0') {
          return 0;
        }
        plVar9 = (long *)(*(node_00->klass->vtable)._7_get_Item.methodPtr)
                                   (node_00,summary,(node_00->klass->vtable)._7_get_Item.method);
        if (plVar9 != (long *)0x0) {
          in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar9;
          cVar5 = (*(in_RCX->vtable)._12_get_IsNumber.methodPtr)
                            (plVar9,(in_RCX->vtable)._12_get_IsNumber.method);
          if (cVar5 == '\0') {
            return 0;
          }
          plVar9 = (long *)(*(node_00->klass->vtable)._7_get_Item.methodPtr)
                                     (node_00,summary,(node_00->klass->vtable)._7_get_Item.method);
          key = summary;
          pSVar10 = node_00;
          if (plVar9 != (long *)0x0) {
            uVar14 = (**(code **)(*plVar9 + 0x368))(plVar9,*(undefined8 *)(*plVar9 + 0x370));
            *extraout_RDX_00 = (int)uVar14;
            return (bool_conflict)CONCAT71((int7)((ulong)uVar14 >> 8),-1 < (int)uVar14);
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      bVar6 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                        (pSVar10,(System_String_o *)key,value,(MethodInfo *)in_RCX);
      if ((char)bVar6 != '\0') {
        return CONCAT31((int3)((uint)bVar6 >> 8),0 < *value);
      }
      return 0;
    }
  }
  return 0;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseSummary
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Changelog_ChangelogSummaryResponse_o** summary, const MethodInfo* method);
// 0x44c9ef0

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary
          (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_Changelog_ChangelogSummaryResponse_o **summary
          ,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  char cVar5;
  bool_conflict bVar6;
  ApplicationManagers_Changelog_ChangelogSummaryResponse_o *__this;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  System_String_o *local_78;
  System_String_o *local_70;
  System_String_o *local_68;
  System_String_o *local_60;
  System_String_o *local_58;
  System_String_o *local_50;
  System_Guid_Fields local_48;
  
  if (g_data_057aeaef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChangelogSummaryResponse);
    il2cpp_runtime_helper_023445d0(&"contentHash");
    il2cpp_runtime_helper_023445d0(&"id");
    il2cpp_runtime_helper_023445d0(&"publishedAt");
    il2cpp_runtime_helper_023445d0(&"version");
    il2cpp_runtime_helper_023445d0(&"updatedAt");
    g_data_057aeaef = '\x01';
    method = extraout_RDX;
  }
  local_78 = (System_String_o *)0x0;
  local_58 = (System_String_o *)0x0;
  local_60 = (System_String_o *)0x0;
  local_68 = (System_String_o *)0x0;
  local_70 = (System_String_o *)0x0;
  *summary = (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)0x0;
  il2cpp_runtime_helper_022b4080(summary,0,method);
  if (g_data_057aeaf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeaf0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aeaf1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogSeenState);
        g_data_057aeaf1 = '\x01';
      }
      return (bool_conflict)**(undefined8 **)(TypeInfo_AottgChangelogSeenState + 0xb8);
    }
    cVar5 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                      (node,(node->klass->vtable)._17_get_IsObject.method);
    if (cVar5 != '\0') {
      local_48._a = 0;
      local_48._b = 0;
      local_48._c = 0;
      local_48._d = '\0';
      local_48._e = '\0';
      local_48._f = '\0';
      local_48._g = '\0';
      local_48._h = '\0';
      local_48._i = '\0';
      local_48._j = '\0';
      local_48._k = '\0';
      bVar6 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                        (node,"id",&local_78,in_RCX);
      if ((char)bVar6 != '\0') {
        bVar6 = System_Guid__TryParse(local_78,(System_Guid_o *)&local_48,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return 0;
        }
        bVar6 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                          (node,"version",&local_58,in_RCX);
        if (((((char)bVar6 != '\0') &&
             (bVar6 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                (node,"contentHash",&local_60,in_RCX), (char)bVar6 != '\0')) &&
            (bVar6 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                               (node,"publishedAt",&local_68,in_RCX), (char)bVar6 != '\0')) &&
           (bVar6 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                              (node,"updatedAt",&local_70,in_RCX), pSVar4 = local_58, pSVar3 = local_60,
           pSVar2 = local_68, pSVar1 = local_78, (char)bVar6 != '\0')) {
          local_50 = local_70;
          __this = (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)
                   il2cpp_runtime_helper_023052d0(TypeInfo_ChangelogSummaryResponse);
          System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
          (__this->fields)._Id_k__BackingField = pSVar1;
          il2cpp_runtime_helper_022b4080(&__this->fields,pSVar1);
          (__this->fields)._Version_k__BackingField = pSVar4;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._Version_k__BackingField,pSVar4);
          (__this->fields)._ContentHash_k__BackingField = pSVar3;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._ContentHash_k__BackingField,pSVar3);
          (__this->fields)._PublishedAt_k__BackingField = pSVar2;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._PublishedAt_k__BackingField,pSVar2);
          (__this->fields)._UpdatedAt_k__BackingField = local_50;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._UpdatedAt_k__BackingField);
          *summary = __this;
          il2cpp_runtime_helper_022b4080(summary,__this);
          return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
        }
      }
    }
  }
  return 0;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParse<object>
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_ (System_String_o* json, ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* parser, Il2CppObject** value, System_String_o** error, const MethodInfo_253C880* method);
// 0x263c880

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
          (System_String_o *json,ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *parser,
          Il2CppObject **value,System_String_o **error,MethodInfo_253C880 *method)

{
  char cVar1;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [12];
  
  if (method->rgctx_data == (MethodInfo_253C880_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
  }
  *value = (Il2CppObject *)0x0;
  *error = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(error);
  bVar2 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar3 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
    if (parser != (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)0x0) {
      uVar4 = (*(code *)(parser->fields).invoke_impl)
                        ((parser->fields).method_code,pSVar3,value,(parser->fields).method);
      if ((char)uVar4 == '\0') {
        if (g_data_057a6967 == '\0') {
          il2cpp_runtime_helper_023445d0(&"bad_response");
          g_data_057a6967 = '\x01';
        }
        *value = (Il2CppObject *)0x0;
        *error = "bad_response";
        il2cpp_runtime_helper_022b4080(error,"bad_response");
        return 0;
      }
      return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
    }
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ != 1) {
      _Unwind_Resume(auVar7._0_8_);
    }
    puVar5 = (undefined8 *)__cxa_begin_catch(auVar7._0_8_);
    cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar5);
    if (cVar1 == '\0') {
      puVar6 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar6 = *puVar5;
      __cxa_throw(puVar6,&PTR_PTR_05215060,0);
    }
    __cxa_end_catch();
  }
  if (g_data_057a6967 == '\0') {
    il2cpp_runtime_helper_023445d0(&"bad_response");
    g_data_057a6967 = '\x01';
  }
  *value = (Il2CppObject *)0x0;
  *error = "bad_response";
  il2cpp_runtime_helper_022b4080(error,"bad_response");
  return 0;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadGuid
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadGuid (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x44c9450

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__ReadGuid
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o **value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Guid_Fields local_18;
  
  local_18._a = 0;
  local_18._b = 0;
  local_18._c = 0;
  local_18._d = '\0';
  local_18._e = '\0';
  local_18._f = '\0';
  local_18._g = '\0';
  local_18._h = '\0';
  local_18._i = '\0';
  local_18._j = '\0';
  local_18._k = '\0';
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString(node,key,value,method);
  if ((char)bVar1 != '\0') {
    bVar1 = System_Guid__TryParse(*value,(System_Guid_o *)&local_18,(MethodInfo *)0x0);
    return bVar1;
  }
  return 0;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadRequiredString
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x44c9490

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o **value,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  Il2CppMethodPointer pIVar6;
  code *pcVar7;
  void *pvVar8;
  Il2CppClass *pIVar9;
  void *pvVar10;
  MethodInfo *pMVar11;
  Il2CppClass **ppIVar12;
  MethodInfo_362C220 *method_00;
  char cVar13;
  uint uVar14;
  bool_conflict bVar15;
  int32_t capacity;
  int iVar16;
  long *plVar17;
  System_String_o *__this;
  System_Collections_Generic_List_object__c *pSVar18;
  Il2CppObject *pIVar19;
  ulong uVar20;
  undefined8 *puVar21;
  System_Collections_Generic_List_object__o *pSVar22;
  System_Collections_Generic_List_object__o *pSVar23;
  System_Object_array *pSVar24;
  Il2CppClass *pIVar25;
  undefined8 uVar26;
  MethodInfo *pMVar27;
  System_Collections_Generic_List_object__o *extraout_RDX;
  int *extraout_RDX_00;
  int32_t *value_00;
  undefined8 unaff_RBX;
  MethodInfo **__this_00;
  undefined8 unaff_RBP;
  MethodInfo *pMVar28;
  System_Collections_Generic_List_object__o *pSVar29;
  System_Collections_Generic_List_object__o *pSVar30;
  void *in_R8;
  MethodInfo *unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined1 auVar31 [16];
  
  while( true ) {
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
    ((System_Collections_Generic_List_object__o *)value)->klass =
         (System_Collections_Generic_List_object__c *)0x0;
    pMVar28 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c94af;
    pSVar29 = (System_Collections_Generic_List_object__o *)value;
    il2cpp_runtime_helper_022b4080();
    if ((System_Collections_Generic_List_object__o *)node != (System_Collections_Generic_List_object__o *)0x0)
    {
      pMVar28 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._28_RemoveAt.method;
      pIVar6 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._28_RemoveAt.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c94ce;
      cVar13 = (*pIVar6)(node,key,pMVar28);
      if (cVar13 == '\0') {
        return 0;
      }
      pMVar27 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._7_Insert.method;
      pIVar6 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._7_Insert.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c94ec;
      pMVar28 = (MethodInfo *)key;
      pSVar29 = (System_Collections_Generic_List_object__o *)node;
      plVar17 = (long *)(*pIVar6)(node,key,pMVar27);
      if (plVar17 != (long *)0x0) {
        method = (MethodInfo *)*plVar17;
        pMVar28 = (((System_Collections_Generic_List_object__c *)method)->vtable)._13_Contains.method;
        pIVar6 = (((System_Collections_Generic_List_object__c *)method)->vtable)._13_Contains.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c9504;
        cVar13 = (*pIVar6)(plVar17,pMVar28);
        if (cVar13 == '\0') {
          return 0;
        }
        pMVar27 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._7_Insert.method;
        pIVar6 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._7_Insert.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c951e;
        pMVar28 = (MethodInfo *)key;
        pSVar29 = (System_Collections_Generic_List_object__o *)node;
        auVar31 = (*pIVar6)(node,key,pMVar27);
        pSVar30 = auVar31._0_8_;
        if (pSVar30 != (System_Collections_Generic_List_object__o *)0x0) {
          method = (MethodInfo *)pSVar30->klass;
          pMVar28 = (((System_Collections_Generic_List_object__c *)method)->vtable)._9_unknown.method;
          pIVar6 = (((System_Collections_Generic_List_object__c *)method)->vtable)._9_unknown.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c9536;
          __this = (System_String_o *)
                   (*pIVar6)((Il2CppMethodPointer)pSVar30,pMVar28,auVar31._8_8_,(void **)method,in_R8);
          pSVar29 = pSVar30;
          if (__this != (System_String_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c9545;
            pSVar18 = (System_Collections_Generic_List_object__c *)
                      System_String__Trim(__this,(MethodInfo *)0x0);
            ((System_Collections_Generic_List_object__o *)value)->klass = pSVar18;
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c9553;
            il2cpp_runtime_helper_022b4080(value);
            pSVar18 = ((System_Collections_Generic_List_object__o *)value)->klass;
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c955d;
            uVar14 = System_String__IsNullOrEmpty((System_String_o *)pSVar18,(MethodInfo *)0x0);
            return uVar14 ^ 1;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c9572;
    il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_RBP;
    *(System_String_o **)((long)register0x00000020 + -0x28) = key;
    *(System_String_o ***)((long)register0x00000020 + -0x30) = value;
    *(undefined8 *)((long)register0x00000020 + -0x38) = unaff_R13;
    *(MethodInfo **)((long)register0x00000020 + -0x40) = unaff_R12;
    *(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x48) = node;
    if (g_data_057aeaed == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95a9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChangelogEntryResponse);
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95b5;
      il2cpp_runtime_helper_023445d0(&"contentHash");
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95c1;
      il2cpp_runtime_helper_023445d0(&"contentMarkdown");
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95cd;
      il2cpp_runtime_helper_023445d0(&"id");
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95d9;
      il2cpp_runtime_helper_023445d0(&"createdAt");
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95e5;
      il2cpp_runtime_helper_023445d0(&"publishedAt");
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95f1;
      il2cpp_runtime_helper_023445d0(&"version");
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95fd;
      il2cpp_runtime_helper_023445d0(&"updatedAt");
      g_data_057aeaed = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
    pMVar28->methodPointer = (Il2CppMethodPointer)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9653;
    il2cpp_runtime_helper_022b4080(pMVar28);
    if (g_data_057aeaf0 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9668;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057aeaf0 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9687;
      il2cpp_runtime_helper_02337ed0();
    }
    key = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9695;
    node = (SimpleJSONFixed_JSONNode_o *)pSVar29;
    bVar15 = SimpleJSONFixed_JSONNode__op_Inequality
                       ((SimpleJSONFixed_JSONNode_o *)pSVar29,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      return 0;
    }
    if (pSVar29 != (System_Collections_Generic_List_object__o *)0x0) {
      pMVar27 = (pSVar29->klass->vtable)._17_System_Collections_IEnumerable_GetEnumerator.method;
      pIVar6 = (pSVar29->klass->vtable)._17_System_Collections_IEnumerable_GetEnumerator.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c96b9;
      cVar13 = (*pIVar6)(pSVar29,pMVar27);
      if (cVar13 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c96e0;
      bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)pSVar29,"id",
                          (System_String_o **)((long)register0x00000020 + -0xa8),method);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c96fb;
      bVar15 = System_Guid__TryParse
                         (*(System_String_o **)((long)register0x00000020 + -0xa8),
                          (System_Guid_o *)((long)register0x00000020 + -0x60),(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c971a;
      bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)pSVar29,"version",
                          (System_String_o **)((long)register0x00000020 + -0x80),method);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9739;
      bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)pSVar29,"contentMarkdown",
                          (System_String_o **)((long)register0x00000020 + -0x88),method);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9758;
      bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)pSVar29,"contentHash",
                          (System_String_o **)((long)register0x00000020 + -0x90),method);
      unaff_R12 = "publishedAt";
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c977e;
      il2cpp_runtime_helper_022b4080((undefined1 *)((long)register0x00000020 + -0xb0),0);
      pMVar27 = (pSVar29->klass->vtable)._28_RemoveAt.method;
      pIVar6 = (pSVar29->klass->vtable)._28_RemoveAt.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9794;
      cVar13 = (*pIVar6)(pSVar29,unaff_R12,pMVar27);
      if (cVar13 == '\0') {
        return 0;
      }
      pMVar27 = (pSVar29->klass->vtable)._7_Insert.method;
      pIVar6 = (pSVar29->klass->vtable)._7_Insert.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c97b2;
      key = (System_String_o *)unaff_R12;
      node = (SimpleJSONFixed_JSONNode_o *)pSVar29;
      plVar17 = (long *)(*pIVar6)(pSVar29,unaff_R12,pMVar27);
      if (plVar17 != (long *)0x0) {
        pMVar27 = (MethodInfo *)*plVar17;
        pIVar25 = pMVar27[6].klass;
        pcVar7 = (code *)pMVar27[6].name;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c97ce;
        cVar13 = (*pcVar7)(plVar17,pIVar25);
        if (cVar13 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c97e0;
          bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                             ((SimpleJSONFixed_JSONNode_o *)pSVar29,(System_String_o *)unaff_R12,
                              (System_String_o **)((long)register0x00000020 + -0xb0),pMVar27);
          if ((char)bVar15 == '\0') {
            return 0;
          }
        }
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c97ff;
        bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                           ((SimpleJSONFixed_JSONNode_o *)pSVar29,"createdAt",
                            (System_String_o **)((long)register0x00000020 + -0x98),pMVar27);
        if ((char)bVar15 == '\0') {
          return 0;
        }
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c981e;
        bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                           ((SimpleJSONFixed_JSONNode_o *)pSVar29,"updatedAt",
                            (System_String_o **)((long)register0x00000020 + -0xa0),pMVar27);
        if ((char)bVar15 == '\0') {
          return 0;
        }
        pIVar25 = *(Il2CppClass **)((long)register0x00000020 + -0xa8);
        pvVar8 = *(void **)((long)register0x00000020 + -0x80);
        pIVar9 = *(Il2CppClass **)((long)register0x00000020 + -0x88);
        pvVar10 = *(void **)((long)register0x00000020 + -0x90);
        *(undefined8 *)((long)register0x00000020 + -0x78) = *(undefined8 *)((long)register0x00000020 + -0xb0);
        *(undefined8 *)((long)register0x00000020 + -0x70) = *(undefined8 *)((long)register0x00000020 + -0x98);
        *(undefined8 *)((long)register0x00000020 + -0x68) = *(undefined8 *)((long)register0x00000020 + -0xa0);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9866;
        pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ChangelogEntryResponse);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9873;
        System_Object___ctor(pIVar19,(MethodInfo *)0x0);
        pIVar19[1].klass = pIVar25;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9883;
        il2cpp_runtime_helper_022b4080(pIVar19 + 1,pIVar25);
        pIVar19[1].monitor = pvVar8;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9893;
        il2cpp_runtime_helper_022b4080(&pIVar19[1].monitor,pvVar8);
        pIVar19[2].klass = pIVar9;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c98a3;
        il2cpp_runtime_helper_022b4080(pIVar19 + 2,pIVar9);
        pIVar19[2].monitor = pvVar10;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c98b3;
        il2cpp_runtime_helper_022b4080(&pIVar19[2].monitor,pvVar10);
        pIVar19[3].klass = *(Il2CppClass **)((long)register0x00000020 + -0x78);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c98c5;
        il2cpp_runtime_helper_022b4080(pIVar19 + 3);
        pIVar19[3].monitor = *(void **)((long)register0x00000020 + -0x70);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c98d7;
        il2cpp_runtime_helper_022b4080(&pIVar19[3].monitor);
        pIVar19[4].klass = *(Il2CppClass **)((long)register0x00000020 + -0x68);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c98e9;
        il2cpp_runtime_helper_022b4080(pIVar19 + 4);
        pMVar28->methodPointer = (Il2CppMethodPointer)pIVar19;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c98f7;
        il2cpp_runtime_helper_022b4080(pMVar28,pIVar19);
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar19 >> 8),1);
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9913;
    il2cpp_runtime_helper_022b2c90();
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0xb8) = pSVar29;
    *(MethodInfo **)((long)register0x00000020 + -0xc0) = pMVar28;
    *(undefined8 *)((long)register0x00000020 + -200) = 0;
    extraout_RDX->klass = (System_Collections_Generic_List_object__c *)0x0;
    pMVar28 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x44c993f;
    pSVar29 = extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    if ((System_Collections_Generic_List_object__o *)node == (System_Collections_Generic_List_object__o *)0x0)
    break;
    pMVar28 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._28_RemoveAt.method;
    pIVar6 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._28_RemoveAt.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x44c995a;
    cVar13 = (*pIVar6)(node,key,pMVar28);
    if (cVar13 == '\0') {
      return 0;
    }
    pMVar27 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._7_Insert.method;
    pIVar6 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._7_Insert.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x44c9974;
    pMVar28 = (MethodInfo *)key;
    pSVar29 = (System_Collections_Generic_List_object__o *)node;
    plVar17 = (long *)(*pIVar6)(node,key,pMVar27);
    if (plVar17 == (long *)0x0) break;
    uVar26 = *(undefined8 *)(*plVar17 + 0x230);
    pcVar7 = *(code **)(*plVar17 + 0x228);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x44c998c;
    uVar20 = (*pcVar7)(plVar17,uVar26);
    method = (MethodInfo *)(uVar20 & 0xffffffff);
    if ((char)method != '\0') {
      return (bool_conflict)CONCAT71((int7)(uVar20 >> 8),1);
    }
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -200);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0xc0);
    unaff_R15 = *(undefined8 *)((long)register0x00000020 + -0xb8);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0xb0);
    value = (System_String_o **)extraout_RDX;
  }
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x44c99b4;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0xd0) = unaff_RBP;
  *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0xd8) = extraout_RDX;
  *(System_String_o **)((long)register0x00000020 + -0xe0) = key;
  *(undefined8 *)((long)register0x00000020 + -0xe8) = unaff_R13;
  *(MethodInfo **)((long)register0x00000020 + -0xf0) = unaff_R12;
  *(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0xf8) = node;
  if (g_data_057aeaee == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c99e9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c99f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChangelogSummaryResponse_ToArray);
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9a01;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9a0d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ChangelogSummaryResponse);
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9a19;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PublicChangelogListResponse);
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9a25;
    il2cpp_runtime_helper_023445d0(&"total");
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9a31;
    il2cpp_runtime_helper_023445d0(&"pageSize");
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9a3d;
    il2cpp_runtime_helper_023445d0(&"entries");
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9a49;
    il2cpp_runtime_helper_023445d0(&"page");
    g_data_057aeaee = '\x01';
  }
  *(undefined4 *)((long)register0x00000020 + -0x104) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x108) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x10c) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0;
  pMVar28->methodPointer = (Il2CppMethodPointer)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9a82;
  il2cpp_runtime_helper_022b4080(pMVar28);
  if (g_data_057aeaf0 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9a97;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeaf0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9ab6;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (MethodInfo **)0x0;
  pMVar27 = (MethodInfo *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9ac4;
  pSVar30 = pSVar29;
  bVar15 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pSVar29,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    return 0;
  }
  if (pSVar29 != (System_Collections_Generic_List_object__o *)0x0) {
    pMVar27 = (pSVar29->klass->vtable)._17_System_Collections_IEnumerable_GetEnumerator.method;
    pIVar6 = (pSVar29->klass->vtable)._17_System_Collections_IEnumerable_GetEnumerator.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9ae8;
    cVar13 = (*pIVar6)(pSVar29,pMVar27);
    if (cVar13 == '\0') {
      return 0;
    }
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9b07;
    bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                       ((SimpleJSONFixed_JSONNode_o *)pSVar29,"total",
                        (int32_t *)((long)register0x00000020 + -0x104),method);
    if ((char)bVar15 == '\0') {
      return 0;
    }
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9b26;
    bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                       ((SimpleJSONFixed_JSONNode_o *)pSVar29,"page",
                        (int32_t *)((long)register0x00000020 + -0x108),method);
    if ((char)bVar15 == '\0') {
      return 0;
    }
    iVar2 = *(int *)((long)register0x00000020 + -0x108);
    if (iVar2 < 1) {
      return 0;
    }
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9b55;
    bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                       ((SimpleJSONFixed_JSONNode_o *)pSVar29,"pageSize",
                        (int32_t *)((long)register0x00000020 + -0x10c),method);
    if ((char)bVar15 == '\0') {
      return 0;
    }
    iVar3 = *(int *)((long)register0x00000020 + -0x10c);
    if (iVar3 < 1) {
      return 0;
    }
    __this_00 = &"entries";
    pMVar27 = (pSVar29->klass->vtable)._28_RemoveAt.method;
    pIVar6 = (pSVar29->klass->vtable)._28_RemoveAt.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9b8a;
    cVar13 = (*pIVar6)(pSVar29,"entries",pMVar27);
    if (cVar13 == '\0') {
      return 0;
    }
    pMVar11 = (pSVar29->klass->vtable)._7_Insert.method;
    pIVar6 = (pSVar29->klass->vtable)._7_Insert.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9ba8;
    pMVar27 = "entries";
    pSVar30 = pSVar29;
    puVar21 = (undefined8 *)(*pIVar6)(pSVar29,"entries",pMVar11);
    if (puVar21 != (undefined8 *)0x0) {
      method = (MethodInfo *)*puVar21;
      pMVar27 = (((System_Collections_Generic_List_object__c *)method)->vtable).
                _16_System_Collections_Generic_IEnumerable_T__GetEnumerator.method;
      pIVar6 = (((System_Collections_Generic_List_object__c *)method)->vtable).
               _16_System_Collections_Generic_IEnumerable_T__GetEnumerator.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9bc4;
      cVar13 = (*pIVar6)(puVar21,pMVar27);
      if (cVar13 == '\0') {
        return 0;
      }
      pMVar11 = (pSVar29->klass->vtable)._7_Insert.method;
      pIVar6 = (pSVar29->klass->vtable)._7_Insert.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9be2;
      pMVar27 = "entries";
      pSVar30 = pSVar29;
      pSVar22 = (System_Collections_Generic_List_object__o *)(*pIVar6)(pSVar29,"entries",pMVar11);
      if (pSVar22 != (System_Collections_Generic_List_object__o *)0x0) {
        method = (MethodInfo *)pSVar22->klass;
        pMVar27 = (MethodInfo *)
                  (((System_Collections_Generic_List_object__c *)((long)method + 0x368))->_1).
                  implementedInterfaces;
        ppIVar12 = (((System_Collections_Generic_List_object__c *)((long)method + 0x368))->_1).nestedTypes;
        *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9bfe;
        pSVar23 = (System_Collections_Generic_List_object__o *)(*(code *)ppIVar12)();
        pSVar30 = pSVar22;
        if (pSVar23 != (System_Collections_Generic_List_object__o *)0x0) {
          pMVar27 = (pSVar23->klass->vtable)._11_Add.method;
          pIVar6 = (pSVar23->klass->vtable)._11_Add.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9c1d;
          capacity = (*pIVar6)(pSVar23,pMVar27);
          *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9c2e;
          __this_00 = (MethodInfo **)il2cpp_runtime_helper_023052d0(TypeInfo_List_ChangelogSummaryResponse);
          *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9c45;
          System_Collections_Generic_List_object____ctor_362b930
                    ((System_Collections_Generic_List_object__o *)__this_00,capacity,MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
          pMVar27 = (pSVar23->klass->vtable)._11_Add.method;
          pIVar6 = (pSVar23->klass->vtable)._11_Add.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9c58;
          pSVar30 = pSVar23;
          iVar16 = (*pIVar6)();
          pSVar29 = pSVar23;
          if (iVar16 < 1) {
            if ((System_Collections_Generic_List_object__o *)__this_00 ==
                (System_Collections_Generic_List_object__o *)0x0) goto label_044c9e17;
          }
          else {
            if ((System_Collections_Generic_List_object__o *)__this_00 ==
                (System_Collections_Generic_List_object__o *)0x0) {
              pMVar27 = (pSVar23->klass->vtable)._5_set_Item.method;
              __this_00 = (MethodInfo **)0x0;
              pIVar6 = (pSVar23->klass->vtable)._5_set_Item.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9e02;
              auVar31 = (*pIVar6)(pSVar23,0,pMVar27);
              pSVar30 = auVar31._0_8_;
              pMVar27 = (MethodInfo *)((long)register0x00000020 + -0x100);
              *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9e0f;
              bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary
                                 ((SimpleJSONFixed_JSONNode_o *)pSVar30,
                                  (ApplicationManagers_Changelog_ChangelogSummaryResponse_o **)pMVar27,
                                  auVar31._8_8_);
              if ((char)bVar15 == '\0') {
                return 0;
              }
              goto label_044c9e17;
            }
            uVar14 = 0;
            do {
              pMVar27 = (pSVar23->klass->vtable)._5_set_Item.method;
              pIVar6 = (pSVar23->klass->vtable)._5_set_Item.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9cb7;
              auVar31 = (*pIVar6)(pSVar23,(ulong)uVar14,pMVar27);
              pSVar30 = auVar31._0_8_;
              *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9cc4;
              bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary
                                 ((SimpleJSONFixed_JSONNode_o *)pSVar30,
                                  (ApplicationManagers_Changelog_ChangelogSummaryResponse_o **)
                                  ((long)register0x00000020 + -0x100),auVar31._8_8_);
              method = (MethodInfo *)MethodInfo_Void_Add;
              if ((char)bVar15 == '\0') {
                return 0;
              }
              pMVar27 = *(MethodInfo **)((long)register0x00000020 + -0x100);
              piVar1 = &(((System_Collections_Generic_List_object__o *)__this_00)->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar24 = (((System_Collections_Generic_List_object__o *)__this_00)->fields)._items;
              if (pSVar24 == (System_Object_array *)0x0) goto label_044c9e17;
              uVar4 = (((System_Collections_Generic_List_object__o *)__this_00)->fields)._size;
              if (uVar4 < (uint)pSVar24->max_length) {
                (((System_Collections_Generic_List_object__o *)__this_00)->fields)._size = uVar4 + 1;
                pSVar24->m_Items[(int)uVar4] = (Il2CppObject *)pMVar27;
                *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9d0d;
                il2cpp_runtime_helper_022b4080(pSVar24->m_Items + (int)uVar4);
              }
              else {
                method_00 = *(MethodInfo_362C220 **)
                             (*(long *)((long)(((System_Collections_Generic_List_object__c *)method)->_1).
                                              byval_arg.data + 0xc0) + 0x70);
                *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9c84;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pMVar27,
                           method_00);
              }
              uVar14 = uVar14 + 1;
              pMVar27 = (pSVar23->klass->vtable)._11_Add.method;
              pIVar6 = (pSVar23->klass->vtable)._11_Add.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9c9a;
              iVar16 = (*pIVar6)(pSVar23,pMVar27);
            } while ((int)uVar14 < iVar16);
          }
          uVar5 = *(undefined4 *)((long)register0x00000020 + -0x104);
          *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9d45;
          pSVar24 = System_Collections_Generic_List_object___ToArray
                              ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_ChangelogSummaryResponse_ToArray);
          *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9d57;
          pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_PublicChangelogListResponse);
          if (g_data_057aeae8 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9d6f;
            il2cpp_runtime_helper_023445d0(&MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Changelog_Chang);
            *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9d7b;
            il2cpp_runtime_helper_023445d0(&TypeInfo_ChangelogSummaryResponse);
            g_data_057aeae8 = '\x01';
          }
          *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9d8c;
          System_Object___ctor(pIVar19,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar19[1].klass = uVar5;
          *(int *)((long)&pIVar19[1].klass + 4) = iVar2;
          *(int *)&pIVar19[1].monitor = iVar3;
          if (pSVar24 == (System_Object_array *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9dae;
            pSVar24 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_ChangelogSummaryResponse,0);
          }
          *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9dc3;
          pIVar25 = (Il2CppClass *)System_Array__AsReadOnly_object_(pSVar24,MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Changelog_Chang);
          pIVar19[2].klass = pIVar25;
          *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9dd6;
          il2cpp_runtime_helper_022b4080(pIVar19 + 2,pIVar25);
          pMVar28->methodPointer = (Il2CppMethodPointer)pIVar19;
          *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9de4;
          il2cpp_runtime_helper_022b4080(pMVar28,pIVar19);
          return (bool_conflict)CONCAT71((int7)((ulong)pIVar19 >> 8),1);
        }
      }
    }
  }
label_044c9e17:
  *(undefined8 *)((long)register0x00000020 + -0x118) = 0x44c9e1c;
  il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x118) = pSVar29;
  *(MethodInfo **)((long)register0x00000020 + -0x120) = pMVar28;
  *(MethodInfo ***)((long)register0x00000020 + -0x128) = __this_00;
  *extraout_RDX_00 = 0;
  pMVar28 = pMVar27;
  pSVar29 = pSVar30;
  if (pSVar30 != (System_Collections_Generic_List_object__o *)0x0) {
    pIVar6 = (pSVar30->klass->vtable)._28_RemoveAt.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x130) = 0x44c9e4d;
    cVar13 = (*pIVar6)();
    if (cVar13 == '\0') {
      return 0;
    }
    pMVar11 = (pSVar30->klass->vtable)._7_Insert.method;
    pIVar6 = (pSVar30->klass->vtable)._7_Insert.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x130) = 0x44c9e67;
    puVar21 = (undefined8 *)(*pIVar6)(pSVar30,pMVar27,pMVar11);
    __this_00 = (MethodInfo **)pSVar30;
    if (puVar21 != (undefined8 *)0x0) {
      method = (MethodInfo *)*puVar21;
      pMVar28 = (((System_Collections_Generic_List_object__c *)method)->vtable)._12_unknown.method;
      pIVar6 = (((System_Collections_Generic_List_object__c *)method)->vtable)._12_unknown.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x130) = 0x44c9e7f;
      cVar13 = (*pIVar6)(puVar21,pMVar28);
      if (cVar13 == '\0') {
        return 0;
      }
      pMVar28 = (pSVar30->klass->vtable)._7_Insert.method;
      pIVar6 = (pSVar30->klass->vtable)._7_Insert.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x130) = 0x44c9e99;
      pSVar29 = pSVar30;
      plVar17 = (long *)(*pIVar6)(pSVar30,pMVar27,pMVar28);
      pMVar28 = pMVar27;
      if (plVar17 != (long *)0x0) {
        uVar26 = *(undefined8 *)(*plVar17 + 0x370);
        pcVar7 = *(code **)(*plVar17 + 0x368);
        *(undefined8 *)((long)register0x00000020 + -0x130) = 0x44c9eb1;
        uVar26 = (*pcVar7)(plVar17,uVar26);
        *extraout_RDX_00 = (int)uVar26;
        return (bool_conflict)CONCAT71((int7)((ulong)uVar26 >> 8),-1 < (int)uVar26);
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x130) = 0x44c9ecc;
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo ***)((long)register0x00000020 + -0x130) = __this_00;
  *(undefined8 *)((long)register0x00000020 + -0x138) = 0x44c9ed9;
  bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                     ((SimpleJSONFixed_JSONNode_o *)pSVar29,(System_String_o *)pMVar28,value_00,method);
  if ((char)bVar15 != '\0') {
    return CONCAT31((int3)((uint)bVar15 >> 8),0 < *value_00);
  }
  return 0;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadNullableString
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadNullableString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x44c9920

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__ReadNullableString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o **value,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  Il2CppClass *pIVar7;
  void *pvVar8;
  Il2CppMethodPointer pIVar9;
  code *pcVar10;
  MethodInfo *pMVar11;
  Il2CppClass **ppIVar12;
  MethodInfo_362C220 *method_00;
  char cVar13;
  uint uVar14;
  bool_conflict bVar15;
  int32_t capacity;
  int iVar16;
  System_String_o *__this;
  System_Collections_Generic_List_object__c *pSVar17;
  Il2CppObject *pIVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 *puVar21;
  System_Collections_Generic_List_object__o *pSVar22;
  System_Collections_Generic_List_object__o *pSVar23;
  System_Object_array *pSVar24;
  Il2CppClass *pIVar25;
  undefined8 uVar26;
  MethodInfo *pMVar27;
  System_Collections_Generic_List_object__o *extraout_RDX;
  int *extraout_RDX_00;
  int32_t *value_00;
  undefined8 unaff_RBX;
  MethodInfo **__this_00;
  undefined8 unaff_RBP;
  MethodInfo *pMVar28;
  System_Collections_Generic_List_object__o *pSVar29;
  System_Collections_Generic_List_object__o *node_00;
  void *in_R8;
  MethodInfo *unaff_R12;
  undefined8 unaff_R13;
  MethodInfo *unaff_R14;
  System_Collections_Generic_List_object__o *unaff_R15;
  undefined1 auVar30 [16];
  
  while( true ) {
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -8) = unaff_R15;
    *(MethodInfo **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
    ((System_Collections_Generic_List_object__o *)value)->klass =
         (System_Collections_Generic_List_object__c *)0x0;
    pMVar27 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c993f;
    pSVar29 = (System_Collections_Generic_List_object__o *)value;
    il2cpp_runtime_helper_022b4080();
    if ((System_Collections_Generic_List_object__o *)node == (System_Collections_Generic_List_object__o *)0x0)
    break;
    pMVar27 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._28_RemoveAt.method;
    pIVar9 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._28_RemoveAt.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c995a;
    cVar13 = (*pIVar9)(node,key,pMVar27);
    if (cVar13 == '\0') {
      return 0;
    }
    pMVar28 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._7_Insert.method;
    pIVar9 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._7_Insert.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c9974;
    pMVar27 = (MethodInfo *)key;
    pSVar29 = (System_Collections_Generic_List_object__o *)node;
    plVar19 = (long *)(*pIVar9)(node,key,pMVar28);
    if (plVar19 == (long *)0x0) break;
    uVar26 = *(undefined8 *)(*plVar19 + 0x230);
    pcVar10 = *(code **)(*plVar19 + 0x228);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c998c;
    uVar20 = (*pcVar10)(plVar19,uVar26);
    method = (MethodInfo *)(uVar20 & 0xffffffff);
    if ((char)method != '\0') {
      return (bool_conflict)CONCAT71((int7)(uVar20 >> 8),1);
    }
    *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
    *(undefined8 *)((long)register0x00000020 + -0x10) = *(undefined8 *)((long)register0x00000020 + -0x10);
    *(undefined8 *)((long)register0x00000020 + -0x18) = *(undefined8 *)((long)register0x00000020 + -0x18);
    ((System_Collections_Generic_List_object__o *)value)->klass =
         (System_Collections_Generic_List_object__c *)0x0;
    unaff_R14 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c94af;
    unaff_R15 = (System_Collections_Generic_List_object__o *)value;
    il2cpp_runtime_helper_022b4080();
    if ((System_Collections_Generic_List_object__o *)node != (System_Collections_Generic_List_object__o *)0x0)
    {
      pMVar27 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._28_RemoveAt.method;
      pIVar9 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._28_RemoveAt.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c94ce;
      cVar13 = (*pIVar9)(node,key,pMVar27);
      if (cVar13 == '\0') {
        return 0;
      }
      pMVar27 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._7_Insert.method;
      pIVar9 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._7_Insert.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c94ec;
      unaff_R14 = (MethodInfo *)key;
      unaff_R15 = (System_Collections_Generic_List_object__o *)node;
      plVar19 = (long *)(*pIVar9)(node,key,pMVar27);
      if (plVar19 != (long *)0x0) {
        method = (MethodInfo *)*plVar19;
        pMVar27 = (((System_Collections_Generic_List_object__c *)method)->vtable)._13_Contains.method;
        pIVar9 = (((System_Collections_Generic_List_object__c *)method)->vtable)._13_Contains.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c9504;
        cVar13 = (*pIVar9)(plVar19,pMVar27);
        if (cVar13 == '\0') {
          return 0;
        }
        pMVar27 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._7_Insert.method;
        pIVar9 = (((System_Collections_Generic_List_object__o *)node)->klass->vtable)._7_Insert.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c951e;
        unaff_R14 = (MethodInfo *)key;
        unaff_R15 = (System_Collections_Generic_List_object__o *)node;
        auVar30 = (*pIVar9)(node,key,pMVar27);
        pSVar29 = auVar30._0_8_;
        if (pSVar29 != (System_Collections_Generic_List_object__o *)0x0) {
          method = (MethodInfo *)pSVar29->klass;
          unaff_R14 = (((System_Collections_Generic_List_object__c *)method)->vtable)._9_unknown.method;
          pIVar9 = (((System_Collections_Generic_List_object__c *)method)->vtable)._9_unknown.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c9536;
          __this = (System_String_o *)
                   (*pIVar9)((Il2CppMethodPointer)pSVar29,unaff_R14,auVar30._8_8_,(void **)method,in_R8);
          unaff_R15 = pSVar29;
          if (__this != (System_String_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c9545;
            pSVar17 = (System_Collections_Generic_List_object__c *)
                      System_String__Trim(__this,(MethodInfo *)0x0);
            ((System_Collections_Generic_List_object__o *)value)->klass = pSVar17;
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c9553;
            il2cpp_runtime_helper_022b4080(value);
            pSVar17 = ((System_Collections_Generic_List_object__o *)value)->klass;
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c955d;
            uVar14 = System_String__IsNullOrEmpty((System_String_o *)pSVar17,(MethodInfo *)0x0);
            return uVar14 ^ 1;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c9572;
    il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_RBP;
    *(System_String_o **)((long)register0x00000020 + -0x28) = key;
    *(System_String_o ***)((long)register0x00000020 + -0x30) = value;
    *(undefined8 *)((long)register0x00000020 + -0x38) = unaff_R13;
    *(MethodInfo **)((long)register0x00000020 + -0x40) = unaff_R12;
    *(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x48) = node;
    if (g_data_057aeaed == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95a9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChangelogEntryResponse);
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95b5;
      il2cpp_runtime_helper_023445d0(&"contentHash");
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95c1;
      il2cpp_runtime_helper_023445d0(&"contentMarkdown");
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95cd;
      il2cpp_runtime_helper_023445d0(&"id");
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95d9;
      il2cpp_runtime_helper_023445d0(&"createdAt");
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95e5;
      il2cpp_runtime_helper_023445d0(&"publishedAt");
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95f1;
      il2cpp_runtime_helper_023445d0(&"version");
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c95fd;
      il2cpp_runtime_helper_023445d0(&"updatedAt");
      g_data_057aeaed = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
    unaff_R14->methodPointer = (Il2CppMethodPointer)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9653;
    il2cpp_runtime_helper_022b4080(unaff_R14);
    if (g_data_057aeaf0 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9668;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057aeaf0 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9687;
      il2cpp_runtime_helper_02337ed0();
    }
    key = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9695;
    node = (SimpleJSONFixed_JSONNode_o *)unaff_R15;
    bVar15 = SimpleJSONFixed_JSONNode__op_Inequality
                       ((SimpleJSONFixed_JSONNode_o *)unaff_R15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      return 0;
    }
    if (unaff_R15 != (System_Collections_Generic_List_object__o *)0x0) {
      pMVar27 = (unaff_R15->klass->vtable)._17_System_Collections_IEnumerable_GetEnumerator.method;
      pIVar9 = (unaff_R15->klass->vtable)._17_System_Collections_IEnumerable_GetEnumerator.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c96b9;
      cVar13 = (*pIVar9)(unaff_R15,pMVar27);
      if (cVar13 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c96e0;
      bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)unaff_R15,"id",
                          (System_String_o **)((long)register0x00000020 + -0xa8),method);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c96fb;
      bVar15 = System_Guid__TryParse
                         (*(System_String_o **)((long)register0x00000020 + -0xa8),
                          (System_Guid_o *)((long)register0x00000020 + -0x60),(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c971a;
      bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)unaff_R15,"version",
                          (System_String_o **)((long)register0x00000020 + -0x80),method);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9739;
      bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)unaff_R15,"contentMarkdown",
                          (System_String_o **)((long)register0x00000020 + -0x88),method);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9758;
      bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)unaff_R15,"contentHash",
                          (System_String_o **)((long)register0x00000020 + -0x90),method);
      unaff_R12 = "publishedAt";
      if ((char)bVar15 == '\0') {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c977e;
      il2cpp_runtime_helper_022b4080((undefined1 *)((long)register0x00000020 + -0xb0),0);
      pMVar27 = (unaff_R15->klass->vtable)._28_RemoveAt.method;
      pIVar9 = (unaff_R15->klass->vtable)._28_RemoveAt.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9794;
      cVar13 = (*pIVar9)(unaff_R15,unaff_R12,pMVar27);
      if (cVar13 == '\0') {
        return 0;
      }
      pMVar27 = (unaff_R15->klass->vtable)._7_Insert.method;
      pIVar9 = (unaff_R15->klass->vtable)._7_Insert.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c97b2;
      key = (System_String_o *)unaff_R12;
      node = (SimpleJSONFixed_JSONNode_o *)unaff_R15;
      plVar19 = (long *)(*pIVar9)(unaff_R15,unaff_R12,pMVar27);
      if (plVar19 != (long *)0x0) {
        pMVar27 = (MethodInfo *)*plVar19;
        pIVar25 = pMVar27[6].klass;
        pcVar10 = (code *)pMVar27[6].name;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c97ce;
        cVar13 = (*pcVar10)(plVar19,pIVar25);
        if (cVar13 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c97e0;
          bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                             ((SimpleJSONFixed_JSONNode_o *)unaff_R15,(System_String_o *)unaff_R12,
                              (System_String_o **)((long)register0x00000020 + -0xb0),pMVar27);
          if ((char)bVar15 == '\0') {
            return 0;
          }
        }
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c97ff;
        bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                           ((SimpleJSONFixed_JSONNode_o *)unaff_R15,"createdAt",
                            (System_String_o **)((long)register0x00000020 + -0x98),pMVar27);
        if ((char)bVar15 == '\0') {
          return 0;
        }
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c981e;
        bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                           ((SimpleJSONFixed_JSONNode_o *)unaff_R15,"updatedAt",
                            (System_String_o **)((long)register0x00000020 + -0xa0),pMVar27);
        if ((char)bVar15 == '\0') {
          return 0;
        }
        pIVar25 = *(Il2CppClass **)((long)register0x00000020 + -0xa8);
        pvVar6 = *(void **)((long)register0x00000020 + -0x80);
        pIVar7 = *(Il2CppClass **)((long)register0x00000020 + -0x88);
        pvVar8 = *(void **)((long)register0x00000020 + -0x90);
        *(undefined8 *)((long)register0x00000020 + -0x78) = *(undefined8 *)((long)register0x00000020 + -0xb0);
        *(undefined8 *)((long)register0x00000020 + -0x70) = *(undefined8 *)((long)register0x00000020 + -0x98);
        *(undefined8 *)((long)register0x00000020 + -0x68) = *(undefined8 *)((long)register0x00000020 + -0xa0);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9866;
        pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ChangelogEntryResponse);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9873;
        System_Object___ctor(pIVar18,(MethodInfo *)0x0);
        pIVar18[1].klass = pIVar25;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9883;
        il2cpp_runtime_helper_022b4080(pIVar18 + 1,pIVar25);
        pIVar18[1].monitor = pvVar6;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9893;
        il2cpp_runtime_helper_022b4080(&pIVar18[1].monitor,pvVar6);
        pIVar18[2].klass = pIVar7;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c98a3;
        il2cpp_runtime_helper_022b4080(pIVar18 + 2,pIVar7);
        pIVar18[2].monitor = pvVar8;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c98b3;
        il2cpp_runtime_helper_022b4080(&pIVar18[2].monitor,pvVar8);
        pIVar18[3].klass = *(Il2CppClass **)((long)register0x00000020 + -0x78);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c98c5;
        il2cpp_runtime_helper_022b4080(pIVar18 + 3);
        pIVar18[3].monitor = *(void **)((long)register0x00000020 + -0x70);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c98d7;
        il2cpp_runtime_helper_022b4080(&pIVar18[3].monitor);
        pIVar18[4].klass = *(Il2CppClass **)((long)register0x00000020 + -0x68);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c98e9;
        il2cpp_runtime_helper_022b4080(pIVar18 + 4);
        unaff_R14->methodPointer = (Il2CppMethodPointer)pIVar18;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c98f7;
        il2cpp_runtime_helper_022b4080(unaff_R14,pIVar18);
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar18 >> 8),1);
      }
    }
    unaff_RBX = 0;
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x44c9913;
    il2cpp_runtime_helper_022b2c90();
    value = (System_String_o **)extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0xb0);
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44c99b4;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_RBP;
  *(System_String_o ***)((long)register0x00000020 + -0x28) = value;
  *(System_String_o **)((long)register0x00000020 + -0x30) = key;
  *(undefined8 *)((long)register0x00000020 + -0x38) = unaff_R13;
  *(MethodInfo **)((long)register0x00000020 + -0x40) = unaff_R12;
  *(SimpleJSONFixed_JSONNode_o **)((long)register0x00000020 + -0x48) = node;
  if (g_data_057aeaee == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c99e9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c99f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChangelogSummaryResponse_ToArray);
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9a01;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9a0d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ChangelogSummaryResponse);
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9a19;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PublicChangelogListResponse);
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9a25;
    il2cpp_runtime_helper_023445d0(&"total");
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9a31;
    il2cpp_runtime_helper_023445d0(&"pageSize");
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9a3d;
    il2cpp_runtime_helper_023445d0(&"entries");
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9a49;
    il2cpp_runtime_helper_023445d0(&"page");
    g_data_057aeaee = '\x01';
  }
  *(undefined4 *)((long)register0x00000020 + -0x54) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x58) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x5c) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
  pMVar27->methodPointer = (Il2CppMethodPointer)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9a82;
  il2cpp_runtime_helper_022b4080(pMVar27);
  if (g_data_057aeaf0 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9a97;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeaf0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9ab6;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (MethodInfo **)0x0;
  pMVar28 = (MethodInfo *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9ac4;
  node_00 = pSVar29;
  bVar15 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pSVar29,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    return 0;
  }
  if (pSVar29 == (System_Collections_Generic_List_object__o *)0x0) goto label_044c9e17;
  pMVar28 = (pSVar29->klass->vtable)._17_System_Collections_IEnumerable_GetEnumerator.method;
  pIVar9 = (pSVar29->klass->vtable)._17_System_Collections_IEnumerable_GetEnumerator.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9ae8;
  cVar13 = (*pIVar9)(pSVar29,pMVar28);
  if (cVar13 != '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9b07;
    bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                       ((SimpleJSONFixed_JSONNode_o *)pSVar29,"total",
                        (int32_t *)((long)register0x00000020 + -0x54),method);
    if ((char)bVar15 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9b26;
      bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                         ((SimpleJSONFixed_JSONNode_o *)pSVar29,"page",
                          (int32_t *)((long)register0x00000020 + -0x58),method);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      iVar2 = *(int *)((long)register0x00000020 + -0x58);
      if (iVar2 < 1) {
        return 0;
      }
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9b55;
      bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                         ((SimpleJSONFixed_JSONNode_o *)pSVar29,"pageSize",
                          (int32_t *)((long)register0x00000020 + -0x5c),method);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      iVar3 = *(int *)((long)register0x00000020 + -0x5c);
      if (iVar3 < 1) {
        return 0;
      }
      __this_00 = &"entries";
      pMVar28 = (pSVar29->klass->vtable)._28_RemoveAt.method;
      pIVar9 = (pSVar29->klass->vtable)._28_RemoveAt.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9b8a;
      cVar13 = (*pIVar9)(pSVar29,"entries",pMVar28);
      if (cVar13 != '\0') {
        pMVar11 = (pSVar29->klass->vtable)._7_Insert.method;
        pIVar9 = (pSVar29->klass->vtable)._7_Insert.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9ba8;
        pMVar28 = "entries";
        node_00 = pSVar29;
        puVar21 = (undefined8 *)(*pIVar9)(pSVar29,"entries",pMVar11);
        if (puVar21 != (undefined8 *)0x0) {
          method = (MethodInfo *)*puVar21;
          pMVar28 = (((System_Collections_Generic_List_object__c *)method)->vtable).
                    _16_System_Collections_Generic_IEnumerable_T__GetEnumerator.method;
          pIVar9 = (((System_Collections_Generic_List_object__c *)method)->vtable).
                   _16_System_Collections_Generic_IEnumerable_T__GetEnumerator.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9bc4;
          cVar13 = (*pIVar9)(puVar21,pMVar28);
          if (cVar13 == '\0') {
            return 0;
          }
          pMVar11 = (pSVar29->klass->vtable)._7_Insert.method;
          pIVar9 = (pSVar29->klass->vtable)._7_Insert.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9be2;
          pMVar28 = "entries";
          node_00 = pSVar29;
          pSVar22 = (System_Collections_Generic_List_object__o *)(*pIVar9)(pSVar29,"entries",pMVar11);
          if (pSVar22 != (System_Collections_Generic_List_object__o *)0x0) {
            method = (MethodInfo *)pSVar22->klass;
            pMVar28 = (MethodInfo *)
                      (((System_Collections_Generic_List_object__c *)((long)method + 0x368))->_1).
                      implementedInterfaces;
            ppIVar12 = (((System_Collections_Generic_List_object__c *)((long)method + 0x368))->_1).nestedTypes
            ;
            *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9bfe;
            pSVar23 = (System_Collections_Generic_List_object__o *)(*(code *)ppIVar12)();
            node_00 = pSVar22;
            if (pSVar23 != (System_Collections_Generic_List_object__o *)0x0) {
              pMVar28 = (pSVar23->klass->vtable)._11_Add.method;
              pIVar9 = (pSVar23->klass->vtable)._11_Add.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9c1d;
              capacity = (*pIVar9)(pSVar23,pMVar28);
              *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9c2e;
              __this_00 = (MethodInfo **)il2cpp_runtime_helper_023052d0(TypeInfo_List_ChangelogSummaryResponse);
              *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9c45;
              System_Collections_Generic_List_object____ctor_362b930
                        ((System_Collections_Generic_List_object__o *)__this_00,capacity,MethodInfo_List_1_ApplicationManagers_Changelog_ChangelogSummaryRes);
              pMVar28 = (pSVar23->klass->vtable)._11_Add.method;
              pIVar9 = (pSVar23->klass->vtable)._11_Add.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9c58;
              node_00 = pSVar23;
              iVar16 = (*pIVar9)();
              pSVar29 = pSVar23;
              if (iVar16 < 1) {
                if ((System_Collections_Generic_List_object__o *)__this_00 !=
                    (System_Collections_Generic_List_object__o *)0x0) goto label_044c9d2e;
              }
              else {
                if ((System_Collections_Generic_List_object__o *)__this_00 !=
                    (System_Collections_Generic_List_object__o *)0x0) {
                  uVar14 = 0;
                  do {
                    pMVar28 = (pSVar23->klass->vtable)._5_set_Item.method;
                    pIVar9 = (pSVar23->klass->vtable)._5_set_Item.methodPtr;
                    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9cb7;
                    auVar30 = (*pIVar9)(pSVar23,(ulong)uVar14,pMVar28);
                    node_00 = auVar30._0_8_;
                    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9cc4;
                    bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary
                                       ((SimpleJSONFixed_JSONNode_o *)node_00,
                                        (ApplicationManagers_Changelog_ChangelogSummaryResponse_o **)
                                        ((long)register0x00000020 + -0x50),auVar30._8_8_);
                    method = (MethodInfo *)MethodInfo_Void_Add;
                    if ((char)bVar15 == '\0') {
                      return 0;
                    }
                    pMVar28 = *(MethodInfo **)((long)register0x00000020 + -0x50);
                    piVar1 = &(((System_Collections_Generic_List_object__o *)__this_00)->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar24 = (((System_Collections_Generic_List_object__o *)__this_00)->fields)._items;
                    if (pSVar24 == (System_Object_array *)0x0) goto label_044c9e17;
                    uVar4 = (((System_Collections_Generic_List_object__o *)__this_00)->fields)._size;
                    if (uVar4 < (uint)pSVar24->max_length) {
                      (((System_Collections_Generic_List_object__o *)__this_00)->fields)._size = uVar4 + 1;
                      pSVar24->m_Items[(int)uVar4] = (Il2CppObject *)pMVar28;
                      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9d0d;
                      il2cpp_runtime_helper_022b4080(pSVar24->m_Items + (int)uVar4);
                    }
                    else {
                      method_00 = *(MethodInfo_362C220 **)
                                   (*(long *)((long)(((System_Collections_Generic_List_object__c *)method)->_1
                                                    ).byval_arg.data + 0xc0) + 0x70);
                      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9c84;
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_00,
                                 (Il2CppObject *)pMVar28,method_00);
                    }
                    uVar14 = uVar14 + 1;
                    pMVar28 = (pSVar23->klass->vtable)._11_Add.method;
                    pIVar9 = (pSVar23->klass->vtable)._11_Add.methodPtr;
                    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9c9a;
                    iVar16 = (*pIVar9)(pSVar23,pMVar28);
                  } while ((int)uVar14 < iVar16);
label_044c9d2e:
                  uVar5 = *(undefined4 *)((long)register0x00000020 + -0x54);
                  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9d45;
                  pSVar24 = System_Collections_Generic_List_object___ToArray
                                      ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_ChangelogSummaryResponse_ToArray);
                  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9d57;
                  pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_PublicChangelogListResponse);
                  if (g_data_057aeae8 == '\0') {
                    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9d6f;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Changelog_Chang);
                    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9d7b;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_ChangelogSummaryResponse);
                    g_data_057aeae8 = '\x01';
                  }
                  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9d8c;
                  System_Object___ctor(pIVar18,(MethodInfo *)0x0);
                  *(undefined4 *)&pIVar18[1].klass = uVar5;
                  *(int *)((long)&pIVar18[1].klass + 4) = iVar2;
                  *(int *)&pIVar18[1].monitor = iVar3;
                  if (pSVar24 == (System_Object_array *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9dae;
                    pSVar24 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_ChangelogSummaryResponse,0);
                  }
                  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9dc3;
                  pIVar25 = (Il2CppClass *)System_Array__AsReadOnly_object_(pSVar24,MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Changelog_Chang);
                  pIVar18[2].klass = pIVar25;
                  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9dd6;
                  il2cpp_runtime_helper_022b4080(pIVar18 + 2,pIVar25);
                  pMVar27->methodPointer = (Il2CppMethodPointer)pIVar18;
                  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9de4;
                  il2cpp_runtime_helper_022b4080(pMVar27,pIVar18);
                  return (bool_conflict)CONCAT71((int7)((ulong)pIVar18 >> 8),1);
                }
                pMVar28 = (pSVar23->klass->vtable)._5_set_Item.method;
                __this_00 = (MethodInfo **)0x0;
                pIVar9 = (pSVar23->klass->vtable)._5_set_Item.methodPtr;
                *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9e02;
                auVar30 = (*pIVar9)(pSVar23,0,pMVar28);
                node_00 = auVar30._0_8_;
                pMVar28 = (MethodInfo *)((long)register0x00000020 + -0x50);
                *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9e0f;
                bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary
                                   ((SimpleJSONFixed_JSONNode_o *)node_00,
                                    (ApplicationManagers_Changelog_ChangelogSummaryResponse_o **)pMVar28,
                                    auVar30._8_8_);
                if ((char)bVar15 == '\0') {
                  return 0;
                }
              }
            }
          }
        }
label_044c9e17:
        *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44c9e1c;
        il2cpp_runtime_helper_022b2c90();
        *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x68) = pSVar29;
        *(MethodInfo **)((long)register0x00000020 + -0x70) = pMVar27;
        *(MethodInfo ***)((long)register0x00000020 + -0x78) = __this_00;
        *extraout_RDX_00 = 0;
        pMVar27 = pMVar28;
        pSVar29 = node_00;
        if (node_00 != (System_Collections_Generic_List_object__o *)0x0) {
          pIVar9 = (node_00->klass->vtable)._28_RemoveAt.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44c9e4d;
          cVar13 = (*pIVar9)();
          if (cVar13 == '\0') {
            return 0;
          }
          pMVar11 = (node_00->klass->vtable)._7_Insert.method;
          pIVar9 = (node_00->klass->vtable)._7_Insert.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44c9e67;
          puVar21 = (undefined8 *)(*pIVar9)(node_00,pMVar28,pMVar11);
          __this_00 = (MethodInfo **)node_00;
          if (puVar21 != (undefined8 *)0x0) {
            method = (MethodInfo *)*puVar21;
            pMVar27 = (((System_Collections_Generic_List_object__c *)method)->vtable)._12_unknown.method;
            pIVar9 = (((System_Collections_Generic_List_object__c *)method)->vtable)._12_unknown.methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44c9e7f;
            cVar13 = (*pIVar9)(puVar21,pMVar27);
            if (cVar13 == '\0') {
              return 0;
            }
            pMVar27 = (node_00->klass->vtable)._7_Insert.method;
            pIVar9 = (node_00->klass->vtable)._7_Insert.methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44c9e99;
            pSVar29 = node_00;
            plVar19 = (long *)(*pIVar9)(node_00,pMVar28,pMVar27);
            pMVar27 = pMVar28;
            if (plVar19 != (long *)0x0) {
              uVar26 = *(undefined8 *)(*plVar19 + 0x370);
              pcVar10 = *(code **)(*plVar19 + 0x368);
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44c9eb1;
              uVar26 = (*pcVar10)(plVar19,uVar26);
              *extraout_RDX_00 = (int)uVar26;
              return (bool_conflict)CONCAT71((int7)((ulong)uVar26 >> 8),-1 < (int)uVar26);
            }
          }
        }
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44c9ecc;
        il2cpp_runtime_helper_022b2c90();
        *(MethodInfo ***)((long)register0x00000020 + -0x80) = __this_00;
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44c9ed9;
        bVar15 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                           ((SimpleJSONFixed_JSONNode_o *)pSVar29,(System_String_o *)pMVar27,value_00,method);
        if ((char)bVar15 != '\0') {
          return CONCAT31((int3)((uint)bVar15 >> 8),0 < *value_00);
        }
        return 0;
      }
    }
  }
  return 0;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadNonNegativeInt
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, int32_t* value, const MethodInfo* method);
// 0x44c9e20

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,int32_t *value,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  long *plVar3;
  undefined8 uVar4;
  int32_t *value_00;
  System_String_o *key_00;
  SimpleJSONFixed_JSONNode_o *node_00;
  
  *value = 0;
  key_00 = key;
  node_00 = node;
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar1 == '\0') {
      return 0;
    }
    plVar3 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,key,(node->klass->vtable)._7_get_Item.method);
    if (plVar3 != (long *)0x0) {
      method = (MethodInfo *)*plVar3;
      uVar4._0_4_ = method[5].token;
      uVar4._4_2_ = method[5].flags;
      uVar4._6_2_ = method[5].iflags;
      cVar1 = (*(code *)method[5].field8_0x40)(plVar3,uVar4);
      if (cVar1 == '\0') {
        return 0;
      }
      plVar3 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                 (node,key,(node->klass->vtable)._7_get_Item.method);
      key_00 = key;
      node_00 = node;
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x368))(plVar3,*(undefined8 *)(*plVar3 + 0x370));
        *value = (int)uVar4;
        return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),-1 < (int)uVar4);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                    (node_00,key_00,value_00,method);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  return CONCAT31((int3)((uint)bVar2 >> 8),0 < *value_00);
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadPositiveInt
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadPositiveInt (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, int32_t* value, const MethodInfo* method);
// 0x44c9ed0

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__ReadPositiveInt
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,int32_t *value,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt(node,key,value,method);
  if ((char)bVar1 != '\0') {
    return CONCAT31((int3)((uint)bVar1 >> 8),0 < *value);
  }
  return 0;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$IsNull
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__IsNull (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x44c93e0

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__IsNull
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  code *vtableDispatch;
  char cVar1;
  bool_conflict bVar2;
  long *plVar3;
  MethodInfo *in_RCX;
  System_String_o **value;
  SimpleJSONFixed_JSONNode_o *unaff_RBX;
  SimpleJSONFixed_JSONNode_o *node_00;
  System_Guid_Fields SStack_30;
  SimpleJSONFixed_JSONNode_o *pSStack_20;
  
  node_00 = node;
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSStack_20 = (SimpleJSONFixed_JSONNode_o *)0x44c93ff;
    cVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar1 == '\0') {
      return 0;
    }
    pSStack_20 = (SimpleJSONFixed_JSONNode_o *)0x44c9419;
    plVar3 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,key,(node->klass->vtable)._7_get_Item.method);
    unaff_RBX = node;
    if (plVar3 != (long *)0x0) {
      vtableDispatch = *(code **)(*plVar3 + 0x228);
      bVar2 = (*vtableDispatch)(plVar3,*(undefined8 *)(*plVar3 + 0x230),vtableDispatch);
      return bVar2;
    }
  }
  pSStack_20 = (SimpleJSONFixed_JSONNode_o *)0x44c944a;
  il2cpp_runtime_helper_022b2c90();
  SStack_30._a = 0;
  SStack_30._b = 0;
  SStack_30._c = 0;
  SStack_30._d = '\0';
  SStack_30._e = '\0';
  SStack_30._f = '\0';
  SStack_30._g = '\0';
  SStack_30._h = '\0';
  SStack_30._i = '\0';
  SStack_30._j = '\0';
  SStack_30._k = '\0';
  pSStack_20 = unaff_RBX;
  bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString(node_00,key,value,in_RCX);
  if ((char)bVar2 != '\0') {
    bVar2 = System_Guid__TryParse(*value,(System_Guid_o *)&SStack_30,(MethodInfo *)0x0);
    return bVar2;
  }
  return 0;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$IsObject
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__IsObject (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44c9370

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__IsObject
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  code *vtableDispatch;
  char cVar1;
  bool_conflict bVar2;
  long *plVar3;
  MethodInfo *in_RCX;
  System_String_o **value;
  System_String_o *key;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *node_00;
  System_Guid_Fields SStack_38;
  SimpleJSONFixed_JSONNode_o *pSStack_28;
  undefined8 uStack_20;
  SimpleJSONFixed_JSONNode_o *pSStack_18;
  
  if (g_data_057aeaf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeaf0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  key = (System_String_o *)0x0;
  pSVar4 = node;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar2 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                      (node,(node->klass->vtable)._17_get_IsObject.method);
    return bVar2;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  node_00 = pSVar4;
  pSStack_18 = node;
  if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSStack_28 = (SimpleJSONFixed_JSONNode_o *)0x44c93ff;
    cVar1 = (*(pSVar4->klass->vtable)._28_HasKey.methodPtr)();
    if (cVar1 == '\0') {
      return 0;
    }
    pSStack_28 = (SimpleJSONFixed_JSONNode_o *)0x44c9419;
    plVar3 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar4,key,(pSVar4->klass->vtable)._7_get_Item.method);
    node = pSVar4;
    if (plVar3 != (long *)0x0) {
      vtableDispatch = *(code **)(*plVar3 + 0x228);
      bVar2 = (*vtableDispatch)(plVar3,*(undefined8 *)(*plVar3 + 0x230),vtableDispatch);
      return bVar2;
    }
  }
  pSStack_28 = (SimpleJSONFixed_JSONNode_o *)0x44c944a;
  il2cpp_runtime_helper_022b2c90();
  SStack_38._a = 0;
  SStack_38._b = 0;
  SStack_38._c = 0;
  SStack_38._d = '\0';
  SStack_38._e = '\0';
  SStack_38._f = '\0';
  SStack_38._g = '\0';
  SStack_38._h = '\0';
  SStack_38._i = '\0';
  SStack_38._j = '\0';
  SStack_38._k = '\0';
  pSStack_28 = node;
  bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString(node_00,key,value,in_RCX);
  if ((char)bVar2 != '\0') {
    bVar2 = System_Guid__TryParse(*value,(System_Guid_o *)&SStack_38,(MethodInfo *)0x0);
    return bVar2;
  }
  return 0;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$Fail<object>
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__Fail_object_ (Il2CppObject** value, System_String_o** error, const MethodInfo_253C830* method);
// 0x263c830

bool_conflict
ApplicationManagers_Changelog_AottgChangelogParser__Fail_object_
          (Il2CppObject **value,System_String_o **error,MethodInfo_253C830 *method)

{
  MethodInfo_253C830 *extraout_RDX;
  
  if (g_data_057a6967 == '\0') {
    il2cpp_runtime_helper_023445d0(&"bad_response");
    g_data_057a6967 = '\x01';
    method = extraout_RDX;
  }
  *value = (Il2CppObject *)0x0;
  *error = "bad_response";
  il2cpp_runtime_helper_022b4080(error,"bad_response",method);
  return 0;
}


