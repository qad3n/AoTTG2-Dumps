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

[Token(Token = "0x200029C")]
internal class CaseInsensitiveAscii : IEqualityComparer, IComparer
{
	[Token(Token = "0x4000A23")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly CaseInsensitiveAscii StaticInstance;

	[Token(Token = "0x4000A24")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly byte[] AsciiToLower;

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x62AA9D0", Offset = "0x62A99D0", VA = "0x62AA9D0", Slot = "5")]
	public int GetHashCode(object myObject)
	{
		return default(int);
	}

	[Token(Token = "0x6001231")]
	[Address(RVA = "0x62AAAC0", Offset = "0x62A9AC0", VA = "0x62AAAC0", Slot = "6")]
	public int Compare(object firstObject, object secondObject)
	{
		return default(int);
	}

	[Token(Token = "0x6001232")]
	[Address(RVA = "0x62AAC50", Offset = "0x62A9C50", VA = "0x62AAC50")]
	private int FastGetHashCode(string myString)
	{
		return default(int);
	}

	[Token(Token = "0x6001233")]
	[Address(RVA = "0x62AAD30", Offset = "0x62A9D30", VA = "0x62AAD30", Slot = "4")]
	public new bool Equals(object firstObject, object secondObject)
	{
		return default(bool);
	}

	[Token(Token = "0x6001234")]
	[Address(RVA = "0x62AAEC0", Offset = "0x62A9EC0", VA = "0x62AAEC0")]
	public CaseInsensitiveAscii()
	{
	}
}
