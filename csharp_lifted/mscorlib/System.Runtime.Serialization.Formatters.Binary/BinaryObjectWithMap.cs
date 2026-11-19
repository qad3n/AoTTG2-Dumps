// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000417")]
internal sealed class BinaryObjectWithMap
{
	[Token(Token = "0x4001035")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum;

	[Token(Token = "0x4001036")]
	[FieldOffset(Offset = "0x14")]
	internal int objectId;

	[Token(Token = "0x4001037")]
	[FieldOffset(Offset = "0x18")]
	internal string name;

	[Token(Token = "0x4001038")]
	[FieldOffset(Offset = "0x20")]
	internal int numMembers;

	[Token(Token = "0x4001039")]
	[FieldOffset(Offset = "0x28")]
	internal string[] memberNames;

	[Token(Token = "0x400103A")]
	[FieldOffset(Offset = "0x30")]
	internal int assemId;

	[Token(Token = "0x60020AA")]
	[Address(RVA = "0x53AADE0", Offset = "0x53A9DE0", VA = "0x53AADE0")]
	internal BinaryObjectWithMap()
	{
	}

	[Token(Token = "0x60020AB")]
	[Address(RVA = "0x53AADF0", Offset = "0x53A9DF0", VA = "0x53AADF0")]
	internal BinaryObjectWithMap(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60020AC")]
	[Address(RVA = "0x53AAE10", Offset = "0x53A9E10", VA = "0x53AAE10")]
	internal void Set(int objectId, string name, int numMembers, string[] memberNames, int assemId)
	{
	}

	[Token(Token = "0x60020AD")]
	[Address(RVA = "0x53AAE70", Offset = "0x53A9E70", VA = "0x53AAE70", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020AE")]
	[Address(RVA = "0x53AAFA0", Offset = "0x53A9FA0", VA = "0x53AAFA0", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x60020AF")]
	[Address(RVA = "0x53AB0B0", Offset = "0x53AA0B0", VA = "0x53AB0B0")]
	public void Dump()
	{
	}
}
