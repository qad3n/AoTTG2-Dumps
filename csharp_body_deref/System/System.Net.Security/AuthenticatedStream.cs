using System.IO;
using Il2CppDummyDll;

namespace System.Net.Security;

[Token(Token = "0x2000231")]
public abstract class AuthenticatedStream : Stream
{
	[Token(Token = "0x4000C7B")]
	[FieldOffset(Offset = "0x28")]
	private Stream _InnerStream;

	[Token(Token = "0x4000C7C")]
	[FieldOffset(Offset = "0x30")]
	private bool _LeaveStreamOpen;

	[Token(Token = "0x1700031B")]
	protected Stream InnerStream
	{
		[Token(Token = "0x6000DCA")]
		[Address(RVA = "0x46A5330", Offset = "0x46A5330", VA = "0x46A5330")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031C")]
	public abstract bool IsAuthenticated
	{
		[Token(Token = "0x6000DCC")]
		get;
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x46A5190", Offset = "0x46A5190", VA = "0x46A5190")]
	protected AuthenticatedStream(Stream innerStream, bool leaveInnerStreamOpen)
	{
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x46A5340", Offset = "0x46A5340", VA = "0x46A5340", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}
}
