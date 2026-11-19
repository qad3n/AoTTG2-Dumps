// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.State.GisketchUIState
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/State/GisketchUIState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.State;

[Token(Token = "0x2000036")]
public sealed class GisketchUIState
{
	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, string> _values;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private Action<string> m_Changed;

	[Token(Token = "0x14000001")]
	public event Action<string> Changed
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x5243DE0", Offset = "0x5242DE0", VA = "0x5243DE0")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIState.c (Gisketch.Aottg2UI.State.GisketchUIState$$add_Changed): 1 lines keep C-only constructs
			Action<string> pSVar2;
			Delegate obj;
			object value_00;
			Action<string> a;
			bool bVar3;

			a = this.Changed;
			do {
				obj = Delegate.Combine((Delegate)a, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<string>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.Changed, value_00, a);
				bVar3 = pSVar2 != a;
				a = pSVar2;
			} while (bVar3);
			return;
		}
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x5244810", Offset = "0x5243810", VA = "0x5244810")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIState.c (Gisketch.Aottg2UI.State.GisketchUIState$$remove_Changed): 1 lines keep C-only constructs
			Action<string> pSVar2;
			Delegate obj;
			object value_00;
			Action<string> source;
			bool bVar3;

			source = this.Changed;
			do {
				obj = Delegate.Remove((Delegate)source, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<string>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.Changed, value_00, source);
				bVar3 = pSVar2 != source;
				source = pSVar2;
			} while (bVar3);
			return;
		}
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x5246530", Offset = "0x5245530", VA = "0x5246530")]
	public void Set(string key, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIState.c (Gisketch.Aottg2UI.State.GisketchUIState$$Set): 1 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		Action<string> pSVar2;
		bool bVar3;
		String local_20;

		local_20 = null;
		bVar3 = String.IsNullOrEmpty(key);
		if (bVar3) {
			return;
		}
		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar1 = (Dictionary<object, object>)this._values;
		if (pSVar1 != null) {
			bVar3 = pSVar1.TryGetValue((object)key, (object*)&local_20);
			if ((bVar3) && (bVar3 = (local_20 == value))) {
				return;
			}
			pSVar1 = (Dictionary<object, object>)this._values;
			if (pSVar1 != null) {
				pSVar1.set_Item((object)key, (object)value);
				pSVar2 = this.Changed;
				if (pSVar2 == null) {
					return;
				}
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code,key,pSVar2.method);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x52467F0", Offset = "0x52457F0", VA = "0x52467F0")]
	public void CopyFrom(GisketchUIState other)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIState.c (Gisketch.Aottg2UI.State.GisketchUIState$$CopyFrom): 2 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_48;

		local_48._current.key = null;
		local_48._current.value = null;
		local_48._dictionary = null;
		local_48._version = 0;
		local_48._index = 0;
		local_48._getEnumeratorRetType = 0;
		local_48._36_4_ = 0;
		if (other != null) {
			pSVar1 = (Dictionary<object, object>)other._values;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			local_48 = pSVar1.GetEnumerator();
			while(true) {
				bVar2 = local_48.MoveNext();
				if (!bVar2) break;
				pSVar1 = (Dictionary<object, object>)this._values;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				pSVar1.set_Item(local_48._current.key, local_48._current.value);
			}
			local_48.Dispose();
		}
		return;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x52464C0", Offset = "0x52454C0", VA = "0x52464C0")]
	public void SetBool(string key, bool value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIState.c (Gisketch.Aottg2UI.State.GisketchUIState$$SetBool): 2 lines keep C-only constructs
		String* ppSVar1;

		if (this == null) {
			throw new NullReferenceException();
		}
		if (value) {
			ppSVar1 = &"true";
		}
		else {
			ppSVar1 = &"false";
		}
		this.Set(key, *ppSVar1);
		return;
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x5244A90", Offset = "0x5243A90", VA = "0x5244A90")]
	public string Get(string key, string fallback = "")
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIState.c (Gisketch.Aottg2UI.State.GisketchUIState$$Get): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		String local_20;

		local_20 = null;
		bVar1 = String.IsNullOrEmpty(key);
		if (!bVar1) {
			__this_00 = (Dictionary<object, object>)this._values;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this_00.TryGetValue((object)key, (object*)&local_20);
			if (bVar1) {
			}
		}
		return fallback;
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x5245B50", Offset = "0x5244B50", VA = "0x5245B50")]
	public bool GetBool(string key, bool fallback = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIState.c (Gisketch.Aottg2UI.State.GisketchUIState$$GetBool): 3 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		bool bVar2;
		String* ppSVar3;
		String a;
		String local_20;

		if (fallback) {
			ppSVar3 = &"true";
		}
		else {
			ppSVar3 = &"false";
		}
		if (this == null) {
	label_05345c55: ;
			throw new NullReferenceException();
		}
		a = *ppSVar3;
		local_20 = null;
		bVar1 = String.IsNullOrEmpty(key);
		if (!bVar1) {
			__this_00 = (Dictionary<object, object>)this._values;
			if (__this_00 == null) goto label_05345c55;
			bVar1 = __this_00.TryGetValue((object)key, (object*)&local_20);
			if (bVar1) {
				a = local_20;
			}
		}
		bVar1 = (a == "1");
		if (!bVar1) {
			if (a == null) goto label_05345c55;
			bVar2 = String.Equals(a, "true", 5);
		}
		return bVar2;
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x5246990", Offset = "0x5245990", VA = "0x5246990")]
	public GisketchUIState()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/State/GisketchUIState.c (Gisketch.Aottg2UI.State.GisketchUIState$$.ctor): clean
		Dictionary<string, string> __this_00;

		__this_00 = new Dictionary<string, string>();
		this._values = __this_00;
		base();
		return;
	}
}
