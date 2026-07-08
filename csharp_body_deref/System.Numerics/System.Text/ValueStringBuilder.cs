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
		[Address(RVA = "0x433A1E0", Offset = "0x433A1E0", VA = "0x433A1E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4332FA0", Offset = "0x4332FA0", VA = "0x4332FA0")]
	public ValueStringBuilder(Span<char> initialBuffer)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4333250", Offset = "0x4333250", VA = "0x4333250", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4333180", Offset = "0x4333180", VA = "0x4333180")]
	public bool TryCopyTo(Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4332FC0", Offset = "0x4332FC0", VA = "0x4332FC0")]
	public void Insert(int index, char value, int count)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x433A550", Offset = "0x433A550", VA = "0x433A550")]
	public void Append(char c)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x433A620", Offset = "0x433A620", VA = "0x433A620")]
	public void Append(string s)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x433A6B0", Offset = "0x433A6B0", VA = "0x433A6B0")]
	private void AppendSlow(string s)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4339280", Offset = "0x4339280", VA = "0x4339280")]
	public void Append(char c, int count)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4339120", Offset = "0x4339120", VA = "0x4339120")]
	public unsafe void Append(char* value, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x433A7D0", Offset = "0x433A7D0", VA = "0x433A7D0")]
	public Span<char> AppendSpan(int length)
	{
		return default(Span<char>);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x433A5B0", Offset = "0x433A5B0", VA = "0x433A5B0")]
	private void GrowAndAppend(char c)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x433A1F0", Offset = "0x433A1F0", VA = "0x433A1F0")]
	private void Grow(int requiredAdditionalCapacity)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x433A880", Offset = "0x433A880", VA = "0x433A880")]
	public void Dispose()
	{
	}
}
