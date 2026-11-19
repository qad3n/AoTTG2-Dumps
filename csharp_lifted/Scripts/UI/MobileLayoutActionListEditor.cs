// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutActionListEditor
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutActionListEditor.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000775")]
internal class MobileLayoutActionListEditor : MonoBehaviour
{
	[Token(Token = "0x400259A")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<StringSetting> _actions;

	[Token(Token = "0x400259B")]
	[FieldOffset(Offset = "0x28")]
	private readonly Dictionary<StringSetting, Text> _labels;

	[Token(Token = "0x400259C")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _root;

	[Token(Token = "0x400259D")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _rowsRoot;

	[Token(Token = "0x400259E")]
	[FieldOffset(Offset = "0x40")]
	private LayoutElement _layoutElement;

	[Token(Token = "0x400259F")]
	[FieldOffset(Offset = "0x48")]
	private LayoutElement _rowsLayoutElement;

	[Token(Token = "0x40025A0")]
	[FieldOffset(Offset = "0x50")]
	private Transform _overlayRoot;

	[Token(Token = "0x40025A1")]
	[FieldOffset(Offset = "0x58")]
	private ElementStyle _style;

	[Token(Token = "0x40025A2")]
	[FieldOffset(Offset = "0x60")]
	private MobileInputLayoutRole _role;

	[Token(Token = "0x60047EA")]
	[Address(RVA = "0x5BA7A10", Offset = "0x5BA6A10", VA = "0x5BA7A10")]
	public void Setup(ElementStyle style, string title, string[] initialActionIds, Transform overlayRoot, MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileLayoutActionListEditor.c (UI.MobileLayoutActionListEditor$$Setup): 6 lines keep C-only constructs
		RectTransform* targetAddress;
		uint uVar1;
		List<StringSetting> pSVar2;
		RectTransform pUVar3;
		GameObject pUVar4;
		LayoutElement pUVar5;
		VerticalLayoutGroup pUVar6;
		HorizontalLayoutGroup __this_00;
		Transform parent;
		MobileLayoutActionListEditor __this_01;
		String title_00;
		UnityAction __this_02;
		ulong uVar7;
		MethodInfo* method_00;
		ulong uVar9;
		MethodInfo method_01;

		this._overlayRoot = overlayRoot;
		this._style = style;
		this._role = role;
		pUVar3 = this.GetComponent<RectTransform>();
		targetAddress = &this._root;
		this._root = pUVar3;
		pUVar4 = this.gameObject;
		if (pUVar4 != null) {
			pUVar5 = pUVar4.AddComponent<LayoutElement>();
			this._layoutElement = pUVar5;
			pUVar4 = this.gameObject;
			if (pUVar4 != null) {
				method_00 = &MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup;
				pUVar6 = pUVar4.AddComponent<VerticalLayoutGroup>();
				if (pUVar6 != null) {
					pUVar6.spacing = 6.0;
					pUVar6.childAlignment = 0;
					pUVar6.childForceExpandHeight = false;
					pUVar6.childForceExpandWidth = false;
					pUVar4 = pUVar6.CreateRect("Header", *targetAddress);
					if (pUVar4 != null) {
						pUVar5 = pUVar4.AddComponent<LayoutElement>();
						if (pUVar5 != null) {
							pUVar5.set_preferredHeight(36.0);
							__this_00 = pUVar4.AddComponent<HorizontalLayoutGroup>();
							if (__this_00 != null) {
								__this_00.spacing = 8.0;
								__this_00.childAlignment = 3;
								__this_00.childForceExpandHeight = false;
								__this_00.childForceExpandWidth = false;
								parent = pUVar4.transform;
								ElementFactory.CreateDefaultLabel(parent, style, title, 0, 3);
								__this_01 = (MobileLayoutActionListEditor)pUVar4.transform;
								title_00 = UIManager.GetLocaleCommon("Add");
								__this_02 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MobileLayoutActionListEditor_Setup_b__9_0);
								ElementFactory.CreateDefaultButton((Transform)__this_01, style, title_00, 110.0, 34.0, __this_02);
								pUVar4 = __this_01.CreateRect("Rows", this._root);
								if (pUVar4 != null) {
									pUVar3 = pUVar4.GetComponent<RectTransform>();
									this._rowsRoot = pUVar3;
									pUVar5 = pUVar4.AddComponent<LayoutElement>();
									this._rowsLayoutElement = pUVar5;
									pUVar6 = pUVar4.AddComponent<VerticalLayoutGroup>() ;
									if (pUVar6 != null) {
										pUVar6.spacing = 6.0 ;
										pUVar6.childAlignment = 0;
										pUVar6.childForceExpandHeight = false;
										method_01 = null;
										pUVar6.childForceExpandWidth = false;
										if ((initialActionIds != null) &&(0 < (int)initialActionIds.Length)) {
											uVar7 = initialActionIds.Length & 0xffffffff;
											uVar9 = 0;
											do {
												if (uVar7 <= uVar9) {
													throw new IndexOutOfRangeException();
												}
												method_01 = (MethodInfo)initialActionIds[uVar9];
												this.AddAction((String)method_01);
												uVar9 = uVar9 + 1;
												uVar1 = (uint)initialActionIds.Length;
												uVar7 = (ulong)uVar1;
											} while ((long)uVar9 < (long)(int)uVar1);
										}
										pSVar2 = this._actions;
										if (pSVar2 != null) {
											if (pSVar2._size == 0) {
												method_01 = (MethodInfo *)"None";
												this.AddAction("None");
											}
											this.UpdateHeight();
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x60047EB")]
	[Address(RVA = "0x5BAA320", Offset = "0x5BA9320", VA = "0x5BAA320")]
	public string GetActionsString()
	{
		// Lifted from source/cpp/UI/MobileLayoutActionListEditor.c (UI.MobileLayoutActionListEditor$$GetActionsString): 8 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<StringSetting> __this_00;
		Il2CppClass pIVar3;
		bool bVar5;
		List<string> __this_01;
		String[] pSVar6;
		String pSVar7;
		byte[] local_68 = new byte[8];
		object local_58;
		MobileInputBinding local_50;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		local_50 = null;
		__this_01 = new List<string>();
		__this_00 = this._actions;
		if (__this_00 != null) {
			local_48.GetEnumerator((List<object>)__this_00);
			local_58 = local_38;
			local_68 = (byte[])local_48._0_8_;
			local_48._0_8_ = null;
			if (__this_01 == null) {
				local_48._8_8_ = local_68;
				while(true) {
					bVar5 = local_68.MoveNext();
					if (!bVar5) break;
					if (local_58 == null) goto label_05caa62a;
					pIVar3 = local_58[2].klass;
					bVar5 = MobileInputBindingRegistry.TryGetBinding((String)pIVar3, ref local_50);
					if (bVar5) {
						throw new NullReferenceException();
					}
				}
			}
			else {
				local_48._8_8_ = local_68;
				while(true) {
					bVar5 = local_68.MoveNext();
					if (!bVar5) break;
					if (local_58 == null) {
	label_05caa62a: ;
						throw new NullReferenceException();
					}
					pIVar3 = local_58[2].klass;
					bVar5 = MobileInputBindingRegistry.TryGetBinding((String)pIVar3, ref local_50);
					if (bVar5) {
						bVar5 = __this_01.Contains((object)pIVar3) ;
						if (!bVar5) {
							piVar1 = &__this_01._version;
							*piVar1 = *piVar1 + 1;
							pSVar6 = __this_01._items;
							if (pSVar6 == null) {
								throw new NullReferenceException();
							}
							uVar2 = __this_01._size;
							if (uVar2 < (uint)pSVar6.Length) {
								__this_01._size = uVar2 + 1;
								pSVar6[(int)uVar2] = (String)pIVar3;
							}
							else {
								__this_01.AddWithResize((object)pIVar3);
							}
						}
					}
				}
			}
			local_68.Dispose();
			if (__this_01 != null) {
				if (__this_01._size == 0) {
					pSVar7 = "None";
				}
				else {
					pSVar6 = (String[])__this_01.ToArray();
					pSVar7 = String.Join("+", pSVar6);
				}
				return pSVar7;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60047EC")]
	[Address(RVA = "0x5BAB400", Offset = "0x5BAA400", VA = "0x5BAB400")]
	public void SetVisible(bool visible)
	{
		// Lifted from source/cpp/UI/MobileLayoutActionListEditor.c (UI.MobileLayoutActionListEditor$$SetVisible): clean
		LayoutElement pUVar1;
		bool bVar2;
		GameObject __this_00;
		MethodInfo method_00;

		__this_00 = this.gameObject;
		if (__this_00 != null) {
			__this_00.SetActive(visible);
			pUVar1 = this._layoutElement;
			bVar2 = ((Object)pUVar1 != null);
			if (!bVar2) {
	label_05cab4ff: ;
				this.RefreshLayout();
				return;
			}
			pUVar1 = this._layoutElement;
			if (pUVar1 != null) {
				method_00 = (MethodInfo)(ulong)!visible;
				pUVar1.set_ignoreLayout(!visible);
				if (visible) {
					this.UpdateHeight();
					goto label_05cab4ff;
				}
				pUVar1 = this._layoutElement;
				if (pUVar1 != null) {
					pUVar1.set_minHeight(0.0);
					pUVar1 = this._layoutElement;
					if (pUVar1 != null) {
						pUVar1.set_preferredHeight(0.0);
						pUVar1 = this._layoutElement;
						if (pUVar1 != null) {
							pUVar1.set_flexibleHeight(0.0);
							goto label_05cab4ff;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60047ED")]
	[Address(RVA = "0x5BADF10", Offset = "0x5BACF10", VA = "0x5BADF10")]
	private void AddAction(string actionId)
	{
		// Lifted from source/cpp/UI/MobileLayoutActionListEditor.c (UI.MobileLayoutActionListEditor$$AddAction): 20 lines keep C-only constructs
		StringSetting* targetAddress;
		int piVar1;
		uint uVar2;
		StringSetting[] pSVar3;
		ElementStyle style;
		Dictionary<object, object> __this_00;
		bool bVar4;
		MobileLayoutActionListEditor.c__DisplayClass12_0 __this_01;
		StringSetting pSVar5;
		GameObject pUVar6;
		LayoutElement pUVar7;
		HorizontalLayoutGroup __this_02;
		Transform pUVar8;
		String pSVar9;
		UnityAction pUVar10;
		Text value;
		MethodInfo pMVar11;
		MobileLayoutActionListEditor __this_03;
		GameObject* targetAddress_00;

		__this_01 = new MobileLayoutActionListEditor.c__DisplayClass12_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			pSVar5 = new StringSetting(actionId, 0x7fffffff);
			targetAddress = &__this_01.setting;
			__this_01.setting = pSVar5;
			pMVar11 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
			__this_03 = (MobileLayoutActionListEditor)this._actions;
			if (__this_03 != null) {
				pSVar5 = __this_01.setting;
				piVar1 = (int)((long)&__this_03.m_CancellationTokenSource + 4);
				*piVar1 = *piVar1 + 1;
				pSVar3 = (StringSetting[])__this_03.m_CachedPtr;
				if (pSVar3 != null) {
					uVar2 = *(uint)&__this_03.m_CancellationTokenSource;
					if (uVar2 < (uint)pSVar3.Length) {
						pMVar11 = (MethodInfo)(ulong)(uVar2 + 1);
						*(uint)&__this_03.m_CancellationTokenSource = uVar2 + 1;
						__this_03 = (MobileLayoutActionListEditor)(pSVar3.m_Items + (int)uVar2);
						pSVar3[(int)uVar2] = pSVar5;
					}
					else {
						__this_03.AddWithResize((object)pSVar5);
					}
					pUVar6 = __this_03.CreateRect("ActionRow", this._rowsRoot);
					targetAddress_00 = &__this_01.row;
					__this_01.row = pUVar6;
					pUVar6 = __this_01.row;
					if (pUVar6 != null) {
						pUVar7 = pUVar6.AddComponent<LayoutElement>();
						if (pUVar7 != null) {
							pUVar7.set_preferredHeight(36.0);
							if (*targetAddress_00 != null) {
								__this_02 = (*targetAddress_00).AddComponent<HorizontalLayoutGroup>();
								if (__this_02 != null) {
									__this_02.spacing = 8.0;
									__this_02.childAlignment = 3;
									__this_02.childForceExpandHeight = false;
									__this_02.childForceExpandWidth = false;
									if (*targetAddress_00 != null) {
										pUVar8 = (*targetAddress_00).transform;
										if (*targetAddress != null) {
											style = this._style;
											pSVar9 = MobileInputBindingUtil.GetActionLabel(((*targetAddress).fields)._value, this._role);
											pUVar10 = new UnityAction((object)__this_01, (intptr_t) MethodInfo_UI_MobileLayoutActionListEditor_c__DisplayClass12_0_AddAction_b__0);
											pUVar6 = ElementFactory.CreateDefaultButton(pUVar8, style, pSVar9, 220.0, 34.0, pUVar10);
											if (pUVar6 != null) {
												pUVar8 = pUVar6.transform;
												if (pUVar8 != null) {
													pUVar8 = pUVar8.Find("Text");
													bVar4 = ((Object)pUVar8 != null);
													if (bVar4) {
														if (pUVar8 == null) goto label_05cae375;
														__this_00 = (Dictionary<object, object>)this._labels;
														pSVar5 = *targetAddress;
														value = pUVar8.GetComponent<Text>();
														if (__this_00 == null) goto label_05cae375;
														__this_00.set_Item((object)pSVar5, (object)value);
													}
													if (*targetAddress_00 != null) {
														pUVar8 = (*targetAddress_00).transform;
														pMVar11 = (MethodInfo)this._style;
														pSVar9 = UIManager.GetLocaleCommon("Delete");
														pUVar10 = new UnityAction((object)__this_01, (intptr_t) MethodInfo_UI_MobileLayoutActionListEditor_c__DisplayClass12_0_AddAction_b__1);
														ElementFactory.CreateDefaultButton(pUVar8, (ElementStyle)pMVar11, pSVar9, 82.0, 34.0, pUVar10);
														this.UpdateHeight();
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
	label_05cae375: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60047EE")]
	[Address(RVA = "0x5BAE380", Offset = "0x5BAD380", VA = "0x5BAE380")]
	private void UpdateHeight()
	{
		// Lifted from source/cpp/UI/MobileLayoutActionListEditor.c (UI.MobileLayoutActionListEditor$$UpdateHeight): clean
		int iVar1;
		List<StringSetting> pSVar2;
		LayoutElement pUVar3;
		bool bVar4;
		int iVar5;

		pSVar2 = this._actions;
		if (pSVar2 == null) {
	label_05cae495: ;
			throw new NullReferenceException();
		}
		iVar1 = pSVar2._size;
		iVar5 = 1;
		if (1 < iVar1) {
			iVar5 = iVar1;
		}
		pUVar3 = this._rowsLayoutElement;
		bVar4 = ((Object)pUVar3 != null);
		if (bVar4) {
			pUVar3 = this._rowsLayoutElement;
			if (pUVar3 == null) goto label_05cae495;
			pUVar3.set_preferredHeight((float)iVar5 * 42.0);
		}
		pUVar3 = this._layoutElement;
		bVar4 = ((Object)pUVar3 != null);
		if (bVar4) {
			pUVar3 = this._layoutElement;
			if (pUVar3 == null) goto label_05cae495;
			pUVar3.set_preferredHeight((float)iVar5 * 42.0 + 48.0);
		}
		this.RefreshLayout();
		return;
	}

	[Token(Token = "0x60047EF")]
	[Address(RVA = "0x5BAE4A0", Offset = "0x5BAD4A0", VA = "0x5BAE4A0")]
	private void RefreshLayout()
	{
		// Lifted from source/cpp/UI/MobileLayoutActionListEditor.c (UI.MobileLayoutActionListEditor$$RefreshLayout): 1 lines keep C-only constructs
		bool bVar1;
		RectTransform pUVar2;
		RectTransform pUVar3;

		pUVar3 = this._root;
		bVar1 = ((Object)pUVar3 == null);
		if (!bVar1) {
			pUVar3 = this._root;
			LayoutRebuilder.ForceRebuildLayoutImmediate(pUVar3);
			pUVar3 = this._root;
			if (pUVar3 == null) {
				throw new NullReferenceException();
			}
			pUVar2 = (RectTransform)pUVar3.parent;
			pUVar3 = null;
			if ((pUVar2 != null) &&(pUVar3 = null, pUVar2.klass == typeof(RectTransform))) {
				pUVar3 = pUVar2;
			}
			bVar1 = ((Object)pUVar3 != null);
			if (bVar1) {
				LayoutRebuilder.ForceRebuildLayoutImmediate(pUVar3);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60047F0")]
	[Address(RVA = "0x5BADD50", Offset = "0x5BACD50", VA = "0x5BADD50")]
	private GameObject CreateRect(string name, RectTransform parent)
	{
		// Lifted from source/cpp/UI/MobileLayoutActionListEditor.c (UI.MobileLayoutActionListEditor$$CreateRect): 1 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this_00;
		RectTransform __this_01;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this_00 = new GameObject(name, components);
			if (__this_00 != null) {
				__this_01 = __this_00.GetComponent<RectTransform>();
				if (__this_01 != null) {
					__this_01.SetParent((Transform)parent, false);
					__this_01.anchorMin = (Vector2)0x3f8000003f000000;
					__this_01.anchorMax = (Vector2)0x3f8000003f000000;
					__this_01.sizeDelta = (Vector2)(Vector2.zeroVector);
					return __this_00;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60047F1")]
	[Address(RVA = "0x5BAE5D0", Offset = "0x5BAD5D0", VA = "0x5BAE5D0")]
	public MobileLayoutActionListEditor()
	{
		// Lifted from source/cpp/UI/MobileLayoutActionListEditor.c (UI.MobileLayoutActionListEditor$$.ctor): 2 lines keep C-only constructs
		List<StringSetting> __this_00;
		Dictionary<StringSetting, Text> __this_01;

		if (Il2CppMethodInitialized_07547a8b == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_ctor) ;
			Il2CppMethodInitialized_07547a8b = true;
		}
		__this_00 = il2cpp_codegen_object_new(typeof(List<StringSetting>)) ;
		__this_00 = new List<object>();
		this._actions = __this_00;
		__this_01 = new Dictionary<StringSetting, Text>();
		this._labels = __this_01;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MobileLayoutActionListEditor.c.

	// UI.MobileLayoutActionListEditor.<>c__DisplayClass12_0$$.ctor: clean
	private void c__DisplayClass12_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutActionListEditor$$<Setup>b__9_0: clean
	private void Setup_b__9_0()
	{


		this.AddAction("None");
		return;
	}

	// UI.MobileLayoutActionListEditor.<>c__DisplayClass12_0$$<AddAction>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass12_0__AddAction_b__0()
	{
		int role;
		MobileLayoutActionListEditor pUVar1;
		StringSetting pSVar2;
		Transform parent;
		String current;
		Action<string> __this_00;

		pUVar1 = this.__4__this;
		if ((pUVar1 == null) ||(pSVar2 = this.setting, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		parent = pUVar1._overlayRoot;
		current = pSVar2._value;
		role = pUVar1._role;
		__this_00 = this.__9__2;
		if (__this_00 == null) {
			__this_00 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_MobileLayoutActionListEditor_c__DisplayClass12_0_AddAction_b__2);
			this.__9__2 = __this_00;
		}
		MobileLayoutActionPickerModal.Open(parent, current, role, __this_00);
		return;
	}

	// UI.MobileLayoutActionListEditor.<>c__DisplayClass12_0$$<AddAction>b__2: 1 lines keep C-only constructs
	private void c__DisplayClass12_0__AddAction_b__2(String value)
	{
		StringSetting __this_00;
		MobileLayoutActionListEditor pUVar1;
		Dictionary<object, object> __this_01;
		object pIVar2;
		bool bVar3;
		String pSVar4;
		object pIStack_18;

		pIStack_18 = null;
		__this_00 = this.setting;
		if (__this_00 != null) {
			__this_00.Value = (object)value;
			pUVar1 = this.__4__this;
			if ((pUVar1 != null) &&(__this_01 = (Dictionary<object, object>)pUVar1._labels, __this_01 != null)) {
				bVar3 = __this_01.TryGetValue((object)this.setting, ref pIStack_18);
				pIVar2 = pIStack_18;
				if (!bVar3) {
					return;
				}
				pUVar1 = this.__4__this;
				if ((pUVar1 != null) &&(pSVar4 = MobileInputBindingUtil.GetActionLabel(value, pUVar1._role), pIVar2 != null)) {
					(*pIVar2.klass.vtable[0x4b].methodPtr)(pIVar2,pSVar4,pIVar2.klass.vtable[0x4b].method);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.MobileLayoutActionListEditor.<>c__DisplayClass12_0$$<AddAction>b__1: clean
	private void c__DisplayClass12_0__AddAction_b__1()
	{
		List<StringSetting> pSVar1;
		Dictionary<object, object> __this_00;
		Object obj;
		MethodInfo method_01;
		MobileLayoutActionListEditor pUVar2;

		pUVar2 = this.__4__this;
		if ((pUVar2 != null) &&(pSVar1 = pUVar2._actions, pSVar1 != null)) {
			pSVar1.Remove((object)this.setting);
			pUVar2 = this.__4__this;
			if ((pUVar2 != null) &&(__this_00 = (Dictionary<object, object>)pUVar2._labels, __this_00 != null)) {
				__this_00.Remove((object)this.setting);
				obj = (Object)this.row;
				Object.Destroy(obj);
				pUVar2 = this.__4__this;
				if ((pUVar2 != null) &&(pSVar1 = pUVar2._actions, pSVar1 != null)) {
					if (pSVar1._size == 0) {
						method_01 = (MethodInfo *)"None";
						pUVar2.AddAction("None");
						pUVar2 = this.__4__this;
						if (pUVar2 == null) goto label_05caea07;
					}
					pUVar2.UpdateHeight();
					return;
				}
			}
		}
	label_05caea07: ;
		throw new NullReferenceException();
	}
}
