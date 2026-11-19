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
[Token(Token = "0x2000352")]
[ComVisible(true)]
public class RemotingException : SystemException
{
	[Token(Token = "0x6001CBE")]
	[Address(RVA = "0x53732B0", Offset = "0x53722B0", VA = "0x53732B0")]
	public RemotingException()
	{
	}

	[Token(Token = "0x6001CBF")]
	[Address(RVA = "0x5368E70", Offset = "0x5367E70", VA = "0x5368E70")]
	public RemotingException(string message)
	{
	}

	[Token(Token = "0x6001CC0")]
	[Address(RVA = "0x53732C0", Offset = "0x53722C0", VA = "0x53732C0")]
	protected RemotingException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001CC1")]
	[Address(RVA = "0x5370170", Offset = "0x536F170", VA = "0x5370170")]
	public RemotingException(string message, Exception InnerException)
	{
	}
}
