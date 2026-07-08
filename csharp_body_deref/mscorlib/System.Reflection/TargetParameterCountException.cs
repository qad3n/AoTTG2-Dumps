using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004FD")]
public sealed class TargetParameterCountException : ApplicationException
{
	[Token(Token = "0x6002557")]
	[Address(RVA = "0x4EF1E80", Offset = "0x4EF1E80", VA = "0x4EF1E80")]
	public TargetParameterCountException()
	{
	}

	[Token(Token = "0x6002558")]
	[Address(RVA = "0x4EF1EC0", Offset = "0x4EF1EC0", VA = "0x4EF1EC0")]
	public TargetParameterCountException(string message)
	{
	}

	[Token(Token = "0x6002559")]
	[Address(RVA = "0x4EF1EE0", Offset = "0x4EF1EE0", VA = "0x4EF1EE0")]
	internal TargetParameterCountException(SerializationInfo info, StreamingContext context)
	{
	}
}
