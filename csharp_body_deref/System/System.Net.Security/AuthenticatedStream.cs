// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Security.AuthenticatedStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x49CA430", Offset = "0x49CA430", VA = "0x49CA430")]
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
	[Address(RVA = "0x49CA290", Offset = "0x49CA290", VA = "0x49CA290")]
	protected AuthenticatedStream(Stream innerStream, bool leaveInnerStreamOpen)
	{
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x49CA440", Offset = "0x49CA440", VA = "0x49CA440", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}
}
