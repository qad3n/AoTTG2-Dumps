// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Listeners
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200008D")]
internal sealed class Listeners<TElem> where TElem : class
{
	[Token(Token = "0x200008E")]
	internal delegate void Action<T1, T2, T3, T4>(T1 arg1, T2 arg2, T3 arg3, T4 arg4);

	[Token(Token = "0x200008F")]
	internal delegate TResult Func<T1, TResult>(T1 arg1);

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x0")]
	private readonly List<TElem> _listeners;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<TElem, bool> _filter;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _objectID;

	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0x0")]
	private int _listenerReaderCount;

	[Token(Token = "0x1700013A")]
	internal bool HasListeners
	{
		[Token(Token = "0x60007B3")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007B2")]
	internal Listeners(int ObjectID, Func<TElem, bool> notifyFilter)
	{
	}

	[Token(Token = "0x60007B4")]
	internal void Add(TElem listener)
	{
	}

	[Token(Token = "0x60007B5")]
	internal int IndexOfReference(TElem listener)
	{
		return default(int);
	}

	[Token(Token = "0x60007B6")]
	internal void Remove(TElem listener)
	{
	}

	[Token(Token = "0x60007B7")]
	internal void Notify<T1, T2, T3>(T1 arg1, T2 arg2, T3 arg3, Action<TElem, T1, T2, T3> action)
	{
	}

	[Token(Token = "0x60007B8")]
	private void RemoveNullListeners(int nullIndex)
	{
	}
}
