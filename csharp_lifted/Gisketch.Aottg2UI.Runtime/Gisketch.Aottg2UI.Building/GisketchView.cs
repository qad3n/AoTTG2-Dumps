// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchView
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Search;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000BF")]
public class GisketchView
{
	[Token(Token = "0x40003F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, GameObject> _elements;

	[Token(Token = "0x1700009B")]
	public GameObject Root
	{
		[Token(Token = "0x6000601")]
		[Address(RVA = "0x5293710", Offset = "0x5292710", VA = "0x5293710")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$get_Root): clean
			return this._Root_k__BackingField;
		}
		[Token(Token = "0x6000602")]
		[Address(RVA = "0x5293720", Offset = "0x5292720", VA = "0x5293720")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$set_Root): clean
			this._Root_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x1700009C")]
	public List<GisketchMotionTarget> MotionTargets
	{
		[Token(Token = "0x6000603")]
		[Address(RVA = "0x5293730", Offset = "0x5292730", VA = "0x5293730")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$get_MotionTargets): clean
			return this._MotionTargets_k__BackingField;
		}
	}

	[Token(Token = "0x1700009D")]
	public List<GisketchSearchEntry> SearchEntries
	{
		[Token(Token = "0x6000604")]
		[Address(RVA = "0x5293740", Offset = "0x5292740", VA = "0x5293740")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$get_SearchEntries): clean
			return this._SearchEntries_k__BackingField;
		}
	}

	[Token(Token = "0x1700009E")]
	public bool LayoutDirty
	{
		[Token(Token = "0x6000605")]
		[Address(RVA = "0x5293750", Offset = "0x5292750", VA = "0x5293750")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$get_LayoutDirty): clean
			return this._LayoutDirty_k__BackingField;
		}
		[Token(Token = "0x6000606")]
		[Address(RVA = "0x5293760", Offset = "0x5292760", VA = "0x5293760")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$set_LayoutDirty): clean
			this._LayoutDirty_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x5293770", Offset = "0x5292770", VA = "0x5293770")]
	public void SetRoot(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$SetRoot): clean
		this._Root_k__BackingField = root;
		return;
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x5293780", Offset = "0x5292780", VA = "0x5293780")]
	public void MarkLayoutDirty()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$MarkLayoutDirty): clean
		this._LayoutDirty_k__BackingField = true;
		return;
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x5293790", Offset = "0x5292790", VA = "0x5293790")]
	public void MarkLayoutSettled()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$MarkLayoutSettled): clean
		this._LayoutDirty_k__BackingField = false;
		return;
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x52937A0", Offset = "0x52927A0", VA = "0x52937A0")]
	public void Register(GisketchNodeDefinition node, GameObject go, [Optional] GisketchMotionDefinition styleMotion)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$Register): 7 lines keep C-only constructs
		int piVar1;
		GisketchMotionDefinition* ppGVar2;
		uint uVar3;
		Dictionary<object, object> __this_00;
		List<GisketchSearchEntry> __this_01;
		GisketchSearchEntry[] pGVar4;
		GisketchUIBindingDefinition pGVar5;
		GisketchMotionDefinition pGVar6;
		List<GisketchMotionTarget> __this_02;
		GisketchMotionTarget[] pGVar7;
		Vector3 pUVar8;
		GisketchMotionTarget item;
		bool bVar9;
		GisketchSearchEntry __this_03;
		GisketchMotionDefinition enter;
		GisketchMotionTarget local_58;

		if (node == null) {
			return;
		}
		bVar9 = ((Object)go == null);
		if (bVar9) {
			return;
		}
		bVar9 = String.IsNullOrEmpty(node.id);
		if (!bVar9) {
			__this_00 = (Dictionary<object, object>)this._elements;
			if (__this_00 == null) goto label_05393a97;
			__this_00.set_Item((object)node.id, (object)go);
		}
		bVar9 = GisketchView.IsSearchable(node, go);
		if (bVar9) {
			__this_01 = this._SearchEntries_k__BackingField;
			__this_03 = new GisketchSearchEntry(node, go);
			if (__this_01 == null) goto label_05393a97;
			piVar1 = &__this_01._version;
			*piVar1 = *piVar1 + 1;
			pGVar4 = __this_01._items;
			if (pGVar4 == null) goto label_05393a97;
			uVar3 = __this_01._size;
			if (uVar3 < (uint)pGVar4.Length) {
				__this_01._size = uVar3 + 1;
				pGVar4[(int)uVar3] = __this_03;
				goto label_053938ee;
			}
			__this_01.AddWithResize((object)__this_03);
			enter = node.enter;
			if (enter == null) goto label_0539392e;
	label_053938fa: ;
			pGVar5 = node.bind;
		}
		else {
	label_053938ee: ;
			enter = node.enter;
			if (enter != null) goto label_053938fa;
	label_0539392e: ;
			pGVar6 = node.motion;
			enter = styleMotion;
			if (pGVar6 != null) {
				enter = pGVar6;
			}
			pGVar5 = node.bind;
		}
		if (((pGVar5 != null) &&(bVar9 = String.IsNullOrEmpty(pGVar5.visible), !bVar9)) ||(((enter == null ||(bVar9 = String.IsNullOrEmpty(enter.preset))) &&((pGVar6 = node.exit, pGVar6 == null ||(bVar9 = String.IsNullOrEmpty(pGVar6.preset))))))) {
			return;
		}
		__this_02 = this._MotionTargets_k__BackingField;
		local_58.Exit = null;
		local_58.RestScale.x = 0.0;
		local_58.RestScale.y = 0.0;
		local_58.GameObject = null;
		local_58.Enter = null;
		local_58.RestScale.z = 0.0;
		local_58.RestAlpha = 0.0;
		local_58 = new GisketchMotionTarget(go, enter, node.exit);
		if (__this_02 != null) {
			piVar1 = &__this_02._version;
			*piVar1 = *piVar1 + 1;
			pGVar7 = __this_02._items;
			if (pGVar7 != null) {
				uVar3 = __this_02._size;
				if (uVar3 < (uint)pGVar7.Length) {
					__this_02._size = uVar3 + 1;
					*(ulong)&pGVar7[(int)uVar3].RestScale.z = local_58._32_8_;
					ppGVar2 = &pGVar7[(int)uVar3].Exit;
					*ppGVar2 = local_58.Exit;
					pUVar8 = (Vector3)(ppGVar2 + 1);
					pUVar8.x = local_58.RestScale.x;
					pUVar8.y = local_58.RestScale.y;
					pGVar7[(int)uVar3].GameObject = local_58.GameObject;
					pGVar7[(int)uVar3].Enter = local_58.Enter;
					return;
				}
				item.Enter = local_58.Enter;
				item.GameObject = local_58.GameObject;
				item.Exit = local_58.Exit;
				item.RestScale.x = local_58.RestScale.x;
				item.RestScale.y = local_58.RestScale.y;
				item.RestScale.z = local_58.RestScale.z;
				item.RestAlpha = local_58.RestAlpha;
				__this_02.AddWithResize(item);
				return;
			}
		}
	label_05393a97: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x5293DE0", Offset = "0x5292DE0", VA = "0x5293DE0")]
	public GameObject Find(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$Find): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		GameObject pUVar2;
		GameObject local_20;

		local_20 = null;
		bVar1 = String.IsNullOrEmpty(id);
		if (!bVar1) {
			__this_00 = (Dictionary<object, object>)this._elements;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this_00.TryGetValue((object)id, (object*)&local_20);
			if (bVar1) {
			}
			else {
			}
		}
		return pUVar2;
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x5293E70", Offset = "0x5292E70", VA = "0x5293E70")]
	public void UnregisterSubtree(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$UnregisterSubtree): 16 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Object x;
		Dictionary<object, object> pSVar3;
		String[] pSVar4;
		List<GisketchSearchEntry> __this_00;
		List<GisketchMotionTarget> __this_01;
		GisketchView pGVar6;
		byte puVar7;
		bool bVar8;
		GisketchView.c__DisplayClass20_0 pGVar9;
		List<string> __this_02;
		String pSVar10;
		Predicate<T> pSVar11;
		int index;
		GisketchView.c__DisplayClass20_0 targetAddress;
		byte[] local_98 = new byte[8];
		String local_88;
		GameObject pUStack_80;
		ulong local_78;
		GisketchView.c__DisplayClass20_0 local_68;
		GisketchView local_60;
		byte[] local_58 = new byte[16];
		String local_48;
		GameObject pUStack_40;
		int local_38;
		uint uStack_34;

		if (Il2CppMethodInitialized_07542b43 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0_UnregisterSubtree_b__0) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0_UnregisterSubtree_b__1) ;
			Il2CppMethodInitialized_07542b43 = true;
		}
		local_88 = null;
		pUStack_80 = null;
		local_98 = (byte[])0x0;
		local_78._0_4_ = 0;
		local_78._4_4_ = 0;
		pGVar9 = new GisketchView.c__DisplayClass20_0();
		if (pGVar9 != null) {
			targetAddress = &pGVar9.fields;
			pGVar9.root = root;
			x = (Object)pGVar9.root;
			bVar8 = (x == null);
			if (bVar8) {
				return;
			}
			__this_02 = new List<string>();
			pSVar3 = (Dictionary<object, object>)this._elements;
			if (pSVar3 != null) {
				local_68 = pGVar9;
				local_60 = this;
				local_58.GetEnumerator(pSVar3);
				local_78._0_4_ = local_38;
				local_78._4_4_ = uStack_34;
				local_88 = local_48;
				pUStack_80 = pUStack_40;
				local_98 = (byte[])local_58._0_8_;
				local_58._0_8_ = null;
				local_58._8_8_ = local_98;
				puVar7 = local_98;
				if (__this_02 == null) {
					do {
						local_58._8_8_ = puVar7;
						bVar8 = local_98.MoveNext();
						if (!bVar8) goto label_05394156;
						bVar8 = GisketchView.IsInSubtree(pUStack_80, targetAddress.root);
						puVar7 = (byte)local_58._8_8_;
					} while (!bVar8);
	label_05394151: ;
					throw new NullReferenceException();
				}
				while (true) {
					bVar8 = local_98.MoveNext();
					pSVar10 = local_88;
					if (!(bVar8)) break;
					bVar8 = GisketchView.IsInSubtree(pUStack_80, targetAddress.root) ;
					if (bVar8) {
						piVar1 = &__this_02._version;
						*piVar1 = *piVar1 + 1;
						pSVar4 = __this_02._items;
						if (pSVar4 == null) goto label_05394151;
						uVar2 = __this_02._size;
						if (uVar2 < (uint)pSVar4.Length) {
							__this_02._size = uVar2 + 1;
							pSVar4[(int)uVar2] = pSVar10;
						}
						else {
							__this_02.AddWithResize((object)pSVar10);
						}
					}
				}
	label_05394156: ;
				local_98.Dispose();
				pGVar6 = local_60;
				if (__this_02 != null) {
					if (0 < __this_02._size) {
						index = 0;
						do {
							pSVar3 = (Dictionary<object, object>)pGVar6._elements;
							pSVar10 = __this_02.get_Item(index);
							if (pSVar3 == null) goto label_05394263;
							pSVar3.Remove((object)pSVar10);
							index = index + 1;
						} while (index < __this_02._size);
					}
					__this_00 = pGVar6._SearchEntries_k__BackingField;
					pGVar9 = local_68;
					pSVar11 = new Predicate<GisketchMotionTarget>((object)local_68, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0_UnregisterSubtree_b__0);
					if (__this_00 != null) {
						__this_00.RemoveAll(pSVar11);
						__this_01 = pGVar6._MotionTargets_k__BackingField;
						pSVar11 = new Predicate<GisketchMotionTarget>((object)pGVar9, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0_UnregisterSubtree_b__1);
						if (__this_01 != null) {
							__this_01.RemoveAll(pSVar11);
							return;
						}
					}
				}
			}
		}
	label_05394263: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x5293AA0", Offset = "0x5292AA0", VA = "0x5293AA0")]
	private static bool IsSearchable(GisketchNodeDefinition node, GameObject go)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$IsSearchable): clean
		GisketchSearchDefinition pGVar1;
		bool bVar2;
		Selectable x;
		GisketchFocusRing x_00;

		if (node != null) {
			bVar2 = ((Object)go == null);
			if ((!bVar2) &&((pGVar1 = node.search, pGVar1 == null ||(pGVar1.hidden == false)))) {
				if (go == null) {
	label_05393bf8: ;
					throw new NullReferenceException();
				}
				x = go.GetComponent<Selectable>();
				bVar2 = ((Object)x != null);
				if (bVar2) {
					if (x == null) goto label_05393bf8;
					bVar2 = x.IsActive();
					if (bVar2) {
						bVar2 = x.IsInteractable();
						if ((bVar2) && (x.m_Navigation.m_Mode != 0)) {
							x_00 = go.GetComponent<GisketchFocusRing>();
							bVar2 = ((Object)x_00 != null);
							return bVar2;
						}
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x5293C30", Offset = "0x5292C30", VA = "0x5293C30")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$HasMotion): clean
		bool bVar1;

		if (motion == null) {
			return false;
		}
		bVar1 = String.IsNullOrEmpty(motion.preset);
		return !bVar1;
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x5293C00", Offset = "0x5292C00", VA = "0x5293C00")]
	private static bool HasVisibleBinding(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$HasVisibleBinding): clean
		GisketchUIBindingDefinition pGVar1;
		bool bVar2;

		if (node == null) {
			throw new NullReferenceException();
		}
		pGVar1 = node.bind;
		if (pGVar1 == null) {
			return false;
		}
		bVar2 = String.IsNullOrEmpty(pGVar1.visible);
		return !bVar2;
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x52942E0", Offset = "0x52932E0", VA = "0x52942E0")]
	private static bool IsInSubtree(GameObject value, GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$IsInSubtree): clean
		bool bVar1;
		Transform __this;
		Transform parent;
		bool bVar2;

		bVar1 = ((Object)value != null);
		if (bVar1) {
			bVar1 = ((Object)root != null);
			if (bVar1) {
				bVar1 = ((Object)value == (Object)root);
				if (!bVar1) {
					if (value != null) {
						__this = value.transform;
						if (root != null) {
							parent = root.transform;
							if (__this != null) {
								bVar1 = __this.IsChildOf(parent);
								return bVar1;
							}
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x52943D0", Offset = "0x52933D0", VA = "0x52943D0")]
	public GisketchView()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c (Gisketch.Aottg2UI.Building.GisketchView$$.ctor): 1 lines keep C-only constructs
		Dictionary<string, GameObject> __this_00;
		List<GisketchMotionTarget> __this_01;
		List<GisketchSearchEntry> __this_02;

		if (Il2CppMethodInitialized_07542b46 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(List<GisketchMotionTarget>)) ;
			Il2CppMethodInitialized_07542b46 = true;
		}
		__this_00 = new Dictionary<string, GameObject>();
		this._elements = __this_00;
		__this_01 = new List<GisketchMotionTarget>();
		this._MotionTargets_k__BackingField = __this_01;
		__this_02 = new List<GisketchSearchEntry>();
		this._SearchEntries_k__BackingField = __this_02;
		this._LayoutDirty_k__BackingField = true;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchView.c.

	// Gisketch.Aottg2UI.Building.GisketchView.<>c__DisplayClass20_0$$.ctor: clean
	private void c__DisplayClass20_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Building.GisketchView.<>c__DisplayClass20_0$$<UnregisterSubtree>b__0: clean
	private bool c__DisplayClass20_0__UnregisterSubtree_b__0(GisketchSearchEntry entry)
	{
		bool bVar1;

		if (entry == null) {
			return true;
		}
		bVar1 = GisketchView.IsInSubtree(entry._Target_k__BackingField, this.root);
		return bVar1;
	}

	// Gisketch.Aottg2UI.Building.GisketchView.<>c__DisplayClass20_0$$<UnregisterSubtree>b__1: clean
	private bool c__DisplayClass20_0__UnregisterSubtree_b__1(GisketchMotionTarget target)
	{
		bool bVar1;

		bVar1 = GisketchView.IsInSubtree(target.GameObject, this.root);
		return bVar1;
	}
}
