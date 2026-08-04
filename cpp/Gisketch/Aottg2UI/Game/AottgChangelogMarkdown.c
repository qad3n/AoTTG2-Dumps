// Type: Gisketch.Aottg2UI.Game.AottgChangelogMarkdown
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogMarkdown.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$Parse
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o* Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Parse (System_String_o* markdown, const MethodInfo* method);
// 0x44e0450

System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *
Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Parse(System_String_o *markdown,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_object__o *__this;
  System_String_o *text;
  bool_conflict bVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar4;
  System_Collections_Generic_List_object__o *__this_01;
  System_String_array *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  System_String_array *items;
  System_String_c *pSVar8;
  long lVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  System_String_o **ppSVar10;
  int32_t iVar11;
  MethodInfo_362B8B0 *__this_02;
  MethodInfo_362B8B0 *__this_03;
  MethodInfo *in_R8;
  uint uVar12;
  System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *pSVar13;
  System_String_o *local_48;
  System_String_o **local_40;
  System_String_o *local_38;
  MethodInfo_362C220 *method_01;
  
  if (g_data_057aebd6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogMarkdownBlock);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogMarkdown);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBloc);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgChangelogMarkdownBlock);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"\r\n");
    g_data_057aebd6 = '\x01';
  }
  local_48 = (System_String_o *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgChangelogMarkdownBlock);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBloc);
  bVar2 = System_String__IsNullOrWhiteSpace(markdown,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (((markdown != (System_String_o *)0x0) &&
        (pSVar4 = System_String__Replace_3af9030(markdown,"\r\n","\n",(MethodInfo *)0x0),
        pSVar4 != (System_String_o *)0x0)) &&
       (__this_01 = (System_Collections_Generic_List_object__o *)
                    System_String__Replace(pSVar4,0xd,10,(MethodInfo *)0x0),
       __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
      __this_02 = (MethodInfo_362B8B0 *)0xa;
      pSVar5 = System_String__Split((System_String_o *)__this_01,10,0,(MethodInfo *)0x0);
      if (pSVar5 != (System_String_array *)0x0) {
        uVar3 = (uint)pSVar5->max_length;
        if ((int)uVar3 < 1) {
          return (System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *)__this_00;
        }
        local_40 = pSVar5->m_Items;
        uVar12 = 0;
        method_00 = extraout_RDX;
        do {
          while( true ) {
            if (uVar3 <= uVar12) goto label_044e0ae6;
            pSVar4 = pSVar5->m_Items[(int)uVar12];
            if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              method_00 = extraout_RDX_01;
            }
            bVar2 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__TryReadHeader(pSVar4,&local_48,method_00);
            text = local_48;
            if ((char)bVar2 == '\0') break;
            __this_02 = (MethodInfo_362B8B0 *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgChangelogMarkdownBlock);
            Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock___ctor
                      ((Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *)__this_02,0,text,
                       (System_String_array *)0x0,in_R8);
            lVar9 = MethodInfo_Void_Add;
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_044e0a28;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (__this_00->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) goto label_044e0a28;
label_044e0679:
            uVar3 = (__this_00->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (__this_00->fields)._size = uVar3 + 1;
              __this_01 = (System_Collections_Generic_List_object__o *)(pSVar6->m_Items + (int)uVar3);
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
              il2cpp_runtime_helper_022b4080();
              uVar12 = uVar12 + 1;
              uVar3 = (uint)pSVar5->max_length;
              method_00 = extraout_RDX_00;
              if ((int)uVar3 <= (int)uVar12) {
                return (System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *)__this_00;
              }
            }
            else {
              method_01 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
label_044e0855:
              __this_01 = __this_00;
              System_Collections_Generic_List_object___AddWithResize
                        (__this_00,(Il2CppObject *)__this_02,method_01);
              uVar12 = uVar12 + 1;
              uVar3 = (uint)pSVar5->max_length;
              method_00 = extraout_RDX_03;
              if ((int)uVar3 <= (int)uVar12) {
                return (System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *)__this_00;
              }
            }
          }
          if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aebd9 == '\0') {
            il2cpp_runtime_helper_023445d0(&"- ");
            g_data_057aebd9 = '\x01';
          }
          if (((pSVar4 != (System_String_o *)0x0) &&
              (bVar2 = System_String__StartsWith_3af5570
                                 (pSVar4,(System_String_o *)"- ",4,(MethodInfo *)0x0),
              (char)bVar2 != '\0')) && (2 < (pSVar4->fields)._stringLength)) {
            pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
            __this_02 = MethodInfo_List_1_System_String;
            __this_01 = pSVar7;
            System_Collections_Generic_List_object____ctor(pSVar7,MethodInfo_List_1_System_String);
            uVar3 = (uint)pSVar5->max_length;
            if ((int)uVar3 <= (int)uVar12) {
label_044e099a:
              if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
label_044e09a3:
                uVar12 = uVar12 - 1;
                local_38 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                items = (System_String_array *)
                        System_Collections_Generic_List_object___ToArray(pSVar7,MethodInfo_String_ToArray);
                __this_02 = (MethodInfo_362B8B0 *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgChangelogMarkdownBlock);
                Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock___ctor
                          ((Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *)__this_02,2,local_38,items,
                           in_R8);
                lVar9 = MethodInfo_Void_Add;
                if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                  piVar1 = &(__this_00->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar6 = (__this_00->fields)._items;
                  if (pSVar6 != (System_Object_array *)0x0) goto label_044e0679;
                }
              }
              break;
            }
            if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
              if (uVar12 < uVar3) {
                pSVar7 = (System_Collections_Generic_List_object__o *)pSVar5->m_Items[(int)uVar12];
                if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_02 = "- ";
                if (g_data_057aebd9 == '\0') {
                  il2cpp_runtime_helper_023445d0(&"- ");
                  g_data_057aebd9 = '\x01';
                  __this_02 = "- ";
                }
                "- " = __this_02;
                if (((pSVar7 == (System_Collections_Generic_List_object__o *)0x0) ||
                    (__this_01 = pSVar7,
                    bVar2 = System_String__StartsWith_3af5570
                                      ((System_String_o *)pSVar7,(System_String_o *)__this_02,4,
                                       (MethodInfo *)0x0), (char)bVar2 == '\0')) ||
                   (*(int *)&(pSVar7->fields)._items < 3)) break;
                if (uVar12 < (uint)pSVar5->max_length) {
                  __this_01 = (System_Collections_Generic_List_object__o *)pSVar5->m_Items[(int)uVar12];
                  if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
                  __this_02 = (MethodInfo_362B8B0 *)0x2;
                  System_String__Substring((System_String_o *)__this_01,2,(MethodInfo *)0x0);
                  il2cpp_runtime_helper_022b2c90();
                }
              }
            }
            else {
              ppSVar10 = local_40 + (int)uVar12;
              if (uVar12 < uVar3) {
                while( true ) {
                  __this = (System_Collections_Generic_List_object__o *)*ppSVar10;
                  if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  __this_02 = "- ";
                  if (g_data_057aebd9 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"- ");
                    g_data_057aebd9 = '\x01';
                    __this_02 = "- ";
                  }
                  "- " = __this_02;
                  if (((__this == (System_Collections_Generic_List_object__o *)0x0) ||
                      (__this_01 = __this,
                      bVar2 = System_String__StartsWith_3af5570
                                        ((System_String_o *)__this,(System_String_o *)__this_02,4,
                                         (MethodInfo *)0x0), (char)bVar2 == '\0')) ||
                     (*(int *)&(__this->fields)._items < 3)) goto label_044e099a;
                  if ((uint)pSVar5->max_length <= uVar12) goto label_044e0ae6;
                  if (*ppSVar10 == (System_String_o *)0x0) goto label_044e0a28;
                  __this_02 = (MethodInfo_362B8B0 *)System_String__Substring(*ppSVar10,2,(MethodInfo *)0x0);
                  lVar9 = MethodInfo_Void_Add;
                  piVar1 = &(pSVar7->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar6 = (pSVar7->fields)._items;
                  if (pSVar6 == (System_Object_array *)0x0) goto label_044e0a28;
                  uVar3 = (pSVar7->fields)._size;
                  if (uVar3 < (uint)pSVar6->max_length) {
                    (pSVar7->fields)._size = uVar3 + 1;
                    __this_01 = (System_Collections_Generic_List_object__o *)(pSVar6->m_Items + (int)uVar3);
                    pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
                    il2cpp_runtime_helper_022b4080();
                  }
                  else {
                    __this_01 = pSVar7;
                    System_Collections_Generic_List_object___AddWithResize
                              (pSVar7,(Il2CppObject *)__this_02,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar12 = uVar12 + 1;
                  uVar3 = (uint)pSVar5->max_length;
                  ppSVar10 = ppSVar10 + 1;
                  if ((int)uVar3 <= (int)uVar12) break;
                  if (uVar3 <= uVar12) goto label_044e0ae6;
                }
                goto label_044e09a3;
              }
            }
label_044e0ae6:
            il2cpp_runtime_helper_022b2ca0();
            if (g_data_057aebd8 == '\0') {
              il2cpp_runtime_helper_023445d0(&"## ");
              il2cpp_runtime_helper_023445d0(&"# ");
              g_data_057aebd8 = '\x01';
            }
            __this_02->methodPointer = (Il2CppMethodPointer)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            __this_03 = __this_02;
            il2cpp_runtime_helper_022b4080();
            if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
              bVar2 = System_String__StartsWith_3af5570
                                ((System_String_o *)__this_01,"# ",4,(MethodInfo *)0x0);
              iVar11 = 2;
              if ((char)bVar2 == '\0') {
                __this_00 = (System_Collections_Generic_List_object__o *)0x0;
                bVar2 = System_String__StartsWith_3af5570
                                  ((System_String_o *)__this_01,"## ",4,(MethodInfo *)0x0);
                iVar11 = 3;
                if ((char)bVar2 == '\0') goto label_044e0bdb;
              }
              pSVar8 = (System_String_c *)
                       System_String__Substring((System_String_o *)__this_01,iVar11,(MethodInfo *)0x0);
              __this_02->methodPointer = (Il2CppMethodPointer)pSVar8;
              il2cpp_runtime_helper_022b4080(__this_02);
              __this_03 = (MethodInfo_362B8B0 *)0x0;
              if ((System_String_c *)__this_02->methodPointer != (System_String_c *)0x0) {
                pSVar8 = (System_String_c *)
                         System_String__Trim((System_String_o *)__this_02->methodPointer,(MethodInfo *)0x0);
                __this_02->methodPointer = (Il2CppMethodPointer)pSVar8;
                __this_03 = __this_02;
                il2cpp_runtime_helper_022b4080(__this_02,pSVar8);
                if ((System_String_c *)__this_02->methodPointer != (System_String_c *)0x0) {
                  __this_00 = (System_Collections_Generic_List_object__o *)
                              CONCAT71((int7)((ulong)__this_00 >> 8),
                                       0 < *(int *)&(((System_String_c *)__this_02->methodPointer)->_1).name);
label_044e0bdb:
                  return (System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *)
                         ((ulong)__this_00 & 0xffffffff);
                }
              }
            }
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057aebd9 == '\0') {
              il2cpp_runtime_helper_023445d0(&"- ");
              g_data_057aebd9 = '\x01';
            }
            if (__this_03 == (MethodInfo_362B8B0 *)0x0) {
              pSVar13 = (System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *)0x0;
            }
            else {
              pSVar13 = (System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *)0x0;
              bVar2 = System_String__StartsWith_3af5570
                                ((System_String_o *)__this_03,(System_String_o *)"- ",4,
                                 (MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                pSVar13 = (System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *)
                          (ulong)(2 < *(int *)&__this_03->invoker_method);
              }
            }
            return pSVar13;
          }
          bVar2 = System_String__IsNullOrWhiteSpace(pSVar4,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            __this_02 = (MethodInfo_362B8B0 *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgChangelogMarkdownBlock);
            iVar11 = 1;
          }
          else {
            pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            __this_02 = (MethodInfo_362B8B0 *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgChangelogMarkdownBlock);
            iVar11 = 3;
          }
          Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock___ctor
                    ((Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *)__this_02,iVar11,pSVar4,
                     (System_String_array *)0x0,in_R8);
          lVar9 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) break;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this_00->fields)._items;
          if (pSVar6 == (System_Object_array *)0x0) break;
          uVar3 = (__this_00->fields)._size;
          if ((uint)pSVar6->max_length <= uVar3) {
            method_01 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
            goto label_044e0855;
          }
          (__this_00->fields)._size = uVar3 + 1;
          __this_01 = (System_Collections_Generic_List_object__o *)(pSVar6->m_Items + (int)uVar3);
          pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
          il2cpp_runtime_helper_022b4080();
          uVar12 = uVar12 + 1;
          uVar3 = (uint)pSVar5->max_length;
          method_00 = extraout_RDX_02;
          if ((int)uVar3 <= (int)uVar12) {
            return (System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *)__this_00;
          }
        } while( true );
      }
    }
label_044e0a28:
    il2cpp_runtime_helper_022b2c90();
  }
  return (System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$RenderInline
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline (System_String_o* text, const MethodInfo* method);
// 0x44e0c50

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(System_String_o *text,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int32_t capacity;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  System_Text_StringBuilder_o *__this;
  System_Text_RegularExpressions_MatchCollection_o *__this_00;
  VirtualInvokeData *pVVar8;
  System_Text_RegularExpressions_Capture_o *__this_01;
  System_String_o *pSVar9;
  System_Text_StringBuilder_o *pSVar10;
  long *plVar11;
  undefined8 *puVar12;
  int length;
  MethodInfo *pMVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int startIndex;
  System_Collections_IEnumerator_o *unaff_R15;
  undefined1 auVar17 [12];
  System_Text_StringBuilder_o *local_48;
  long local_40;
  System_String_o *local_38;
  
  if (g_data_057aebd7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogMarkdown);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Match);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"<b>");
    il2cpp_runtime_helper_023445d0(&"**");
    il2cpp_runtime_helper_023445d0(&"</b>");
    il2cpp_runtime_helper_023445d0(&"*");
    il2cpp_runtime_helper_023445d0(&"</i>");
    il2cpp_runtime_helper_023445d0(&"<i>");
    g_data_057aebd7 = '\x01';
  }
  bVar7 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (text != (System_String_o *)0x0) {
    capacity = (text->fields)._stringLength;
    __this = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor_3b026e0(__this,capacity,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (((System_Text_RegularExpressions_Regex_o *)**(undefined8 **)(TypeInfo_AottgChangelogMarkdown + 0xb8) !=
         (System_Text_RegularExpressions_Regex_o *)0x0) &&
       (__this_00 = System_Text_RegularExpressions_Regex__Matches_4906660
                              ((System_Text_RegularExpressions_Regex_o *)
                               **(undefined8 **)(TypeInfo_AottgChangelogMarkdown + 0xb8),text,(MethodInfo *)0x0), local_38 = text
       , __this_00 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
      local_40 = 0;
      unaff_R15 = System_Text_RegularExpressions_MatchCollection__GetEnumerator(__this_00,(MethodInfo *)0x0);
      local_48 = __this;
      if (unaff_R15 == (System_Collections_IEnumerator_o *)0x0) goto label_044e12cc;
      pMVar13 = (MethodInfo *)0x0;
label_044e0ddf:
      pSVar4 = unaff_R15->klass;
      uVar2._0_1_ = (pSVar4->_2).rank;
      uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar14) == TypeInfo_IEnumerator) {
            pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar14);
            goto label_044e0e33;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar14);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R15,TypeInfo_IEnumerator,0);
label_044e0e33:
      cVar6 = (*pVVar8->methodPtr)(unaff_R15,pVVar8->method);
      if (cVar6 == '\0') {
        iVar16 = 9;
        goto label_044e1162;
      }
      pSVar4 = unaff_R15->klass;
      uVar3._0_1_ = (pSVar4->_2).rank;
      uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar14) == TypeInfo_IEnumerator) {
            pVVar8 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar14) + 1);
            goto label_044e0eb8;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar14);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R15,TypeInfo_IEnumerator,1);
label_044e0eb8:
      __this_01 = (System_Text_RegularExpressions_Capture_o *)(*pVVar8->methodPtr)(unaff_R15,pVVar8->method);
      if (__this_01 != (System_Text_RegularExpressions_Capture_o *)0x0) {
        bVar1 = (TypeInfo_Match->_2).naturalAligment;
        if (((__this_01->klass->_2).naturalAligment < bVar1) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Match)) {
          il2cpp_runtime_helper_022b2fd0(__this_01);
          goto label_044e1295;
        }
        iVar16 = (__this_01->fields)._Index_k__BackingField;
        startIndex = (int)pMVar13;
        length = iVar16 - startIndex;
        if (length != 0 && startIndex <= iVar16) {
          pSVar9 = System_String__Substring_3af8da0(text,startIndex,length,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar9,pMVar13);
          if (__this != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_3b03f90(__this,pSVar9,(MethodInfo *)0x0);
            goto label_044e0f53;
          }
          goto label_044e12a4;
        }
label_044e0f53:
        pSVar9 = System_Text_RegularExpressions_Capture__get_Value(__this_01,(MethodInfo *)0x0);
        if (pSVar9 == (System_String_o *)0x0) goto label_044e129a;
        bVar7 = System_String__StartsWith_3af5570(pSVar9,"**",4,(MethodInfo *)0x0);
        if (((char)bVar7 != '\0') &&
           (bVar7 = System_String__EndsWith_3af4a10(pSVar9,"**",4,(MethodInfo *)0x0),
           (char)bVar7 != '\0')) {
          if (__this == (System_Text_StringBuilder_o *)0x0) goto label_044e12a9;
          pSVar10 = System_Text_StringBuilder__Append_3b03f90(__this,"<b>",(MethodInfo *)0x0);
          pMVar13 = (MethodInfo *)0x2;
          pSVar9 = System_String__Substring_3af8da0
                             (pSVar9,2,(pSVar9->fields)._stringLength + -4,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar9,pMVar13);
          if (pSVar10 == (System_Text_StringBuilder_o *)0x0) goto label_044e12ae;
          pSVar10 = System_Text_StringBuilder__Append_3b03f90(pSVar10,pSVar9,(MethodInfo *)0x0);
          if (pSVar10 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_3b03f90(pSVar10,"</b>",(MethodInfo *)0x0);
            goto label_044e0dd0;
          }
          goto label_044e12b3;
        }
        pMVar13 = "*";
        bVar7 = System_String__StartsWith_3af5570(pSVar9,(System_String_o *)"*",4,(MethodInfo *)0x0);
        if (((char)bVar7 == '\0') ||
           (pMVar13 = "*",
           bVar7 = System_String__EndsWith_3af4a10(pSVar9,(System_String_o *)"*",4,(MethodInfo *)0x0)
           , (char)bVar7 == '\0')) {
          if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar9,pMVar13);
          if (__this != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_3b03f90(__this,pSVar9,(MethodInfo *)0x0);
            goto label_044e0dd0;
          }
          goto label_044e129f;
        }
        if (__this == (System_Text_StringBuilder_o *)0x0) goto label_044e12bd;
        pSVar10 = System_Text_StringBuilder__Append_3b03f90(__this,"<i>",(MethodInfo *)0x0);
        pMVar13 = (MethodInfo *)0x1;
        pSVar9 = System_String__Substring_3af8da0
                           (pSVar9,1,(pSVar9->fields)._stringLength + -2,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar9,pMVar13);
        if (pSVar10 == (System_Text_StringBuilder_o *)0x0) goto label_044e12c2;
        pSVar10 = System_Text_StringBuilder__Append_3b03f90(pSVar10,pSVar9,(MethodInfo *)0x0);
        if (pSVar10 == (System_Text_StringBuilder_o *)0x0) goto label_044e12b8;
        System_Text_StringBuilder__Append_3b03f90(pSVar10,"</i>",(MethodInfo *)0x0);
label_044e0dd0:
        pMVar13 = (MethodInfo *)
                  (ulong)(uint)((__this_01->fields)._Length_k__BackingField +
                               (__this_01->fields)._Index_k__BackingField);
        goto label_044e0ddf;
      }
label_044e1295:
      il2cpp_runtime_helper_022b2c90();
label_044e129a:
      il2cpp_runtime_helper_022b2c90();
label_044e129f:
      il2cpp_runtime_helper_022b2c90();
label_044e12a4:
      il2cpp_runtime_helper_022b2c90();
label_044e12a9:
      il2cpp_runtime_helper_022b2c90();
label_044e12ae:
      il2cpp_runtime_helper_022b2c90();
label_044e12b3:
      il2cpp_runtime_helper_022b2c90();
label_044e12b8:
      il2cpp_runtime_helper_022b2c90();
label_044e12bd:
      il2cpp_runtime_helper_022b2c90();
label_044e12c2:
      il2cpp_runtime_helper_022b2c90();
    }
  }
label_044e12c7:
  do {
    il2cpp_runtime_helper_022b2c90();
label_044e12cc:
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar17 = il2cpp_runtime_helper_022fefe0();
      pMVar13 = (MethodInfo *)0x0;
      iVar16 = 0;
      if (auVar17._8_4_ != 1) {
        plVar11 = (long *)il2cpp_runtime_helper_023051f0(unaff_R15,TypeInfo_IDisposable);
        if (plVar11 == (long *)0x0) goto label_044e15e6;
        lVar14 = *plVar11;
        if ((ulong)*(ushort *)(lVar14 + 0x12e) == 0) goto label_044e15bf;
        lVar15 = 0;
        goto label_044e15b0;
      }
      plVar11 = (long *)__cxa_begin_catch(auVar17._0_8_);
      local_40 = *plVar11;
      __cxa_end_catch();
label_044e1162:
      plVar11 = (long *)il2cpp_runtime_helper_023051f0(unaff_R15,TypeInfo_IDisposable);
      pSVar9 = (System_String_o *)0x0;
      if (plVar11 != (long *)0x0) {
        lVar14 = *plVar11;
        if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
              puVar12 = (undefined8 *)
                        (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
              goto label_044e11dd;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
        }
        puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_044e11dd:
        pSVar9 = (System_String_o *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      }
    } while (local_40 != 0);
    if ((iVar16 != 9) && (iVar16 != 0)) {
      return pSVar9;
    }
    if ((int)pMVar13 < (local_38->fields)._stringLength) {
      pSVar9 = System_String__Substring(local_38,(int)pMVar13,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar9,pMVar13);
      if (local_48 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_3b03f90(local_48,pSVar9,(MethodInfo *)0x0);
        goto label_044e1269;
      }
      goto label_044e12c7;
    }
    if (local_48 != (System_Text_StringBuilder_o *)0x0) {
label_044e1269:
      pSVar9 = (System_String_o *)
               (*(local_48->klass->vtable)._3_ToString.methodPtr)
                         (local_48,(local_48->klass->vtable)._3_ToString.method);
      return pSVar9;
    }
  } while( true );
  while (lVar15 = lVar15 + 0x10, (ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15) {
label_044e15b0:
    if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
      puVar12 = (undefined8 *)(lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
      goto label_044e15dd;
    }
  }
label_044e15bf:
  puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_044e15dd:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
label_044e15e6:
  _Unwind_Resume(auVar17._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$TryReadHeader
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__TryReadHeader (System_String_o* line, System_String_o** header, const MethodInfo* method);
// 0x44e0af0

bool_conflict
Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__TryReadHeader
          (System_String_o *line,System_String_o **header,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  int32_t startIndex;
  System_String_o *__this;
  uint uVar3;
  undefined8 unaff_R15;
  
  if (g_data_057aebd8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"## ");
    il2cpp_runtime_helper_023445d0(&"# ");
    g_data_057aebd8 = '\x01';
    method = extraout_RDX;
  }
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  *header = pSVar2;
  __this = (System_String_o *)header;
  il2cpp_runtime_helper_022b4080(header,pSVar2,method);
  if (line != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith_3af5570(line,"# ",4,(MethodInfo *)0x0);
    startIndex = 2;
    if ((char)bVar1 == '\0') {
      unaff_R15 = 0;
      bVar1 = System_String__StartsWith_3af5570(line,"## ",4,(MethodInfo *)0x0);
      startIndex = 3;
      if ((char)bVar1 == '\0') {
        return 0;
      }
    }
    pSVar2 = System_String__Substring(line,startIndex,(MethodInfo *)0x0);
    *header = pSVar2;
    il2cpp_runtime_helper_022b4080(header);
    __this = (System_String_o *)0x0;
    if (*header != (System_String_o *)0x0) {
      pSVar2 = System_String__Trim(*header,(MethodInfo *)0x0);
      *header = pSVar2;
      __this = (System_String_o *)header;
      il2cpp_runtime_helper_022b4080(header,pSVar2);
      if (*header != (System_String_o *)0x0) {
        return (bool_conflict)CONCAT71((int7)((ulong)unaff_R15 >> 8),0 < ((*header)->fields)._stringLength);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebd9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"- ");
    g_data_057aebd9 = '\x01';
  }
  if (__this == (System_String_o *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    bVar1 = System_String__StartsWith_3af5570(__this,"- ",4,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      uVar3 = (uint)(2 < (__this->fields)._stringLength);
    }
  }
  return uVar3;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$IsBullet
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__IsBullet (System_String_o* line, const MethodInfo* method);
// 0x44e0bf0

bool_conflict
Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__IsBullet(System_String_o *line,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  
  if (g_data_057aebd9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"- ");
    g_data_057aebd9 = '\x01';
  }
  if (line == (System_String_o *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    bVar1 = System_String__StartsWith_3af5570(line,"- ",4,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      uVar2 = (uint)(2 < (line->fields)._stringLength);
    }
  }
  return uVar2;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$Escape
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape (System_String_o* value, const MethodInfo* method);
// 0x44e1610

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_Text_RegularExpressions_Regex_o *__this;
  
  if (g_data_057aebda == '\0') {
    il2cpp_runtime_helper_023445d0(&"&amp;");
    il2cpp_runtime_helper_023445d0(&"<");
    il2cpp_runtime_helper_023445d0(&"&gt;");
    il2cpp_runtime_helper_023445d0(&"&");
    il2cpp_runtime_helper_023445d0(&"&lt;");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057aebda = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (value != (System_String_o *)0x0) {
    pSVar2 = System_String__Replace_3af9030(value,"&","&amp;",(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar2 = System_String__Replace_3af9030(pSVar2,"<","&lt;",(MethodInfo *)0x0);
      if (pSVar2 != (System_String_o *)0x0) {
        pSVar2 = System_String__Replace_3af9030(pSVar2,">","&gt;",(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebdb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogMarkdown);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    il2cpp_runtime_helper_023445d0(&"(\\*\\*[^*]+\\*\\*|\\*[^*]+\\*)");
    g_data_057aebdb = '\x01';
  }
  __this = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor_4907710(__this,"(\\*\\*[^*]+\\*\\*|\\*[^*]+\\*)",8,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_AottgChangelogMarkdown + 0xb8) = __this;
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgChangelogMarkdown + 0xb8),__this);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogMarkdown___cctor (const MethodInfo* method);
// 0x44e1710

void Gisketch_Aottg2UI_Game_AottgChangelogMarkdown___cctor(MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  
  if (g_data_057aebdb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogMarkdown);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    il2cpp_runtime_helper_023445d0(&"(\\*\\*[^*]+\\*\\*|\\*[^*]+\\*)");
    g_data_057aebdb = '\x01';
  }
  __this = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor_4907710(__this,"(\\*\\*[^*]+\\*\\*|\\*[^*]+\\*)",8,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_AottgChangelogMarkdown + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgChangelogMarkdown + 0xb8),__this);
  return;
}


