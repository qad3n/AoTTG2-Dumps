using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Serializable]
[Token(Token = "0x2000437")]
public class COMException : ExternalException
{
	[Token(Token = "0x60021C2")]
	[Address(RVA = "0x4ED7710", Offset = "0x4ED7710", VA = "0x4ED7710")]
	public COMException()
	{
	}

	[Token(Token = "0x60021C3")]
	[Address(RVA = "0x4ED7750", Offset = "0x4ED7750", VA = "0x4ED7750")]
	protected COMException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60021C4")]
	[Address(RVA = "0x4ED7760", Offset = "0x4ED7760", VA = "0x4ED7760", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
