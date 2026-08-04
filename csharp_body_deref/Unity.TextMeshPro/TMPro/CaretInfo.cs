// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.CaretInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x20000A2")]
public struct CaretInfo
{
	[Token(Token = "0x40005F3")]
	[FieldOffset(Offset = "0x0")]
	public int index;

	[Token(Token = "0x40005F4")]
	[FieldOffset(Offset = "0x4")]
	public CaretPosition position;

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x4C95760", Offset = "0x4C95760", VA = "0x4C95760")]
	public CaretInfo(int index, CaretPosition position)
	{
	}
}
