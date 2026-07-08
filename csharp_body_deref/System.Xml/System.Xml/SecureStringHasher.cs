using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200003C")]
internal class SecureStringHasher : IEqualityComparer<string>
{
	[Token(Token = "0x200003D")]
	private delegate int HashCodeOfStringDelegate(string s, int sLen, long additionalEntropy);

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x0")]
	private static HashCodeOfStringDelegate hashCodeDelegate;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x10")]
	private int hashCodeRandomizer;

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x4457420", Offset = "0x4457420", VA = "0x4457420")]
	public SecureStringHasher()
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x4457440", Offset = "0x4457440", VA = "0x4457440", Slot = "4")]
	public bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x4457460", Offset = "0x4457460", VA = "0x4457460", Slot = "5")]
	public int GetHashCode(string key)
	{
		return default(int);
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x44576D0", Offset = "0x44576D0", VA = "0x44576D0")]
	private static int GetHashCodeOfString(string key, int sLen, long additionalEntropy)
	{
		return default(int);
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x4457500", Offset = "0x4457500", VA = "0x4457500")]
	private static HashCodeOfStringDelegate GetHashCodeDelegate()
	{
		return null;
	}
}
