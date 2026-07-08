using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Security;

[Serializable]
[Token(Token = "0x20002A8")]
[ComVisible(true)]
public class SecurityException : SystemException
{
	[Token(Token = "0x4000C26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string permissionState;

	[Token(Token = "0x60017B3")]
	[Address(RVA = "0x4E3B0A0", Offset = "0x4E3B0A0", VA = "0x4E3B0A0")]
	public SecurityException()
	{
	}

	[Token(Token = "0x60017B4")]
	[Address(RVA = "0x4E3B0F0", Offset = "0x4E3B0F0", VA = "0x4E3B0F0")]
	public SecurityException(string message)
	{
	}

	[Token(Token = "0x60017B5")]
	[Address(RVA = "0x4E3B110", Offset = "0x4E3B110", VA = "0x4E3B110")]
	protected SecurityException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017B6")]
	[Address(RVA = "0x4E3B230", Offset = "0x4E3B230", VA = "0x4E3B230")]
	public SecurityException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60017B7")]
	[Address(RVA = "0x4E3B250", Offset = "0x4E3B250", VA = "0x4E3B250", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017B8")]
	[Address(RVA = "0x4E3B340", Offset = "0x4E3B340", VA = "0x4E3B340", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
