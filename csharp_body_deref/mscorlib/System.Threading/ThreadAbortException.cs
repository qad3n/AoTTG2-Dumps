using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x2000205")]
[ComVisible(true)]
public sealed class ThreadAbortException : SystemException
{
	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x5051380", Offset = "0x5051380", VA = "0x5051380")]
	private ThreadAbortException()
	{
	}

	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x50513F0", Offset = "0x50513F0", VA = "0x50513F0")]
	internal ThreadAbortException(SerializationInfo info, StreamingContext context)
	{
	}
}
