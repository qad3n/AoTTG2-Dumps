using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000214")]
internal ref struct ValueListBuilder<T>
{
	[Token(Token = "0x4000781")]
	[FieldOffset(Offset = "0x0")]
	private Span<T> _span;

	[Token(Token = "0x4000782")]
	[FieldOffset(Offset = "0x0")]
	private T[] _arrayFromPool;

	[Token(Token = "0x4000783")]
	[FieldOffset(Offset = "0x0")]
	private int _pos;

	[Token(Token = "0x1700030D")]
	public int Length
	{
		[Token(Token = "0x6000E71")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700030E")]
	public unsafe ref T this[int index]
	{
		[Token(Token = "0x6000E72")]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x6000E70")]
	public ValueListBuilder(Span<T> initialSpan)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Token(Token = "0x6000E73")]
	public void Append(T item)
	{
	}

	[Token(Token = "0x6000E74")]
	public ReadOnlySpan<T> AsSpan()
	{
		return default(ReadOnlySpan<T>);
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Token(Token = "0x6000E75")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000E76")]
	private void Grow()
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Token(Token = "0x6000E77")]
	public T Pop()
	{
		return (T)null;
	}
}
