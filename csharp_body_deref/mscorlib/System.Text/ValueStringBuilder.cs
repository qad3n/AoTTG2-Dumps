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
		[Address(RVA = "0x4E2DEF0", Offset = "0x4E2DEF0", VA = "0x4E2DEF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000244")]
	public unsafe ref char this[int index]
	{
		[Token(Token = "0x60016C6")]
		[Address(RVA = "0x4E2DF00", Offset = "0x4E2DF00", VA = "0x4E2DF00")]
		get
		{
			return ref *(char*)null;
		}
	}

	[Token(Token = "0x60016C4")]
	[Address(RVA = "0x4E2DED0", Offset = "0x4E2DED0", VA = "0x4E2DED0")]
	public ValueStringBuilder(Span<char> initialBuffer)
	{
	}

	[Token(Token = "0x60016C7")]
	[Address(RVA = "0x4E2DF20", Offset = "0x4E2DF20", VA = "0x4E2DF20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60016C8")]
	[Address(RVA = "0x4E2DFC0", Offset = "0x4E2DFC0", VA = "0x4E2DFC0")]
	public bool TryCopyTo(Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60016C9")]
	[Address(RVA = "0x4E2E090", Offset = "0x4E2E090", VA = "0x4E2E090")]
	public void Append(char c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60016CA")]
	[Address(RVA = "0x4E2E160", Offset = "0x4E2E160", VA = "0x4E2E160")]
	public void Append(string s)
	{
	}

	[Token(Token = "0x60016CB")]
	[Address(RVA = "0x4E2E1F0", Offset = "0x4E2E1F0", VA = "0x4E2E1F0")]
	private void AppendSlow(string s)
	{
	}

	[Token(Token = "0x60016CC")]
	[Address(RVA = "0x4E2E670", Offset = "0x4E2E670", VA = "0x4E2E670")]
	public void Append(char c, int count)
	{
	}

	[Token(Token = "0x60016CD")]
	[Address(RVA = "0x4E2E880", Offset = "0x4E2E880", VA = "0x4E2E880")]
	public unsafe void Append(char* value, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60016CE")]
	[Address(RVA = "0x4E2E9E0", Offset = "0x4E2E9E0", VA = "0x4E2E9E0")]
	public Span<char> AppendSpan(int length)
	{
		return default(Span<char>);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60016CF")]
	[Address(RVA = "0x4E2E0F0", Offset = "0x4E2E0F0", VA = "0x4E2E0F0")]
	private void GrowAndAppend(char c)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60016D0")]
	[Address(RVA = "0x4E2E310", Offset = "0x4E2E310", VA = "0x4E2E310")]
	private void Grow(int requiredAdditionalCapacity)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60016D1")]
	[Address(RVA = "0x4E2EA90", Offset = "0x4E2EA90", VA = "0x4E2EA90")]
	public void Dispose()
	{
	}
}
