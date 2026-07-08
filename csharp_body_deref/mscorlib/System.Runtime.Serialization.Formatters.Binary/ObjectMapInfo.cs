using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200041B")]
internal sealed class ObjectMapInfo
{
	[Token(Token = "0x400115A")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x400115B")]
	[FieldOffset(Offset = "0x14")]
	private int numMembers;

	[Token(Token = "0x400115C")]
	[FieldOffset(Offset = "0x18")]
	private string[] memberNames;

	[Token(Token = "0x400115D")]
	[FieldOffset(Offset = "0x20")]
	private Type[] memberTypes;

	[Token(Token = "0x60020E0")]
	[Address(RVA = "0x4EC4640", Offset = "0x4EC4640", VA = "0x4EC4640")]
	internal ObjectMapInfo(int objectId, int numMembers, string[] memberNames, Type[] memberTypes)
	{
	}

	[Token(Token = "0x60020E1")]
	[Address(RVA = "0x4EC44C0", Offset = "0x4EC44C0", VA = "0x4EC44C0")]
	internal bool isCompatible(int numMembers, string[] memberNames, Type[] memberTypes)
	{
		return default(bool);
	}
}
