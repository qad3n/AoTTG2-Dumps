// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.RemotingException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Serializable]
[Token(Token = "0x200034A")]
[ComVisible(true)]
public class RemotingException : SystemException
{
	[Token(Token = "0x6001C79")]
	[Address(RVA = "0x3B6A580", Offset = "0x3B6A580", VA = "0x3B6A580")]
	public RemotingException()
	{
	}

	[Token(Token = "0x6001C7A")]
	[Address(RVA = "0x3B5F680", Offset = "0x3B5F680", VA = "0x3B5F680")]
	public RemotingException(string message)
	{
	}

	[Token(Token = "0x6001C7B")]
	[Address(RVA = "0x3B6A590", Offset = "0x3B6A590", VA = "0x3B6A590")]
	protected RemotingException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C7C")]
	[Address(RVA = "0x3B67450", Offset = "0x3B67450", VA = "0x3B67450")]
	public RemotingException(string message, Exception InnerException)
	{
	}
}
