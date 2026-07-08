using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001ED")]
public class Lock
{
	[Token(Token = "0x4000984")]
	[FieldOffset(Offset = "0x10")]
	private object _lock;

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x50485E0", Offset = "0x50485E0", VA = "0x50485E0")]
	public void Acquire()
	{
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x5048610", Offset = "0x5048610", VA = "0x5048610")]
	public void Release()
	{
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x5048640", Offset = "0x5048640", VA = "0x5048640")]
	public Lock()
	{
	}
}
