// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.HybridReferenceDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200024A")]
internal class HybridReferenceDictionary<TKey, TValue> where TKey : class
{
	[Token(Token = "0x200024B")]
	[CompilerGenerated]
	private sealed class _003CGetEnumeratorWorker_003Ed__7 : IEnumerator<KeyValuePair<TKey, TValue>>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000437")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000438")]
		[FieldOffset(Offset = "0x0")]
		private KeyValuePair<TKey, TValue> _003C_003E2__current;

		[Token(Token = "0x4000439")]
		[FieldOffset(Offset = "0x0")]
		public HybridReferenceDictionary<TKey, TValue> _003C_003E4__this;

		[Token(Token = "0x400043A")]
		[FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x1700024D")]
		private KeyValuePair<TKey, TValue> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CTKey_002CTValue_003E_003E_002ECurrent
		{
			[Token(Token = "0x6000B4A")]
			[DebuggerHidden]
			get
			{
				return default(KeyValuePair<TKey, TValue>);
			}
		}

		[Token(Token = "0x1700024E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B4C")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B47")]
		[DebuggerHidden]
		public _003CGetEnumeratorWorker_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000B48")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000B49")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B4B")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x0")]
	private KeyValuePair<TKey, TValue>[] _keysAndValues;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<TKey, TValue> _dict;

	[Token(Token = "0x1700024C")]
	public TValue this[TKey key]
	{
		[Token(Token = "0x6000B44")]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6000B45")]
		set
		{
		}
	}

	[Token(Token = "0x6000B3F")]
	public bool TryGetValue(TKey key, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B40")]
	public void Remove(TKey key)
	{
	}

	[Token(Token = "0x6000B41")]
	public bool ContainsKey(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B42")]
	public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[IteratorStateMachine(typeof(HybridReferenceDictionary<, >._003CGetEnumeratorWorker_003Ed__7))]
	private IEnumerator<KeyValuePair<TKey, TValue>> GetEnumeratorWorker()
	{
		return null;
	}

	[Token(Token = "0x6000B46")]
	public HybridReferenceDictionary()
	{
	}
}
