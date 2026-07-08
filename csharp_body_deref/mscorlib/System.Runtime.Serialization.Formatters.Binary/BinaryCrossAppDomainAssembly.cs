using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000407")]
internal sealed class BinaryCrossAppDomainAssembly
{
	[Token(Token = "0x40010B9")]
	[FieldOffset(Offset = "0x10")]
	internal int assemId;

	[Token(Token = "0x40010BA")]
	[FieldOffset(Offset = "0x14")]
	internal int assemblyIndex;

	[Token(Token = "0x6002046")]
	[Address(RVA = "0x4EBD770", Offset = "0x4EBD770", VA = "0x4EBD770")]
	internal BinaryCrossAppDomainAssembly()
	{
	}

	[Token(Token = "0x6002047")]
	[Address(RVA = "0x4EBD780", Offset = "0x4EBD780", VA = "0x4EBD780", Slot = "4")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x6002048")]
	[Address(RVA = "0x4EBD7C0", Offset = "0x4EBD7C0", VA = "0x4EBD7C0")]
	public void Dump()
	{
	}
}
