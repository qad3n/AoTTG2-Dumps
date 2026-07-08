using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x2000021")]
public class RowNotInTableException : DataException
{
	[Token(Token = "0x6000162")]
	[Address(RVA = "0x420A3C0", Offset = "0x420A3C0", VA = "0x420A3C0")]
	protected RowNotInTableException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x420A3D0", Offset = "0x420A3D0", VA = "0x420A3D0")]
	public RowNotInTableException()
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x420A410", Offset = "0x420A410", VA = "0x420A410")]
	public RowNotInTableException(string s)
	{
	}
}
