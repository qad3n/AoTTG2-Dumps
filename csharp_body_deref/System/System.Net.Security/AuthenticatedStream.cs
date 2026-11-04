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

[Token(Token = "0x20003C9")]
public abstract class AuthenticatedStream : Stream
{
	[Token(Token = "0x40010CE")]
	[FieldOffset(Offset = "0x28")]
	private Stream _InnerStream;

	[Token(Token = "0x40010CF")]
	[FieldOffset(Offset = "0x30")]
	private bool _LeaveStreamOpen;

	[Token(Token = "0x17000573")]
	protected Stream InnerStream
	{
		[Token(Token = "0x60019AA")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000574")]
	public abstract bool IsAuthenticated
	{
		[Token(Token = "0x60019AC")]
		get;
	}

	[Token(Token = "0x60019A9")]
	[Address(RVA = "0x280FAE0", Offset = "0x280E0E0", VA = "0x18280FAE0")]
	protected AuthenticatedStream(Stream innerStream, bool leaveInnerStreamOpen)
	{
	}

	[Token(Token = "0x60019AB")]
	[Address(RVA = "0x280FA10", Offset = "0x280E010", VA = "0x18280FA10", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}
}
