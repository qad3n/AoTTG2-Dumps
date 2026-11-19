// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgChoiceControl
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Localization;
using Gisketch.Aottg2UI.Overlays;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000C4")]
public sealed class AottgChoiceControl : MonoBehaviour
{
	[Token(Token = "0x4000406")]
	private const float PointerUnlockDistanceSqr = 4f;

	[Token(Token = "0x4000407")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _id;

	[Token(Token = "0x4000408")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private AottgChoiceOptions _options;

	[Token(Token = "0x4000409")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x400040A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private GameObject _opener;

	[Token(Token = "0x400040B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GameObject _arrow;

	[Token(Token = "0x400040C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x400040D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x400040E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int _index;

	[Token(Token = "0x400040F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int _selectedIndex;

	[Token(Token = "0x4000410")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private int _maxVisibleItems;

	[Token(Token = "0x4000411")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private int _openVersion;

	[Token(Token = "0x4000412")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly List<GisketchDropdownItemFeedback> _feedback;

	[Token(Token = "0x4000413")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private bool _pointerSelectionLocked;

	[Token(Token = "0x4000414")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private Vector2 _pointerLockPosition;

	[Token(Token = "0x1700009F")]
	public GisketchOverlayManager OverlayManager
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x5294A10", Offset = "0x5293A10", VA = "0x5294A10")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$get_OverlayManager): clean
			return this._OverlayManager_k__BackingField;
		}
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x5294A20", Offset = "0x5293A20", VA = "0x5294A20")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$set_OverlayManager): clean
			this._OverlayManager_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170000A0")]
	private GisketchOverlayManager Overlays
	{
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x5294A30", Offset = "0x5293A30", VA = "0x5294A30")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$get_Overlays): clean
			GisketchOverlayManager pGVar1;
			GisketchUIRoot pGVar2;

			pGVar1 = this._OverlayManager_k__BackingField;
			if (pGVar1 != null) {
				return pGVar1;
			}
			pGVar2 = this.GetComponentInParent<GisketchUIRoot>();
			if (pGVar2 == null) {
				return null;
			}
			return pGVar2._Overlays_k__BackingField;
		}
	}

	[Token(Token = "0x170000A1")]
	public string Value
	{
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x52951C0", Offset = "0x52941C0", VA = "0x52951C0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$get_Value): clean
			uint uVar1;
			uint uVar2;
			uint uVar3;
			AottgChoiceOptions pGVar4;
			GisketchChoiceOptionDefinition[] pGVar5;
			GisketchChoiceOptionDefinition pGVar6;
			String pSVar7;
			bool bVar8;
			uint uVar9;

			pGVar4 = this._options;
			if (pGVar4 == null) {
		label_05395213: ;
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pGVar5 = pGVar4._items;
			if (pGVar5 != null) {
				uVar2 = this._index;
				uVar3 = (uint)pGVar5.Length;
				uVar1 = uVar3 - 1;
				if ((int)uVar2 < (int)uVar1) {
					uVar1 = uVar2;
				}
				uVar9 = 0;
				if (-1 < (int)uVar2) {
					uVar9 = uVar1;
				}
				if (uVar3 <= uVar9) {
					throw new IndexOutOfRangeException();
				}
				pGVar6 = pGVar5[(int)uVar9];
				if (pGVar6 != null) {
					bVar8 = String.IsNullOrEmpty(pGVar6.value);
					if (!bVar8) {
						return pGVar6.value;
					}
					pSVar7 = pGVar6.text;
					if (pSVar7 != null) {
						return pSVar7;
					}
					goto label_05395213;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170000A2")]
	internal bool CanStep
	{
		[Token(Token = "0x6000624")]
		[Address(RVA = "0x52949B0", Offset = "0x52939B0", VA = "0x52949B0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$get_CanStep): 1 lines keep C-only constructs
			uint uVar1;
			AottgChoiceOptions pGVar2;
			GisketchChoiceOptionDefinition[] pGVar3;
			uint uVar4;
			int iVar5;

			pGVar2 = this._options;
			if (pGVar2 == null) {
				return false;
			}
			pGVar3 = pGVar2._items;
			if (pGVar3 == null) {
		label_053949f5: ;
				throw new NullReferenceException();
			}
			uVar1 = (uint)pGVar3.Length;
			uVar4 = 0;
			if (0 < (int)uVar1) {
				iVar5 = 0;
				do {
					if (pGVar3[(int)uVar4] == null) goto label_053949f5;
					iVar5 = iVar5 + (uint)(pGVar3[(int)uVar4].fields).enabled;
					uVar4 = uVar4 + 1;
				} while (uVar1 != uVar4);
				uVar4 = (uint)(1 < iVar5);
			}
			return SUB41(uVar4, 0);
		}
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x5294A90", Offset = "0x5293A90", VA = "0x5294A90")]
	public void Setup(GisketchNodeDefinition node, string value, string[] options, TextMeshProUGUI label, int maxVisibleItems, GameObject arrow, IGisketchActionHandler actions, [Optional] IGisketchLocalizer localizer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Setup): clean
		bool bVar1;
		int iVar2;
		Object __this_00;
		String pSVar3;
		AottgChoiceOptions pGVar4;

		this._node = node;
		this._actions = actions;
		if (node != null) {
			bVar1 = String.IsNullOrEmpty(node.id);
			if (!bVar1) {
				pSVar3 = node.id;
				goto label_05394b24;
			}
		}
		__this_00 = (Object)this.gameObject;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pSVar3 = __this_00.name;
	label_05394b24: ;
		this._id = pSVar3;
		pGVar4 = AottgChoiceOptions.Create(node, value, options, localizer);
		this._options = pGVar4;
		iVar2 = this.IndexOf(value);
		this._index = iVar2;
		this._label = label;
		iVar2 = 8;
		if (0 < maxVisibleItems) {
			iVar2 = maxVisibleItems;
		}
		this._maxVisibleItems = iVar2;
		this._arrow = arrow;
		this.RefreshLabel();
		return;
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x528FD90", Offset = "0x528ED90", VA = "0x528FD90")]
	public void Previous(GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Previous): clean
		uint uVar1;
		AottgChoiceOptions pGVar2;
		GisketchChoiceOptionDefinition[] pGVar3;
		MethodInfo method_00;
		uint uVar4;
		uint index;
		uint uVar5;
		int iVar6;
		int iVar7;
		uint uVar8;

		pGVar2 = this._options;
		if ((pGVar2 == null) ||(pGVar3 = pGVar2._items, pGVar3 == null)) {
	label_0538fe27: ;
			throw new NullReferenceException();
		}
		uVar1 = this._index;
		method_00 = (MethodInfo)pGVar3.Length;
		uVar5 = (uint)method_00;
		uVar8 = uVar5 - 1;
		if (0 < (int)uVar5) {
			iVar7 = uVar1 + uVar5;
			iVar6 = 1;
			do {
				iVar7 = iVar7 + -1;
				index = iVar7 % (int)uVar5;
				if (-1 < (int)index) {
					uVar4 = index;
					if ((int)uVar8 <= (int)index) {
						uVar4 = uVar8;
					}
					if (uVar5 <= uVar4) {
						throw new IndexOutOfRangeException();
					}
					if (pGVar3[(int)uVar4] == null) goto label_0538fe27;
					if ((pGVar3[(int)uVar4].fields).enabled != false) {
						this.SetIndex(index, source);
						return;
					}
				}
				iVar6 = iVar6 + 1;
			} while (iVar6 <= (int)uVar5);
		}
		if ((int)uVar1 < (int)uVar8) {
			uVar8 = uVar1;
		}
		uVar5 = 0;
		if (-1 < (int)uVar1) {
			uVar5 = uVar8;
		}
		this.SetIndex(uVar5, source);
		return;
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x528FE60", Offset = "0x528EE60", VA = "0x528FE60")]
	public void Next(GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Next): clean
		uint uVar1;
		AottgChoiceOptions pGVar2;
		GisketchChoiceOptionDefinition[] pGVar3;
		MethodInfo method_00;
		uint uVar4;
		uint index;
		uint uVar5;
		int iVar6;
		uint uVar7;

		pGVar2 = this._options;
		if ((pGVar2 == null) ||(pGVar3 = pGVar2._items, pGVar3 == null)) {
	label_0538fee4: ;
			throw new NullReferenceException();
		}
		uVar1 = this._index;
		method_00 = (MethodInfo)pGVar3.Length;
		uVar5 = (uint)method_00;
		uVar7 = uVar5 - 1;
		if (0 < (int)uVar5) {
			iVar6 = 1;
			do {
				index = (int)(uVar1 + uVar5 + iVar6) % (int)uVar5;
				if (-1 < (int)index) {
					uVar4 = index;
					if ((int)uVar7 <= (int)index) {
						uVar4 = uVar7;
					}
					if (uVar5 <= uVar4) {
						throw new IndexOutOfRangeException();
					}
					if (pGVar3[(int)uVar4] == null) goto label_0538fee4;
					if ((pGVar3[(int)uVar4].fields).enabled != false) {
						this.SetIndex(index, source);
						return;
					}
				}
				iVar6 = iVar6 + 1;
			} while (iVar6 <= (int)uVar5);
		}
		if ((int)uVar1 < (int)uVar7) {
			uVar7 = uVar1;
		}
		uVar5 = 0;
		if (-1 < (int)uVar1) {
			uVar5 = uVar7;
		}
		this.SetIndex(uVar5, source);
		return;
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x52952C0", Offset = "0x52942C0", VA = "0x52952C0")]
	public void SetValueWithoutNotify(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetValueWithoutNotify): clean
		uint uVar1;
		AottgChoiceOptions pGVar2;
		GisketchChoiceOptionDefinition[] pGVar3;
		uint uVar4;
		uint uVar5;

		if (this._options != null) {
			uVar5 = this.IndexOf(value);
			pGVar2 = this._options;
			if (pGVar2 == null) {
	label_0539531a: ;
				throw new NullReferenceException();
			}
			if (-1 < (int)uVar5) {
				pGVar3 = pGVar2._items;
				if (pGVar3 == null) goto label_0539531a;
				uVar1 = (uint)pGVar3.Length;
				if ((int)uVar5 < (int)uVar1) {
					uVar4 = uVar1 - 1;
					if ((int)uVar5 < (int)(uVar1 - 1)) {
						uVar4 = uVar5;
					}
					if (uVar1 <= uVar4) {
						throw new IndexOutOfRangeException();
					}
					if (pGVar3[(int)uVar4] == null) goto label_0539531a;
					if ((pGVar3[(int)uVar4].fields).enabled != false) {
						this._index = uVar5;
						this.RefreshLabel();
						return;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x528F570", Offset = "0x528E570", VA = "0x528F570")]
	public void Open()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Open): 9 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		AottgChoiceControl.c__DisplayClass29_0 __this_00;
		EventSystem pUVar3;
		String id;
		GisketchNodeDefinition root;
		MethodInfo pMVar4;
		Object x;
		AottgChoicePopoverLifetime pGVar5;
		Action __this_01;
		GisketchUIRoot pGVar6;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		GameObject pUVar7;
		Vector3 UVar8;
		GisketchOverlayManager local_38;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChoiceControl.c__DisplayClass29_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			local_38 = this._OverlayManager_k__BackingField;
			if (local_38 == null) {
				pGVar6 = this.GetComponentInParent<GisketchUIRoot>();
				if (pGVar6 == null) {
					return;
				}
				local_38 = pGVar6._Overlays_k__BackingField;
				if (local_38 == null) {
					return;
				}
			}
			pUVar3 = EventSystem.current;
			pUVar7 = null;
			bVar1 = ((Object)pUVar3 != null);
			if (bVar1) {
				pUVar3 = EventSystem.current;
				if (pUVar3 == null) goto label_0538f91a;
				pUVar7 = pUVar3.m_CurrentSelected;
			}
			this._opener = pUVar7;
			iVar2 = this._openVersion + 1;
			this._openVersion = iVar2;
			__this_00.version = iVar2;
			this._selectedIndex = this._index;
			this.SetArrow("up");
			pMVar4 = (MethodInfo)this._id;
			id = String.Concat("choice-", (String)pMVar4);
			root = this.PopoverNode();
			pMVar4 = (MethodInfo)this.gameObject;
			x = (Object)local_38.ShowDynamicPopover(id, root, (GameObject)pMVar4, GisketchFocusInputMode. _Mode_k__BackingField == 1, true, 0.0, true, 0);
			bVar1 = (x != null);
			if (!bVar1) {
	label_0538f821: ;
				if (Il2CppMethodInitialized_07542884 == false) {
					il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchFocusInputMode)) ;
					Il2CppMethodInitialized_07542884 = true;
					iVar2 = GisketchFocusInputMode. _Mode_k__BackingField;
				}
				else {
					iVar2 = GisketchFocusInputMode. _Mode_k__BackingField;
				}
				if (iVar2 == 1) {
					UVar8 = Input.mousePosition;
					this._pointerLockPosition = UVar8._0_8_;
				}
				this._pointerSelectionLocked = iVar2 == 1;
				this.WireOptions((GameObject)x, local_38);
				if (Il2CppMethodInitialized_07542884 == false) {
					il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchFocusInputMode)) ;
					Il2CppMethodInitialized_07542884 = true;
					iVar2 = GisketchFocusInputMode. _Mode_k__BackingField;
					pMVar4 = extraout_RDX_00;
				}
				else {
					iVar2 = GisketchFocusInputMode. _Mode_k__BackingField;
					pMVar4 = extraout_RDX;
				}
				if (iVar2 == 1) {
					this.FocusSelectedOption((GameObject)x);
					return;
				}
				return;
			}
			if (x != null) {
				pGVar5 = x.AddComponent<AottgChoicePopoverLifetime>();
				pMVar4 = null;
				__this_01 = new Action((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass29_0_Open_b__0);
				if (pGVar5 != null) {
					pGVar5._closed = __this_01;
					goto label_0538f821;
				}
			}
		}
	label_0538f91a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x52961F0", Offset = "0x52951F0", VA = "0x52961F0")]
	public void Cancel()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Cancel): clean
		Object x;
		bool bVar1;
		GisketchUIRoot pGVar2;
		EventSystem pUVar3;
		GisketchOverlayManager __this_00;

		if (Il2CppMethodInitialized_07542b4b == false) {
			Il2CppMethodInitialized_07542b4b = true;
			__this_00 = this._OverlayManager_k__BackingField;
		}
		else {
			__this_00 = this._OverlayManager_k__BackingField;
		}
		if ((__this_00 != null) ||((pGVar2 = this.GetComponentInParent<GisketchUIRoot>(), pGVar2 != null &&(__this_00 = pGVar2._Overlays_k__BackingField, __this_00 != null)))) {
			__this_00.CloseTop(true);
		}
		pUVar3 = EventSystem.current;
		bVar1 = ((Object)pUVar3 != null);
		if (bVar1) {
			x = (Object)this._opener;
			bVar1 = (x != null);
			if (bVar1) {
				pUVar3 = EventSystem.current;
				if (pUVar3 == null) {
					throw new NullReferenceException();
				}
				pUVar3.SetSelectedGameObject(this._opener);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x5295570", Offset = "0x5294570", VA = "0x5295570")]
	private GisketchNodeDefinition PopoverNode()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$PopoverNode): clean
		GisketchChoiceOptionDefinition[] pGVar1;
		int iVar2;
		GisketchNodeDefinition[] children;
		AottgChoiceOptions pGVar3;
		GisketchNodeDefinition pGVar4;
		GisketchNodeDefinition[] pGVar5;
		String pSVar6;
		GisketchLayoutDefinition __this_00;
		ulong uVar7;
		long lVar8;

		pGVar3 = this._options;
		if ((pGVar3 != null) &&(pGVar1 = pGVar3._items, pGVar1 != null)) {
			children = (GisketchNodeDefinition[])new GisketchNodeDefinition[(uint32_t)pGVar1.Length];
			pGVar3 = this._options;
			if (pGVar3 != null) {
				if (children == null) {
					pGVar1 = pGVar3._items;
					if (pGVar1 != null) {
						iVar2 = (int)pGVar1.Length;
						if (0 < iVar2) {
							this.OptionNode(0);
							throw new NullReferenceException();
						}
	label_053956a9: ;
						if (this._maxVisibleItems < iVar2) {
							pGVar5 = (GisketchNodeDefinition[])new GisketchNodeDefinition[1];
							pGVar4 = this.ScrollNode(children);
							if (pGVar5 == null) goto label_05395690;
							if ((int)pGVar5.Length == 0) {
	label_0539580a: ;
								throw new IndexOutOfRangeException();
							}
							pGVar5[0] = pGVar4;
							children = pGVar5;
						}
						pGVar4 = new GisketchNodeDefinition();
						if (pGVar4 != null) {
							pGVar4.type = "Panel";
							pSVar6 = String.Concat(this._id, "-popover");
							pGVar4.id = pSVar6;
							pGVar4.style = "popover";
							__this_00 = new GisketchLayoutDefinition();
							if (__this_00 != null) {
								__this_00.direction = "Column";
								__this_00.alignItems = "Stretch";
								__this_00.gap = 0.0;
								pGVar4.layout = __this_00;
								pGVar4.children = children;
								return pGVar4;
							}
						}
					}
				}
				else {
					lVar8 = 0;
					uVar7 = 0;
					do {
						pGVar1 = pGVar3._items;
						if (pGVar1 == null) break;
						iVar2 = (int)pGVar1.Length;
						if ((long)iVar2 <= (long)uVar7) goto label_053956a9;
						pGVar4 = this.OptionNode((int32_t)uVar7);
						if ((uint)children.Length <= uVar7) goto label_0539580a;
						children[uVar7] = pGVar4;
						uVar7 = uVar7 + 1;
						pGVar3 = this._options;
						lVar8 = lVar8 + 8;
					} while (pGVar3 != null);
				}
			}
		}
	label_05395690: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x5296370", Offset = "0x5295370", VA = "0x5296370")]
	private GisketchNodeDefinition OptionNode(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$OptionNode): 3 lines keep C-only constructs
		uint uVar1;
		AottgChoiceOptions pGVar2;
		GisketchChoiceOptionDefinition[] pGVar3;
		GisketchNodeDefinition __this_00;
		String str2;
		String pSVar4;
		GisketchMotionDefinition __this_01;
		GisketchLayoutDefinition __this_02;
		GisketchLength __this_03;
		uint uVar5;
		uint uVar6;
		bool value;
		Nullable<bool>[] local_30 = new Nullable<bool>[2];
		int local_2c;

		pGVar2 = this._options;
		if (pGVar2 == null) goto label_053967b6;
		if (index < 0) {
	label_0539645e: ;
			value = false;
		}
		else {
			pGVar3 = pGVar2._items;
			if (pGVar3 == null) goto label_053967b6;
			uVar1 = (uint)pGVar3.Length;
			if ((int)uVar1 <= index) goto label_0539645e;
			uVar6 = uVar1 - 1;
			if (index < (int)(uVar1 - 1)) {
				uVar6 = index;
			}
			if (uVar1 <= uVar6) goto label_053967bb;
			if (pGVar3[(int)uVar6] == null) goto label_053967b6;
			value = (pGVar3[(int)uVar6].fields).enabled != false;
		}
		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "Button";
			local_2c = index;
			pSVar4 = this._id;
			str2 = local_2c.ToString();
			pSVar4 = String.Concat(pSVar4, "-option-", str2);
			__this_00.id = pSVar4;
			pGVar2 = this._options;
			if (pGVar2 != null) {
				pSVar4 = pGVar2.Text(index);
				__this_00.text = pSVar4;
				pGVar2 = this._options;
				if ((pGVar2 != null) &&(pGVar3 = pGVar2._items, pGVar3 != null)) {
					uVar6 = (uint)pGVar3.Length;
					uVar1 = uVar6 - 1;
					if (index < (int)uVar1) {
						uVar1 = index;
					}
					uVar5 = 0;
					if (-1 < index) {
						uVar5 = uVar1;
					}
					if (uVar6 <= uVar5) {
	label_053967bb: ;
						throw new IndexOutOfRangeException();
					}
					if (pGVar3[(int)uVar5] != null) {
						__this_00.textKey = (pGVar3[(int)uVar5].fields).textKey;
						__this_00.style = "dropdownItem";
						local_30[0].hasValue = false;
						local_30[0].value = false;
						local_30 = new Nullable<bool>(value);
						__this_00.enabled = local_30[0];
						pGVar2 = this._options;
						if ((pGVar2 != null) &&(pGVar3 = pGVar2._items, pGVar3 != null)) {
							uVar6 = (uint)pGVar3.Length;
							uVar1 = uVar6 - 1;
							if (index < (int)uVar1) {
								uVar1 = index;
							}
							uVar5 = 0;
							if (-1 < index) {
								uVar5 = uVar1;
							}
							if (uVar6 <= uVar5) goto label_053967bb;
							if (pGVar3[(int)uVar5] != null) {
								__this_00.tooltip = (pGVar3[(int)uVar5].fields).tooltip;
								pGVar2 = this._options;
								if ((pGVar2 != null) &&(pGVar3 = pGVar2._items, pGVar3 != null)) {
									uVar6 = (uint)pGVar3.Length;
									uVar1 = uVar6 - 1;
									if (index < (int)uVar1) {
										uVar1 = index;
									}
									uVar5 = 0;
									if (-1 < index) {
										uVar5 = uVar1;
									}
									if (uVar6 <= uVar5) goto label_053967bb;
									if (pGVar3[(int)uVar5] !=null) {
										__this_00.tooltipKey = (pGVar3[(int)uVar5].fields).tooltipKey;
										if (value == false) {
											__this_01 = null;
										}
										else {
											__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchMotionDefinition));
											__this_01 = new GisketchMotionDefinition();
											if (__this_01 == null) goto label_053967b6;
											__this_01.preset = "slideDown";
											pSVar4 = String.Concat(this._id, "-options");
											__this_01.group = pSVar4;
											__this_01.duration = 0.12;
											__this_01.stagger = 0.025;
											__this_01.order = index;
										}
										__this_00.enter = __this_01;
										__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchLayoutDefinition));
										__this_02 = new GisketchLayoutDefinition();
										__this_03 = new GisketchLength();
										if (__this_03 != null) {
											__this_03.value = 100.0;
											__this_03.unit = "percent";
											if (__this_02 != null) {
												__this_02.width = __this_03;
												__this_00.layout = __this_02;
												return __this_00;
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
	label_053967b6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x52967C0", Offset = "0x52957C0", VA = "0x52967C0")]
	private GisketchNodeDefinition ScrollNode(GisketchNodeDefinition[] children)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$ScrollNode): 1 lines keep C-only constructs
		GisketchNodeDefinition __this_00;
		String pSVar1;
		GisketchLayoutDefinition pGVar2;
		GisketchLength __this_01;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "ScrollView";
			pSVar1 = String.Concat(this._id, "-options-scroll");
			__this_00.id = pSVar1;
			__this_00.style = "scrollView";
			pGVar2 = new GisketchLayoutDefinition();
			__this_01 = new GisketchLength();
			if (__this_01 != null) {
				__this_01.value = (float)this._maxVisibleItems * 38.0;
				__this_01.unit = "point";
				if (pGVar2 != null) {
					pGVar2.height = __this_01;
					__this_00.layout = pGVar2;
					pGVar2 = new GisketchLayoutDefinition();
					if (pGVar2 != null) {
						pGVar2.direction = "Column";
						pGVar2.alignItems = "Stretch";
						pGVar2.gap = 0.0;
						__this_00.contentLayout = pGVar2;
						__this_00.children = children;
						return __this_00;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x5295870", Offset = "0x5294870", VA = "0x5295870")]
	private void WireOptions(GameObject content, GisketchOverlayManager overlays)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$WireOptions): 19 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		uint uVar4;
		List<GisketchDropdownItemFeedback> pSVar5;
		GisketchChoiceOptionDefinition[] pGVar6;
		UnityEvent __this_00;
		GisketchDropdownItemFeedback[] pGVar7;
		bool bVar8;
		AottgChoiceControl.c__DisplayClass34_0 __this_01;
		TextMeshProUGUI label;
		AottgChoiceOptions pGVar9;
		AottgChoiceControl.c__DisplayClass34_1 pGVar10;
		Transform pUVar11;
		String str2;
		String pSVar12;
		AottgChoiceControl.c__DisplayClass34_2 __this_02;
		UnityAction __this_03;
		GameObject pUVar13;
		AottgChoiceOptionCancel pGVar14;
		AottgChoiceOptionSelection pGVar15;
		GisketchDropdownItemFeedback __this_04;
		Func<bool> __this_05;
		int iVar16;
		ulong uVar17;
		uint uVar18;
		AottgChoiceControl.c__DisplayClass34_1* targetAddress;
		Button __this_06;
		int local_4c;
		AottgChoiceControl.c__DisplayClass34_0 local_48;
		GameObject local_40;
		ulong local_38;

		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChoiceControl.c__DisplayClass34_0));
		__this_01 = new Object();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			__this_01.overlays = overlays;
			bVar8 = ((Object)content == null);
			if (bVar8) {
				return;
			}
			pSVar5 = this._feedback;
			if (pSVar5 != null) {
				piVar1 = &pSVar5._version;
				*piVar1 = *piVar1 + 1;
				iVar2 = pSVar5._size;
				pSVar5._size = 0;
				if (0 < iVar2) {
					Array.Clear((Array)pSVar5._items, 0, iVar2);
				}
				pGVar9 = this._options;
				if (pGVar9 != null) {
					if (content == null) {
						pGVar6 = pGVar9._items;
						if (pGVar6 != null) {
							if ((int)pGVar6.Length < 1) {
								return;
							}
							pGVar10 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChoiceControl.c__DisplayClass34_1));
							pGVar10 = new Object();
							if (pGVar10 != null) {
								pGVar10.CS___8__locals1 = __this_01;
								pGVar10.index = 0;
								throw new NullReferenceException();
							}
						}
					}
					else {
						uVar17 = 0;
						local_48 = __this_01;
						local_40 = content;
						do {
							pGVar6 = pGVar9._items;
							if (pGVar6 == null) break;
							iVar16 = (int)uVar17;
							if ((int)pGVar6.Length <= iVar16) {
								return;
							}
							pGVar10 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChoiceControl.c__DisplayClass34_1));
							pGVar10 = new Object();
							if (pGVar10 == null) break;
							pGVar10.CS___8__locals1 = __this_01;
							pGVar10.index = iVar16;
							pUVar11 = content.transform;
							local_4c = iVar16;
							pSVar12 = this._id;
							local_38 = uVar17;
							str2 = local_4c.ToString();
							pSVar12 = String.Concat(pSVar12, "-option-", str2);
							pUVar11 = AottgChoiceControl.FindDeep(pUVar11, pSVar12);
							bVar8 = ((Object)pUVar11 != null);
							__this_06 = null;
							if (bVar8) {
								if (pUVar11 == null) break;
								__this_06 = pUVar11.GetComponent<Button>();
							}
							bVar8 = ((Object)__this_06 != null);
							if (bVar8) {
								__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChoiceControl.c__DisplayClass34_2));
								__this_02 = new Object();
								if (__this_02 == null) break;
								targetAddress = &__this_02.CS___8__locals2;
								__this_02.CS___8__locals2 = pGVar10;
								pGVar10 = __this_02.CS___8__locals2;
								if ((pGVar10 == null) ||(pGVar9 = this._options, pGVar9 == null)) break;
								uVar3 = pGVar10.index;
								if ((int)uVar3 < 0) {
	label_05395c80: ;
									bVar8 = false;
									__this_02.enabled = false;
								}
								else {
									pGVar6 = pGVar9._items;
									if (pGVar6 == null) break;
									uVar4 = (uint)pGVar6.Length;
									if ((int)uVar4 <= (int)uVar3) goto label_05395c80;
									uVar18 = uVar4 - 1;
									if ((int)uVar3 < (int)(uVar4 - 1)) {
										uVar18 = uVar3;
									}
									if (uVar4 <= uVar18) {
										throw new IndexOutOfRangeException();
									}
									if (pGVar6[(int)uVar18] ==null) break;
									bVar8 = (pGVar6[(int)uVar18].fields).enabled != false;
									__this_02.enabled = bVar8;
								}
								if (__this_06 == null) break;
								__this_06.interactable = bVar8;
								if (__this_02.enabled == false) {
									if (pUVar11 == null) break;
								}
								else {
									__this_00 = (UnityEvent)__this_06.m_OnClick;
									pGVar10 = *targetAddress;
									__this_03 = new UnityAction((object)pGVar10, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass34_1_WireOptions_b__0);
									if ((((__this_00 == null) ||(__this_00.AddListener(__this_03), pUVar11 == null)) ||(pUVar13 = pUVar11.gameObject, pUVar13 == null)) ||(pGVar14 = pUVar13.AddComponent<AottgChoiceOptionCancel>(), pGVar14 == null)) break;
									pGVar14._control = this;
									pUVar13 = pUVar11.gameObject;
									if (pUVar13 == null) break;
									pGVar15 = pUVar13.AddComponent<AottgChoiceOptionSelection>();
									if ((*targetAddress ==null) ||(pGVar15 == null)) break;
									iVar2 = ((*targetAddress).fields).index;
									pGVar15._owner = this;
									pGVar15._index = iVar2;
								}
								__this_04 = pUVar11.GetComponent<GisketchDropdownItemFeedback>();
								bVar8 = ((Object)__this_04 != null);
								if (bVar8) {
									if (__this_04 == null) break;
									__this_04._disabled = (bool)(__this_02.enabled ^ 1);
									__this_04.Refresh();
									bVar8 = false;
									__this_05 = new Func<bool>((object)__this_02, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass34_2_WireOptions_b__1);
									__this_04._pointerHoverAllowed = __this_05;
									if (__this_02.enabled != false) {
										if (*targetAddress ==null) break;
										bVar8 = ((*targetAddress).fields).index == this._selectedIndex;
									}
									__this_04._forced = bVar8;
									__this_04.Refresh();
								}
								pSVar5 = this._feedback;
								if (pSVar5 == null) break;
								piVar1 = &pSVar5._version;
								*piVar1 = *piVar1 + 1;
								pGVar7 = pSVar5._items;
								if (pGVar7 == null) break;
								uVar3 = pSVar5._size;
								if (uVar3 < (uint)pGVar7.Length) {
									pSVar5._size = uVar3 + 1;
									pGVar7[(int)uVar3] = __this_04;
									pGVar10 = *targetAddress;
								}
								else {
									pSVar5.AddWithResize((object)__this_04);
									pGVar10 = *targetAddress;
								}
								if (pGVar10 == null) break;
								iVar2 = pGVar10.index;
								pUVar13 = pUVar11.gameObject;
								label = pUVar11.GetComponentInChildren<TextMeshProUGUI>();
								this.RenderOption(iVar2, pUVar13, label, false);
								content = local_40;
								__this_01 = local_48;
							}
							uVar17 = (ulong)((int)local_38 + 1);
							pGVar9 = this._options;
						} while (pGVar9 != null);
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x5297350", Offset = "0x5296350", VA = "0x5297350")]
	internal void SelectFromNavigation(int index, GameObject option)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SelectFromNavigation): 1 lines keep C-only constructs
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;
		Vector3 UVar3;

		pGVar1 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar1._Mode_k__BackingField != 1) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar1 = typeof(GisketchFocusInputMode).static_fields;
				pGVar1._Mode_k__BackingField = 1;
				pSVar2 = pGVar1.Changed;
			}
			else {
				pGVar1._Mode_k__BackingField = 1;
				pSVar2 = pGVar1.Changed;
			}
			if (pSVar2 != null) {
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
			}
		}
		this.SetSelectedIndex(index);
		UVar3 = Input.mousePosition;
		this._pointerSelectionLocked = true;
		this._pointerLockPosition = UVar3._0_8_;
		GisketchScrollFocus.Reveal(option, 12.0);
		return;
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x5297980", Offset = "0x5296980", VA = "0x5297980")]
	internal void SelectFromPointer(int index, Vector2 pointerPosition)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SelectFromPointer): 4 lines keep C-only constructs
		Vector2 UVar1;
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar2;
		Action pSVar3;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		float fVar4;
		float fVar5;

		if (this._pointerSelectionLocked != false) {
			UVar1 = this._pointerLockPosition;
			fVar4 = pointerPosition.x - UVar1.x;
			fVar5 = pointerPosition.y - UVar1.y;
			if (fVar5 * fVar5 + fVar4 * fVar4 < 4.0) {
				return;
			}
			this._pointerSelectionLocked = false;
		}
		pGVar2 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar2._Mode_k__BackingField != 0) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar2 = typeof(GisketchFocusInputMode).static_fields;
				pGVar2._Mode_k__BackingField = 0;
				pSVar3 = pGVar2.Changed;
				method = extraout_RDX_02;
			}
			else {
				pGVar2._Mode_k__BackingField = 0;
				pSVar3 = pGVar2.Changed;
			}
			if (pSVar3 != null) {
				(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar3.method);
				method = extraout_RDX_01;
			}
		}
		this.SetSelectedIndex(index);
		return;
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x5297A70", Offset = "0x5296A70", VA = "0x5297A70")]
	internal bool CanUsePointerSelection(Vector2 pointerPosition)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$CanUsePointerSelection): clean
		Vector2 UVar1;
		float fVar2;
		float fVar3;

		if (this._pointerSelectionLocked != false) {
			UVar1 = this._pointerLockPosition;
			fVar2 = pointerPosition.x - UVar1.x;
			fVar3 = pointerPosition.y - UVar1.y;
			if (fVar3 * fVar3 + fVar2 * fVar2 < 4.0) {
				return false;
			}
			this._pointerSelectionLocked = false;
		}
		return true;
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x5295860", Offset = "0x5294860", VA = "0x5295860")]
	private void LockPointerSelection(Vector2 pointerPosition)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$LockPointerSelection): clean
		this._pointerSelectionLocked = true;
		this._pointerLockPosition = pointerPosition;
		return;
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x5297440", Offset = "0x5296440", VA = "0x5297440")]
	private void SetSelectedIndex(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetSelectedIndex): clean
		AottgChoiceOptions pGVar1;
		GisketchChoiceOptionDefinition[] pGVar2;
		bool bVar3;
		GisketchDropdownItemFeedback pGVar4;
		uint uVar5;
		uint uVar6;
		List<GisketchDropdownItemFeedback> pSVar8;

		pGVar1 = this._options;
		if (pGVar1 != null) {
			if (index < 0) {
				return;
			}
			pGVar2 = pGVar1._items;
			if (pGVar2 != null) {
				uVar6 = (uint)pGVar2.Length;
				if ((int)uVar6 <= index) {
					return;
				}
				uVar5 = uVar6 - 1;
				if (index < (int)(uVar6 - 1)) {
					uVar5 = index;
				}
				if (uVar6 <= uVar5) {
					throw new IndexOutOfRangeException();
				}
				if (pGVar2[(int)uVar5] != null) {
					if ((pGVar2[(int)uVar5].fields).enabled == false) {
						return;
					}
					this._selectedIndex = uVar5;
					pSVar8 = this._feedback;
					if (pSVar8 != null) {
						uVar6 = 0;
						do {
							if (pSVar8._size <= (int)uVar6) {
								return;
							}
							pGVar4 = pSVar8.get_Item(uVar6);
							bVar3 = ((Object)pGVar4 != null);
							if (bVar3) {
								pSVar8 = this._feedback;
								if (pSVar8 == null) break;
								pGVar4 = pSVar8.get_Item(uVar6);
								if (pGVar4 == null) break;
								pGVar4._hovered = false;
								pGVar4.Refresh();
								pSVar8 = this._feedback;
								if (pSVar8 == null) break;
								pGVar4 = pSVar8.get_Item(uVar6);
								if (pGVar4 == null) break;
								pGVar4._forced = uVar6 == this._selectedIndex;
								pGVar4.Refresh();
							}
							uVar6 = uVar6 + 1;
							pSVar8 = this._feedback;
						} while (pSVar8 != null);
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x5297AC0", Offset = "0x5296AC0", VA = "0x5297AC0")]
	internal void SelectFromClick(int index, GisketchOverlayManager overlays)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SelectFromClick): clean
		if (GisketchFocusInputMode._Mode_k__BackingField == 1) {
			index = this._selectedIndex;
		}
		else if (this == null) {
			throw new NullReferenceException();
		}
		this.Select(index, overlays);
		return;
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x5295F50", Offset = "0x5294F50", VA = "0x5295F50")]
	private void FocusSelectedOption(GameObject content)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$FocusSelectedOption): clean
		uint uVar1;
		uint uVar2;
		AottgChoiceOptions pGVar3;
		GisketchChoiceOptionDefinition[] pGVar4;
		uint uVar5;
		bool bVar6;
		uint uVar7;
		Transform pUVar8;
		String str2;
		String pSVar9;
		EventSystem pUVar10;
		GameObject pUVar11;
		uint uVar12;
		int iVar13;
		uint uVar14;
		int local_2c;

		pGVar3 = this._options;
		if (pGVar3 == null) goto label_053961e5;
		uVar1 = this._selectedIndex;
		pGVar4 = pGVar3._items;
		if ((int)uVar1 < 0) {
			if (pGVar4 == null) goto label_053961e5;
	label_05396165: ;
			uVar5 = (uint)pGVar4.Length;
			uVar14 = uVar5 - 1;
			if (0 < (int)uVar5) {
				iVar13 = 1;
				do {
					uVar12 = (int)(uVar1 + uVar5 + iVar13) % (int)uVar5;
					if (-1 < (int)uVar12) {
						uVar7 = uVar12;
						if ((int)uVar14 <= (int)uVar12) {
							uVar7 = uVar14;
						}
						if (uVar5 <= uVar7) goto label_053961ea;
						if (pGVar4[(int)uVar7] == null) goto label_053961e5;
						if ((pGVar4[(int)uVar7].fields).enabled != false) goto label_053961bf;
					}
					iVar13 = iVar13 + 1;
				} while (iVar13 <= (int)uVar5);
			}
			if ((int)uVar1 < (int)uVar14) {
				uVar14 = uVar1;
			}
			uVar12 = 0;
			if (-1 < (int)uVar1) {
				uVar12 = uVar14;
			}
	label_053961bf: ;
			this._selectedIndex = uVar12;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (pGVar4 == null) goto label_053961e5;
			uVar5 = (uint)pGVar4.Length;
			if ((int)uVar5 <= (int)uVar1) goto label_05396165;
			uVar14 = uVar5 - 1;
			if ((int)uVar1 < (int)(uVar5 - 1)) {
				uVar14 = uVar1;
			}
			if (uVar5 <= uVar14) {
	label_053961ea: ;
				throw new IndexOutOfRangeException();
			}
			if (pGVar4[(int)uVar14] == null) goto label_053961e5;
			if ((pGVar4[(int)uVar14].fields).enabled == false) goto label_05396165;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pUVar8 = null;
		bVar6 = ((Object)content != null);
		if (bVar6) {
			if (content == null) goto label_053961e5;
			pUVar8 = content.transform;
		}
		local_2c = this._selectedIndex;
		pSVar9 = this._id;
		str2 = local_2c.ToString();
		pSVar9 = String.Concat(pSVar9, "-option-", str2);
		pUVar8 = AottgChoiceControl.FindDeep(pUVar8, pSVar9);
		bVar6 = ((Object)pUVar8 == null);
		if (!bVar6) {
			pUVar10 = EventSystem.current;
			bVar6 = ((Object)pUVar10 == null);
			if (!bVar6) {
				pUVar10 = EventSystem.current;
				if ((pUVar8 == null) ||(pUVar11 = pUVar8.gameObject , pUVar10 == null)) {
	label_053961e5: ;
					throw new NullReferenceException();
				}
				pUVar10.SetSelectedGameObject(pUVar11);
				pUVar11 = pUVar8.gameObject;
				GisketchScrollFocus.Reveal(pUVar11, 12.0);
			}
		}
		return;
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x5297B20", Offset = "0x5296B20", VA = "0x5297B20")]
	private void Select(int index, GisketchOverlayManager overlays)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Select): clean
		uint uVar1;
		AottgChoiceOptions pGVar2;
		GisketchChoiceOptionDefinition[] pGVar3;
		Object x;
		bool bVar4;
		EventSystem pUVar5;
		uint uVar6;

		pGVar2 = this._options;
		if (pGVar2 == null) {
	label_05397c8e: ;
			throw new NullReferenceException();
		}
		if (-1 < index) {
			pGVar3 = pGVar2._items;
			if (pGVar3 == null) goto label_05397c8e;
			uVar1 = (uint)pGVar3.Length;
			if (index < (int)uVar1) {
				uVar6 = uVar1 - 1;
				if (index < (int)(uVar1 - 1)) {
					uVar6 = index;
				}
				if (uVar1 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				if (pGVar3[(int)uVar6] == null) goto label_05397c8e;
				if ((pGVar3[(int)uVar6].fields).enabled != false) {
					bVar4 = this.SetIndex(index, 0);
					if (!bVar4) {
						this.NotifyChanged(0);
					}
					if (overlays != null) {
						overlays.CloseTop(true);
					}
					pUVar5 = EventSystem.current;
					bVar4 = ((Object)pUVar5 != null);
					if (bVar4) {
						x = (Object)this._opener;
						bVar4 = (x != null);
						if (bVar4) {
							pUVar5 = EventSystem.current;
							if (pUVar5 != null) {
								pUVar5.SetSelectedGameObject(this._opener);
								return;
							}
							goto label_05397c8e;
						}
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x5295130", Offset = "0x5294130", VA = "0x5295130")]
	private bool SetIndex(int index, GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetIndex): clean
		uint uVar1;
		AottgChoiceOptions pGVar2;
		GisketchChoiceOptionDefinition[] pGVar3;
		uint uVar4;
		uint uVar5;

		pGVar2 = this._options;
		if ((pGVar2 == null) ||(pGVar3 = pGVar2._items, pGVar3 == null)) {
	label_053951ad: ;
			throw new NullReferenceException();
		}
		uVar1 = (uint)pGVar3.Length;
		uVar5 = uVar1 - 1;
		uVar4 = uVar5;
		if (index < (int)uVar5) {
			uVar4 = index;
		}
		if (index < 0) {
			uVar4 = 0;
		}
		if ((-1 < (int)uVar4) && ((int)uVar4 < (int)uVar1)) {
			if ((int)uVar4 < (int)uVar5) {
				uVar5 = uVar4;
			}
			if (uVar1 <= uVar5) {
				throw new IndexOutOfRangeException();
			}
			if (pGVar3[(int)uVar5] == null) goto label_053951ad;
			if (((pGVar3[(int)uVar5].fields).enabled != false) && (uVar4 != this._index)) {
				this._index = uVar4;
				this.RefreshLabel();
				this.NotifyChanged(source);
				return true;
			}
		}
		return false;
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x5294E70", Offset = "0x5293E70", VA = "0x5294E70")]
	private int IndexOf(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$IndexOf): 1 lines keep C-only constructs
		uint uVar1;
		GisketchChoiceOptionDefinition[] pGVar2;
		GisketchChoiceOptionDefinition pGVar3;
		bool bVar4;
		AottgChoiceOptions pGVar5;
		uint uVar6;
		GisketchChoiceOptionDefinition pGVar7;
		String a;
		uint uVar8;

		pGVar5 = this._options;
		if (pGVar5 != null) {
			uVar8 = 0;
			do {
				pGVar2 = pGVar5._items;
				if (pGVar2 == null) break;
				uVar1 = (uint)pGVar2.Length;
				if ((int)uVar1 <= (int)uVar8) {
					return 0;
				}
				uVar6 = uVar1 - 1;
				if ((int)uVar8 < (int)(uVar1 - 1)) {
					uVar6 = uVar8;
				}
				if (uVar1 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				pGVar3 = pGVar2[(int)uVar6];
				if (pGVar3 == null) break;
				bVar4 = String.IsNullOrEmpty(pGVar3.value);
				if (bVar4) {
					a = pGVar3.text;
					if (a == null) {
						pGVar7 = *(GisketchChoiceOptionDefinition*)(g_data_07556758 + 0xb8);
						goto label_05394f04;
					}
				}
				else {
					pGVar7 = &pGVar3.fields;
	label_05394f04: ;
					a = pGVar7.value;
				}
				bVar4 = (a == value);
				if (bVar4) {
					return uVar8;
				}
				uVar8 = uVar8 + 1;
				pGVar5 = this._options;
			} while (pGVar5 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x5294F40", Offset = "0x5293F40", VA = "0x5294F40")]
	private void RefreshLabel()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$RefreshLabel): 1 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		int index;
		GisketchNodeDefinition pGVar4;
		AottgChoiceOptions pGVar5;
		GisketchChoiceOptionDefinition[] pGVar6;
		GisketchChoiceOptionDefinition pGVar7;
		TextMeshProUGUI pTVar8;
		bool bVar9;
		String pSVar10;
		GameObject root;
		uint uVar11;
		GisketchChoiceOptionDefinition pGVar12;

		pGVar4 = this._node;
		if (pGVar4 != null) {
			pGVar5 = this._options;
			if ((pGVar5 == null) ||(pGVar6 = pGVar5._items, pGVar6 == null)) goto label_05395093;
			uVar2 = this._index;
			uVar3 = (uint)pGVar6.Length;
			uVar1 = uVar3 - 1;
			if ((int)uVar2 < (int)uVar1) {
				uVar1 = uVar2;
			}
			uVar11 = 0;
			if (-1 < (int)uVar2) {
				uVar11 = uVar1;
			}
			if (uVar3 <= uVar11) {
				throw new IndexOutOfRangeException();
			}
			pGVar7 = pGVar6[(int)uVar11];
			if (pGVar7 == null) goto label_05395093;
			bVar9 = String.IsNullOrEmpty(pGVar7.value);
			if (bVar9) {
				pSVar10 = pGVar7.text;
				if (pSVar10 == null) {
					pGVar12 = *(GisketchChoiceOptionDefinition*)(g_data_07556758 + 0xb8);
					goto label_05394fed;
				}
			}
			else {
				pGVar12 = &pGVar7.fields;
	label_05394fed: ;
				pSVar10 = pGVar12.value;
			}
			pGVar4.value = pSVar10;
		}
		pTVar8 = this._label;
		bVar9 = ((Object)pTVar8 != null);
		if (!bVar9) {
			return;
		}
		pGVar5 = this._options;
		if (pGVar5 != null) {
			pTVar8 = this._label;
			pSVar10 = pGVar5.Text(this._index);
			if (pTVar8 != null) {
				pTVar8.set_text(pSVar10);
				pTVar8 = this._label;
				if (pTVar8 != null) {
					index = this._index;
					root = pTVar8.gameObject;
					this.RenderOption(index, root, this._label, true);
					return;
				}
			}
		}
	label_05395093: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x5297030", Offset = "0x5296030", VA = "0x5297030")]
	internal void RenderOption(int index, GameObject root, TextMeshProUGUI label, bool closedValue)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$RenderOption): 1 lines keep C-only constructs
		uint uVar1;
		GisketchNodeDefinition pGVar2;
		String key;
		AottgChoiceOptions pGVar3;
		GisketchChoiceOptionDefinition[] pGVar4;
		GisketchChoiceOptionDefinition pGVar5;
		bool bVar6;
		GisketchChoiceOptionRenderContext context;
		String pSVar7;
		uint uVar8;
		uint uVar9;
		GisketchChoiceOptionDefinition pGVar10;

		pGVar2 = this._node;
		if (((pGVar2 == null) ||(bVar6 = String.IsNullOrEmpty(pGVar2.choiceOptionRenderer))) || (this._options == null)) {
			return;
		}
		bVar6 = ((Object)label == null);
		if (bVar6) {
			return;
		}
		if (!closedValue) {
			pGVar3 = this._options;
			if (pGVar3 == null) goto label_0539733c;
			if (index < 0) {
				return;
			}
			pGVar4 = pGVar3._items;
			if (pGVar4 == null) goto label_0539733c;
			uVar1 = (uint)pGVar4.Length;
			if ((int)uVar1 <= index) {
				return;
			}
			uVar9 = uVar1 - 1;
			if (index < (int)(uVar1 - 1)) {
				uVar9 = index;
			}
			if (uVar1 <= uVar9) goto label_05397341;
			if (pGVar4[(int)uVar9] == null) goto label_0539733c;
			if ((pGVar4[(int)uVar9].fields).enabled == false) {
				return;
			}
		}
		pGVar2 = this._node;
		if (pGVar2 == null) goto label_0539733c;
		key = pGVar2.choiceOptionRenderer;
		context = new GisketchChoiceOptionRenderContext();
		if (context == null) goto label_0539733c;
		context.Root = root;
		context.Label = label;
		pGVar3 = this._options;
		if ((pGVar3 == null) ||(pGVar4 = pGVar3._items, pGVar4 == null)) goto label_0539733c;
		uVar9 = (uint)pGVar4.Length;
		uVar1 = uVar9 - 1;
		if (index < (int)uVar1) {
			uVar1 = index;
		}
		uVar8 = 0;
		if (-1 < index) {
			uVar8 = uVar1;
		}
		if (uVar9 <= uVar8) goto label_05397341;
		context.Option = pGVar4[(int)uVar8];
		pGVar3 = this._options;
		if (pGVar3 == null) goto label_0539733c;
		pSVar7 = pGVar3.Text(index);
		context.Text = pSVar7;
		pGVar3 = this._options;
		if ((pGVar3 == null) ||(pGVar4 = pGVar3._items, pGVar4 == null)) goto label_0539733c;
		uVar9 = (uint)pGVar4.Length;
		uVar1 = uVar9 - 1;
		if (index < (int)uVar1) {
			uVar1 = index;
		}
		uVar8 = 0;
		if (-1 < index) {
			uVar8 = uVar1;
		}
		if (uVar9 <= uVar8) goto label_05397341;
		pGVar5 = pGVar4[(int)uVar8];
		if (pGVar5 == null) goto label_0539733c;
		bVar6 = String.IsNullOrEmpty(pGVar5.value);
		if (bVar6) {
			pSVar7 = pGVar5.text;
			if (pSVar7 == null) {
				pGVar10 = *(GisketchChoiceOptionDefinition*)(g_data_07556758 + 0xb8);
				goto label_0539729a;
			}
		}
		else {
			pGVar10 = &pGVar5.fields;
	label_0539729a: ;
			pSVar7 = pGVar10.value;
		}
		context.Value = pSVar7;
		context.Index = index;
		pGVar3 = this._options;
		if (pGVar3 == null) {
	label_0539733c: ;
			throw new NullReferenceException();
		}
		if (-1 < index) {
			pGVar4 = pGVar3._items;
			if (pGVar4 == null) goto label_0539733c;
			uVar1 = (uint)pGVar4.Length;
			if (index < (int)uVar1) {
				uVar9 = uVar1 - 1;
				if (index < (int)(uVar1 - 1)) {
					uVar9 = index;
				}
				if (uVar1 <= uVar9) {
	label_05397341: ;
					throw new IndexOutOfRangeException();
				}
				if (pGVar4[(int)uVar9] == null) goto label_0539733c;
				bVar6 = (pGVar4[(int)uVar9].fields).enabled;
				goto label_053972f6;
			}
		}
		bVar6 = false;
	label_053972f6: ;
		context.Enabled = bVar6;
		context.Selected = this._index == index;
		context.ClosedValue = closedValue;
		if ((typeof(GisketchChoiceOptionRenderer)._2).cctor_finished_or_no_cctor == 0) {
		}
		GisketchChoiceOptionRenderer.TryRender(key, context);
		return;
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x5297CA0", Offset = "0x5296CA0", VA = "0x5297CA0")]
	private void NotifyChanged(GisketchActionInputSource source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$NotifyChanged): 3 lines keep C-only constructs
		GisketchNodeDefinition pGVar1;
		object obj;
		String elementId;
		String actionId;
		GisketchActionContext context;
		bool bVar4;
		GameObject gameObject;
		GisketchActionContext local_68;
		String local_48;
		GameObject pUStack_40;
		GisketchNodeDefinition local_38;
		int iStack_30;
		uint uStack_2c;

		pGVar1 = this._node;
		if (pGVar1 != null) {
			bVar4 = String.IsNullOrEmpty(pGVar1.action);
			if ((!bVar4) && (obj = (object)this._actions, obj != null)) {
				pGVar1 = this._node;
				if (pGVar1 == null) {
					throw new NullReferenceException();
				}
				elementId = pGVar1.id;
				actionId = pGVar1.action;
				gameObject = this.gameObject;
				local_68.Node = null;
				local_68.InputSource = 0;
				local_68._28_4_ = 0;
				local_68.ElementId = null;
				local_68.GameObject = null;
				local_68 = new GisketchActionContext(elementId, gameObject, this._node, source);
				local_38 = local_68.Node;
				iStack_30 = local_68.InputSource;
				uStack_2c = local_68._28_4_;
				local_48 = local_68.ElementId;
				pUStack_40 = local_68.GameObject;
				context.GameObject = pUStack_40;
				context.ElementId = local_48;
				context.Node = local_38;
				context.InputSource = iStack_30;
				context._28_4_ = uStack_2c;
				obj.HandleAction(actionId, context);
			}
		}
		return;
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x52953E0", Offset = "0x52943E0", VA = "0x52953E0")]
	private void SetArrow(string icon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetArrow): clean
		Object pUVar1;
		GameObject pUVar2;
		bool bVar3;
		Transform pUVar4;
		Image __this_00;
		Sprite value;

		pUVar1 = (Object)this._arrow;
		pUVar4 = null;
		bVar3 = (pUVar1 != null);
		if (bVar3) {
			pUVar2 = this._arrow;
			if ((pUVar2 == null) ||(pUVar4 = pUVar2.transform, pUVar4 == null)) goto label_05395566;
			pUVar4 = pUVar4.Find("AoTTG Button Icon");
		}
		bVar3 = ((Object)pUVar4 != null);
		if (bVar3) {
			if (pUVar4 == null) goto label_05395566;
			__this_00 = pUVar4.GetComponent<Image>();
		}
		else {
			pUVar1 = (Object)this._arrow;
			__this_00 = null;
			bVar3 = (pUVar1 != null);
			if (bVar3) {
				pUVar2 = this._arrow;
				if (pUVar2 == null) goto label_05395566;
				__this_00 = pUVar2.GetComponentInChildren<Image>();
			}
		}
		bVar3 = ((Object)__this_00 != null);
		if (!bVar3) {
			return;
		}
		value = GisketchIconLoader.Load(icon);
		if (__this_00 != null) {
			__this_00.sprite = value;
			return;
		}
	label_05395566: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x5296A10", Offset = "0x5295A10", VA = "0x5296A10")]
	private string OptionId(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$OptionId): clean
		String str2;
		String pSVar1;
		int local_c;

		local_c = index;
		pSVar1 = this._id;
		str2 = local_c.ToString();
		pSVar1 = String.Concat(pSVar1, "-option-", str2);
		return pSVar1;
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x5296C70", Offset = "0x5295C70", VA = "0x5296C70")]
	private static Transform FindDeep(Transform root, string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$FindDeep): 6 lines keep C-only constructs
		byte bVar1;
		bool bVar4;
		String a;
		Transform pUVar6;
		object pIVar7;
		MethodInfo extraout_RDX;
		MethodInfo method_00;
		object local_58;
		object local_50;
		byte local_40;
		object* local_38;

		local_50 = null;
		bVar4 = ((Object)root == null);
		pUVar6 = null;
		if (!bVar4) {
			if (root == null) {
				throw new NullReferenceException();
			}
			a = root.name;
			bVar4 = (a == name);
			if (bVar4) {
				pUVar6 = root;
			}
			else {
				local_58 = (object)root.GetEnumerator();
				local_40 = (byte)&local_58;
				local_38 = &local_50;
				do {
					pIVar7 = local_58;
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					bVar4 = pIVar7.Dispose();
					pIVar7 = local_58;
					if (!bVar4) {
						pUVar6 = null;
						break;
					}
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					pUVar6 = (Transform)pIVar7.Dispose();
					method_00 = extraout_RDX;
					if (pUVar6 != null) {
						bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
						method_00 = (MethodInfo)(ulong)bVar1;
						if (((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||((pUVar6.klass._2).typeHierarchy[(long)&method_00[-1].field_0x57] !=typeof(Transform))) {
							throw new InvalidCastException();
						}
					}
					pUVar6 = AottgChoiceControl.FindDeep(pUVar6, name);
					bVar4 = ((Object)pUVar6 != null);
				} while (!bVar4);
				pIVar7 = (local_58 as IDisposable);
				if (pIVar7 != null) {
					local_50 = pIVar7;
					pIVar7.Dispose();
				}
			}
		}
		return pUVar6;
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x5297EC0", Offset = "0x5296EC0", VA = "0x5297EC0")]
	public AottgChoiceControl()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c (Gisketch.Aottg2UI.Actions.AottgChoiceControl$$.ctor): 1 lines keep C-only constructs
		List<GisketchDropdownItemFeedback> __this_00;

		this._maxVisibleItems = 8;
		__this_00 = il2cpp_codegen_object_new(typeof(List<GisketchDropdownItemFeedback>)) ;
		__this_00 = new List<object>();
		this._feedback = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c.

	// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass29_0$$.ctor: clean
	private void c__DisplayClass29_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass34_0$$.ctor: clean
	private void c__DisplayClass34_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass34_1$$.ctor: clean
	private void c__DisplayClass34_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass34_2$$.ctor: clean
	private void c__DisplayClass34_2__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass29_0$$<Open>b__0: clean
	private void c__DisplayClass29_0__Open_b__0()
	{
		AottgChoiceControl __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		if (this.version == __this_00._openVersion) {
			__this_00.SetArrow("down");
			return;
		}
		return;
	}

	// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass34_1$$<WireOptions>b__0: clean
	private void c__DisplayClass34_1__WireOptions_b__0()
	{
		AottgChoiceControl.c__DisplayClass34_0 pGVar1;
		AottgChoiceControl __this_00;
		GisketchOverlayManager overlays;
		int index;

		pGVar1 = this.CS___8__locals1;
		if ((pGVar1 == null) ||(__this_00 = pGVar1.__4__this, __this_00 == null)) {
			throw new NullReferenceException();
		}
		overlays = pGVar1.overlays;
		index = this.index;
		if (GisketchFocusInputMode._Mode_k__BackingField == 1) {
			index = __this_00._selectedIndex;
		}
		__this_00.Select(index, overlays);
		return;
	}

	// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass34_2$$<WireOptions>b__1: clean
	private bool c__DisplayClass34_2__WireOptions_b__1()
	{
		Vector2 UVar1;
		AottgChoiceControl.c__DisplayClass34_1 pGVar2;
		AottgChoiceControl.c__DisplayClass34_0 pGVar3;
		AottgChoiceControl pGVar4;
		float fVar5;
		float fVar6;
		Vector3 UVar7;

		if (this.enabled == false) {
			return false;
		}
		pGVar2 = this.CS___8__locals2;
		if ((pGVar2 != null) &&(pGVar3 = pGVar2.CS___8__locals1, pGVar3 != null)) {
			pGVar4 = pGVar3.__4__this;
			UVar7 = Input.mousePosition;
			if (pGVar4 != null) {
				if (pGVar4._pointerSelectionLocked != false) {
					UVar1 = pGVar4._pointerLockPosition;
					fVar5 = UVar7.x - UVar1.x;
					fVar6 = UVar7.y - UVar1.y;
					if (fVar6 * fVar6 + fVar5 * fVar5 < 4.0) {
						return false;
					}
					pGVar4._pointerSelectionLocked = false;
				}
				return true;
			}
		}
		throw new NullReferenceException();
	}
}
