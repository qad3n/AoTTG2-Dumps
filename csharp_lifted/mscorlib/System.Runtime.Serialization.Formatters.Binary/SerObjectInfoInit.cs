// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000426")]
internal sealed class SerObjectInfoInit
{
	[Token(Token = "0x40010E3")]
	[FieldOffset(Offset = "0x10")]
	internal Hashtable seenBeforeTable;

	[Token(Token = "0x40010E4")]
	[FieldOffset(Offset = "0x18")]
	internal int objectInfoIdCount;

	[Token(Token = "0x40010E5")]
	[FieldOffset(Offset = "0x20")]
	internal System.Runtime.Serialization.Formatters.Binary.SerStack oiPool;

	[Token(Token = "0x600214E")]
	[Address(RVA = "0x53B4FD0", Offset = "0x53B3FD0", VA = "0x53B4FD0")]
	public SerObjectInfoInit()
	{
	}
}
