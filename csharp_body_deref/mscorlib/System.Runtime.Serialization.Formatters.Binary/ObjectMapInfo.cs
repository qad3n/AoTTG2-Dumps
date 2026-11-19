// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.ObjectMapInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000423")]
internal sealed class ObjectMapInfo
{
	[Token(Token = "0x40010BC")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x40010BD")]
	[FieldOffset(Offset = "0x14")]
	private int numMembers;

	[Token(Token = "0x40010BE")]
	[FieldOffset(Offset = "0x18")]
	private string[] memberNames;

	[Token(Token = "0x40010BF")]
	[FieldOffset(Offset = "0x20")]
	private Type[] memberTypes;

	[Token(Token = "0x6002125")]
	[Address(RVA = "0x53B13D0", Offset = "0x53B03D0", VA = "0x53B13D0")]
	internal ObjectMapInfo(int objectId, int numMembers, string[] memberNames, Type[] memberTypes)
	{
	}

	[Token(Token = "0x6002126")]
	[Address(RVA = "0x53B1250", Offset = "0x53B0250", VA = "0x53B1250")]
	internal bool isCompatible(int numMembers, string[] memberNames, Type[] memberTypes)
	{
		return default(bool);
	}
}
