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

[Token(Token = "0x200044D")]
internal sealed class SerObjectInfoInit
{
	[Token(Token = "0x4001183")]
	[FieldOffset(Offset = "0x10")]
	internal Hashtable seenBeforeTable;

	[Token(Token = "0x4001184")]
	[FieldOffset(Offset = "0x18")]
	internal int objectInfoIdCount;

	[Token(Token = "0x4001185")]
	[FieldOffset(Offset = "0x20")]
	internal System.Runtime.Serialization.Formatters.Binary.SerStack oiPool;

	[Token(Token = "0x6002178")]
	[Address(RVA = "0x1A1E6D0", Offset = "0x1A1CCD0", VA = "0x181A1E6D0")]
	public SerObjectInfoInit()
	{
	}
}
