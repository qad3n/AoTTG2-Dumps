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

[Token(Token = "0x2000385")]
public abstract class AuthenticatedStream : Stream
{
	[Token(Token = "0x4000FE6")]
	[FieldOffset(Offset = "0x28")]
	private Stream _InnerStream;

	[Token(Token = "0x4000FE7")]
	[FieldOffset(Offset = "0x30")]
	private bool _LeaveStreamOpen;

	[Token(Token = "0x17000545")]
	protected Stream InnerStream
	{
		[Token(Token = "0x60017F0")]
		[Address(RVA = "0x61CD930", Offset = "0x61CC930", VA = "0x61CD930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000546")]
	public abstract bool IsAuthenticated
	{
		[Token(Token = "0x60017F2")]
		get;
	}

	[Token(Token = "0x60017EF")]
	[Address(RVA = "0x61CD790", Offset = "0x61CC790", VA = "0x61CD790")]
	protected AuthenticatedStream(Stream innerStream, bool leaveInnerStreamOpen)
	{
	}

	[Token(Token = "0x60017F1")]
	[Address(RVA = "0x61CD940", Offset = "0x61CC940", VA = "0x61CD940", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}
}
