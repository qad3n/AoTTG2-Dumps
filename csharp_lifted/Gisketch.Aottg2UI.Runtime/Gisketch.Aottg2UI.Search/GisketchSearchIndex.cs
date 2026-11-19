// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Search.GisketchSearchIndex
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x2000038")]
public static class GisketchSearchIndex
{
	[Token(Token = "0x200003A")]
	[CompilerGenerated]
	private sealed class _003CEmptyScreenIds_003Ed__4 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400012A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400012B")]
		[FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x400012C")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x17000031")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x6000217")]
			[Address(RVA = "0x5249B90", Offset = "0x5248B90", VA = "0x5249B90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.Collections.Generic.IEnumerator<System.String>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000032")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000219")]
			[Address(RVA = "0x5249BE0", Offset = "0x5248BE0", VA = "0x5249BE0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.Collections.IEnumerator.get_Current): clean
				return (object)this.__2__current;
			}
		}

		[Token(Token = "0x6000214")]
		[Address(RVA = "0x5249020", Offset = "0x5248020", VA = "0x5249020")]
		[DebuggerHidden]
		public _003CEmptyScreenIds_003Ed__4(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x6000215")]
		[Address(RVA = "0x5249B60", Offset = "0x5248B60", VA = "0x5249B60", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000216")]
		[Address(RVA = "0x5249B70", Offset = "0x5248B70", VA = "0x5249B70", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$MoveNext): clean
			if (this.__1__state == 0) {
				this.__1__state = -1;
				return false;
			}
			return false;
		}

		[Token(Token = "0x6000218")]
		[Address(RVA = "0x5249BA0", Offset = "0x5248BA0", VA = "0x5249BA0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_EmptyScreenIds_d__4_System_Collections_IEnumerator);
			throw (object)__this_00;
		}

		[Token(Token = "0x600021A")]
		[Address(RVA = "0x5249BF0", Offset = "0x5248BF0", VA = "0x5249BF0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator): 1 lines keep C-only constructs
			int iVar1;
			int iVar2;
			GisketchSearchIndex.d__4<EmptyScreenIds> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator<string>)this;
			}
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchIndex.d__4<EmptyScreenIds>));
			__this_00 = new Object();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			return (IEnumerator<string>)__this_00;
		}

		[Token(Token = "0x600021B")]
		[Address(RVA = "0x5249C70", Offset = "0x5248C70", VA = "0x5249C70", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex.<EmptyScreenIds>d__4$$System.Collections.IEnumerable.GetEnumerator): 1 lines keep C-only constructs
			int iVar1;
			int iVar2;
			GisketchSearchIndex.d__4<EmptyScreenIds> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator)this;
			}
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchIndex.d__4<EmptyScreenIds>));
			__this_00 = new Object();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			return (IEnumerator)__this_00;
		}
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x5247740", Offset = "0x5246740", VA = "0x5247740")]
	public static List<GisketchSearchEntry> EntriesFor(GisketchManifestDefinition manifest, string activeScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$EntriesFor): clean
		uint uVar1;
		uint uVar2;
		String pSVar3;
		OrdinalIgnoreCaseComparer comparer;
		GisketchScreenDefinition[] pGVar4;
		bool bVar5;
		List<GisketchSearchEntry> entries;
		GisketchScreenDefinition pGVar6;
		HashSet<string> __this;
		ulong uVar7;
		String pSVar8;
		String value;
		ulong uVar9;
		String value_00;

		entries = new List<GisketchSearchEntry>();
		if ((manifest == null) ||(pGVar6 = manifest.FindScreen(activeScreenId), pGVar6 == null)) {
			value_00 = null;
			bVar5 = String.IsNullOrEmpty(null);
			if (bVar5) goto label_05347817;
		}
		else {
			pSVar3 = pGVar6.id;
			value_00 = pGVar6.searchGroup;
			bVar5 = String.IsNullOrEmpty(value_00);
			if ((!bVar5) || (value_00 = pSVar3, pSVar3 != null)) goto label_05347838;
	label_05347817: ;
			value_00 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (manifest == null) {
			return entries;
		}
	label_05347838: ;
		if (manifest.screens == null) {
			return entries;
		}
		bVar5 = String.IsNullOrEmpty(value_00);
		if (bVar5) {
			return entries;
		}
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
		pGVar4 = manifest.screens;
		if (pGVar4 == null) {
	label_05347a14: ;
			throw new NullReferenceException();
		}
		if (0 < (int)pGVar4.Length) {
			uVar7 = pGVar4.Length & 0xffffffff;
			uVar9 = 0;
			do {
				if (uVar7 <= uVar9) {
					throw new IndexOutOfRangeException();
				}
				pGVar6 = pGVar4[uVar9];
				if (pGVar6 != null) {
					pSVar3 = pGVar6.id;
					pSVar8 = pGVar6.searchGroup;
					bVar5 = String.IsNullOrEmpty(pSVar8);
					if ((bVar5) && (pSVar8 = pSVar3, pSVar3 == null)) {
						pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					bVar5 = String.Equals(pSVar8, value_00, 5);
					if (bVar5) {
						value = pGVar6.searchTitle;
						pSVar3 = pGVar6.id;
						pSVar8 = pGVar6.title;
						bVar5 = String.IsNullOrEmpty(pSVar8);
						if ((bVar5) && (pSVar8 = pSVar3, pSVar3 == null)) {
							pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						}
						bVar5 = String.IsNullOrEmpty(value);
						if ((bVar5) && (value = pSVar8, pSVar8 == null)) {
							value = (String)**(ulong*)(g_data_07556758 + 0xb8);
						}
						bVar5 = String.IsNullOrEmpty(value);
						if (!bVar5) {
							if (__this == null) goto label_05347a14;
							__this.Add((object)value);
						}
						GisketchSearchIndex.AddScreenEntries(entries, pGVar6, true);
					}
				}
				uVar9 = uVar9 + 1;
				uVar2 = (uint)pGVar4.Length;
				uVar7 = (ulong)uVar2;
			} while ((long)uVar9 < (long)(int)uVar2);
		}
		GisketchSearchIndex.WithoutDuplicateMainMenuScreenButtons(entries, __this);
		return entries;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x5247EF0", Offset = "0x5246EF0", VA = "0x5247EF0")]
	public static List<GisketchSearchEntry> EntriesForScreen(GisketchManifestDefinition manifest, string screenId, bool includeScreenEntry = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$EntriesForScreen): clean
		List<GisketchSearchEntry> entries;
		GisketchScreenDefinition screen;

		entries = new List<GisketchSearchEntry>();
		if (manifest != null) {
			screen = manifest.FindScreen(screenId);
			if (screen != null) {
				GisketchSearchIndex.AddScreenEntries(entries, screen, includeScreenEntry) ;
			}
		}
		return entries;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x5247F80", Offset = "0x5246F80", VA = "0x5247F80")]
	public static List<GisketchSearchEntry> EntriesForScreens(GisketchManifestDefinition manifest, IEnumerable<string> screenIds, bool includeScreenEntry = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$EntriesForScreens): 21 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		OrdinalIgnoreCaseComparer comparer;
		GisketchSearchIndex.d__4<EmptyScreenIds> pGVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		Il2CppClass pIVar6;
		GisketchSearchEntry[] pGVar7;
		GisketchSearchEntry item;
		sbyte cVar8;
		bool bVar9;
		int iVar10;
		List<GisketchSearchEntry> __this;
		HashSet<string> __this_00;
		VirtualInvokeData pVVar11;
		object pIVar12;
		MethodInfo pMVar13;
		String pSVar14;
		List<GisketchSearchEntry> entries;
		GisketchScreenDefinition screen;
		String[] values;
		ulong uVar15;
		undefined7 in_register_00000011;
		long lVar16;
		object local_90;
		uint local_84;
		GisketchManifestDefinition local_80;
		byte[] local_78 = new byte[8];
		GisketchSearchEntry local_68;
		byte[] local_58 = new byte[16];
		GisketchSearchEntry local_48;
		object* local_38;

		local_84 = (undefined4)CONCAT71(in_register_00000011, includeScreenEntry);
		local_80 = manifest;
		local_90 = null;
		local_78 = (byte[])0x0;
		local_68 = null;
		__this = new List<GisketchSearchEntry>();
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this_00 = new HashSet<string>((IEqualityComparer<T>)comparer);
		if (screenIds == null) {
			screenIds = (IEnumerable<string>)il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchIndex.d__4<EmptyScreenIds>));
			screenIds = new Object();
			(((GisketchSearchIndex.d__4<EmptyScreenIds>)screenIds).fields).__1__state = -2;
			iVar10 = Environment.CurrentManagedThreadId;
			(((GisketchSearchIndex.d__4<EmptyScreenIds>)screenIds).fields). __l__initialThreadId = iVar10;
		}
		pGVar4 = ((GisketchSearchIndex.d__4<EmptyScreenIds>)screenIds).klass;
		uVar15 = (ulong)(pGVar4._2).interface_offsets_count;
		pIVar12 = screenIds.Dispose();
		local_38 = &local_90;
		do {
			local_90 = pIVar12;
			if (pIVar12 == null) {
				throw new NullReferenceException();
			}
			pIVar6 = pIVar12.klass;
			uVar15 = (ulong)(pIVar6._2).interface_offsets_count;
			cVar8 = pIVar12.Dispose();
			pIVar12 = local_90;
			if (cVar8 == false) {
				if (local_90 == null) {
					return __this;
				}
				pIVar6 = local_90.klass;
				uVar15 = (ulong)(pIVar6._2).interface_offsets_count;
				if (uVar15 == 0) goto label_053486cf;
				pIVar5 = (pIVar6._1).interfaceOffsets;
				lVar16 = 0;
				break;
			}
			if (local_90 == null) {
				throw new NullReferenceException();
			}
			pIVar6 = local_90.klass;
			uVar15 = (ulong)(pIVar6._2).interface_offsets_count;
			if (uVar15 != 0) {
				pIVar5 = (pIVar6._1).interfaceOffsets;
				lVar16 = 0;
				do {
					if (*(IEnumerator<string>*)((long)&pIVar5.interfaceType + lVar16) == typeof(IEnumerator<string>)) {
						pMVar13 = (MethodInfo)&pIVar6.vtable[*(int)((long)&pIVar5.offset + lVar16)].methodPtr;
						goto label_05348343;
					}
					lVar16 = lVar16 + 0x10;
				} while (uVar15 * 0x10 != lVar16);
			}
			pMVar13 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(local_90, typeof(IEnumerator<string>), 0);
	label_05348343: ;
			pSVar14 = (*pMVar13.methodPointer)(pIVar12,(MethodInfo)pMVar13.virtualMethodPointer);
			entries = new List<GisketchSearchEntry>();
			if ((local_80 != null) &&(screen = local_80.FindScreen(pSVar14), screen != null)) {
				GisketchSearchIndex.AddScreenEntries(entries, screen, local_84._0_1_);
			}
			if (entries == null) {
				throw new NullReferenceException();
			}
			local_58.GetEnumerator((List<object>)entries);
			local_68 = local_48;
			local_78 = (byte[])local_58._0_8_;
			local_58._0_8_ = null;
			local_58._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_78;
	label_0534842a: ;
			bVar9 = local_78.MoveNext();
			item = local_68;
			if (bVar9) {
				values = (String[])new string[5];
				if (item == null) {
					throw new NullReferenceException();
				}
				if (values == null) {
					throw new NullReferenceException();
				}
				if ((int)values.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				values[0] = item._ScreenId_k__BackingField;
				if ((values.Length & 0xfffffffe) == 0) {
					throw new IndexOutOfRangeException();
				}
				values[1] = "|";
				if ((uint)values.Length < 3) {
					throw new IndexOutOfRangeException();
				}
				values[2] = item._TargetId_k__BackingField;
				if ((values.Length & 0xfffffffc) == 0) {
					throw new IndexOutOfRangeException();
				}
				values[3] = "|";
				if ((uint)values.Length < 5) {
					throw new IndexOutOfRangeException();
				}
				values[4] = item._Kind_k__BackingField;
				pSVar14 = String.Concat(values);
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				bVar9 = __this_00.Add((object)pSVar14);
				pMVar13 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
				if (bVar9) {
					if (__this != null) {
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pGVar7 = __this._items;
						if (pGVar7 != null) {
							uVar3 = __this._size;
							if (uVar3 < (uint)pGVar7.Length) {
								__this._size = uVar3 + 1;
								pGVar7[(int)uVar3] = item;
							}
							else {
								__this.AddWithResize((object)item);
							}
							goto label_0534842a;
						}
					}
					throw new NullReferenceException();
				}
				goto label_0534842a;
			}
			local_78.Dispose();
			pIVar12 = local_90;
		} while(true);
		while (true) {
			lVar16 = lVar16 + 0x10;
			if (!(uVar15 * 0x10 != lVar16)) break;
			if (*(IDisposable*)((long)&pIVar5.interfaceType + lVar16) == typeof(IDisposable)) {
				pVVar11 = (VirtualInvokeData)&pIVar6.vtable[*(int)((long)&pIVar5.offset + lVar16)].methodPtr;
				goto label_053486ed;
			}
		}
	label_053486cf: ;
	label_053486ed: ;
		pIVar12.Dispose();
		return __this;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x5247BA0", Offset = "0x5246BA0", VA = "0x5247BA0")]
	private static void AddScreenEntries(List<GisketchSearchEntry> entries, GisketchScreenDefinition screen, bool includeScreenEntry)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AddScreenEntries): 5 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String value;
		String pSVar3;
		String targetId;
		GisketchSearchEntry[] pGVar4;
		bool bVar6;
		GisketchSearchEntry __this;
		String pSVar7;
		MethodInfo in_R9;

		if ((entries == null) ||(screen == null)) {
			return;
		}
		value = screen.searchTitle;
		pSVar3 = screen.id;
		pSVar7 = screen.title;
		bVar6 = String.IsNullOrEmpty(pSVar7);
		if ((bVar6) && (pSVar7 = pSVar3, pSVar3 == null)) {
			pSVar7 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		bVar6 = String.IsNullOrEmpty(value);
		if ((bVar6) && (value = pSVar7, pSVar7 == null)) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (includeScreenEntry) {
			pSVar3 = screen.id;
			pSVar7 = screen.searchGroup;
			bVar6 = String.IsNullOrEmpty(pSVar7);
			if ((bVar6) && (pSVar7 = pSVar3, pSVar3 == null)) {
				pSVar7 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			in_R9 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
			targetId = screen.id;
			__this = new GisketchSearchEntry(pSVar3, value, pSVar7, (String)in_R9, (String)in_R9, targetId, value, (String)in_R9, "menuList", "screen", null);
			piVar1 = &entries._version;
			*piVar1 = *piVar1 + 1;
			pGVar4 = entries._items;
			if (pGVar4 == null) {
				throw new NullReferenceException();
			}
			uVar2 = entries._size;
			if (uVar2 < (uint)pGVar4.Length) {
				entries._size = uVar2 + 1;
				pGVar4[(int)uVar2] = __this;
			}
			else {
				entries.AddWithResize((object)__this);
			}
		}
		GisketchSearchIndex.AddNodeEntries(entries, screen, screen.root, (String)**(ulong*)(g_data_07556758 + 0xb8), (String)**(ulong*)(g_data_07556758 + 0xb8));
		return;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x52487A0", Offset = "0x52477A0", VA = "0x52487A0")]
	[IteratorStateMachine(typeof(_003CEmptyScreenIds_003Ed__4))]
	private static IEnumerable<string> EmptyScreenIds()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$EmptyScreenIds): 1 lines keep C-only constructs
		int iVar1;
		GisketchSearchIndex.d__4<EmptyScreenIds> __this;

		__this = il2cpp_codegen_object_new(typeof(GisketchSearchIndex.d__4<EmptyScreenIds>));
		__this = new Object();
		__this.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this.__l__initialThreadId = iVar1;
		return (IEnumerable<string>)__this;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x5247DE0", Offset = "0x5246DE0", VA = "0x5247DE0")]
	private static List<GisketchSearchEntry> WithoutDuplicateMainMenuScreenButtons(List<GisketchSearchEntry> entries, HashSet<string> screenTitles)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$WithoutDuplicateMainMenuScreenButtons): 2 lines keep C-only constructs
		HashSet<string> pSVar1;
		GisketchSearchIndex.c__DisplayClass5_0 __this;
		Predicate<T> match;

		__this = il2cpp_codegen_object_new(typeof(GisketchSearchIndex.c__DisplayClass5_0)) ;
		__this = new Object();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.screenTitles = screenTitles;
		if ((((entries != null) &&(entries._size != 0)) &&(pSVar1 = __this.screenTitles, pSVar1 != null)) && (pSVar1._count != 0)) {
			match = new Predicate<GisketchSearchEntry>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Search_GisketchSearchIndex_c__DisplayClass5_0_WithoutDuplicateMainMenuScreenBu);
			entries.RemoveAll(match) ;
		}
		return entries;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x52487F0", Offset = "0x52477F0", VA = "0x52487F0")]
	private static void AddNodeEntries(List<GisketchSearchEntry> entries, GisketchScreenDefinition screen, GisketchNodeDefinition node, string sectionId, string sectionTitle)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AddNodeEntries): 18 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		GisketchSearchEntry[] pGVar3;
		GisketchNodeDefinition[] pGVar4;
		bool bVar5;
		GisketchSearchDefinition pGVar6;
		String pSVar7;
		String pSVar8;
		GisketchSearchEntry __this;
		GisketchNodeDefinition pGVar9;
		GisketchSearchDefinition pGVar10;
		String pSVar11;
		ulong uVar12;
		String* ppSVar13;
		MethodInfo pMVar14;
		MethodInfo value;
		String pSVar15;
		String pSVar16;
		String pSVar17;
		GisketchScreenDefinition method_00;
		ulong uVar18;
		String local_78;
		String local_68;

		if (node == null) {
			return;
		}
		pGVar6 = node.search;
		if ((pGVar6 != null) &&(pGVar6.hidden != false)) {
			return;
		}
		if (Il2CppMethodInitialized_075428e7 == false) {
			Il2CppMethodInitialized_075428e7 = true;
			pGVar6 = node.search;
		}
		if (pGVar6 == null) {
	label_053489f4: ;
			bVar5 = GisketchSearchIndex.IsControl(node);
			if (!bVar5) {
				pGVar6 = node.search;
				if ((pGVar6 == null) ||(bVar5 = String.IsNullOrEmpty(pGVar6.kind))) {
					pGVar9 = &node.fields;
				}
				else {
					pGVar6 = node.search;
					if (pGVar6 == null) goto label_0534900f;
					pGVar9 = (GisketchNodeDefinition)&pGVar6.kind;
				}
				method_00 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)"setting";
				bVar5 = String.Equals(pGVar9.type, "setting", 5);
				if (!bVar5) goto label_05348f58;
			}
			bVar5 = GisketchSearchIndex.IsExplicitSearch(node);
			if ((!bVar5) || (bVar5 = String.IsNullOrEmpty(node.id))) goto label_05348f58;
			pGVar6 = node.search;
			if ((pGVar6 == null) ||(bVar5 = String.IsNullOrEmpty(pGVar6.kind))) {
				pGVar9 = &node.fields;
			}
			else {
				pGVar6 = node.search;
				if (pGVar6 == null) goto label_0534900f;
				pGVar9 = (GisketchNodeDefinition)&pGVar6.kind;
			}
			if (screen == null) goto label_0534900f;
			pSVar8 = pGVar9.type;
			pSVar7 = screen.id;
			pSVar15 = screen.title;
			local_78 = screen.searchTitle;
			bVar5 = String.IsNullOrEmpty(pSVar15);
			if ((bVar5) && (pSVar15 = pSVar7, pSVar7 == null)) {
				pSVar15 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			bVar5 = String.IsNullOrEmpty(local_78);
			if ((bVar5) && (local_78 = pSVar15, pSVar15 == null)) {
				local_78 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pSVar15 = screen.id;
			pSVar16 = screen.searchGroup;
			bVar5 = String.IsNullOrEmpty(pSVar16);
			if ((bVar5) && (pSVar16 = pSVar15, pSVar15 == null)) {
				pSVar16 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pSVar15 = node.id;
			pGVar6 = node.search;
			pSVar11 = pSVar15;
			if (pGVar6 == null) {
	label_05348dde: ;
				local_68 = node.text;
				pSVar17 = node.placeholder;
				bVar5 = String.IsNullOrEmpty(pSVar17);
				if ((bVar5) && (pSVar17 = pSVar11, pSVar11 == null)) {
					pSVar17 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				pMVar14 = null;
				bVar5 = String.IsNullOrEmpty(local_68);
				if ((bVar5) && (local_68 = pSVar17, pSVar17 == null)) {
					pGVar10 = *(GisketchSearchDefinition*)(g_data_07556758 + 0xb8);
					goto label_05348e5e;
				}
			}
			else {
				pMVar14 = null;
				bVar5 = String.IsNullOrEmpty(pGVar6.title);
				if (bVar5) {
					pSVar11 = node.id;
					goto label_05348dde;
				}
				pGVar6 = node.search;
				if (pGVar6 == null) goto label_0534900f;
				pGVar10 = &pGVar6.fields;
	label_05348e5e: ;
				local_68 = pGVar10.title;
			}
			pSVar11 = GisketchSearchIndex.Keywords(node);
			pGVar6 = node.search;
			if (pGVar6 == null) {
				ppSVar13 = *(String**)(g_data_07556758 + 0xb8);
			}
			else {
				ppSVar13 = &pGVar6.icon;
			}
			pSVar17 = *ppSVar13;
			method = (MethodInfo)sectionTitle;
			__this = new GisketchSearchEntry(pSVar7, local_78, pSVar16, sectionId, sectionTitle, pSVar15, local_68, pSVar11, pSVar17, pSVar8, null);
			pMVar14 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
			if (entries == null) {
	label_0534900f: ;
				throw new NullReferenceException();
			}
			piVar1 = &entries._version;
			*piVar1 = *piVar1 + 1;
			pGVar3 = entries._items;
			if (pGVar3 == null) goto label_0534900f;
			uVar2 = entries._size;
			if (uVar2 < (uint)pGVar3.Length) {
				entries._size = uVar2 + 1;
				pGVar3[(int)uVar2] = __this;
				goto label_05348f58;
			}
			pMVar14 = pMVar14.klass.rgctx_data[0xe].method;
		}
		else {
			method_00 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)"section";
			bVar5 = String.Equals(pGVar6.kind, "section", 5);
			if (!bVar5) goto label_053489f4;
			pGVar6 = node.search;
			if (pGVar6 == null) goto label_0534900f;
			sectionId = pGVar6.sectionId;
			pSVar8 = node.id;
			bVar5 = String.IsNullOrEmpty(sectionId);
			if ((bVar5) && (sectionId = pSVar8, pSVar8 == null)) {
				sectionId = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pGVar6 = node.search;
			if (pGVar6 == null) goto label_0534900f;
			value = (MethodInfo)pGVar6.title;
			sectionTitle = pGVar6.sectionTitle;
			pMVar14 = (MethodInfo)node.text;
			bVar5 = String.IsNullOrEmpty((String)value);
			if ((bVar5) && (value = pMVar14, pMVar14 == null)) {
				value = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pMVar14 = null;
			bVar5 = String.IsNullOrEmpty(sectionTitle);
			if ((bVar5) && (sectionTitle = (String)value, value == null)) {
				sectionTitle = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pGVar6 = node.search;
			if (pGVar6 == null) goto label_0534900f;
			pSVar8 = pGVar6.keywords;
			if (pGVar6.autoAddKeywords == false) {
				pSVar7 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				pSVar7 = GisketchSearchIndex.HarvestKeywords(node);
			}
			bVar5 = String.IsNullOrEmpty(pSVar8);
			if (bVar5) {
				pSVar8 = pSVar7;
				if (pSVar7 == null) {
					pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
			}
			else {
				bVar5 = String.IsNullOrEmpty(pSVar7);
				if (!bVar5) {
					pSVar8 = String.Concat(pSVar8, " ", pSVar7);
				}
			}
			if (screen == null) goto label_0534900f;
			pSVar7 = screen.id;
			pSVar15 = screen.title;
			local_78 = screen.searchTitle;
			bVar5 = String.IsNullOrEmpty(pSVar15);
			if ((bVar5) && (pSVar15 = pSVar7, pSVar7 == null)) {
				pSVar15 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			bVar5 = String.IsNullOrEmpty(local_78);
			if ((bVar5) && (local_78 = pSVar15, pSVar15 == null)) {
				local_78 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pSVar15 = screen.id;
			pSVar16 = screen.searchGroup;
			bVar5 = String.IsNullOrEmpty(pSVar16);
			if ((bVar5) && (pSVar16 = pSVar15, pSVar15 == null)) {
				pSVar16 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pGVar6 = node.search;
			if (pGVar6 == null) goto label_0534900f;
			pSVar15 = node.id;
			pSVar11 = pGVar6.icon;
			method = (MethodInfo)sectionTitle;
			__this = new GisketchSearchEntry(pSVar7, local_78, pSVar16, sectionId, sectionTitle, pSVar15, sectionTitle, pSVar8, pSVar11, "section", null);
			pMVar14 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
			if (entries == null) goto label_0534900f;
			piVar1 = &entries._version;
			*piVar1 = *piVar1 + 1;
			pGVar3 = entries._items;
			if (pGVar3 == null) goto label_0534900f;
			uVar2 = entries._size;
			if (uVar2 < (uint)pGVar3.Length) {
				entries._size = uVar2 + 1;
				pGVar3[(int)uVar2] = __this;
				goto label_05348f58;
			}
			pMVar14 = pMVar14.klass.rgctx_data[0xe].method;
		}
		entries.AddWithResize((object)__this);
	label_05348f58: ;
		pGVar4 = node.children;
		if ((pGVar4 != null) && (0 < (int)pGVar4.Length)) {
			uVar12 = pGVar4.Length & 0xffffffff;
			uVar18 = 0;
			do {
				if (uVar12 <= uVar18) goto label_0534900a;
				GisketchSearchIndex.AddNodeEntries(entries, screen, pGVar4[uVar18], sectionId, sectionTitle);
				uVar18 = uVar18 + 1;
				uVar2 = (uint)pGVar4.Length;
				uVar12 = (ulong)uVar2;
			} while ((long)uVar18 < (long)(int)uVar2);
		}
		pGVar4 = node.deferredChildren;
		if ((pGVar4 != null) && (0 < (int)pGVar4.Length)) {
			uVar12 = pGVar4.Length & 0xffffffff;
			uVar18 = 0;
			do {
				if (uVar12 <= uVar18) {
	label_0534900a: ;
					throw new IndexOutOfRangeException();
				}
				GisketchSearchIndex.AddNodeEntries(entries, screen, pGVar4[uVar18], sectionId, sectionTitle);
				uVar18 = uVar18 + 1;
				uVar2 = (uint)pGVar4.Length;
				uVar12 = (ulong)uVar2;
			} while ((long)uVar18 < (long)(int)uVar2);
		}
		return;
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x52495C0", Offset = "0x52485C0", VA = "0x52495C0")]
	private static void AddChildEntries(List<GisketchSearchEntry> entries, GisketchScreenDefinition screen, GisketchNodeDefinition[] children, string sectionId, string sectionTitle)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AddChildEntries): clean
		uint uVar1;
		ulong uVar2;
		ulong uVar3;

		if ((children != null) &&(0 < (int)children.Length)) {
			uVar2 = children.Length & 0xffffffff;
			uVar3 = 0;
			do {
				if (uVar2 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				GisketchSearchIndex.AddNodeEntries(entries, screen, children[uVar3], sectionId, sectionTitle);
				uVar3 = uVar3 + 1;
				uVar1 = (uint)children.Length;
				uVar2 = (ulong)uVar1;
			} while ((long)uVar3 < (long)(int)uVar1);
		}
		return;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x5249100", Offset = "0x5248100", VA = "0x5249100")]
	private static string HarvestKeywords(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$HarvestKeywords): clean
		StringBuilder __this;
		String pSVar1;

		__this = new StringBuilder();
		GisketchSearchIndex.AppendText(__this, node);
		if (node != null) {
			GisketchSearchIndex.HarvestChildKeywords(__this, node.children);
			GisketchSearchIndex.HarvestChildKeywords(__this, node.deferredChildren);
			if (__this != null) {
				return pSVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x5249760", Offset = "0x5248760", VA = "0x5249760")]
	private static void HarvestChildKeywords(StringBuilder builder, GisketchNodeDefinition[] children)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$HarvestChildKeywords): 1 lines keep C-only constructs
		GisketchNodeDefinition pGVar1;
		GisketchSearchDefinition pGVar2;
		bool bVar3;
		uint uVar4;
		StringBuilder __this;
		String value;
		long lVar5;
		uint uVar6;
		MethodInfo method_00;

		if (children != null) {
			uVar4 = (uint)children.Length;
			if (builder == null) {
				if (0 < (int)uVar4) {
					lVar5 = 0;
					do {
						if (uVar4 <= (uint)lVar5) goto label_053498b9;
						pGVar1 = children[lVar5];
						if (((pGVar1 == null) ||(pGVar2 = pGVar1.search, pGVar2 == null)) ||(bVar3 = String.Equals(pGVar2.kind, "section", 5), !bVar3)) goto label_053498b4;
						uVar4 = (uint)children.Length;
						lVar5 = lVar5 + 1;
					} while ((int)lVar5 < (int)uVar4);
				}
			}
			else if (0 < (int)uVar4) {
				uVar6 = 0;
				do {
					if (uVar4 <= uVar6) {
	label_053498b9: ;
						throw new IndexOutOfRangeException();
					}
					pGVar1 = children[(int)uVar6];
					if (pGVar1 == null) {
	label_053498b4: ;
						throw new NullReferenceException();
					}
					pGVar2 = pGVar1.search;
					if ((pGVar2 == null) ||(bVar3 = String.Equals(pGVar2.kind, "section", 5), !bVar3)) {
						method_00 = (MethodInfo)&g_data_00000020;
						__this = builder.Append(0x20);
						value = GisketchSearchIndex.HarvestKeywords(pGVar1);
						if (__this == null) goto label_053498b4;
						__this.Append(value);
					}
					uVar6 = uVar6 + 1;
					uVar4 = (uint)children.Length;
				} while ((int)uVar6 < (int)uVar4);
			}
		}
		return;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x5249630", Offset = "0x5248630", VA = "0x5249630")]
	private static void AppendText(StringBuilder builder, GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$AppendText): clean
		String pSVar1;
		GisketchSearchDefinition pGVar2;
		bool bVar3;
		StringBuilder pSVar4;

		if (node != null) {
			pSVar1 = node.text;
			bVar3 = String.IsNullOrEmpty(pSVar1);
			if (!bVar3) {
				if (builder == null) goto label_0534974e;
				pSVar4 = builder.Append(0x20);
				if (pSVar4 == null) goto label_0534974e;
				pSVar4.Append(pSVar1);
			}
			pSVar1 = node.placeholder;
			bVar3 = String.IsNullOrEmpty(pSVar1);
			if (!bVar3) {
				if (builder == null) goto label_0534974e;
				pSVar4 = builder.Append(0x20);
				if (pSVar4 == null) goto label_0534974e;
				pSVar4.Append(pSVar1);
			}
			pSVar1 = node.tooltip;
			bVar3 = String.IsNullOrEmpty(pSVar1);
			if (!bVar3) {
				if (builder == null) goto label_0534974e;
				pSVar4 = builder.Append(0x20);
				if (pSVar4 == null) goto label_0534974e;
				pSVar4.Append(pSVar1);
			}
			pGVar2 = node.search;
			if (pGVar2 != null) {
				pSVar1 = pGVar2.keywords;
				bVar3 = String.IsNullOrEmpty(pSVar1);
				if (!bVar3) {
					if (builder != null) {
						pSVar4 = builder.Append(0x20);
						if (pSVar4 != null) {
							pSVar4.Append(pSVar1);
							return;
						}
					}
	label_0534974e: ;
					throw new NullReferenceException();
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x5249060", Offset = "0x5248060", VA = "0x5249060")]
	private static bool IsSection(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsSection): clean
		GisketchSearchDefinition pGVar1;
		bool bVar2;

		if (node == null) {
			throw new NullReferenceException();
		}
		pGVar1 = node.search;
		if (pGVar1 == null) {
			return false;
		}
		bVar2 = String.Equals(pGVar1.kind, "section", 5);
		return bVar2;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x5249920", Offset = "0x5248920", VA = "0x5249920")]
	private static bool IsControl(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsControl): clean
		bool bVar1;

		if (node == null) {
			throw new NullReferenceException();
		}
		bVar1 = (node.type == "Button");
		if (!bVar1) {
			bVar1 = (node.type == "SpriteButton");
			if (!bVar1) {
				bVar1 = (node.type == "InputField");
				if (!bVar1) {
					bVar1 = (node.type == "TextArea");
					if (!bVar1) {
						bVar1 = (node.type == "Dropdown");
						if (!bVar1) {
							bVar1 = (node.type == "Select");
							return bVar1;
						}
					}
				}
			}
		}
		return true;
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x5249230", Offset = "0x5248230", VA = "0x5249230")]
	private static bool IsSearchTarget(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsSearchTarget): 2 lines keep C-only constructs
		GisketchSearchDefinition pGVar1;
		bool bVar2;
		GisketchNodeDefinition pGVar3;

		bVar2 = GisketchSearchIndex.IsControl(node);
		if (bVar2) {
			return true;
		}
		if (node == null) {
	label_053492b0: ;
			throw new NullReferenceException();
		}
		pGVar1 = node.search;
		if (pGVar1 != null) {
			bVar2 = String.IsNullOrEmpty(pGVar1.kind);
			if (!bVar2) {
				pGVar1 = node.search;
				if (pGVar1 == null) goto label_053492b0;
				pGVar3 = (GisketchNodeDefinition)&pGVar1.kind;
				goto label_05349296;
			}
		}
		pGVar3 = &node.fields;
	label_05349296: ;
		bVar2 = String.Equals(pGVar3.type, "setting", 5);
		return bVar2;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x52492C0", Offset = "0x52482C0", VA = "0x52492C0")]
	private static bool IsExplicitSearch(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$IsExplicitSearch): clean
		GisketchSearchDefinition pGVar1;
		bool bVar2;
		bool bVar3;

		if (node == null) goto label_0534934d;
		pGVar1 = node.search;
		if (pGVar1 == null) {
			bVar3 = false;
		}
		else {
			bVar2 = String.IsNullOrEmpty(pGVar1.title);
			bVar3 = true;
			if (bVar2) {
				pGVar1 = node.search;
				if (pGVar1 == null) {
	label_0534934d: ;
					throw new NullReferenceException();
				}
				bVar2 = String.IsNullOrEmpty(pGVar1.keywords);
				if (bVar2) {
					pGVar1 = node.search;
					if (pGVar1 == null) goto label_0534934d;
					bVar2 = String.IsNullOrEmpty(pGVar1.kind);
					if (bVar2) {
						pGVar1 = node.search;
						if (pGVar1 == null) goto label_0534934d;
						bVar3 = String.IsNullOrEmpty(pGVar1.icon);
						bVar3 = !bVar3;
					}
				}
			}
		}
		return bVar3;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x5249360", Offset = "0x5248360", VA = "0x5249360")]
	private static string Kind(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Kind): clean
		GisketchSearchDefinition pGVar1;
		bool bVar2;

		if (node == null) {
	label_053493a2: ;
			throw new NullReferenceException();
		}
		pGVar1 = node.search;
		if (pGVar1 != null) {
			bVar2 = String.IsNullOrEmpty(pGVar1.kind);
			if (!bVar2) {
				pGVar1 = node.search;
				if (pGVar1 != null) {
					return pGVar1.kind;
				}
				goto label_053493a2;
			}
		}
		return node.type;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x52493B0", Offset = "0x52483B0", VA = "0x52493B0")]
	private static string Title(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Title): 1 lines keep C-only constructs
		GisketchSearchDefinition pGVar1;
		String pSVar2;
		String value;
		bool bVar3;
		GisketchSearchDefinition pGVar4;
		String value_00;

		if (node == null) {
	label_05349468: ;
			throw new NullReferenceException();
		}
		pGVar1 = node.search;
		if ((pGVar1 == null) ||(bVar3 = String.IsNullOrEmpty(pGVar1.title))) {
			pSVar2 = node.id;
			value = node.text;
			value_00 = node.placeholder;
			bVar3 = String.IsNullOrEmpty(value_00);
			if ((bVar3) && (value_00 = pSVar2, pSVar2 == null)) {
				value_00 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			bVar3 = String.IsNullOrEmpty(value);
			if (!bVar3) {
				return value;
			}
			if (value_00 != null) {
				return value_00;
			}
			pGVar4 = *(GisketchSearchDefinition*)(g_data_07556758 + 0xb8);
		}
		else {
			pGVar1 = node.search;
			if (pGVar1 == null) goto label_05349468;
			pGVar4 = &pGVar1.fields;
		}
		return pGVar4.title;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x5249470", Offset = "0x5248470", VA = "0x5249470")]
	private static string Keywords(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Keywords): clean
		GisketchSearchDefinition pGVar1;
		String[] value;
		bool bVar2;
		String value_00;
		String pSVar3;

		if (node == null) {
			throw new NullReferenceException();
		}
		pGVar1 = node.search;
		if (pGVar1 == null) {
			pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			value = node.options;
		}
		else {
			pSVar3 = pGVar1.keywords;
			value = node.options;
		}
		if (value == null) {
			value_00 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			value_00 = String.Join(" ", value);
		}
		bVar2 = String.IsNullOrEmpty(pSVar3);
		if (bVar2) {
			pSVar3 = value_00;
			if (value_00 == null) {
				pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
		}
		else {
			bVar2 = String.IsNullOrEmpty(value_00);
			if (!bVar2) {
				pSVar3 = String.Concat(pSVar3, " ", value_00);
				return pSVar3;
			}
		}
		return pSVar3;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x5247AF0", Offset = "0x5246AF0", VA = "0x5247AF0")]
	private static string ScreenTitle(GisketchScreenDefinition screen)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$ScreenTitle): clean
		String pSVar1;
		bool bVar2;
		String value;
		String value_00;

		if (screen == null) {
			value = null;
			bVar2 = String.IsNullOrEmpty(null);
			if (!bVar2) {
				bVar2 = String.IsNullOrEmpty(null);
				if (!bVar2) {
					return null;
				}
				goto label_05347b5e;
			}
	label_05347b2b: ;
			value_00 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			value = screen.searchTitle;
			pSVar1 = screen.id;
			value_00 = screen.title;
			bVar2 = String.IsNullOrEmpty(value_00);
			if ((bVar2) && (value_00 = pSVar1, pSVar1 == null)) goto label_05347b2b;
		}
		bVar2 = String.IsNullOrEmpty(value);
		if (!bVar2) {
			return value;
		}
		if (value_00 != null) {
			return value_00;
		}
	label_05347b5e: ;
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x5247A90", Offset = "0x5246A90", VA = "0x5247A90")]
	private static string SearchGroup(GisketchScreenDefinition screen)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$SearchGroup): clean
		String pSVar1;
		String value;
		bool bVar2;

		if (screen == null) {
			bVar2 = String.IsNullOrEmpty(null);
			if (!bVar2) {
				return null;
			}
		}
		else {
			pSVar1 = screen.id;
			value = screen.searchGroup;
			bVar2 = String.IsNullOrEmpty(value);
			if (!bVar2) {
				return value;
			}
			if (pSVar1 != null) {
				return pSVar1;
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x52491A0", Offset = "0x52481A0", VA = "0x52491A0")]
	private static string Join(string a, string b)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Join): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(a);
		if (bVar1) {
			if (b == null) {
				b = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
		}
		else {
			bVar1 = String.IsNullOrEmpty(b);
			if (!bVar1) {
				pSVar2 = String.Concat(a, " ", b);
				return pSVar2;
			}
			b = a;
		}
		return b;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x52490C0", Offset = "0x52480C0", VA = "0x52490C0")]
	private static string First(string a, string b)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$First): clean
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(a);
		if ((bVar1) && (a = b, b == null)) {
			a = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		return a;
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x52498C0", Offset = "0x52488C0", VA = "0x52498C0")]
	private static void Append(StringBuilder builder, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c (Gisketch.Aottg2UI.Search.GisketchSearchIndex$$Append): clean
		bool bVar1;
		StringBuilder __this;

		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return;
		}
		if (builder != null) {
			__this = builder.Append(0x20);
			if (__this != null) {
				__this.Append(value);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c.

	// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<>c__DisplayClass5_0$$.ctor: clean
	private void c__DisplayClass5_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Search.GisketchSearchIndex.<>c__DisplayClass5_0$$<WithoutDuplicateMainMenuScreenButtons>b__0: 1 lines keep C-only constructs
	private bool c__DisplayClass5_0__WithoutDuplicateMainMenuScreenButtons_b__0(GisketchSearchEntry entry)
	{
		String __this_00;
		HashSet<object> __this_01;
		bool bVar1;

		if (Il2CppMethodInitialized_075428ec == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075428ec = true;
		}
		if ((((entry == null) ||(bVar1 = String.Equals(entry._ScreenId_k__BackingField, "main-menu", 5), !bVar1)) ||(bVar1 = String.Equals(entry._Kind_k__BackingField, "screen", 5))) ||((bVar1 = String.Equals(entry._Kind_k__BackingField, "section", 5), bVar1 || (bVar1 = String.IsNullOrEmpty(entry._TargetId_k__BackingField))))) {
			return false;
		}
		__this_00 = entry._TargetId_k__BackingField;
		if (__this_00 != null) {
			bVar1 = __this_00.StartsWith("main-menu-option-", 5);
			if (!bVar1) {
				return false;
			}
			__this_01 = (HashSet<object>)this.screenTitles;
			if (__this_01 != null) {
				bVar1 = __this_01.Contains((object)entry._Title_k__BackingField);
				return bVar1;
			}
		}
		throw new NullReferenceException();
	}
}
