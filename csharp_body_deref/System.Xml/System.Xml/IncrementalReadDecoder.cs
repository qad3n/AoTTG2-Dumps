// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.IncrementalReadDecoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000031")]
internal abstract class IncrementalReadDecoder
{
	[Token(Token = "0x17000043")]
	internal abstract bool IsFull
	{
		[Token(Token = "0x600017A")]
		get;
	}

	[Token(Token = "0x600017B")]
	internal abstract int Decode(char[] chars, int startPos, int len);

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x4793B90", Offset = "0x4793B90", VA = "0x4793B90")]
	protected IncrementalReadDecoder()
	{
	}
}
