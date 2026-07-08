using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000559")]
public class DriveNotFoundException : IOException
{
	[Token(Token = "0x600291B")]
	[Address(RVA = "0x4F17130", Offset = "0x4F17130", VA = "0x4F17130")]
	public DriveNotFoundException()
	{
	}

	[Token(Token = "0x600291C")]
	[Address(RVA = "0x4F17170", Offset = "0x4F17170", VA = "0x4F17170")]
	public DriveNotFoundException(string message)
	{
	}

	[Token(Token = "0x600291D")]
	[Address(RVA = "0x4F17190", Offset = "0x4F17190", VA = "0x4F17190")]
	protected DriveNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
