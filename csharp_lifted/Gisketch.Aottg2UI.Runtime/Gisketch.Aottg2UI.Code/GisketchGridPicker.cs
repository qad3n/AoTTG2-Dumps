// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchGridPicker
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPicker.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200008D")]
public sealed class GisketchGridPicker : AottgComponent
{
	[Token(Token = "0x200008E")]
	internal sealed class RuntimeDefinition
	{
		[Token(Token = "0x40002F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly string Id;

		[Token(Token = "0x40002F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly GisketchGridPickerItem[] Items;

		[Token(Token = "0x40002F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly int Columns;

		[Token(Token = "0x40002F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public readonly float ItemWidth;

		[Token(Token = "0x40002FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly float ItemHeight;

		[Token(Token = "0x40002FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public readonly float ThumbnailWidth;

		[Token(Token = "0x40002FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly float ThumbnailHeight;

		[Token(Token = "0x40002FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public readonly float ViewportHeight;

		[Token(Token = "0x40002FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public readonly bool LazyLoadThumbnails;

		[Token(Token = "0x40002FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
		public readonly bool ReleaseThumbnails;

		[Token(Token = "0x4000300")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public readonly Action<GisketchActionContext, GisketchGridPickerItem> Select;

		[Token(Token = "0x6000467")]
		[Address(RVA = "0x526B930", Offset = "0x526A930", VA = "0x526B930")]
		public RuntimeDefinition(string id, GisketchGridPickerItem[] items, int columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, float viewportHeight, bool lazyLoadThumbnails, Action<GisketchActionContext, GisketchGridPickerItem> select, bool releaseThumbnails = false)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPicker.c (Gisketch.Aottg2UI.Code.GisketchGridPicker.RuntimeDefinition$$.ctor): clean
			base();
			this.ReleaseThumbnails = releaseThumbnails;
			this.Id = id;
			this.Items = items;
			this.Columns = columns;
			this.ItemWidth = itemWidth;
			this.ItemHeight = itemHeight;
			this.ThumbnailWidth = thumbnailWidth;
			this.ThumbnailHeight = thumbnailHeight;
			this.ViewportHeight = viewportHeight;
			this.LazyLoadThumbnails = lazyLoadThumbnails;
			this.Select = select;
			return;
		}
	}

	[Token(Token = "0x40002E5")]
	private const float Gap = 10f;

	[Token(Token = "0x40002E6")]
	private const float ScrollbarReserve = 28f;

	[Token(Token = "0x40002E7")]
	private const float ContentRightPadding = 8f;

	[Token(Token = "0x40002E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, RuntimeDefinition> Definitions;

	[Token(Token = "0x40002E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40002EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchGridPickerItem[] _items;

	[Token(Token = "0x40002EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly int _columns;

	[Token(Token = "0x40002EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private readonly float _itemWidth;

	[Token(Token = "0x40002ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly float _itemHeight;

	[Token(Token = "0x40002EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private readonly float _thumbnailWidth;

	[Token(Token = "0x40002EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly float _thumbnailHeight;

	[Token(Token = "0x40002F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private readonly float _height;

	[Token(Token = "0x40002F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool _lazyLoadThumbnails;

	[Token(Token = "0x40002F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	private readonly bool _searchAtBottom;

	[Token(Token = "0x40002F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	private readonly bool _releaseThumbnails;

	[Token(Token = "0x40002F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _searchPlaceholder;

	[Token(Token = "0x40002F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Action<GisketchActionContext, GisketchGridPickerItem> _select;

	[Token(Token = "0x17000089")]
	public float PreferredWidth
	{
		[Token(Token = "0x600045E")]
		[Address(RVA = "0x526B4C0", Offset = "0x526A4C0", VA = "0x526B4C0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPicker.c (Gisketch.Aottg2UI.Code.GisketchGridPicker$$get_PreferredWidth): clean
			float fVar1;
			uint uVar2;
			int iVar3;

			iVar3 = this._columns;
			fVar1 = this._itemWidth;
			if (Il2CppMethodInitialized_07542a2a == false) {
				Il2CppMethodInitialized_07542a2a = true;
				uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			iVar3 = Math.Max(1, iVar3);
			return (float)(iVar3 + -1) * 10.0 + fVar1 * (float)iVar3 + 8.0 + 28.0;
		}
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x526AF80", Offset = "0x5269F80", VA = "0x526AF80")]
	static GisketchGridPicker()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPicker.c (Gisketch.Aottg2UI.Code.GisketchGridPicker$$.cctor): 16 lines keep C-only constructs
		byte uVar1;
		uint uVar2;
		OrdinalIgnoreCaseComparer comparer;
		GisketchComponentRegistry pGVar3;
		ulong uVar4;
		String value;
		MethodInfo pMVar5;
		sbyte cVar6;
		bool bVar7;
		Dictionary<object, object> pSVar8;
		object pIVar9;
		byte puVar10;

		if (Il2CppMethodInitialized_07542a27 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07542a27 = true;
			if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor != 0) goto label_0536afac;
	label_0536b12d: ;
			if (g_data_07542886 != false) goto label_0536afb9;
	label_0536b13f: ;
			g_data_07542886 = true;
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) goto label_0536b12d;
	label_0536afac: ;
			if (g_data_07542886 == false) goto label_0536b13f;
	label_0536afb9: ;
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		pSVar8 = (Dictionary<object, object>)il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, GisketchGridPicker.RuntimeDefinition>));
		pSVar8 = new Dictionary<object, object>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		GisketchGridPicker.Definitions =(Dictionary<string, GisketchGridPicker.RuntimeDefinition>)pSVar8;
		pGVar3 = GisketchComponentRegistry.Default;
		pMVar5 = MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_BuildRuntime;
		pIVar9[1].klass =(Il2CppClass)MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_BuildRuntime.virtualMethodPointer;
		pIVar9[2].monitor = pMVar5;
		pIVar9[2].klass = null;
		uVar1 = pMVar5.parameters_count;
		pIVar9[4].klass = (Il2CppClass)pIVar9;
		cVar6 = il2cpp_runtime_helper_030d61c0();
		if (cVar6 == false) {
			if (uVar1 != 3) {
				pIVar9 = il2cpp_codegen_get_argument_exception(null, "Delegate to an instance method cannot have null \'this\'.");
				throw pIVar9;
			}
			puVar10 = &label_02d4ba20;
		}
		else {
			if (uVar1 != 4) {
				uVar4 = pIVar9[2].klass;
				pIVar9[1].monitor = pIVar9[1].klass;
				pIVar9[4].klass = (Il2CppClass)uVar4;
				pIVar9[3].monitor = &label_02d4b9b0;
				value = "GridPickerRuntime";
				goto joined_r0x0536b192;
			}
			puVar10 = &label_02d4ba50;
		}
		pIVar9[1].monitor = puVar10;
		pIVar9[3].monitor = &label_02d4b9b0;
		value = "GridPickerRuntime";
	joined_r0x0536b192: ;
		"GridPickerRuntime" = value;
		if (pGVar3 != null) {
			bVar7 = String.IsNullOrEmpty(value);
			if (bVar7) {
				return;
			}
			pSVar8 = (Dictionary<object, object>)pGVar3._factories;
			if (pSVar8 != null) {
				pSVar8.TryInsert((object)value, pIVar9, 1);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x526B360", Offset = "0x526A360", VA = "0x526B360")]
	public GisketchGridPicker(string id, GisketchGridPickerItem[] items, int columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, [Optional] string searchPlaceholder, [Optional] Action<GisketchActionContext, GisketchGridPickerItem> select, float height = 420f, bool lazyLoadThumbnails = true, bool searchAtBottom = false, bool releaseThumbnails = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPicker.c (Gisketch.Aottg2UI.Code.GisketchGridPicker$$.ctor): clean
		int iVar1;

		base();
		this._releaseThumbnails = releaseThumbnails;
		this._id = id;
		if (items == null) {
			items = (GisketchGridPickerItem[])new GisketchGridPickerItem[0];
		}
		this._items = items;
		iVar1 = Math.Max(1, columns);
		this._columns = iVar1;
		this._itemWidth = itemWidth;
		this._itemHeight = itemHeight;
		this._thumbnailWidth = thumbnailWidth;
		this._thumbnailHeight = thumbnailHeight;
		this._searchPlaceholder = searchPlaceholder;
		this._select = select;
		this._height = height;
		this._lazyLoadThumbnails = lazyLoadThumbnails;
		this._searchAtBottom = searchAtBottom;
		return;
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x526B5B0", Offset = "0x526A5B0", VA = "0x526B5B0")]
	public static float PreferredWidthFor(int columns, float itemWidth)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPicker.c (Gisketch.Aottg2UI.Code.GisketchGridPicker$$PreferredWidthFor): clean
		int iVar1;

		iVar1 = Math.Max(1, columns);
		return (float)(iVar1 + -1) * 10.0 + (float)iVar1 * itemWidth + 8.0 + 28.0;
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x526B640", Offset = "0x526A640", VA = "0x526B640", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPicker.c (Gisketch.Aottg2UI.Code.GisketchGridPicker$$Build): 1 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		int iVar3;
		Dictionary<object, object> __this_00;
		GisketchGridPickerItem[] pGVar4;
		Action<GisketchActionContext, GisketchGridPickerItem> pSVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		GisketchGridPicker.RuntimeDefinition __this_01;
		Action<AottgUi> __this_02;
		String pSVar10;
		GisketchLength __this_03;
		GisketchLayoutDefinition layout;
		MethodInfo pMVar11;
		float fVar12;

		__this_00 = (Dictionary<object, object>)GisketchGridPicker.Definitions;
		pSVar10 = this._id;
		pGVar4 = this._items;
		iVar3 = this._columns;
		fVar12 = this._height;
		bVar1 = this._lazyLoadThumbnails;
		pSVar5 = this._select;
		bVar2 = this._releaseThumbnails;
		fVar6 = this._itemWidth;
		fVar7 = this._itemHeight;
		fVar8 = this._thumbnailWidth;
		fVar9 = this._thumbnailHeight;
		__this_01 = new GisketchGridPicker.RuntimeDefinition();
		__this_01.ReleaseThumbnails = bVar2;
		__this_01.Id = pSVar10;
		__this_01.Items = pGVar4;
		__this_01.Columns = iVar3;
		__this_01.ItemWidth = fVar6;
		__this_01.ItemHeight = fVar7;
		__this_01.ThumbnailWidth = fVar8;
		__this_01.ThumbnailHeight = fVar9;
		__this_01.ViewportHeight = fVar12;
		__this_01.LazyLoadThumbnails = bVar1;
		__this_01.Select = pSVar5;
		if (__this_00 != null) {
			__this_00.set_Item((object)pSVar10, (object)__this_01);
			__this_02 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_Build_b__22_0);
			pMVar11 = (MethodInfo *)"-grid-picker";
			pSVar10 = String.Concat(this._id, "-grid-picker");
			fVar12 = this.PreferredWidth;
			__this_03 = new GisketchLength();
			if (__this_03 != null) {
				__this_03.value = fVar12;
				__this_03.unit = "point";
				layout = AottgUi.Layout("Column", null, null, null, null, 10.0, __this_03, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				if (ui != null) {
					ui.Panel("clear", __this_02, pSVar10, layout, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x526BA10", Offset = "0x526AA10", VA = "0x526BA10")]
	private void BuildSearch(AottgUi root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPicker.c (Gisketch.Aottg2UI.Code.GisketchGridPicker$$BuildSearch): 2 lines keep C-only constructs
		String placeholder;
		bool bVar1;
		GisketchGridPicker.c__DisplayClass23_0 __this_00;
		String pSVar2;
		GisketchLength __this_01;
		GisketchLayoutDefinition layout;
		Action<GisketchActionContext> __this_02;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchGridPicker.c__DisplayClass23_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			bVar1 = String.IsNullOrEmpty(this._searchPlaceholder);
			if (bVar1) {
				return;
			}
			pSVar2 = String.Concat(this._id, "-search");
			__this_00.inputId = pSVar2;
			pSVar2 = __this_00.inputId;
			placeholder = this._searchPlaceholder;
			__this_01 = new GisketchLength();
			if (__this_01 != null) {
				__this_01.value = 100.0;
				__this_01.unit = "percent";
				layout = AottgUi.Layout("Column", null, null, null, null, 0.0, __this_01, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				__this_02 = new Action<GisketchActionContext>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_c__DisplayClass23_0_BuildSearch_b__0);
				if (root != null) {
					root.InputField(pSVar2, placeholder, 0, "inputField", layout, null, __this_02, 0.2, 0, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x526BC60", Offset = "0x526AC60", VA = "0x526BC60")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPicker.c (Gisketch.Aottg2UI.Code.GisketchGridPicker$$BuildRuntime): 1 lines keep C-only constructs
		Dictionary<object, object> __this;
		bool bVar1;
		GisketchGridPickerRuntime __this_00;
		GisketchGridPicker.RuntimeDefinition local_28;

		local_28 = null;
		if ((node == null) ||(bVar1 = String.IsNullOrEmpty(node.value))) {
			return true;
		}
		__this = (Dictionary<object, object>)GisketchGridPicker.Definitions;
		if (__this != null) {
			bVar1 = __this.TryGetValue((object)node.value, (object*)&local_28);
			if (!bVar1) {
				return true;
			}
			if (((go != null) &&(__this_00 = go.AddComponent<GisketchGridPickerRuntime>(), context != null)) &&(__this_00 != null)) {
				__this_00.Setup(local_28, context.Theme);
				return true;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x526C280", Offset = "0x526B280", VA = "0x526C280")]
	private static void Filter(GisketchActionContext context, string pickerId, string inputId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPicker.c (Gisketch.Aottg2UI.Code.GisketchGridPicker$$Filter): 3 lines keep C-only constructs
		String query;
		GisketchGridPickerRuntime __this;
		GisketchGridPicker.RuntimeDefinition pGVar1;
		String __this_00;
		bool bVar2;
		uint uVar3;
		Transform pUVar4;
		TMP_InputField x;
		Object[] pSVar5;
		uint uVar6;
		String* ppSVar7;

		pUVar4 = null;
		bVar2 = ((Object)context.GameObject != null);
		if (bVar2) {
			if ((context.GameObject == null) ||(pUVar4 = context.GameObject.transform, pUVar4 == null)) goto label_0536c4a5;
			pUVar4 = pUVar4.root;
		}
		bVar2 = ((Object)pUVar4 == null);
		if (bVar2) {
			return;
		}
		x = GisketchGridPicker.Find<TMP_InputField>(pUVar4, inputId);
		bVar2 = ((Object)x != null);
		if (bVar2) {
			if (x == null) goto label_0536c4a5;
			ppSVar7 = &x.m_Text;
		}
		else {
			ppSVar7 = *(String**)(g_data_07556758 + 0xb8);
		}
		if (pUVar4 != null) {
			query = *ppSVar7;
			pSVar5 = pUVar4.GetComponentsInChildren<GisketchGridPickerRuntime>(true);
			if (pSVar5 != null) {
				uVar3 = (uint)pSVar5.Length;
				if ((int)uVar3 < 1) {
					return;
				}
				uVar6 = 0;
				while(true) {
					if (uVar3 <= uVar6) {
						throw new IndexOutOfRangeException();
					}
					__this = (GisketchGridPickerRuntime)pSVar5[(int)uVar6];
					if (__this == null) break;
					pGVar1 = __this._definition;
					if (pGVar1 == null) {
						__this_00 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					else {
						__this_00 = pGVar1.Id;
					}
					if (__this_00 == null) break;
					bVar2 = String.Equals(__this_00, pickerId, 5);
					if (bVar2) {
						__this.SetQuery(query);
					}
					uVar6 = uVar6 + 1;
					uVar3 = (uint)pSVar5.Length;
					if ((int)uVar3 <= (int)uVar6) {
						return;
					}
				}
			}
		}
	label_0536c4a5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000464")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPicker.c.

	// Gisketch.Aottg2UI.Code.GisketchGridPicker$$Find<object>: 2 lines keep C-only constructs
	private static object Find_object(Transform root, String id)
	{
		uint uVar1;
		uint uVar2;
		Object x;
		bool bVar3;
		Object[] pSVar4;
		ulong uVar5;
		Object __this;
		String a;
		ulong uVar6;

		if ((method.rgctx_data == null) &&(il2cpp_codegen_initialize_runtime_metadata(&typeof(Object)), method.rgctx_data == null)) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = ((Object)root == null);
		if ((!bVar3) && (bVar3 = String.IsNullOrEmpty(id), !bVar3)) {
			if ((root == null) ||(pSVar4 = root.GetComponentsInChildren<object>(true), pSVar4 == null)) {
	label_0363c9db: ;
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar4.Length) {
				uVar5 = pSVar4.Length & 0xffffffff;
				uVar6 = 0;
				do {
					if (uVar5 <= uVar6) {
						throw new IndexOutOfRangeException();
					}
					x = (Object)pSVar4[uVar6];
					bVar3 = (x != null);
					if (bVar3) {
						if ((x == null) ||(__this = (Object)x.gameObject, __this == null)) goto label_0363c9db;
						a = __this.name;
						bVar3 = (a == id);
						if (bVar3) {
							return (object)x;
						}
					}
					uVar6 = uVar6 + 1;
					uVar2 = (uint)pSVar4.Length;
					uVar5 = (ulong)uVar2;
				} while ((long)uVar6 < (long)(int)uVar2);
			}
		}
		return null;
	}

	// Gisketch.Aottg2UI.Code.GisketchGridPicker.<>c__DisplayClass23_0$$.ctor: clean
	private void c__DisplayClass23_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Code.GisketchGridPicker$$<Build>b__22_0: 1 lines keep C-only constructs
	private void Build_b__22_0(AottgUi root)
	{
		float fVar1;
		String id;
		Action<AottgUi> __this_00;
		GisketchLength __this_01;
		GisketchLength __this_02;
		GisketchLayoutDefinition layout;
		GisketchLayoutDefinition contentLayout;

		if (this._searchAtBottom == false) {
			this.BuildSearch(root);
		}
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_Build_b__22_1);
		id = this._id;
		fVar1 = this._height;
		__this_01 = new GisketchLength();
		if (__this_01 != null) {
			__this_01.value = fVar1;
			__this_01.unit = "point";
			__this_02 = new GisketchLength();
			if (__this_02 != null) {
				__this_02.value = 100.0;
				__this_02.unit = "percent";
				layout = AottgUi.Layout("Column", null, null, null, null, 0.0, __this_02, __this_01, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				contentLayout = AottgUi.Layout("Column", null, "FlexStart", null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 8.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				if (root != null) {
					root.ScrollView("scrollView", __this_00, id, layout, contentLayout, null);
					if (this._searchAtBottom == false) {
						return;
					}
					this.BuildSearch(root);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Code.GisketchGridPicker$$<Build>b__22_1: 1 lines keep C-only constructs
	private void Build_b__22_1(AottgUi scroll)
	{
		GisketchNodeDefinition __this_00;
		String pSVar1;
		GisketchLength __this_01;
		GisketchLayoutDefinition pGVar2;
		MethodInfo method_01;
		float fVar3;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "GridPickerRuntime";
			pSVar1 = String.Concat(this._id, "-runtime");
			__this_00.id = pSVar1;
			method_01 = (MethodInfo)this._id;
			__this_00.value = (String)method_01;
			fVar3 = this.PreferredWidth;
			__this_01 = new GisketchLength();
			if (__this_01 != null) {
				__this_01.value = fVar3 + -28.0;
				__this_01.unit = "point";
				pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, __this_01, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				__this_00.layout = pGVar2;
				if (scroll != null) {
					scroll.Add(__this_00);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Code.GisketchGridPicker.<>c__DisplayClass23_0$$<BuildSearch>b__0: clean
	private void c__DisplayClass23_0__BuildSearch_b__0(GisketchActionContext context)
	{
		GisketchGridPicker pGVar1;
		String pickerId;
		String inputId;

		pGVar1 = this.__4__this;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pickerId = pGVar1._id;
		inputId = this.inputId;
		if ((typeof(GisketchGridPicker)._2).cctor_finished_or_no_cctor == 0) {
		}
		GisketchGridPicker.Filter(context, pickerId, inputId);
		return;
	}
}
