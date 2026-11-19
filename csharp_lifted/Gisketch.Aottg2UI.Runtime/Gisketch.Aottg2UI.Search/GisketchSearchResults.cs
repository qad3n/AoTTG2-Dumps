// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Search.GisketchSearchResults
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x200003B")]
public static class GisketchSearchResults
{
	[Token(Token = "0x200003C")]
	[CompilerGenerated]
	private sealed class _003CEmpty_003Ed__7 : IEnumerable<GisketchSearchEntry>, IEnumerable, IEnumerator<GisketchSearchEntry>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400012D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400012E")]
		[FieldOffset(Offset = "0x18")]
		private GisketchSearchEntry _003C_003E2__current;

		[Token(Token = "0x400012F")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000033")]
		private GisketchSearchEntry System_002ECollections_002EGeneric_002EIEnumerator_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002ECurrent
		{
			[Token(Token = "0x6000227")]
			[Address(RVA = "0x524B2E0", Offset = "0x524A2E0", VA = "0x524B2E0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.Collections.Generic.IEnumerator<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000034")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000229")]
			[Address(RVA = "0x524B330", Offset = "0x524A330", VA = "0x524B330", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.Collections.IEnumerator.get_Current): clean
				return (object)this.__2__current;
			}
		}

		[Token(Token = "0x6000224")]
		[Address(RVA = "0x524B280", Offset = "0x524A280", VA = "0x524B280")]
		[DebuggerHidden]
		public _003CEmpty_003Ed__7(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x6000225")]
		[Address(RVA = "0x524B2B0", Offset = "0x524A2B0", VA = "0x524B2B0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000226")]
		[Address(RVA = "0x524B2C0", Offset = "0x524A2C0", VA = "0x524B2C0", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$MoveNext): clean
			if (this.__1__state == 0) {
				this.__1__state = -1;
				return false;
			}
			return false;
		}

		[Token(Token = "0x6000228")]
		[Address(RVA = "0x524B2F0", Offset = "0x524A2F0", VA = "0x524B2F0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchResults_Empty_d__7_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}

		[Token(Token = "0x600022A")]
		[Address(RVA = "0x524B340", Offset = "0x524A340", VA = "0x524B340", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<GisketchSearchEntry> System_002ECollections_002EGeneric_002EIEnumerable_003CGisketch_002EAottg2UI_002ESearch_002EGisketchSearchEntry_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.Collections.Generic.IEnumerable<Gisketch.Aottg2UI.Search.GisketchSearchEntry>.GetEnumerator): clean
			int iVar1;
			int iVar2;
			GisketchSearchResults.d__7<Empty> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator<GisketchSearchEntry>)this;
			}
			__this_00 = new GisketchSearchResults.d__7<Empty>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			return (IEnumerator<GisketchSearchEntry>)__this_00;
		}

		[Token(Token = "0x600022B")]
		[Address(RVA = "0x524B3C0", Offset = "0x524A3C0", VA = "0x524B3C0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults.<Empty>d__7$$System.Collections.IEnumerable.GetEnumerator): clean
			int iVar1;
			int iVar2;
			GisketchSearchResults.d__7<Empty> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator)this;
			}
			__this_00 = new GisketchSearchResults.d__7<Empty>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			return (IEnumerator)__this_00;
		}
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x5249CF0", Offset = "0x5248CF0", VA = "0x5249CF0")]
	public static List<GisketchSearchEntry> Merge(IEnumerable<GisketchSearchEntry> manifest, IEnumerable<GisketchSearchEntry> live, string activeScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults$$Merge): 35 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		OrdinalIgnoreCaseComparer comparer;
		GisketchSearchResults.d__7<Empty> pGVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		Il2CppClass pIVar6;
		GisketchSearchEntry[] pGVar7;
		sbyte cVar8;
		bool bVar9;
		List<GisketchSearchEntry> __this;
		HashSet<string> screenTitles;
		HashSet<string> __this_00;
		VirtualInvokeData pVVar10;
		object pIVar11;
		MethodInfo pMVar12;
		GisketchSearchEntry pGVar13;
		GisketchSearchResults.d__7<Empty> __this_01;
		ulong uVar14;
		MethodInfo method_00;
		long lVar15;
		object local_90;
		byte[] local_88 = new byte[16];
		GisketchSearchEntry local_78;
		HashSet<string> local_70;
		List<GisketchSearchEntry> local_68;
		HashSet<string> local_60;
		byte[] local_58 = new byte[8];
		ulong uStack_50;
		GisketchSearchEntry local_48;
		GisketchSearchResults.d__7<Empty> local_38;

		if (Il2CppMethodInitialized_075428ee == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075428ee = true;
		}
		local_90 = null;
		local_58 = (byte[])0x0;
		uStack_50._0_4_ = 0;
		uStack_50._4_4_ = 0;
		local_48 = null;
		__this = new List<GisketchSearchEntry>();
		if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07542886 != false) goto label_05349e3d;
	label_05349fb7: ;
			Il2CppMethodInitialized_07542886 = true;
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07542886 == false) goto label_05349fb7;
	label_05349e3d: ;
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pMVar12 = (MethodInfo)StringComparer.s_ordinalIgnoreCase;
		local_60 = new HashSet<string>((IEqualityComparer<T>)pMVar12);
		local_38 = (GisketchSearchResults.d__7<Empty>)manifest;
		screenTitles = GisketchSearchResults.ScreenTitles(manifest);
		local_68 = new List<GisketchSearchEntry>();
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this_00 = new HashSet<string>((IEqualityComparer<T>)comparer);
		if (live == null) {
			live = new GisketchSearchResults.d__7<Empty>(-2);
			if ((GisketchSearchResults.d__7<Empty>)live ==null) {
	label_0534a817: ;
				throw new NullReferenceException();
			}
		}
		pGVar4 = ((GisketchSearchResults.d__7<Empty>)live).klass;
		uVar14 = (ulong)(pGVar4._2).interface_offsets_count;
		local_70 = __this_00;
		pIVar11 = live.Dispose();
		local_88._0_8_ = null;
		local_88._8_8_ = &local_90;
	joined_r0x0534a051: ;
		do {
			local_90 = pIVar11;
			if (pIVar11 == null) {
				throw new NullReferenceException();
			}
			pIVar6 = pIVar11.klass;
			uVar14 = (ulong)(pIVar6._2).interface_offsets_count;
			cVar8 = pIVar11.Dispose();
			pIVar11 = local_90;
			if (cVar8 == false) {
				if (local_90 == null) goto label_0534a2a6;
				pIVar6 = local_90.klass;
				uVar14 = (ulong)(pIVar6._2).interface_offsets_count;
				if (uVar14 == 0) goto label_0534a27f;
				pIVar5 = (pIVar6._1).interfaceOffsets;
				lVar15 = 0;
				goto label_0534a270;
			}
			if (local_90 == null) {
				throw new NullReferenceException();
			}
			pIVar6 = local_90.klass;
			uVar14 = (ulong)(pIVar6._2).interface_offsets_count;
			if (uVar14 != 0) {
				pIVar5 = (pIVar6._1).interfaceOffsets;
				lVar15 = 0;
				do {
					if (*(IEnumerator<GisketchSearchEntry>*)((long)&pIVar5.interfaceType + lVar15) == typeof(IEnumerator<GisketchSearchEntry>)) {
						pMVar12 = (MethodInfo)&pIVar6.vtable[*(int)((long)&pIVar5.offset + lVar15)].methodPtr;
						goto label_0534a153;
					}
					lVar15 = lVar15 + 0x10;
				} while (uVar14 * 0x10 != lVar15);
			}
			pMVar12 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(local_90, (Il2CppClass)typeof(IEnumerator<GisketchSearchEntry>), 0);
	label_0534a153: ;
			method_00 = (MethodInfo)pMVar12.virtualMethodPointer;
			pGVar13 = (GisketchSearchEntry)(*pMVar12.methodPointer)(pIVar11,method_00);
			pIVar11 = local_90;
		} while (((pGVar13 == null) ||(bVar9 = GisketchSearchResults.IsLiveUsable(pGVar13), pIVar11 = local_90, !bVar9)) ||(bVar9 = GisketchSearchResults.IsDuplicateMainMenuScreenButton(pGVar13, activeScreenId, screenTitles), pMVar12 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add, pIVar11 = local_90, bVar9));
		if (local_68 != null) {
			piVar1 = &local_68._version;
			*piVar1 = *piVar1 + 1;
			pGVar7 = local_68._items;
			if (pGVar7 != null) {
				uVar3 = local_68._size;
				if (uVar3 < (uint)pGVar7.Length) {
					local_68._size = uVar3 + 1;
					pGVar7[(int)uVar3] = pGVar13;
				}
				else {
					local_68.AddWithResize((object)pGVar13);
				}
				bVar9 = String.IsNullOrEmpty(pGVar13._TargetId_k__BackingField);
				pIVar11 = local_90;
				if (!bVar9) {
					if (local_70 == null) {
						throw new NullReferenceException();
					}
					local_70.Add((object)pGVar13._TargetId_k__BackingField);
					pIVar11 = local_90;
				}
				goto joined_r0x0534a051;
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar15 = lVar15 + 0x10;
			if (!(uVar14 * 0x10 != lVar15)) break;
	label_0534a270: ;
			if (*(IDisposable*)((long)&pIVar5.interfaceType + lVar15) == typeof(IDisposable)) {
				pVVar10 = (VirtualInvokeData)&pIVar6.vtable[*(int)((long)&pIVar5.offset + lVar15)].methodPtr;
				goto label_0534a29d;
			}
		}
	label_0534a27f: ;
	label_0534a29d: ;
		pIVar11.Dispose();
	label_0534a2a6: ;
		__this_01 = local_38;
		if (local_38 == null) {
			__this_01 = new GisketchSearchResults.d__7<Empty>(-2);
			if (__this_01 == null) goto label_0534a817;
		}
		pGVar4 = __this_01.klass;
		uVar14 = (ulong)(pGVar4._2).interface_offsets_count;
		pIVar11 = __this_01.Dispose();
		local_88._0_8_ = null;
		local_88._8_8_ = &local_90;
	joined_r0x0534a398: ;
		local_90 = pIVar11;
		if (pIVar11 == null) {
			throw new NullReferenceException();
		}
		pIVar6 = pIVar11.klass;
		uVar14 = (ulong)(pIVar6._2).interface_offsets_count;
		cVar8 = pIVar11.Dispose();
		pIVar11 = local_90;
		if (cVar8 != false) {
			if (local_90 == null) {
				throw new NullReferenceException();
			}
			pIVar6 = local_90.klass;
			uVar14 = (ulong)(pIVar6._2).interface_offsets_count;
			pGVar13 = (GisketchSearchEntry)pIVar11.Dispose() ;
			if ((((pGVar13 != null) &&(bVar9 = String.IsNullOrEmpty(pGVar13._ScreenId_k__BackingField), !bVar9)) && (bVar9 = String.IsNullOrEmpty(activeScreenId), !bVar9)) &&(((pMVar12 = (MethodInfo)activeScreenId, bVar9 = String.Equals(pGVar13._ScreenId_k__BackingField, activeScreenId, 5), bVar9 && (bVar9 = GisketchSearchResults.IsInteractiveControlKind(pGVar13._Kind_k__BackingField))) &&(bVar9 = String.IsNullOrEmpty(pGVar13._TargetId_k__BackingField), !bVar9)))) goto code_r0x0534a504;
			goto label_0534a530;
		}
		if (local_90 == null) goto label_0534a696;
		pIVar6 = local_90.klass;
		uVar14 = (ulong)(pIVar6._2).interface_offsets_count;
		if (uVar14 == 0) goto label_0534a66f;
		pIVar5 = (pIVar6._1).interfaceOffsets;
		lVar15 = 0;
		goto label_0534a660;
		while (true) {
			lVar15 = lVar15 + 0x10;
			if (!(uVar14 * 0x10 != lVar15)) break;
	label_0534a660: ;
			if (*(IDisposable*)((long)&pIVar5.interfaceType + lVar15) == typeof(IDisposable)) {
				pVVar10 = (VirtualInvokeData)&pIVar6.vtable[*(int)((long)&pIVar5.offset + lVar15)].methodPtr;
				goto label_0534a68d;
			}
		}
	label_0534a66f: ;
	label_0534a68d: ;
		pIVar11.Dispose();
	label_0534a696: ;
		if (local_68 != null) {
			local_88.GetEnumerator((List<object>)local_68);
			local_48 = local_78;
			local_58 = (byte[])local_88._0_8_;
			uStack_50 = (object*)local_88._8_8_;
			local_88._0_8_ = null;
			local_88._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_58;
	label_0534a72a: ;
			bVar9 = local_58.MoveNext();
			pGVar13 = local_48;
			if (!bVar9) {
				local_58.Dispose();
				return __this;
			}
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			bVar9 = String.IsNullOrEmpty(local_48._TargetId_k__BackingField);
			if (!bVar9) goto code_r0x0534a756;
			goto label_0534a775;
		}
		goto label_0534a817;
	code_r0x0534a756: ;
		if (local_60 == null) {
			throw new NullReferenceException();
		}
		bVar9 = local_60.Contains((object)pGVar13._TargetId_k__BackingField);
		if (!bVar9) {
	label_0534a775: ;
			pMVar12 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
			if (__this != null) {
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pGVar7 = __this._items;
				if (pGVar7 != null) {
					uVar3 = __this._size;
					if (uVar3 < (uint)pGVar7.Length) {
						__this._size = uVar3 + 1;
						pGVar7[(int)uVar3] = pGVar13;
					}
					else {
						__this.AddWithResize((object)pGVar13);
					}
					goto label_0534a72a;
				}
			}
			throw new NullReferenceException();
		}
		goto label_0534a72a;
	code_r0x0534a504: ;
		if (local_70 == null) {
			throw new NullReferenceException();
		}
		bVar9 = local_70.Contains((object)pGVar13._TargetId_k__BackingField);
		pIVar11 = local_90;
		if (bVar9) {
	label_0534a530: ;
			pMVar12 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
			if (__this != null) {
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pGVar7 = __this._items;
				if (pGVar7 != null) {
					uVar3 = __this._size;
					if (uVar3 < (uint)pGVar7.Length) {
						__this._size = uVar3 + 1;
						pGVar7[(int)uVar3] = pGVar13;
					}
					else {
						__this.AddWithResize((object)pGVar13);
					}
					pIVar11 = local_90;
					if (((pGVar13 != null) &&(bVar9 = String.IsNullOrEmpty(pGVar13._ScreenId_k__BackingField), pIVar11 = local_90, !bVar9)) &&((bVar9 = String.IsNullOrEmpty(activeScreenId), pIVar11 = local_90, !bVar9 && ((bVar9 = String.Equals(pGVar13._ScreenId_k__BackingField, activeScreenId, 5), pIVar11 = local_90, bVar9 &&(bVar9 = String.IsNullOrEmpty(pGVar13._TargetId_k__BackingField), pIVar11 = local_90, !bVar9)))))) {
						if (local_60 == null) {
							throw new NullReferenceException();
						}
						local_60.Add((object)pGVar13._TargetId_k__BackingField);
						pIVar11 = local_90;
					}
					goto joined_r0x0534a398;
				}
			}
			throw new NullReferenceException();
		}
		goto joined_r0x0534a398;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x524A950", Offset = "0x5249950", VA = "0x524A950")]
	private static HashSet<string> ScreenTitles(IEnumerable<GisketchSearchEntry> entries)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults$$ScreenTitles): 8 lines keep C-only constructs
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		GisketchSearchResults.d__7<Empty> pGVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		Il2CppClass pIVar4;
		sbyte cVar5;
		bool bVar6;
		HashSet<string> __this;
		VirtualInvokeData pVVar7;
		object pIVar8;
		object pIVar9;
		ulong uVar10;
		long lVar11;
		object local_48;
		byte local_38;

		local_48 = null;
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this = new HashSet<string>((IEqualityComparer<T>)comparer);
		if (entries == null) {
			entries = new GisketchSearchResults.d__7<Empty>(-2);
			if ((GisketchSearchResults.d__7<Empty>)entries ==null) {
				throw new NullReferenceException();
			}
		}
		pGVar2 = ((GisketchSearchResults.d__7<Empty>)entries).klass;
		uVar10 = (ulong)(pGVar2._2).interface_offsets_count;
		pIVar8 = entries.Dispose();
		local_38 = (byte)&local_48;
		do {
			local_48 = pIVar8;
			if (pIVar8 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = pIVar8.klass;
			uVar10 = (ulong)(pIVar4._2).interface_offsets_count;
			cVar5 = pIVar8.Dispose();
			pIVar8 = local_48;
			if (cVar5 == false) {
				if (local_48 == null) {
					return __this;
				}
				pIVar4 = local_48.klass;
				uVar10 = (ulong)(pIVar4._2).interface_offsets_count;
				if (uVar10 == 0) goto label_0534ad0f;
				pIVar3 = (pIVar4._1).interfaceOffsets;
				lVar11 = 0;
				break;
			}
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = local_48.klass;
			uVar10 = (ulong)(pIVar4._2).interface_offsets_count;
			pIVar9 = pIVar8.Dispose();
			pIVar8 = local_48;
			if (((pIVar9 != null) &&(bVar6 = String.Equals((String)pIVar9[7].klass, "screen", 5), pIVar8 = local_48, bVar6)) &&(bVar6 = String.IsNullOrEmpty(pIVar9[5].monitor), pIVar8 = local_48, !bVar6)) {
				if (__this == null) {
					throw new NullReferenceException();
				}
				__this.Add(pIVar9[5].monitor);
				pIVar8 = local_48;
			}
		} while(true);
		while (true) {
			lVar11 = lVar11 + 0x10;
			if (!(uVar10 * 0x10 != lVar11)) break;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar11) == typeof(IDisposable)) {
				pVVar7 = pIVar4.vtable + *(int)((long)&pIVar3.offset + lVar11);
				goto label_0534ad2d;
			}
		}
	label_0534ad0f: ;
	label_0534ad2d: ;
		pIVar8.Dispose();
		return __this;
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x524AF90", Offset = "0x5249F90", VA = "0x524AF90")]
	private static bool IsDuplicateMainMenuScreenButton(GisketchSearchEntry entry, string activeScreenId, HashSet<string> screenTitles)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsDuplicateMainMenuScreenButton): 1 lines keep C-only constructs
		String __this;
		bool bVar1;

		if (Il2CppMethodInitialized_075428f0 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075428f0 = true;
		}
		bVar1 = String.Equals(activeScreenId, "main-menu", 5);
		if ((entry != null) && (bVar1)) {
			bVar1 = String.IsNullOrEmpty(entry._TargetId_k__BackingField);
			if (!bVar1) {
				__this = entry._TargetId_k__BackingField;
				if (__this == null) {
					throw new NullReferenceException();
				}
				bVar1 = __this.StartsWith("main-menu-option-", 5);
				if ((screenTitles != null) && (bVar1)) {
					bVar1 = screenTitles.Contains((object)entry._Title_k__BackingField);
					return bVar1;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x524B0C0", Offset = "0x524A0C0", VA = "0x524B0C0")]
	private static bool IsActive(GisketchSearchEntry entry, string activeScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsActive): clean
		bool bVar1;

		if (entry != null) {
			bVar1 = String.IsNullOrEmpty(entry._ScreenId_k__BackingField);
			if (!bVar1) {
				bVar1 = String.IsNullOrEmpty(activeScreenId);
				if (!bVar1) {
					bVar1 = String.Equals(entry._ScreenId_k__BackingField, activeScreenId, 5);
					return bVar1;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x524B060", Offset = "0x524A060", VA = "0x524B060")]
	private static bool IsActiveInteractiveControl(GisketchSearchEntry entry, string activeScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsActiveInteractiveControl): clean
		bool bVar1;

		if (entry != null) {
			bVar1 = String.IsNullOrEmpty(entry._ScreenId_k__BackingField);
			if (!bVar1) {
				bVar1 = String.IsNullOrEmpty(activeScreenId);
				if (!bVar1) {
					bVar1 = String.Equals(entry._ScreenId_k__BackingField, activeScreenId, 5);
					if (bVar1) {
						bVar1 = GisketchSearchResults.IsInteractiveControlKind(entry._Kind_k__BackingField);
						return bVar1;
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x524B110", Offset = "0x524A110", VA = "0x524B110")]
	private static bool IsInteractiveControlKind(string kind)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsInteractiveControlKind): clean
		bool bVar1;

		bVar1 = String.Equals(kind, "Button", 5);
		if (!bVar1) {
			bVar1 = String.Equals(kind, "SpriteButton", 5);
			if (!bVar1) {
				bVar1 = String.Equals(kind, "InputField", 5);
				if (!bVar1) {
					bVar1 = String.Equals(kind, "TextArea", 5);
					if (!bVar1) {
						bVar1 = String.Equals(kind, "Dropdown", 5);
						if (!bVar1) {
							bVar1 = String.Equals(kind, "Select", 5);
							if (!bVar1) {
								bVar1 = String.Equals(kind, "input", 5);
								if (!bVar1) {
									bVar1 = String.Equals(kind, "select", 5);
									return bVar1;
								}
							}
						}
					}
				}
			}
		}
		return true;
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x524AE10", Offset = "0x5249E10", VA = "0x524AE10")]
	private static bool IsLiveUsable(GisketchSearchEntry entry)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults$$IsLiveUsable): clean
		Object x;
		GameObject pUVar1;
		bool bVar2;
		Selectable x_00;
		GisketchFocusRing x_01;

		if (entry != null) {
			x = (Object)entry._Target_k__BackingField;
			bVar2 = (x == null);
			if (bVar2) {
				return true;
			}
			pUVar1 = entry._Target_k__BackingField;
			if (pUVar1 != null) {
				x_00 = pUVar1.GetComponent<Selectable>();
				pUVar1 = entry._Target_k__BackingField;
				if (pUVar1 != null) {
					bVar2 = pUVar1.activeInHierarchy;
					if (bVar2) {
						bVar2 = ((Object)x_00 != null);
						if (bVar2) {
							if (x_00 != null) {
								bVar2 = x_00.IsActive();
								if (!bVar2) {
									return false;
								}
								bVar2 = x_00.IsInteractable();
								if (!bVar2) {
									return false;
								}
								if (x_00.m_Navigation.m_Mode == 0) {
									return false;
								}
								pUVar1 = entry._Target_k__BackingField;
								if (pUVar1 != null) {
									x_01 = pUVar1.GetComponent<GisketchFocusRing>();
									bVar2 = ((Object)x_01 != null) ;
									return bVar2;
								}
							}
							goto label_0534af82;
						}
					}
					return false;
				}
			}
		}
	label_0534af82: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x524ADC0", Offset = "0x5249DC0", VA = "0x524ADC0")]
	[IteratorStateMachine(typeof(_003CEmpty_003Ed__7))]
	private static IEnumerable<GisketchSearchEntry> Empty()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchResults.c (Gisketch.Aottg2UI.Search.GisketchSearchResults$$Empty): clean
		GisketchSearchResults.d__7<Empty> __this;

		__this = new GisketchSearchResults.d__7<Empty>(-2);
		return (IEnumerable<GisketchSearchEntry>)__this;
	}
}
