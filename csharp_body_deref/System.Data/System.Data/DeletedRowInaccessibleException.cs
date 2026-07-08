using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x200001B")]
public class DeletedRowInaccessibleException : DataException
{
	[Token(Token = "0x6000150")]
	[Address(RVA = "0x420A120", Offset = "0x420A120", VA = "0x420A120")]
	protected DeletedRowInaccessibleException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x420A130", Offset = "0x420A130", VA = "0x420A130")]
	public DeletedRowInaccessibleException()
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x420A170", Offset = "0x420A170", VA = "0x420A170")]
	public DeletedRowInaccessibleException(string s)
	{
	}
}
