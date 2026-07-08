using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000348")]
internal ref struct ValueListBuilder<T>
{
	[Token(Token = "0x4000F19")]
	[FieldOffset(Offset = "0x0")]
	private Span<T> _span;

	[Token(Token = "0x4000F1A")]
	[FieldOffset(Offset = "0x0")]
	private T[] _arrayFromPool;

	[Token(Token = "0x4000F1B")]
	[FieldOffset(Offset = "0x0")]
	private int _pos;

	[Token(Token = "0x170004CD")]
	public int Length
	{
		[Token(Token = "0x60015EA")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004CE")]
	public unsafe ref T this[int index]
	{
		[Token(Token = "0x60015EB")]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x60015E9")]
	public ValueListBuilder(Span<T> initialSpan)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015EC")]
	public void Append(T item)
	{
	}

	[Token(Token = "0x60015ED")]
	public ReadOnlySpan<T> AsSpan()
	{
		return default(ReadOnlySpan<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015EE")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60015EF")]
	private void Grow()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F0")]
	public T Pop()
	{
		return (T)null;
	}
}
