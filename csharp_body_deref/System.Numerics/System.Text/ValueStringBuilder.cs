using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200000F")]
[DefaultMember("Item")]
internal ref struct ValueStringBuilder
{
	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x0")]
	private char[] _arrayToReturnToPool;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x8")]
	private Span<char> _chars;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x18")]
	private int _pos;

	[Token(Token = "0x17000007")]
	public int Length
	{
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x19A1C90", Offset = "0x19A0290", VA = "0x1819A1C90")]
	public ValueStringBuilder(Span<char> initialBuffer)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x25CBBB0", Offset = "0x25CA1B0", VA = "0x1825CBBB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x25CBC80", Offset = "0x25CA280", VA = "0x1825CBC80")]
	public bool TryCopyTo(Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x25CB9E0", Offset = "0x25C9FE0", VA = "0x1825CB9E0")]
	public void Insert(int index, char value, int count)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x25CB6F0", Offset = "0x25C9CF0", VA = "0x1825CB6F0")]
	public void Append(char c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x25CB570", Offset = "0x25C9B70", VA = "0x1825CB570")]
	public void Append(string s)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x25CB290", Offset = "0x25C9890", VA = "0x1825CB290")]
	private void AppendSlow(string s)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x25CB4B0", Offset = "0x25C9AB0", VA = "0x1825CB4B0")]
	public void Append(char c, int count)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x25CB620", Offset = "0x25C9C20", VA = "0x1825CB620")]
	public unsafe void Append(char* value, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x25CB3F0", Offset = "0x25C99F0", VA = "0x1825CB3F0")]
	public Span<char> AppendSpan(int length)
	{
		return default(Span<char>);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x25CB810", Offset = "0x25C9E10", VA = "0x1825CB810")]
	private void GrowAndAppend(char c)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x25CB850", Offset = "0x25C9E50", VA = "0x1825CB850")]
	private void Grow(int requiredAdditionalCapacity)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x25CB770", Offset = "0x25C9D70", VA = "0x1825CB770")]
	public void Dispose()
	{
	}
}
