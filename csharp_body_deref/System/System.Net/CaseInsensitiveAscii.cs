using System.Collections;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000153")]
internal class CaseInsensitiveAscii : IEqualityComparer, IComparer
{
	[Token(Token = "0x40006DC")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly CaseInsensitiveAscii StaticInstance;

	[Token(Token = "0x40006DD")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly byte[] AsciiToLower;

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x463DE00", Offset = "0x463DE00", VA = "0x463DE00", Slot = "5")]
	public int GetHashCode(object myObject)
	{
		return default(int);
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x463DF00", Offset = "0x463DF00", VA = "0x463DF00", Slot = "6")]
	public int Compare(object firstObject, object secondObject)
	{
		return default(int);
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x463E070", Offset = "0x463E070", VA = "0x463E070")]
	private int FastGetHashCode(string myString)
	{
		return default(int);
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x463E150", Offset = "0x463E150", VA = "0x463E150", Slot = "4")]
	public new bool Equals(object firstObject, object secondObject)
	{
		return default(bool);
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x463E2B0", Offset = "0x463E2B0", VA = "0x463E2B0")]
	public CaseInsensitiveAscii()
	{
	}
}
