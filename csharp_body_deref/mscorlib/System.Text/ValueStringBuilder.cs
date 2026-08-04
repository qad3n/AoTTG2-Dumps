// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.ValueStringBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000293")]
internal ref struct ValueStringBuilder
{
	[Token(Token = "0x4000B9C")]
	[FieldOffset(Offset = "0x0")]
	private char[] _arrayToReturnToPool;

	[Token(Token = "0x4000B9D")]
	[FieldOffset(Offset = "0x8")]
	private Span<char> _chars;

	[Token(Token = "0x4000B9E")]
	[FieldOffset(Offset = "0x18")]
	private int _pos;

	[Token(Token = "0x17000243")]
	public int Length
	{
		[Token(Token = "0x60016C5")]
		[Address(RVA = "0x3B13A10", Offset = "0x3B13A10", VA = "0x3B13A10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000244")]
	public unsafe ref char this[int index]
	{
		[Token(Token = "0x60016C6")]
		[Address(RVA = "0x3B13A20", Offset = "0x3B13A20", VA = "0x3B13A20")]
		get
		{
			return ref *(char*)null;
		}
	}

	[Token(Token = "0x60016C4")]
	[Address(RVA = "0x3B139F0", Offset = "0x3B139F0", VA = "0x3B139F0")]
	public ValueStringBuilder(Span<char> initialBuffer)
	{
	}

	[Token(Token = "0x60016C7")]
	[Address(RVA = "0x3B13A40", Offset = "0x3B13A40", VA = "0x3B13A40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60016C8")]
	[Address(RVA = "0x3B13AE0", Offset = "0x3B13AE0", VA = "0x3B13AE0")]
	public bool TryCopyTo(Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60016C9")]
	[Address(RVA = "0x3B13BB0", Offset = "0x3B13BB0", VA = "0x3B13BB0")]
	public void Append(char c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60016CA")]
	[Address(RVA = "0x3B13C80", Offset = "0x3B13C80", VA = "0x3B13C80")]
	public void Append(string s)
	{
	}

	[Token(Token = "0x60016CB")]
	[Address(RVA = "0x3B13D10", Offset = "0x3B13D10", VA = "0x3B13D10")]
	private void AppendSlow(string s)
	{
	}

	[Token(Token = "0x60016CC")]
	[Address(RVA = "0x3B14190", Offset = "0x3B14190", VA = "0x3B14190")]
	public void Append(char c, int count)
	{
	}

	[Token(Token = "0x60016CD")]
	[Address(RVA = "0x3B143A0", Offset = "0x3B143A0", VA = "0x3B143A0")]
	public unsafe void Append(char* value, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60016CE")]
	[Address(RVA = "0x3B14500", Offset = "0x3B14500", VA = "0x3B14500")]
	public Span<char> AppendSpan(int length)
	{
		return default(Span<char>);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60016CF")]
	[Address(RVA = "0x3B13C10", Offset = "0x3B13C10", VA = "0x3B13C10")]
	private void GrowAndAppend(char c)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60016D0")]
	[Address(RVA = "0x3B13E30", Offset = "0x3B13E30", VA = "0x3B13E30")]
	private void Grow(int requiredAdditionalCapacity)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60016D1")]
	[Address(RVA = "0x3B145B0", Offset = "0x3B145B0", VA = "0x3B145B0")]
	public void Dispose()
	{
	}
}
