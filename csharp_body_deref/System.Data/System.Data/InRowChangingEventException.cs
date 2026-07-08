using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x200001D")]
public class InRowChangingEventException : DataException
{
	[Token(Token = "0x6000156")]
	[Address(RVA = "0x420A200", Offset = "0x420A200", VA = "0x420A200")]
	protected InRowChangingEventException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x420A210", Offset = "0x420A210", VA = "0x420A210")]
	public InRowChangingEventException()
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x420A250", Offset = "0x420A250", VA = "0x420A250")]
	public InRowChangingEventException(string s)
	{
	}
}
