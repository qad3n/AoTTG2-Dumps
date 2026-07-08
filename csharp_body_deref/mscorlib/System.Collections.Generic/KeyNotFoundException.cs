using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000652")]
public class KeyNotFoundException : SystemException
{
	[Token(Token = "0x6003211")]
	[Address(RVA = "0x4FA8F90", Offset = "0x4FA8F90", VA = "0x4FA8F90")]
	public KeyNotFoundException()
	{
	}

	[Token(Token = "0x6003212")]
	[Address(RVA = "0x4FA8FD0", Offset = "0x4FA8FD0", VA = "0x4FA8FD0")]
	public KeyNotFoundException(string message)
	{
	}

	[Token(Token = "0x6003213")]
	[Address(RVA = "0x4FA8FF0", Offset = "0x4FA8FF0", VA = "0x4FA8FF0")]
	protected KeyNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
