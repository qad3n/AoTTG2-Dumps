using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000406")]
internal sealed class BinaryAssembly
{
	[Token(Token = "0x40010B7")]
	[FieldOffset(Offset = "0x10")]
	internal int assemId;

	[Token(Token = "0x40010B8")]
	[FieldOffset(Offset = "0x18")]
	internal string assemblyString;

	[Token(Token = "0x6002041")]
	[Address(RVA = "0x4EBD660", Offset = "0x4EBD660", VA = "0x4EBD660")]
	internal BinaryAssembly()
	{
	}

	[Token(Token = "0x6002042")]
	[Address(RVA = "0x4EBD670", Offset = "0x4EBD670", VA = "0x4EBD670")]
	internal void Set(int assemId, string assemblyString)
	{
	}

	[Token(Token = "0x6002043")]
	[Address(RVA = "0x4EBD690", Offset = "0x4EBD690", VA = "0x4EBD690", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002044")]
	[Address(RVA = "0x4EBD710", Offset = "0x4EBD710", VA = "0x4EBD710", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x6002045")]
	[Address(RVA = "0x4EBD760", Offset = "0x4EBD760", VA = "0x4EBD760")]
	public void Dump()
	{
	}
}
