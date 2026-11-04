// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.ObjectMapInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200044A")]
internal sealed class ObjectMapInfo
{
	[Token(Token = "0x400115C")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x400115D")]
	[FieldOffset(Offset = "0x14")]
	private int numMembers;

	[Token(Token = "0x400115E")]
	[FieldOffset(Offset = "0x18")]
	private string[] memberNames;

	[Token(Token = "0x400115F")]
	[FieldOffset(Offset = "0x20")]
	private Type[] memberTypes;

	[Token(Token = "0x600214F")]
	[Address(RVA = "0x1A1AB90", Offset = "0x1A19190", VA = "0x181A1AB90")]
	internal ObjectMapInfo(int objectId, int numMembers, string[] memberNames, Type[] memberTypes)
	{
	}

	[Token(Token = "0x6002150")]
	[Address(RVA = "0x1A1ABE0", Offset = "0x1A191E0", VA = "0x181A1ABE0")]
	internal bool isCompatible(int numMembers, string[] memberNames, Type[] memberTypes)
	{
		return default(bool);
	}
}
