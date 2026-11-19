// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Search.GisketchSearchService
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x200003D")]
public static class GisketchSearchService
{
	[Token(Token = "0x200003E")]
	private readonly struct ScoredEntry
	{
		[Token(Token = "0x4000130")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly GisketchSearchEntry Entry;

		[Token(Token = "0x4000131")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly int Score;

		[Token(Token = "0x600023E")]
		[Address(RVA = "0x524BC40", Offset = "0x524AC40", VA = "0x524BC40")]
		public ScoredEntry(GisketchSearchEntry entry, int score)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService.ScoredEntry$$.ctor): clean
			this.Entry = entry;
			this.Score = score;
			return;
		}
	}

	[Token(Token = "0x2000040")]
	[CompilerGenerated]
	private sealed class _003CEmpty_003Ed__5 : IEnumerable<GisketchSearchEntry>, IEnumerable, IEnumerator<GisketchSearchEntry>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000134")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000135")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private GisketchSearchEntry _003C_003E2__current;

		[Token(Token = "0x4000136")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000035")]
		private GisketchSearchEntry System_002ECollections_002EGeneric_002EIEnumerator_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002ECurrent
		{
			[Token(Token = "0x6000245")]
			[Address(RVA = "0x524D590", Offset = "0x524C590", VA = "0x524D590", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.Generic.IEnumerator<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000036")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000247")]
			[Address(RVA = "0x524D5E0", Offset = "0x524C5E0", VA = "0x524D5E0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.IEnumerator.get_Current): clean
				return (object)this.__2__current;
			}
		}

		[Token(Token = "0x6000242")]
		[Address(RVA = "0x524D050", Offset = "0x524C050", VA = "0x524D050")]
		[DebuggerHidden]
		public _003CEmpty_003Ed__5(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x6000243")]
		[Address(RVA = "0x524D560", Offset = "0x524C560", VA = "0x524D560", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000244")]
		[Address(RVA = "0x524D570", Offset = "0x524C570", VA = "0x524D570", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$MoveNext): clean
			if (this.__1__state == 0) {
				this.__1__state = -1;
				return false;
			}
			return false;
		}

		[Token(Token = "0x6000246")]
		[Address(RVA = "0x524D5A0", Offset = "0x524C5A0", VA = "0x524D5A0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_Empty_d__5_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}

		[Token(Token = "0x6000248")]
		[Address(RVA = "0x524D5F0", Offset = "0x524C5F0", VA = "0x524D5F0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<GisketchSearchEntry> System_002ECollections_002EGeneric_002EIEnumerable_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.Generic.IEnumerable<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.GetEnumerator): clean
			int iVar1;
			int iVar2;
			GisketchSearchService.d__5<Empty> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator<GisketchSearchEntry>)this;
			}
			__this_00 = new GisketchSearchService.d__5<Empty>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			return (IEnumerator<GisketchSearchEntry>)__this_00;
		}

		[Token(Token = "0x6000249")]
		[Address(RVA = "0x524D670", Offset = "0x524C670", VA = "0x524D670", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService.<Empty>d__5$$System.Collections.IEnumerable.GetEnumerator): clean
			int iVar1;
			int iVar2;
			GisketchSearchService.d__5<Empty> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator)this;
			}
			__this_00 = new GisketchSearchService.d__5<Empty>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			return (IEnumerator)__this_00;
		}
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x524B440", Offset = "0x524A440", VA = "0x524B440")]
	public static List<GisketchSearchEntry> Query(IEnumerable<GisketchSearchEntry> entries, string query)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$Query): 20 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		GisketchSearchService.d__5<Empty> pGVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		Il2CppClass pIVar5;
		GisketchSearchService.ScoredEntry[] pGVar6;
		GisketchSearchEntry[] pGVar7;
		object pIVar8;
		int iVar10;
		bool bVar11;
		int iVar12;
		List<GisketchSearchService.ScoredEntry> __this;
		VirtualInvokeData pVVar13;
		GisketchSearchEntry __this_00;
		String displayTitle;
		List<GisketchSearchEntry> __this_01;
		Gisketch_Aottg2UI_Search_GisketchSearchService___c_StaticFields pGVar14;
		Comparison<T> comparison;
		ulong uVar15;
		long lVar16;
		GisketchSearchService.ScoredEntry item;
		object local_90;
		System_Collections_Generic_List_Enumerator_T__o local_80;
		System_Collections_Generic_List_Enumerator_T__o local_78;
		GisketchSearchEntry local_50;
		ulong local_48;

		local_90 = null;
		local_78._current = null;
		local_78._list = null;
		local_78._index = 0;
		local_78._version = 0;
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(List<GisketchSearchService.ScoredEntry>));
		__this = new List<GisketchSearchService.ScoredEntry>();
		if (entries == null) {
			entries = new GisketchSearchService.d__5<Empty>();
			(((GisketchSearchService.d__5<Empty>)entries).fields).__1__state = -2;
			iVar12 = Environment.CurrentManagedThreadId;
			(((GisketchSearchService.d__5<Empty>)entries).fields).__l__initialThreadId = iVar12;
		}
		pGVar3 = ((GisketchSearchService.d__5<Empty>)entries).klass;
		uVar15 = (ulong)(pGVar3._2).interface_offsets_count;
		local_90 = entries.Dispose();
		local_80 = (System_Collections_Generic_List_Enumerator_T__o)&local_90;
		if (local_90 != null) {
			do {
				pIVar8 = local_90;
				pIVar5 = local_90.klass;
				uVar15 = (ulong)(pIVar5._2).interface_offsets_count;
				bVar11 = pIVar8.Dispose();
				pIVar8 = local_90;
				if (!bVar11) {
					if (local_90 == null) goto label_0534b8b6;
					pIVar5 = local_90.klass;
					uVar15 = (ulong)(pIVar5._2).interface_offsets_count;
					if (uVar15 == 0) goto label_0534b88f;
					pIVar4 = (pIVar5._1).interfaceOffsets;
					lVar16 = 0;
					goto label_0534b880;
				}
				if (local_90 == null) {
					throw new NullReferenceException();
				}
				pIVar5 = local_90.klass;
				uVar15 = (ulong)(pIVar5._2).interface_offsets_count;
				__this_00 = (GisketchSearchEntry)pIVar8.Dispose();
				if (__this_00 == null) {
					displayTitle = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				else {
					displayTitle = __this_00.DisplayTitle;
				}
				local_50 = GisketchSearchService.Match(__this_00, query, displayTitle);
				iVar10 = (int)local_50;
				if (0 < (int)local_50) {
					local_48._0_4_ = 0;
					local_48._4_4_ = 0;
					local_50 = __this_00;
					local_48._0_4_ = iVar10;
					if (__this == null) {
	label_0534babc: ;
						throw new NullReferenceException();
					}
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pGVar6 = __this._items;
					if (pGVar6 == null) goto label_0534babc;
					uVar2 = __this._size;
					if (uVar2 < (uint)pGVar6.Length) {
						__this._size = uVar2 + 1;
						pGVar6[(int)uVar2].Entry = local_50;
						pGVar6[(int)uVar2].Score = iVar10;
					}
					else {
						item.Score = iVar10;
						item.Entry = local_50;
						item._12_4_ = 0;
						__this.AddWithResize(item);
					}
				}
			} while (local_90 != null);
		}
		throw new NullReferenceException();
		while (true) {
			lVar16 = lVar16 + 0x10;
			if (!(uVar15 * 0x10 != lVar16)) break;
	label_0534b880: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar16) == typeof(IDisposable)) {
				pVVar13 = pIVar5.vtable + *(int)((long)&pIVar4.offset + lVar16);
				goto label_0534b8ad;
			}
		}
	label_0534b88f: ;
	label_0534b8ad: ;
		pIVar8.Dispose();
	label_0534b8b6: ;
		if ((typeof(GisketchSearchService.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar14 = typeof(GisketchSearchService.c).static_fields;
			comparison = (Comparison<T>)pGVar14.__9__0_0;
		}
		else {
			pGVar14 = typeof(GisketchSearchService.c).static_fields;
			comparison = (Comparison<T>)pGVar14.__9__0_0;
		}
		if (comparison == null) {
			if (((typeof(GisketchSearchService.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar14 = typeof(GisketchSearchService.c).static_fields;
			}
			pIVar8 = (object)pGVar14.__9;
			comparison = new Comparison<GisketchSearchService.ScoredEntry>(pIVar8, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchService_c_Query_b__0_0);
			pGVar14 = typeof(GisketchSearchService.c).static_fields;
			pGVar14.__9__0_0 = (Comparison<GisketchSearchService.ScoredEntry>)comparison;
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Sort(comparison);
		iVar12 = __this._size;
		__this_01 = new List<GisketchSearchEntry>(iVar12);
		local_78 = __this.GetEnumerator();
		local_80 = &local_78;
		if (__this_01 == null) {
			bVar11 = local_78.MoveNext();
			if (bVar11) {
	label_0534bacb: ;
				throw new NullReferenceException();
			}
		}
		else {
			while(true) {
				bVar11 = local_78.MoveNext();
				if (!bVar11) break;
				piVar1 = &__this_01._version;
				*piVar1 = *piVar1 + 1;
				pGVar7 = __this_01._items;
				if (pGVar7 == null) goto label_0534bacb;
				uVar2 = __this_01._size;
				if (uVar2 < (uint)pGVar7.Length) {
					__this_01._size = uVar2 + 1;
					pGVar7[(int)uVar2] =(GisketchSearchEntry)local_78._current;
				}
				else {
					__this_01.AddWithResize(local_78._current);
				}
			}
		}
		local_78.Dispose();
		return __this_01;
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x524BBD0", Offset = "0x524ABD0", VA = "0x524BBD0")]
	public static GisketchSearchMatch Match(GisketchSearchEntry entry, string query)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$Match): 1 lines keep C-only constructs
		String displayTitle;
		GisketchSearchMatch local_38;

		if (entry == null) {
			displayTitle = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			displayTitle = entry.DisplayTitle;
		}
		local_38 = GisketchSearchService.Match(entry, query, displayTitle);
		__return_storage_ptr__.HiddenText = local_38.HiddenText;
		__return_storage_ptr__.DisplayIndices = local_38.DisplayIndices;
		__return_storage_ptr__.Score = local_38.Score;
		__return_storage_ptr__.DisplayStart = local_38.DisplayStart;
		__return_storage_ptr__.DisplayLength = local_38.DisplayLength;
		*(uint)&__return_storage_ptr__.field_0xc = local_38._12_4_;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x524BC60", Offset = "0x524AC60", VA = "0x524BC60")]
	public static GisketchSearchMatch Match(GisketchSearchEntry entry, string query, string displayTitle)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$Match): 31 lines keep C-only constructs
		String pSVar1;
		long lVar2;
		bool bVar3;
		String pSVar4;
		String pSVar5;
		_union_14 _Var6;
		int displayLength;
		MethodInfo pMVar7;
		int displayStart;
		uint uVar8;
		int score;
		MethodInfo method_00;
		_union_13 displayIndices;
		int local_80;
		int local_7c;
		String local_78;
		byte[] local_70 = new byte[16];
		Il2CppClass pIStack_60;
		Int32[] pSStack_58;
		String local_50;
		_union_13 local_48;
		_union_14 local_40;
		Il2CppMethodPointer local_38;

		local_7c = 0;
		local_80 = 0;
		local_48.rgctx_data = null;
		local_38 = (Il2CppMethodPointer)0x0;
		if (entry == null) {
	label_0534c2da: ;
			local_70._0_4_ = 0;
			local_70._4_4_ = 0;
			local_70._8_4_ = 0;
			local_70._12_4_ = 0;
			__return_storage_ptr__.HiddenText = null;
			__return_storage_ptr__.DisplayIndices = null;
			goto label_0534c2e3;
		}
		bVar3 = String.IsNullOrEmpty(query);
		if (bVar3) {
			pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			if (query == null) goto label_0534c2fa;
			pSVar4 = query.ToLowerInvariant();
		}
		bVar3 = String.IsNullOrEmpty(pSVar4);
		lVar2 = g_data_07556758;
		if (bVar3) {
			pSVar4 = (String)**(long*)(g_data_07556758 + 0xb8);
			*(ulong)&__return_storage_ptr__.DisplayLength = 0;
			__return_storage_ptr__.HiddenText = null;
			__return_storage_ptr__.DisplayIndices = null;
			__return_storage_ptr__.Score = 1;
			__return_storage_ptr__.DisplayStart = -1;
			if (pSVar4 == null) {
				pSVar4 = (String)**(long*)(lVar2 + 0xb8);
			}
			__return_storage_ptr__.HiddenText = pSVar4;
			__return_storage_ptr__.DisplayIndices = null;
			return __return_storage_ptr__;
		}
		pSVar5 = entry._Title_k__BackingField;
		bVar3 = String.IsNullOrEmpty(pSVar5);
		if (bVar3) {
			local_78 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			if (pSVar5 == null) goto label_0534c2fa;
			local_78 = pSVar5.ToLowerInvariant();
		}
		bVar3 = String.IsNullOrEmpty(displayTitle);
		if (bVar3) {
			pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			if (displayTitle == null) goto label_0534c2fa;
			pSVar5 = displayTitle.ToLowerInvariant();
		}
		pSVar1 = entry._Keywords_k__BackingField;
		bVar3 = String.IsNullOrEmpty(pSVar1);
		if (bVar3) {
			local_50 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			if (pSVar1 == null) goto label_0534c2fa;
			local_50 = pSVar1.ToLowerInvariant();
		}
		pSVar1 = entry._Id_k__BackingField;
		bVar3 = String.IsNullOrEmpty(pSVar1);
		if (bVar3) {
			_Var6.genericMethod = (IntPtr)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			if (pSVar1 == null) goto label_0534c2fa;
			_Var6.genericMethod = pSVar1.ToLowerInvariant();
		}
		bVar3 = (pSVar5 == pSVar4);
		if ((bVar3) || (bVar3 = (local_78 == pSVar4))) {
			if (pSVar5 == null) goto label_0534c2fa;
			uVar8 = 0;
			local_70._4_4_ = pSVar5.IndexOf(pSVar4);
			if (-1 < (int)local_70._4_4_) {
				if (pSVar4 == null) goto label_0534c2fa;
				uVar8 = pSVar4._stringLength;
			}
			pIStack_60 = (Il2CppClass)**(ulong*)(g_data_07556758 + 0xb8);
			local_70._0_4_ = 100;
	label_0534beed: ;
			pSStack_58 = null;
			local_70._12_4_ = 0;
			local_70._8_4_ = uVar8;
			pSStack_58 = null;
	label_0534bf19: ;
			__return_storage_ptr__.HiddenText = (String)pIStack_60;
			__return_storage_ptr__.DisplayIndices = pSStack_58;
	label_0534c2e3: ;
			__return_storage_ptr__.Score = local_70._0_4_;
			__return_storage_ptr__.DisplayStart = local_70._4_4_;
			__return_storage_ptr__.DisplayLength = local_70._8_4_;
			*(uint)&__return_storage_ptr__.field_0xc = local_70._12_4_;
			return __return_storage_ptr__;
		}
		local_40.genericMethod = _Var6.genericMethod;
		if (pSVar5 == null) goto label_0534c2fa;
		uVar8 = 0;
		bVar3 = pSVar5.StartsWith(pSVar4);
		if (bVar3) {
	label_0534bf6b: ;
			local_70._4_4_ = pSVar5.IndexOf(pSVar4);
			if (-1 < (int)local_70._4_4_) {
				if (pSVar4 == null) {
	label_0534c2fa: ;
					throw new NullReferenceException();
				}
				uVar8 = pSVar4._stringLength;
			}
			pIStack_60 = (Il2CppClass)**(ulong*)(g_data_07556758 + 0xb8);
			local_70._0_4_ = 0x50;
			goto label_0534beed;
		}
		if (local_78 == null) goto label_0534c2fa;
		bVar3 = local_78.StartsWith(pSVar4);
		if (bVar3) goto label_0534bf6b;
		bVar3 = GisketchSearchService.FindToken(pSVar5, pSVar4, ref local_7c, ref local_80);
		if ((bVar3) ||(bVar3 = GisketchSearchService.FindToken(local_78, pSVar4, ref local_7c, ref local_80), pSVar1 = local_50, bVar3)) {
			query = (String)**(ulong*)(g_data_07556758 + 0xb8);
			__return_storage_ptr__.HiddenText = null;
			__return_storage_ptr__.DisplayIndices = null;
			__return_storage_ptr__.Score = 0;
			__return_storage_ptr__.DisplayStart = 0;
			*(ulong)&__return_storage_ptr__.DisplayLength = 0;
			score = 0x3c;
			displayStart = local_7c;
			displayLength = local_80;
		}
		else {
			pMVar7 = (MethodInfo)&local_80;
			bVar3 = GisketchSearchService.FindToken(local_50, pSVar4, ref local_7c, (int)pMVar7);
			if (bVar3) {
				query = GisketchSearchService.Slice(entry._Keywords_k__BackingField, local_7c, local_80);
				__return_storage_ptr__.Score = 0;
				__return_storage_ptr__.DisplayStart = 0;
				*(ulong)&__return_storage_ptr__.DisplayLength = 0;
				__return_storage_ptr__.HiddenText = null;
				__return_storage_ptr__.DisplayIndices = null;
				score = 0x3c;
	label_0534c07b: ;
				displayStart = -1;
				displayLength = 0;
			}
			else {
				bVar3 = GisketchSearchService.FindInitials(pSVar5, pSVar4, ref local_7c, ref local_80);
				if ((!bVar3) &&(bVar3 = GisketchSearchService.FindInitials(local_78, pSVar4, ref local_7c, ref local_80), !bVar3)) {
					pMVar7 = (MethodInfo)&local_80;
					bVar3 = GisketchSearchService.FindInitials(pSVar1, pSVar4, ref local_7c, (int)pMVar7);
					if (bVar3) {
						query = GisketchSearchService.Slice(entry._Keywords_k__BackingField, local_7c, local_80);
						__return_storage_ptr__.Score = 0;
						__return_storage_ptr__.DisplayStart = 0;
						*(ulong)&__return_storage_ptr__.DisplayLength = 0;
						__return_storage_ptr__.HiddenText = null;
						__return_storage_ptr__.DisplayIndices = null;
						score = 0x32;
						goto label_0534c07b;
					}
					bVar3 = GisketchSearchService.FindCompact(pSVar5, pSVar4, ref local_7c, ref local_80, (Int32[]*)&local_48.rgctx_data);
					if ((bVar3) ||(bVar3 = GisketchSearchService.FindCompact(local_78, pSVar4, ref local_7c, ref local_80, (Int32[]*)&local_48.rgctx_data))) {
						query = (String)**(ulong*)(g_data_07556758 + 0xb8);
						__return_storage_ptr__.HiddenText = null;
						__return_storage_ptr__.DisplayIndices = null;
						__return_storage_ptr__.Score = 0;
						__return_storage_ptr__.DisplayStart = 0;
						*(ulong)&__return_storage_ptr__.DisplayLength = 0;
						score = 0x2d;
						displayIndices.methodMetadataHandle = local_48.methodMetadataHandle;
						displayStart = local_7c;
						displayLength = local_80;
						goto label_0534c02c;
					}
					pMVar7 = (MethodInfo)&local_80;
					method_00 = (MethodInfo)&local_38;
					bVar3 = GisketchSearchService.FindCompact(pSVar1, pSVar4, ref local_7c, (int)pMVar7, (Int32[]*)method_00);
					if (bVar3) {
						query = GisketchSearchService.Slice(entry._Keywords_k__BackingField, local_7c, local_80);
						__return_storage_ptr__.Score = 0;
						__return_storage_ptr__.DisplayStart = 0;
						*(ulong)&__return_storage_ptr__.DisplayLength = 0;
						__return_storage_ptr__.HiddenText = null;
						__return_storage_ptr__.DisplayIndices = null;
						score = 0x2d;
						goto label_0534c07b;
					}
					bVar3 = pSVar5.Contains(pSVar4);
					if ((!bVar3) && (bVar3 = local_78.Contains(pSVar4), !bVar3)) {
						if (local_50 == null) goto label_0534c2fa;
						bVar3 = local_50.Contains(pSVar4);
						if (bVar3) {
							__return_storage_ptr__.HiddenText = null;
							__return_storage_ptr__.DisplayIndices = null;
							__return_storage_ptr__.Score = 0;
							__return_storage_ptr__.DisplayStart = 0;
							*(ulong)&__return_storage_ptr__.DisplayLength = 0;
							score = 0x28;
							displayStart = -1;
							displayLength = 0;
						}
						else {
							if (local_40.genericMethod == null) goto label_0534c2fa;
							bVar3 = local_40.genericMethod.Contains(pSVar4);
							if (!bVar3) goto label_0534c2da;
							query = (String)**(ulong*)(g_data_07556758 + 0xb8);
							__return_storage_ptr__.HiddenText = null;
							__return_storage_ptr__.DisplayIndices = null;
							__return_storage_ptr__.Score = 0;
							__return_storage_ptr__.DisplayStart = 0;
							*(ulong)&__return_storage_ptr__.DisplayLength = 0;
							score = 0x19;
							displayStart = -1;
							displayLength = 0;
						}
						goto label_0534c029;
					}
					GisketchSearchService.Visible((GisketchSearchMatch)local_70, pSVar5, pSVar4, 0x28);
					goto label_0534bf19;
				}
				query = (String)**(ulong*)(g_data_07556758 + 0xb8);
				__return_storage_ptr__.HiddenText = null;
				__return_storage_ptr__.DisplayIndices = null;
				__return_storage_ptr__.Score = 0;
				__return_storage_ptr__.DisplayStart = 0;
				*(ulong)&__return_storage_ptr__.DisplayLength = 0;
				score = 0x32;
				displayStart = local_7c;
				displayLength = local_80;
			}
		}
	label_0534c029: ;
		displayIndices.rgctx_data = null;
	label_0534c02c: ;
		__return_storage_ptr__ = new GisketchSearchMatch(score, displayStart, displayLength, query, (Int32[])displayIndices.rgctx_data);
		return __return_storage_ptr__;
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x524CA10", Offset = "0x524BA10", VA = "0x524CA10")]
	public static string Markup(GisketchSearchEntry entry, string query, bool active, string matchHex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$Markup): clean
		String pSVar1;

		if (entry == null) {
			pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar1 = entry.DisplayTitle;
		}
		pSVar1 = GisketchSearchService.Markup(entry, query, active, matchHex, pSVar1, null);
		return pSVar1;
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x524CA70", Offset = "0x524BA70", VA = "0x524CA70")]
	public static string Markup(GisketchSearchEntry entry, string query, bool active, string matchHex, string displayTitle, [Optional] string normalHex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$Markup): 1 lines keep C-only constructs
		GisketchSearchMatch match;
		bool bVar1;
		String pSVar2;
		GisketchSearchMatch local_38;

		pSVar2 = displayTitle;
		if (displayTitle == null) {
			pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		local_38 = GisketchSearchService.Match(entry, query, pSVar2);
		if ((local_38.Score < 2) || (local_38.DisplayStart < 0)) {
			bVar1 = String.IsNullOrEmpty(pSVar2);
			if (bVar1) {
				pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pSVar2 = pSVar2.Replace("<", "\xe2\x80\xb9");
			}
			pSVar2 = GisketchSearchService.WrapNormal(pSVar2, normalHex);
		}
		else {
			match.DisplayStart = local_38.DisplayStart;
			match.Score = local_38.Score;
			match.DisplayLength = local_38.DisplayLength;
			match._12_4_ = local_38._12_4_;
			match.HiddenText = local_38.HiddenText;
			match.DisplayIndices = local_38.DisplayIndices;
			pSVar2 = GisketchSearchService.MarkRange(pSVar2, match, false, matchHex, normalHex);
		}
		return pSVar2;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x524BB80", Offset = "0x524AB80", VA = "0x524BB80")]
	[IteratorStateMachine(typeof(_003CEmpty_003Ed__5))]
	private static IEnumerable<GisketchSearchEntry> Empty()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$Empty): clean
		int iVar1;
		GisketchSearchService.d__5<Empty> __this;

		__this = new GisketchSearchService.d__5<Empty>();
		__this.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this.__l__initialThreadId = iVar1;
		return (IEnumerable<GisketchSearchEntry>)__this;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x524C3A0", Offset = "0x524B3A0", VA = "0x524C3A0")]
	private static GisketchSearchMatch Visible(string display, string needle, int score)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$Visible): 1 lines keep C-only constructs
		long lVar1;
		int iVar2;
		String pSVar3;
		int iVar4;

		if (display == null) {
	label_0534c447: ;
			throw new NullReferenceException();
		}
		iVar4 = 0;
		iVar2 = display.IndexOf(needle);
		lVar1 = g_data_07556758;
		if (-1 < iVar2) {
			if (needle == null) goto label_0534c447;
			iVar4 = needle._stringLength;
		}
		pSVar3 = (String)**(long*)(g_data_07556758 + 0xb8);
		*(ulong)&__return_storage_ptr__.DisplayLength = 0;
		__return_storage_ptr__.HiddenText = null;
		__return_storage_ptr__.DisplayIndices = null;
		__return_storage_ptr__.Score = score;
		__return_storage_ptr__.DisplayStart = iVar2;
		__return_storage_ptr__.DisplayLength = iVar4;
		if (pSVar3 == null) {
			pSVar3 = (String)**(long*)(lVar1 + 0xb8);
		}
		__return_storage_ptr__.HiddenText = pSVar3;
		__return_storage_ptr__.DisplayIndices = null;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x524CD70", Offset = "0x524BD70", VA = "0x524CD70")]
	private static string MarkRange(string text, GisketchSearchMatch match, bool active, string matchHex, string normalHex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$MarkRange): clean
		bool bVar1;
		String pSVar2;
		String pSVar3;
		String pSVar4;

		if ((match.DisplayIndices != null) &&((match.DisplayIndices).Length != 0)) {
			pSVar2 = GisketchSearchService.MarkIndices(text, match.DisplayIndices, matchHex, normalHex);
			return pSVar2;
		}
		if ((-1 < match.DisplayStart) && (0 < match.DisplayLength)) {
			if (text == null) goto label_0534d04a;
			if (match.DisplayLength + match.DisplayStart <= text._stringLength) {
				pSVar2 = text.Substring(0, match.DisplayStart);
				bVar1 = String.IsNullOrEmpty(pSVar2);
				if (bVar1) {
					pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				else {
					if (pSVar2 == null) goto label_0534d04a;
					pSVar2 = pSVar2.Replace("<", "\xe2\x80\xb9");
				}
				pSVar2 = GisketchSearchService.WrapNormal(pSVar2, normalHex);
				pSVar3 = text.Substring(match.DisplayStart, match.DisplayLength);
				bVar1 = String.IsNullOrEmpty(pSVar3);
				if (bVar1) {
					pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				else {
					if (pSVar3 == null) goto label_0534d04a;
					pSVar3 = pSVar3.Replace("<", "\xe2\x80\xb9");
				}
				pSVar3 = GisketchSearchService.Wrap(pSVar3, matchHex);
				pSVar4 = text.Substring(match.DisplayLength + match.DisplayStart);
				bVar1 = String.IsNullOrEmpty(pSVar4);
				if (bVar1) {
					pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				else {
					if (pSVar4 == null) goto label_0534d04a;
					pSVar4 = pSVar4.Replace("<", "\xe2\x80\xb9");
				}
				pSVar4 = GisketchSearchService.WrapNormal(pSVar4, normalHex);
				pSVar2 = String.Concat(pSVar2, pSVar3, pSVar4);
				return pSVar2;
			}
		}
		bVar1 = String.IsNullOrEmpty(text);
		if (bVar1) {
			pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			if (text == null) {
	label_0534d04a: ;
				throw new NullReferenceException();
			}
			pSVar2 = text.Replace("<", "\xe2\x80\xb9");
		}
		pSVar2 = GisketchSearchService.WrapNormal(pSVar2, normalHex);
		return pSVar2;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x524D080", Offset = "0x524C080", VA = "0x524D080")]
	private static string MarkIndices(string text, int[] indices, string matchHex, string normalHex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$MarkIndices): 7 lines keep C-only constructs
		sbyte cVar1;
		ulong uVar2;
		bool bVar3;
		int iVar4;
		object pIVar5;
		StringBuilder __this;
		long lVar6;
		String pSVar7;
		int iVar8;
		ulong uVar9;
		uint startIndex;
		uint uVar11;
		uint uVar12;
		long lVar13;

		if ((text != null) &&(pIVar5 = new bool[text._stringLength], indices != null)) {
			uVar2 = indices.Length;
			iVar4 = (int)uVar2;
			if (pIVar5 == null) {
				if (0 < iVar4) {
					iVar8 = 0;
					do {
						if (-1 < indices[iVar8]) goto label_0534d31e;
						iVar8 = iVar8 + 1;
					} while (iVar4 != iVar8);
				}
			}
			else if (0 < iVar4) {
				uVar9 = 0;
				do {
					uVar11 = indices[uVar9];
					if ((-1 < (int)uVar11) && ((int)uVar11 < (int)*(uint)&pIVar5[1].monitor)) {
						if (*(uint)&pIVar5[1].monitor <= uVar11) goto label_0534d319;
						*(byte)((long)&pIVar5[2].klass + (ulong)uVar11) = 1;
					}
					uVar9 = uVar9 + 1;
				} while ((uVar2 & 0xffffffff) != uVar9);
			}
			__this = new StringBuilder();
			uVar11 = text._stringLength;
			if ((int)uVar11 < 1) {
				if (__this != null) goto label_0534d2f4;
			}
			else if (pIVar5 != null) {
				startIndex = 0;
				do {
					if (*(uint)&pIVar5[1].monitor <= startIndex) {
	label_0534d319: ;
						throw new IndexOutOfRangeException();
					}
					lVar6 = (long)(int)startIndex;
					cVar1 = *(sbyte)((long)&pIVar5[2].klass + lVar6);
					uVar12 = startIndex;
					if ((int)startIndex < (int)uVar11) {
						lVar13 = 0;
						do {
							if (*(uint)&pIVar5[1].monitor <= startIndex + (int)lVar13) goto label_0534d319;
							if ((cVar1 != false) != (*(sbyte)((long)&pIVar5[2].klass + lVar13 + lVar6) != false)) {
								uVar12 = (int)lVar13 + startIndex;
								break;
							}
							lVar13 = lVar13 + 1;
							uVar12 = uVar11;
						} while ((int)uVar11 - lVar6 != lVar13);
					}
					pSVar7 = text.Substring(startIndex, uVar12 - startIndex);
					bVar3 = String.IsNullOrEmpty(pSVar7);
					if (bVar3) {
						pSVar7 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						if (cVar1 != false) goto label_0534d271;
	label_0534d2c2: ;
						pSVar7 = GisketchSearchService.WrapNormal(pSVar7, normalHex);
					}
					else {
						if (pSVar7 == null) goto label_0534d31e;
						pSVar7 = pSVar7.Replace("<", "\xe2\x80\xb9");
						if (cVar1 == false) goto label_0534d2c2;
	label_0534d271: ;
						pSVar7 = GisketchSearchService.Wrap(pSVar7, matchHex);
					}
					if (__this == null) goto label_0534d31e;
					__this.Append(pSVar7);
					uVar11 = text._stringLength;
					startIndex = uVar12;
				} while ((int)uVar12 < (int)uVar11);
	label_0534d2f4: ;
				pSVar7 = __this.ToString();
				return pSVar7;
			}
		}
	label_0534d31e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x524D330", Offset = "0x524C330", VA = "0x524D330")]
	private static string Wrap(string text, string matchHex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$Wrap): clean
		String[] values;
		String pSVar1;

		values = (String[])new string[5];
		if (values == null) {
			throw new NullReferenceException();
		}
		if ((int)values.Length != 0) {
			values[0] = "<color=#";
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = matchHex;
				if (2 < (uint)values.Length) {
					values[2] = ">";
					if ((values.Length & 0xfffffffc) != 0) {
						values[3] = text;
						if (4 < (uint)values.Length) {
							values[4] = "</color>";
							return pSVar1;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x524CC30", Offset = "0x524BC30", VA = "0x524CC30")]
	private static string WrapNormal(string text, string normalHex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$WrapNormal): clean
		bool bVar1;
		String[] values;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(normalHex);
		if (!bVar1) {
			bVar1 = String.IsNullOrEmpty(text);
			if (!bVar1) {
				values = (String[])new string[5];
				if (values == null) {
					throw new NullReferenceException();
				}
				if ((int)values.Length != 0) {
					values[0] = "<color=#";
					if ((values.Length & 0xfffffffe) != 0) {
						values[1] = normalHex;
						if (2 < (uint)values.Length) {
							values[2] = ">";
							if ((values.Length & 0xfffffffc) != 0) {
								values[3] = text;
								if (4 < (uint)values.Length) {
									values[4] = "</color>";
									return pSVar2;
								}
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		return text;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x524CBB0", Offset = "0x524BBB0", VA = "0x524CBB0")]
	private static string Escape(string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$Escape): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(text);
		if (bVar1) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (text == null) {
			throw new NullReferenceException();
		}
		pSVar2 = text.Replace("<", "\xe2\x80\xb9");
		return pSVar2;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x524C300", Offset = "0x524B300", VA = "0x524C300")]
	private static string Lower(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$Lower): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (value == null) {
			throw new NullReferenceException();
		}
		return pSVar2;
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x524C450", Offset = "0x524B450", VA = "0x524C450")]
	private static bool FindToken(string haystack, string needle, out int start, out int length)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$FindToken): 1 lines keep C-only constructs
		int iVar1;
		bool bVar2;
		bool bVar3;
		ushort uVar4;
		String a;
		int index;

		*start = -1;
		*length = 0;
		index = 0;
		bVar2 = String.IsNullOrEmpty(haystack);
		if (!bVar2) {
			if (haystack == null) {
	label_0534c5c2: ;
				throw new NullReferenceException();
			}
			iVar1 = haystack._stringLength;
			index = 0;
			if (needle == null) {
				if (iVar1 < 1) goto label_0534c5b1;
				bVar2 = true;
				do {
					uVar4 = haystack.get_Chars(index);
					bVar3 = Char.IsLetterOrDigit(uVar4);
					if ((bVar2 & bVar3) != 0) goto label_0534c5c2;
					index = index + 1;
					bVar2 = !bVar3;
				} while (index < haystack._stringLength);
			}
			else {
				if (iVar1 < 1) goto label_0534c5b1;
				bVar2 = true;
				do {
					uVar4 = haystack.get_Chars(index);
					bVar3 = Char.IsLetterOrDigit(uVar4);
					if ((bVar2 & bVar3) == 1) {
						iVar1 = needle._stringLength;
						if (haystack._stringLength < index + iVar1) {
							bVar2 = false;
						}
						else {
							bVar2 = false;
							a = haystack.Substring(index, iVar1);
							bVar3 = (a == needle);
							if (bVar3) {
								*start = index;
								*length = needle._stringLength;
								index = 1;
								goto label_0534c5b1;
							}
						}
					}
					else {
						bVar2 = !bVar3;
					}
					index = index + 1;
				} while (index < haystack._stringLength);
			}
			index = 0;
		}
	label_0534c5b1: ;
		return SUB41(index, 0);
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x524C640", Offset = "0x524B640", VA = "0x524C640")]
	private static bool FindInitials(string haystack, string needle, out int start, out int length)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$FindInitials): 2 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		ushort c;
		ushort uVar3;
		int iVar4;
		int iVar5;
		int index;

		*start = -1;
		*length = 0;
		bVar1 = String.IsNullOrEmpty(haystack);
		if (bVar1) {
			return false;
		}
		bVar1 = String.IsNullOrEmpty(needle);
		if (bVar1) {
			return false;
		}
		if (needle != null) {
			iVar5 = needle._stringLength;
			if (iVar5 < 2) {
				return false;
			}
			if (haystack != null) {
				iVar4 = haystack._stringLength;
				if (iVar4 < 1) {
					if (iVar5 != 0) {
						return false;
					}
				}
				else {
					bVar1 = true;
					iVar5 = 0;
					index = 0;
					do {
						c = haystack.get_Chars(iVar5);
						bVar2 = Char.IsLetterOrDigit(c);
						if ((bVar1 & bVar2) == 1) {
							if (index < needle._stringLength) {
								bVar1 = false;
								uVar3 = needle.get_Chars(index);
								if (c != uVar3) goto label_0534c6d5;
								iVar4 = *start;
								if (*start < 0) {
									*start = iVar5;
									iVar4 = iVar5;
								}
								index = index + 1;
								*length = (iVar5 - iVar4) + 1;
							}
							bVar1 = false;
						}
						else {
							bVar1 = !bVar2;
						}
	label_0534c6d5: ;
						iVar5 = iVar5 + 1;
						iVar4 = haystack._stringLength;
					} while (iVar5 < iVar4);
					if (index != needle._stringLength) {
						return false;
					}
				}
				*length = iVar4 - *start;
				return true;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x524C7B0", Offset = "0x524B7B0", VA = "0x524C7B0")]
	private static bool FindCompact(string haystack, string needle, out int start, out int length, out int[] indices)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$FindCompact): clean
		int iVar1;
		bool bVar2;
		ushort uVar3;
		ushort uVar4;
		int iVar5;
		Int32[] pSVar6;
		int iVar7;
		int iVar8;
		int index;
		uint length_00;
		uint index_00;
		int local_5c;

		*start = -1;
		*length = 0;
		*indices = null;
		bVar2 = String.IsNullOrEmpty(haystack);
		if ((!bVar2) && (bVar2 = String.IsNullOrEmpty(needle), !bVar2)) {
			if (needle == null) {
	label_0534c9ff: ;
				throw new NullReferenceException();
			}
			length_00 = needle._stringLength;
			if (2 < (int)length_00) {
				if (haystack == null) goto label_0534c9ff;
				if (0 < haystack._stringLength) {
					local_5c = 1;
					iVar7 = 0;
					do {
						pSVar6 = (Int32[])new int[length_00];
						iVar5 = haystack._stringLength;
						index_00 = 0;
						iVar8 = iVar7;
						if (iVar7 < iVar5) {
							iVar1 = needle._stringLength;
							if (pSVar6 == null) {
								index = iVar7;
								if (0 < iVar1) {
									do {
										uVar3 = haystack.get_Chars(index);
										uVar4 = needle.get_Chars(0);
										if (uVar3 == uVar4) goto label_0534c9ff;
										iVar8 = index + 1;
										iVar5 = haystack._stringLength;
									} while ((iVar8 < iVar5) && (index = index + 1, 0 < needle._stringLength));
								}
							}
							else if (0 < iVar1) {
								index_00 = 0;
								iVar1 = local_5c;
								do {
									iVar8 = iVar1;
									uVar3 = haystack.get_Chars(iVar8 + -1);
									uVar4 = needle.get_Chars(index_00);
									if (uVar3 == uVar4) {
										if ((uint)pSVar6.Length <= index_00) {
											throw new IndexOutOfRangeException();
										}
										pSVar6[(int)index_00] = iVar8 + -1;
										index_00 = index_00 + 1;
										iVar5 = haystack._stringLength;
									}
									else {
										iVar5 = haystack._stringLength;
									}
								} while ((iVar8 < iVar5) && (iVar1 = iVar8 + 1, (int)index_00 < needle._stringLength)) ;
							}
						}
						length_00 = needle._stringLength;
						if ((index_00 == length_00) && (iVar8 - iVar7 <= (int)(length_00 * 2))) {
							*start = iVar7;
							*length = iVar8 - iVar7;
							*indices = pSVar6;
							return true;
						}
						iVar7 = iVar7 + 1;
						local_5c = local_5c + 1;
					} while (iVar7 < iVar5);
				}
			}
		}
		return false;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x524D450", Offset = "0x524C450", VA = "0x524D450")]
	private static bool MatchesAt(string haystack, string needle, int start)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$MatchesAt): clean
		int length;
		bool bVar1;
		String a;

		if ((needle == null) || (haystack == null)) {
			throw new NullReferenceException();
		}
		length = needle._stringLength;
		if (haystack._stringLength < length + start) {
			return false;
		}
		a = haystack.Substring(start, length);
		bVar1 = (a == needle);
		return bVar1;
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x524C5D0", Offset = "0x524B5D0", VA = "0x524C5D0")]
	private static string Slice(string value, int start, int length)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c (Gisketch.Aottg2UI.Search.GisketchSearchService$$Slice): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(value);
		if ((-1 < start) && (!bVar1)) {
			if (value == null) {
				throw new NullReferenceException();
			}
			if (length + start <= value._stringLength) {
				pSVar2 = value.Substring(start, length);
				return pSVar2;
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchService.c.

	// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(GisketchSearchService.c)) ;
		__this = new Object();
		GisketchSearchService.c.__9 =(GisketchSearchService.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Search.GisketchSearchService.<>c$$<Query>b__0_0: clean
	private int c__Query_b__0_0(GisketchSearchService.ScoredEntry a, GisketchSearchService.ScoredEntry b)
	{
		int iVar1;
		int[] local_8 = new int[2];

		local_8[0] = b.Score;
		if (local_8[0] != a.Score) {
			return iVar1;
		}
		if ((a.Entry == null) ||(b.Entry == null)) {
			throw new NullReferenceException();
		}
		iVar1 = String.CompareOrdinal(((a.Entry).fields)._Title_k__BackingField, ((b.Entry).fields)._Title_k__BackingField);
		return iVar1;
	}
}
