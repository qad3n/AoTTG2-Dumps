// ==================== AoTTG2 cross-reference ====================
// Type: Settings.KeybindSetting
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/KeybindSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/KeybindSetting.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Settings;

[Token(Token = "0x2000111")]
internal class KeybindSetting : BaseSetting
{
	[Token(Token = "0x2000112")]
	[CompilerGenerated]
	private sealed class _003CDefaultInputKeys_003Ed__6 : IEnumerable<InputKey>, IEnumerable, IEnumerator<InputKey>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000658")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000659")]
		[FieldOffset(Offset = "0x18")]
		private InputKey _003C_003E2__current;

		[Token(Token = "0x400065A")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400065B")]
		[FieldOffset(Offset = "0x28")]
		public KeybindSetting _003C_003E4__this;

		[Token(Token = "0x400065C")]
		[FieldOffset(Offset = "0x30")]
		private string[] _003C_003E7__wrap1;

		[Token(Token = "0x400065D")]
		[FieldOffset(Offset = "0x38")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x170000C3")]
		private InputKey System_002ECollections_002EGeneric_002EIEnumerator_003CSettings_002EInputKey_003E_002ECurrent
		{
			[Token(Token = "0x60005C6")]
			[Address(RVA = "0x5B7B5B0", Offset = "0x5B7A5B0", VA = "0x5B7B5B0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting.<DefaultInputKeys>d__6$$System.Collections.Generic.IEnumerator<Settings.InputKey>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170000C4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60005C8")]
			[Address(RVA = "0x5B7B600", Offset = "0x5B7A600", VA = "0x5B7B600", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting.<DefaultInputKeys>d__6$$System.Collections.IEnumerator.get_Current): clean
				return (object)this.__2__current;
			}
		}

		[Token(Token = "0x60005C3")]
		[Address(RVA = "0x5B7B460", Offset = "0x5B7A460", VA = "0x5B7B460")]
		[DebuggerHidden]
		public _003CDefaultInputKeys_003Ed__6(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting.<DefaultInputKeys>d__6$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x60005C4")]
		[Address(RVA = "0x5B7B490", Offset = "0x5B7A490", VA = "0x5B7B490", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting.<DefaultInputKeys>d__6$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60005C5")]
		[Address(RVA = "0x5B7B4A0", Offset = "0x5B7A4A0", VA = "0x5B7B4A0", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting.<DefaultInputKeys>d__6$$MoveNext): 2 lines keep C-only constructs
			uint uVar1;
			int iVar2;
			KeybindSetting pSVar3;
			String[] pSVar4;
			String keyStr;
			InputKey __this_00;
			String[]* targetAddress;
			uint uVar5;

			iVar2 = this.__1__state;
			if (iVar2 == 1) {
				this.__1__state = -1;
				uVar5 = this.__7__wrap2 + 1;
				this.__7__wrap2 = uVar5;
			}
			else {
				if (iVar2 != 0) {
					uVar5 = 0;
					goto label_05c7b591;
				}
				pSVar3 = this.__4__this;
				this.__1__state = -1;
				if (pSVar3 == null) goto label_05c7b59a;
				pSVar4 = pSVar3._defaultKeyStrings;
				uVar5 = 0;
				if (pSVar4 == null) goto label_05c7b591;
				this.__7__wrap1 = pSVar4;
				this.__7__wrap2 = 0;
			}
			pSVar4 = this.__7__wrap1;
			if (pSVar4 == null) {
		label_05c7b59a: ;
				throw new NullReferenceException();
			}
			uVar1 = (uint)pSVar4.Length;
			if ((int)uVar5 < (int)uVar1) {
				if (uVar1 <= uVar5) {
					throw new IndexOutOfRangeException();
				}
				keyStr = pSVar4[(int)uVar5];
				__this_00 = new InputKey(keyStr);
				this.__2__current = __this_00;
				this.__1__state = 1;
				uVar5 = 1;
			}
			else {
				targetAddress = &this.__7__wrap1;
				*targetAddress = null;
				uVar5 = 0;
			}
		label_05c7b591: ;
			return SUB41(uVar5, 0);
		}

		[Token(Token = "0x60005C7")]
		[Address(RVA = "0x5B7B5C0", Offset = "0x5B7A5C0", VA = "0x5B7B5C0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting.<DefaultInputKeys>d__6$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Settings_KeybindSetting_DefaultInputKeys_d__6_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}

		[Token(Token = "0x60005C9")]
		[Address(RVA = "0x5B7B610", Offset = "0x5B7A610", VA = "0x5B7B610", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<InputKey> System_002ECollections_002EGeneric_002EIEnumerable_003CSettings_002EInputKey_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting.<DefaultInputKeys>d__6$$System.Collections.Generic.IEnumerable<Settings.InputKey>.GetEnumerator): 1 lines keep C-only constructs
			int iVar1;
			int iVar2;
			KeybindSetting.d__6<DefaultInputKeys> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator)this;
			}
			__this_00 = il2cpp_codegen_object_new(typeof(KeybindSetting.d__6<DefaultInputKeys>)) ;
			__this_00 = new Object();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			__this_00.__4__this = this.__4__this;
			return (IEnumerator)__this_00;
		}

		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x5B7B6B0", Offset = "0x5B7A6B0", VA = "0x5B7B6B0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting.<DefaultInputKeys>d__6$$System.Collections.IEnumerable.GetEnumerator): clean
			IEnumerator pSVar1;

			pSVar1 = this.System.Collections.Generic.IEnumerable<Settings.InputKey>.GetEnumerator();
			return pSVar1;
		}
	}

	[Token(Token = "0x4000655")]
	[FieldOffset(Offset = "0x18")]
	public List<InputKey> InputKeys;

	[Token(Token = "0x4000656")]
	[FieldOffset(Offset = "0x20")]
	public MobileInput MobileInput;

	[Token(Token = "0x4000657")]
	[FieldOffset(Offset = "0x28")]
	protected string[] _defaultKeyStrings;

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x5A4B800", Offset = "0x5A4A800", VA = "0x5A4B800")]
	public KeybindSetting(string[] defaultKeyStrings)
	{
		// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting$$.ctor): clean
		MethodInfo method_00;
		InspectorSettingMetadata __this_00;

		method_00 = new List<InputKey>();
		this.InputKeys = (List<InputKey>)method_00;
		__this_00 = new InspectorSettingMetadata();
		this.InspectorMetadata = __this_00;
		base();
		this._defaultKeyStrings = defaultKeyStrings;
		this.SetDefault();
		return;
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x5A57080", Offset = "0x5A56080", VA = "0x5A57080")]
	public bool ContainsEnter()
	{
		// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting$$ContainsEnter): clean
		bool bVar1;

		bVar1 = this.Contains(0x10f);
		if (bVar1) {
			return true;
		}
		bVar1 = this.Contains(0xd);
		return bVar1;
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x5A57220", Offset = "0x5A56220", VA = "0x5A57220", Slot = "4")]
	public override void SetDefault()
	{
		// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting$$SetDefault): clean


		this.LoadFromStringArray(this._defaultKeyStrings);
		return;
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x5A57380", Offset = "0x5A56380", VA = "0x5A57380")]
	[IteratorStateMachine(typeof(_003CDefaultInputKeys_003Ed__6))]
	public IEnumerable<InputKey> DefaultInputKeys()
	{
		// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting$$DefaultInputKeys): 1 lines keep C-only constructs
		KeybindSetting.d__6<DefaultInputKeys> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(KeybindSetting.d__6<DefaultInputKeys>)) ;
		__this_00 = new KeybindSetting.d__6<DefaultInputKeys>(-2);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		return (IEnumerable<InputKey>)__this_00;
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x5A57230", Offset = "0x5A56230", VA = "0x5A57230")]
	protected void LoadFromStringArray(string[] keyStrings)
	{
		// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting$$LoadFromStringArray): 4 lines keep C-only constructs
		int piVar1;
		int length;
		uint uVar2;
		List<InputKey> pSVar3;
		String keyStr;
		InputKey[] pSVar4;
		ulong uVar6;
		InputKey __this_00;
		ulong uVar7;

		pSVar3 = this.InputKeys;
		if (pSVar3 != null) {
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar3._size;
			pSVar3._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar3._items, 0, length);
			}
			if (keyStrings != null) {
				if (0 < (int)keyStrings.Length) {
					uVar6 = keyStrings.Length & 0xffffffff;
					uVar7 = 0;
					do {
						if (uVar6 <= uVar7) {
							throw new IndexOutOfRangeException();
						}
						keyStr = keyStrings[uVar7];
						__this_00 = new InputKey(keyStr);
						pSVar3 = this.InputKeys;
						if (pSVar3 == null) goto label_05b5736d;
						piVar1 = &pSVar3._version;
						*piVar1 = *piVar1 + 1;
						pSVar4 = pSVar3._items;
						if (pSVar4 == null) goto label_05b5736d;
						uVar2 = pSVar3._size;
						if (uVar2 < (uint)pSVar4.Length) {
							pSVar3._size = uVar2 + 1;
							pSVar4[(int)uVar2] = __this_00;
						}
						else {
							pSVar3.AddWithResize((object)__this_00);
						}
						uVar7 = uVar7 + 1;
						uVar2 = (uint)keyStrings.Length;
						uVar6 = (ulong)uVar2;
					} while ((long)uVar7 < (long)(int)uVar2);
				}
				return;
			}
		}
	label_05b5736d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x5A573F0", Offset = "0x5A563F0", VA = "0x5A573F0", Slot = "3")]
	public override string ToString()
	{
		// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting$$ToString): 10 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<InputKey> __this_00;
		byte puVar4;
		bool bVar5;
		List<string> __this_01;
		String[] pSVar6;
		String pSVar7;
		byte[] auStack_58 = new byte[8];
		object pIStack_48;
		byte[] auStack_38 = new byte[16];
		object pIStack_28;

		auStack_58 = (byte[])0x0;
		pIStack_48 = null;
		__this_01 = new List<string>();
		__this_00 = this.InputKeys;
		if (__this_00 != null) {
			auStack_38.GetEnumerator((List<object>)__this_00);
			pIStack_48 = pIStack_28;
			auStack_58 = (byte[])auStack_38._0_8_;
			auStack_38._0_8_ = null;
			auStack_38._8_8_ = auStack_58;
			puVar4 = auStack_58;
			if (__this_01 == null) {
				do {
					auStack_38._8_8_ = puVar4;
					bVar5 = auStack_58.MoveNext();
					if (!bVar5) goto label_05b57561;
					if (pIStack_48 == null) goto label_05b5765f;
				} while ((*(sbyte)((long)&pIStack_48[1].klass + 4) != false) &&(puVar4 = (byte)auStack_38._8_8_, *(int)&pIStack_48[1].monitor == 0));
				(*pIStack_48.klass.vtable[3].methodPtr)(pIStack_48,pIStack_48.klass.vtable[3].method);
	label_05b57674: ;
				throw new NullReferenceException();
			}
			while (bVar5 = auStack_58.MoveNext()) {
				if (pIStack_48 == null) {
	label_05b5765f: ;
					throw new NullReferenceException();
				}
				if ((*(sbyte)((long)&pIStack_48[1].klass + 4) == false) || (*(int)&pIStack_48[1].monitor != 0)) {
					pSVar7 = (String)(*pIStack_48.klass.vtable[3].methodPtr)(pIStack_48,pIStack_48.klass.vtable[3].method);
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					pSVar6 = __this_01._items;
					if (pSVar6 == null) goto label_05b57674;
					uVar2 = __this_01._size;
					if (uVar2 < (uint)pSVar6.Length) {
						__this_01._size = uVar2 + 1;
						pSVar6[(int)uVar2] = pSVar7;
					}
					else {
						__this_01.AddWithResize((object)pSVar7);
					}
				}
			}
	label_05b57561: ;
			auStack_58.Dispose();
			if (__this_01 != null) {
				if (__this_01._size == 0) {
					pSVar7 = "None";
				}
				else {
					pSVar6 = (String[])__this_01.ToArray();
					pSVar7 = String.Join(" / ", pSVar6);
				}
				return pSVar7;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x5A576F0", Offset = "0x5A566F0", VA = "0x5A576F0")]
	public bool Contains(InputKey key)
	{
		// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting$$Contains): 3 lines keep C-only constructs
		List<InputKey> __this_00;
		bool bVar1;
		sbyte cVar2;
		int iVar3;
		System_Collections_Generic_List_Enumerator_T__o SStack_48;
		byte puStack_28;

		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		__this_00 = this.InputKeys;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_48 = __this_00.GetEnumerator();
		puStack_28 = (byte)&SStack_48;
		do {
			bVar1 = SStack_48.MoveNext();
			if (!bVar1) {
				iVar3 = 5;
				goto label_05b577ce;
			}
			if (SStack_48._current == null) {
				throw new NullReferenceException();
			}
			cVar2 = (*(SStack_48._current).klass.vtable[0].methodPtr)(SStack_48._current,key,(SStack_48._current).klass.vtable[0].method);
		} while (cVar2 == false);
		iVar3 = 4;
	label_05b577ce: ;
		SStack_48.Dispose();
		return iVar3 == 4 && bVar1;
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x5A570B0", Offset = "0x5A560B0", VA = "0x5A570B0")]
	public bool Contains(KeyCode key)
	{
		// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting$$Contains): 3 lines keep C-only constructs
		List<InputKey> __this_00;
		bool bVar1;
		int iVar2;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this_00 = this.InputKeys;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_48 = __this_00.GetEnumerator();
		local_28 = (byte)&local_48;
		do {
			bVar1 = local_48.MoveNext();
			if (!bVar1) {
				iVar2 = 5;
				goto label_05b57189;
			}
			if (local_48._current == null) {
				throw new NullReferenceException();
			}
		} while (((*(sbyte)((long)&local_48._current[1].klass + 4) != false) ||(*(sbyte)((long)&local_48._current[1].monitor + 4) != false)) ||(*(int)&local_48._current[1].klass != key));
		iVar2 = 4;
	label_05b57189: ;
		local_48.Dispose();
		return iVar2 == 4 && bVar1;
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x5A57870", Offset = "0x5A56870", VA = "0x5A57870")]
	public bool GetKeyDown(bool cl = false)
	{
		// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting$$GetKeyDown): 2 lines keep C-only constructs
		HashSet<object> __this_00;
		List<InputKey> __this_01;
		bool bVar1;
		bool bVar2;
		int iVar3;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_20;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		if (!cl) {
			__this_00 = (HashSet<object>)CustomLogicManager.KeybindDefaultDisabled;
			if (__this_00 == null) goto label_05b579db;
			bVar1 = __this_00.Contains((object)this);
			if (bVar1) {
				return false;
			}
		}
		__this_01 = this.InputKeys;
		if (__this_01 != null) {
			local_48 = __this_01.GetEnumerator();
			local_20 = (byte)&local_48;
			do {
				bVar1 = local_48.MoveNext();
				if (!bVar1) {
					iVar3 = 6;
					goto label_05b579b1;
				}
				if ((InputKey)local_48._current == null) {
					throw new NullReferenceException();
				}
				bVar2 = local_48._current.GetKeyDown();
			} while (!bVar2);
			iVar3 = 5;
	label_05b579b1: ;
			local_48.Dispose();
			return iVar3 == 5 && bVar1;
		}
	label_05b579db: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x5A57A50", Offset = "0x5A56A50", VA = "0x5A57A50")]
	public bool GetKey(bool cl = false)
	{
		// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting$$GetKey): 2 lines keep C-only constructs
		HashSet<object> pSVar1;
		List<InputKey> __this_00;
		bool bVar2;
		bool bVar3;
		int iVar4;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_20;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		if (!cl) {
			pSVar1 = (HashSet<object>)CustomLogicManager.KeybindDefaultDisabled;
			if (pSVar1 == null) goto label_05b57c0b;
			bVar2 = pSVar1.Contains((object)this);
			if (bVar2) {
				return false;
			}
		}
		pSVar1 = (HashSet<object>)CustomLogicManager.KeybindHold;
		if (pSVar1 == null) {
	label_05b57c0b: ;
			throw new NullReferenceException();
		}
		bVar2 = pSVar1.Contains((object)this);
		local_20 = (byte)&local_48;
		bVar3 = true;
		if (!bVar2) {
			__this_00 = this.InputKeys;
			if (__this_00 == null) goto label_05b57c0b;
			local_48 = __this_00.GetEnumerator();
			do {
				bVar3 = local_48.MoveNext();
				if (!bVar3) {
					iVar4 = 7;
					goto label_05b57be1;
				}
				if ((InputKey)local_48._current == null) {
					throw new NullReferenceException();
				}
				bVar2 = local_48._current.GetKey();
			} while (!bVar2);
			iVar4 = 6;
	label_05b57be1: ;
			local_48.Dispose();
			bVar3 = iVar4 == 6 && bVar3;
		}
		return bVar3;
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x5A57C80", Offset = "0x5A56C80", VA = "0x5A57C80")]
	public bool GetKeyUp(bool cl = false)
	{
		// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting$$GetKeyUp): 2 lines keep C-only constructs
		HashSet<object> __this_00;
		List<InputKey> __this_01;
		bool bVar1;
		bool bVar2;
		int iVar3;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_20;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		if (!cl) {
			__this_00 = (HashSet<object>)CustomLogicManager.KeybindDefaultDisabled;
			if (__this_00 == null) goto label_05b57deb;
			bVar1 = __this_00.Contains((object)this);
			if (bVar1) {
				return false;
			}
		}
		__this_01 = this.InputKeys;
		if (__this_01 != null) {
			local_48 = __this_01.GetEnumerator();
			local_20 = (byte)&local_48;
			do {
				bVar1 = local_48.MoveNext();
				if (!bVar1) {
					iVar3 = 6;
					goto label_05b57dc1;
				}
				if ((InputKey)local_48._current == null) {
					throw new NullReferenceException();
				}
				bVar2 = local_48._current.GetKeyUp();
			} while (!bVar2);
			iVar3 = 5;
	label_05b57dc1: ;
			local_48.Dispose();
			return iVar3 == 5 && bVar1;
		}
	label_05b57deb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x5A57E60", Offset = "0x5A56E60", VA = "0x5A57E60", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting$$SerializeToJsonObject): 9 lines keep C-only constructs
		List<InputKey> __this_00;
		bool bVar1;
		JSONArray __this_01;
		String pSVar2;
		JSONString pSVar3;
		System_Collections_Generic_List_Enumerator_object__o SStack_68;
		byte[] auStack_48 = new byte[16];
		object pIStack_38;

		__this_01 = new JSONArray();
		__this_00 = this.InputKeys;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		auStack_48.GetEnumerator((List<object>)__this_00);
		SStack_68._current = pIStack_38;
		SStack_68._list = (List<T>)auStack_48._0_8_;
		SStack_68._index = auStack_48._8_4_;
		SStack_68._version = auStack_48._12_4_;
		auStack_48._0_8_ = null;
		auStack_48._8_8_ = &SStack_68;
		if (__this_01 == null) {
			auStack_48._8_8_ = &SStack_68;
			bVar1 = SStack_68.MoveNext();
			if (bVar1) {
				if (SStack_68._current != null) {
					pSVar2 = (String)(*(SStack_68._current).klass.vtable[3].methodPtr)(SStack_68._current,(SStack_68._current).klass.vtable[3].method);
					pSVar3 = new JSONString(pSVar2);
					throw new NullReferenceException();
				}
	label_05b57feb: ;
				throw new NullReferenceException();
			}
		}
		else {
			while (bVar1 = SStack_68.MoveNext()) {
				if (SStack_68._current == null) goto label_05b57feb;
				pSVar2 = (String)(*(SStack_68._current).klass.vtable[3].methodPtr)(SStack_68._current,(SStack_68._current).klass.vtable[3].method);
				pSVar3 = new JSONString(pSVar2);
				__this_01.Add((JSONNode)pSVar3);
			}
		}
		SStack_68.Dispose();
		return (JSONNode)__this_01;
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x5A58090", Offset = "0x5A57090", VA = "0x5A58090", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/Settings/KeybindSetting.c (Settings.KeybindSetting$$DeserializeFromJsonObject): 6 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		JSONNode pSVar4;
		bool bVar6;
		List<string> __this_00;
		JSONArray pSVar7;
		JSONNode pSVar8;
		String item;
		String[] pSVar9;
		KeyValuePair<string, JSONNode> SVar10;
		JSONNode.Enumerator SStack_78;

		SStack_78.m_Array._list = null;
		SStack_78.m_Array._index = 0;
		SStack_78.m_Array._version = 0;
		SStack_78.m_Object._current.value = null;
		SStack_78.m_Object._getEnumeratorRetType = 0;
		SStack_78.m_Object._36_4_ = 0;
		SStack_78.m_Object._version = 0;
		SStack_78.m_Object._index = 0;
		SStack_78.m_Object._current.key = null;
		SStack_78.type = 0;
		SStack_78._4_4_ = 0;
		SStack_78.m_Object._dictionary = null;
		SStack_78.m_Array._current = null;
		__this_00 = new List<string>();
		if (json != null) {
			pSVar7 = json.get_AsArray();
			if (pSVar7 != null) {
				SStack_78.GetEnumerator(pSVar7);
				bVar6 = SStack_78.MoveNext();
				if (bVar6) {
					if (__this_00 == null) {
						SVar10 = SStack_78.Current;
						pSVar8 = ((JSONNode)SVar10);
						if (pSVar8 != null) {
							pSVar4 = pSVar8.klass;
							bVar2 = (typeof(JSONString)._2).typeHierarchyDepth;
							if ((bVar2 <= (pSVar4._2).typeHierarchyDepth) &&((pSVar4._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(JSONString))) {
								pSVar8.get_Value();
								throw new NullReferenceException();
							}
	label_05b5835f: ;
							throw new InvalidCastException();
						}
						goto label_05b5831b;
					}
					do {
						SVar10 = SStack_78.Current;
						pSVar8 = ((JSONNode)SVar10);
						if (pSVar8 == null) goto label_05b5831b;
						pSVar4 = pSVar8.klass;
						bVar2 = (typeof(JSONString)._2).typeHierarchyDepth;
						if (((pSVar4._2).typeHierarchyDepth < bVar2) ||((pSVar4._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(JSONString))) goto label_05b5835f;
						item = pSVar8.get_Value();
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar9 = __this_00._items;
						if (pSVar9 == null) goto label_05b5831b;
						uVar3 = __this_00._size;
						if (uVar3 < (uint)pSVar9.Length) {
							__this_00._size = uVar3 + 1;
							pSVar9[(int)uVar3] = item;
						}
						else {
							__this_00.AddWithResize((object)item);
						}
						bVar6 = SStack_78.MoveNext();
					} while (bVar6);
				}
				else if (__this_00 == null) goto label_05b5831b;
				pSVar9 = (String[])__this_00.ToArray();
				this.LoadFromStringArray(pSVar9);
				return;
			}
		}
	label_05b5831b: ;
		throw new NullReferenceException();
	}
}
