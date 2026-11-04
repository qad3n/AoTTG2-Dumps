// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.ValueListBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200062B")]
[DefaultMember("Item")]
internal ref struct ValueListBuilder<T>
{
	[Token(Token = "0x4001943")]
	[FieldOffset(Offset = "0x0")]
	private Span<T> _span;

	[Token(Token = "0x4001944")]
	[FieldOffset(Offset = "0x0")]
	private T[] _arrayFromPool;

	[Token(Token = "0x4001945")]
	[FieldOffset(Offset = "0x0")]
	private int _pos;

	[Token(Token = "0x170007C2")]
	public int Length
	{
		[Token(Token = "0x6002F77")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002F76")]
	public ValueListBuilder(Span<T> initialSpan)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002F78")]
	public void Append(T item)
	{
	}

	[Token(Token = "0x6002F79")]
	public ReadOnlySpan<T> AsSpan()
	{
		return default(ReadOnlySpan<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002F7A")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002F7B")]
	private void Grow()
	{
	}
}
