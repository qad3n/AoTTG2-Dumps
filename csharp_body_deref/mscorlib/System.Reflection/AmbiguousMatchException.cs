using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004C0")]
public sealed class AmbiguousMatchException : SystemException
{
	[Token(Token = "0x60023CD")]
	[Address(RVA = "0x4EEA8E0", Offset = "0x4EEA8E0", VA = "0x4EEA8E0")]
	public AmbiguousMatchException()
	{
	}

	[Token(Token = "0x60023CE")]
	[Address(RVA = "0x4EEA920", Offset = "0x4EEA920", VA = "0x4EEA920")]
	public AmbiguousMatchException(string message)
	{
	}

	[Token(Token = "0x60023CF")]
	[Address(RVA = "0x4EEA940", Offset = "0x4EEA940", VA = "0x4EEA940")]
	internal AmbiguousMatchException(SerializationInfo info, StreamingContext context)
	{
	}
}
