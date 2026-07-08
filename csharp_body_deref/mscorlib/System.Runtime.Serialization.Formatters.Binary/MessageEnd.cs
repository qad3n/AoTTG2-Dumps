using System.IO;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000415")]
internal sealed class MessageEnd
{
	[Token(Token = "0x6002085")]
	[Address(RVA = "0x4EBF4D0", Offset = "0x4EBF4D0", VA = "0x4EBF4D0")]
	internal MessageEnd()
	{
	}

	[Token(Token = "0x6002086")]
	[Address(RVA = "0x4EBF4E0", Offset = "0x4EBF4E0", VA = "0x4EBF4E0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002087")]
	[Address(RVA = "0x4EBF510", Offset = "0x4EBF510", VA = "0x4EBF510", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x6002088")]
	[Address(RVA = "0x4EBF520", Offset = "0x4EBF520", VA = "0x4EBF520")]
	public void Dump()
	{
	}

	[Token(Token = "0x6002089")]
	[Address(RVA = "0x4EBF530", Offset = "0x4EBF530", VA = "0x4EBF530")]
	public void Dump(Stream sout)
	{
	}
}
