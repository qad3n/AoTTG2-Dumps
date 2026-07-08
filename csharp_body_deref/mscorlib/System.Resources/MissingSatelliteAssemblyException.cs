using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Resources;

[Serializable]
[Token(Token = "0x20004AD")]
public class MissingSatelliteAssemblyException : SystemException
{
	[Token(Token = "0x4001346")]
	[FieldOffset(Offset = "0x90")]
	private string _cultureName;

	[Token(Token = "0x6002338")]
	[Address(RVA = "0x4EDE7C0", Offset = "0x4EDE7C0", VA = "0x4EDE7C0")]
	public MissingSatelliteAssemblyException()
	{
	}

	[Token(Token = "0x6002339")]
	[Address(RVA = "0x4EDE800", Offset = "0x4EDE800", VA = "0x4EDE800")]
	public MissingSatelliteAssemblyException(string message, string cultureName)
	{
	}

	[Token(Token = "0x600233A")]
	[Address(RVA = "0x4EDE840", Offset = "0x4EDE840", VA = "0x4EDE840")]
	protected MissingSatelliteAssemblyException(SerializationInfo info, StreamingContext context)
	{
	}
}
