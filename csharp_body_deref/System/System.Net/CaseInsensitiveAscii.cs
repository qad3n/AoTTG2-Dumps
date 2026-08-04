// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.CaseInsensitiveAscii
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4962F00", Offset = "0x4962F00", VA = "0x4962F00", Slot = "5")]
	public int GetHashCode(object myObject)
	{
		return default(int);
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x4963000", Offset = "0x4963000", VA = "0x4963000", Slot = "6")]
	public int Compare(object firstObject, object secondObject)
	{
		return default(int);
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x4963170", Offset = "0x4963170", VA = "0x4963170")]
	private int FastGetHashCode(string myString)
	{
		return default(int);
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x4963250", Offset = "0x4963250", VA = "0x4963250", Slot = "4")]
	public new bool Equals(object firstObject, object secondObject)
	{
		return default(bool);
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x49633B0", Offset = "0x49633B0", VA = "0x49633B0")]
	public CaseInsensitiveAscii()
	{
	}
}
