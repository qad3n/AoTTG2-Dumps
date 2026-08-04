// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextColorCodec.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec.Document$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* __this, const MethodInfo* method);
// 0x450c550

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (g_data_057aed6f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aed6f = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields).Colors = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Colors,__this_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Parse
// il2cpp: Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse (System_String_o* serialized, const MethodInfo* method);
// 0x4501070

Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(System_String_o *serialized,MethodInfo *method)

{
  System_Collections_Generic_List_string__o **ppSVar1;
  int32_t *piVar2;
  System_Collections_Generic_List_string__o *__this;
  System_String_array *pSVar3;
  long lVar4;
  Il2CppClass *pIVar5;
  uint16_t value;
  ushort value_00;
  bool_conflict bVar6;
  int iVar7;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar8;
  System_Object_array *pSVar9;
  System_Text_StringBuilder_o *pSVar10;
  System_String_o *pSVar11;
  System_Object_array *__this_00;
  System_Object_array *pSVar12;
  System_Object_array *pSVar13;
  System_Object_array *pSVar14;
  MethodInfo *in_RCX;
  MethodInfo *pMVar15;
  undefined1 extraout_DL;
  uint uVar16;
  long *plVar17;
  System_Object_array *pSVar18;
  long lVar19;
  undefined1 uVar20;
  undefined4 in_R8D;
  int index;
  int32_t index_00;
  undefined4 uVar21;
  System_Object_array *local_48;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_Fields *local_40;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *local_38;
  
  if (g_data_057aed62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Document);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed62 = '\x01';
  }
  local_48 = (System_Object_array *)0x0;
  pGVar8 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Document);
  if (g_data_057aed6f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aed6f = '\x01';
  }
  pSVar9 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_System_String);
  ppSVar1 = &(pGVar8->fields).Colors;
  (pGVar8->fields).Colors = (System_Collections_Generic_List_string__o *)pSVar9;
  il2cpp_runtime_helper_022b4080(ppSVar1);
  System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
  pMVar15 = in_RCX;
  if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    local_40 = &pGVar8->fields;
    (pGVar8->fields).Text = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    il2cpp_runtime_helper_022b4080();
    pSVar10 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(pSVar10,(MethodInfo *)0x0);
    pMVar15 = in_RCX;
    pSVar9 = "FFFFFF";
    if ((serialized != (System_String_o *)0x0) ||
       (serialized = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8),
       (System_Object_array *)serialized != (System_Object_array *)0x0)) {
      local_38 = pGVar8;
      if (pSVar10 == (System_Text_StringBuilder_o *)0x0) {
        if (0 < *(int *)&((System_Object_array *)serialized)->bounds) {
          pSVar9 = (System_Object_array *)0x0;
          do {
            bVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
                              (serialized,(int)pSVar9,(System_String_o **)&local_48,in_RCX);
            if ((char)bVar6 == '\0') goto label_0450130f;
            uVar16 = (int)pSVar9 + 8;
            pSVar9 = (System_Object_array *)(ulong)uVar16;
          } while ((int)uVar16 < *(int *)&((System_Object_array *)serialized)->bounds);
        }
      }
      else if (0 < *(int *)&((System_Object_array *)serialized)->bounds) {
        index_00 = 0;
        do {
          while (bVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
                                   (serialized,index_00,(System_String_o **)&local_48,pMVar15),
                (char)bVar6 == '\0') {
            value = System_String__get_Chars(serialized,index_00,(MethodInfo *)0x0);
            System_Text_StringBuilder__Append_3b048f0(pSVar10,value,(MethodInfo *)0x0);
            in_RCX = MethodInfo_Void_Add;
            __this = *ppSVar1;
            if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_0450130a;
            piVar2 = &(__this->fields)._version;
            *piVar2 = *piVar2 + 1;
            pSVar3 = (__this->fields)._items;
            pMVar15 = in_RCX;
            if (pSVar3 == (System_String_array *)0x0) goto label_0450130a;
            uVar16 = (__this->fields)._size;
            if (uVar16 < (uint)pSVar3->max_length) {
              in_RCX = (MethodInfo *)(ulong)(uVar16 + 1);
              (__this->fields)._size = uVar16 + 1;
              pSVar3->m_Items[(int)uVar16] = (System_String_o *)pSVar9;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar16,pSVar9);
              index_00 = index_00 + 1;
              pMVar15 = in_RCX;
              if (*(int *)&((System_Object_array *)serialized)->bounds <= index_00) goto label_045012c9;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,&pSVar9->obj,
                         (MethodInfo_362C220 *)in_RCX->klass->rgctx_data[0xe].method);
              index_00 = index_00 + 1;
              pMVar15 = in_RCX;
              if (*(int *)&((System_Object_array *)serialized)->bounds <= index_00) goto label_045012c9;
            }
          }
          index_00 = index_00 + 8;
          in_RCX = pMVar15;
          pSVar9 = local_48;
        } while (index_00 < *(int *)&((System_Object_array *)serialized)->bounds);
      }
label_045012c9:
      pMVar15 = in_RCX;
      if (pSVar10 != (System_Text_StringBuilder_o *)0x0) {
        pSVar11 = (System_String_o *)
                  (*(pSVar10->klass->vtable)._3_ToString.methodPtr)
                            (pSVar10,(pSVar10->klass->vtable)._3_ToString.method);
        pGVar8 = local_38;
        (local_38->fields).Text = pSVar11;
        il2cpp_runtime_helper_022b4080(local_40,pSVar11);
        return pGVar8;
      }
    }
  }
label_0450130a:
  il2cpp_runtime_helper_022b2c90();
  in_RCX = pMVar15;
label_0450130f:
  plVar17 = (long *)((ulong)pSVar9 & 0xffffffff);
  System_String__get_Chars(serialized,(int32_t)pSVar9,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed64 = '\x01';
  }
  if ((System_Object_array *)serialized == (System_Object_array *)0x0) {
    serialized = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  __this_00 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  pSVar9 = (System_Object_array *)0x0;
  pSVar18 = __this_00;
  System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this_00,(MethodInfo *)0x0);
  uVar20 = (undefined1)in_R8D;
  if ((System_Object_array *)serialized != (System_Object_array *)0x0) {
    if (0 < *(int *)&((System_Object_array *)serialized)->bounds) {
      pSVar12 = (System_Object_array *)0x0;
      pSVar13 = "FFFFFF";
      do {
        pSVar9 = pSVar12;
        index = (int)pSVar9;
        pSVar12 = "FFFFFF";
        if (plVar17 != (long *)0x0) {
          lVar4 = *plVar17;
          if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
            lVar19 = 0;
            do {
              if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar19) == TypeInfo_ICollection_string) {
                in_RCX = (MethodInfo *)
                         ((long)*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar19) * 0x10 + lVar4 + 0x138);
                goto label_04501481;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar19);
          }
          in_RCX = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_ICollection_string,0);
label_04501481:
          iVar7 = (*in_RCX->methodPointer)(plVar17,in_RCX->virtualMethodPointer);
          pSVar12 = "FFFFFF";
          if (index < iVar7) {
            lVar4 = *plVar17;
            if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
              lVar19 = 0;
              do {
                if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar19) == TypeInfo_IList_string) {
                  in_RCX = (MethodInfo *)
                           ((long)*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar19) * 0x10 + lVar4 + 0x138);
                  goto label_045014ff;
                }
                lVar19 = lVar19 + 0x10;
              } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar19);
            }
            in_RCX = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar17,TypeInfo_IList_string,0);
label_045014ff:
            pSVar18 = pSVar9;
            pSVar11 = (System_String_o *)(*in_RCX->methodPointer)(plVar17,pSVar9,in_RCX->virtualMethodPointer)
            ;
            pSVar12 = (System_Object_array *)
                      Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                (pSVar11,(MethodInfo *)pSVar18);
          }
        }
        pSVar14 = pSVar13;
        pSVar18 = pSVar12;
        bVar6 = System_String__op_Inequality
                          ((System_String_o *)pSVar12,(System_String_o *)pSVar13,(MethodInfo *)0x0);
        uVar20 = (undefined1)in_R8D;
        if ((char)bVar6 == '\0') {
          pSVar18 = (System_Object_array *)serialized;
          value_00 = System_String__get_Chars(serialized,index,(MethodInfo *)0x0);
          uVar20 = (undefined1)in_R8D;
          if (__this_00 == (System_Object_array *)0x0) goto label_045015bf;
        }
        else {
          pSVar9 = pSVar14;
          if (__this_00 == (System_Object_array *)0x0) goto label_045015bf;
          pSVar9 = (System_Object_array *)&g_data_0000005b;
          pSVar18 = __this_00;
          pSVar13 = (System_Object_array *)
                    System_Text_StringBuilder__Append_3b048f0
                              ((System_Text_StringBuilder_o *)__this_00,0x5b,(MethodInfo *)0x0);
          uVar20 = (undefined1)in_R8D;
          if (pSVar12 == (System_Object_array *)0x0) goto label_045015bf;
          pSVar9 = (System_Object_array *)0x0;
          pSVar18 = pSVar12;
          pSVar14 = (System_Object_array *)
                    System_String__ToLowerInvariant((System_String_o *)pSVar12,(MethodInfo *)0x0);
          uVar20 = (undefined1)in_R8D;
          if (pSVar13 == (System_Object_array *)0x0) goto label_045015bf;
          pSVar10 = System_Text_StringBuilder__Append_3b03f90
                              ((System_Text_StringBuilder_o *)pSVar13,(System_String_o *)pSVar14,
                               (MethodInfo *)0x0);
          uVar20 = (undefined1)in_R8D;
          pSVar9 = pSVar14;
          pSVar18 = pSVar13;
          if (pSVar10 == (System_Text_StringBuilder_o *)0x0) goto label_045015bf;
          System_Text_StringBuilder__Append_3b048f0(pSVar10,0x5d,(MethodInfo *)0x0);
          value_00 = System_String__get_Chars(serialized,index,(MethodInfo *)0x0);
          pSVar13 = pSVar12;
        }
        pSVar9 = (System_Object_array *)(ulong)value_00;
        pSVar18 = __this_00;
        System_Text_StringBuilder__Append_3b048f0
                  ((System_Text_StringBuilder_o *)__this_00,value_00,(MethodInfo *)0x0);
        uVar20 = (undefined1)in_R8D;
        pSVar12 = (System_Object_array *)(ulong)(index + 1U);
      } while ((int)(index + 1U) < *(int *)&((System_Object_array *)serialized)->bounds);
    }
    if (__this_00 != (System_Object_array *)0x0) {
      pIVar5 = (__this_00->obj).klass;
      pGVar8 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)
               (*pIVar5->vtable[3].methodPtr)(__this_00,pIVar5->vtable[3].method);
      return pGVar8;
    }
  }
label_045015bf:
  uVar21 = il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar18,(MethodInfo *)0x0);
  pSVar18->bounds = (Il2CppArrayBounds *)pSVar9;
  il2cpp_runtime_helper_022b4080(&pSVar18->bounds,pSVar9);
  *(undefined4 *)&pSVar18->max_length = uVar21;
  *(undefined1 *)((long)&pSVar18->max_length + 4) = extraout_DL;
  pSVar18->m_Items[0] = (Il2CppObject *)in_RCX;
  pGVar8 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)
           il2cpp_runtime_helper_022b4080(pSVar18->m_Items,in_RCX);
  *(undefined1 *)(pSVar18->m_Items + 1) = uVar20;
  return pGVar8;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Plain
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Plain (System_String_o* serialized, const MethodInfo* method);
// 0x4508e20

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Plain(System_String_o *serialized,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar3;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *extraout_RAX;
  System_String_o *pSVar5;
  MethodInfo *pMVar6;
  System_String_o *extraout_RDX;
  undefined8 extraout_RDX_00;
  char cVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *a;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  pGVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(serialized,method);
  if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
    return (pGVar3->fields).Text;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar6 = method;
  if (g_data_057aed91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed91 = '\x01';
    if (extraout_RDX != (System_String_o *)0x0) goto label_04508e60;
label_04508eb8:
    cVar7 = (char)pMVar6;
    pSVar5 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) != 0) goto label_04508e74;
label_04508ee4:
    il2cpp_runtime_helper_02337ed0();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    a = (System_String_o *)0x0;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04508f89;
  }
  else {
    if (extraout_RDX == (System_String_o *)0x0) goto label_04508eb8;
label_04508e60:
    cVar7 = (char)pMVar6;
    pSVar5 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) goto label_04508ee4;
label_04508e74:
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      a = (System_String_o *)0x0;
      goto label_04508f89;
    }
  }
  pMVar6 = MethodInfo_Void_set_Item;
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this,(Il2CppObject *)method,(Il2CppObject *)pSVar5,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = (UnityEngine_Transform_o *)0x0;
  cVar7 = '\0';
  a = serialized;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)serialized,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (serialized != (System_String_o *)0x0) {
      cVar7 = '\0';
      pUVar4 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)serialized,(MethodInfo *)0x0)
      ;
      a = serialized;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__get_root(pUVar4,(MethodInfo *)0x0);
        goto label_04508f60;
      }
    }
label_04508f89:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aedb4 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
      il2cpp_runtime_helper_023445d0(&"None");
      il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
      g_data_057aedb4 = '\x01';
    }
    bVar2 = System_String__op_Equality(a,"profile-character-name-effect",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_AottgEditCharacterDialog);
      lVar9 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
      lVar1 = TypeInfo_AottgEditCharacterDialog;
    }
    else {
      lVar9 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
      lVar1 = TypeInfo_AottgEditCharacterDialog;
    }
    TypeInfo_AottgEditCharacterDialog = lVar1;
    if ((char)bVar2 == '\0') {
      *(char *)(lVar9 + 10) = cVar7;
      uVar10 = extraout_RDX_00;
      if (cVar7 == '\0') {
        uVar10 = "None";
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar1);
        lVar9 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
      }
      puVar8 = (undefined8 *)(lVar9 + 0x18);
    }
    else {
      *(char *)(lVar9 + 9) = cVar7;
      uVar10 = extraout_RDX_00;
      if (cVar7 == '\0') {
        uVar10 = "None";
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar1);
        lVar9 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
      }
      puVar8 = (undefined8 *)(lVar9 + 0x10);
    }
    *puVar8 = uVar10;
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_022b4080(puVar8,uVar10);
    return pSVar5;
  }
label_04508f60:
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText(pUVar4,(System_String_o *)method,pSVar5,pMVar6)
  ;
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$FromEditableRaw
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__FromEditableRaw (System_String_o* value, const MethodInfo* method);
// 0x450c790

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__FromEditableRaw
          (System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  ulong uVar3;
  uint16_t value_00;
  bool_conflict bVar4;
  uint uVar5;
  System_Text_StringBuilder_o *pSVar6;
  System_Text_StringBuilder_o *pSVar7;
  System_Collections_Generic_List_object__c *pSVar8;
  undefined8 uVar9;
  System_Text_StringBuilder_o *pSVar10;
  MethodInfo *method_00;
  long *extraout_RDX;
  System_Text_StringBuilder_o *text;
  long lVar11;
  MethodInfo *method_01;
  System_Collections_Generic_List_object__c **ppSVar12;
  MethodInfo *method_02;
  MethodInfo *in_R9;
  uint index;
  byte bStack_b9;
  System_String_o *apSStack_b8 [2];
  int32_t iStack_a4;
  System_Collections_Generic_List_object__c *pSStack_a0;
  ulong uStack_98;
  System_Text_StringBuilder_o *pSStack_90;
  long *plStack_88;
  System_Text_StringBuilder_o *pSStack_80;
  MethodInfo *pMStack_78;
  long lStack_70;
  System_Collections_Generic_List_object__c *pSStack_68;
  System_Text_StringBuilder_o *pSStack_60;
  System_Text_StringBuilder_o *pSStack_58;
  undefined1 auStack_19 [17];
  
  auStack_19._1_8_ = 0;
  auStack_19._9_8_ = 0;
  auStack_19[0] = 0;
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar10 = (System_Text_StringBuilder_o *)(auStack_19 + 9);
  method_02 = (MethodInfo *)auStack_19;
  lVar11 = 0;
  text = (System_Text_StringBuilder_o *)value;
  bVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_440c820
                    (value,(Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0,
                     (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **)(auStack_19 + 1),
                     (System_String_o **)pSVar10,(bool_conflict *)method_02,in_R9);
  if ((char)bVar4 != '\0') {
    if (auStack_19._1_8_ == 0) {
      il2cpp_runtime_helper_022b2c90();
      plStack_88 = extraout_RDX;
      pMStack_78 = method_02;
      lStack_70 = lVar11;
      pSStack_58 = (System_Text_StringBuilder_o *)value;
      if (g_data_057aed63 == '\0') {
        apSStack_b8[0] = (System_String_o *)0x450c858;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Document);
        apSStack_b8[0] = (System_String_o *)0x450c864;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        apSStack_b8[0] = (System_String_o *)0x450c870;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        apSStack_b8[0] = (System_String_o *)0x450c87c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
        apSStack_b8[0] = (System_String_o *)0x450c888;
        il2cpp_runtime_helper_023445d0(&"FFFFFF");
        g_data_057aed63 = '\x01';
      }
      pSStack_68 = (System_Collections_Generic_List_object__c *)0x0;
      iStack_a4 = 0;
      apSStack_b8[0] = (System_String_o *)0x450c8af;
      pSVar6 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Document);
      if (g_data_057aed6f == '\0') {
        apSStack_b8[0] = (System_String_o *)0x450c8c7;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
        apSStack_b8[0] = (System_String_o *)0x450c8d3;
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
        g_data_057aed6f = '\x01';
      }
      apSStack_b8[0] = (System_String_o *)0x450c8e9;
      pSVar7 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      apSStack_b8[0] = (System_String_o *)0x450c8fe;
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_System_String);
      (pSVar6->fields).m_ChunkPrevious = pSVar7;
      apSStack_b8[0] = (System_String_o *)0x450c90e;
      il2cpp_runtime_helper_022b4080(&(pSVar6->fields).m_ChunkPrevious);
      pSVar8 = (System_Collections_Generic_List_object__c *)0x0;
      apSStack_b8[0] = (System_String_o *)0x450c918;
      ppSVar12 = (System_Collections_Generic_List_object__c **)pSVar6;
      System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
        (pSVar6->fields).m_ChunkChars = (System_Char_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        apSStack_b8[0] = (System_String_o *)0x450c949;
        il2cpp_runtime_helper_022b4080(&pSVar6->fields);
        *plStack_88 = (long)pSVar6;
        apSStack_b8[0] = (System_String_o *)0x450c959;
        il2cpp_runtime_helper_022b4080();
        apSStack_b8[0] = (System_String_o *)0x450c968;
        pSVar6 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
        uVar5 = 0;
        apSStack_b8[0] = (System_String_o *)0x450c978;
        System_Text_StringBuilder___ctor(pSVar6,(MethodInfo *)0x0);
        pSStack_a0 = "FFFFFF";
        pSVar10->klass = (System_Text_StringBuilder_c *)0x0;
        pSVar8 = (System_Collections_Generic_List_object__c *)0x0;
        apSStack_b8[0] = (System_String_o *)0x450c999;
        ppSVar12 = (System_Collections_Generic_List_object__c **)pSVar10;
        il2cpp_runtime_helper_022b4080();
        *(undefined1 *)&pMStack_78->methodPointer = 0;
        if ((text != (System_Text_StringBuilder_o *)0x0) ||
           (text = (System_Text_StringBuilder_o *)**(long **)(g_data_057b9c00 + 0xb8),
           text != (System_Text_StringBuilder_o *)0x0)) {
          pSStack_60 = pSVar10;
          if (*(int *)&(text->fields).m_ChunkChars < 1) {
            uStack_98 = 0;
          }
          else {
            pSStack_80 = (System_Text_StringBuilder_o *)0x0;
            index = 0;
            uStack_98 = 0;
            pSVar10 = (System_Text_StringBuilder_o *)0x0;
            pSStack_90 = text;
            do {
              while( true ) {
                pSVar8 = (System_Collections_Generic_List_object__c *)(ulong)index;
                apSStack_b8[0] = (System_String_o *)0x450ca3c;
                ppSVar12 = (System_Collections_Generic_List_object__c **)text;
                bVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag
                                  ((System_String_o *)text,index,(System_String_o **)&pSStack_68,&iStack_a4,
                                   method_02);
                if ((char)bVar4 != '\0') break;
                pSVar8 = (System_Collections_Generic_List_object__c *)(ulong)index;
                apSStack_b8[0] = (System_String_o *)0x450ca4d;
                value_00 = System_String__get_Chars((System_String_o *)text,index,(MethodInfo *)0x0);
                ppSVar12 = (System_Collections_Generic_List_object__c **)text;
                if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_0450ccbf;
                pSVar8 = (System_Collections_Generic_List_object__c *)(ulong)value_00;
                apSStack_b8[0] = (System_String_o *)0x450ca66;
                ppSVar12 = (System_Collections_Generic_List_object__c **)pSVar6;
                System_Text_StringBuilder__Append_3b048f0(pSVar6,value_00,(MethodInfo *)0x0);
                text = pSStack_90;
                lVar11 = MethodInfo_Void_Add;
                if (*plStack_88 == 0) goto label_0450ccbf;
                pSVar7 = *(System_Text_StringBuilder_o **)(*plStack_88 + 0x18);
                ppSVar12 = (System_Collections_Generic_List_object__c **)pSVar7;
                if ((uStack_98 & 1) == 0) {
                  ppSVar12 = (System_Collections_Generic_List_object__c **)pSVar10;
                  if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0450ccbf;
                  uVar5 = *(uint *)&(pSVar7->fields).m_ChunkPrevious;
                  if (g_data_057aed6c == '\0') {
                    apSStack_b8[0] = (System_String_o *)0x450cb12;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                    apSStack_b8[0] = (System_String_o *)0x450cb1e;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
                    ppSVar12 = &"FFFFFF";
                    apSStack_b8[0] = (System_String_o *)0x450cb2a;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057aed6c = '\x01';
                  }
                  lVar11 = MethodInfo_Void_Add;
                  pSVar8 = "FFFFFF";
                  if ((((lStack_70 != 0) && (-1 < (int)uVar5)) &&
                      (ppSVar12 = *(System_Collections_Generic_List_object__c ***)(lStack_70 + 0x18),
                      (System_Text_StringBuilder_o *)ppSVar12 != (System_Text_StringBuilder_o *)0x0)) &&
                     ((int)uVar5 <
                      *(int *)&(((System_Text_StringBuilder_o *)ppSVar12)->fields).m_ChunkPrevious)) {
                    method_01 = (MethodInfo *)(ulong)uVar5;
                    apSStack_b8[0] = (System_String_o *)0x450cb61;
                    ppSVar12 = (System_Collections_Generic_List_object__c **)
                               System_Collections_Generic_List_object___get_Item
                                         ((System_Collections_Generic_List_object__o *)ppSVar12,uVar5,
                                          MethodInfo_String_get_Item);
                    apSStack_b8[0] = (System_String_o *)0x450cb69;
                    pSVar8 = (System_Collections_Generic_List_object__c *)
                             Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                       ((System_String_o *)ppSVar12,method_01);
                    lVar11 = MethodInfo_Void_Add;
                  }
                  MethodInfo_Void_Add = lVar11;
                  if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0450ccbf;
                  piVar1 = (int32_t *)((long)&(pSVar7->fields).m_ChunkPrevious + 4);
                  *piVar1 = *piVar1 + 1;
                  pSVar2 = (System_Object_array *)(pSVar7->fields).m_ChunkChars;
                  if (pSVar2 == (System_Object_array *)0x0) goto label_0450ccbf;
                  uVar5 = *(uint *)&(pSVar7->fields).m_ChunkPrevious;
                  if (uVar5 < (uint)pSVar2->max_length) {
                    *(uint *)&(pSVar7->fields).m_ChunkPrevious = uVar5 + 1;
                    ppSVar12 = (System_Collections_Generic_List_object__c **)(pSVar2->m_Items + (int)uVar5);
                    pSVar2->m_Items[(int)uVar5] = (Il2CppObject *)pSVar8;
                    apSStack_b8[0] = (System_String_o *)0x450cbd1;
                    il2cpp_runtime_helper_022b4080();
                  }
                  else {
                    apSStack_b8[0] = (System_String_o *)0x450cc21;
                    ppSVar12 = (System_Collections_Generic_List_object__c **)pSVar7;
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pSVar8,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar5 = 0;
                  index = index + 1;
                  text = pSStack_90;
                  pSStack_80 = pSVar7;
                  if (*(int *)&(pSStack_90->fields).m_ChunkChars <= (int)index) goto label_0450cc4e;
                }
                else {
                  if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0450ccbf;
                  piVar1 = (int32_t *)((long)&(pSVar7->fields).m_ChunkPrevious + 4);
                  *piVar1 = *piVar1 + 1;
                  pSVar2 = (System_Object_array *)(pSVar7->fields).m_ChunkChars;
                  if (pSVar2 == (System_Object_array *)0x0) goto label_0450ccbf;
                  uVar5 = *(uint *)&(pSVar7->fields).m_ChunkPrevious;
                  pSVar8 = pSStack_a0;
                  if (uVar5 < (uint)pSVar2->max_length) {
                    *(uint *)&(pSVar7->fields).m_ChunkPrevious = uVar5 + 1;
                    ppSVar12 = (System_Collections_Generic_List_object__c **)(pSVar2->m_Items + (int)uVar5);
                    pSVar2->m_Items[(int)uVar5] = (Il2CppObject *)pSStack_a0;
                    apSStack_b8[0] = (System_String_o *)0x450cae8;
                    il2cpp_runtime_helper_022b4080();
                  }
                  else {
                    apSStack_b8[0] = (System_String_o *)0x450cbec;
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pSStack_a0,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                  }
                  *(undefined1 *)&pMStack_78->methodPointer = 1;
                  uVar5 = 0;
                  index = index + 1;
                  pSVar10 = pSVar7;
                  if (*(int *)&(text->fields).m_ChunkChars <= (int)index) goto label_0450cc4e;
                }
              }
              pSStack_a0 = pSStack_68;
              index = index + iStack_a4;
              uStack_98 = CONCAT71((uint7)(uint3)((uint)iStack_a4 >> 8),1);
              uVar5 = 1;
            } while ((int)index < *(int *)&(text->fields).m_ChunkChars);
          }
label_0450cc4e:
          if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
            lVar11 = *plStack_88;
            pSVar8 = (System_Collections_Generic_List_object__c *)(pSVar6->klass->vtable)._3_ToString.method;
            apSStack_b8[0] = (System_String_o *)0x450cc6f;
            uVar9 = (*(pSVar6->klass->vtable)._3_ToString.methodPtr)();
            pSVar10 = pSStack_60;
            ppSVar12 = (System_Collections_Generic_List_object__c **)pSVar6;
            if (lVar11 != 0) {
              *(undefined8 *)(lVar11 + 0x10) = uVar9;
              apSStack_b8[0] = (System_String_o *)0x450cc8c;
              il2cpp_runtime_helper_022b4080(lVar11 + 0x10,uVar9);
              uVar3 = uStack_98;
              if ((uVar5 & (uint)uStack_98 & 1) != 0) {
                pSVar10->klass = (System_Text_StringBuilder_c *)pSStack_a0;
                apSStack_b8[0] = (System_String_o *)0x450ccae;
                il2cpp_runtime_helper_022b4080(pSVar10);
              }
              return (System_String_o *)(uVar3 & 0xffffff01);
            }
          }
        }
      }
label_0450ccbf:
      apSStack_b8[0] = (System_String_o *)0x450ccc4;
      il2cpp_runtime_helper_022b2c90();
      bStack_b9 = 0;
      apSStack_b8[0] = (System_String_o *)0x0;
      uVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_440c820
                        ((System_String_o *)ppSVar12,
                         (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0,
                         (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **)pSVar8,apSStack_b8
                         ,(bool_conflict *)&bStack_b9,in_R9);
      return (System_String_o *)(ulong)((uint)bStack_b9 & uVar5 & 0xff);
    }
    value = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                      (*(System_String_o **)(auStack_19._1_8_ + 0x10),
                       *(System_Collections_Generic_IList_string__o **)(auStack_19._1_8_ + 0x18),method_00);
  }
  return (System_String_o *)(System_Text_StringBuilder_o *)value;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$TryImport
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport (System_String_o* value, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o** document, const MethodInfo* method);
// 0x450ccd0

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport
          (System_String_o *value,Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **document,
          MethodInfo *method)

{
  uint uVar1;
  MethodInfo *in_R9;
  byte bStack_9;
  System_String_o *pSStack_8;
  
  bStack_9 = 0;
  pSStack_8 = (System_String_o *)0x0;
  uVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_440c820
                    (value,(Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0,document,
                     &pSStack_8,(bool_conflict *)&bStack_9,in_R9);
  return (uint)bStack_9 & uVar1 & 0xff;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$TryImport
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport (System_String_o* value, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* existing, Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o** document, System_String_o** trailingColor, bool* colorsVisibleText, const MethodInfo* method);
// 0x450c820

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_440c820
          (System_String_o *value,Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *existing,
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **document,
          System_String_o **trailingColor,bool_conflict *colorsVisibleText,MethodInfo *method)

{
  int32_t *piVar1;
  System_Text_StringBuilder_o *__this;
  System_Object_array *pSVar2;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar3;
  long lVar4;
  System_String_o **ppSVar5;
  uint16_t value_00;
  bool_conflict bVar6;
  uint uVar7;
  System_Text_StringBuilder_o *pSVar8;
  System_Text_StringBuilder_o *pSVar9;
  MethodInfo *pMVar10;
  System_String_o *pSVar11;
  MethodInfo **ppMVar12;
  uint uVar13;
  byte local_91;
  System_String_o *local_90 [2];
  int32_t local_7c;
  MethodInfo *local_78;
  ulong local_70;
  System_Text_StringBuilder_o *local_68;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **local_60;
  System_Text_StringBuilder_o *local_58;
  bool_conflict *local_50;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *local_48;
  MethodInfo *local_40;
  System_String_o **local_38;
  
  local_60 = document;
  local_50 = colorsVisibleText;
  local_48 = existing;
  if (g_data_057aed63 == '\0') {
    local_90[0] = (System_String_o *)0x450c858;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Document);
    local_90[0] = (System_String_o *)0x450c864;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    local_90[0] = (System_String_o *)0x450c870;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    local_90[0] = (System_String_o *)0x450c87c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    local_90[0] = (System_String_o *)0x450c888;
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed63 = '\x01';
  }
  local_40 = (MethodInfo *)0x0;
  local_7c = 0;
  local_90[0] = (System_String_o *)0x450c8af;
  pSVar8 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Document);
  if (g_data_057aed6f == '\0') {
    local_90[0] = (System_String_o *)0x450c8c7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    local_90[0] = (System_String_o *)0x450c8d3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aed6f = '\x01';
  }
  local_90[0] = (System_String_o *)0x450c8e9;
  pSVar9 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  local_90[0] = (System_String_o *)0x450c8fe;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_System_String);
  (pSVar8->fields).m_ChunkPrevious = pSVar9;
  local_90[0] = (System_String_o *)0x450c90e;
  il2cpp_runtime_helper_022b4080(&(pSVar8->fields).m_ChunkPrevious);
  pMVar10 = (MethodInfo *)0x0;
  local_90[0] = (System_String_o *)0x450c918;
  ppMVar12 = (MethodInfo **)pSVar8;
  System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  if (pSVar8 != (System_Text_StringBuilder_o *)0x0) {
    (pSVar8->fields).m_ChunkChars = (System_Char_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    local_90[0] = (System_String_o *)0x450c949;
    il2cpp_runtime_helper_022b4080(&pSVar8->fields);
    *local_60 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)pSVar8;
    local_90[0] = (System_String_o *)0x450c959;
    il2cpp_runtime_helper_022b4080();
    local_90[0] = (System_String_o *)0x450c968;
    pSVar8 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    uVar7 = 0;
    local_90[0] = (System_String_o *)0x450c978;
    System_Text_StringBuilder___ctor(pSVar8,(MethodInfo *)0x0);
    local_78 = "FFFFFF";
    *trailingColor = (System_String_o *)0x0;
    pMVar10 = (MethodInfo *)0x0;
    local_90[0] = (System_String_o *)0x450c999;
    ppMVar12 = (MethodInfo **)trailingColor;
    il2cpp_runtime_helper_022b4080();
    *(undefined1 *)local_50 = 0;
    if ((value != (System_String_o *)0x0) ||
       (value = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8),
       (System_Text_StringBuilder_o *)value != (System_Text_StringBuilder_o *)0x0)) {
      local_38 = trailingColor;
      if (*(int *)&(((System_Text_StringBuilder_o *)value)->fields).m_ChunkChars < 1) {
        local_70 = 0;
      }
      else {
        local_58 = (System_Text_StringBuilder_o *)0x0;
        uVar13 = 0;
        local_70 = 0;
        pSVar9 = (System_Text_StringBuilder_o *)0x0;
        local_68 = (System_Text_StringBuilder_o *)value;
        do {
          while( true ) {
            pMVar10 = (MethodInfo *)(ulong)uVar13;
            local_90[0] = (System_String_o *)0x450ca3c;
            ppMVar12 = (MethodInfo **)value;
            bVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag
                              (value,uVar13,(System_String_o **)&local_40,&local_7c,
                               (MethodInfo *)colorsVisibleText);
            if ((char)bVar6 != '\0') break;
            pMVar10 = (MethodInfo *)(ulong)uVar13;
            local_90[0] = (System_String_o *)0x450ca4d;
            value_00 = System_String__get_Chars(value,uVar13,(MethodInfo *)0x0);
            ppMVar12 = (MethodInfo **)value;
            if (pSVar8 == (System_Text_StringBuilder_o *)0x0) goto label_0450ccbf;
            pMVar10 = (MethodInfo *)(ulong)value_00;
            local_90[0] = (System_String_o *)0x450ca66;
            ppMVar12 = (MethodInfo **)pSVar8;
            System_Text_StringBuilder__Append_3b048f0(pSVar8,value_00,(MethodInfo *)0x0);
            value = (System_String_o *)local_68;
            lVar4 = MethodInfo_Void_Add;
            if (*local_60 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0)
            goto label_0450ccbf;
            __this = (System_Text_StringBuilder_o *)((*local_60)->fields).Colors;
            ppMVar12 = (MethodInfo **)__this;
            if ((local_70 & 1) == 0) {
              ppMVar12 = (MethodInfo **)pSVar9;
              if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0450ccbf;
              uVar7 = *(uint *)&(__this->fields).m_ChunkPrevious;
              if (g_data_057aed6c == '\0') {
                local_90[0] = (System_String_o *)0x450cb12;
                il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                local_90[0] = (System_String_o *)0x450cb1e;
                il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
                ppMVar12 = &"FFFFFF";
                local_90[0] = (System_String_o *)0x450cb2a;
                il2cpp_runtime_helper_023445d0();
                g_data_057aed6c = '\x01';
              }
              lVar4 = MethodInfo_Void_Add;
              pMVar10 = "FFFFFF";
              if ((((local_48 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
                   (-1 < (int)uVar7)) &&
                  (ppMVar12 = (MethodInfo **)(local_48->fields).Colors,
                  (System_Text_StringBuilder_o *)ppMVar12 != (System_Text_StringBuilder_o *)0x0)) &&
                 ((int)uVar7 < *(int *)&(((System_Text_StringBuilder_o *)ppMVar12)->fields).m_ChunkPrevious))
              {
                pMVar10 = (MethodInfo *)(ulong)uVar7;
                local_90[0] = (System_String_o *)0x450cb61;
                ppMVar12 = (MethodInfo **)
                           System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)ppMVar12,uVar7,MethodInfo_String_get_Item
                                     );
                local_90[0] = (System_String_o *)0x450cb69;
                pMVar10 = (MethodInfo *)
                          Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                    ((System_String_o *)ppMVar12,pMVar10);
                lVar4 = MethodInfo_Void_Add;
              }
              MethodInfo_Void_Add = lVar4;
              if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0450ccbf;
              piVar1 = (int32_t *)((long)&(__this->fields).m_ChunkPrevious + 4);
              *piVar1 = *piVar1 + 1;
              pSVar2 = (System_Object_array *)(__this->fields).m_ChunkChars;
              if (pSVar2 == (System_Object_array *)0x0) goto label_0450ccbf;
              uVar7 = *(uint *)&(__this->fields).m_ChunkPrevious;
              if (uVar7 < (uint)pSVar2->max_length) {
                *(uint *)&(__this->fields).m_ChunkPrevious = uVar7 + 1;
                ppMVar12 = (MethodInfo **)(pSVar2->m_Items + (int)uVar7);
                pSVar2->m_Items[(int)uVar7] = (Il2CppObject *)pMVar10;
                local_90[0] = (System_String_o *)0x450cbd1;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                local_90[0] = (System_String_o *)0x450cc21;
                ppMVar12 = (MethodInfo **)__this;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar10,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              uVar7 = 0;
              uVar13 = uVar13 + 1;
              value = (System_String_o *)local_68;
              local_58 = __this;
              if (*(int *)&(local_68->fields).m_ChunkChars <= (int)uVar13) goto label_0450cc4e;
            }
            else {
              if (__this == (System_Text_StringBuilder_o *)0x0) goto label_0450ccbf;
              piVar1 = (int32_t *)((long)&(__this->fields).m_ChunkPrevious + 4);
              *piVar1 = *piVar1 + 1;
              pSVar2 = (System_Object_array *)(__this->fields).m_ChunkChars;
              if (pSVar2 == (System_Object_array *)0x0) goto label_0450ccbf;
              uVar7 = *(uint *)&(__this->fields).m_ChunkPrevious;
              pMVar10 = local_78;
              if (uVar7 < (uint)pSVar2->max_length) {
                *(uint *)&(__this->fields).m_ChunkPrevious = uVar7 + 1;
                ppMVar12 = (MethodInfo **)(pSVar2->m_Items + (int)uVar7);
                pSVar2->m_Items[(int)uVar7] = (Il2CppObject *)local_78;
                local_90[0] = (System_String_o *)0x450cae8;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                local_90[0] = (System_String_o *)0x450cbec;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)local_78,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              *(undefined1 *)local_50 = 1;
              uVar7 = 0;
              uVar13 = uVar13 + 1;
              pSVar9 = __this;
              if (*(int *)&(((System_Text_StringBuilder_o *)value)->fields).m_ChunkChars <= (int)uVar13)
              goto label_0450cc4e;
            }
          }
          local_78 = local_40;
          uVar13 = uVar13 + local_7c;
          local_70 = CONCAT71((uint7)(uint3)((uint)local_7c >> 8),1);
          uVar7 = 1;
        } while ((int)uVar13 < *(int *)&(((System_Text_StringBuilder_o *)value)->fields).m_ChunkChars);
      }
label_0450cc4e:
      if (pSVar8 != (System_Text_StringBuilder_o *)0x0) {
        pGVar3 = *local_60;
        pMVar10 = (pSVar8->klass->vtable)._3_ToString.method;
        local_90[0] = (System_String_o *)0x450cc6f;
        pSVar11 = (System_String_o *)(*(pSVar8->klass->vtable)._3_ToString.methodPtr)();
        ppSVar5 = local_38;
        ppMVar12 = (MethodInfo **)pSVar8;
        if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
          (pGVar3->fields).Text = pSVar11;
          local_90[0] = (System_String_o *)0x450cc8c;
          il2cpp_runtime_helper_022b4080(&pGVar3->fields,pSVar11);
          uVar13 = (uint)local_70;
          if ((uVar7 & uVar13 & 1) != 0) {
            *ppSVar5 = (System_String_o *)local_78;
            local_90[0] = (System_String_o *)0x450ccae;
            il2cpp_runtime_helper_022b4080(ppSVar5);
          }
          return uVar13 & 0xffffff01;
        }
      }
    }
  }
label_0450ccbf:
  local_90[0] = (System_String_o *)0x450ccc4;
  il2cpp_runtime_helper_022b2c90();
  local_91 = 0;
  local_90[0] = (System_String_o *)0x0;
  uVar7 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_440c820
                    ((System_String_o *)ppMVar12,
                     (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0,
                     (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **)pMVar10,local_90,
                     (bool_conflict *)&local_91,method);
  return (uint)local_91 & uVar7 & 0xff;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Serialize
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize (System_String_o* text, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x4501320

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
          (System_String_o *text,System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IList_string__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppClass *pIVar4;
  ushort uVar5;
  int iVar6;
  bool_conflict bVar7;
  System_Char_array *__this;
  System_String_o *pSVar8;
  System_Char_array *pSVar9;
  System_Char_array *pSVar10;
  System_Char_array *pSVar11;
  System_Text_StringBuilder_o *__this_00;
  VirtualInvokeData *in_RCX;
  undefined1 extraout_DL;
  System_Char_array *pSVar12;
  System_Char_array *pSVar13;
  long lVar14;
  undefined1 uVar15;
  undefined4 in_R8D;
  int index;
  undefined4 uVar16;
  
  if (g_data_057aed64 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed64 = '\x01';
  }
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  __this = (System_Char_array *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  pSVar13 = (System_Char_array *)0x0;
  pSVar12 = __this;
  System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this,(MethodInfo *)0x0);
  uVar15 = (undefined1)in_R8D;
  if ((System_Char_array *)text != (System_Char_array *)0x0) {
    if (0 < *(int *)&((System_Char_array *)text)->bounds) {
      pSVar9 = (System_Char_array *)0x0;
      pSVar10 = "FFFFFF";
      do {
        pSVar13 = pSVar9;
        index = (int)pSVar13;
        pSVar9 = "FFFFFF";
        if (colors != (System_Collections_Generic_IList_string__o *)0x0) {
          pSVar2 = colors->klass;
          uVar5._0_1_ = (pSVar2->_2).rank;
          uVar5._1_1_ = (pSVar2->_2).minimumAlignment;
          if ((ulong)uVar5 != 0) {
            pIVar3 = (pSVar2->_1).interfaceOffsets;
            lVar14 = 0;
            do {
              if (*(long *)((long)&pIVar3->interfaceType + lVar14) == TypeInfo_ICollection_string) {
                in_RCX = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar14);
                goto label_04501481;
              }
              lVar14 = lVar14 + 0x10;
            } while ((ulong)uVar5 << 4 != lVar14);
          }
          in_RCX = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(colors,TypeInfo_ICollection_string,0);
label_04501481:
          iVar6 = (*in_RCX->methodPtr)(colors,in_RCX->method);
          pSVar9 = "FFFFFF";
          if (index < iVar6) {
            pSVar2 = colors->klass;
            uVar1._0_1_ = (pSVar2->_2).rank;
            uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
            if ((ulong)uVar1 != 0) {
              pIVar3 = (pSVar2->_1).interfaceOffsets;
              lVar14 = 0;
              do {
                if (*(long *)((long)&pIVar3->interfaceType + lVar14) == TypeInfo_IList_string) {
                  in_RCX = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar14);
                  goto label_045014ff;
                }
                lVar14 = lVar14 + 0x10;
              } while ((ulong)uVar1 << 4 != lVar14);
            }
            in_RCX = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(colors,TypeInfo_IList_string,0);
label_045014ff:
            pSVar12 = pSVar13;
            pSVar8 = (System_String_o *)(*in_RCX->methodPtr)(colors,pSVar13,in_RCX->method);
            pSVar9 = (System_Char_array *)
                     Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                               (pSVar8,(MethodInfo *)pSVar12);
          }
        }
        pSVar11 = pSVar10;
        pSVar12 = pSVar9;
        bVar7 = System_String__op_Inequality
                          ((System_String_o *)pSVar9,(System_String_o *)pSVar10,(MethodInfo *)0x0);
        uVar15 = (undefined1)in_R8D;
        if ((char)bVar7 == '\0') {
          pSVar12 = (System_Char_array *)text;
          uVar5 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
          uVar15 = (undefined1)in_R8D;
          if (__this == (System_Char_array *)0x0) goto label_045015bf;
        }
        else {
          pSVar13 = pSVar11;
          if (__this == (System_Char_array *)0x0) goto label_045015bf;
          pSVar13 = (System_Char_array *)&g_data_0000005b;
          pSVar12 = __this;
          pSVar10 = (System_Char_array *)
                    System_Text_StringBuilder__Append_3b048f0
                              ((System_Text_StringBuilder_o *)__this,0x5b,(MethodInfo *)0x0);
          uVar15 = (undefined1)in_R8D;
          if (pSVar9 == (System_Char_array *)0x0) goto label_045015bf;
          pSVar13 = (System_Char_array *)0x0;
          pSVar12 = pSVar9;
          pSVar11 = (System_Char_array *)
                    System_String__ToLowerInvariant((System_String_o *)pSVar9,(MethodInfo *)0x0);
          uVar15 = (undefined1)in_R8D;
          if (pSVar10 == (System_Char_array *)0x0) goto label_045015bf;
          __this_00 = System_Text_StringBuilder__Append_3b03f90
                                ((System_Text_StringBuilder_o *)pSVar10,(System_String_o *)pSVar11,
                                 (MethodInfo *)0x0);
          uVar15 = (undefined1)in_R8D;
          pSVar13 = pSVar11;
          pSVar12 = pSVar10;
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_045015bf;
          System_Text_StringBuilder__Append_3b048f0(__this_00,0x5d,(MethodInfo *)0x0);
          uVar5 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
          pSVar10 = pSVar9;
        }
        pSVar13 = (System_Char_array *)(ulong)uVar5;
        pSVar12 = __this;
        System_Text_StringBuilder__Append_3b048f0
                  ((System_Text_StringBuilder_o *)__this,uVar5,(MethodInfo *)0x0);
        uVar15 = (undefined1)in_R8D;
        pSVar9 = (System_Char_array *)(ulong)(index + 1U);
      } while ((int)(index + 1U) < *(int *)&((System_Char_array *)text)->bounds);
    }
    if (__this != (System_Char_array *)0x0) {
      pIVar4 = (__this->obj).klass;
      pSVar8 = (System_String_o *)(*pIVar4->vtable[3].methodPtr)(__this,pIVar4->vtable[3].method);
      return pSVar8;
    }
  }
label_045015bf:
  uVar16 = il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar12,(MethodInfo *)0x0);
  pSVar12->bounds = (Il2CppArrayBounds *)pSVar13;
  il2cpp_runtime_helper_022b4080(&pSVar12->bounds,pSVar13);
  *(undefined4 *)&pSVar12->max_length = uVar16;
  *(undefined1 *)((long)&pSVar12->max_length + 4) = extraout_DL;
  *(VirtualInvokeData **)pSVar12->m_Items = in_RCX;
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_022b4080(pSVar12->m_Items,in_RCX);
  *(undefined1 *)(pSVar12->m_Items + 4) = uVar15;
  return pSVar8;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$SerializeGradient
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient (System_String_o* text, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x450d200

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__SerializeGradient
          (System_String_o *text,System_Collections_Generic_IList_string__o *stops,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  ushort uVar3;
  System_Collections_Generic_IList_string__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Il2CppArrayBounds *pIVar6;
  uint16_t uVar7;
  int iVar8;
  bool_conflict bVar9;
  System_Object_array *pSVar10;
  System_String_o *pSVar11;
  undefined8 *puVar12;
  System_Object_array *pSVar13;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  Il2CppObject *pIVar14;
  System_Text_StringBuilder_o *pSVar15;
  undefined4 extraout_var_01;
  System_Object_array *in_RCX;
  System_Object_array *pSVar16;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  long *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  ulong extraout_RDX_05;
  uint uVar17;
  System_Collections_Generic_List_object__o *unaff_RBX;
  uint uVar18;
  int iVar19;
  ulong unaff_RBP;
  uint uVar20;
  System_Object_array *pSVar21;
  MethodInfo *method_00;
  System_Object_array *pSVar22;
  long lVar23;
  System_Object_array *pSVar24;
  System_Object_array *serialized;
  long lVar25;
  System_Text_StringBuilder_o *value;
  System_Text_StringBuilder_o *value_00;
  undefined8 *unaff_R12;
  MethodInfo *pMVar26;
  System_Object_array *pSVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  UnityEngine_Color_o color;
  UnityEngine_Color_Fields UStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  System_Text_StringBuilder_o *pSStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  System_Object_array *pSStack_110;
  ulong uStack_108;
  System_Object_array *pSStack_100;
  System_Object_array *pSStack_f8;
  System_String_o *pSStack_f0;
  System_Object_array *pSStack_e8;
  System_Object_array *pSStack_e0;
  System_Object_array *pSStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  UnityEngine_Color_Fields UStack_90;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  System_Collections_Generic_List_object__o *pSStack_50;
  undefined8 *puStack_48;
  System_Collections_Generic_IList_string__o *pSStack_40;
  System_String_o *pSStack_38;
  ulong uStack_30;
  
  pSVar21 = (System_Object_array *)stops;
  if (g_data_057aed65 == '\0') {
    uStack_30 = 0x450d223;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    uStack_30 = 0x450d22f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_30 = 0x450d23b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    uStack_30 = 0x450d247;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed65 = '\x01';
  }
  if ((text == (System_String_o *)0x0) &&
     (text = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), text == (System_String_o *)0x0)) {
label_0450d3ce:
    uStack_30 = 0x450d3d3;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((stops == (System_Collections_Generic_IList_string__o *)0x0) || ((text->fields)._stringLength == 0)) {
      return text;
    }
    pSVar4 = stops->klass;
    uVar3._0_1_ = (pSVar4->_2).rank;
    uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar23 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar23) == TypeInfo_ICollection_string) {
          pSVar10 = (System_Object_array *)(pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar23));
          goto label_0450d2e1;
        }
        lVar23 = lVar23 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar23);
    }
    uStack_30 = 0x450d2c9;
    pSVar10 = (System_Object_array *)il2cpp_runtime_helper_02300d20(stops,TypeInfo_ICollection_string,0);
label_0450d2e1:
    uStack_30 = 0x450d2ea;
    iVar8 = (*(code *)(pSVar10->obj).klass)(stops,(pSVar10->obj).monitor);
    if (iVar8 == 0) {
      return text;
    }
    uVar18 = (text->fields)._stringLength;
    unaff_RBP = (ulong)uVar18;
    uStack_30 = 0x450d305;
    unaff_RBX = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    uStack_30 = 0x450d31c;
    System_Collections_Generic_List_object____ctor_362b930(unaff_RBX,uVar18,MethodInfo_List_1_System_String);
    uVar18 = (text->fields)._stringLength;
    pSVar21 = (System_Object_array *)(ulong)uVar18;
    pMVar26 = extraout_RDX;
    if ((int)uVar18 < 1) {
label_0450d3af:
      pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                          (text,(System_Collections_Generic_IList_string__o *)unaff_RBX,pMVar26);
      return pSVar11;
    }
    in_RCX = pSVar10;
    if (unaff_RBX != (System_Collections_Generic_List_object__o *)0x0) {
      unaff_RBP = 0;
      unaff_R12 = &MethodInfo_Void_Add;
      do {
        while( true ) {
          iVar8 = (int)unaff_RBP;
          uStack_30 = 0x450d36f;
          pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor
                              (iVar8,(int32_t)pSVar21,stops,(MethodInfo *)pSVar10);
          lVar23 = MethodInfo_Void_Add;
          piVar1 = &(unaff_RBX->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar10 = (unaff_RBX->fields)._items;
          in_RCX = (System_Object_array *)0x0;
          if (pSVar10 == (System_Object_array *)0x0) goto label_0450d3ce;
          uVar18 = (unaff_RBX->fields)._size;
          if ((uint)pSVar10->max_length <= uVar18) break;
          (unaff_RBX->fields)._size = uVar18 + 1;
          pSVar10->m_Items[(int)uVar18] = (Il2CppObject *)pSVar11;
          uStack_30 = 0x450d3a4;
          il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar18,pSVar11);
          unaff_RBP = (ulong)(iVar8 + 1U);
          uVar18 = (text->fields)._stringLength;
          pSVar21 = (System_Object_array *)(ulong)uVar18;
          pMVar26 = extraout_RDX_01;
          if ((int)uVar18 <= (int)(iVar8 + 1U)) goto label_0450d3af;
        }
        pSVar10 = *(System_Object_array **)(*(long *)(lVar23 + 0x20) + 0xc0);
        uStack_30 = 0x450d35a;
        System_Collections_Generic_List_object___AddWithResize
                  (unaff_RBX,(Il2CppObject *)pSVar11,(MethodInfo_362C220 *)pSVar10->m_Items[10]);
        unaff_RBP = (ulong)(iVar8 + 1U);
        uVar18 = (text->fields)._stringLength;
        pSVar21 = (System_Object_array *)(ulong)uVar18;
        pMVar26 = extraout_RDX_00;
      } while ((int)(iVar8 + 1U) < (int)uVar18);
      goto label_0450d3af;
    }
  }
  pSVar24 = (System_Object_array *)0x0;
  uStack_30 = 0x450d3dd;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor
            (0,(int32_t)pSVar21,stops,(MethodInfo *)in_RCX);
  uStack_30 = 0x450d3e2;
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = (System_String_o *)((ulong)pSVar21 & 0xffffffff);
  pSVar27 = (System_Object_array *)((ulong)pSVar24 & 0xffffffff);
  pSVar10 = pSVar21;
  serialized = pSVar24;
  pSStack_50 = unaff_RBX;
  puStack_48 = unaff_R12;
  pSStack_40 = stops;
  pSStack_38 = text;
  uStack_30 = unaff_RBP;
  if (g_data_057aed69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    serialized = (System_Object_array *)&TypeInfo_IList_string;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed69 = '\x01';
  }
  if (extraout_RDX_02 != (long *)0x0) {
    lVar23 = *extraout_RDX_02;
    if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
      lVar25 = 0;
      do {
        if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar25) == TypeInfo_ICollection_string) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar25) * 0x10 + lVar23 + 0x138);
          goto label_0450d491;
        }
        lVar25 = lVar25 + 0x10;
      } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar25);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(extraout_RDX_02,TypeInfo_ICollection_string,0);
label_0450d491:
    iVar8 = (*(code *)*puVar12)(extraout_RDX_02,puVar12[1]);
    if (((int)pSVar21 < 2) || (iVar8 == 1)) {
      lVar23 = *extraout_RDX_02;
      if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
        lVar25 = 0;
        do {
          if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar25) == TypeInfo_IList_string) {
            puVar12 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar25) * 0x10 + lVar23 + 0x138);
            goto label_0450d551;
          }
          lVar25 = lVar25 + 0x10;
        } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar25);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(extraout_RDX_02,TypeInfo_IList_string,0);
label_0450d551:
      pMVar26 = (MethodInfo *)0x0;
      pSVar11 = (System_String_o *)(*(code *)*puVar12)(extraout_RDX_02,0,puVar12[1]);
      pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar11,pMVar26);
      return pSVar11;
    }
    lVar23 = *extraout_RDX_02;
    if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
      lVar25 = 0;
      do {
        if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar25) == TypeInfo_ICollection_string) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar25) * 0x10 + lVar23 + 0x138);
          goto label_0450d583;
        }
        lVar25 = lVar25 + 0x10;
      } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar25);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(extraout_RDX_02,TypeInfo_ICollection_string,0);
label_0450d583:
    iVar8 = (*(code *)*puVar12)(extraout_RDX_02,puVar12[1]);
    fVar28 = (float)(iVar8 + -1);
    if (g_data_057a690a == '\0') {
      fStack_80 = (float)(iVar8 + -1);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690a = '\x01';
      fVar28 = fStack_80;
    }
    fVar28 = ((float)(int)pSVar24 / (float)((int)pSVar21 + -1)) * fVar28;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar29 = floorf(fVar28);
    uVar18 = (uint)fVar29;
    lVar23 = *extraout_RDX_02;
    if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
      lVar25 = 0;
      do {
        if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar25) == TypeInfo_ICollection_string) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar25) * 0x10 + lVar23 + 0x138);
          goto label_0450d651;
        }
        lVar25 = lVar25 + 0x10;
      } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar25);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(extraout_RDX_02,TypeInfo_ICollection_string,0);
label_0450d651:
    iVar8 = (*(code *)*puVar12)(extraout_RDX_02,puVar12[1]);
    uVar17 = iVar8 - 1U;
    if ((int)uVar18 < (int)(iVar8 - 1U)) {
      uVar17 = uVar18;
    }
    uVar20 = 0;
    if (-1 < (int)uVar18) {
      uVar20 = uVar17;
    }
    lVar23 = *extraout_RDX_02;
    if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
      lVar25 = 0;
      do {
        if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar25) == TypeInfo_ICollection_string) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar25) * 0x10 + lVar23 + 0x138);
          goto label_0450d6c1;
        }
        lVar25 = lVar25 + 0x10;
      } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar25);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(extraout_RDX_02,TypeInfo_ICollection_string,0);
label_0450d6c1:
    iVar8 = (*(code *)*puVar12)(extraout_RDX_02,puVar12[1]);
    uVar18 = iVar8 - 1U;
    if ((int)(uVar20 + 1) <= (int)(iVar8 - 1U)) {
      uVar18 = uVar20 + 1;
    }
    pMVar26 = (MethodInfo *)(ulong)uVar18;
    lVar23 = *extraout_RDX_02;
    if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
      lVar25 = 0;
      do {
        if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar25) == TypeInfo_IList_string) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar25) * 0x10 + lVar23 + 0x138);
          goto label_0450d741;
        }
        lVar25 = lVar25 + 0x10;
      } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar25);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(extraout_RDX_02,TypeInfo_IList_string,0);
label_0450d741:
    fStack_80 = (float)(int)uVar20;
    method_00 = (MethodInfo *)(ulong)uVar20;
    pSVar11 = (System_String_o *)(*(code *)*puVar12)(extraout_RDX_02,method_00,puVar12[1]);
    if (g_data_057aed6a == '\0') {
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed6a = '\x01';
    }
    fVar28 = fVar28 - fStack_80;
    UStack_90.r = 0.0;
    UStack_90.g = 0.0;
    UStack_90.b = 0.0;
    UStack_90.a = 0.0;
    pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar11,method_00);
    pSVar11 = System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
    bVar9 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar11,(UnityEngine_Color_o *)&UStack_90,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      fStack_80 = 1.0;
      fStack_7c = 1.0;
      fStack_70 = fStack_80;
      fStack_6c = fStack_7c;
    }
    else {
      fStack_70 = UStack_90.r;
      fStack_6c = UStack_90.g;
      fStack_80 = UStack_90.b;
      fStack_7c = UStack_90.a;
    }
    fVar29 = 1.0;
    if (fVar28 <= 1.0) {
      fVar29 = fVar28;
    }
    lVar23 = *extraout_RDX_02;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
      lVar25 = 0;
      do {
        if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar25) == TypeInfo_IList_string) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar25) * 0x10 + lVar23 + 0x138);
          goto label_0450d863;
        }
        lVar25 = lVar25 + 0x10;
      } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar25);
    }
    auStack_60 = ZEXT416((uint)fVar29);
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(extraout_RDX_02,TypeInfo_IList_string,0);
    fVar29 = (float)auStack_60._0_4_;
label_0450d863:
    fVar29 = (float)(-(uint)(0.0 <= fVar28) & (uint)fVar29);
    pSVar11 = (System_String_o *)(*(code *)*puVar12)(extraout_RDX_02,pMVar26,puVar12[1]);
    if (g_data_057aed6a == '\0') {
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed6a = '\x01';
    }
    UStack_90.r = 0.0;
    UStack_90.g = 0.0;
    UStack_90.b = 0.0;
    UStack_90.a = 0.0;
    pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar11,pMVar26);
    pSVar11 = System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
    bVar9 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar11,(UnityEngine_Color_o *)&UStack_90,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      fVar28 = 1.0;
      fVar30 = 1.0;
      fVar31 = fVar28;
      fVar32 = fVar30;
    }
    else {
      fVar28 = UStack_90.r;
      fVar30 = UStack_90.g;
      fVar31 = UStack_90.b;
      fVar32 = UStack_90.a;
    }
    fVar33 = 0.0;
    if (0.0 <= fVar29) {
      fVar33 = fVar29;
    }
    color.fields.r = (fVar28 - fStack_70) * fVar33 + fStack_70;
    color.fields.g = (fVar30 - fStack_6c) * fVar33 + fStack_6c;
    color.fields.b = (fVar31 - fStack_80) * fVar33 + fStack_80;
    color.fields.a = (fVar32 - fStack_7c) * fVar33 + fStack_7c;
    pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
    return pSVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar21 = pSVar10;
  plStack_d0 = extraout_RDX_02;
  puStack_c8 = unaff_R12;
  if (g_data_057aed66 == '\0') {
    pSStack_f0 = (System_String_o *)0x450d959;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_f0 = (System_String_o *)0x450d965;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStack_f0 = (System_String_o *)0x450d971;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    pSStack_f0 = (System_String_o *)0x450d97d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_f0 = (System_String_o *)0x450d989;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pSStack_f0 = (System_String_o *)0x450d995;
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed66 = '\x01';
  }
  pSStack_f0 = (System_String_o *)0x450d9a4;
  pSVar24 = serialized;
  pSStack_e8 = (System_Object_array *)
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                         ((System_String_o *)serialized,(MethodInfo *)pSVar21);
  if ((pSVar10 != (System_Object_array *)0x0) ||
     (pSVar10 = (System_Object_array *)**(long **)(g_data_057b9c00 + 0xb8), pSVar10 != (System_Object_array *)0x0
     )) {
    uVar18 = *(uint *)&pSVar10->bounds;
    serialized = (System_Object_array *)(ulong)uVar18;
    pSStack_f0 = (System_String_o *)0x450d9e1;
    pSVar13 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pSVar21 = (System_Object_array *)(ulong)uVar18;
    pSStack_f0 = (System_String_o *)0x450d9f8;
    pSVar24 = pSVar13;
    System_Collections_Generic_List_object____ctor_362b930
              ((System_Collections_Generic_List_object__o *)pSVar13,uVar18,MethodInfo_List_1_System_String);
    if (0 < *(int *)&pSVar10->bounds) {
      if (pSVar13 == (System_Object_array *)0x0) goto label_0450dd55;
      serialized = (System_Object_array *)0x0;
      pSVar27 = (System_Object_array *)&"FFFFFF";
      pSVar11 = (System_String_o *)&MethodInfo_Void_Add;
      do {
        while( true ) {
          pSVar21 = "FFFFFF";
          lVar23 = MethodInfo_Void_Add;
          piVar2 = (int *)((long)&pSVar13->max_length + 4);
          *piVar2 = *piVar2 + 1;
          pIVar6 = pSVar13->bounds;
          if (pIVar6 == (Il2CppArrayBounds *)0x0) goto label_0450dd55;
          uVar18 = (uint)pSVar13->max_length;
          if ((uint)pIVar6[1].lower_bound <= uVar18) break;
          *(uint *)&pSVar13->max_length = uVar18 + 1;
          pSVar24 = (System_Object_array *)(&pIVar6[2].length + (int)uVar18);
          (&pIVar6[2].length)[(int)uVar18] = (il2cpp_array_size_t)pSVar21;
          pSStack_f0 = (System_String_o *)0x450da7f;
          il2cpp_runtime_helper_022b4080();
          uVar18 = (int)serialized + 1;
          serialized = (System_Object_array *)(ulong)uVar18;
          if (*(int *)&pSVar10->bounds <= (int)uVar18) goto label_0450da88;
        }
        pSStack_f0 = (System_String_o *)0x450da37;
        pSVar24 = pSVar13;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar13,&pSVar21->obj,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        uVar18 = (int)serialized + 1;
        serialized = (System_Object_array *)(ulong)uVar18;
      } while ((int)uVar18 < *(int *)&pSVar10->bounds);
    }
label_0450da88:
    serialized = pSStack_e8;
    if ((pSStack_e8 != (System_Object_array *)0x0) &&
       (pSVar24 = ((System_Collections_Generic_List_object__Fields *)&pSStack_e8->bounds)->_items,
       pSVar24 != (System_Object_array *)0x0)) {
      uVar18 = 0;
      pSStack_e0 = pSVar10;
      do {
        if ((*(int *)&pSVar24->bounds <= (int)uVar18) || (*(int *)&pSVar10->bounds <= (int)uVar18)) {
label_0450daf9:
          pSVar10 = pSStack_e0;
          pSVar21 = (System_Object_array *)(ulong)*(uint *)&pSVar24->bounds;
          if (0 < (int)(*(uint *)&pSVar24->bounds - uVar18)) {
            pSVar16 = (System_Object_array *)0x0;
            serialized = (System_Object_array *)&g_data_ffffffff;
            pSVar11 = (System_String_o *)0x0;
            pSStack_d8 = pSVar13;
            goto label_0450db30;
          }
          pSVar11 = (System_String_o *)0x0;
          pSVar16 = (System_Object_array *)0x0;
          goto joined_r0x0450dcfd;
        }
        pSStack_f0 = (System_String_o *)0x450dac6;
        uVar7 = System_String__get_Chars((System_String_o *)pSVar24,uVar18,(MethodInfo *)0x0);
        pSVar11 = (System_String_o *)(CONCAT62(extraout_var,uVar7) & 0xffffffff);
        pSVar21 = (System_Object_array *)(ulong)uVar18;
        pSStack_f0 = (System_String_o *)0x450dad5;
        uVar7 = System_String__get_Chars((System_String_o *)pSVar10,uVar18,(MethodInfo *)0x0);
        if ((uint16_t)pSVar11 != uVar7) {
          pSVar24 = ((System_Collections_Generic_List_object__Fields *)&serialized->bounds)->_items;
          if (pSVar24 != (System_Object_array *)0x0) goto label_0450daf9;
          break;
        }
        uVar18 = uVar18 + 1;
        pSVar24 = ((System_Collections_Generic_List_object__Fields *)&serialized->bounds)->_items;
      } while (pSVar24 != (System_Object_array *)0x0);
    }
  }
  goto label_0450dd55;
  while( true ) {
    iVar8 = (int)serialized;
    pSStack_f0 = (System_String_o *)0x450db47;
    uVar7 = System_String__get_Chars((System_String_o *)pSVar24,(int)pSVar21 + iVar8,(MethodInfo *)0x0);
    pSVar11 = (System_String_o *)(CONCAT62(extraout_var_00,uVar7) & 0xffffffff);
    uVar20 = *(int *)&pSVar10->bounds + iVar8;
    pSVar21 = (System_Object_array *)(ulong)uVar20;
    pSStack_f0 = (System_String_o *)0x450db59;
    pSVar24 = pSVar10;
    uVar7 = System_String__get_Chars((System_String_o *)pSVar10,uVar20,(MethodInfo *)0x0);
    pSVar13 = pSStack_d8;
    if ((uint16_t)pSVar11 != uVar7) {
      serialized = (System_Object_array *)(ulong)(iVar8 + 1U);
      pSVar11 = (System_String_o *)(ulong)(iVar8 + 1U);
      break;
    }
    pSVar24 = ((System_Collections_Generic_List_object__Fields *)&pSStack_e8->bounds)->_items;
    if (pSVar24 == (System_Object_array *)0x0) goto label_0450dd55;
    pSVar11 = (System_String_o *)(ulong)~uVar17;
    pSVar16 = (System_Object_array *)(ulong)(uVar17 + 1);
    pSVar21 = (System_Object_array *)(ulong)*(uint *)&pSVar24->bounds;
    serialized = (System_Object_array *)(ulong)(iVar8 - 1);
    if ((int)(*(uint *)&pSVar24->bounds + -uVar18) <= (int)(uVar17 + 1)) break;
label_0450db30:
    uVar17 = (uint)pSVar16;
    pSVar27 = pSVar10;
    pSVar13 = pSStack_d8;
    if ((int)(*(int *)&pSVar10->bounds + -uVar18) <= (int)uVar17) break;
  }
joined_r0x0450dcfd:
  pSVar10 = pSVar16;
  if (uVar18 == 0) {
label_0450dbed:
    iVar8 = (int)pSVar16;
    if (iVar8 != 0) {
      pSVar22 = pSVar16;
      if (pSVar13 == (System_Object_array *)0x0) goto label_0450dd2b;
      do {
        pSVar10 = ((System_Collections_Generic_List_object__Fields *)&pSStack_e8->bounds)->_items;
        pSVar27 = pSVar22;
        if (pSVar10 == (System_Object_array *)0x0) goto label_0450dd55;
        pSVar24 = (System_Object_array *)0x0;
        if ((System_Collections_Generic_List_object__o *)pSStack_e8->max_length ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_0450dd55;
        iVar19 = (int)pSVar11;
        uVar17 = *(int *)&pSStack_e0->bounds + iVar19;
        serialized = (System_Object_array *)(ulong)uVar17;
        pSStack_f0 = (System_String_o *)0x450dc3c;
        pIVar14 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSStack_e8->max_length,
                             *(int *)&pSVar10->bounds + iVar19,MethodInfo_String_get_Item);
        pSVar21 = (System_Object_array *)(ulong)uVar17;
        pSStack_f0 = (System_String_o *)0x450dc53;
        pSVar10 = MethodInfo_Void_set_Item;
        pSVar24 = pSVar13;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar13,uVar17,pIVar14,
                   (MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
        pSVar11 = (System_String_o *)(ulong)(iVar19 + 1);
        uVar17 = (int)pSVar22 - 1;
        pSVar22 = (System_Object_array *)(ulong)uVar17;
      } while (uVar17 != 0);
    }
    pSVar21 = (System_Object_array *)(ulong)uVar18;
    pSStack_f0 = (System_String_o *)0x450dc6e;
    pSVar24 = pSStack_e8;
    pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__EditColor
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)pSStack_e8,uVar18,
                         iVar8,(MethodInfo *)pSVar10);
    uVar17 = *(int *)&pSStack_e0->bounds - iVar8;
    serialized = (System_Object_array *)(ulong)uVar17;
    pMVar26 = extraout_RDX_03;
    if ((int)uVar17 <= (int)uVar18) {
label_0450dcba:
      pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                          ((System_String_o *)pSStack_e0,(System_Collections_Generic_IList_string__o *)pSVar13
                           ,pMVar26);
      return pSVar11;
    }
    pSVar27 = pSVar16;
    if (pSVar13 != (System_Object_array *)0x0) {
      do {
        pSStack_f0 = (System_String_o *)0x450dcb1;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar13,uVar18,(Il2CppObject *)pSVar11,
                   (MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
        uVar18 = uVar18 + 1;
        pMVar26 = extraout_RDX_04;
      } while (uVar17 != uVar18);
      goto label_0450dcba;
    }
  }
  else {
    if (pSVar13 != (System_Object_array *)0x0) {
      serialized = (System_Object_array *)&MethodInfo_Void_set_Item;
      pSVar22 = (System_Object_array *)0x0;
      do {
        pSVar24 = (System_Object_array *)0x0;
        pSVar27 = pSVar22;
        if ((System_Collections_Generic_List_object__o *)pSStack_e8->max_length ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_0450dd55;
        iVar8 = (int)pSVar22;
        pSStack_f0 = (System_String_o *)0x450dbd3;
        pIVar14 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSStack_e8->max_length,iVar8,
                             MethodInfo_String_get_Item);
        pSStack_f0 = (System_String_o *)0x450dbe4;
        pSVar10 = MethodInfo_Void_set_Item;
        pSVar24 = pSVar13;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar13,iVar8,pIVar14,
                   (MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
        pSVar27 = (System_Object_array *)(ulong)(iVar8 + 1U);
        pSVar21 = pSVar22;
        pSVar22 = pSVar27;
      } while (uVar18 != iVar8 + 1U);
      goto label_0450dbed;
    }
    pSVar24 = (System_Object_array *)pSStack_e8->max_length;
    if (pSVar24 == (System_Object_array *)0x0) goto label_0450dd55;
    pSVar21 = (System_Object_array *)0x0;
    pSStack_f0 = (System_String_o *)0x450dd26;
    System_Collections_Generic_List_object___get_Item
              ((System_Collections_Generic_List_object__o *)pSVar24,0,MethodInfo_String_get_Item);
    pSStack_f0 = (System_String_o *)0x450dd2b;
    il2cpp_runtime_helper_022b2c90();
label_0450dd2b:
    pSVar10 = ((System_Collections_Generic_List_object__Fields *)&pSStack_e8->bounds)->_items;
    if ((pSVar10 != (System_Object_array *)0x0) &&
       (pSVar24 = (System_Object_array *)pSStack_e8->max_length, pSVar24 != (System_Object_array *)0x0)) {
      uVar18 = (int)pSVar11 + *(int *)&pSVar10->bounds;
      pSVar11 = (System_String_o *)(ulong)uVar18;
      pSVar21 = (System_Object_array *)(ulong)uVar18;
      pSStack_f0 = (System_String_o *)0x450dd55;
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)pSVar24,uVar18,MethodInfo_String_get_Item);
    }
  }
label_0450dd55:
  pSStack_f0 = (System_String_o *)0x450dd5a;
  il2cpp_runtime_helper_022b2c90();
  pSVar10 = pSVar21;
  pSStack_100 = serialized;
  pSStack_f8 = pSVar27;
  pSStack_f0 = pSVar11;
  if (g_data_057aed6d == '\0') {
    uStack_108 = 0x450dd81;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    uStack_108 = 0x450dd8d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    uStack_108 = 0x450dd99;
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed6d = '\x01';
  }
  uVar7 = (uint16_t)pSVar10;
  if ((pSVar24 != (System_Object_array *)0x0) &&
     (pSVar15 = (System_Text_StringBuilder_o *)pSVar24->max_length,
     pSVar15 != (System_Text_StringBuilder_o *)0x0)) {
    iVar8 = (int)pSVar21;
    if ((0 < iVar8) && (iVar8 <= *(int *)&(pSVar15->fields).m_ChunkPrevious)) {
      uVar18 = iVar8 - 1;
label_0450ddfc:
      pMVar26 = (MethodInfo *)(ulong)uVar18;
      uStack_108 = 0x450de01;
      pSVar11 = (System_String_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar15,uVar18,MethodInfo_String_get_Item);
      pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar11,pMVar26);
      return pSVar11;
    }
    if (0 < (int)extraout_RDX_05) {
      pSVar10 = ((System_Collections_Generic_List_object__Fields *)&pSVar24->bounds)->_items;
      if (pSVar10 == (System_Object_array *)0x0) {
        uStack_108 = 0x450de12;
        uStack_118 = il2cpp_runtime_helper_022b2c90();
        value = pSVar15;
        pSStack_110 = pSVar24;
        uStack_108 = (ulong)pSVar21 & 0xffffffff;
        if (g_data_057aed6e == '\0') {
          uStack_120 = 0x450de3d;
          il2cpp_runtime_helper_023445d0(&"&gt;");
          value = (System_Text_StringBuilder_o *)&"&lt;";
          uStack_120 = 0x450de49;
          il2cpp_runtime_helper_023445d0();
          g_data_057aed6e = '\x01';
        }
        if (uVar7 == 0x3c) {
          if (pSVar15 == (System_Text_StringBuilder_o *)0x0) {
label_0450de9c:
            uStack_120 = 0x450dea1;
            uStack_130 = il2cpp_runtime_helper_022b2c90();
            pSVar11 = (System_String_o *)0x0;
            pMVar26 = (MethodInfo *)0x0;
            uStack_138 = 0x450dec0;
            value_00 = value;
            pSStack_128 = pSVar15;
            uStack_120 = extraout_RDX_05 & 0xffffffff;
            bVar9 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              if (value == (System_Text_StringBuilder_o *)0x0) {
                uStack_138 = 0x450df1f;
                il2cpp_runtime_helper_022b2c90();
                uStack_138 = 0;
                if (g_data_057aed6a == '\0') {
                  il2cpp_runtime_helper_023445d0(&"#");
                  g_data_057aed6a = '\x01';
                }
                UStack_148.r = 0.0;
                UStack_148.g = 0.0;
                UStack_148.b = 0.0;
                UStack_148.a = 0.0;
                pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                    ((System_String_o *)value_00,pMVar26);
                pSVar11 = System_String__Concat_3ae5ba0("#",pSVar11,(MethodInfo *)0x0);
                bVar9 = UnityEngine_ColorUtility__TryParseHtmlString
                                  (pSVar11,(UnityEngine_Color_o *)&UStack_148,(MethodInfo *)0x0);
                if ((char)bVar9 == '\0') {
                  return (System_String_o *)CONCAT44(extraout_var_01,bVar9);
                }
                return (System_String_o *)CONCAT44(extraout_var_01,bVar9);
              }
              pSVar11 = (System_String_o *)0x0;
              if (*(int *)&(value->fields).m_ChunkChars == 6) {
                do {
                  uStack_138 = 0x450def5;
                  uVar7 = System_String__get_Chars((System_String_o *)value,(int)pSVar11,(MethodInfo *)0x0);
                  if ((9 < (ushort)(uVar7 - 0x30)) && (5 < (ushort)((uVar7 & 0xffdf) - 0x41))) {
                    return (System_String_o *)0x0;
                  }
                  uVar18 = (int)pSVar11 + 1;
                  pSVar11 = (System_String_o *)(ulong)uVar18;
                } while ((int)uVar18 < *(int *)&(value->fields).m_ChunkChars);
                pSVar11 = (System_String_o *)CONCAT71((uint7)(uint3)(uVar18 >> 8),1);
              }
            }
            return pSVar11;
          }
          puVar12 = &"&lt;";
        }
        else {
          if (pSVar15 == (System_Text_StringBuilder_o *)0x0) goto label_0450de9c;
          if (uVar7 != 0x3e) {
            pSVar15 = System_Text_StringBuilder__Append_3b048f0(pSVar15,uVar7,(MethodInfo *)0x0);
            return (System_String_o *)pSVar15;
          }
          puVar12 = &"&gt;";
        }
        pSVar15 = System_Text_StringBuilder__Append_3b03f90
                            (pSVar15,(System_String_o *)*puVar12,(MethodInfo *)0x0);
        return (System_String_o *)pSVar15;
      }
      uVar18 = *(int *)&pSVar10->bounds - (int)extraout_RDX_05;
      if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)&(pSVar15->fields).m_ChunkPrevious)) goto label_0450ddfc;
    }
  }
  return (System_String_o *)"FFFFFF";
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$Retarget
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Retarget (System_String_o* previousSerialized, System_String_o* nextText, const MethodInfo* method);
// 0x450d930

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Retarget
          (System_String_o *previousSerialized,System_String_o *nextText,MethodInfo *method)

{
  int *piVar1;
  Il2CppArrayBounds *pIVar2;
  long lVar3;
  uint16_t uVar4;
  bool_conflict bVar5;
  System_Object_array *pSVar6;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  undefined8 *puVar9;
  System_Text_StringBuilder_o *pSVar10;
  undefined4 extraout_var_01;
  System_Object_array *pSVar11;
  System_Object_array *pSVar12;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar13;
  ulong extraout_RDX_01;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  System_String_o *unaff_RBP;
  uint uVar18;
  System_Object_array *method_00;
  System_Object_array *pSVar19;
  System_Object_array *__this;
  System_Text_StringBuilder_o *value;
  System_Text_StringBuilder_o *value_00;
  System_Object_array *unaff_R14;
  UnityEngine_Color_Fields UStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  System_Text_StringBuilder_o *pSStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  System_Object_array *pSStack_70;
  ulong uStack_68;
  System_Object_array *pSStack_60;
  System_Object_array *pSStack_58;
  System_String_o *pSStack_50;
  System_Object_array *pSStack_48;
  System_Object_array *pSStack_40;
  System_Object_array *pSStack_38;
  
  method_00 = (System_Object_array *)nextText;
  if (g_data_057aed66 == '\0') {
    pSStack_50 = (System_String_o *)0x450d959;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_50 = (System_String_o *)0x450d965;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStack_50 = (System_String_o *)0x450d971;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    pSStack_50 = (System_String_o *)0x450d97d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_50 = (System_String_o *)0x450d989;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pSStack_50 = (System_String_o *)0x450d995;
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed66 = '\x01';
  }
  pSStack_50 = (System_String_o *)0x450d9a4;
  __this = (System_Object_array *)previousSerialized;
  pSStack_48 = (System_Object_array *)
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                         (previousSerialized,(MethodInfo *)method_00);
  if ((nextText != (System_String_o *)0x0) ||
     (nextText = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8),
     (System_Object_array *)nextText != (System_Object_array *)0x0)) {
    uVar14 = *(uint *)&((System_Collections_Generic_List_object__Fields *)
                       &((System_Object_array *)nextText)->bounds)->_items;
    previousSerialized = (System_String_o *)(ulong)uVar14;
    pSStack_50 = (System_String_o *)0x450d9e1;
    pSVar6 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    method_00 = (System_Object_array *)(ulong)uVar14;
    pSStack_50 = (System_String_o *)0x450d9f8;
    __this = pSVar6;
    System_Collections_Generic_List_object____ctor_362b930
              ((System_Collections_Generic_List_object__o *)pSVar6,uVar14,MethodInfo_List_1_System_String);
    if (0 < *(int *)&((System_Collections_Generic_List_object__Fields *)
                     &((System_Object_array *)nextText)->bounds)->_items) {
      if (pSVar6 == (System_Object_array *)0x0) goto label_0450dd55;
      previousSerialized = (System_String_o *)0x0;
      unaff_R14 = (System_Object_array *)&"FFFFFF";
      unaff_RBP = (System_String_o *)&MethodInfo_Void_Add;
      do {
        while( true ) {
          method_00 = "FFFFFF";
          lVar3 = MethodInfo_Void_Add;
          piVar1 = (int *)((long)&pSVar6->max_length + 4);
          *piVar1 = *piVar1 + 1;
          pIVar2 = pSVar6->bounds;
          if (pIVar2 == (Il2CppArrayBounds *)0x0) goto label_0450dd55;
          uVar14 = (uint)pSVar6->max_length;
          if ((uint)pIVar2[1].lower_bound <= uVar14) break;
          *(uint *)&pSVar6->max_length = uVar14 + 1;
          __this = (System_Object_array *)(&pIVar2[2].length + (int)uVar14);
          (&pIVar2[2].length)[(int)uVar14] = (il2cpp_array_size_t)method_00;
          pSStack_50 = (System_String_o *)0x450da7f;
          il2cpp_runtime_helper_022b4080();
          uVar14 = (int)previousSerialized + 1;
          previousSerialized = (System_String_o *)(ulong)uVar14;
          if (*(int *)&((System_Collections_Generic_List_object__Fields *)
                       &((System_Object_array *)nextText)->bounds)->_items <= (int)uVar14) goto label_0450da88;
        }
        pSStack_50 = (System_String_o *)0x450da37;
        __this = pSVar6;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,&method_00->obj,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        uVar14 = (int)previousSerialized + 1;
        previousSerialized = (System_String_o *)(ulong)uVar14;
      } while ((int)uVar14 <
               *(int *)&((System_Collections_Generic_List_object__Fields *)
                        &((System_Object_array *)nextText)->bounds)->_items);
    }
label_0450da88:
    previousSerialized = (System_String_o *)pSStack_48;
    if ((pSStack_48 != (System_Object_array *)0x0) &&
       (__this = ((System_Collections_Generic_List_object__Fields *)&pSStack_48->bounds)->_items,
       __this != (System_Object_array *)0x0)) {
      uVar14 = 0;
      pSStack_40 = (System_Object_array *)nextText;
      do {
        if ((*(int *)&((System_Collections_Generic_List_object__Fields *)&__this->bounds)->_items <=
             (int)uVar14) ||
           (*(int *)&((System_Collections_Generic_List_object__Fields *)
                     &((System_Object_array *)nextText)->bounds)->_items <= (int)uVar14)) {
label_0450daf9:
          pSVar12 = pSStack_40;
          uVar16 = *(uint *)&((System_Collections_Generic_List_object__Fields *)&__this->bounds)->_items;
          method_00 = (System_Object_array *)(ulong)uVar16;
          if (0 < (int)(uVar16 - uVar14)) {
            pSVar11 = (System_Object_array *)0x0;
            previousSerialized = (System_String_o *)&g_data_ffffffff;
            unaff_RBP = (System_String_o *)0x0;
            pSStack_38 = pSVar6;
            goto label_0450db30;
          }
          unaff_RBP = (System_String_o *)0x0;
          pSVar11 = (System_Object_array *)0x0;
          goto joined_r0x0450dcfd;
        }
        pSStack_50 = (System_String_o *)0x450dac6;
        uVar4 = System_String__get_Chars((System_String_o *)__this,uVar14,(MethodInfo *)0x0);
        unaff_RBP = (System_String_o *)(CONCAT62(extraout_var,uVar4) & 0xffffffff);
        method_00 = (System_Object_array *)(ulong)uVar14;
        pSStack_50 = (System_String_o *)0x450dad5;
        uVar4 = System_String__get_Chars(nextText,uVar14,(MethodInfo *)0x0);
        if ((uint16_t)unaff_RBP != uVar4) {
          __this = ((System_Collections_Generic_List_object__Fields *)
                   &((System_Object_array *)previousSerialized)->bounds)->_items;
          if (__this != (System_Object_array *)0x0) goto label_0450daf9;
          break;
        }
        uVar14 = uVar14 + 1;
        __this = ((System_Collections_Generic_List_object__Fields *)
                 &((System_Object_array *)previousSerialized)->bounds)->_items;
      } while (__this != (System_Object_array *)0x0);
    }
  }
  goto label_0450dd55;
  while( true ) {
    iVar15 = (int)previousSerialized;
    pSStack_50 = (System_String_o *)0x450db47;
    uVar4 = System_String__get_Chars((System_String_o *)__this,(int)method_00 + iVar15,(MethodInfo *)0x0);
    unaff_RBP = (System_String_o *)(CONCAT62(extraout_var_00,uVar4) & 0xffffffff);
    uVar18 = *(int *)&((System_Collections_Generic_List_object__Fields *)&pSVar12->bounds)->_items + iVar15;
    method_00 = (System_Object_array *)(ulong)uVar18;
    pSStack_50 = (System_String_o *)0x450db59;
    __this = pSVar12;
    uVar4 = System_String__get_Chars((System_String_o *)pSVar12,uVar18,(MethodInfo *)0x0);
    pSVar6 = pSStack_38;
    if ((uint16_t)unaff_RBP != uVar4) {
      previousSerialized = (System_String_o *)(ulong)(iVar15 + 1U);
      unaff_RBP = (System_String_o *)(ulong)(iVar15 + 1U);
      break;
    }
    __this = ((System_Collections_Generic_List_object__Fields *)&pSStack_48->bounds)->_items;
    if (__this == (System_Object_array *)0x0) goto label_0450dd55;
    unaff_RBP = (System_String_o *)(ulong)~uVar16;
    pSVar11 = (System_Object_array *)(ulong)(uVar16 + 1);
    uVar18 = *(uint *)&((System_Collections_Generic_List_object__Fields *)&__this->bounds)->_items;
    method_00 = (System_Object_array *)(ulong)uVar18;
    previousSerialized = (System_String_o *)(ulong)(iVar15 - 1);
    if ((int)(uVar18 + -uVar14) <= (int)(uVar16 + 1)) break;
label_0450db30:
    uVar16 = (uint)pSVar11;
    unaff_R14 = pSVar12;
    pSVar6 = pSStack_38;
    if ((int)(*(int *)&((System_Collections_Generic_List_object__Fields *)&pSVar12->bounds)->_items + -uVar14)
        <= (int)uVar16) break;
  }
joined_r0x0450dcfd:
  pSVar12 = pSVar11;
  if (uVar14 == 0) {
label_0450dbed:
    iVar15 = (int)pSVar11;
    if (iVar15 != 0) {
      pSVar19 = pSVar11;
      if (pSVar6 == (System_Object_array *)0x0) goto label_0450dd2b;
      do {
        pSVar12 = ((System_Collections_Generic_List_object__Fields *)&pSStack_48->bounds)->_items;
        unaff_R14 = pSVar19;
        if (pSVar12 == (System_Object_array *)0x0) goto label_0450dd55;
        __this = (System_Object_array *)0x0;
        if ((System_Collections_Generic_List_object__o *)pSStack_48->max_length ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_0450dd55;
        iVar17 = (int)unaff_RBP;
        uVar16 = *(int *)&((System_Collections_Generic_List_object__Fields *)&pSStack_40->bounds)->_items +
                 iVar17;
        previousSerialized = (System_String_o *)(ulong)uVar16;
        pSStack_50 = (System_String_o *)0x450dc3c;
        pIVar7 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSStack_48->max_length,
                            *(int *)&pSVar12->bounds + iVar17,MethodInfo_String_get_Item);
        method_00 = (System_Object_array *)(ulong)uVar16;
        pSStack_50 = (System_String_o *)0x450dc53;
        pSVar12 = MethodInfo_Void_set_Item;
        __this = pSVar6;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar6,uVar16,pIVar7,
                   (MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
        unaff_RBP = (System_String_o *)(ulong)(iVar17 + 1);
        uVar16 = (int)pSVar19 - 1;
        pSVar19 = (System_Object_array *)(ulong)uVar16;
      } while (uVar16 != 0);
    }
    method_00 = (System_Object_array *)(ulong)uVar14;
    pSStack_50 = (System_String_o *)0x450dc6e;
    __this = pSStack_48;
    unaff_RBP = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__EditColor
                          ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)pSStack_48,uVar14
                           ,iVar15,(MethodInfo *)pSVar12);
    uVar16 = *(int *)&((System_Collections_Generic_List_object__Fields *)&pSStack_40->bounds)->_items - iVar15
    ;
    previousSerialized = (System_String_o *)(ulong)uVar16;
    pMVar13 = extraout_RDX;
    if ((int)uVar16 <= (int)uVar14) {
label_0450dcba:
      pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                         ((System_String_o *)pSStack_40,(System_Collections_Generic_IList_string__o *)pSVar6,
                          pMVar13);
      return pSVar8;
    }
    unaff_R14 = pSVar11;
    if (pSVar6 != (System_Object_array *)0x0) {
      do {
        pSStack_50 = (System_String_o *)0x450dcb1;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar6,uVar14,(Il2CppObject *)unaff_RBP,
                   (MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
        uVar14 = uVar14 + 1;
        pMVar13 = extraout_RDX_00;
      } while (uVar16 != uVar14);
      goto label_0450dcba;
    }
  }
  else {
    if (pSVar6 != (System_Object_array *)0x0) {
      previousSerialized = (System_String_o *)&MethodInfo_Void_set_Item;
      pSVar19 = (System_Object_array *)0x0;
      do {
        __this = (System_Object_array *)0x0;
        unaff_R14 = pSVar19;
        if ((System_Collections_Generic_List_object__o *)pSStack_48->max_length ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_0450dd55;
        iVar15 = (int)pSVar19;
        pSStack_50 = (System_String_o *)0x450dbd3;
        pIVar7 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSStack_48->max_length,iVar15,
                            MethodInfo_String_get_Item);
        pSStack_50 = (System_String_o *)0x450dbe4;
        pSVar12 = MethodInfo_Void_set_Item;
        __this = pSVar6;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar6,iVar15,pIVar7,
                   (MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
        unaff_R14 = (System_Object_array *)(ulong)(iVar15 + 1U);
        method_00 = pSVar19;
        pSVar19 = unaff_R14;
      } while (uVar14 != iVar15 + 1U);
      goto label_0450dbed;
    }
    __this = (System_Object_array *)pSStack_48->max_length;
    if (__this == (System_Object_array *)0x0) goto label_0450dd55;
    method_00 = (System_Object_array *)0x0;
    pSStack_50 = (System_String_o *)0x450dd26;
    System_Collections_Generic_List_object___get_Item
              ((System_Collections_Generic_List_object__o *)__this,0,MethodInfo_String_get_Item);
    pSStack_50 = (System_String_o *)0x450dd2b;
    il2cpp_runtime_helper_022b2c90();
label_0450dd2b:
    pSVar6 = ((System_Collections_Generic_List_object__Fields *)&pSStack_48->bounds)->_items;
    if ((pSVar6 != (System_Object_array *)0x0) &&
       (__this = (System_Object_array *)pSStack_48->max_length, __this != (System_Object_array *)0x0)) {
      uVar14 = (int)unaff_RBP + *(int *)&pSVar6->bounds;
      unaff_RBP = (System_String_o *)(ulong)uVar14;
      method_00 = (System_Object_array *)(ulong)uVar14;
      pSStack_50 = (System_String_o *)0x450dd55;
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)__this,uVar14,MethodInfo_String_get_Item);
    }
  }
label_0450dd55:
  pSStack_50 = (System_String_o *)0x450dd5a;
  il2cpp_runtime_helper_022b2c90();
  pSVar6 = method_00;
  pSStack_60 = (System_Object_array *)previousSerialized;
  pSStack_58 = unaff_R14;
  pSStack_50 = unaff_RBP;
  if (g_data_057aed6d == '\0') {
    uStack_68 = 0x450dd81;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    uStack_68 = 0x450dd8d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    uStack_68 = 0x450dd99;
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed6d = '\x01';
  }
  uVar4 = (uint16_t)pSVar6;
  if ((__this != (System_Object_array *)0x0) &&
     (pSVar10 = (System_Text_StringBuilder_o *)__this->max_length,
     pSVar10 != (System_Text_StringBuilder_o *)0x0)) {
    iVar15 = (int)method_00;
    if ((0 < iVar15) && (iVar15 <= *(int *)&(pSVar10->fields).m_ChunkPrevious)) {
      uVar14 = iVar15 - 1;
label_0450ddfc:
      pMVar13 = (MethodInfo *)(ulong)uVar14;
      uStack_68 = 0x450de01;
      pSVar8 = (System_String_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar10,uVar14,MethodInfo_String_get_Item);
      pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar8,pMVar13);
      return pSVar8;
    }
    if (0 < (int)extraout_RDX_01) {
      pSVar6 = ((System_Collections_Generic_List_object__Fields *)&__this->bounds)->_items;
      if (pSVar6 == (System_Object_array *)0x0) {
        uStack_68 = 0x450de12;
        uStack_78 = il2cpp_runtime_helper_022b2c90();
        value = pSVar10;
        pSStack_70 = __this;
        uStack_68 = (ulong)method_00 & 0xffffffff;
        if (g_data_057aed6e == '\0') {
          uStack_80 = 0x450de3d;
          il2cpp_runtime_helper_023445d0(&"&gt;");
          value = (System_Text_StringBuilder_o *)&"&lt;";
          uStack_80 = 0x450de49;
          il2cpp_runtime_helper_023445d0();
          g_data_057aed6e = '\x01';
        }
        if (uVar4 == 0x3c) {
          if (pSVar10 == (System_Text_StringBuilder_o *)0x0) {
label_0450de9c:
            uStack_80 = 0x450dea1;
            uStack_90 = il2cpp_runtime_helper_022b2c90();
            pSVar8 = (System_String_o *)0x0;
            pMVar13 = (MethodInfo *)0x0;
            uStack_98 = 0x450dec0;
            value_00 = value;
            pSStack_88 = pSVar10;
            uStack_80 = extraout_RDX_01 & 0xffffffff;
            bVar5 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              if (value == (System_Text_StringBuilder_o *)0x0) {
                uStack_98 = 0x450df1f;
                il2cpp_runtime_helper_022b2c90();
                uStack_98 = 0;
                if (g_data_057aed6a == '\0') {
                  il2cpp_runtime_helper_023445d0(&"#");
                  g_data_057aed6a = '\x01';
                }
                UStack_a8.r = 0.0;
                UStack_a8.g = 0.0;
                UStack_a8.b = 0.0;
                UStack_a8.a = 0.0;
                pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                   ((System_String_o *)value_00,pMVar13);
                pSVar8 = System_String__Concat_3ae5ba0("#",pSVar8,(MethodInfo *)0x0);
                bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                                  (pSVar8,(UnityEngine_Color_o *)&UStack_a8,(MethodInfo *)0x0);
                if ((char)bVar5 == '\0') {
                  return (System_String_o *)CONCAT44(extraout_var_01,bVar5);
                }
                return (System_String_o *)CONCAT44(extraout_var_01,bVar5);
              }
              pSVar8 = (System_String_o *)0x0;
              if (*(int *)&(value->fields).m_ChunkChars == 6) {
                do {
                  uStack_98 = 0x450def5;
                  uVar4 = System_String__get_Chars((System_String_o *)value,(int)pSVar8,(MethodInfo *)0x0);
                  if ((9 < (ushort)(uVar4 - 0x30)) && (5 < (ushort)((uVar4 & 0xffdf) - 0x41))) {
                    return (System_String_o *)0x0;
                  }
                  uVar14 = (int)pSVar8 + 1;
                  pSVar8 = (System_String_o *)(ulong)uVar14;
                } while ((int)uVar14 < *(int *)&(value->fields).m_ChunkChars);
                pSVar8 = (System_String_o *)CONCAT71((uint7)(uint3)(uVar14 >> 8),1);
              }
            }
            return pSVar8;
          }
          puVar9 = &"&lt;";
        }
        else {
          if (pSVar10 == (System_Text_StringBuilder_o *)0x0) goto label_0450de9c;
          if (uVar4 != 0x3e) {
            pSVar10 = System_Text_StringBuilder__Append_3b048f0(pSVar10,uVar4,(MethodInfo *)0x0);
            return (System_String_o *)pSVar10;
          }
          puVar9 = &"&gt;";
        }
        pSVar10 = System_Text_StringBuilder__Append_3b03f90
                            (pSVar10,(System_String_o *)*puVar9,(MethodInfo *)0x0);
        return (System_String_o *)pSVar10;
      }
      uVar14 = *(int *)&pSVar6->bounds - (int)extraout_RDX_01;
      if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)&(pSVar10->fields).m_ChunkPrevious)) goto label_0450ddfc;
    }
  }
  return (System_String_o *)"FFFFFF";
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$RichText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__RichText (System_String_o* text, System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x45049c0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__RichText
          (System_String_o *text,System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_IList_string__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  uint16_t c;
  int iVar5;
  bool_conflict bVar6;
  System_Text_StringBuilder_o *__this;
  System_Text_StringBuilder_o *__this_00;
  System_Text_StringBuilder_o *__this_01;
  undefined8 *puVar7;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  undefined4 extraout_var;
  uint uVar11;
  VirtualInvokeData *in_RCX;
  MethodInfo *method_00;
  System_String_o *a_00;
  int index;
  MethodInfo *unaff_RBX;
  System_Text_StringBuilder_o *unaff_RBP;
  char cVar12;
  uint uVar13;
  MethodInfo *method_01;
  System_Text_StringBuilder_o *pSVar14;
  undefined8 uVar15;
  long lVar16;
  uint uStack_8c;
  SimpleJSONFixed_JSONNode_o *pSStack_88;
  uint uStack_74;
  UnityEngine_Color_Fields UStack_70;
  MethodInfo *pMStack_60;
  System_Collections_Generic_IList_string__o *pSStack_58;
  System_String_o *pSStack_50;
  System_Text_StringBuilder_o *pSStack_48;
  System_Text_StringBuilder_o *pSStack_40;
  
  if (g_data_057aed67 == '\0') {
    pSStack_40 = (System_Text_StringBuilder_o *)0x45049e6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    pSStack_40 = (System_Text_StringBuilder_o *)0x45049f2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList_string);
    pSStack_40 = (System_Text_StringBuilder_o *)0x45049fe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    pSStack_40 = (System_Text_StringBuilder_o *)0x4504a0a;
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    pSStack_40 = (System_Text_StringBuilder_o *)0x4504a16;
    il2cpp_runtime_helper_023445d0(&"<color=#");
    pSStack_40 = (System_Text_StringBuilder_o *)0x4504a22;
    il2cpp_runtime_helper_023445d0(&"</color>");
    g_data_057aed67 = '\x01';
  }
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSStack_40 = (System_Text_StringBuilder_o *)0x4504a55;
  __this = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  cVar12 = '\0';
  pSStack_40 = (System_Text_StringBuilder_o *)0x4504a62;
  pSVar14 = __this;
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  uVar11 = (uint)in_RCX;
  if (text != (System_String_o *)0x0) {
    unaff_RBP = (System_Text_StringBuilder_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    if (0 < (text->fields)._stringLength) {
      unaff_RBX = (MethodInfo *)0x0;
      pSVar14 = unaff_RBP;
      do {
        index = (int)unaff_RBX;
        unaff_RBP = "FFFFFF";
        if (colors != (System_Collections_Generic_IList_string__o *)0x0) {
          pSVar3 = colors->klass;
          uVar1._0_1_ = (pSVar3->_2).rank;
          uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar4 = (pSVar3->_1).interfaceOffsets;
            lVar16 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar16) == TypeInfo_ICollection_string) {
                in_RCX = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar16);
                goto label_04504b31;
              }
              lVar16 = lVar16 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar16);
          }
          pSStack_40 = (System_Text_StringBuilder_o *)0x4504b19;
          in_RCX = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(colors,TypeInfo_ICollection_string,0);
label_04504b31:
          pSStack_40 = (System_Text_StringBuilder_o *)0x4504b3a;
          iVar5 = (*in_RCX->methodPtr)(colors,in_RCX->method);
          unaff_RBP = "FFFFFF";
          if (index < iVar5) {
            pSVar3 = colors->klass;
            uVar2._0_1_ = (pSVar3->_2).rank;
            uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar4 = (pSVar3->_1).interfaceOffsets;
              lVar16 = 0;
              do {
                if (*(long *)((long)&pIVar4->interfaceType + lVar16) == TypeInfo_IList_string) {
                  in_RCX = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar16);
                  goto label_04504baf;
                }
                lVar16 = lVar16 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar16);
            }
            pSStack_40 = (System_Text_StringBuilder_o *)0x4504b89;
            in_RCX = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(colors,TypeInfo_IList_string,0);
label_04504baf:
            pSStack_40 = (System_Text_StringBuilder_o *)0x4504bba;
            method_01 = unaff_RBX;
            pSVar10 = (System_String_o *)(*in_RCX->methodPtr)(colors,unaff_RBX,in_RCX->method);
            pSStack_40 = (System_Text_StringBuilder_o *)0x4504bc2;
            unaff_RBP = (System_Text_StringBuilder_o *)
                        Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar10,method_01);
          }
        }
        pSStack_40 = (System_Text_StringBuilder_o *)0x4504bd2;
        bVar6 = System_String__op_Inequality
                          ((System_String_o *)unaff_RBP,(System_String_o *)pSVar14,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          cVar12 = '\0';
          pSStack_40 = (System_Text_StringBuilder_o *)0x4504be4;
          bVar6 = System_String__IsNullOrEmpty((System_String_o *)pSVar14,(MethodInfo *)0x0);
          uVar11 = (uint)in_RCX;
          if ((char)bVar6 == '\0') {
            if (__this == (System_Text_StringBuilder_o *)0x0) goto label_04504cb4;
            pSStack_40 = (System_Text_StringBuilder_o *)0x4504c1d;
            System_Text_StringBuilder__Append_3b03f90(__this,"</color>",(MethodInfo *)0x0);
          }
          else if (__this == (System_Text_StringBuilder_o *)0x0) goto label_04504cb4;
          pSStack_40 = (System_Text_StringBuilder_o *)0x4504c31;
          pSVar10 = "<color=#";
          pSVar14 = __this;
          __this_00 = System_Text_StringBuilder__Append_3b03f90(__this,"<color=#",(MethodInfo *)0x0);
          cVar12 = (char)pSVar10;
          uVar11 = (uint)in_RCX;
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_04504cb4;
          pSStack_40 = (System_Text_StringBuilder_o *)0x4504c43;
          pSVar14 = unaff_RBP;
          __this_01 = System_Text_StringBuilder__Append_3b03f90
                                (__this_00,(System_String_o *)unaff_RBP,(MethodInfo *)0x0);
          cVar12 = (char)pSVar14;
          uVar11 = (uint)in_RCX;
          pSVar14 = __this_00;
          if (__this_01 == (System_Text_StringBuilder_o *)0x0) goto label_04504cb4;
          pSStack_40 = (System_Text_StringBuilder_o *)0x4504c57;
          System_Text_StringBuilder__Append_3b048f0(__this_01,0x3e,(MethodInfo *)0x0);
          pSVar14 = unaff_RBP;
        }
        unaff_RBP = pSVar14;
        pSStack_40 = (System_Text_StringBuilder_o *)0x4504aaf;
        c = System_String__get_Chars(text,index,(MethodInfo *)0x0);
        pSStack_40 = (System_Text_StringBuilder_o *)0x4504aba;
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__AppendEscaped(__this,c,method_00);
        uVar11 = (uint)in_RCX;
        unaff_RBX = (MethodInfo *)(ulong)(index + 1U);
        pSVar14 = unaff_RBP;
      } while ((int)(index + 1U) < (text->fields)._stringLength);
    }
    cVar12 = '\0';
    pSStack_40 = (System_Text_StringBuilder_o *)0x4504c6c;
    pSVar14 = unaff_RBP;
    bVar6 = System_String__IsNullOrEmpty((System_String_o *)unaff_RBP,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (__this != (System_Text_StringBuilder_o *)0x0) {
        pSStack_40 = (System_Text_StringBuilder_o *)0x4504c90;
        System_Text_StringBuilder__Append_3b03f90(__this,"</color>",(MethodInfo *)0x0);
        goto label_04504c90;
      }
    }
    else if (__this != (System_Text_StringBuilder_o *)0x0) {
label_04504c90:
      pSVar10 = (System_String_o *)
                (*(__this->klass->vtable)._3_ToString.methodPtr)
                          (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar10;
    }
  }
label_04504cb4:
  pSStack_40 = (System_Text_StringBuilder_o *)0x4504cb9;
  il2cpp_runtime_helper_022b2c90();
  a = (SimpleJSONFixed_JSONNode_o *)((ulong)pSVar14 & 0xffffffff);
  pMStack_60 = unaff_RBX;
  pSStack_58 = colors;
  pSStack_50 = text;
  pSStack_48 = __this;
  pSStack_40 = unaff_RBP;
  if (g_data_057aed25 == '\0') {
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504ceb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504cf7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504d03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504d0f;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504d1b;
    il2cpp_runtime_helper_023445d0(&"colors");
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504d27;
    il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504d33;
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-effect");
    g_data_057aed25 = '\x01';
  }
  UStack_70.r = 0.0;
  UStack_70.g = 0.0;
  UStack_70.b = 0.0;
  UStack_70.a = 0.0;
  if ((char)a == '\0') {
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504d74;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar13 = 0;
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504d80;
    pSVar10 = a_00;
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pSVar9 = "#FFFFFFFF";
    if ((char)bVar6 != '\0') {
      if (a_00 != (System_String_o *)0x0) {
        pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504daf;
        a = (SimpleJSONFixed_JSONNode_o *)
            (*(((SimpleJSONFixed_JSONNode_c *)a_00->klass)->vtable)._7_get_Item.methodPtr)
                      (a_00,"colors",
                       (((SimpleJSONFixed_JSONNode_c *)a_00->klass)->vtable)._7_get_Item.method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504dc4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504dd0;
        bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        pSVar9 = "#FFFFFFFF";
        if ((char)bVar6 == '\0') goto label_04504f35;
        pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504def;
        uVar15 = "colors";
        pSVar10 = a_00;
        plVar8 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)a_00->klass)->vtable)._7_get_Item.methodPtr)
                                   (a_00,"colors",
                                    (((SimpleJSONFixed_JSONNode_c *)a_00->klass)->vtable)._7_get_Item.method);
        uVar13 = (uint)uVar15;
        if (plVar8 != (long *)0x0) {
          pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504e0e;
          a = (SimpleJSONFixed_JSONNode_o *)
              (**(code **)(*plVar8 + 0x188))(plVar8,uVar11,*(undefined8 *)(*plVar8 + 400));
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504e23;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504e2f;
          bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          pSVar9 = "#FFFFFFFF";
          if ((char)bVar6 == '\0') goto label_04504f35;
          pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504e4a;
          uVar15 = "colors";
          pSVar10 = a_00;
          pSVar9 = (System_String_o *)
                   (*(((SimpleJSONFixed_JSONNode_c *)a_00->klass)->vtable)._7_get_Item.methodPtr)
                             (a_00,"colors",
                              (((SimpleJSONFixed_JSONNode_c *)a_00->klass)->vtable)._7_get_Item.method);
          uVar13 = (uint)uVar15;
          if (pSVar9 != (System_String_o *)0x0) {
            pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504e69;
            uVar13 = uVar11;
            plVar8 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar9->klass)->vtable)._5_get_Item.methodPtr)
                                       (pSVar9,(ulong)uVar11,
                                        (((SimpleJSONFixed_JSONNode_c *)pSVar9->klass)->vtable)._5_get_Item.
                                        method);
            pSVar10 = pSVar9;
            if (plVar8 != (long *)0x0) {
              pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504e85;
              pSVar9 = (System_String_o *)
                       (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
              goto label_04504f35;
            }
          }
        }
      }
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504f8b;
      il2cpp_runtime_helper_022b2c90();
      uStack_8c = uVar13;
      pSStack_88 = a;
      if (g_data_057aedba == '\0') {
        il2cpp_runtime_helper_023445d0(&"-color-");
        g_data_057aedba = '\x01';
      }
      pSVar9 = System_Int32__ToString((int32_t)&uStack_8c,(MethodInfo *)0x0);
      pSVar10 = System_String__Concat_3af7150(pSVar10,"-color-",pSVar9,(MethodInfo *)0x0);
      return pSVar10;
    }
  }
  else {
    if (cVar12 == '\0') {
      puVar7 = &"profile-character-guild-effect";
    }
    else {
      puVar7 = &"profile-character-name-effect";
    }
    pSVar10 = (System_String_o *)*puVar7;
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504f6f;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_74 = uVar11;
    if (g_data_057aedba == '\0') {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504ed4;
      il2cpp_runtime_helper_023445d0(&"-color-");
      g_data_057aedba = '\x01';
    }
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504ee7;
    pSVar9 = System_Int32__ToString((int32_t)&uStack_74,(MethodInfo *)0x0);
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504efe;
    pSVar10 = System_String__Concat_3af7150(pSVar10,"-color-",pSVar9,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504f19;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504f32;
    pSVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(pSVar10,"#FFFFFFFF",1,(MethodInfo *)0x0);
  }
label_04504f35:
  pSStack_88 = (SimpleJSONFixed_JSONNode_o *)0x4504f41;
  bVar6 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar9,(UnityEngine_Color_o *)&UStack_70,(MethodInfo *)0x0);
  return (System_String_o *)CONCAT44(extraout_var,bVar6);
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$NormalizeRgb
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb (System_String_o* value, const MethodInfo* method);
// 0x450d070

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  ushort uVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Il2CppArrayBounds *pIVar6;
  UnityEngine_Color_o color;
  uint16_t uVar7;
  bool_conflict bVar8;
  int iVar9;
  undefined6 extraout_var;
  System_String_o *pSVar10;
  undefined6 extraout_var_00;
  System_Object_array *pSVar11;
  System_String_o *pSVar12;
  System_Object_array *pSVar13;
  undefined8 *puVar14;
  System_Object_array *pSVar15;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  Il2CppObject *pIVar16;
  System_Text_StringBuilder_o *pSVar17;
  undefined4 extraout_var_03;
  uint uVar18;
  System_Object_array *in_RCX;
  System_Object_array *pSVar19;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  long *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  ulong extraout_RDX_05;
  uint uVar20;
  System_Collections_Generic_List_object__o *unaff_RBX;
  int iVar21;
  ulong unaff_RBP;
  uint uVar22;
  System_Object_array *pSVar23;
  MethodInfo *method_00;
  System_Object_array *pSVar24;
  long lVar25;
  System_Object_array *serialized;
  long lVar26;
  System_Text_StringBuilder_o *value_00;
  System_Text_StringBuilder_o *value_01;
  undefined8 *unaff_R12;
  MethodInfo *pMVar27;
  System_Object_array *pSVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_Fields UStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  System_Text_StringBuilder_o *pSStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  System_Object_array *pSStack_138;
  ulong uStack_130;
  System_Object_array *pSStack_128;
  System_Object_array *pSStack_120;
  System_String_o *pSStack_118;
  System_Object_array *pSStack_110;
  System_Object_array *pSStack_108;
  System_Object_array *pSStack_100;
  long *plStack_f8;
  undefined8 *puStack_f0;
  UnityEngine_Color_Fields UStack_b8;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [16];
  System_Collections_Generic_List_object__o *pSStack_78;
  undefined8 *puStack_70;
  System_Object_array *pSStack_68;
  System_String_o *pSStack_60;
  ulong uStack_58;
  System_Collections_Generic_List_object__o *pSStack_50;
  UnityEngine_Color_Fields local_28;
  
  if (g_data_057aed68 == '\0') {
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed68 = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  pSVar11 = (System_Object_array *)0x0;
  pSVar12 = value;
  bVar8 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    if (value != (System_String_o *)0x0) {
      if ((value->fields)._stringLength == 6) {
        unaff_RBX = (System_Collections_Generic_List_object__o *)0x0;
        do {
          uVar7 = System_String__get_Chars(value,(int)unaff_RBX,(MethodInfo *)0x0);
          uVar18 = (int)CONCAT62(extraout_var,uVar7) - 0x30;
          in_RCX = (System_Object_array *)(ulong)uVar18;
          if ((9 < (ushort)uVar18) && (5 < (ushort)((uVar7 & 0xffdf) - 0x41))) goto label_0450d0fe;
          uVar18 = (int)unaff_RBX + 1;
          unaff_RBX = (System_Collections_Generic_List_object__o *)(ulong)uVar18;
          pSVar10 = value;
        } while ((int)uVar18 < (value->fields)._stringLength);
        goto label_0450d1ce;
      }
      goto label_0450d0fe;
    }
  }
  else {
label_0450d0fe:
    pSVar11 = (System_Object_array *)0x0;
    pSVar12 = value;
    bVar8 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') goto label_0450d19a;
    if (value != (System_String_o *)0x0) {
      if (((value->fields)._stringLength != 7) ||
         (uVar7 = System_String__get_Chars(value,0,(MethodInfo *)0x0), uVar7 != 0x23)) {
label_0450d19a:
        bVar8 = UnityEngine_ColorUtility__TryParseHtmlString
                          (value,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
        pSVar11 = "FFFFFF";
        if ((char)bVar8 != '\0') {
          color.fields.b = local_28.b;
          color.fields.a = local_28.a;
          color.fields.r = local_28.r;
          color.fields.g = local_28.g;
          pSVar11 = (System_Object_array *)UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
        }
        return (System_String_o *)pSVar11;
      }
      pSVar10 = System_String__Substring(value,1,(MethodInfo *)0x0);
      pSVar11 = (System_Object_array *)0x0;
      pSVar12 = pSVar10;
      bVar8 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') goto label_0450d19a;
      if (pSVar10 != (System_String_o *)0x0) {
        if ((pSVar10->fields)._stringLength != 6) goto label_0450d19a;
        unaff_RBX = (System_Collections_Generic_List_object__o *)0x0;
        do {
          uVar7 = System_String__get_Chars(pSVar10,(int)unaff_RBX,(MethodInfo *)0x0);
          uVar18 = (int)CONCAT62(extraout_var_00,uVar7) - 0x30;
          in_RCX = (System_Object_array *)(ulong)uVar18;
          if ((9 < (ushort)uVar18) && (5 < (ushort)((uVar7 & 0xffdf) - 0x41))) goto label_0450d19a;
          uVar18 = (int)unaff_RBX + 1;
          unaff_RBX = (System_Collections_Generic_List_object__o *)(ulong)uVar18;
        } while ((int)uVar18 < (pSVar10->fields)._stringLength);
        pSVar11 = (System_Object_array *)0x1;
        pSVar10 = System_String__Substring(value,1,(MethodInfo *)0x0);
        pSVar12 = value;
        if (pSVar10 != (System_String_o *)0x0) {
label_0450d1ce:
          pSVar12 = System_String__ToUpperInvariant(pSVar10,(MethodInfo *)0x0);
          return pSVar12;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar23 = pSVar11;
  pSStack_50 = unaff_RBX;
  if (g_data_057aed65 == '\0') {
    uStack_58 = 0x450d223;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    uStack_58 = 0x450d22f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_58 = 0x450d23b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    uStack_58 = 0x450d247;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed65 = '\x01';
  }
  if ((pSVar12 == (System_String_o *)0x0) &&
     (pSVar12 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), pSVar12 == (System_String_o *)0x0)) {
label_0450d3ce:
    uStack_58 = 0x450d3d3;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pSVar11 == (System_Object_array *)0x0) || ((pSVar12->fields)._stringLength == 0)) {
      return pSVar12;
    }
    pIVar4 = (pSVar11->obj).klass;
    uVar3._0_1_ = (pIVar4->_2).rank;
    uVar3._1_1_ = (pIVar4->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      lVar25 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar25) == TypeInfo_ICollection_string) {
          pSVar13 = (System_Object_array *)(pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar25));
          goto label_0450d2e1;
        }
        lVar25 = lVar25 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar25);
    }
    uStack_58 = 0x450d2c9;
    pSVar13 = (System_Object_array *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_ICollection_string,0);
label_0450d2e1:
    uStack_58 = 0x450d2ea;
    iVar9 = (*(code *)(pSVar13->obj).klass)(pSVar11,(pSVar13->obj).monitor);
    if (iVar9 == 0) {
      return pSVar12;
    }
    uVar18 = (pSVar12->fields)._stringLength;
    unaff_RBP = (ulong)uVar18;
    uStack_58 = 0x450d305;
    unaff_RBX = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    uStack_58 = 0x450d31c;
    System_Collections_Generic_List_object____ctor_362b930(unaff_RBX,uVar18,MethodInfo_List_1_System_String);
    uVar18 = (pSVar12->fields)._stringLength;
    pSVar23 = (System_Object_array *)(ulong)uVar18;
    pMVar27 = extraout_RDX;
    if ((int)uVar18 < 1) {
label_0450d3af:
      pSVar12 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                          (pSVar12,(System_Collections_Generic_IList_string__o *)unaff_RBX,pMVar27);
      return pSVar12;
    }
    in_RCX = pSVar13;
    if (unaff_RBX != (System_Collections_Generic_List_object__o *)0x0) {
      unaff_RBP = 0;
      unaff_R12 = &MethodInfo_Void_Add;
      do {
        while( true ) {
          iVar9 = (int)unaff_RBP;
          uStack_58 = 0x450d36f;
          pSVar10 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor
                              (iVar9,(int32_t)pSVar23,(System_Collections_Generic_IList_string__o *)pSVar11,
                               (MethodInfo *)pSVar13);
          lVar25 = MethodInfo_Void_Add;
          piVar1 = &(unaff_RBX->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar13 = (unaff_RBX->fields)._items;
          in_RCX = (System_Object_array *)0x0;
          if (pSVar13 == (System_Object_array *)0x0) goto label_0450d3ce;
          uVar18 = (unaff_RBX->fields)._size;
          if ((uint)pSVar13->max_length <= uVar18) break;
          (unaff_RBX->fields)._size = uVar18 + 1;
          pSVar13->m_Items[(int)uVar18] = (Il2CppObject *)pSVar10;
          uStack_58 = 0x450d3a4;
          il2cpp_runtime_helper_022b4080(pSVar13->m_Items + (int)uVar18,pSVar10);
          unaff_RBP = (ulong)(iVar9 + 1U);
          uVar18 = (pSVar12->fields)._stringLength;
          pSVar23 = (System_Object_array *)(ulong)uVar18;
          pMVar27 = extraout_RDX_01;
          if ((int)uVar18 <= (int)(iVar9 + 1U)) goto label_0450d3af;
        }
        pSVar13 = *(System_Object_array **)(*(long *)(lVar25 + 0x20) + 0xc0);
        uStack_58 = 0x450d35a;
        System_Collections_Generic_List_object___AddWithResize
                  (unaff_RBX,(Il2CppObject *)pSVar10,(MethodInfo_362C220 *)pSVar13->m_Items[10]);
        unaff_RBP = (ulong)(iVar9 + 1U);
        uVar18 = (pSVar12->fields)._stringLength;
        pSVar23 = (System_Object_array *)(ulong)uVar18;
        pMVar27 = extraout_RDX_00;
      } while ((int)(iVar9 + 1U) < (int)uVar18);
      goto label_0450d3af;
    }
  }
  pSVar15 = (System_Object_array *)0x0;
  uStack_58 = 0x450d3dd;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor
            (0,(int32_t)pSVar23,(System_Collections_Generic_IList_string__o *)pSVar11,(MethodInfo *)in_RCX);
  uStack_58 = 0x450d3e2;
  il2cpp_runtime_helper_022b2c90();
  pSVar10 = (System_String_o *)((ulong)pSVar23 & 0xffffffff);
  pSVar28 = (System_Object_array *)((ulong)pSVar15 & 0xffffffff);
  pSVar13 = pSVar23;
  serialized = pSVar15;
  pSStack_78 = unaff_RBX;
  puStack_70 = unaff_R12;
  pSStack_68 = pSVar11;
  pSStack_60 = pSVar12;
  uStack_58 = unaff_RBP;
  if (g_data_057aed69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    serialized = (System_Object_array *)&TypeInfo_IList_string;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed69 = '\x01';
  }
  if (extraout_RDX_02 != (long *)0x0) {
    lVar25 = *extraout_RDX_02;
    if ((ulong)*(ushort *)(lVar25 + 0x12e) != 0) {
      lVar26 = 0;
      do {
        if (*(long *)(*(long *)(lVar25 + 0xb0) + lVar26) == TypeInfo_ICollection_string) {
          puVar14 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar25 + 0xb0) + 8 + lVar26) * 0x10 + lVar25 + 0x138);
          goto label_0450d491;
        }
        lVar26 = lVar26 + 0x10;
      } while ((ulong)*(ushort *)(lVar25 + 0x12e) << 4 != lVar26);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(extraout_RDX_02,TypeInfo_ICollection_string,0);
label_0450d491:
    iVar9 = (*(code *)*puVar14)(extraout_RDX_02,puVar14[1]);
    if (((int)pSVar23 < 2) || (iVar9 == 1)) {
      lVar25 = *extraout_RDX_02;
      if ((ulong)*(ushort *)(lVar25 + 0x12e) != 0) {
        lVar26 = 0;
        do {
          if (*(long *)(*(long *)(lVar25 + 0xb0) + lVar26) == TypeInfo_IList_string) {
            puVar14 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar25 + 0xb0) + 8 + lVar26) * 0x10 + lVar25 + 0x138);
            goto label_0450d551;
          }
          lVar26 = lVar26 + 0x10;
        } while ((ulong)*(ushort *)(lVar25 + 0x12e) << 4 != lVar26);
      }
      puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(extraout_RDX_02,TypeInfo_IList_string,0);
label_0450d551:
      pMVar27 = (MethodInfo *)0x0;
      pSVar12 = (System_String_o *)(*(code *)*puVar14)(extraout_RDX_02,0,puVar14[1]);
      pSVar12 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar12,pMVar27);
      return pSVar12;
    }
    lVar25 = *extraout_RDX_02;
    if ((ulong)*(ushort *)(lVar25 + 0x12e) != 0) {
      lVar26 = 0;
      do {
        if (*(long *)(*(long *)(lVar25 + 0xb0) + lVar26) == TypeInfo_ICollection_string) {
          puVar14 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar25 + 0xb0) + 8 + lVar26) * 0x10 + lVar25 + 0x138);
          goto label_0450d583;
        }
        lVar26 = lVar26 + 0x10;
      } while ((ulong)*(ushort *)(lVar25 + 0x12e) << 4 != lVar26);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(extraout_RDX_02,TypeInfo_ICollection_string,0);
label_0450d583:
    iVar9 = (*(code *)*puVar14)(extraout_RDX_02,puVar14[1]);
    fVar29 = (float)(iVar9 + -1);
    if (g_data_057a690a == '\0') {
      fStack_a8 = (float)(iVar9 + -1);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690a = '\x01';
      fVar29 = fStack_a8;
    }
    fVar29 = ((float)(int)pSVar15 / (float)((int)pSVar23 + -1)) * fVar29;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar30 = floorf(fVar29);
    uVar18 = (uint)fVar30;
    lVar25 = *extraout_RDX_02;
    if ((ulong)*(ushort *)(lVar25 + 0x12e) != 0) {
      lVar26 = 0;
      do {
        if (*(long *)(*(long *)(lVar25 + 0xb0) + lVar26) == TypeInfo_ICollection_string) {
          puVar14 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar25 + 0xb0) + 8 + lVar26) * 0x10 + lVar25 + 0x138);
          goto label_0450d651;
        }
        lVar26 = lVar26 + 0x10;
      } while ((ulong)*(ushort *)(lVar25 + 0x12e) << 4 != lVar26);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(extraout_RDX_02,TypeInfo_ICollection_string,0);
label_0450d651:
    iVar9 = (*(code *)*puVar14)(extraout_RDX_02,puVar14[1]);
    uVar20 = iVar9 - 1U;
    if ((int)uVar18 < (int)(iVar9 - 1U)) {
      uVar20 = uVar18;
    }
    uVar22 = 0;
    if (-1 < (int)uVar18) {
      uVar22 = uVar20;
    }
    lVar25 = *extraout_RDX_02;
    if ((ulong)*(ushort *)(lVar25 + 0x12e) != 0) {
      lVar26 = 0;
      do {
        if (*(long *)(*(long *)(lVar25 + 0xb0) + lVar26) == TypeInfo_ICollection_string) {
          puVar14 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar25 + 0xb0) + 8 + lVar26) * 0x10 + lVar25 + 0x138);
          goto label_0450d6c1;
        }
        lVar26 = lVar26 + 0x10;
      } while ((ulong)*(ushort *)(lVar25 + 0x12e) << 4 != lVar26);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(extraout_RDX_02,TypeInfo_ICollection_string,0);
label_0450d6c1:
    iVar9 = (*(code *)*puVar14)(extraout_RDX_02,puVar14[1]);
    uVar18 = iVar9 - 1U;
    if ((int)(uVar22 + 1) <= (int)(iVar9 - 1U)) {
      uVar18 = uVar22 + 1;
    }
    pMVar27 = (MethodInfo *)(ulong)uVar18;
    lVar25 = *extraout_RDX_02;
    if ((ulong)*(ushort *)(lVar25 + 0x12e) != 0) {
      lVar26 = 0;
      do {
        if (*(long *)(*(long *)(lVar25 + 0xb0) + lVar26) == TypeInfo_IList_string) {
          puVar14 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar25 + 0xb0) + 8 + lVar26) * 0x10 + lVar25 + 0x138);
          goto label_0450d741;
        }
        lVar26 = lVar26 + 0x10;
      } while ((ulong)*(ushort *)(lVar25 + 0x12e) << 4 != lVar26);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(extraout_RDX_02,TypeInfo_IList_string,0);
label_0450d741:
    fStack_a8 = (float)(int)uVar22;
    method_00 = (MethodInfo *)(ulong)uVar22;
    pSVar12 = (System_String_o *)(*(code *)*puVar14)(extraout_RDX_02,method_00,puVar14[1]);
    if (g_data_057aed6a == '\0') {
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed6a = '\x01';
    }
    fVar29 = fVar29 - fStack_a8;
    UStack_b8.r = 0.0;
    UStack_b8.g = 0.0;
    UStack_b8.b = 0.0;
    UStack_b8.a = 0.0;
    pSVar12 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar12,method_00);
    pSVar12 = System_String__Concat_3ae5ba0("#",pSVar12,(MethodInfo *)0x0);
    bVar8 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar12,(UnityEngine_Color_o *)&UStack_b8,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      fStack_a8 = 1.0;
      fStack_a4 = 1.0;
      fStack_98 = fStack_a8;
      fStack_94 = fStack_a4;
    }
    else {
      fStack_98 = UStack_b8.r;
      fStack_94 = UStack_b8.g;
      fStack_a8 = UStack_b8.b;
      fStack_a4 = UStack_b8.a;
    }
    fVar30 = 1.0;
    if (fVar29 <= 1.0) {
      fVar30 = fVar29;
    }
    lVar25 = *extraout_RDX_02;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    if ((ulong)*(ushort *)(lVar25 + 0x12e) != 0) {
      lVar26 = 0;
      do {
        if (*(long *)(*(long *)(lVar25 + 0xb0) + lVar26) == TypeInfo_IList_string) {
          puVar14 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar25 + 0xb0) + 8 + lVar26) * 0x10 + lVar25 + 0x138);
          goto label_0450d863;
        }
        lVar26 = lVar26 + 0x10;
      } while ((ulong)*(ushort *)(lVar25 + 0x12e) << 4 != lVar26);
    }
    auStack_88 = ZEXT416((uint)fVar30);
    puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(extraout_RDX_02,TypeInfo_IList_string,0);
    fVar30 = (float)auStack_88._0_4_;
label_0450d863:
    fVar30 = (float)(-(uint)(0.0 <= fVar29) & (uint)fVar30);
    pSVar12 = (System_String_o *)(*(code *)*puVar14)(extraout_RDX_02,pMVar27,puVar14[1]);
    if (g_data_057aed6a == '\0') {
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed6a = '\x01';
    }
    UStack_b8.r = 0.0;
    UStack_b8.g = 0.0;
    UStack_b8.b = 0.0;
    UStack_b8.a = 0.0;
    pSVar12 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar12,pMVar27);
    pSVar12 = System_String__Concat_3ae5ba0("#",pSVar12,(MethodInfo *)0x0);
    bVar8 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar12,(UnityEngine_Color_o *)&UStack_b8,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      fVar29 = 1.0;
      fVar31 = 1.0;
      fVar32 = fVar29;
      fVar33 = fVar31;
    }
    else {
      fVar29 = UStack_b8.r;
      fVar31 = UStack_b8.g;
      fVar32 = UStack_b8.b;
      fVar33 = UStack_b8.a;
    }
    fVar34 = 0.0;
    if (0.0 <= fVar30) {
      fVar34 = fVar30;
    }
    color_00.fields.r = (fVar29 - fStack_98) * fVar34 + fStack_98;
    color_00.fields.g = (fVar31 - fStack_94) * fVar34 + fStack_94;
    color_00.fields.b = (fVar32 - fStack_a8) * fVar34 + fStack_a8;
    color_00.fields.a = (fVar33 - fStack_a4) * fVar34 + fStack_a4;
    pSVar12 = UnityEngine_ColorUtility__ToHtmlStringRGB(color_00,(MethodInfo *)0x0);
    return pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar13;
  plStack_f8 = extraout_RDX_02;
  puStack_f0 = unaff_R12;
  if (g_data_057aed66 == '\0') {
    pSStack_118 = (System_String_o *)0x450d959;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_118 = (System_String_o *)0x450d965;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStack_118 = (System_String_o *)0x450d971;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    pSStack_118 = (System_String_o *)0x450d97d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_118 = (System_String_o *)0x450d989;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pSStack_118 = (System_String_o *)0x450d995;
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed66 = '\x01';
  }
  pSStack_118 = (System_String_o *)0x450d9a4;
  pSVar23 = serialized;
  pSStack_110 = (System_Object_array *)
                Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                          ((System_String_o *)serialized,(MethodInfo *)pSVar11);
  if ((pSVar13 != (System_Object_array *)0x0) ||
     (pSVar13 = (System_Object_array *)**(long **)(g_data_057b9c00 + 0xb8), pSVar13 != (System_Object_array *)0x0
     )) {
    uVar18 = *(uint *)&pSVar13->bounds;
    serialized = (System_Object_array *)(ulong)uVar18;
    pSStack_118 = (System_String_o *)0x450d9e1;
    pSVar15 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pSVar11 = (System_Object_array *)(ulong)uVar18;
    pSStack_118 = (System_String_o *)0x450d9f8;
    pSVar23 = pSVar15;
    System_Collections_Generic_List_object____ctor_362b930
              ((System_Collections_Generic_List_object__o *)pSVar15,uVar18,MethodInfo_List_1_System_String);
    if (0 < *(int *)&pSVar13->bounds) {
      if (pSVar15 == (System_Object_array *)0x0) goto label_0450dd55;
      serialized = (System_Object_array *)0x0;
      pSVar28 = (System_Object_array *)&"FFFFFF";
      pSVar10 = (System_String_o *)&MethodInfo_Void_Add;
      do {
        while( true ) {
          pSVar11 = "FFFFFF";
          lVar25 = MethodInfo_Void_Add;
          piVar2 = (int *)((long)&pSVar15->max_length + 4);
          *piVar2 = *piVar2 + 1;
          pIVar6 = pSVar15->bounds;
          if (pIVar6 == (Il2CppArrayBounds *)0x0) goto label_0450dd55;
          uVar18 = (uint)pSVar15->max_length;
          if ((uint)pIVar6[1].lower_bound <= uVar18) break;
          *(uint *)&pSVar15->max_length = uVar18 + 1;
          pSVar23 = (System_Object_array *)(&pIVar6[2].length + (int)uVar18);
          (&pIVar6[2].length)[(int)uVar18] = (il2cpp_array_size_t)pSVar11;
          pSStack_118 = (System_String_o *)0x450da7f;
          il2cpp_runtime_helper_022b4080();
          uVar18 = (int)serialized + 1;
          serialized = (System_Object_array *)(ulong)uVar18;
          if (*(int *)&pSVar13->bounds <= (int)uVar18) goto label_0450da88;
        }
        pSStack_118 = (System_String_o *)0x450da37;
        pSVar23 = pSVar15;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar15,&pSVar11->obj,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        uVar18 = (int)serialized + 1;
        serialized = (System_Object_array *)(ulong)uVar18;
      } while ((int)uVar18 < *(int *)&pSVar13->bounds);
    }
label_0450da88:
    serialized = pSStack_110;
    if ((pSStack_110 != (System_Object_array *)0x0) &&
       (pSVar23 = ((System_Collections_Generic_List_object__Fields *)&pSStack_110->bounds)->_items,
       pSVar23 != (System_Object_array *)0x0)) {
      uVar18 = 0;
      pSStack_108 = pSVar13;
      do {
        if ((*(int *)&pSVar23->bounds <= (int)uVar18) || (*(int *)&pSVar13->bounds <= (int)uVar18)) {
label_0450daf9:
          pSVar13 = pSStack_108;
          pSVar11 = (System_Object_array *)(ulong)*(uint *)&pSVar23->bounds;
          if (0 < (int)(*(uint *)&pSVar23->bounds - uVar18)) {
            pSVar19 = (System_Object_array *)0x0;
            serialized = (System_Object_array *)&g_data_ffffffff;
            pSVar10 = (System_String_o *)0x0;
            pSStack_100 = pSVar15;
            goto label_0450db30;
          }
          pSVar10 = (System_String_o *)0x0;
          pSVar19 = (System_Object_array *)0x0;
          goto joined_r0x0450dcfd;
        }
        pSStack_118 = (System_String_o *)0x450dac6;
        uVar7 = System_String__get_Chars((System_String_o *)pSVar23,uVar18,(MethodInfo *)0x0);
        pSVar10 = (System_String_o *)(CONCAT62(extraout_var_01,uVar7) & 0xffffffff);
        pSVar11 = (System_Object_array *)(ulong)uVar18;
        pSStack_118 = (System_String_o *)0x450dad5;
        uVar7 = System_String__get_Chars((System_String_o *)pSVar13,uVar18,(MethodInfo *)0x0);
        if ((uint16_t)pSVar10 != uVar7) {
          pSVar23 = ((System_Collections_Generic_List_object__Fields *)&serialized->bounds)->_items;
          if (pSVar23 != (System_Object_array *)0x0) goto label_0450daf9;
          break;
        }
        uVar18 = uVar18 + 1;
        pSVar23 = ((System_Collections_Generic_List_object__Fields *)&serialized->bounds)->_items;
      } while (pSVar23 != (System_Object_array *)0x0);
    }
  }
  goto label_0450dd55;
  while( true ) {
    iVar9 = (int)serialized;
    pSStack_118 = (System_String_o *)0x450db47;
    uVar7 = System_String__get_Chars((System_String_o *)pSVar23,(int)pSVar11 + iVar9,(MethodInfo *)0x0);
    pSVar10 = (System_String_o *)(CONCAT62(extraout_var_02,uVar7) & 0xffffffff);
    uVar22 = *(int *)&pSVar13->bounds + iVar9;
    pSVar11 = (System_Object_array *)(ulong)uVar22;
    pSStack_118 = (System_String_o *)0x450db59;
    pSVar23 = pSVar13;
    uVar7 = System_String__get_Chars((System_String_o *)pSVar13,uVar22,(MethodInfo *)0x0);
    pSVar15 = pSStack_100;
    if ((uint16_t)pSVar10 != uVar7) {
      serialized = (System_Object_array *)(ulong)(iVar9 + 1U);
      pSVar10 = (System_String_o *)(ulong)(iVar9 + 1U);
      break;
    }
    pSVar23 = ((System_Collections_Generic_List_object__Fields *)&pSStack_110->bounds)->_items;
    if (pSVar23 == (System_Object_array *)0x0) goto label_0450dd55;
    pSVar10 = (System_String_o *)(ulong)~uVar20;
    pSVar19 = (System_Object_array *)(ulong)(uVar20 + 1);
    pSVar11 = (System_Object_array *)(ulong)*(uint *)&pSVar23->bounds;
    serialized = (System_Object_array *)(ulong)(iVar9 - 1);
    if ((int)(*(uint *)&pSVar23->bounds + -uVar18) <= (int)(uVar20 + 1)) break;
label_0450db30:
    uVar20 = (uint)pSVar19;
    pSVar28 = pSVar13;
    pSVar15 = pSStack_100;
    if ((int)(*(int *)&pSVar13->bounds + -uVar18) <= (int)uVar20) break;
  }
joined_r0x0450dcfd:
  pSVar13 = pSVar19;
  if (uVar18 == 0) {
label_0450dbed:
    iVar9 = (int)pSVar19;
    if (iVar9 != 0) {
      pSVar24 = pSVar19;
      if (pSVar15 == (System_Object_array *)0x0) goto label_0450dd2b;
      do {
        pSVar13 = ((System_Collections_Generic_List_object__Fields *)&pSStack_110->bounds)->_items;
        pSVar28 = pSVar24;
        if (pSVar13 == (System_Object_array *)0x0) goto label_0450dd55;
        pSVar23 = (System_Object_array *)0x0;
        if ((System_Collections_Generic_List_object__o *)pSStack_110->max_length ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_0450dd55;
        iVar21 = (int)pSVar10;
        uVar20 = *(int *)&pSStack_108->bounds + iVar21;
        serialized = (System_Object_array *)(ulong)uVar20;
        pSStack_118 = (System_String_o *)0x450dc3c;
        pIVar16 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSStack_110->max_length,
                             *(int *)&pSVar13->bounds + iVar21,MethodInfo_String_get_Item);
        pSVar11 = (System_Object_array *)(ulong)uVar20;
        pSStack_118 = (System_String_o *)0x450dc53;
        pSVar13 = MethodInfo_Void_set_Item;
        pSVar23 = pSVar15;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar15,uVar20,pIVar16,
                   (MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
        pSVar10 = (System_String_o *)(ulong)(iVar21 + 1);
        uVar20 = (int)pSVar24 - 1;
        pSVar24 = (System_Object_array *)(ulong)uVar20;
      } while (uVar20 != 0);
    }
    pSVar11 = (System_Object_array *)(ulong)uVar18;
    pSStack_118 = (System_String_o *)0x450dc6e;
    pSVar23 = pSStack_110;
    pSVar10 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__EditColor
                        ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)pSStack_110,uVar18,
                         iVar9,(MethodInfo *)pSVar13);
    uVar20 = *(int *)&pSStack_108->bounds - iVar9;
    serialized = (System_Object_array *)(ulong)uVar20;
    pMVar27 = extraout_RDX_03;
    if ((int)uVar20 <= (int)uVar18) {
label_0450dcba:
      pSVar12 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                          ((System_String_o *)pSStack_108,
                           (System_Collections_Generic_IList_string__o *)pSVar15,pMVar27);
      return pSVar12;
    }
    pSVar28 = pSVar19;
    if (pSVar15 != (System_Object_array *)0x0) {
      do {
        pSStack_118 = (System_String_o *)0x450dcb1;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar15,uVar18,(Il2CppObject *)pSVar10,
                   (MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
        uVar18 = uVar18 + 1;
        pMVar27 = extraout_RDX_04;
      } while (uVar20 != uVar18);
      goto label_0450dcba;
    }
  }
  else {
    if (pSVar15 != (System_Object_array *)0x0) {
      serialized = (System_Object_array *)&MethodInfo_Void_set_Item;
      pSVar24 = (System_Object_array *)0x0;
      do {
        pSVar23 = (System_Object_array *)0x0;
        pSVar28 = pSVar24;
        if ((System_Collections_Generic_List_object__o *)pSStack_110->max_length ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_0450dd55;
        iVar9 = (int)pSVar24;
        pSStack_118 = (System_String_o *)0x450dbd3;
        pIVar16 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSStack_110->max_length,iVar9,
                             MethodInfo_String_get_Item);
        pSStack_118 = (System_String_o *)0x450dbe4;
        pSVar13 = MethodInfo_Void_set_Item;
        pSVar23 = pSVar15;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar15,iVar9,pIVar16,
                   (MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
        pSVar28 = (System_Object_array *)(ulong)(iVar9 + 1U);
        pSVar11 = pSVar24;
        pSVar24 = pSVar28;
      } while (uVar18 != iVar9 + 1U);
      goto label_0450dbed;
    }
    pSVar23 = (System_Object_array *)pSStack_110->max_length;
    if (pSVar23 == (System_Object_array *)0x0) goto label_0450dd55;
    pSVar11 = (System_Object_array *)0x0;
    pSStack_118 = (System_String_o *)0x450dd26;
    System_Collections_Generic_List_object___get_Item
              ((System_Collections_Generic_List_object__o *)pSVar23,0,MethodInfo_String_get_Item);
    pSStack_118 = (System_String_o *)0x450dd2b;
    il2cpp_runtime_helper_022b2c90();
label_0450dd2b:
    pSVar13 = ((System_Collections_Generic_List_object__Fields *)&pSStack_110->bounds)->_items;
    if ((pSVar13 != (System_Object_array *)0x0) &&
       (pSVar23 = (System_Object_array *)pSStack_110->max_length, pSVar23 != (System_Object_array *)0x0)) {
      uVar18 = (int)pSVar10 + *(int *)&pSVar13->bounds;
      pSVar10 = (System_String_o *)(ulong)uVar18;
      pSVar11 = (System_Object_array *)(ulong)uVar18;
      pSStack_118 = (System_String_o *)0x450dd55;
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)pSVar23,uVar18,MethodInfo_String_get_Item);
    }
  }
label_0450dd55:
  pSStack_118 = (System_String_o *)0x450dd5a;
  il2cpp_runtime_helper_022b2c90();
  pSVar13 = pSVar11;
  pSStack_128 = serialized;
  pSStack_120 = pSVar28;
  pSStack_118 = pSVar10;
  if (g_data_057aed6d == '\0') {
    uStack_130 = 0x450dd81;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    uStack_130 = 0x450dd8d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    uStack_130 = 0x450dd99;
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed6d = '\x01';
  }
  uVar7 = (uint16_t)pSVar13;
  if ((pSVar23 != (System_Object_array *)0x0) &&
     (pSVar17 = (System_Text_StringBuilder_o *)pSVar23->max_length,
     pSVar17 != (System_Text_StringBuilder_o *)0x0)) {
    iVar9 = (int)pSVar11;
    if ((0 < iVar9) && (iVar9 <= *(int *)&(pSVar17->fields).m_ChunkPrevious)) {
      uVar18 = iVar9 - 1;
label_0450ddfc:
      pMVar27 = (MethodInfo *)(ulong)uVar18;
      uStack_130 = 0x450de01;
      pSVar12 = (System_String_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar17,uVar18,MethodInfo_String_get_Item);
      pSVar12 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar12,pMVar27);
      return pSVar12;
    }
    if (0 < (int)extraout_RDX_05) {
      pSVar13 = ((System_Collections_Generic_List_object__Fields *)&pSVar23->bounds)->_items;
      if (pSVar13 == (System_Object_array *)0x0) {
        uStack_130 = 0x450de12;
        uStack_140 = il2cpp_runtime_helper_022b2c90();
        value_00 = pSVar17;
        pSStack_138 = pSVar23;
        uStack_130 = (ulong)pSVar11 & 0xffffffff;
        if (g_data_057aed6e == '\0') {
          uStack_148 = 0x450de3d;
          il2cpp_runtime_helper_023445d0(&"&gt;");
          value_00 = (System_Text_StringBuilder_o *)&"&lt;";
          uStack_148 = 0x450de49;
          il2cpp_runtime_helper_023445d0();
          g_data_057aed6e = '\x01';
        }
        if (uVar7 == 0x3c) {
          if (pSVar17 == (System_Text_StringBuilder_o *)0x0) {
label_0450de9c:
            uStack_148 = 0x450dea1;
            uStack_158 = il2cpp_runtime_helper_022b2c90();
            pSVar12 = (System_String_o *)0x0;
            pMVar27 = (MethodInfo *)0x0;
            uStack_160 = 0x450dec0;
            value_01 = value_00;
            pSStack_150 = pSVar17;
            uStack_148 = extraout_RDX_05 & 0xffffffff;
            bVar8 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              if (value_00 == (System_Text_StringBuilder_o *)0x0) {
                uStack_160 = 0x450df1f;
                il2cpp_runtime_helper_022b2c90();
                uStack_160 = 0;
                if (g_data_057aed6a == '\0') {
                  il2cpp_runtime_helper_023445d0(&"#");
                  g_data_057aed6a = '\x01';
                }
                UStack_170.r = 0.0;
                UStack_170.g = 0.0;
                UStack_170.b = 0.0;
                UStack_170.a = 0.0;
                pSVar12 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                    ((System_String_o *)value_01,pMVar27);
                pSVar12 = System_String__Concat_3ae5ba0("#",pSVar12,(MethodInfo *)0x0);
                bVar8 = UnityEngine_ColorUtility__TryParseHtmlString
                                  (pSVar12,(UnityEngine_Color_o *)&UStack_170,(MethodInfo *)0x0);
                if ((char)bVar8 == '\0') {
                  return (System_String_o *)CONCAT44(extraout_var_03,bVar8);
                }
                return (System_String_o *)CONCAT44(extraout_var_03,bVar8);
              }
              pSVar12 = (System_String_o *)0x0;
              if (*(int *)&(value_00->fields).m_ChunkChars == 6) {
                do {
                  uStack_160 = 0x450def5;
                  uVar7 = System_String__get_Chars((System_String_o *)value_00,(int)pSVar12,(MethodInfo *)0x0)
                  ;
                  if ((9 < (ushort)(uVar7 - 0x30)) && (5 < (ushort)((uVar7 & 0xffdf) - 0x41))) {
                    return (System_String_o *)0x0;
                  }
                  uVar18 = (int)pSVar12 + 1;
                  pSVar12 = (System_String_o *)(ulong)uVar18;
                } while ((int)uVar18 < *(int *)&(value_00->fields).m_ChunkChars);
                pSVar12 = (System_String_o *)CONCAT71((uint7)(uint3)(uVar18 >> 8),1);
              }
            }
            return pSVar12;
          }
          puVar14 = &"&lt;";
        }
        else {
          if (pSVar17 == (System_Text_StringBuilder_o *)0x0) goto label_0450de9c;
          if (uVar7 != 0x3e) {
            pSVar17 = System_Text_StringBuilder__Append_3b048f0(pSVar17,uVar7,(MethodInfo *)0x0);
            return (System_String_o *)pSVar17;
          }
          puVar14 = &"&gt;";
        }
        pSVar17 = System_Text_StringBuilder__Append_3b03f90
                            (pSVar17,(System_String_o *)*puVar14,(MethodInfo *)0x0);
        return (System_String_o *)pSVar17;
      }
      uVar18 = *(int *)&pSVar13->bounds - (int)extraout_RDX_05;
      if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)&(pSVar17->fields).m_ChunkPrevious)) goto label_0450ddfc;
    }
  }
  return (System_String_o *)"FFFFFF";
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$GradientColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor (int32_t index, int32_t length, System_Collections_Generic_IList_string__o* stops, const MethodInfo* method);
// 0x450d3f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__GradientColor
          (int32_t index,int32_t length,System_Collections_Generic_IList_string__o *stops,MethodInfo *method)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  System_Collections_Generic_IList_string__c *pSVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  Il2CppArrayBounds *pIVar11;
  uint16_t uVar12;
  int iVar13;
  bool_conflict bVar14;
  Il2CppMethodPointer *ppIVar15;
  System_String_o *pSVar16;
  System_Object_array *pSVar17;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  Il2CppObject *pIVar18;
  undefined8 *puVar19;
  System_Text_StringBuilder_o *pSVar20;
  undefined4 extraout_var_01;
  System_Object_array *pSVar21;
  System_Object_array *pSVar22;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  ulong extraout_RDX_01;
  uint uVar23;
  System_Object_array **serialized;
  uint uVar24;
  int iVar25;
  long *value;
  uint uVar26;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  System_Object_array *method_01;
  System_Object_array *pSVar27;
  undefined4 in_register_0000003c;
  long *plVar28;
  long lVar29;
  System_Object_array *__this;
  System_Text_StringBuilder_o *value_00;
  System_Text_StringBuilder_o *value_01;
  MethodInfo *pMVar30;
  System_Object_array **ppSVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  UnityEngine_Color_o color;
  UnityEngine_Color_Fields UStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  System_Text_StringBuilder_o *pSStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  System_Object_array *pSStack_e8;
  ulong uStack_e0;
  System_Object_array *pSStack_d8;
  System_Object_array *pSStack_d0;
  System_String_o *pSStack_c8;
  System_Object_array *local_c0;
  System_Object_array *local_b8;
  System_Object_array *local_b0;
  System_Collections_Generic_IList_string__o *pSStack_a8;
  UnityEngine_Color_Fields local_68;
  float local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  
  serialized = (System_Object_array **)CONCAT44(in_register_0000003c,index);
  pSVar22 = (System_Object_array *)CONCAT44(in_register_00000034,length);
  value = (long *)(ulong)(uint)length;
  ppSVar31 = (System_Object_array **)(ulong)(uint)index;
  if (g_data_057aed69 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    plVar28 = &TypeInfo_IList_string;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed69 = '\x01';
    serialized = (System_Object_array **)plVar28;
  }
  if (stops != (System_Collections_Generic_IList_string__o *)0x0) {
    pSVar9 = stops->klass;
    uVar2._0_1_ = (pSVar9->_2).rank;
    uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar10 = (pSVar9->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar29) == TypeInfo_ICollection_string) {
          ppIVar15 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar29)].methodPtr;
          goto label_0450d491;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar29);
    }
    ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(stops,TypeInfo_ICollection_string,0);
label_0450d491:
    iVar13 = (**ppIVar15)(stops,(MethodInfo *)ppIVar15[1]);
    if ((length < 2) || (iVar13 == 1)) {
      pSVar9 = stops->klass;
      uVar4._0_1_ = (pSVar9->_2).rank;
      uVar4._1_1_ = (pSVar9->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar10 = (pSVar9->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar29) == TypeInfo_IList_string) {
            ppIVar15 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar29)].methodPtr;
            goto label_0450d551;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar29);
      }
      ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(stops,TypeInfo_IList_string,0);
label_0450d551:
      pMVar30 = (MethodInfo *)0x0;
      pSVar16 = (System_String_o *)(**ppIVar15)(stops,0,(MethodInfo *)ppIVar15[1]);
      pSVar16 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar16,pMVar30);
      return pSVar16;
    }
    pSVar9 = stops->klass;
    uVar3._0_1_ = (pSVar9->_2).rank;
    uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar10 = (pSVar9->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar29) == TypeInfo_ICollection_string) {
          ppIVar15 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar29)].methodPtr;
          goto label_0450d583;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar29);
    }
    ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(stops,TypeInfo_ICollection_string,0);
label_0450d583:
    iVar13 = (**ppIVar15)(stops,(MethodInfo *)ppIVar15[1]);
    fVar32 = (float)(iVar13 + -1);
    if (g_data_057a690a == '\0') {
      local_58 = (float)(iVar13 + -1);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690a = '\x01';
      fVar32 = local_58;
    }
    fVar32 = ((float)index / (float)(length + -1)) * fVar32;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar33 = floorf(fVar32);
    uVar24 = (uint)fVar33;
    pSVar9 = stops->klass;
    uVar5._0_1_ = (pSVar9->_2).rank;
    uVar5._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar5 != 0) {
      pIVar10 = (pSVar9->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar29) == TypeInfo_ICollection_string) {
          ppIVar15 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar29)].methodPtr;
          goto label_0450d651;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar5 << 4 != lVar29);
    }
    ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(stops,TypeInfo_ICollection_string,0);
label_0450d651:
    iVar13 = (**ppIVar15)(stops,(MethodInfo *)ppIVar15[1]);
    uVar23 = iVar13 - 1U;
    if ((int)uVar24 < (int)(iVar13 - 1U)) {
      uVar23 = uVar24;
    }
    uVar26 = 0;
    if (-1 < (int)uVar24) {
      uVar26 = uVar23;
    }
    pSVar9 = stops->klass;
    uVar6._0_1_ = (pSVar9->_2).rank;
    uVar6._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar10 = (pSVar9->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar29) == TypeInfo_ICollection_string) {
          ppIVar15 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar29)].methodPtr;
          goto label_0450d6c1;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar29);
    }
    ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(stops,TypeInfo_ICollection_string,0);
label_0450d6c1:
    iVar13 = (**ppIVar15)(stops,(MethodInfo *)ppIVar15[1]);
    uVar24 = iVar13 - 1U;
    if ((int)(uVar26 + 1) <= (int)(iVar13 - 1U)) {
      uVar24 = uVar26 + 1;
    }
    pMVar30 = (MethodInfo *)(ulong)uVar24;
    pSVar9 = stops->klass;
    uVar7._0_1_ = (pSVar9->_2).rank;
    uVar7._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar10 = (pSVar9->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar29) == TypeInfo_IList_string) {
          ppIVar15 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar29)].methodPtr;
          goto label_0450d741;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar29);
    }
    ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(stops,TypeInfo_IList_string,0);
label_0450d741:
    local_58 = (float)(int)uVar26;
    method_00 = (MethodInfo *)(ulong)uVar26;
    pSVar16 = (System_String_o *)(**ppIVar15)(stops,method_00,(MethodInfo *)ppIVar15[1]);
    if (g_data_057aed6a == '\0') {
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed6a = '\x01';
    }
    fVar32 = fVar32 - local_58;
    local_68.r = 0.0;
    local_68.g = 0.0;
    local_68.b = 0.0;
    local_68.a = 0.0;
    pSVar16 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar16,method_00);
    pSVar16 = System_String__Concat_3ae5ba0("#",pSVar16,(MethodInfo *)0x0);
    bVar14 = UnityEngine_ColorUtility__TryParseHtmlString
                       (pSVar16,(UnityEngine_Color_o *)&local_68,(MethodInfo *)0x0);
    if ((char)bVar14 == '\0') {
      local_58 = 1.0;
      fStack_54 = 1.0;
      local_48 = local_58;
      fStack_44 = fStack_54;
    }
    else {
      local_48 = local_68.r;
      fStack_44 = local_68.g;
      local_58 = local_68.b;
      fStack_54 = local_68.a;
    }
    fVar33 = 1.0;
    if (fVar32 <= 1.0) {
      fVar33 = fVar32;
    }
    pSVar9 = stops->klass;
    uVar8._0_1_ = (pSVar9->_2).rank;
    uVar8._1_1_ = (pSVar9->_2).minimumAlignment;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    if ((ulong)uVar8 != 0) {
      pIVar10 = (pSVar9->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar29) == TypeInfo_IList_string) {
          ppIVar15 = &pSVar9->vtable[*(int *)((long)&pIVar10->offset + lVar29)].methodPtr;
          goto label_0450d863;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar8 << 4 != lVar29);
    }
    local_38 = ZEXT416((uint)fVar33);
    ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(stops,TypeInfo_IList_string,0);
    fVar33 = (float)local_38._0_4_;
label_0450d863:
    fVar33 = (float)(-(uint)(0.0 <= fVar32) & (uint)fVar33);
    pSVar16 = (System_String_o *)(**ppIVar15)(stops,pMVar30,(MethodInfo *)ppIVar15[1]);
    if (g_data_057aed6a == '\0') {
      il2cpp_runtime_helper_023445d0(&"#");
      g_data_057aed6a = '\x01';
    }
    local_68.r = 0.0;
    local_68.g = 0.0;
    local_68.b = 0.0;
    local_68.a = 0.0;
    pSVar16 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar16,pMVar30);
    pSVar16 = System_String__Concat_3ae5ba0("#",pSVar16,(MethodInfo *)0x0);
    bVar14 = UnityEngine_ColorUtility__TryParseHtmlString
                       (pSVar16,(UnityEngine_Color_o *)&local_68,(MethodInfo *)0x0);
    if ((char)bVar14 == '\0') {
      fVar32 = 1.0;
      fVar34 = 1.0;
      fVar35 = fVar32;
      fVar36 = fVar34;
    }
    else {
      fVar32 = local_68.r;
      fVar34 = local_68.g;
      fVar35 = local_68.b;
      fVar36 = local_68.a;
    }
    fVar37 = 0.0;
    if (0.0 <= fVar33) {
      fVar37 = fVar33;
    }
    color.fields.r = (fVar32 - local_48) * fVar37 + local_48;
    color.fields.g = (fVar34 - fStack_44) * fVar37 + fStack_44;
    color.fields.b = (fVar35 - local_58) * fVar37 + local_58;
    color.fields.a = (fVar36 - fStack_54) * fVar37 + fStack_54;
    pSVar16 = UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
    return pSVar16;
  }
  il2cpp_runtime_helper_022b2c90();
  method_01 = pSVar22;
  pSStack_a8 = stops;
  if (g_data_057aed66 == '\0') {
    pSStack_c8 = (System_String_o *)0x450d959;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_c8 = (System_String_o *)0x450d965;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStack_c8 = (System_String_o *)0x450d971;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    pSStack_c8 = (System_String_o *)0x450d97d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_c8 = (System_String_o *)0x450d989;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pSStack_c8 = (System_String_o *)0x450d995;
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed66 = '\x01';
  }
  pSStack_c8 = (System_String_o *)0x450d9a4;
  __this = (System_Object_array *)serialized;
  local_c0 = (System_Object_array *)
             Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                       ((System_String_o *)serialized,(MethodInfo *)method_01);
  if ((pSVar22 != (System_Object_array *)0x0) ||
     (pSVar22 = (System_Object_array *)**(long **)(g_data_057b9c00 + 0xb8), pSVar22 != (System_Object_array *)0x0
     )) {
    uVar24 = *(uint *)&pSVar22->bounds;
    serialized = (System_Object_array **)(ulong)uVar24;
    pSStack_c8 = (System_String_o *)0x450d9e1;
    pSVar17 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    method_01 = (System_Object_array *)(ulong)uVar24;
    pSStack_c8 = (System_String_o *)0x450d9f8;
    __this = pSVar17;
    System_Collections_Generic_List_object____ctor_362b930
              ((System_Collections_Generic_List_object__o *)pSVar17,uVar24,MethodInfo_List_1_System_String);
    if (0 < *(int *)&pSVar22->bounds) {
      if (pSVar17 == (System_Object_array *)0x0) goto label_0450dd55;
      serialized = (System_Object_array **)0x0;
      ppSVar31 = &"FFFFFF";
      value = &MethodInfo_Void_Add;
      do {
        while( true ) {
          method_01 = "FFFFFF";
          lVar29 = MethodInfo_Void_Add;
          piVar1 = (int *)((long)&pSVar17->max_length + 4);
          *piVar1 = *piVar1 + 1;
          pIVar11 = pSVar17->bounds;
          if (pIVar11 == (Il2CppArrayBounds *)0x0) goto label_0450dd55;
          uVar24 = (uint)pSVar17->max_length;
          if ((uint)pIVar11[1].lower_bound <= uVar24) break;
          *(uint *)&pSVar17->max_length = uVar24 + 1;
          __this = (System_Object_array *)(&pIVar11[2].length + (int)uVar24);
          (&pIVar11[2].length)[(int)uVar24] = (il2cpp_array_size_t)method_01;
          pSStack_c8 = (System_String_o *)0x450da7f;
          il2cpp_runtime_helper_022b4080();
          uVar24 = (int)serialized + 1;
          serialized = (System_Object_array **)(ulong)uVar24;
          if (*(int *)&pSVar22->bounds <= (int)uVar24) goto label_0450da88;
        }
        pSStack_c8 = (System_String_o *)0x450da37;
        __this = pSVar17;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar17,&method_01->obj,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
        uVar24 = (int)serialized + 1;
        serialized = (System_Object_array **)(ulong)uVar24;
      } while ((int)uVar24 < *(int *)&pSVar22->bounds);
    }
label_0450da88:
    serialized = (System_Object_array **)local_c0;
    if ((local_c0 != (System_Object_array *)0x0) &&
       (__this = ((System_Collections_Generic_List_object__Fields *)&local_c0->bounds)->_items,
       __this != (System_Object_array *)0x0)) {
      uVar24 = 0;
      local_b8 = pSVar22;
      do {
        if ((*(int *)&__this->bounds <= (int)uVar24) || (*(int *)&pSVar22->bounds <= (int)uVar24)) {
label_0450daf9:
          pSVar22 = local_b8;
          method_01 = (System_Object_array *)(ulong)*(uint *)&__this->bounds;
          if (0 < (int)(*(uint *)&__this->bounds - uVar24)) {
            pSVar21 = (System_Object_array *)0x0;
            serialized = (System_Object_array **)&g_data_ffffffff;
            value = (long *)0x0;
            local_b0 = pSVar17;
            goto label_0450db30;
          }
          value = (long *)0x0;
          pSVar21 = (System_Object_array *)0x0;
          goto joined_r0x0450dcfd;
        }
        pSStack_c8 = (System_String_o *)0x450dac6;
        uVar12 = System_String__get_Chars((System_String_o *)__this,uVar24,(MethodInfo *)0x0);
        value = (long *)(CONCAT62(extraout_var,uVar12) & 0xffffffff);
        method_01 = (System_Object_array *)(ulong)uVar24;
        pSStack_c8 = (System_String_o *)0x450dad5;
        uVar12 = System_String__get_Chars((System_String_o *)pSVar22,uVar24,(MethodInfo *)0x0);
        if ((uint16_t)value != uVar12) {
          __this = ((System_Collections_Generic_List_object__Fields *)
                   &((System_Object_array *)serialized)->bounds)->_items;
          if (__this != (System_Object_array *)0x0) goto label_0450daf9;
          break;
        }
        uVar24 = uVar24 + 1;
        __this = ((System_Collections_Generic_List_object__Fields *)
                 &((System_Object_array *)serialized)->bounds)->_items;
      } while (__this != (System_Object_array *)0x0);
    }
  }
  goto label_0450dd55;
  while( true ) {
    iVar13 = (int)serialized;
    pSStack_c8 = (System_String_o *)0x450db47;
    uVar12 = System_String__get_Chars((System_String_o *)__this,(int)method_01 + iVar13,(MethodInfo *)0x0);
    value = (long *)(CONCAT62(extraout_var_00,uVar12) & 0xffffffff);
    uVar26 = *(int *)&pSVar22->bounds + iVar13;
    method_01 = (System_Object_array *)(ulong)uVar26;
    pSStack_c8 = (System_String_o *)0x450db59;
    __this = pSVar22;
    uVar12 = System_String__get_Chars((System_String_o *)pSVar22,uVar26,(MethodInfo *)0x0);
    pSVar17 = local_b0;
    if ((uint16_t)value != uVar12) {
      serialized = (System_Object_array **)(ulong)(iVar13 + 1U);
      value = (long *)(ulong)(iVar13 + 1U);
      break;
    }
    __this = ((System_Collections_Generic_List_object__Fields *)&local_c0->bounds)->_items;
    if (__this == (System_Object_array *)0x0) goto label_0450dd55;
    value = (long *)(ulong)~uVar23;
    pSVar21 = (System_Object_array *)(ulong)(uVar23 + 1);
    method_01 = (System_Object_array *)(ulong)*(uint *)&__this->bounds;
    serialized = (System_Object_array **)(ulong)(iVar13 - 1);
    if ((int)(*(uint *)&__this->bounds + -uVar24) <= (int)(uVar23 + 1)) break;
label_0450db30:
    uVar23 = (uint)pSVar21;
    ppSVar31 = (System_Object_array **)pSVar22;
    pSVar17 = local_b0;
    if ((int)(*(int *)&pSVar22->bounds + -uVar24) <= (int)uVar23) break;
  }
joined_r0x0450dcfd:
  pSVar22 = pSVar21;
  if (uVar24 == 0) {
label_0450dbed:
    iVar13 = (int)pSVar21;
    if (iVar13 != 0) {
      pSVar27 = pSVar21;
      if (pSVar17 == (System_Object_array *)0x0) goto label_0450dd2b;
      do {
        pSVar22 = ((System_Collections_Generic_List_object__Fields *)&local_c0->bounds)->_items;
        ppSVar31 = (System_Object_array **)pSVar27;
        if (pSVar22 == (System_Object_array *)0x0) goto label_0450dd55;
        __this = (System_Object_array *)0x0;
        if ((System_Collections_Generic_List_object__o *)local_c0->max_length ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_0450dd55;
        iVar25 = (int)value;
        uVar23 = *(int *)&local_b8->bounds + iVar25;
        serialized = (System_Object_array **)(ulong)uVar23;
        pSStack_c8 = (System_String_o *)0x450dc3c;
        pIVar18 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)local_c0->max_length,
                             *(int *)&pSVar22->bounds + iVar25,MethodInfo_String_get_Item);
        method_01 = (System_Object_array *)(ulong)uVar23;
        pSStack_c8 = (System_String_o *)0x450dc53;
        pSVar22 = MethodInfo_Void_set_Item;
        __this = pSVar17;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar17,uVar23,pIVar18,
                   (MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
        value = (long *)(ulong)(iVar25 + 1);
        uVar23 = (int)pSVar27 - 1;
        pSVar27 = (System_Object_array *)(ulong)uVar23;
      } while (uVar23 != 0);
    }
    method_01 = (System_Object_array *)(ulong)uVar24;
    pSStack_c8 = (System_String_o *)0x450dc6e;
    __this = local_c0;
    value = (long *)Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__EditColor
                              ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)local_c0,
                               uVar24,iVar13,(MethodInfo *)pSVar22);
    uVar23 = *(int *)&local_b8->bounds - iVar13;
    serialized = (System_Object_array **)(ulong)uVar23;
    pMVar30 = extraout_RDX;
    if ((int)uVar23 <= (int)uVar24) {
label_0450dcba:
      pSVar16 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                          ((System_String_o *)local_b8,(System_Collections_Generic_IList_string__o *)pSVar17,
                           pMVar30);
      return pSVar16;
    }
    ppSVar31 = (System_Object_array **)pSVar21;
    if (pSVar17 != (System_Object_array *)0x0) {
      do {
        pSStack_c8 = (System_String_o *)0x450dcb1;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar17,uVar24,(Il2CppObject *)value,
                   (MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
        uVar24 = uVar24 + 1;
        pMVar30 = extraout_RDX_00;
      } while (uVar23 != uVar24);
      goto label_0450dcba;
    }
  }
  else {
    if (pSVar17 != (System_Object_array *)0x0) {
      serialized = &MethodInfo_Void_set_Item;
      pSVar27 = (System_Object_array *)0x0;
      do {
        __this = (System_Object_array *)0x0;
        ppSVar31 = (System_Object_array **)pSVar27;
        if ((System_Collections_Generic_List_object__o *)local_c0->max_length ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_0450dd55;
        iVar13 = (int)pSVar27;
        pSStack_c8 = (System_String_o *)0x450dbd3;
        pIVar18 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)local_c0->max_length,iVar13,
                             MethodInfo_String_get_Item);
        pSStack_c8 = (System_String_o *)0x450dbe4;
        pSVar22 = MethodInfo_Void_set_Item;
        __this = pSVar17;
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar17,iVar13,pIVar18,
                   (MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
        ppSVar31 = (System_Object_array **)(ulong)(iVar13 + 1U);
        method_01 = pSVar27;
        pSVar27 = (System_Object_array *)ppSVar31;
      } while (uVar24 != iVar13 + 1U);
      goto label_0450dbed;
    }
    __this = (System_Object_array *)local_c0->max_length;
    if (__this == (System_Object_array *)0x0) goto label_0450dd55;
    method_01 = (System_Object_array *)0x0;
    pSStack_c8 = (System_String_o *)0x450dd26;
    System_Collections_Generic_List_object___get_Item
              ((System_Collections_Generic_List_object__o *)__this,0,MethodInfo_String_get_Item);
    pSStack_c8 = (System_String_o *)0x450dd2b;
    il2cpp_runtime_helper_022b2c90();
label_0450dd2b:
    pSVar22 = ((System_Collections_Generic_List_object__Fields *)&local_c0->bounds)->_items;
    if ((pSVar22 != (System_Object_array *)0x0) &&
       (__this = (System_Object_array *)local_c0->max_length, __this != (System_Object_array *)0x0)) {
      uVar24 = (int)value + *(int *)&pSVar22->bounds;
      value = (long *)(ulong)uVar24;
      method_01 = (System_Object_array *)(ulong)uVar24;
      pSStack_c8 = (System_String_o *)0x450dd55;
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)__this,uVar24,MethodInfo_String_get_Item);
    }
  }
label_0450dd55:
  pSStack_c8 = (System_String_o *)0x450dd5a;
  il2cpp_runtime_helper_022b2c90();
  pSVar22 = method_01;
  pSStack_d8 = (System_Object_array *)serialized;
  pSStack_d0 = (System_Object_array *)ppSVar31;
  pSStack_c8 = (System_String_o *)value;
  if (g_data_057aed6d == '\0') {
    uStack_e0 = 0x450dd81;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    uStack_e0 = 0x450dd8d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    uStack_e0 = 0x450dd99;
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed6d = '\x01';
  }
  uVar12 = (uint16_t)pSVar22;
  if ((__this != (System_Object_array *)0x0) &&
     (pSVar20 = (System_Text_StringBuilder_o *)__this->max_length,
     pSVar20 != (System_Text_StringBuilder_o *)0x0)) {
    iVar13 = (int)method_01;
    if ((0 < iVar13) && (iVar13 <= *(int *)&(pSVar20->fields).m_ChunkPrevious)) {
      uVar24 = iVar13 - 1;
label_0450ddfc:
      pMVar30 = (MethodInfo *)(ulong)uVar24;
      uStack_e0 = 0x450de01;
      pSVar16 = (System_String_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar20,uVar24,MethodInfo_String_get_Item);
      pSVar16 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar16,pMVar30);
      return pSVar16;
    }
    if (0 < (int)extraout_RDX_01) {
      pSVar22 = ((System_Collections_Generic_List_object__Fields *)&__this->bounds)->_items;
      if (pSVar22 == (System_Object_array *)0x0) {
        uStack_e0 = 0x450de12;
        uStack_f0 = il2cpp_runtime_helper_022b2c90();
        value_00 = pSVar20;
        pSStack_e8 = __this;
        uStack_e0 = (ulong)method_01 & 0xffffffff;
        if (g_data_057aed6e == '\0') {
          uStack_f8 = 0x450de3d;
          il2cpp_runtime_helper_023445d0(&"&gt;");
          value_00 = (System_Text_StringBuilder_o *)&"&lt;";
          uStack_f8 = 0x450de49;
          il2cpp_runtime_helper_023445d0();
          g_data_057aed6e = '\x01';
        }
        if (uVar12 == 0x3c) {
          if (pSVar20 == (System_Text_StringBuilder_o *)0x0) {
label_0450de9c:
            uStack_f8 = 0x450dea1;
            uStack_108 = il2cpp_runtime_helper_022b2c90();
            pSVar16 = (System_String_o *)0x0;
            pMVar30 = (MethodInfo *)0x0;
            uStack_110 = 0x450dec0;
            value_01 = value_00;
            pSStack_100 = pSVar20;
            uStack_f8 = extraout_RDX_01 & 0xffffffff;
            bVar14 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
            if ((char)bVar14 == '\0') {
              if (value_00 == (System_Text_StringBuilder_o *)0x0) {
                uStack_110 = 0x450df1f;
                il2cpp_runtime_helper_022b2c90();
                uStack_110 = 0;
                if (g_data_057aed6a == '\0') {
                  il2cpp_runtime_helper_023445d0(&"#");
                  g_data_057aed6a = '\x01';
                }
                UStack_120.r = 0.0;
                UStack_120.g = 0.0;
                UStack_120.b = 0.0;
                UStack_120.a = 0.0;
                pSVar16 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                    ((System_String_o *)value_01,pMVar30);
                pSVar16 = System_String__Concat_3ae5ba0("#",pSVar16,(MethodInfo *)0x0);
                bVar14 = UnityEngine_ColorUtility__TryParseHtmlString
                                   (pSVar16,(UnityEngine_Color_o *)&UStack_120,(MethodInfo *)0x0);
                if ((char)bVar14 == '\0') {
                  return (System_String_o *)CONCAT44(extraout_var_01,bVar14);
                }
                return (System_String_o *)CONCAT44(extraout_var_01,bVar14);
              }
              pSVar16 = (System_String_o *)0x0;
              if (*(int *)&(value_00->fields).m_ChunkChars == 6) {
                do {
                  uStack_110 = 0x450def5;
                  uVar12 = System_String__get_Chars
                                     ((System_String_o *)value_00,(int)pSVar16,(MethodInfo *)0x0);
                  if ((9 < (ushort)(uVar12 - 0x30)) && (5 < (ushort)((uVar12 & 0xffdf) - 0x41))) {
                    return (System_String_o *)0x0;
                  }
                  uVar24 = (int)pSVar16 + 1;
                  pSVar16 = (System_String_o *)(ulong)uVar24;
                } while ((int)uVar24 < *(int *)&(value_00->fields).m_ChunkChars);
                pSVar16 = (System_String_o *)CONCAT71((uint7)(uint3)(uVar24 >> 8),1);
              }
            }
            return pSVar16;
          }
          puVar19 = &"&lt;";
        }
        else {
          if (pSVar20 == (System_Text_StringBuilder_o *)0x0) goto label_0450de9c;
          if (uVar12 != 0x3e) {
            pSVar20 = System_Text_StringBuilder__Append_3b048f0(pSVar20,uVar12,(MethodInfo *)0x0);
            return (System_String_o *)pSVar20;
          }
          puVar19 = &"&gt;";
        }
        pSVar20 = System_Text_StringBuilder__Append_3b03f90
                            (pSVar20,(System_String_o *)*puVar19,(MethodInfo *)0x0);
        return (System_String_o *)pSVar20;
      }
      uVar24 = *(int *)&pSVar22->bounds - (int)extraout_RDX_01;
      if ((-1 < (int)uVar24) && ((int)uVar24 < *(int *)&(pSVar20->fields).m_ChunkPrevious)) goto label_0450ddfc;
    }
  }
  return (System_String_o *)"FFFFFF";
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ParseRgb
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ParseRgb (System_String_o* value, const MethodInfo* method);
// 0x450df20

UnityEngine_Color_o
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ParseRgb(System_String_o *value,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  UnityEngine_Color_o UVar4;
  UnityEngine_Color_Fields UStack_18;
  
  if (g_data_057aed6a == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057aed6a = '\x01';
  }
  UStack_18.r = 0.0;
  UStack_18.g = 0.0;
  UStack_18.b = 0.0;
  UStack_18.a = 0.0;
  pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(value,method);
  pSVar3 = System_String__Concat_3ae5ba0("#",pSVar3,(MethodInfo *)0x0);
  bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar3,(UnityEngine_Color_o *)&UStack_18,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    UVar4.fields.b = 1.0;
    UVar4.fields.a = 1.0;
    UVar4.fields.r = 1.0;
    UVar4.fields.g = 1.0;
    return (UnityEngine_Color_o)UVar4.fields;
  }
  UVar1.b = UStack_18.b;
  UVar1.a = UStack_18.a;
  UVar1.r = UStack_18.r;
  UVar1.g = UStack_18.g;
  return (UnityEngine_Color_o)UVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsRgb
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsRgb (System_String_o* value, const MethodInfo* method);
// 0x450deb0

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsRgb(System_String_o *value,MethodInfo *method)

{
  uint16_t uVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  bool_conflict bVar4;
  int32_t index;
  MethodInfo *method_00;
  UnityEngine_Color_Fields UStack_30;
  undefined8 uStack_20;
  
  bVar4 = 0;
  method_00 = (MethodInfo *)0x0;
  uStack_20 = 0x450dec0;
  pSVar3 = value;
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (value == (System_String_o *)0x0) {
      uStack_20 = 0x450df1f;
      il2cpp_runtime_helper_022b2c90();
      uStack_20 = 0;
      if (g_data_057aed6a == '\0') {
        il2cpp_runtime_helper_023445d0(&"#");
        g_data_057aed6a = '\x01';
      }
      UStack_30.r = 0.0;
      UStack_30.g = 0.0;
      UStack_30.b = 0.0;
      UStack_30.a = 0.0;
      pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar3,method_00);
      pSVar3 = System_String__Concat_3ae5ba0("#",pSVar3,(MethodInfo *)0x0);
      bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                        (pSVar3,(UnityEngine_Color_o *)&UStack_30,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return bVar2;
      }
      return bVar2;
    }
    index = 0;
    bVar4 = 0;
    if ((value->fields)._stringLength == 6) {
      do {
        uStack_20 = 0x450def5;
        uVar1 = System_String__get_Chars(value,index,(MethodInfo *)0x0);
        if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
          return 0;
        }
        index = index + 1;
      } while (index < (value->fields)._stringLength);
      bVar4 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)index >> 8),1);
    }
  }
  return bVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsColorTag
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag (System_String_o* text, int32_t index, System_String_o** color, const MethodInfo* method);
// 0x450c5d0

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsColorTag
          (System_String_o *text,int32_t index,System_String_o **color,MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  uint16_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_Text_StringBuilder_o *pSVar6;
  System_Text_StringBuilder_o *pSVar7;
  System_Collections_Generic_List_object__c *pSVar8;
  undefined8 uVar9;
  System_Text_StringBuilder_o *pSVar10;
  MethodInfo *method_00;
  long *extraout_RDX;
  System_Text_StringBuilder_o *text_00;
  uint uVar11;
  ulong unaff_RBP;
  long lVar12;
  MethodInfo *method_01;
  System_Collections_Generic_List_object__c **ppSVar13;
  MethodInfo *method_02;
  MethodInfo *in_R9;
  undefined8 unaff_R12;
  uint uVar14;
  ulong unaff_R13;
  ulong uVar15;
  byte bStack_f1;
  System_String_o *apSStack_f0 [2];
  int32_t iStack_dc;
  System_Collections_Generic_List_object__c *pSStack_d8;
  ulong uStack_d0;
  System_Text_StringBuilder_o *pSStack_c8;
  long *plStack_c0;
  System_Text_StringBuilder_o *pSStack_b8;
  MethodInfo *pMStack_b0;
  long lStack_a8;
  System_Collections_Generic_List_object__c *pSStack_a0;
  System_Text_StringBuilder_o *pSStack_98;
  System_Text_StringBuilder_o *pSStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  System_String_o **ppSStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 local_51;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *local_50;
  System_Text_StringBuilder_c *local_48;
  System_String_o *pSStack_40;
  
  uVar15 = (ulong)(uint)index;
  *color = (System_String_o *)0x0;
  pSStack_40 = (void *)0x450c5f5;
  pSVar6 = (System_Text_StringBuilder_o *)color;
  il2cpp_runtime_helper_022b4080();
  if (text == (System_String_o *)0x0) {
label_0450c78a:
    pSStack_40 = (void *)0x450c78f;
    il2cpp_runtime_helper_022b2c90();
    local_50 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
    local_48 = (System_Text_StringBuilder_c *)0x0;
    local_51 = 0;
    if (pSVar6 == (System_Text_StringBuilder_o *)0x0) {
      pSVar6 = (System_Text_StringBuilder_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar10 = (System_Text_StringBuilder_o *)&stack0xffffffffffffffb8;
    method_02 = (MethodInfo *)&stack0xffffffffffffffaf;
    lVar12 = 0;
    uStack_68 = 0x450c7e5;
    text_00 = pSVar6;
    pSStack_40 = text;
    bVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_440c820
                      ((System_String_o *)pSVar6,
                       (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0,
                       &stack0xffffffffffffffb0,(System_String_o **)pSVar10,(bool_conflict *)method_02,in_R9);
    if ((char)bVar4 != '\0') {
      if (local_50 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
        uStack_68 = 0x450c811;
        il2cpp_runtime_helper_022b2c90();
        plStack_c0 = extraout_RDX;
        pMStack_b0 = method_02;
        lStack_a8 = lVar12;
        pSStack_90 = pSVar6;
        uStack_88 = unaff_R12;
        uStack_80 = unaff_R13;
        ppSStack_78 = color;
        uStack_70 = uVar15;
        uStack_68 = unaff_RBP;
        if (g_data_057aed63 == '\0') {
          apSStack_f0[0] = (System_String_o *)0x450c858;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Document);
          apSStack_f0[0] = (System_String_o *)0x450c864;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          apSStack_f0[0] = (System_String_o *)0x450c870;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          apSStack_f0[0] = (System_String_o *)0x450c87c;
          il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
          apSStack_f0[0] = (System_String_o *)0x450c888;
          il2cpp_runtime_helper_023445d0(&"FFFFFF");
          g_data_057aed63 = '\x01';
        }
        pSStack_a0 = (System_Collections_Generic_List_object__c *)0x0;
        iStack_dc = 0;
        apSStack_f0[0] = (System_String_o *)0x450c8af;
        pSVar6 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Document);
        if (g_data_057aed6f == '\0') {
          apSStack_f0[0] = (System_String_o *)0x450c8c7;
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
          apSStack_f0[0] = (System_String_o *)0x450c8d3;
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
          g_data_057aed6f = '\x01';
        }
        apSStack_f0[0] = (System_String_o *)0x450c8e9;
        pSVar7 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        apSStack_f0[0] = (System_String_o *)0x450c8fe;
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_System_String);
        (pSVar6->fields).m_ChunkPrevious = pSVar7;
        apSStack_f0[0] = (System_String_o *)0x450c90e;
        il2cpp_runtime_helper_022b4080(&(pSVar6->fields).m_ChunkPrevious);
        pSVar8 = (System_Collections_Generic_List_object__c *)0x0;
        apSStack_f0[0] = (System_String_o *)0x450c918;
        ppSVar13 = (System_Collections_Generic_List_object__c **)pSVar6;
        System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
        if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
          (pSVar6->fields).m_ChunkChars = (System_Char_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          apSStack_f0[0] = (System_String_o *)0x450c949;
          il2cpp_runtime_helper_022b4080(&pSVar6->fields);
          *plStack_c0 = (long)pSVar6;
          apSStack_f0[0] = (System_String_o *)0x450c959;
          il2cpp_runtime_helper_022b4080();
          apSStack_f0[0] = (System_String_o *)0x450c968;
          pSVar6 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
          uVar11 = 0;
          apSStack_f0[0] = (System_String_o *)0x450c978;
          System_Text_StringBuilder___ctor(pSVar6,(MethodInfo *)0x0);
          pSStack_d8 = "FFFFFF";
          pSVar10->klass = (System_Text_StringBuilder_c *)0x0;
          pSVar8 = (System_Collections_Generic_List_object__c *)0x0;
          apSStack_f0[0] = (System_String_o *)0x450c999;
          ppSVar13 = (System_Collections_Generic_List_object__c **)pSVar10;
          il2cpp_runtime_helper_022b4080();
          *(undefined1 *)&pMStack_b0->methodPointer = 0;
          if ((text_00 != (System_Text_StringBuilder_o *)0x0) ||
             (text_00 = (System_Text_StringBuilder_o *)**(long **)(g_data_057b9c00 + 0xb8),
             text_00 != (System_Text_StringBuilder_o *)0x0)) {
            pSStack_98 = pSVar10;
            if (*(int *)&(text_00->fields).m_ChunkChars < 1) {
              uStack_d0 = 0;
            }
            else {
              pSStack_b8 = (System_Text_StringBuilder_o *)0x0;
              uVar14 = 0;
              uStack_d0 = 0;
              pSVar10 = (System_Text_StringBuilder_o *)0x0;
              pSStack_c8 = text_00;
              do {
                while( true ) {
                  pSVar8 = (System_Collections_Generic_List_object__c *)(ulong)uVar14;
                  apSStack_f0[0] = (System_String_o *)0x450ca3c;
                  ppSVar13 = (System_Collections_Generic_List_object__c **)text_00;
                  bVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag
                                    ((System_String_o *)text_00,uVar14,(System_String_o **)&pSStack_a0,
                                     &iStack_dc,method_02);
                  if ((char)bVar4 != '\0') break;
                  pSVar8 = (System_Collections_Generic_List_object__c *)(ulong)uVar14;
                  apSStack_f0[0] = (System_String_o *)0x450ca4d;
                  uVar3 = System_String__get_Chars((System_String_o *)text_00,uVar14,(MethodInfo *)0x0);
                  ppSVar13 = (System_Collections_Generic_List_object__c **)text_00;
                  if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_0450ccbf;
                  pSVar8 = (System_Collections_Generic_List_object__c *)(ulong)uVar3;
                  apSStack_f0[0] = (System_String_o *)0x450ca66;
                  ppSVar13 = (System_Collections_Generic_List_object__c **)pSVar6;
                  System_Text_StringBuilder__Append_3b048f0(pSVar6,uVar3,(MethodInfo *)0x0);
                  text_00 = pSStack_c8;
                  lVar12 = MethodInfo_Void_Add;
                  if (*plStack_c0 == 0) goto label_0450ccbf;
                  pSVar7 = *(System_Text_StringBuilder_o **)(*plStack_c0 + 0x18);
                  ppSVar13 = (System_Collections_Generic_List_object__c **)pSVar7;
                  if ((uStack_d0 & 1) == 0) {
                    ppSVar13 = (System_Collections_Generic_List_object__c **)pSVar10;
                    if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0450ccbf;
                    uVar11 = *(uint *)&(pSVar7->fields).m_ChunkPrevious;
                    if (g_data_057aed6c == '\0') {
                      apSStack_f0[0] = (System_String_o *)0x450cb12;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                      apSStack_f0[0] = (System_String_o *)0x450cb1e;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
                      ppSVar13 = &"FFFFFF";
                      apSStack_f0[0] = (System_String_o *)0x450cb2a;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057aed6c = '\x01';
                    }
                    lVar12 = MethodInfo_Void_Add;
                    pSVar8 = "FFFFFF";
                    if ((((lStack_a8 != 0) && (-1 < (int)uVar11)) &&
                        (ppSVar13 = *(System_Collections_Generic_List_object__c ***)(lStack_a8 + 0x18),
                        (System_Text_StringBuilder_o *)ppSVar13 != (System_Text_StringBuilder_o *)0x0)) &&
                       ((int)uVar11 <
                        *(int *)&(((System_Text_StringBuilder_o *)ppSVar13)->fields).m_ChunkPrevious)) {
                      method_01 = (MethodInfo *)(ulong)uVar11;
                      apSStack_f0[0] = (System_String_o *)0x450cb61;
                      ppSVar13 = (System_Collections_Generic_List_object__c **)
                                 System_Collections_Generic_List_object___get_Item
                                           ((System_Collections_Generic_List_object__o *)ppSVar13,uVar11,
                                            MethodInfo_String_get_Item);
                      apSStack_f0[0] = (System_String_o *)0x450cb69;
                      pSVar8 = (System_Collections_Generic_List_object__c *)
                               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                         ((System_String_o *)ppSVar13,method_01);
                      lVar12 = MethodInfo_Void_Add;
                    }
                    MethodInfo_Void_Add = lVar12;
                    if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0450ccbf;
                    piVar1 = (int32_t *)((long)&(pSVar7->fields).m_ChunkPrevious + 4);
                    *piVar1 = *piVar1 + 1;
                    pSVar2 = (System_Object_array *)(pSVar7->fields).m_ChunkChars;
                    if (pSVar2 == (System_Object_array *)0x0) goto label_0450ccbf;
                    uVar11 = *(uint *)&(pSVar7->fields).m_ChunkPrevious;
                    if (uVar11 < (uint)pSVar2->max_length) {
                      *(uint *)&(pSVar7->fields).m_ChunkPrevious = uVar11 + 1;
                      ppSVar13 = (System_Collections_Generic_List_object__c **)(pSVar2->m_Items + (int)uVar11)
                      ;
                      pSVar2->m_Items[(int)uVar11] = (Il2CppObject *)pSVar8;
                      apSStack_f0[0] = (System_String_o *)0x450cbd1;
                      il2cpp_runtime_helper_022b4080();
                    }
                    else {
                      apSStack_f0[0] = (System_String_o *)0x450cc21;
                      ppSVar13 = (System_Collections_Generic_List_object__c **)pSVar7;
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pSVar8,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar11 = 0;
                    uVar14 = uVar14 + 1;
                    text_00 = pSStack_c8;
                    pSStack_b8 = pSVar7;
                    if (*(int *)&(pSStack_c8->fields).m_ChunkChars <= (int)uVar14) goto label_0450cc4e;
                  }
                  else {
                    if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto label_0450ccbf;
                    piVar1 = (int32_t *)((long)&(pSVar7->fields).m_ChunkPrevious + 4);
                    *piVar1 = *piVar1 + 1;
                    pSVar2 = (System_Object_array *)(pSVar7->fields).m_ChunkChars;
                    if (pSVar2 == (System_Object_array *)0x0) goto label_0450ccbf;
                    uVar11 = *(uint *)&(pSVar7->fields).m_ChunkPrevious;
                    pSVar8 = pSStack_d8;
                    if (uVar11 < (uint)pSVar2->max_length) {
                      *(uint *)&(pSVar7->fields).m_ChunkPrevious = uVar11 + 1;
                      ppSVar13 = (System_Collections_Generic_List_object__c **)(pSVar2->m_Items + (int)uVar11)
                      ;
                      pSVar2->m_Items[(int)uVar11] = (Il2CppObject *)pSStack_d8;
                      apSStack_f0[0] = (System_String_o *)0x450cae8;
                      il2cpp_runtime_helper_022b4080();
                    }
                    else {
                      apSStack_f0[0] = (System_String_o *)0x450cbec;
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar7,
                                 (Il2CppObject *)pSStack_d8,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                    *(undefined1 *)&pMStack_b0->methodPointer = 1;
                    uVar11 = 0;
                    uVar14 = uVar14 + 1;
                    pSVar10 = pSVar7;
                    if (*(int *)&(text_00->fields).m_ChunkChars <= (int)uVar14) goto label_0450cc4e;
                  }
                }
                pSStack_d8 = pSStack_a0;
                uVar14 = uVar14 + iStack_dc;
                uStack_d0 = CONCAT71((uint7)(uint3)((uint)iStack_dc >> 8),1);
                uVar11 = 1;
              } while ((int)uVar14 < *(int *)&(text_00->fields).m_ChunkChars);
            }
label_0450cc4e:
            if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
              lVar12 = *plStack_c0;
              pSVar8 = (System_Collections_Generic_List_object__c *)(pSVar6->klass->vtable)._3_ToString.method
              ;
              apSStack_f0[0] = (System_String_o *)0x450cc6f;
              uVar9 = (*(pSVar6->klass->vtable)._3_ToString.methodPtr)();
              pSVar10 = pSStack_98;
              ppSVar13 = (System_Collections_Generic_List_object__c **)pSVar6;
              if (lVar12 != 0) {
                *(undefined8 *)(lVar12 + 0x10) = uVar9;
                apSStack_f0[0] = (System_String_o *)0x450cc8c;
                il2cpp_runtime_helper_022b4080(lVar12 + 0x10,uVar9);
                uVar14 = (uint)uStack_d0;
                if ((uVar11 & uVar14 & 1) != 0) {
                  pSVar10->klass = (System_Text_StringBuilder_c *)pSStack_d8;
                  apSStack_f0[0] = (System_String_o *)0x450ccae;
                  il2cpp_runtime_helper_022b4080(pSVar10);
                }
                return uVar14 & 0xffffff01;
              }
            }
          }
        }
label_0450ccbf:
        apSStack_f0[0] = (System_String_o *)0x450ccc4;
        il2cpp_runtime_helper_022b2c90();
        bStack_f1 = 0;
        apSStack_f0[0] = (System_String_o *)0x0;
        uVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_440c820
                           ((System_String_o *)ppSVar13,
                            (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0,
                            (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o **)pSVar8,
                            apSStack_f0,(bool_conflict *)&bStack_f1,in_R9);
        return (uint)bStack_f1 & uVar11 & 0xff;
      }
      uStack_68 = 0x450c800;
      pSVar6 = (System_Text_StringBuilder_o *)
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                         ((local_50->fields).Text,
                          (System_Collections_Generic_IList_string__o *)(local_50->fields).Colors,method_00);
    }
    return (bool_conflict)pSVar6;
  }
  uVar11 = index + 7;
  unaff_RBP = (ulong)uVar11;
  if ((int)uVar11 < (text->fields)._stringLength) {
    bVar4 = 0;
    pSStack_40 = (void *)0x450c61b;
    uVar3 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
    if (uVar3 == 0x5b) {
      bVar4 = 0;
      pSStack_40 = (void *)0x450c634;
      uVar3 = System_String__get_Chars(text,uVar11,(MethodInfo *)0x0);
      if (uVar3 == 0x5d) {
        uVar14 = index + 1;
        unaff_R13 = (ulong)uVar14;
        if ((int)uVar14 < (int)uVar11) {
          pSStack_40 = (void *)0x450c65b;
          uVar3 = System_String__get_Chars(text,uVar14,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar3 - 0x30)) && (5 < (ushort)((uVar3 & 0xffdf) - 0x41))) {
            return 0;
          }
          pSStack_40 = (void *)0x450c685;
          uVar3 = System_String__get_Chars(text,index + 2,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar3 - 0x30)) && (5 < (ushort)((uVar3 & 0xffdf) - 0x41))) {
            return 0;
          }
          pSStack_40 = (void *)0x450c6af;
          uVar3 = System_String__get_Chars(text,index + 3,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar3 - 0x30)) && (5 < (ushort)((uVar3 & 0xffdf) - 0x41))) {
            return 0;
          }
          pSStack_40 = (void *)0x450c6d9;
          uVar3 = System_String__get_Chars(text,index + 4,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar3 - 0x30)) && (5 < (ushort)((uVar3 & 0xffdf) - 0x41))) {
            return 0;
          }
          pSStack_40 = (void *)0x450c703;
          uVar3 = System_String__get_Chars(text,index + 5,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar3 - 0x30)) && (5 < (ushort)((uVar3 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar15 = (ulong)(index + 6U);
          pSStack_40 = (void *)0x450c72c;
          uVar3 = System_String__get_Chars(text,index + 6U,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar3 - 0x30)) && (5 < (ushort)((uVar3 & 0xffdf) - 0x41))) {
            return 0;
          }
        }
        unaff_R12 = 0;
        pSStack_40 = (void *)0x450c753;
        pSVar6 = (System_Text_StringBuilder_o *)text;
        pSVar5 = System_String__Substring_3af8da0(text,uVar14,6,(MethodInfo *)0x0);
        if (pSVar5 == (System_String_o *)0x0) goto label_0450c78a;
        pSStack_40 = (void *)0x450c762;
        pSVar5 = System_String__ToUpperInvariant(pSVar5,(MethodInfo *)0x0);
        *color = pSVar5;
        pSStack_40 = (void *)0x450c770;
        il2cpp_runtime_helper_022b4080(color,pSVar5);
        bVar4 = 1;
      }
    }
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsImportColorTag
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag (System_String_o* text, int32_t index, System_String_o** color, int32_t* length, const MethodInfo* method);
// 0x450cd10

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsImportColorTag
          (System_String_o *text,int32_t index,System_String_o **color,int32_t *length,MethodInfo *method)

{
  uint index_00;
  uint uVar1;
  System_String_c *__this;
  uint16_t uVar2;
  bool_conflict bVar3;
  System_String_o *__this_00;
  System_String_o *pSVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  MethodInfo *pMVar8;
  
  *color = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(color);
  *length = 0;
  uVar7 = 0;
  pSVar4 = text;
  bVar3 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return 0;
  }
  if (text == (System_String_o *)0x0) {
label_0450cfdf:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aed6c == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      il2cpp_runtime_helper_023445d0(&"FFFFFF");
      g_data_057aed6c = '\x01';
    }
    if ((((pSVar4 != (System_String_o *)0x0) && (iVar5 = (int)uVar7, -1 < iVar5)) &&
        (__this = pSVar4[1].klass, __this != (System_String_c *)0x0)) &&
       (iVar5 < *(int *)&(__this->_1).namespaze)) {
      pMVar8 = (MethodInfo *)(uVar7 & 0xffffffff);
      pSVar4 = (System_String_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this,iVar5,MethodInfo_String_get_Item);
      pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar4,pMVar8);
      return (bool_conflict)pSVar4;
    }
    return (bool_conflict)"FFFFFF";
  }
  if (index < (text->fields)._stringLength) {
    uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
    if (uVar2 != 0x5b) {
      return 0;
    }
    index_00 = index + 4;
    uVar6 = (ulong)index_00;
    if ((((((int)index_00 < (text->fields)._stringLength) &&
          (uVar2 = System_String__get_Chars(text,index_00,(MethodInfo *)0x0), uVar2 == 0x5d)) && (-2 < index))
        && ((int)index_00 <= (text->fields)._stringLength)) &&
       ((uVar1 = index + 1, (int)index_00 <= (int)uVar1 ||
        ((((uVar2 = System_String__get_Chars(text,uVar1,(MethodInfo *)0x0), (ushort)(uVar2 - 0x30) < 10 ||
           ((ushort)((uVar2 & 0xffdf) - 0x41) < 6)) &&
          ((uVar2 = System_String__get_Chars(text,index + 2,(MethodInfo *)0x0), (ushort)(uVar2 - 0x30) < 10 ||
           ((ushort)((uVar2 & 0xffdf) - 0x41) < 6)))) &&
         ((uVar2 = System_String__get_Chars(text,index + 3,(MethodInfo *)0x0), (ushort)(uVar2 - 0x30) < 10 ||
          ((ushort)((uVar2 & 0xffdf) - 0x41) < 6)))))))) {
      pMVar8 = (MethodInfo *)(ulong)uVar1;
      pSVar4 = System_String__Substring_3af8da0(text,uVar1,3,(MethodInfo *)0x0);
      pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExpandRgb(pSVar4,pMVar8);
      *color = pSVar4;
      il2cpp_runtime_helper_022b4080(color,pSVar4);
      *length = 5;
label_0450cfd7:
      return (bool_conflict)CONCAT71((int7)(uVar6 >> 8),1);
    }
    iVar5 = index + 7;
    if (iVar5 < (text->fields)._stringLength) {
      uVar2 = System_String__get_Chars(text,iVar5,(MethodInfo *)0x0);
      if (uVar2 != 0x5d) {
        return 0;
      }
      if ((-2 < index) && (iVar5 <= (text->fields)._stringLength)) {
        uVar1 = index + 1;
        uVar7 = (ulong)uVar1;
        if ((int)uVar1 < iVar5) {
          uVar2 = System_String__get_Chars(text,uVar1,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar2 - 0x30)) && (5 < (ushort)((uVar2 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar2 = System_String__get_Chars(text,index + 2,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar2 - 0x30)) && (5 < (ushort)((uVar2 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar2 = System_String__get_Chars(text,index + 3,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar2 - 0x30)) && (5 < (ushort)((uVar2 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar2 = System_String__get_Chars(text,index_00,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar2 - 0x30)) && (5 < (ushort)((uVar2 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar2 = System_String__get_Chars(text,index + 5,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar2 - 0x30)) && (5 < (ushort)((uVar2 & 0xffdf) - 0x41))) {
            return 0;
          }
          uVar2 = System_String__get_Chars(text,index + 6,(MethodInfo *)0x0);
          if ((9 < (ushort)(uVar2 - 0x30)) && (5 < (ushort)((uVar2 & 0xffdf) - 0x41))) {
            return 0;
          }
        }
        uVar6 = 0;
        __this_00 = System_String__Substring_3af8da0(text,uVar1,6,(MethodInfo *)0x0);
        pSVar4 = text;
        if (__this_00 == (System_String_o *)0x0) goto label_0450cfdf;
        pSVar4 = System_String__ToUpperInvariant(__this_00,(MethodInfo *)0x0);
        *color = pSVar4;
        il2cpp_runtime_helper_022b4080(color,pSVar4);
        *length = 8;
        goto label_0450cfd7;
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsHexRange
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHexRange (System_String_o* text, int32_t start, int32_t count, const MethodInfo* method);
// 0x450dfc0

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHexRange
          (System_String_o *text,int32_t start,int32_t count,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  intptr_t iVar1;
  intptr_t iVar2;
  intptr_t iVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o value;
  intptr_t iVar4;
  uint16_t uVar5;
  bool_conflict extraout_EAX;
  bool_conflict bVar6;
  System_Object_array *args;
  Il2CppObject *pIVar7;
  long lVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar15;
  undefined1 uVar16;
  void *extraout_RDX;
  MethodInfo *pMVar17;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGVar18;
  System_String_o *in_R8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_R9;
  undefined8 *unaff_R12;
  undefined8 unaff_R14;
  System_String_o *in_stack_fffffffffffffe98;
  System_String_o *in_stack_fffffffffffffea0;
  undefined2 uStack_11a;
  intptr_t iStack_118;
  System_String_o *pSStack_110;
  System_String_o *pSStack_108;
  intptr_t iStack_100;
  intptr_t iStack_f8;
  intptr_t iStack_f0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGStack_e8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_e0;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGStack_d8;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGStack_d0;
  MethodInfo *pMStack_c8;
  System_Enum_o SStack_c0;
  undefined4 uStack_b0;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGStack_a8;
  undefined8 *puStack_a0;
  uint16_t uStack_54;
  uint16_t uStack_52;
  uint16_t uStack_50;
  uint16_t uStack_4e;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  
  if ((start | count) < 0) {
    return 0;
  }
  if (text != (System_String_o *)0x0) {
    if ((text->fields)._stringLength < count + start) {
      return 0;
    }
    bVar6 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    if (start < count + start) {
      while ((uVar5 = System_String__get_Chars(text,start,(MethodInfo *)0x0), (ushort)(uVar5 - 0x30) < 10 ||
             ((ushort)((uVar5 & 0xffdf) - 0x41) < 6))) {
        start = start + 1;
        count = count + -1;
        if (count == 0) {
          return bVar6;
        }
      }
      return 0;
    }
    return bVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057aed6b = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (text != (System_String_o *)0x0) {
    uVar5 = System_String__get_Chars(text,0,(MethodInfo *)0x0);
    unaff_R12 = &g_data_057b9b70;
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_4a = System_Char__ToUpperInvariant(uVar5,(MethodInfo *)0x0);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf8,&uStack_4a);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar7 == (Il2CppObject *)0x0) ||
         (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7,(((args->obj).klass)->_1).element_class), lVar8 != 0)) {
        if ((int)args->max_length != 0) {
          args->m_Items[0] = pIVar7;
          il2cpp_runtime_helper_022b4080(args->m_Items);
          uVar5 = System_String__get_Chars(text,0,(MethodInfo *)0x0);
          uStack_4c = System_Char__ToUpperInvariant(uVar5,(MethodInfo *)0x0);
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf8,&uStack_4c);
          if ((pIVar7 != (Il2CppObject *)0x0) &&
             (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7,(((args->obj).klass)->_1).element_class), lVar8 == 0))
          goto label_0450e334;
          if (1 < (uint)args->max_length) {
            args->m_Items[1] = pIVar7;
            il2cpp_runtime_helper_022b4080(args->m_Items + 1,pIVar7);
            uVar5 = System_String__get_Chars(text,1,(MethodInfo *)0x0);
            uStack_4e = System_Char__ToUpperInvariant(uVar5,(MethodInfo *)0x0);
            pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf8,&uStack_4e);
            if ((pIVar7 != (Il2CppObject *)0x0) &&
               (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7,(((args->obj).klass)->_1).element_class), lVar8 == 0))
            goto label_0450e334;
            if (2 < (uint)args->max_length) {
              args->m_Items[2] = pIVar7;
              il2cpp_runtime_helper_022b4080(args->m_Items + 2,pIVar7);
              uVar5 = System_String__get_Chars(text,1,(MethodInfo *)0x0);
              uStack_50 = System_Char__ToUpperInvariant(uVar5,(MethodInfo *)0x0);
              pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf8,&uStack_50);
              if ((pIVar7 != (Il2CppObject *)0x0) &&
                 (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7,(((args->obj).klass)->_1).element_class), lVar8 == 0))
              goto label_0450e334;
              if (3 < (uint)args->max_length) {
                args->m_Items[3] = pIVar7;
                il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar7);
                uVar5 = System_String__get_Chars(text,2,(MethodInfo *)0x0);
                uStack_52 = System_Char__ToUpperInvariant(uVar5,(MethodInfo *)0x0);
                pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf8,&uStack_52);
                if ((pIVar7 != (Il2CppObject *)0x0) &&
                   (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7,(((args->obj).klass)->_1).element_class), lVar8 == 0))
                goto label_0450e334;
                if (4 < (uint)args->max_length) {
                  args->m_Items[4] = pIVar7;
                  il2cpp_runtime_helper_022b4080(args->m_Items + 4,pIVar7);
                  uVar5 = System_String__get_Chars(text,2,(MethodInfo *)0x0);
                  uStack_54 = System_Char__ToUpperInvariant(uVar5,(MethodInfo *)0x0);
                  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf8,&uStack_54);
                  if ((pIVar7 != (Il2CppObject *)0x0) &&
                     (lVar8 = il2cpp_runtime_helper_023051f0(pIVar7,(((args->obj).klass)->_1).element_class), lVar8 == 0))
                  goto label_0450e334;
                  if (5 < (uint)args->max_length) {
                    args->m_Items[5] = pIVar7;
                    il2cpp_runtime_helper_022b4080(args->m_Items + 5);
                    pSVar9 = System_String__Concat_3af7200(args,(MethodInfo *)0x0);
                    return (bool_conflict)pSVar9;
                  }
                }
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
label_0450e334:
      uVar10 = il2cpp_runtime_helper_0231b270();
      il2cpp_runtime_helper_022b2b10(uVar10,0);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed70 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_BuildEditor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextColorEditor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Game_AottgC);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Options);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&"AottgCharacterTextColorEditor");
    g_data_057aed70 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Options);
  System_Collections_Generic_Dictionary_object__AottgCharacterTextColorEditor_Options____ctor
            (__this_00,MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Game_AottgC);
  **(undefined8 **)(TypeInfo_AottgCharacterTextColorEditor + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCharacterTextColorEditor + 0xb8));
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)**(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  pMVar17 = (MethodInfo *)0x0;
  uVar16 = 0;
  pGVar18 = factory;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgCharacterTextColorEditor",factory,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = pMVar17;
  pGStack_a8 = factory;
  puStack_a0 = unaff_R12;
  if (g_data_057aed71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextColorEditor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"InputField");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"characterTextColorInput");
    il2cpp_runtime_helper_023445d0(&"profile-character-text-color-editor");
    il2cpp_runtime_helper_023445d0(&"profile-character-text-color-editor-input");
    il2cpp_runtime_helper_023445d0(&"AottgCharacterTextColorEditor");
    g_data_057aed71 = '\x01';
  }
  pGStack_d8 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                         ((System_String_o *)(pGVar18->fields).method_ptr,method_00);
  pMStack_c8 = pMVar17;
  if (*(int *)(TypeInfo_AottgCharacterTextColorEditor + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_e0 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_AottgCharacterTextColorEditor + 0xb8)
  ;
  iStack_118 = (pGVar18->fields).invoke_impl;
  pSVar9 = (System_String_o *)(pGVar18->fields).m_target;
  iVar4 = (pGVar18->fields).method;
  iVar1 = (pGVar18->fields).delegate_trampoline;
  iVar2 = (pGVar18->fields).extra_arg;
  iVar3 = (pGVar18->fields).method_code;
  pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)(pGVar18->fields).interp_method;
  iStack_f0 = 0;
  pGStack_e8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
  iStack_100 = 0;
  iStack_f8 = 0;
  pSStack_110 = (System_String_o *)0x0;
  pSStack_108 = (System_String_o *)0x0;
  pGStack_d0 = pGVar18;
  il2cpp_runtime_helper_022b4080(&iStack_118);
  pSStack_110 = pSVar9;
  il2cpp_runtime_helper_022b4080(&pSStack_110,pSVar9);
  pSStack_108 = (System_String_o *)CONCAT71(pSStack_108._1_7_,(char)iVar4);
  iStack_100 = iVar1;
  il2cpp_runtime_helper_022b4080(&iStack_100,iVar1);
  iStack_f8 = iVar2;
  il2cpp_runtime_helper_022b4080(&iStack_f8,iVar2);
  iStack_f0 = iVar3;
  il2cpp_runtime_helper_022b4080(&iStack_f0,iVar3);
  pGStack_e8 = pGVar14;
  il2cpp_runtime_helper_022b4080(&pGStack_e8);
  pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  if (pSStack_e0 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    value.fields.ColorsEnabledKey = pSStack_110;
    value.fields.PickerId = (System_String_o *)iStack_118;
    value.fields._16_8_ = pSStack_108;
    value.fields.Imported = (System_Action_GameObject__o *)iStack_100;
    value.fields.PreviewEffectType = (System_String_o *)iStack_f8;
    value.fields.PreviewEffectColors._0_4_ = (int)iStack_f0;
    value.fields.PreviewEffectColors._4_4_ = (int)((ulong)iStack_f0 >> 0x20);
    value.fields.PreviewFont._0_4_ = (int)pGStack_e8;
    value.fields.PreviewFont._4_4_ = (int)((ulong)pGStack_e8 >> 0x20);
    in_stack_fffffffffffffe98 = pSStack_110;
    in_stack_fffffffffffffea0 = pSStack_108;
    System_Collections_Generic_Dictionary_object__AottgCharacterTextColorEditor_Options___set_Item
              (pSStack_e0,(Il2CppObject *)"profile-character-text-color-editor",value,MethodInfo_Void_set_Item);
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    pGVar15 = __this_01;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_01->fields).type = "AottgCharacterTextColorEditor";
      il2cpp_runtime_helper_022b4080(&__this_01->fields);
      (__this_01->fields).id = "profile-character-text-color-editor";
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).id);
      pGVar18 = pGStack_d0;
      (__this_01->fields).value = (System_String_o *)(pGStack_d0->fields).method_ptr;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).value);
      (__this_01->fields).style = "clear";
      il2cpp_runtime_helper_022b4080();
      in_R9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      in_stack_fffffffffffffe98 = (System_String_o *)0x0;
      in_stack_fffffffffffffea0 = (System_String_o *)0x0;
      uVar16 = 0;
      in_R8 = (System_String_o *)0x0;
      pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                           (System_String_o *)0x0,0.0,in_R9,pGVar11,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,0.0,(MethodInfo *)0x0);
      (__this_01->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar12;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).search,pGVar12);
      pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
      __this_02 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
      pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
      pGVar15 = __this_02;
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
      if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_02->fields).type = "InputField";
        il2cpp_runtime_helper_022b4080(&__this_02->fields);
        (__this_02->fields).id = "profile-character-text-color-editor-input";
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).id);
        (__this_02->fields).placeholder = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).placeholder);
        SStack_c0.klass = TypeInfo_AottgInputType;
        SStack_c0.monitor = (void *)0xffffffffffffffff;
        uStack_b0 = 0;
        pSVar9 = System_Enum__ToString(&SStack_c0,(MethodInfo *)0x0);
        (__this_02->fields).inputType = pSVar9;
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).inputType,pSVar9);
        pGVar14 = "characterTextColorInput";
        pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_02->fields).style;
        (__this_02->fields).style = (System_String_o *)"characterTextColorInput";
        il2cpp_runtime_helper_022b4080();
        if (pGStack_d8 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
          (__this_02->fields).value = (pGStack_d8->fields).Text;
          il2cpp_runtime_helper_022b4080(&(__this_02->fields).value);
          uStack_11a = 0;
          System_Nullable_bool____ctor
                    ((System_Nullable_bool__o)&uStack_11a,(uint)*(byte *)((long)&(pGVar18->fields).method + 1)
                     ,MethodInfo_Nullable_1_Boolean);
          *(undefined2 *)((long)&(__this_02->fields).hasIcon + 3) = uStack_11a;
          (__this_02->fields).max.fields.value = 3.90962e-43;
          in_R9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
          in_stack_fffffffffffffe98 = (System_String_o *)0x0;
          in_stack_fffffffffffffea0 = (System_String_o *)0x0;
          uVar16 = 0;
          in_R8 = (System_String_o *)0x0;
          pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                    Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(System_String_o *)0x0,0.0,in_R9,pGVar11,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                               0.0,0.0,0.0,(MethodInfo *)0x0);
          pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_02->fields).search;
          (__this_02->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar14;
          il2cpp_runtime_helper_022b4080();
          if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if (*(int *)&pGVar13->max_length == 0) goto label_0450ea23;
            ((Il2CppType *)pGVar13->m_Items)->data = __this_02;
            il2cpp_runtime_helper_022b4080((Il2CppType *)pGVar13->m_Items,__this_02);
            (__this_01->fields).deferredChildren = pGVar13;
            il2cpp_runtime_helper_022b4080(&(__this_01->fields).deferredChildren);
            pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
            pGVar14 = pGVar13;
            if (pMStack_c8 != (MethodInfo *)0x0) {
              pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Add
                                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMStack_c8,__this_01,(MethodInfo *)0x0)
              ;
              return (bool_conflict)pGVar15;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450ea23:
  il2cpp_runtime_helper_022b2ca0();
  pGVar15->klass = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *)pGVar14;
  il2cpp_runtime_helper_022b4080();
  pGVar15->monitor = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&pGVar15->monitor,extraout_RDX);
  *(undefined1 *)&(pGVar15->fields).type = uVar16;
  (pGVar15->fields).id = in_R8;
  il2cpp_runtime_helper_022b4080(&(pGVar15->fields).id,in_R8);
  (pGVar15->fields).text = (System_String_o *)in_R9;
  il2cpp_runtime_helper_022b4080(&(pGVar15->fields).text,in_R9);
  (pGVar15->fields).textKey = in_stack_fffffffffffffe98;
  il2cpp_runtime_helper_022b4080(&(pGVar15->fields).textKey,in_stack_fffffffffffffe98);
  (pGVar15->fields).placeholder = in_stack_fffffffffffffea0;
  bVar6 = il2cpp_runtime_helper_022b4080(&(pGVar15->fields).placeholder,in_stack_fffffffffffffea0);
  return bVar6;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ExpandRgb
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExpandRgb (System_String_o* rgb, const MethodInfo* method);
// 0x450e030

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExpandRgb(System_String_o *rgb,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  intptr_t iVar1;
  intptr_t iVar2;
  intptr_t iVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o value;
  intptr_t iVar4;
  uint16_t uVar5;
  System_Object_array *args;
  Il2CppObject *pIVar6;
  long lVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  System_String_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar14;
  undefined1 uVar15;
  void *extraout_RDX;
  MethodInfo *pMVar16;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGVar17;
  System_String_o *in_R8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_R9;
  undefined8 *unaff_R12;
  System_String_o *in_stack_fffffffffffffec0;
  System_String_o *in_stack_fffffffffffffec8;
  undefined2 local_f2;
  intptr_t local_f0;
  System_String_o *pSStack_e8;
  System_String_o *pSStack_e0;
  intptr_t iStack_d8;
  intptr_t iStack_d0;
  intptr_t local_c8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGStack_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_b8;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *local_b0;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *local_a8;
  MethodInfo *local_a0;
  System_Enum_o local_98;
  undefined4 local_88;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGStack_80;
  undefined8 *puStack_78;
  uint16_t local_2c;
  uint16_t local_2a;
  uint16_t local_28;
  uint16_t local_26;
  uint16_t local_24;
  uint16_t local_22;
  
  if (g_data_057aed6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057aed6b = '\x01';
  }
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (rgb != (System_String_o *)0x0) {
    uVar5 = System_String__get_Chars(rgb,0,(MethodInfo *)0x0);
    unaff_R12 = &g_data_057b9b70;
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    local_22 = System_Char__ToUpperInvariant(uVar5,(MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf8,&local_22);
    if (args != (System_Object_array *)0x0) {
      if (pIVar6 == (Il2CppObject *)0x0) {
label_0450e0ef:
        if ((int)args->max_length != 0) {
          args->m_Items[0] = pIVar6;
          il2cpp_runtime_helper_022b4080(args->m_Items);
          uVar5 = System_String__get_Chars(rgb,0,(MethodInfo *)0x0);
          local_24 = System_Char__ToUpperInvariant(uVar5,(MethodInfo *)0x0);
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf8,&local_24);
          if (pIVar6 != (Il2CppObject *)0x0) {
            lVar7 = il2cpp_runtime_helper_023051f0(pIVar6,(((args->obj).klass)->_1).element_class);
            if (lVar7 == 0) goto label_0450e334;
          }
          if (1 < (uint)args->max_length) {
            args->m_Items[1] = pIVar6;
            il2cpp_runtime_helper_022b4080(args->m_Items + 1,pIVar6);
            uVar5 = System_String__get_Chars(rgb,1,(MethodInfo *)0x0);
            local_26 = System_Char__ToUpperInvariant(uVar5,(MethodInfo *)0x0);
            pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf8,&local_26);
            if (pIVar6 != (Il2CppObject *)0x0) {
              lVar7 = il2cpp_runtime_helper_023051f0(pIVar6,(((args->obj).klass)->_1).element_class);
              if (lVar7 == 0) goto label_0450e334;
            }
            if (2 < (uint)args->max_length) {
              args->m_Items[2] = pIVar6;
              il2cpp_runtime_helper_022b4080(args->m_Items + 2,pIVar6);
              uVar5 = System_String__get_Chars(rgb,1,(MethodInfo *)0x0);
              local_28 = System_Char__ToUpperInvariant(uVar5,(MethodInfo *)0x0);
              pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf8,&local_28);
              if (pIVar6 != (Il2CppObject *)0x0) {
                lVar7 = il2cpp_runtime_helper_023051f0(pIVar6,(((args->obj).klass)->_1).element_class);
                if (lVar7 == 0) goto label_0450e334;
              }
              if (3 < (uint)args->max_length) {
                args->m_Items[3] = pIVar6;
                il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar6);
                uVar5 = System_String__get_Chars(rgb,2,(MethodInfo *)0x0);
                local_2a = System_Char__ToUpperInvariant(uVar5,(MethodInfo *)0x0);
                pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf8,&local_2a);
                if (pIVar6 != (Il2CppObject *)0x0) {
                  lVar7 = il2cpp_runtime_helper_023051f0(pIVar6,(((args->obj).klass)->_1).element_class);
                  if (lVar7 == 0) goto label_0450e334;
                }
                if (4 < (uint)args->max_length) {
                  args->m_Items[4] = pIVar6;
                  il2cpp_runtime_helper_022b4080(args->m_Items + 4,pIVar6);
                  uVar5 = System_String__get_Chars(rgb,2,(MethodInfo *)0x0);
                  local_2c = System_Char__ToUpperInvariant(uVar5,(MethodInfo *)0x0);
                  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf8,&local_2c);
                  if (pIVar6 != (Il2CppObject *)0x0) {
                    lVar7 = il2cpp_runtime_helper_023051f0(pIVar6,(((args->obj).klass)->_1).element_class);
                    if (lVar7 == 0) goto label_0450e334;
                  }
                  if (5 < (uint)args->max_length) {
                    args->m_Items[5] = pIVar6;
                    il2cpp_runtime_helper_022b4080(args->m_Items + 5);
                    pSVar8 = System_String__Concat_3af7200(args,(MethodInfo *)0x0);
                    return pSVar8;
                  }
                }
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
      else {
        lVar7 = il2cpp_runtime_helper_023051f0(pIVar6,(((args->obj).klass)->_1).element_class);
        if (lVar7 != 0) goto label_0450e0ef;
      }
label_0450e334:
      uVar9 = il2cpp_runtime_helper_0231b270();
      il2cpp_runtime_helper_022b2b10(uVar9,0);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed70 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_BuildEditor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextColorEditor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Game_AottgC);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Options);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&"AottgCharacterTextColorEditor");
    g_data_057aed70 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Options);
  System_Collections_Generic_Dictionary_object__AottgCharacterTextColorEditor_Options____ctor
            (__this_00,MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Game_AottgC);
  **(undefined8 **)(TypeInfo_AottgCharacterTextColorEditor + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCharacterTextColorEditor + 0xb8));
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)**(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  pMVar16 = (MethodInfo *)0x0;
  uVar15 = 0;
  pGVar17 = factory;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgCharacterTextColorEditor",factory,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = pMVar16;
  pGStack_80 = factory;
  puStack_78 = unaff_R12;
  if (g_data_057aed71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextColorEditor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"InputField");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"characterTextColorInput");
    il2cpp_runtime_helper_023445d0(&"profile-character-text-color-editor");
    il2cpp_runtime_helper_023445d0(&"profile-character-text-color-editor-input");
    il2cpp_runtime_helper_023445d0(&"AottgCharacterTextColorEditor");
    g_data_057aed71 = '\x01';
  }
  local_b0 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                       ((System_String_o *)(pGVar17->fields).method_ptr,method_00);
  local_a0 = pMVar16;
  if (*(int *)(TypeInfo_AottgCharacterTextColorEditor + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_b8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_AottgCharacterTextColorEditor + 0xb8);
  local_f0 = (pGVar17->fields).invoke_impl;
  pSVar8 = (System_String_o *)(pGVar17->fields).m_target;
  iVar4 = (pGVar17->fields).method;
  iVar1 = (pGVar17->fields).delegate_trampoline;
  iVar2 = (pGVar17->fields).extra_arg;
  iVar3 = (pGVar17->fields).method_code;
  pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)(pGVar17->fields).interp_method;
  local_c8 = 0;
  pGStack_c0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
  iStack_d8 = 0;
  iStack_d0 = 0;
  pSStack_e8 = (System_String_o *)0x0;
  pSStack_e0 = (System_String_o *)0x0;
  local_a8 = pGVar17;
  il2cpp_runtime_helper_022b4080(&local_f0);
  pSStack_e8 = pSVar8;
  il2cpp_runtime_helper_022b4080(&pSStack_e8,pSVar8);
  pSStack_e0 = (System_String_o *)CONCAT71(pSStack_e0._1_7_,(char)iVar4);
  iStack_d8 = iVar1;
  il2cpp_runtime_helper_022b4080(&iStack_d8,iVar1);
  iStack_d0 = iVar2;
  il2cpp_runtime_helper_022b4080(&iStack_d0,iVar2);
  local_c8 = iVar3;
  il2cpp_runtime_helper_022b4080(&local_c8,iVar3);
  pGStack_c0 = pGVar13;
  il2cpp_runtime_helper_022b4080(&pGStack_c0);
  pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  if (local_b8 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    value.fields.ColorsEnabledKey = pSStack_e8;
    value.fields.PickerId = (System_String_o *)local_f0;
    value.fields._16_8_ = pSStack_e0;
    value.fields.Imported = (System_Action_GameObject__o *)iStack_d8;
    value.fields.PreviewEffectType = (System_String_o *)iStack_d0;
    value.fields.PreviewEffectColors._0_4_ = (int)local_c8;
    value.fields.PreviewEffectColors._4_4_ = (int)((ulong)local_c8 >> 0x20);
    value.fields.PreviewFont._0_4_ = (int)pGStack_c0;
    value.fields.PreviewFont._4_4_ = (int)((ulong)pGStack_c0 >> 0x20);
    in_stack_fffffffffffffec0 = pSStack_e8;
    in_stack_fffffffffffffec8 = pSStack_e0;
    System_Collections_Generic_Dictionary_object__AottgCharacterTextColorEditor_Options___set_Item
              (local_b8,(Il2CppObject *)"profile-character-text-color-editor",value,MethodInfo_Void_set_Item);
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    pGVar14 = __this_01;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_01->fields).type = "AottgCharacterTextColorEditor";
      il2cpp_runtime_helper_022b4080(&__this_01->fields);
      (__this_01->fields).id = "profile-character-text-color-editor";
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).id);
      pGVar17 = local_a8;
      (__this_01->fields).value = (System_String_o *)(local_a8->fields).method_ptr;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).value);
      (__this_01->fields).style = "clear";
      il2cpp_runtime_helper_022b4080();
      in_R9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      in_stack_fffffffffffffec0 = (System_String_o *)0x0;
      in_stack_fffffffffffffec8 = (System_String_o *)0x0;
      uVar15 = 0;
      in_R8 = (System_String_o *)0x0;
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                           (System_String_o *)0x0,0.0,in_R9,pGVar10,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,0.0,(MethodInfo *)0x0);
      (__this_01->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).search,pGVar11);
      pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
      __this_02 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
      pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
      pGVar14 = __this_02;
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
      if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_02->fields).type = "InputField";
        il2cpp_runtime_helper_022b4080(&__this_02->fields);
        (__this_02->fields).id = "profile-character-text-color-editor-input";
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).id);
        (__this_02->fields).placeholder = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).placeholder);
        local_98.klass = TypeInfo_AottgInputType;
        local_98.monitor = (void *)0xffffffffffffffff;
        local_88 = 0;
        pSVar8 = System_Enum__ToString(&local_98,(MethodInfo *)0x0);
        (__this_02->fields).inputType = pSVar8;
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).inputType,pSVar8);
        pGVar13 = "characterTextColorInput";
        pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_02->fields).style;
        (__this_02->fields).style = (System_String_o *)"characterTextColorInput";
        il2cpp_runtime_helper_022b4080();
        if (local_b0 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
          (__this_02->fields).value = (local_b0->fields).Text;
          il2cpp_runtime_helper_022b4080(&(__this_02->fields).value);
          local_f2 = 0;
          System_Nullable_bool____ctor
                    ((System_Nullable_bool__o)&local_f2,(uint)*(byte *)((long)&(pGVar17->fields).method + 1),
                     MethodInfo_Nullable_1_Boolean);
          *(undefined2 *)((long)&(__this_02->fields).hasIcon + 3) = local_f2;
          (__this_02->fields).max.fields.value = 3.90962e-43;
          in_R9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
          in_stack_fffffffffffffec0 = (System_String_o *)0x0;
          in_stack_fffffffffffffec8 = (System_String_o *)0x0;
          uVar15 = 0;
          in_R8 = (System_String_o *)0x0;
          pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                    Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(System_String_o *)0x0,0.0,in_R9,pGVar10,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                               0.0,0.0,0.0,(MethodInfo *)0x0);
          pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_02->fields).search;
          (__this_02->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar13;
          il2cpp_runtime_helper_022b4080();
          if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if (*(int *)&pGVar12->max_length == 0) goto label_0450ea23;
            ((Il2CppType *)pGVar12->m_Items)->data = __this_02;
            il2cpp_runtime_helper_022b4080((Il2CppType *)pGVar12->m_Items,__this_02);
            (__this_01->fields).deferredChildren = pGVar12;
            il2cpp_runtime_helper_022b4080(&(__this_01->fields).deferredChildren);
            pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
            pGVar13 = pGVar12;
            if (local_a0 != (MethodInfo *)0x0) {
              pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Add
                                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)local_a0,__this_01,(MethodInfo *)0x0);
              return (System_String_o *)pGVar14;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450ea23:
  il2cpp_runtime_helper_022b2ca0();
  pGVar14->klass = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *)pGVar13;
  il2cpp_runtime_helper_022b4080();
  pGVar14->monitor = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&pGVar14->monitor,extraout_RDX);
  *(undefined1 *)&(pGVar14->fields).type = uVar15;
  (pGVar14->fields).id = in_R8;
  il2cpp_runtime_helper_022b4080(&(pGVar14->fields).id,in_R8);
  (pGVar14->fields).text = (System_String_o *)in_R9;
  il2cpp_runtime_helper_022b4080(&(pGVar14->fields).text,in_R9);
  (pGVar14->fields).textKey = in_stack_fffffffffffffec0;
  il2cpp_runtime_helper_022b4080(&(pGVar14->fields).textKey,in_stack_fffffffffffffec0);
  (pGVar14->fields).placeholder = in_stack_fffffffffffffec8;
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_022b4080(&(pGVar14->fields).placeholder,in_stack_fffffffffffffec8);
  return pSVar8;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$ExistingColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExistingColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* existing, int32_t index, const MethodInfo* method);
// 0x450cff0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__ExistingColor
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *existing,int32_t index,
          MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)index;
  if (g_data_057aed6c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed6c = '\x01';
  }
  if ((((existing != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) && (-1 < index))
      && (__this = (existing->fields).Colors, __this != (System_Collections_Generic_List_string__o *)0x0)) &&
     (index < (__this->fields)._size)) {
    pSVar1 = (System_String_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_String_get_Item);
    pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar1,method_00);
    return pSVar1;
  }
  return "FFFFFF";
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$EditColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__EditColor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o* previous, int32_t prefix, int32_t suffix, const MethodInfo* method);
// 0x450dd60

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__EditColor
          (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *previous,int32_t prefix,
          int32_t suffix,MethodInfo *method)

{
  uint16_t uVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  undefined8 *puVar4;
  System_Text_StringBuilder_o *pSVar5;
  undefined4 extraout_var;
  uint uVar6;
  System_Text_StringBuilder_o *value;
  System_Text_StringBuilder_o *value_00;
  UnityEngine_Color_Fields UStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  System_Text_StringBuilder_o *pSStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGStack_28;
  ulong uStack_20;
  MethodInfo *pMVar7;
  
  uVar1 = (uint16_t)prefix;
  if (g_data_057aed6d == '\0') {
    uStack_20 = 0x450dd81;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    uStack_20 = 0x450dd8d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    uStack_20 = 0x450dd99;
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    g_data_057aed6d = '\x01';
  }
  if ((previous != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) &&
     (pSVar5 = (System_Text_StringBuilder_o *)(previous->fields).Colors,
     pSVar5 != (System_Text_StringBuilder_o *)0x0)) {
    if ((0 < prefix) && (prefix <= *(int *)&(pSVar5->fields).m_ChunkPrevious)) {
      uVar6 = prefix - 1;
label_0450ddfc:
      pMVar7 = (MethodInfo *)(ulong)uVar6;
      uStack_20 = 0x450de01;
      pSVar3 = (System_String_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,uVar6,MethodInfo_String_get_Item);
      pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb(pSVar3,pMVar7);
      return pSVar3;
    }
    if (0 < suffix) {
      pSVar3 = (previous->fields).Text;
      if (pSVar3 == (System_String_o *)0x0) {
        uStack_20 = 0x450de12;
        uStack_30 = il2cpp_runtime_helper_022b2c90();
        value = pSVar5;
        pGStack_28 = previous;
        uStack_20 = (ulong)(uint)prefix;
        if (g_data_057aed6e == '\0') {
          uStack_38 = 0x450de3d;
          il2cpp_runtime_helper_023445d0(&"&gt;");
          value = (System_Text_StringBuilder_o *)&"&lt;";
          uStack_38 = 0x450de49;
          il2cpp_runtime_helper_023445d0();
          g_data_057aed6e = '\x01';
        }
        if (uVar1 == 0x3c) {
          if (pSVar5 == (System_Text_StringBuilder_o *)0x0) {
label_0450de9c:
            uStack_38 = 0x450dea1;
            uStack_48 = il2cpp_runtime_helper_022b2c90();
            pSVar3 = (System_String_o *)0x0;
            pMVar7 = (MethodInfo *)0x0;
            uStack_50 = 0x450dec0;
            value_00 = value;
            pSStack_40 = pSVar5;
            uStack_38 = (ulong)(uint)suffix;
            bVar2 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              if (value == (System_Text_StringBuilder_o *)0x0) {
                uStack_50 = 0x450df1f;
                il2cpp_runtime_helper_022b2c90();
                uStack_50 = 0;
                if (g_data_057aed6a == '\0') {
                  il2cpp_runtime_helper_023445d0(&"#");
                  g_data_057aed6a = '\x01';
                }
                UStack_60.r = 0.0;
                UStack_60.g = 0.0;
                UStack_60.b = 0.0;
                UStack_60.a = 0.0;
                pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                                   ((System_String_o *)value_00,pMVar7);
                pSVar3 = System_String__Concat_3ae5ba0("#",pSVar3,(MethodInfo *)0x0);
                bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                                  (pSVar3,(UnityEngine_Color_o *)&UStack_60,(MethodInfo *)0x0);
                if ((char)bVar2 == '\0') {
                  return (System_String_o *)CONCAT44(extraout_var,bVar2);
                }
                return (System_String_o *)CONCAT44(extraout_var,bVar2);
              }
              pSVar3 = (System_String_o *)0x0;
              if (*(int *)&(value->fields).m_ChunkChars == 6) {
                do {
                  uStack_50 = 0x450def5;
                  uVar1 = System_String__get_Chars((System_String_o *)value,(int)pSVar3,(MethodInfo *)0x0);
                  if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
                    return (System_String_o *)0x0;
                  }
                  uVar6 = (int)pSVar3 + 1;
                  pSVar3 = (System_String_o *)(ulong)uVar6;
                } while ((int)uVar6 < *(int *)&(value->fields).m_ChunkChars);
                pSVar3 = (System_String_o *)CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
              }
            }
            return pSVar3;
          }
          puVar4 = &"&lt;";
        }
        else {
          if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto label_0450de9c;
          if (uVar1 != 0x3e) {
            pSVar5 = System_Text_StringBuilder__Append_3b048f0(pSVar5,uVar1,(MethodInfo *)0x0);
            return (System_String_o *)pSVar5;
          }
          puVar4 = &"&gt;";
        }
        pSVar5 = System_Text_StringBuilder__Append_3b03f90
                           (pSVar5,(System_String_o *)*puVar4,(MethodInfo *)0x0);
        return (System_String_o *)pSVar5;
      }
      uVar6 = (pSVar3->fields)._stringLength - suffix;
      if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(pSVar5->fields).m_ChunkPrevious)) goto label_0450ddfc;
    }
  }
  return "FFFFFF";
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$IsHex
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHex (uint16_t c, const MethodInfo* method);
// 0x450dfa0

bool_conflict Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__IsHex(uint16_t c,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  undefined6 in_register_0000003a;
  
  iVar1 = (int)CONCAT62(in_register_0000003a,c);
  iVar2 = iVar1 + -0x30;
  if ((9 < (ushort)iVar2) && (iVar2 = iVar1 + -0x61, 5 < (ushort)iVar2)) {
    return CONCAT31((int3)((uint)iVar2 >> 8),(ushort)(c - 0x41) < 6);
  }
  return (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec$$AppendEscaped
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__AppendEscaped (System_Text_StringBuilder_o* builder, uint16_t c, const MethodInfo* method);
// 0x450de20

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__AppendEscaped
               (System_Text_StringBuilder_o *builder,uint16_t c,MethodInfo *method)

{
  uint16_t uVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  System_String_o *pSVar4;
  int index;
  MethodInfo *method_00;
  System_Text_StringBuilder_o *value;
  System_Text_StringBuilder_o *value_00;
  UnityEngine_Color_Fields local_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  System_Text_StringBuilder_o *pSStack_28;
  
  value = builder;
  if (g_data_057aed6e == '\0') {
    il2cpp_runtime_helper_023445d0(&"&gt;");
    value = (System_Text_StringBuilder_o *)&"&lt;";
    il2cpp_runtime_helper_023445d0();
    g_data_057aed6e = '\x01';
  }
  if (c == 0x3c) {
    if (builder == (System_Text_StringBuilder_o *)0x0) {
label_0450de9c:
      uStack_30 = il2cpp_runtime_helper_022b2c90();
      method_00 = (MethodInfo *)0x0;
      uStack_38 = 0x450dec0;
      value_00 = value;
      pSStack_28 = builder;
      bVar2 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (value == (System_Text_StringBuilder_o *)0x0) {
          uStack_38 = 0x450df1f;
          il2cpp_runtime_helper_022b2c90();
          uStack_38 = 0;
          if (g_data_057aed6a == '\0') {
            il2cpp_runtime_helper_023445d0(&"#");
            g_data_057aed6a = '\x01';
          }
          local_48.r = 0.0;
          local_48.g = 0.0;
          local_48.b = 0.0;
          local_48.a = 0.0;
          pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__NormalizeRgb
                             ((System_String_o *)value_00,method_00);
          pSVar4 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
          bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                            (pSVar4,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            return;
          }
          return;
        }
        index = 0;
        if (*(int *)&(value->fields).m_ChunkChars == 6) {
          do {
            uStack_38 = 0x450def5;
            uVar1 = System_String__get_Chars((System_String_o *)value,index,(MethodInfo *)0x0);
            if ((9 < (ushort)(uVar1 - 0x30)) && (5 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
              return;
            }
            index = index + 1;
          } while (index < *(int *)&(value->fields).m_ChunkChars);
        }
      }
      return;
    }
    puVar3 = &"&lt;";
  }
  else {
    if (builder == (System_Text_StringBuilder_o *)0x0) goto label_0450de9c;
    if (c != 0x3e) {
      System_Text_StringBuilder__Append_3b048f0(builder,c,(MethodInfo *)0x0);
      return;
    }
    puVar3 = &"&gt;";
  }
  System_Text_StringBuilder__Append_3b03f90(builder,(System_String_o *)*puVar3,(MethodInfo *)0x0);
  return;
}


