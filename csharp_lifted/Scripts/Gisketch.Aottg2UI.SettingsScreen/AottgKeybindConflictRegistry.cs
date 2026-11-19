// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000161")]
internal static class AottgKeybindConflictRegistry
{
	[Token(Token = "0x2000162")]
	private sealed class Entry
	{
		[Token(Token = "0x4000827")]
		[FieldOffset(Offset = "0x10")]
		public readonly string RowId;

		[Token(Token = "0x4000828")]
		[FieldOffset(Offset = "0x18")]
		public readonly int Order;

		[Token(Token = "0x4000829")]
		[FieldOffset(Offset = "0x20")]
		public string ScopeId;

		[Token(Token = "0x400082A")]
		[FieldOffset(Offset = "0x28")]
		public string Label;

		[Token(Token = "0x400082B")]
		[FieldOffset(Offset = "0x30")]
		public KeybindSetting Setting;

		[Token(Token = "0x400082C")]
		[FieldOffset(Offset = "0x38")]
		public HashSet<string> DefaultKeys;

		[Token(Token = "0x6000778")]
		[Address(RVA = "0x5CBF9B0", Offset = "0x5CBE9B0", VA = "0x5CBF9B0")]
		public Entry(string rowId, int order)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.Entry$$.ctor): clean
			uint uVar1;
			OrdinalIgnoreCaseComparer comparer;
			HashSet<string> __this_00;

			if (Il2CppMethodInitialized_07548185 == false) {
				Il2CppMethodInitialized_07548185 = true;
				uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
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
			__this_00 = new HashSet<string>((IEqualityComparer<T>)comparer);
			this.DefaultKeys = __this_00;
			base();
			this.RowId = rowId;
			this.Order = order;
			return;
		}
	}

	[Token(Token = "0x2000164")]
	[CompilerGenerated]
	private sealed class _003CKeys_003Ed__13 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400082F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000830")]
		[FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x4000831")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000832")]
		[FieldOffset(Offset = "0x28")]
		private Entry entry;

		[Token(Token = "0x4000833")]
		[FieldOffset(Offset = "0x30")]
		public Entry _003C_003E3__entry;

		[Token(Token = "0x4000834")]
		[FieldOffset(Offset = "0x38")]
		private HashSet<string> _003Cseen_003E5__2;

		[Token(Token = "0x4000835")]
		[FieldOffset(Offset = "0x40")]
		private List<InputKey>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x170000DE")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x6000780")]
			[Address(RVA = "0x5CC1CD0", Offset = "0x5CC0CD0", VA = "0x5CC1CD0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.Collections.Generic.IEnumerator<System.String>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170000DF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000782")]
			[Address(RVA = "0x5CC1D20", Offset = "0x5CC0D20", VA = "0x5CC1D20", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.Collections.IEnumerator.get_Current): clean
				return (object)this.__2__current;
			}
		}

		[Token(Token = "0x600077C")]
		[Address(RVA = "0x5CC16D0", Offset = "0x5CC06D0", VA = "0x5CC16D0")]
		[DebuggerHidden]
		public _003CKeys_003Ed__13(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x600077D")]
		[Address(RVA = "0x5CC18F0", Offset = "0x5CC08F0", VA = "0x5CC18F0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.IDisposable.Dispose): clean
			int iVar1;

			iVar1 = this.__1__state;
			if ((iVar1 != 1) && (iVar1 != -3)) {
				return;
			}
			this.__1__state = -1;
			(this.__7__wrap2).Dispose();
			return;
		}

		[Token(Token = "0x600077E")]
		[Address(RVA = "0x5CC1940", Offset = "0x5CC0940", VA = "0x5CC1940", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$MoveNext): 3 lines keep C-only constructs
			int iVar1;
			uint uVar2;
			AottgKeybindConflictRegistry.Entry pGVar3;
			KeybindSetting pSVar4;
			OrdinalIgnoreCaseComparer comparer;
			List<InputKey> __this_00;
			InputKey __this_01;
			HashSet<object> __this_02;
			AottgKeybindConflictRegistry.d__13<Keys> pGVar5;
			AottgKeybindConflictRegistry.d__13<Keys>* ppGVar6;
			bool bVar7;
			HashSet<string> __this_03;
			String item;
			AottgKeybindConflictRegistry.d__13<Keys> local_68;
			byte local_58;
			System_Collections_Generic_List_Enumerator_T__o local_50;

			local_68 = this;
			local_58 = (byte)&local_68;
			iVar1 = this.__1__state;
			ppGVar6 = &local_68;
			if (iVar1 != 1) {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				pGVar3 = this.entry;
				if (pGVar3 == null) {
					return false;
				}
				pSVar4 = pGVar3.Setting;
				if (pSVar4 == null) {
					return false;
				}
				AottgKeybindSettingRow.EnsureSlots(pSVar4);
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
				__this_03 = new HashSet<string>((IEqualityComparer<T>)comparer);
				local_68._seen_5__2 = __this_03;
				pGVar3 = local_68.entry;
				if (pGVar3 == null) {
					throw new NullReferenceException();
				}
				pSVar4 = pGVar3.Setting;
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				__this_00 = pSVar4.InputKeys;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				local_50 = __this_00.GetEnumerator();
				local_68.__7__wrap2._current = (InputKey)local_50._current;
				local_68.__7__wrap2._list = local_50._list;
				local_68.__7__wrap2._index = local_50._index;
				local_68.__7__wrap2._version = local_50._version;
				this = local_68;
				ppGVar6 = (AottgKeybindConflictRegistry.d__13<Keys>*)local_58;
			}
			local_58 = (byte)ppGVar6;
			this.__1__state = -3;
			do {
				bVar7 = (this.__7__wrap2).MoveNext();
				pGVar5 = local_68;
				if (!bVar7) {
					pGVar5.__1__state = -1;
					(pGVar5.__7__wrap2).Dispose() ;
					local_68.__7__wrap2._list = null;
					local_68.__7__wrap2._index = 0;
					local_68.__7__wrap2._version = 0;
					local_68.__7__wrap2._current = null;
					return false;
				}
				__this_01 = local_68.__7__wrap2._current;
				if ((__this_01 != null) &&(bVar7 = __this_01.IsNone(), !bVar7)) {
					item = __this_01.ToString();
					__this_02 = (HashSet<object>)local_68._seen_5__2;
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					bVar7 = __this_02.Add((object)item);
					if (bVar7) {
						local_68.__2__current = item;
						local_68.__1__state = 1;
						return true;
					}
				}
				this = local_68;
			} while(true);
		}

		[Token(Token = "0x600077F")]
		[Address(RVA = "0x5CC1C90", Offset = "0x5CC0C90", VA = "0x5CC1C90")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$<>m__Finally1): clean
			this.__1__state = -1;
			(this.__7__wrap2).Dispose();
			return;
		}

		[Token(Token = "0x6000781")]
		[Address(RVA = "0x5CC1CE0", Offset = "0x5CC0CE0", VA = "0x5CC1CE0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_Keys_d__13_System_Collections_IEnu);
			throw (object)__this_00;
		}

		[Token(Token = "0x6000783")]
		[Address(RVA = "0x5CC1D30", Offset = "0x5CC0D30", VA = "0x5CC1D30", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator): 1 lines keep C-only constructs
			int iVar1;
			int iVar2;
			AottgKeybindConflictRegistry.d__13<Keys> __this_00;

			if (this.__1__state == -2) {
				iVar1 = this.__l__initialThreadId;
				iVar2 = Environment.CurrentManagedThreadId;
				if (iVar1 == iVar2) {
					this.__1__state = 0;
					__this_00 = this;
					goto label_05dc1da3;
				}
			}
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgKeybindConflictRegistry.d__13<Keys>));
			__this_00 = new Object();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
		label_05dc1da3: ;
			__this_00.entry = this.__3__entry;
			return (IEnumerator)__this_00;
		}

		[Token(Token = "0x6000784")]
		[Address(RVA = "0x5CC1DC0", Offset = "0x5CC0DC0", VA = "0x5CC1DC0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<Keys>d__13$$System.Collections.IEnumerable.GetEnumerator): clean
			IEnumerator pSVar1;

			pSVar1 = this.System.Collections.Generic.IEnumerable<System.String>.GetEnumerator();
			return pSVar1;
		}
	}

	[Token(Token = "0x4000825")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Entry> Entries;

	[Token(Token = "0x4000826")]
	[FieldOffset(Offset = "0x8")]
	private static int _nextOrder;

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x5CBF7A0", Offset = "0x5CBE7A0", VA = "0x5CBF7A0")]
	public static void Register(string rowId, string scopeId, string label, KeybindSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$Register): 2 lines keep C-only constructs
		uint uVar1;
		int order;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		AottgKeybindConflictRegistry.Entry pGVar4;
		HashSet<string> pSVar5;
		AottgKeybindConflictRegistry.Entry local_38;

		local_38 = null;
		bVar3 = String.IsNullOrEmpty(rowId);
		if ((setting == null) || (bVar3)) {
			return;
		}
		pSVar2 = (Dictionary<object, object>)AottgKeybindConflictRegistry.Entries;
		if (pSVar2 != null) {
			bVar3 = pSVar2.TryGetValue((object)rowId, (object*)&local_38);
			if (!bVar3) {
				if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				order = AottgKeybindConflictRegistry. _nextOrder;
				uVar1 = order + 1;
				AottgKeybindConflictRegistry._nextOrder = uVar1;
				pGVar4 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgKeybindConflictRegistry.Entry));
				pGVar4 = new AottgKeybindConflictRegistry.Entry(rowId, order);
				pSVar2 = (Dictionary<object, object>)AottgKeybindConflictRegistry.Entries;
				local_38 = pGVar4;
				if (pSVar2 == null) goto label_05dbf9a3;
				pSVar2.set_Item((object)rowId, (object)pGVar4);
			}
			if (scopeId == null) {
				scopeId = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if (local_38 != null) {
				local_38.ScopeId = scopeId;
				pGVar4 = local_38;
				bVar3 = String.IsNullOrEmpty(label);
				if (pGVar4 != null) {
					if (bVar3) {
						label = rowId;
					}
					pGVar4.Label = label;
					if (local_38 != null) {
						local_38.Setting = setting;
						pGVar4 = local_38;
						if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
						}
						pSVar5 = AottgKeybindConflictRegistry.BuildDefaultKeys(setting);
						if (pGVar4 != null) {
							pGVar4.DefaultKeys = pSVar5;
							return;
						}
					}
				}
			}
		}
	label_05dbf9a3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x5CBFF30", Offset = "0x5CBEF30", VA = "0x5CBFF30")]
	public static void SyncAll(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$SyncAll): 7 lines keep C-only constructs
		int iVar1;
		Dictionary<object, object> __this;
		GisketchUIState pGVar2;
		object pIVar3;
		bool bVar4;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_00;
		String value;
		List<string> pSVar5;
		String pSVar6;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
		Dictionary<string, List<AottgKeybindConflictRegistry.Entry>> local_50;
		byte[] local_48 = new byte[16];
		AottgKeybindConflictRegistry.Entry local_38;

		local_68._dictionary = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._currentValue = null;
		local_50 = AottgKeybindConflictRegistry.KeyMap();
		__this = (Dictionary<object, object>)AottgKeybindConflictRegistry.Entries;
		if ((__this == null) ||(__this_00 = __this.Values, __this_00 == null)) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator(__this_00);
		local_68._currentValue = (object)local_38;
		local_68._dictionary = (Dictionary<TKey, TValue>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = &local_68;
		if (root == null) {
			while (true) {
				bVar4 = local_68.MoveNext();
				pIVar3 = local_68._currentValue;
				if (!(bVar4)) break;
				if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				pSVar5 = AottgKeybindConflictRegistry.ConflictLabels((AottgKeybindConflictRegistry.Entry)pIVar3, local_50);
				if (pSVar5 == null) {
	label_05dc0207: ;
					throw new NullReferenceException();
				}
			}
		}
		else {
			while (true) {
				bVar4 = local_68.MoveNext();
				pIVar3 = local_68._currentValue;
				if (!(bVar4)) break;
				if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				pSVar5 = AottgKeybindConflictRegistry.ConflictLabels((AottgKeybindConflictRegistry.Entry)pIVar3, local_50);
				if (pSVar5 == null) goto label_05dc0207;
				iVar1 = pSVar5._size;
				pGVar2 = root._State_k__BackingField;
				if (pGVar2 != null) {
					if ((AottgKeybindConflictRegistry.Entry)pIVar3 ==null) {
						throw new NullReferenceException();
					}
					pSVar6 = ((AottgKeybindConflictRegistry.Entry)((long)pIVar3 + 0x10)).RowId;
					if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
					}
					pSVar6 = AottgSettingsStateKeys.KeybindConflictRow(pSVar6);
					if (pGVar2 == null) {
						throw new NullReferenceException();
					}
					pGVar2.SetBool(pSVar6, 0 < iVar1);
					pGVar2 = root._State_k__BackingField;
					if (pGVar2 != null) {
						if ((AottgKeybindConflictRegistry.Entry)pIVar3 ==null) {
							throw new NullReferenceException();
						}
						pSVar6 = ((AottgKeybindConflictRegistry.Entry)((long)pIVar3 + 0x10)).RowId;
						if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
						}
						pSVar6 = AottgSettingsStateKeys.KeybindConflictTooltip(pSVar6);
						if (iVar1 < 1) {
							value = (String)**(ulong*)(g_data_07556758 + 0xb8);
						}
						else {
							if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
							}
							value = AottgKeybindConflictRegistry.ConflictTooltip(pSVar5);
						}
						pGVar2.Set(pSVar6, value);
					}
				}
			}
		}
		local_68.Dispose();
		return;
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x5CC1310", Offset = "0x5CC0310", VA = "0x5CC1310")]
	private static string ConflictTooltip(List<string> labels)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$ConflictTooltip): clean
		String pSVar1;
		String[] value;
		String arg0;

		pSVar1 = Aottg2GisketchLocale.Text("SettingsPopup.KeybindPopup.Conflict");
		if (labels == null) {
			throw new NullReferenceException();
		}
		value = (String[])labels.ToArray();
		arg0 = String.Join(", ", value);
		pSVar1 = String.Format(pSVar1, (object)arg0);
		return pSVar1;
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x5CC12F0", Offset = "0x5CC02F0", VA = "0x5CC12F0")]
	public static string VisibleStateKey(string rowId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$VisibleStateKey): clean
		String pSVar1;

		return pSVar1;
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x5CC1300", Offset = "0x5CC0300", VA = "0x5CC1300")]
	public static string TooltipStateKey(string rowId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$TooltipStateKey): clean
		String pSVar1;

		return pSVar1;
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x5CC13D0", Offset = "0x5CC03D0", VA = "0x5CC13D0")]
	internal static List<string> ConflictsForTests(string rowId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$ConflictsForTests): 1 lines keep C-only constructs
		Dictionary<object, object> __this;
		AottgKeybindConflictRegistry.Entry entry;
		bool bVar1;
		Dictionary<string, List<AottgKeybindConflictRegistry.Entry>> keys;
		List<string> pSVar2;
		AottgKeybindConflictRegistry.Entry pGStack_18;

		pGStack_18 = null;
		bVar1 = String.IsNullOrEmpty(rowId);
		if (!bVar1) {
			if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
			}
			__this = (Dictionary<object, object>)AottgKeybindConflictRegistry.Entries;
			if (__this == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this.TryGetValue((object)rowId, (object*)&pGStack_18);
			entry = pGStack_18;
			if (bVar1) {
				if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				keys = AottgKeybindConflictRegistry.KeyMap();
				pSVar2 = AottgKeybindConflictRegistry.ConflictLabels(entry, keys);
				return pSVar2;
			}
		}
		pSVar2 = new List<string>();
		return pSVar2;
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x5CC14D0", Offset = "0x5CC04D0", VA = "0x5CC14D0")]
	internal static void ClearForTests()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$ClearForTests): clean
		uint uVar1;
		Dictionary<object, object> __this;

		if (Il2CppMethodInitialized_0754817d == false) {
			Il2CppMethodInitialized_0754817d = true;
			uVar1 = (typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)AottgKeybindConflictRegistry.Entries;
		}
		else {
			__this = *(Dictionary<object, object>*)(typeof(AottgKeybindConflictRegistry)). static_fields;
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Clear();
		AottgKeybindConflictRegistry._nextOrder = 0;
		return;
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x5CC02C0", Offset = "0x5CBF2C0", VA = "0x5CC02C0")]
	private static Dictionary<string, List<Entry>> KeyMap()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$KeyMap): 16 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		OrdinalIgnoreCaseComparer comparer;
		Dictionary<object, object> __this;
		AottgKeybindConflictRegistry.Entry[] pGVar7;
		object pIVar9;
		object item;
		bool bVar10;
		int iVar11;
		Dictionary<string, List<AottgKeybindConflictRegistry.Entry>> __this_00;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		AottgKeybindConflictRegistry.d__13<Keys> __this_02;
		String pSVar13;
		List<AottgKeybindConflictRegistry.Entry> __this_03;
		String str0;
		object local_88;
		List<AottgKeybindConflictRegistry.Entry> local_80;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_78;
		byte[] local_58 = new byte[16];
		AottgKeybindConflictRegistry.Entry local_48;
		byte local_38;

		if (Il2CppMethodInitialized_0754817e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(Dictionary<string, List<AottgKeybindConflictRegistry.Entry>>)) ;
			Il2CppMethodInitialized_0754817e = true;
		}
		local_78._dictionary = null;
		local_78._index = 0;
		local_78._version = 0;
		local_78._currentValue = null;
		local_88 = null;
		local_80 = null;
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
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, List<AottgKeybindConflictRegistry.Entry>>));
		__this_00 = new Dictionary<object, object>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		__this = (Dictionary<object, object>)AottgKeybindConflictRegistry.Entries;
		if ((__this == null) ||(__this_01 = __this.Values, __this_01 == null)) {
			throw new NullReferenceException();
		}
		local_58.GetEnumerator(__this_01);
		local_78._currentValue = (object)local_48;
		local_78._dictionary = (Dictionary<TKey, TValue>)local_58._0_8_;
		local_78._index = local_58._8_4_;
		local_78._version = local_58._12_4_;
		local_58._0_8_ = null;
		local_58._8_8_ = &local_78;
		do {
			do {
				bVar10 = local_78.MoveNext();
				item = local_78._currentValue;
				if (!bVar10) {
					local_78.Dispose();
					return __this_00;
				}
				if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgKeybindConflictRegistry.d__13<Keys>));
				__this_02 = new Object();
				__this_02.__1__state = -2;
				iVar11 = Environment.CurrentManagedThreadId;
				__this_02.__l__initialThreadId = iVar11;
				__this_02.__3__entry =(AottgKeybindConflictRegistry.Entry)item;
				local_88 = __this_02.Dispose();
				local_38 = (byte)&local_88;
	label_05dc063b: ;
				pIVar9 = local_88;
				if (local_88 == null) {
					throw new NullReferenceException();
				}
				bVar10 = pIVar9.Dispose();
				pIVar9 = local_88;
				if (bVar10) {
					if (local_88 == null) {
						throw new NullReferenceException();
					}
					pSVar13 = pIVar9.Dispose();
					if ((AottgKeybindConflictRegistry.Entry)item ==null) {
						throw new NullReferenceException();
					}
					str0 = ((AottgKeybindConflictRegistry.Entry)((long)item + 0x10)).ScopeId;
					if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
					}
					if (str0 == null) {
						str0 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					pSVar13 = String.Concat(str0, "\n", pSVar13);
					if (__this_00 ==null) {
						throw new NullReferenceException();
					}
					bVar10 = __this_00.TryGetValue((object)pSVar13, (object*)&local_80);
					if (!bVar10) {
						__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<AottgKeybindConflictRegistry.Entry>));
						__this_03 = new List<object>();
						local_80 = __this_03;
						__this_00.set_Item((object)pSVar13, (object)__this_03);
					}
					if (local_80 == null) {
						throw new NullReferenceException();
					}
					bVar10 = local_80.Contains(item);
					if (!bVar10) {
						if (local_80 != null) {
							piVar1 = &local_80._version;
							*piVar1 = *piVar1 + 1;
							pGVar7 = local_80._items;
							if (pGVar7 != null) {
								uVar3 = local_80._size;
								if (uVar3 < (uint)pGVar7.Length) {
									local_80._size = uVar3 + 1;
									pGVar7[(int)uVar3] =(AottgKeybindConflictRegistry.Entry)item;
								}
								else {
									local_80.AddWithResize(item);
								}
								goto label_05dc063b;
							}
						}
						throw new NullReferenceException();
					}
					goto label_05dc063b;
				}
			} while (local_88 == null);
			pIVar9.Dispose();
		} while(true);
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x5CC0A70", Offset = "0x5CBFA70", VA = "0x5CC0A70")]
	private static List<string> ConflictLabels(Entry entry, Dictionary<string, List<Entry>> keys)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$ConflictLabels): 17 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		AottgKeybindConflictRegistry.d__13<Keys> pGVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		Il2CppClass pIVar5;
		HashSet<object> pSVar6;
		AottgKeybindConflictRegistry.Entry[] pGVar7;
		String[] pSVar8;
		Dictionary<object, object> __this;
		bool bVar10;
		int iVar11;
		List<AottgKeybindConflictRegistry.Entry> __this_00;
		AottgKeybindConflictRegistry.d__13<Keys> __this_01;
		VirtualInvokeData pVVar12;
		String pSVar13;
		String pSVar14;
		AottgKeybindConflictRegistry.Entry pGVar15;
		Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry___c_StaticFields pGVar16;
		Comparison<T> comparison;
		List<string> __this_02;
		object pIVar17;
		ulong uVar18;
		long lVar19;
		int iVar20;
		object local_58;
		List<object> local_50;
		Dictionary<object, object> local_48;
		object* local_38;

		if (Il2CppMethodInitialized_0754817f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(Comparison<AottgKeybindConflictRegistry.Entry>)) ;
			Il2CppMethodInitialized_0754817f = true;
		}
		local_58 = null;
		local_50 = null;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<AottgKeybindConflictRegistry.Entry>));
		__this_00 = new List<object>();
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgKeybindConflictRegistry.d__13<Keys>));
		__this_01 = new Object();
		__this_01.__1__state = -2;
		iVar11 = Environment.CurrentManagedThreadId;
		__this_01.__l__initialThreadId = iVar11;
		__this_01.__3__entry = entry;
		pGVar3 = __this_01.klass;
		uVar18 = (ulong)(pGVar3._2).interface_offsets_count;
		local_58 = __this_01.Dispose();
		local_38 = &local_58;
		if (local_58 != null) {
			local_48 = (Dictionary<object, object>)keys;
			do {
				__this = local_48;
				pIVar17 = local_58;
				pIVar5 = local_58.klass;
				uVar18 = (ulong)(pIVar5._2).interface_offsets_count;
				bVar10 = pIVar17.Dispose();
				pIVar17 = local_58;
				if (!bVar10) {
					if (local_58 == null) goto label_05dc1086;
					pIVar5 = local_58.klass;
					uVar18 = (ulong)(pIVar5._2).interface_offsets_count;
					if (uVar18 == 0) goto label_05dc105f;
					pIVar4 = (pIVar5._1).interfaceOffsets;
					lVar19 = 0;
					goto label_05dc1050;
				}
				if (local_58 == null) {
					throw new NullReferenceException();
				}
				pIVar5 = local_58.klass;
				uVar18 = (ulong)(pIVar5._2).interface_offsets_count;
				pSVar13 = pIVar17.Dispose();
				if (entry == null) {
					throw new NullReferenceException();
				}
				pSVar14 = entry.ScopeId;
				if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				if (pSVar14 == null) {
					pSVar14 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				pSVar14 = String.Concat(pSVar14, "\n", pSVar13);
				if (__this == null) {
					throw new NullReferenceException();
				}
				bVar10 = __this.TryGetValue((object)pSVar14, (object*)&local_50);
				if (bVar10) {
					if (local_50 == null) {
	label_05dc1008: ;
						throw new NullReferenceException();
					}
					if (__this_00 == null) {
						iVar20 = 0;
						while (iVar20 < local_50._size) {
							pGVar15 = (AottgKeybindConflictRegistry.Entry)local_50.get_Item(iVar20);
							if (pGVar15 != entry) {
								throw new NullReferenceException();
							}
							iVar20 = iVar20 + 1;
							if (local_50 == null) goto label_05dc1008;
						}
					}
					else {
						iVar20 = 0;
						while (iVar20 < local_50._size) {
							pGVar15 = (AottgKeybindConflictRegistry.Entry)local_50.get_Item(iVar20);
							if ((pGVar15 != entry) &&(bVar10 = __this_00.Contains((object)pGVar15), !bVar10)) {
								if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
								}
								pSVar6 = (HashSet<object>)entry.DefaultKeys;
								if (pSVar6 == null) {
	label_05dc1234: ;
									throw new NullReferenceException();
								}
								bVar10 = pSVar6.Contains((object)pSVar13);
								if (bVar10) {
									if ((pGVar15 == null) || (pSVar6 = (HashSet<object>)pGVar15.DefaultKeys, pSVar6 == null)) goto label_05dc1234;
									bVar10 = pSVar6.Contains((object)pSVar13);
									if (bVar10) goto label_05dc0ec0;
								}
								piVar1 = &__this_00._version;
								*piVar1 = *piVar1 + 1;
								pGVar7 = __this_00._items;
								if (pGVar7 == null) {
									throw new NullReferenceException();
								}
								uVar2 = __this_00._size;
								if (uVar2 < (uint)pGVar7.Length) {
									__this_00._size = uVar2 + 1;
									pGVar7[(int)uVar2] = pGVar15;
								}
								else {
									__this_00.AddWithResize((object)pGVar15);
								}
							}
	label_05dc0ec0: ;
							iVar20 = iVar20 + 1;
							if (local_50 == null) goto label_05dc1008;
						}
					}
				}
			} while (local_58 != null);
		}
		throw new NullReferenceException();
		while (true) {
			lVar19 = lVar19 + 0x10;
			if (!(uVar18 * 0x10 != lVar19)) break;
	label_05dc1050: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar19) == typeof(IDisposable)) {
				pVVar12 = pIVar5.vtable + *(int)((long)&pIVar4.offset + lVar19);
				goto label_05dc107d;
			}
		}
	label_05dc105f: ;
	label_05dc107d: ;
		pIVar17.Dispose();
	label_05dc1086: ;
		if ((typeof(AottgKeybindConflictRegistry.c)._2). cctor_finished_or_no_cctor == 0) {
		}
		pGVar16 = typeof(AottgKeybindConflictRegistry.c).static_fields;
		comparison = (Comparison<T>)pGVar16.__9__10_0;
		if (comparison == null) {
			if ((typeof(AottgKeybindConflictRegistry.c)._2). cctor_finished_or_no_cctor == 0) {
				pGVar16 = typeof(AottgKeybindConflictRegistry.c).static_fields;
			}
			pIVar17 = (object)pGVar16.__9;
			comparison = new Comparison<AottgKeybindConflictRegistry.Entry>(pIVar17, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindConflictRegistry_c_ConflictLabels_b__10_0);
			pGVar16 = typeof(AottgKeybindConflictRegistry.c).static_fields;
			pGVar16.__9__10_0 = (Comparison<AottgKeybindConflictRegistry.Entry>)comparison;
		}
		if (__this_00 == null) {
	label_05dc1257: ;
			throw new NullReferenceException();
		}
		__this_00.Sort(comparison);
		iVar11 = __this_00._size;
		__this_02 = new List<string>(iVar11);
		if (0 < __this_00._size) {
			if (__this_02 == null) {
				__this_00.get_Item(0);
				throw new NullReferenceException();
			}
			iVar20 = 0;
			do {
				while(true) {
					pIVar17 = __this_00.get_Item(iVar20);
					if (pIVar17 == null) goto label_05dc1257;
					pSVar13 = pIVar17[2].monitor;
					piVar1 = &__this_02._version;
					*piVar1 = *piVar1 + 1;
					pSVar8 = __this_02._items;
					if (pSVar8 == null) goto label_05dc1257;
					uVar2 = __this_02._size;
					if ((uint)pSVar8.Length <= uVar2) break;
					__this_02._size = uVar2 + 1;
					pSVar8[(int)uVar2] = pSVar13;
					iVar20 = iVar20 + 1;
					if (__this_00._size <= iVar20) {
						return __this_02;
					}
				}
				__this_02.AddWithResize((object)pSVar13);
				iVar20 = iVar20 + 1;
			} while (iVar20 < __this_00._size);
		}
		return __this_02;
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x5CC1650", Offset = "0x5CC0650", VA = "0x5CC1650")]
	private static bool IsDefaultDuplicate(Entry entry, Entry other, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$IsDefaultDuplicate): 1 lines keep C-only constructs
		HashSet<object> pSVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_07548180 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07548180 = true;
		}
		if ((entry != null) &&(pSVar1 = (HashSet<object>)entry.DefaultKeys, pSVar1 != null)) {
			bVar2 = pSVar1.Contains((object)key);
			if (!bVar2) {
				return false;
			}
			if ((other != null) &&(pSVar1 = (HashSet<object>)other.DefaultKeys, pSVar1 != null)) {
				bVar2 = pSVar1.Contains((object)key);
				return bVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x5CC15E0", Offset = "0x5CC05E0", VA = "0x5CC15E0")]
	private static string ScopedKey(string scopeId, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$ScopedKey): clean
		String pSVar1;

		if (scopeId == null) {
			scopeId = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar1 = String.Concat(scopeId, "\n", key);
		return pSVar1;
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x5CC1570", Offset = "0x5CC0570", VA = "0x5CC1570")]
	[IteratorStateMachine(typeof(_003CKeys_003Ed__13))]
	private static IEnumerable<string> Keys(Entry entry)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$Keys): 1 lines keep C-only constructs
		int iVar1;
		AottgKeybindConflictRegistry.d__13<Keys> __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgKeybindConflictRegistry.d__13<Keys>));
		__this = new Object();
		__this.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this.__l__initialThreadId = iVar1;
		__this.__3__entry = entry;
		return (IEnumerable<string>)__this;
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x5CBFB00", Offset = "0x5CBEB00", VA = "0x5CBFB00")]
	private static HashSet<string> BuildDefaultKeys(KeybindSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c (Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$BuildDefaultKeys): 7 lines keep C-only constructs
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		sbyte cVar4;
		bool bVar5;
		HashSet<string> __this;
		object pIVar6;
		VirtualInvokeData pVVar7;
		InputKey __this_00;
		String item;
		ulong uVar8;
		long lVar9;
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
		if (setting == null) {
			return __this;
		}
		pIVar6 = (object)setting.DefaultInputKeys();
		if (pIVar6 == null) {
			throw new NullReferenceException();
		}
		pIVar2 = pIVar6.klass;
		uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
		pIVar6 = pIVar6.Dispose();
		local_38 = (byte)&local_48;
		do {
			local_48 = pIVar6;
			if (pIVar6 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = pIVar6.klass;
			uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
			cVar4 = pIVar6.Dispose();
			pIVar6 = local_48;
			if (cVar4 == false) {
				if (local_48 == null) {
					return __this;
				}
				pIVar2 = local_48.klass;
				uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar8 == 0) goto label_05dbfebf;
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar9 = 0;
				break;
			}
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = local_48.klass;
			uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
			__this_00 = (InputKey)pIVar6.Dispose();
			pIVar6 = local_48;
			if ((__this_00 != null) &&(bVar5 = __this_00.IsNone(), pIVar6 = local_48, !bVar5)) {
				item = __this_00.ToString();
				if (__this == null) {
					throw new NullReferenceException();
				}
				__this.Add((object)item);
				pIVar6 = local_48;
			}
		} while(true);
		while (true) {
			lVar9 = lVar9 + 0x10;
			if (!(uVar8 * 0x10 != lVar9)) break;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar9) == typeof(IDisposable)) {
				pVVar7 = (VirtualInvokeData)&pIVar2.vtable[*(int)((long)&pIVar3.offset + lVar9)].methodPtr;
				goto label_05dbfedd;
			}
		}
	label_05dbfebf: ;
	label_05dbfedd: ;
		pIVar6.Dispose();
		return __this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictRegistry.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry$$.cctor: 2 lines keep C-only constructs
	static AottgKeybindConflictRegistry()
	{
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		Dictionary<string, AottgKeybindConflictRegistry.Entry> __this;

		if (Il2CppMethodInitialized_07548184 == false) {
			Il2CppMethodInitialized_07548184 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
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
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, AottgKeybindConflictRegistry.Entry>));
		__this = new Dictionary<object, object>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		AottgKeybindConflictRegistry.Entries = __this;
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(AottgKeybindConflictRegistry.c)) ;
		__this = new Object();
		AottgKeybindConflictRegistry.c.__9 =(AottgKeybindConflictRegistry.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictRegistry.<>c$$<ConflictLabels>b__10_0: clean
	private int c__ConflictLabels_b__10_0(AottgKeybindConflictRegistry.Entry a, AottgKeybindConflictRegistry.Entry b)
	{
		int iVar1;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		return iVar1;
	}
}
