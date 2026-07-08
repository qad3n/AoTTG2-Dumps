using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x2000206")]
[ComVisible(true)]
public class ThreadInterruptedException : SystemException
{
	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x5051400", Offset = "0x5051400", VA = "0x5051400")]
	public ThreadInterruptedException()
	{
	}

	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x5051470", Offset = "0x5051470", VA = "0x5051470")]
	protected ThreadInterruptedException(SerializationInfo info, StreamingContext context)
	{
	}
}
