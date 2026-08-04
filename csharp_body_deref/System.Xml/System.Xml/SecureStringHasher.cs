// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.SecureStringHasher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4794B80", Offset = "0x4794B80", VA = "0x4794B80")]
	public SecureStringHasher()
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x4794BA0", Offset = "0x4794BA0", VA = "0x4794BA0", Slot = "4")]
	public bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x4794BC0", Offset = "0x4794BC0", VA = "0x4794BC0", Slot = "5")]
	public int GetHashCode(string key)
	{
		return default(int);
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x4794E30", Offset = "0x4794E30", VA = "0x4794E30")]
	private static int GetHashCodeOfString(string key, int sLen, long additionalEntropy)
	{
		return default(int);
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x4794C60", Offset = "0x4794C60", VA = "0x4794C60")]
	private static HashCodeOfStringDelegate GetHashCodeDelegate()
	{
		return null;
	}
}
