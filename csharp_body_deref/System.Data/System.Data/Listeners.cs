using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000083")]
internal sealed class Listeners<TElem> where TElem : class
{
	[Token(Token = "0x2000084")]
	internal delegate void Action<T1, T2, T3, T4>(T1 arg1, T2 arg2, T3 arg3, T4 arg4);

	[Token(Token = "0x2000085")]
	internal delegate TResult Func<T1, TResult>(T1 arg1);

	[Token(Token = "0x40002B3")]
	[FieldOffset(Offset = "0x0")]
	private readonly List<TElem> _listeners;

	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<TElem, bool> _filter;

	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _objectID;

	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0x0")]
	private int _listenerReaderCount;

	[Token(Token = "0x17000137")]
	internal bool HasListeners
	{
		[Token(Token = "0x6000794")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000793")]
	internal Listeners(int ObjectID, Func<TElem, bool> notifyFilter)
	{
	}

	[Token(Token = "0x6000795")]
	internal void Add(TElem listener)
	{
	}

	[Token(Token = "0x6000796")]
	internal int IndexOfReference(TElem listener)
	{
		return default(int);
	}

	[Token(Token = "0x6000797")]
	internal void Remove(TElem listener)
	{
	}

	[Token(Token = "0x6000798")]
	internal void Notify<T1, T2, T3>(T1 arg1, T2 arg2, T3 arg3, Action<TElem, T1, T2, T3> action)
	{
	}

	[Token(Token = "0x6000799")]
	private void RemoveNullListeners(int nullIndex)
	{
	}
}
