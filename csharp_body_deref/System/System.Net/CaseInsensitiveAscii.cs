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

[Token(Token = "0x20002DB")]
internal class CaseInsensitiveAscii : IEqualityComparer, IComparer
{
	[Token(Token = "0x4000AF2")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly CaseInsensitiveAscii StaticInstance;

	[Token(Token = "0x4000AF3")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly byte[] AsciiToLower;

	[Token(Token = "0x60013EE")]
	[Address(RVA = "0x27C0740", Offset = "0x27BED40", VA = "0x1827C0740", Slot = "5")]
	public int GetHashCode(object myObject)
	{
		return default(int);
	}

	[Token(Token = "0x60013EF")]
	[Address(RVA = "0x27C0350", Offset = "0x27BE950", VA = "0x1827C0350", Slot = "6")]
	public int Compare(object firstObject, object secondObject)
	{
		return default(int);
	}

	[Token(Token = "0x60013F0")]
	[Address(RVA = "0x27C0640", Offset = "0x27BEC40", VA = "0x1827C0640")]
	private int FastGetHashCode(string myString)
	{
		return default(int);
	}

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x27C04C0", Offset = "0x27BEAC0", VA = "0x1827C04C0", Slot = "4")]
	public new bool Equals(object firstObject, object secondObject)
	{
		return default(bool);
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CaseInsensitiveAscii()
	{
	}
}
