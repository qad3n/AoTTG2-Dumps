// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Virtualization;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001B5")]
internal sealed class AottgVirtualSettingsScrollCategoryRuntime : MonoBehaviour, IGisketchVirtualScrollSource, IGisketchVirtualScrollSpacingSource
{
	[Token(Token = "0x4000937")]
	public const string NodeType = "AottgVirtualSettingsScrollCategory";

	[Token(Token = "0x4000938")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000939")]
	[FieldOffset(Offset = "0x20")]
	private GisketchNodeDefinition[] _items;

	[Token(Token = "0x400093A")]
	[FieldOffset(Offset = "0x28")]
	private GisketchBuildContext _context;

	[Token(Token = "0x400093B")]
	[FieldOffset(Offset = "0x30")]
	private GisketchView _view;

	[Token(Token = "0x400093C")]
	[FieldOffset(Offset = "0x38")]
	private GisketchVirtualScrollRuntime _virtualScroll;

	[Token(Token = "0x400093D")]
	[FieldOffset(Offset = "0x40")]
	private float _initialScrollOffset;

	[Token(Token = "0x400093E")]
	[FieldOffset(Offset = "0x44")]
	private float _paddingTop;

	[Token(Token = "0x17000122")]
	public int ItemCount
	{
		[Token(Token = "0x600099B")]
		[Address(RVA = "0x5D58730", Offset = "0x5D57730", VA = "0x5D58730", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$get_ItemCount): clean
			GisketchNodeDefinition[] pGVar1;

			pGVar1 = this._items;
			if (pGVar1 == null) {
				return 0;
			}
			return (int32_t)pGVar1.Length;
		}
	}

	[Token(Token = "0x17000123")]
	public GisketchVirtualScrollMetrics Metrics
	{
		[Token(Token = "0x600099C")]
		[Address(RVA = "0x5D58740", Offset = "0x5D57740", VA = "0x5D58740", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$get_Metrics): clean
			float paddingTop;

			paddingTop = this._paddingTop;
			__return_storage_ptr__.OverscanRows = 0;
			__return_storage_ptr__.PaddingLeft = 0.0;
			__return_storage_ptr__.PaddingRight = 0.0;
			__return_storage_ptr__.PaddingTop = 0.0;
			__return_storage_ptr__.ItemHeight = 0.0;
			__return_storage_ptr__.Gap = 0.0;
			__return_storage_ptr__.ViewportHeight = 0.0;
			__return_storage_ptr__.VirtualizationThreshold = 0;
			__return_storage_ptr__.PaddingBottom = 0.0;
			__return_storage_ptr__ = new GisketchVirtualScrollMetrics(72.0, 6.0, 1080.0, 0x14, 3, 582.0, 88.0, paddingTop, 188.0);
			return __return_storage_ptr__;
		}
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x5D58640", Offset = "0x5D57640", VA = "0x5D58640")]
	public static void RegisterFactory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$RegisterFactory): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_07548689 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07548689 = true;
		}
		if (AottgVirtualSettingsScrollCategoryRuntime. _registered != false) {
			return;
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_BuildRuntime);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("AottgVirtualSettingsScrollCategory", __this_00);
		AottgVirtualSettingsScrollCategoryRuntime. _registered = true;
		return;
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x5D587A0", Offset = "0x5D577A0", VA = "0x5D587A0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$BuildRuntime): clean
		bool bVar1;
		AottgVirtualSettingsScrollCategoryRuntime __this;

		bVar1 = ((Object)go == null);
		if (bVar1) {
			return true;
		}
		if ((go == null) ||(__this = go.AddComponent<AottgVirtualSettingsScrollCategoryRuntime>(), __this == null)) {
			throw new NullReferenceException();
		}
		__this.Setup(node, context, view);
		return true;
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x5D58850", Offset = "0x5D57850", VA = "0x5D58850")]
	private void Setup(GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$Setup): clean
		String pSVar1;
		CultureInfo pSVar2;
		String[] pSVar3;
		GameObject __this_00;
		GisketchVirtualScrollRuntime pGVar4;

		if (node == null) {
			if (this == null) goto label_05e58a27;
			this._items = null;
			this._context = context;
			this._view = view;
		}
		else {
			if (this == null) goto label_05e58a27;
			this._items = node.deferredChildren;
			this._context = context;
			this._view = view;
			pSVar3 = node.options;
			if (pSVar3 != null) {
				if (pSVar3.Length != 0) {
					if ((int)pSVar3.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					pSVar1 = pSVar3[0];
					pSVar2 = CultureInfo.InvariantCulture;
					Single.TryParse(pSVar1, 0xa7, (IFormatProvider)pSVar2, ref this._initialScrollOffset);
					pSVar3 = node.options;
					if (pSVar3 == null) goto label_05e589c7;
				}
				if (1 < (int)pSVar3.Length) {
					pSVar1 = pSVar3[1];
					pSVar2 = CultureInfo.InvariantCulture;
					Single.TryParse(pSVar1, 0xa7, (IFormatProvider)pSVar2, ref this._paddingTop);
				}
			}
		}
	label_05e589c7: ;
		__this_00 = this.gameObject;
		if (__this_00 != null) {
			pGVar4 = __this_00.AddComponent<GisketchVirtualScrollRuntime>();
			this._virtualScroll = pGVar4;
			if ((context != null) &&(pGVar4 = this._virtualScroll, pGVar4 != null)) {
				pGVar4.Setup((IGisketchVirtualScrollSource)this, context.Theme, 48.0);
				return;
			}
		}
	label_05e58a27: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x5D58A40", Offset = "0x5D57A40", VA = "0x5D58A40")]
	private void Start()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$Start): clean
		GisketchVirtualScrollRuntime pGVar1;
		bool bVar2;

		pGVar1 = this._virtualScroll;
		bVar2 = ((Object)pGVar1 == null);
		if ((!bVar2) && (0.0 < this._initialScrollOffset)) {
			Canvas.ForceUpdateCanvases();
			pGVar1 = this._virtualScroll;
			if (pGVar1 != null) {
				pGVar1.SetScrollOffset(this._initialScrollOffset);
				pGVar1 = this._virtualScroll;
				if (pGVar1 != null) {
					pGVar1.Refresh(true);
					return;
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x5D58AE0", Offset = "0x5D57AE0", VA = "0x5D58AE0", Slot = "6")]
	public string ItemId(int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$ItemId): clean
		uint uVar1;
		GisketchNodeDefinition[] pGVar2;

		if ((itemIndex < 0) ||(pGVar2 = this._items, pGVar2 == null)) {
			return null;
		}
		uVar1 = (uint)pGVar2.Length;
		if (itemIndex < (int)uVar1) {
			if (uVar1 <= (uint)itemIndex) {
				throw new IndexOutOfRangeException();
			}
			if (pGVar2[(uint)itemIndex] != null) {
				return (pGVar2[(uint)itemIndex].fields).id;
			}
		}
		return null;
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x5D58B50", Offset = "0x5D57B50", VA = "0x5D58B50", Slot = "13")]
	public float GapBefore(int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$GapBefore): clean
		uint uVar1;
		GisketchNodeDefinition[] pGVar2;
		bool bVar3;

		if (((-1 < itemIndex) &&(pGVar2 = this._items, pGVar2 != null) ) && (uVar1 = (uint)pGVar2.Length, itemIndex < (int)uVar1)) {
			if (uVar1 <= (uint)itemIndex) {
				throw new IndexOutOfRangeException();
			}
			if ((pGVar2[(uint)itemIndex] != null) &&(bVar3 = ((pGVar2[(uint)itemIndex].fields).value == "SettingsSpacingBefore"))) {
				return 20.0;
			}
		}
		return 0.0;
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x5D58BE0", Offset = "0x5D57BE0", VA = "0x5D58BE0", Slot = "7")]
	public GameObject CreateItem(Transform parent, int slotIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$CreateItem): 1 lines keep C-only constructs
		Il2CppType handle;
		String pSVar1;
		Type[] components;
		Type obj;
		object pIVar2;
		GameObject __this_00;
		Transform __this_01;
		CanvasGroup __this_02;
		int iStack_24;

		pSVar1 = iStack_24.ToString();
		pSVar1 = String.Concat("settings-virtual-row-", pSVar1);
		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) {
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this_00 = new GameObject(pSVar1, components);
			if (__this_00 != null) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					__this_01.SetParent(parent, false);
					__this_02 = __this_00.AddComponent<CanvasGroup>();
					if (__this_02 != null) {
						__this_02.alpha = 0.0;
						return __this_00;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x5D58D80", Offset = "0x5D57D80", VA = "0x5D58D80", Slot = "8")]
	public void BindItem(GameObject item, int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$BindItem): clean
		uint uVar1;
		GisketchNodeDefinition[] pGVar2;
		GisketchNodeDefinition node;
		GisketchBuildContext context;
		GisketchView view;
		bool bVar3;
		CanvasGroup pUVar4;
		String pSVar5;
		Transform parent;
		Object x;
		RectTransform rect;
		uint uStack_3c;
		CanvasGroup pUStack_38;

		uStack_3c = itemIndex;
		bVar3 = ((Object)item == null);
		if (bVar3) {
			return;
		}
		if (itemIndex < 0) {
			return;
		}
		pGVar2 = this._items;
		if (pGVar2 == null) {
			return;
		}
		uVar1 = (uint)pGVar2.Length;
		if ((int)uVar1 <= itemIndex) {
			return;
		}
		if (uVar1 <= (uint)itemIndex) goto label_05e59014;
		if (pGVar2[(uint)itemIndex] == null) {
			return;
		}
		if ((item == null) ||((pUVar4 = item.GetComponent<CanvasGroup>(), pUVar4 == null &&(pUVar4 = item.AddComponent<CanvasGroup>(), pUVar4 == null)))) goto label_05e59019;
		pUVar4.alpha = 0.0;
		AottgVirtualSettingsScrollCategoryRuntime.ClearItem(item);
		pGVar2 = this._items;
		if ((pGVar2 == null) ||(uVar1 = (uint)pGVar2.Length, (int)uVar1 <= itemIndex)) {
	label_05e58ece: ;
			pSVar5 = uStack_3c.ToString();
			pSVar5 = String.Concat("settings-virtual-row-", pSVar5);
		}
		else {
			if (uVar1 <= (uint)itemIndex) goto label_05e59014;
			if ((pGVar2[(uint)itemIndex] == null) ||(pSVar5 = (pGVar2[(uint)itemIndex].fields).id, pSVar5 == null)) goto label_05e58ece;
		}
		item.name = pSVar5;
		pGVar2 = this._items;
		if (pGVar2 == null) {
	label_05e59019: ;
			throw new NullReferenceException();
		}
		pUStack_38 = pUVar4;
		if ((uint)pGVar2.Length <= uStack_3c) {
	label_05e59014: ;
			throw new IndexOutOfRangeException();
		}
		node = pGVar2[(int)uStack_3c];
		parent = item.transform;
		context = this._context;
		view = this._view;
		x = (Object)GisketchScreenBuilder.BuildNodeInto(node, parent, context, view);
		rect = null;
		bVar3 = (x != null);
		pUVar4 = pUStack_38;
		if (bVar3) {
			if (x == null) goto label_05e59019;
			rect = x.GetComponent<RectTransform>();
		}
		AottgVirtualSettingsScrollCategoryRuntime.Stretch(rect);
		bVar3 = (x != null);
		if (bVar3) {
			GisketchScreenBuilder.SettleLayout((GameObject)x, 1);
		}
		pUVar4.alpha = 1.0;
		return;
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x5D592A0", Offset = "0x5D582A0", VA = "0x5D592A0", Slot = "9")]
	public void UnbindItem(GameObject item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$UnbindItem): clean
		GisketchView __this_00;
		bool bVar1;

		bVar1 = ((Object)item == null);
		if (bVar1) {
			return;
		}
		__this_00 = this._view;
		if (__this_00 != null) {
			__this_00.UnregisterSubtree(item);
		}
		AottgVirtualSettingsScrollCategoryRuntime.ClearItem(item);
		if (item == null) {
			throw new NullReferenceException();
		}
		item.name = "settings-virtual-row";
		return;
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x5D59350", Offset = "0x5D58350", VA = "0x5D59350", Slot = "10")]
	public bool CanRecycleItem(GameObject item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$CanRecycleItem): clean
		return true;
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x5D59360", Offset = "0x5D58360", VA = "0x5D59360", Slot = "11")]
	public bool TryGetSearchTargetItemIndex(string targetId, out int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$TryGetSearchTargetItemIndex): clean
		uint uVar1;
		bool bVar2;
		GisketchNodeDefinition[] pGVar3;
		ulong uVar4;

		*itemIndex = -1;
		bVar2 = String.IsNullOrEmpty(targetId);
		if ((!bVar2) &&(pGVar3 = this._items, pGVar3 != null)) {
			uVar4 = 0;
			while(true) {
				uVar1 = (uint)pGVar3.Length;
				if ((long)(int)uVar1 <= (long)uVar4) break;
				if (uVar1 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				bVar2 = AottgVirtualSettingsScrollCategoryRuntime.ContainsId(pGVar3[uVar4], targetId);
				if (bVar2) {
					*itemIndex = (int32_t)uVar4;
					return true;
				}
				uVar4 = uVar4 + 1;
				pGVar3 = this._items;
				if (pGVar3 == null) {
					throw new NullReferenceException();
				}
			}
		}
		return false;
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x5D594F0", Offset = "0x5D584F0", VA = "0x5D594F0", Slot = "12")]
	public bool TryResolveSearchTarget(string targetId, int itemIndex, GameObject item, out GameObject target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$TryResolveSearchTarget): clean
		Object x;
		bool bVar1;
		Transform root;
		GameObject pUVar2;

		root = null;
		bVar1 = ((Object)item != null);
		if (bVar1) {
			if (item == null) {
				throw new NullReferenceException();
			}
			root = item.transform;
		}
		pUVar2 = AottgVirtualSettingsScrollCategoryRuntime.Find(root, targetId);
		*target = pUVar2;
		x = (Object)*target;
		bVar1 = (x != null);
		return bVar1;
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x5D58B20", Offset = "0x5D57B20", VA = "0x5D58B20")]
	private bool IsValid(int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$IsValid): clean
		uint uVar1;
		GisketchNodeDefinition[] pGVar2;
		bool bVar3;

		if ((-1 < itemIndex) &&(pGVar2 = this._items, pGVar2 != null)) {
			uVar1 = (uint)pGVar2.Length;
			if ((int)uVar1 <= itemIndex) {
				return false;
			}
			if (uVar1 <= (uint)itemIndex) {
				throw new IndexOutOfRangeException();
			}
			bVar3 = pGVar2[(uint)itemIndex] != null;
		}
		return bVar3;
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x5D593F0", Offset = "0x5D583F0", VA = "0x5D593F0")]
	private static bool ContainsId(GisketchNodeDefinition node, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$ContainsId): clean
		uint uVar1;
		GisketchNodeDefinition[] pGVar2;
		bool bVar3;
		ulong uVar4;
		ulong uVar6;

		if (node != null) {
			bVar3 = String.IsNullOrEmpty(id);
			if (bVar3) {
				return false;
			}
			bVar3 = String.Equals(node.id, id, 5);
			if (bVar3) {
				return true;
			}
			pGVar2 = node.children;
			if ((pGVar2 != null) &&(0 < (int)pGVar2.Length)) {
				uVar4 = pGVar2.Length & 0xffffffff;
				uVar6 = 0;
				do {
					if (uVar4 <= uVar6) goto label_05e594dc;
					bVar3 = AottgVirtualSettingsScrollCategoryRuntime.ContainsId(pGVar2[uVar6], id);
					if (bVar3) {
						return true;
					}
					uVar6 = uVar6 + 1;
					uVar1 = (uint)pGVar2.Length;
					uVar4 = (ulong)uVar1;
				} while ((long)uVar6 < (long)(int)uVar1);
			}
			pGVar2 = node.deferredChildren;
			if ((pGVar2 != null) &&(0 < (int)pGVar2.Length)) {
				uVar4 = pGVar2.Length & 0xffffffff;
				uVar6 = 0;
				while (uVar6 < uVar4) {
					bVar3 = AottgVirtualSettingsScrollCategoryRuntime.ContainsId(pGVar2[uVar6], id);
					if (bVar3) {
						return true;
					}
					uVar6 = uVar6 + 1;
					uVar1 = (uint)pGVar2.Length;
					uVar4 = (ulong)uVar1;
					if ((long)(int)uVar1 <= (long)uVar6) {
						return false;
					}
				}
	label_05e594dc: ;
				throw new IndexOutOfRangeException();
			}
		}
		return false;
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x5D596F0", Offset = "0x5D586F0", VA = "0x5D596F0")]
	private static bool ContainsId(GisketchNodeDefinition[] nodes, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$ContainsId): clean
		uint uVar1;
		bool bVar2;
		ulong uVar3;
		ulong uVar4;

		if ((nodes == null) || ((int)nodes.Length < 1)) {
			return false;
		}
		uVar3 = nodes.Length & 0xffffffff;
		uVar4 = 0;
		while(true) {
			if (uVar3 <= uVar4) {
				throw new IndexOutOfRangeException();
			}
			bVar2 = AottgVirtualSettingsScrollCategoryRuntime.ContainsId(nodes[uVar4], id);
			if (bVar2) break;
			uVar4 = uVar4 + 1;
			uVar1 = (uint)nodes.Length;
			uVar3 = (ulong)uVar1;
			method = (MethodInfo)(long)(int)uVar1;
			if ((long)method <= (long)uVar4) {
				return false;
			}
		}
		return true;
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x5D595B0", Offset = "0x5D585B0", VA = "0x5D595B0")]
	private static GameObject Find(Transform root, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$Find): clean
		bool bVar1;
		int iVar2;
		String a;
		GameObject pUVar3;
		Transform root_00;
		Object x;
		int index;

		bVar1 = ((Object)root == null);
		if ((!bVar1) && (bVar1 = String.IsNullOrEmpty(id), !bVar1)) {
			if (root == null) {
				throw new NullReferenceException();
			}
			a = root.name;
			bVar1 = String.Equals(a, id, 5);
			if (bVar1) {
				return pUVar3;
			}
			index = 0;
			iVar2 = root.childCount;
			if (0 < iVar2) {
				do {
					root_00 = root.GetChild(index);
					x = (Object)AottgVirtualSettingsScrollCategoryRuntime.Find(root_00, id);
					bVar1 = (x != null);
					if (bVar1) {
						return (GameObject)x;
					}
					index = index + 1;
					iVar2 = root.childCount;
				} while (index < iVar2);
			}
		}
		return null;
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x5D59160", Offset = "0x5D58160", VA = "0x5D59160")]
	private static void Stretch(RectTransform rect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$Stretch): clean
		bool bVar1;

		bVar1 = ((Object)rect == null);
		if (bVar1) {
			return;
		}
		if (rect == null) {
			throw new NullReferenceException();
		}
		rect.anchorMin = (Vector2)(Vector2.zeroVector);
		rect.anchorMax = (Vector2)(Vector2.oneVector);
		rect.offsetMin = (Vector2)(Vector2.zeroVector);
		rect.offsetMax = (Vector2)(Vector2.zeroVector);
		return;
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x5D59020", Offset = "0x5D58020", VA = "0x5D59020")]
	private static void ClearItem(GameObject item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$ClearItem): clean
		uint uVar1;
		bool bVar2;
		int index;
		Transform pUVar3;
		Object obj;

		bVar2 = ((Object)item == null);
		if (!bVar2) {
			if ((item == null) ||(pUVar3 = item.transform, pUVar3 == null)) {
	label_05e59153: ;
				throw new NullReferenceException();
			}
			index = pUVar3.childCount;
			while (true) {
				index = index + -1;
				if (!(-1 < index)) break;
				while(true) {
					pUVar3 = item.transform;
					if ((pUVar3 == null) ||(pUVar3 = pUVar3.GetChild(index), pUVar3 == null)) goto label_05e59153;
					obj = (Object)pUVar3.gameObject;
					bVar2 = Application.isPlaying;
					uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
					if (!bVar2) break;
					if (uVar1 == 0) {
					}
					Object.Destroy(obj);
					index = index + -1;
					if (index < 0) {
						return;
					}
				}
				if (uVar1 == 0) {
				}
				Object.DestroyImmediate(obj);
			}
		}
		return;
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x5D59750", Offset = "0x5D58750", VA = "0x5D59750")]
	public AottgVirtualSettingsScrollCategoryRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c (Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$.ctor): clean
		this._paddingTop = 98.0;
		base();
		return;
	}
}
