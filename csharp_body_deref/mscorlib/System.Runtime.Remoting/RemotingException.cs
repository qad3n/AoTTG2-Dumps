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
[Token(Token = "0x2000379")]
[ComVisible(true)]
public class RemotingException : SystemException
{
	[Token(Token = "0x6001CE8")]
	[Address(RVA = "0x19A1CF0", Offset = "0x19A02F0", VA = "0x1819A1CF0")]
	public RemotingException()
	{
	}

	[Token(Token = "0x6001CE9")]
	[Address(RVA = "0x19E0120", Offset = "0x19DE720", VA = "0x1819E0120")]
	public RemotingException(string message)
	{
	}

	[Token(Token = "0x6001CEA")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected RemotingException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001CEB")]
	[Address(RVA = "0x19E0110", Offset = "0x19DE710", VA = "0x1819E0110")]
	public RemotingException(string message, Exception InnerException)
	{
	}
}
