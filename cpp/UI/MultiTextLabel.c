// Type: UI.MultiTextLabel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiTextLabel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MultiTextLabel.cs
// --------------------------------

// UI.MultiTextLabel$$Setup
// il2cpp: void UI_MultiTextLabel__Setup (UI_MultiTextLabel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t fontStyle, int32_t anchor, float fontSize, int32_t numberOfLabels, bool richText, const MethodInfo* method);
// 0x43d74e0

void UI_MultiTextLabel__Setup
               (UI_MultiTextLabel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               int32_t fontStyle,int32_t anchor,float fontSize,int32_t numberOfLabels,bool_conflict richText,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_MonoBehaviour_c *pUVar2;
  long *plVar3;
  code *vtableDispatch;
  bool_conflict bVar4;
  UnityEngine_UI_Text_array *pUVar5;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_Text_o *pUVar7;
  long lVar8;
  UnityEngine_MonoBehaviour_o *pUVar9;
  UnityEngine_MonoBehaviour_o *__this_00;
  uint extraout_EDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  uint uVar10;
  UnityEngine_MonoBehaviour_o *__this_01;
  uint uVar11;
  
  if (g_data_057ae45b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    fontSize = (float)il2cpp_runtime_helper_023445d0(&TypeInfo_Text);
    g_data_057ae45b = '\x01';
  }
  pUVar5 = (UnityEngine_UI_Text_array *)il2cpp_runtime_helper_022b2a40(fontSize,TypeInfo_Text,numberOfLabels);
  (__this->fields).texts = pUVar5;
  il2cpp_runtime_helper_022b4080();
  if (0 < numberOfLabels) {
    uVar11 = 0;
    do {
      pUVar5 = (__this->fields).texts;
      parent_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar6 = UI_ElementFactory__CreateWhiteLabel
                         (parent_00,style,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),fontStyle,
                          anchor,(MethodInfo *)0x0);
      if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar7 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_Text_GetComponent_Text),
         pUVar5 == (UnityEngine_UI_Text_array *)0x0)) goto label_043d7656;
      if ((pUVar7 != (UnityEngine_UI_Text_o *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pUVar7), lVar8 == 0)) {
label_043d7660:
        pUVar9 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_0231b270();
        uVar11 = 0;
        il2cpp_runtime_helper_022b2b10();
        __this_01 = pUVar9;
        pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
          if ((byte)((byte)bVar4 ^ (byte)uVar11) != 1) {
            return;
          }
          pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
          __this_01 = pUVar9;
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar6,uVar11 & 0xff,(MethodInfo *)0x0);
            return;
          }
        }
        il2cpp_runtime_helper_022b2c90();
        uVar11 = 0;
        pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0)
        ;
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if ((int)uVar11 < 0) {
          return;
        }
        pUVar2 = __this_01[1].klass;
        pUVar9 = __this_01;
        uVar10 = uVar11;
        if (pUVar2 == (UnityEngine_MonoBehaviour_c *)0x0) {
label_043d7784:
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          uVar1 = *(uint *)&(pUVar2->_1).namespaze;
          if ((int)uVar1 <= (int)uVar11) {
            return;
          }
          if (uVar11 < uVar1) {
            pUVar9 = (&(pUVar2->_1).byval_arg.data)[(int)uVar11];
            if (pUVar9 != (UnityEngine_MonoBehaviour_o *)0x0) {
              uVar10 = 0;
              __this_00 = (UnityEngine_MonoBehaviour_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
              if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
                uVar10 = 0;
                bVar4 = UnityEngine_GameObject__get_activeSelf
                                  ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
                if ((byte)((byte)bVar4 ^ (byte)extraout_EDX) != 1) {
                  return;
                }
                pUVar2 = __this_01[1].klass;
                pUVar9 = __this_00;
                if (pUVar2 != (UnityEngine_MonoBehaviour_c *)0x0) {
                  if (*(uint *)&(pUVar2->_1).namespaze <= uVar11) goto label_043d7789;
                  pUVar9 = (&(pUVar2->_1).byval_arg.data)[(int)uVar11];
                  if (pUVar9 != (UnityEngine_MonoBehaviour_o *)0x0) {
                    uVar10 = 0;
                    pUVar6 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(pUVar6,extraout_EDX & 0xff,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
            goto label_043d7784;
          }
        }
label_043d7789:
        il2cpp_runtime_helper_022b2ca0();
        if ((int)uVar10 < 0) {
          return;
        }
        pUVar2 = pUVar9[1].klass;
        if (pUVar2 == (UnityEngine_MonoBehaviour_c *)0x0) {
label_043d77cd:
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          uVar11 = *(uint *)&(pUVar2->_1).namespaze;
          if ((int)uVar11 <= (int)uVar10) {
            return;
          }
          if (uVar10 < uVar11) {
            pUVar9 = (&(pUVar2->_1).byval_arg.data)[(int)uVar10];
            if (pUVar9 != (UnityEngine_MonoBehaviour_o *)0x0) {
              uVar10 = 0;
              pUVar6 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
                return;
              }
            }
            goto label_043d77cd;
          }
        }
        il2cpp_runtime_helper_022b2ca0();
        if ((int)uVar10 < 0) {
          return;
        }
        pUVar2 = pUVar9[1].klass;
        if (pUVar2 == (UnityEngine_MonoBehaviour_c *)0x0) {
label_043d781e:
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          uVar11 = *(uint *)&(pUVar2->_1).namespaze;
          if ((int)uVar11 <= (int)uVar10) {
            return;
          }
          if (uVar10 < uVar11) {
            plVar3 = (&(pUVar2->_1).byval_arg.data)[(int)uVar10];
            pUVar9 = (UnityEngine_MonoBehaviour_o *)0x0;
            if (plVar3 != (long *)0x0) {
              vtableDispatch = *(code **)(*plVar3 + 0x5e8);
              (*vtableDispatch)
                        (plVar3,extraout_RDX,*(undefined8 *)(*plVar3 + 0x5f0),vtableDispatch);
              return;
            }
            goto label_043d781e;
          }
        }
        il2cpp_runtime_helper_022b2ca0();
        if ((int)uVar10 < 0) {
          return;
        }
        pUVar2 = pUVar9[1].klass;
        if (pUVar2 == (UnityEngine_MonoBehaviour_c *)0x0) {
label_043d7868:
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          uVar11 = *(uint *)&(pUVar2->_1).namespaze;
          if ((int)uVar11 <= (int)uVar10) {
            return;
          }
          if (uVar10 < uVar11) {
            plVar3 = (&(pUVar2->_1).byval_arg.data)[(int)uVar10];
            pUVar9 = (UnityEngine_MonoBehaviour_o *)0x0;
            if (plVar3 != (long *)0x0) {
              vtableDispatch = *(code **)(*plVar3 + 0x2a8);
              (*vtableDispatch)
                        (plVar3,*(undefined8 *)(*plVar3 + 0x2b0),extraout_RDX_00,vtableDispatch);
              return;
            }
            goto label_043d7868;
          }
        }
        il2cpp_runtime_helper_022b2ca0();
        if ((int)uVar10 < 0) {
          return;
        }
        pUVar2 = pUVar9[1].klass;
        if (pUVar2 != (UnityEngine_MonoBehaviour_c *)0x0) {
          uVar11 = *(uint *)&(pUVar2->_1).namespaze;
          if ((int)uVar11 <= (int)uVar10) {
            return;
          }
          if (uVar11 <= uVar10) goto label_043d78d5;
          plVar3 = (&(pUVar2->_1).byval_arg.data)[(int)uVar10];
          pUVar9 = (UnityEngine_MonoBehaviour_o *)0x0;
          if (plVar3 != (long *)0x0) {
            vtableDispatch = *(code **)(*plVar3 + 0x5d8);
            (*vtableDispatch)
                      (plVar3,*(undefined8 *)(*plVar3 + 0x5e0),extraout_RDX_01,vtableDispatch);
            return;
          }
        }
        il2cpp_runtime_helper_022b2c90();
label_043d78d5:
        il2cpp_runtime_helper_022b2ca0();
        UnityEngine_MonoBehaviour___ctor(pUVar9,(MethodInfo *)0x0);
        return;
      }
      if ((uint)pUVar5->max_length <= uVar11) {
label_043d765b:
        il2cpp_runtime_helper_022b2ca0();
        goto label_043d7660;
      }
      pUVar5->m_Items[(int)uVar11] = pUVar7;
      il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar11);
      pUVar5 = (__this->fields).texts;
      if (pUVar5 == (UnityEngine_UI_Text_array *)0x0) {
label_043d7656:
        il2cpp_runtime_helper_022b2c90();
        goto label_043d765b;
      }
      if ((uint)pUVar5->max_length <= uVar11) goto label_043d765b;
      if (pUVar5->m_Items[(int)uVar11] == (UnityEngine_UI_Text_o *)0x0) goto label_043d7656;
      UnityEngine_UI_Text__set_supportRichText(pUVar5->m_Items[(int)uVar11],richText & 0xff,(MethodInfo *)0x0)
      ;
      uVar11 = uVar11 + 1;
    } while (numberOfLabels != uVar11);
  }
  return;
}


// UI.MultiTextLabel$$SetEnabled
// il2cpp: void UI_MultiTextLabel__SetEnabled (UI_MultiTextLabel_o* __this, bool enabled, const MethodInfo* method);
// 0x43d7670

void UI_MultiTextLabel__SetEnabled(UI_MultiTextLabel_o *__this,bool_conflict enabled,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  UnityEngine_UI_Text_array *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *__this_00;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar6;
  uint uVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UnityEngine_UI_Text_o *__this_01;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined8 uVar11;
  undefined8 uVar12;
  
  pUVar8 = (UnityEngine_UI_Text_o *)__this;
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
    if ((byte)((byte)bVar3 ^ (byte)enabled) != 1) {
      return;
    }
    pUVar8 = (UnityEngine_UI_Text_o *)__this;
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,enabled & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar6 = 0;
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
    return;
  }
  auVar10 = il2cpp_runtime_helper_022b2c90();
  uVar12 = auVar10._0_8_;
  if ((int)uVar6 < 0) {
    return;
  }
  pUVar1 = (pUVar8->fields).m_Material;
  __this_01 = pUVar8;
  uVar7 = uVar6;
  if (pUVar1 == (UnityEngine_Material_o *)0x0) {
label_043d7784:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)*(uint *)&pUVar1[1].klass <= (int)uVar6) {
      return;
    }
    if (uVar6 < *(uint *)&pUVar1[1].klass) {
      __this_01 = (&pUVar1[1].monitor)[(int)uVar6];
      if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
        uVar7 = 0;
        __this_00 = (UnityEngine_UI_Text_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
          uVar7 = 0;
          bVar3 = UnityEngine_GameObject__get_activeSelf
                            ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
          if ((byte)((byte)bVar3 ^ auVar10[8]) != 1) {
            return;
          }
          pUVar1 = (pUVar8->fields).m_Material;
          __this_01 = __this_00;
          if (pUVar1 != (UnityEngine_Material_o *)0x0) {
            if (*(uint *)&pUVar1[1].klass <= uVar6) goto label_043d7789;
            __this_01 = (&pUVar1[1].monitor)[(int)uVar6];
            if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
              uVar7 = 0;
              pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar4,auVar10._8_4_ & 0xff,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto label_043d7784;
    }
  }
label_043d7789:
  uVar5 = il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar7 < 0) {
    return;
  }
  pUVar2 = (UnityEngine_UI_Text_array *)(__this_01->fields).m_Material;
  if (pUVar2 == (UnityEngine_UI_Text_array *)0x0) {
label_043d77cd:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar6 = (uint)pUVar2->max_length;
    if ((int)uVar6 <= (int)uVar7) {
      return;
    }
    if (uVar7 < uVar6) {
      __this_01 = pUVar2->m_Items[(int)uVar7];
      if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
        uVar7 = 0;
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0)
        ;
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043d77cd;
    }
  }
  auVar9 = il2cpp_runtime_helper_022b2ca0();
  uVar11 = auVar9._0_8_;
  if ((int)uVar7 < 0) {
    return;
  }
  pUVar2 = (UnityEngine_UI_Text_array *)(__this_01->fields).m_Material;
  if (pUVar2 == (UnityEngine_UI_Text_array *)0x0) {
label_043d781e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar6 = (uint)pUVar2->max_length;
    if ((int)uVar6 <= (int)uVar7) {
      return;
    }
    if (uVar7 < uVar6) {
      pUVar8 = pUVar2->m_Items[(int)uVar7];
      __this_01 = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
        vtableDispatch = (pUVar8->klass->vtable)._75_set_text.methodPtr;
        (*vtableDispatch)
                  (pUVar8,auVar9._8_8_,(pUVar8->klass->vtable)._75_set_text.method,vtableDispatch,in_R8
                   ,in_R9,uVar12,__this);
        return;
      }
      goto label_043d781e;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar7 < 0) {
    return;
  }
  pUVar2 = (UnityEngine_UI_Text_array *)(__this_01->fields).m_Material;
  if (pUVar2 == (UnityEngine_UI_Text_array *)0x0) {
label_043d7868:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar6 = (uint)pUVar2->max_length;
    if ((int)uVar6 <= (int)uVar7) {
      return;
    }
    if (uVar7 < uVar6) {
      pUVar8 = pUVar2->m_Items[(int)uVar7];
      __this_01 = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
        vtableDispatch = (pUVar8->klass->vtable)._23_set_color.methodPtr;
        (*vtableDispatch)
                  (pUVar8,(pUVar8->klass->vtable)._23_set_color.method,extraout_RDX,vtableDispatch,
                   in_R8,in_R9,uVar5);
        return;
      }
      goto label_043d7868;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar7 < 0) {
    return;
  }
  pUVar2 = (UnityEngine_UI_Text_array *)(__this_01->fields).m_Material;
  if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
    uVar6 = (uint)pUVar2->max_length;
    if ((int)uVar6 <= (int)uVar7) {
      return;
    }
    if (uVar6 <= uVar7) goto label_043d78d5;
    pUVar8 = pUVar2->m_Items[(int)uVar7];
    __this_01 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
      vtableDispatch = (pUVar8->klass->vtable)._74_get_text.methodPtr;
      (*vtableDispatch)
                (pUVar8,(pUVar8->klass->vtable)._74_get_text.method,extraout_RDX_00,vtableDispatch,
                 in_R8,in_R9,uVar11);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043d78d5:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.MultiTextLabel$$GetEnabled
// il2cpp: bool UI_MultiTextLabel__GetEnabled (UI_MultiTextLabel_o* __this, const MethodInfo* method);
// 0x43d76d0

bool_conflict UI_MultiTextLabel__GetEnabled(UI_MultiTextLabel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_array *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  byte bVar2;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  undefined8 uVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  uint uVar8;
  uint uVar9;
  UnityEngine_UI_Text_o *__this_00;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined1 auVar10 [12];
  UnityEngine_Material_o *pUVar11;
  UnityEngine_Material_o *pUVar6;
  
  uVar8 = 0;
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
    return bVar3;
  }
  auVar10 = il2cpp_runtime_helper_022b2c90();
  pUVar11 = auVar10._0_8_;
  pUVar6 = pUVar11;
  if ((int)uVar8 < 0) {
label_043d7779:
    return (bool_conflict)pUVar6;
  }
  pUVar6 = (((UnityEngine_UI_Text_o *)__this)->fields).m_Material;
  __this_00 = (UnityEngine_UI_Text_o *)__this;
  uVar9 = uVar8;
  if (pUVar6 == (UnityEngine_Material_o *)0x0) {
label_043d7784:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)*(uint *)&pUVar6[1].klass <= (int)uVar8) goto label_043d7779;
    if (uVar8 < *(uint *)&pUVar6[1].klass) {
      __this_00 = (&pUVar6[1].monitor)[(int)uVar8];
      if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
        uVar9 = 0;
        pUVar5 = (UnityEngine_UI_Text_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
        ;
        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
          uVar9 = 0;
          bVar3 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0)
          ;
          bVar2 = (byte)bVar3 ^ auVar10[8];
          pUVar6 = (UnityEngine_Material_o *)(ulong)CONCAT31((int3)((uint)bVar3 >> 8),bVar2);
          if (bVar2 != 1) goto label_043d7779;
          pUVar6 = (((UnityEngine_UI_Text_o *)__this)->fields).m_Material;
          __this_00 = pUVar5;
          if (pUVar6 != (UnityEngine_Material_o *)0x0) {
            if (*(uint *)&pUVar6[1].klass <= uVar8) goto label_043d7789;
            __this_00 = (&pUVar6[1].monitor)[(int)uVar8];
            if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
              uVar9 = 0;
              pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar4,auVar10._8_4_ & 0xff,(MethodInfo *)0x0);
                return extraout_EAX;
              }
            }
          }
        }
      }
      goto label_043d7784;
    }
  }
label_043d7789:
  uVar7 = il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar9 < 0) {
    return 0;
  }
  pUVar1 = (UnityEngine_UI_Text_array *)(__this_00->fields).m_Material;
  if (pUVar1 == (UnityEngine_UI_Text_array *)0x0) {
label_043d77cd:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar8 = (uint)pUVar1->max_length;
    if ((int)uVar8 <= (int)uVar9) {
      return 0;
    }
    if (uVar9 < uVar8) {
      __this_00 = pUVar1->m_Items[(int)uVar9];
      if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
        uVar9 = 0;
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
        ;
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
          return bVar3;
        }
      }
      goto label_043d77cd;
    }
  }
  bVar3 = il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar9 < 0) {
    return bVar3;
  }
  pUVar1 = (UnityEngine_UI_Text_array *)(__this_00->fields).m_Material;
  if (pUVar1 == (UnityEngine_UI_Text_array *)0x0) {
label_043d781e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar8 = (uint)pUVar1->max_length;
    if ((int)uVar8 <= (int)uVar9) {
      return bVar3;
    }
    if (uVar9 < uVar8) {
      pUVar5 = pUVar1->m_Items[(int)uVar9];
      __this_00 = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
        vtableDispatch = (pUVar5->klass->vtable)._75_set_text.methodPtr;
        bVar3 = (*vtableDispatch)
                          (pUVar5,extraout_RDX,(pUVar5->klass->vtable)._75_set_text.method,
                           vtableDispatch,in_R8,in_R9,pUVar11);
        return bVar3;
      }
      goto label_043d781e;
    }
  }
  bVar3 = il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar9 < 0) {
    return bVar3;
  }
  pUVar1 = (UnityEngine_UI_Text_array *)(__this_00->fields).m_Material;
  if (pUVar1 == (UnityEngine_UI_Text_array *)0x0) {
label_043d7868:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar8 = (uint)pUVar1->max_length;
    if ((int)uVar8 <= (int)uVar9) {
      return bVar3;
    }
    if (uVar9 < uVar8) {
      pUVar5 = pUVar1->m_Items[(int)uVar9];
      __this_00 = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
        vtableDispatch = (pUVar5->klass->vtable)._23_set_color.methodPtr;
        bVar3 = (*vtableDispatch)
                          (pUVar5,(pUVar5->klass->vtable)._23_set_color.method,extraout_RDX_00,
                           vtableDispatch,in_R8,in_R9,uVar7);
        return bVar3;
      }
      goto label_043d7868;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar9 < 0) {
label_043d78b6:
    return (bool_conflict)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pUVar1 = (UnityEngine_UI_Text_array *)(__this_00->fields).m_Material;
  if (pUVar1 != (UnityEngine_UI_Text_array *)0x0) {
    uVar8 = (uint)pUVar1->max_length;
    if ((int)uVar8 <= (int)uVar9) goto label_043d78b6;
    if (uVar8 <= uVar9) goto label_043d78d5;
    pUVar5 = pUVar1->m_Items[(int)uVar9];
    __this_00 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
      vtableDispatch = (pUVar5->klass->vtable)._74_get_text.methodPtr;
      bVar3 = (*vtableDispatch)
                        (pUVar5,(pUVar5->klass->vtable)._74_get_text.method,extraout_RDX_01,
                         vtableDispatch);
      return bVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043d78d5:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return extraout_EAX_00;
}


// UI.MultiTextLabel$$SetElementEnabled
// il2cpp: void UI_MultiTextLabel__SetElementEnabled (UI_MultiTextLabel_o* __this, int32_t index, bool enabled, const MethodInfo* method);
// 0x43d76f0

void UI_MultiTextLabel__SetElementEnabled
               (UI_MultiTextLabel_o *__this,int32_t index,bool_conflict enabled,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar7;
  UnityEngine_UI_Text_o *__this_00;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  if (index < 0) {
    return;
  }
  pUVar2 = (__this->fields).texts;
  __this_00 = (UnityEngine_UI_Text_o *)__this;
  uVar7 = index;
  if (pUVar2 == (UnityEngine_UI_Text_array *)0x0) {
label_043d7784:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) {
      return;
    }
    if ((uint)index < uVar1) {
      __this_00 = pUVar2->m_Items[index];
      if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
        uVar7 = 0;
        pUVar4 = (UnityEngine_UI_Text_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
        ;
        if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
          uVar7 = 0;
          bVar3 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pUVar4,(MethodInfo *)0x0)
          ;
          if ((byte)((byte)bVar3 ^ (byte)enabled) != 1) {
            return;
          }
          pUVar2 = (__this->fields).texts;
          __this_00 = pUVar4;
          if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
            if ((uint)pUVar2->max_length <= (uint)index) goto label_043d7789;
            __this_00 = pUVar2->m_Items[index];
            if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
              uVar7 = 0;
              pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar5,enabled & 0xff,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto label_043d7784;
    }
  }
label_043d7789:
  uVar6 = il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar7 < 0) {
    return;
  }
  pUVar2 = (UnityEngine_UI_Text_array *)(__this_00->fields).m_Material;
  if (pUVar2 == (UnityEngine_UI_Text_array *)0x0) {
label_043d77cd:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= (int)uVar7) {
      return;
    }
    if (uVar7 < uVar1) {
      __this_00 = pUVar2->m_Items[(int)uVar7];
      if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
        uVar7 = 0;
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
        ;
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043d77cd;
    }
  }
  auVar8 = il2cpp_runtime_helper_022b2ca0();
  uVar9 = auVar8._0_8_;
  if ((int)uVar7 < 0) {
    return;
  }
  pUVar2 = (UnityEngine_UI_Text_array *)(__this_00->fields).m_Material;
  if (pUVar2 == (UnityEngine_UI_Text_array *)0x0) {
label_043d781e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= (int)uVar7) {
      return;
    }
    if (uVar7 < uVar1) {
      pUVar4 = pUVar2->m_Items[(int)uVar7];
      __this_00 = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        vtableDispatch = (pUVar4->klass->vtable)._75_set_text.methodPtr;
        (*vtableDispatch)
                  (pUVar4,auVar8._8_8_,(pUVar4->klass->vtable)._75_set_text.method,vtableDispatch);
        return;
      }
      goto label_043d781e;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar7 < 0) {
    return;
  }
  pUVar2 = (UnityEngine_UI_Text_array *)(__this_00->fields).m_Material;
  if (pUVar2 == (UnityEngine_UI_Text_array *)0x0) {
label_043d7868:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= (int)uVar7) {
      return;
    }
    if (uVar7 < uVar1) {
      pUVar4 = pUVar2->m_Items[(int)uVar7];
      __this_00 = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        vtableDispatch = (pUVar4->klass->vtable)._23_set_color.methodPtr;
        (*vtableDispatch)
                  (pUVar4,(pUVar4->klass->vtable)._23_set_color.method,extraout_RDX,vtableDispatch,
                   in_R8,in_R9,uVar6);
        return;
      }
      goto label_043d7868;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar7 < 0) {
    return;
  }
  pUVar2 = (UnityEngine_UI_Text_array *)(__this_00->fields).m_Material;
  if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= (int)uVar7) {
      return;
    }
    if (uVar1 <= uVar7) goto label_043d78d5;
    pUVar4 = pUVar2->m_Items[(int)uVar7];
    __this_00 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      vtableDispatch = (pUVar4->klass->vtable)._74_get_text.methodPtr;
      (*vtableDispatch)
                (pUVar4,(pUVar4->klass->vtable)._74_get_text.method,extraout_RDX_00,vtableDispatch,
                 in_R8,in_R9,uVar9);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043d78d5:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.MultiTextLabel$$GetElementEnabled
// il2cpp: bool UI_MultiTextLabel__GetElementEnabled (UI_MultiTextLabel_o* __this, int32_t index, const MethodInfo* method);
// 0x43d7790

bool_conflict
UI_MultiTextLabel__GetElementEnabled(UI_MultiTextLabel_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  UnityEngine_GameObject_o *__this_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  
  if (index < 0) {
    return 0;
  }
  pUVar2 = (__this->fields).texts;
  if (pUVar2 == (UnityEngine_UI_Text_array *)0x0) {
label_043d77cd:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) {
      return 0;
    }
    if ((uint)index < uVar1) {
      __this = (UI_MultiTextLabel_o *)pUVar2->m_Items[index];
      if ((UnityEngine_UI_Text_o *)__this != (UnityEngine_UI_Text_o *)0x0) {
        index = 0;
        __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
        ;
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          bVar4 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
          return bVar4;
        }
      }
      goto label_043d77cd;
    }
  }
  bVar4 = il2cpp_runtime_helper_022b2ca0();
  if (index < 0) {
    return bVar4;
  }
  pUVar2 = (UnityEngine_UI_Text_array *)(((UnityEngine_UI_Text_o *)__this)->fields).m_Material;
  if (pUVar2 == (UnityEngine_UI_Text_array *)0x0) {
label_043d781e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) {
      return bVar4;
    }
    if ((uint)index < uVar1) {
      pUVar3 = pUVar2->m_Items[index];
      __this = (UI_MultiTextLabel_o *)0x0;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        vtableDispatch = (pUVar3->klass->vtable)._75_set_text.methodPtr;
        bVar4 = (*vtableDispatch)
                          (pUVar3,extraout_RDX,(pUVar3->klass->vtable)._75_set_text.method,
                           vtableDispatch);
        return bVar4;
      }
      goto label_043d781e;
    }
  }
  bVar4 = il2cpp_runtime_helper_022b2ca0();
  if (index < 0) {
    return bVar4;
  }
  pUVar2 = (UnityEngine_UI_Text_array *)(((UnityEngine_UI_Text_o *)__this)->fields).m_Material;
  if (pUVar2 == (UnityEngine_UI_Text_array *)0x0) {
label_043d7868:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) {
      return bVar4;
    }
    if ((uint)index < uVar1) {
      pUVar3 = pUVar2->m_Items[index];
      __this = (UI_MultiTextLabel_o *)0x0;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        vtableDispatch = (pUVar3->klass->vtable)._23_set_color.methodPtr;
        bVar4 = (*vtableDispatch)
                          (pUVar3,(pUVar3->klass->vtable)._23_set_color.method,extraout_RDX_00,
                           vtableDispatch);
        return bVar4;
      }
      goto label_043d7868;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (index < 0) {
label_043d78b6:
    return (bool_conflict)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pUVar2 = (UnityEngine_UI_Text_array *)(((UnityEngine_UI_Text_o *)__this)->fields).m_Material;
  if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) goto label_043d78b6;
    if (uVar1 <= (uint)index) goto label_043d78d5;
    pUVar3 = pUVar2->m_Items[index];
    __this = (UI_MultiTextLabel_o *)0x0;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      vtableDispatch = (pUVar3->klass->vtable)._74_get_text.methodPtr;
      bVar4 = (*vtableDispatch)
                        (pUVar3,(pUVar3->klass->vtable)._74_get_text.method,extraout_RDX_01,
                         vtableDispatch);
      return bVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043d78d5:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return extraout_EAX;
}


// UI.MultiTextLabel$$SetValue
// il2cpp: void UI_MultiTextLabel__SetValue (UI_MultiTextLabel_o* __this, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x43d77e0

void UI_MultiTextLabel__SetValue
               (UI_MultiTextLabel_o *__this,int32_t index,System_String_o *value,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  
  if (index < 0) {
    return;
  }
  pUVar2 = (__this->fields).texts;
  if (pUVar2 == (UnityEngine_UI_Text_array *)0x0) {
label_043d781e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) {
      return;
    }
    if ((uint)index < uVar1) {
      pUVar3 = pUVar2->m_Items[index];
      __this = (UI_MultiTextLabel_o *)0x0;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        vtableDispatch = (pUVar3->klass->vtable)._75_set_text.methodPtr;
        (*vtableDispatch)
                  (pUVar3,value,(pUVar3->klass->vtable)._75_set_text.method,vtableDispatch);
        return;
      }
      goto label_043d781e;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (index < 0) {
    return;
  }
  pUVar2 = (__this->fields).texts;
  if (pUVar2 == (UnityEngine_UI_Text_array *)0x0) {
label_043d7868:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) {
      return;
    }
    if ((uint)index < uVar1) {
      pUVar3 = pUVar2->m_Items[index];
      __this = (UI_MultiTextLabel_o *)0x0;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        vtableDispatch = (pUVar3->klass->vtable)._23_set_color.methodPtr;
        (*vtableDispatch)
                  (pUVar3,(pUVar3->klass->vtable)._23_set_color.method,extraout_RDX,vtableDispatch);
        return;
      }
      goto label_043d7868;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (index < 0) {
    return;
  }
  pUVar2 = (__this->fields).texts;
  if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) {
      return;
    }
    if (uVar1 <= (uint)index) goto label_043d78d5;
    pUVar3 = pUVar2->m_Items[index];
    __this = (UI_MultiTextLabel_o *)0x0;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      vtableDispatch = (pUVar3->klass->vtable)._74_get_text.methodPtr;
      (*vtableDispatch)
                (pUVar3,(pUVar3->klass->vtable)._74_get_text.method,extraout_RDX_00,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043d78d5:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiTextLabel$$ChangeTextColor
// il2cpp: void UI_MultiTextLabel__ChangeTextColor (UI_MultiTextLabel_o* __this, int32_t index, UnityEngine_Color_o color, const MethodInfo* method);
// 0x43d7830

void UI_MultiTextLabel__ChangeTextColor
               (UI_MultiTextLabel_o *__this,int32_t index,UnityEngine_Color_o color,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  undefined8 extraout_RDX;
  
  if (index < 0) {
    return;
  }
  pUVar2 = (__this->fields).texts;
  if (pUVar2 == (UnityEngine_UI_Text_array *)0x0) {
label_043d7868:
    il2cpp_runtime_helper_022b2c90(color.fields._0_8_,color.fields._8_8_);
  }
  else {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) {
      return;
    }
    if ((uint)index < uVar1) {
      pUVar3 = pUVar2->m_Items[index];
      __this = (UI_MultiTextLabel_o *)0x0;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (pUVar3->klass->vtable)._23_set_color.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pUVar3,(pUVar3->klass->vtable)._23_set_color.method,method,UNRECOVERED_JUMPTABLE_00);
        return;
      }
      goto label_043d7868;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (index < 0) {
    return;
  }
  pUVar2 = (__this->fields).texts;
  if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) {
      return;
    }
    if (uVar1 <= (uint)index) goto label_043d78d5;
    pUVar3 = pUVar2->m_Items[index];
    __this = (UI_MultiTextLabel_o *)0x0;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = (pUVar3->klass->vtable)._74_get_text.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pUVar3,(pUVar3->klass->vtable)._74_get_text.method,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043d78d5:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiTextLabel$$GetValue
// il2cpp: System_String_o* UI_MultiTextLabel__GetValue (UI_MultiTextLabel_o* __this, int32_t index, const MethodInfo* method);
// 0x43d7880

System_String_o * UI_MultiTextLabel__GetValue(UI_MultiTextLabel_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_array *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar4;
  System_String_o *extraout_RAX;
  
  if (index < 0) {
label_043d78b6:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pUVar2 = (__this->fields).texts;
  if (pUVar2 != (UnityEngine_UI_Text_array *)0x0) {
    uVar1 = (uint)pUVar2->max_length;
    if ((int)uVar1 <= index) goto label_043d78b6;
    if (uVar1 <= (uint)index) goto label_043d78d5;
    pUVar3 = pUVar2->m_Items[index];
    __this = (UI_MultiTextLabel_o *)0x0;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      vtableDispatch = (pUVar3->klass->vtable)._74_get_text.methodPtr;
      pSVar4 = (System_String_o *)
               (*vtableDispatch)
                         (pUVar3,(pUVar3->klass->vtable)._74_get_text.method,method,vtableDispatch);
      return pSVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043d78d5:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.MultiTextLabel$$.ctor
// il2cpp: void UI_MultiTextLabel___ctor (UI_MultiTextLabel_o* __this, const MethodInfo* method);
// 0x43d78e0

void UI_MultiTextLabel___ctor(UI_MultiTextLabel_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


