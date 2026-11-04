// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ResponseDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002AC")]
internal class ResponseDescription
{
	[Token(Token = "0x40009B9")]
	[FieldOffset(Offset = "0x10")]
	internal bool Multiline;

	[Token(Token = "0x40009BA")]
	[FieldOffset(Offset = "0x14")]
	internal int Status;

	[Token(Token = "0x40009BB")]
	[FieldOffset(Offset = "0x18")]
	internal string StatusDescription;

	[Token(Token = "0x40009BC")]
	[FieldOffset(Offset = "0x20")]
	internal StringBuilder StatusBuffer;

	[Token(Token = "0x40009BD")]
	[FieldOffset(Offset = "0x28")]
	internal string StatusCodeString;

	[Token(Token = "0x170003C3")]
	internal bool PositiveIntermediate
	{
		[Token(Token = "0x60012C9")]
		[Address(RVA = "0x2905030", Offset = "0x2903630", VA = "0x182905030")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C4")]
	internal bool PositiveCompletion
	{
		[Token(Token = "0x60012CA")]
		[Address(RVA = "0x2905010", Offset = "0x2903610", VA = "0x182905010")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C5")]
	internal bool TransientFailure
	{
		[Token(Token = "0x60012CB")]
		[Address(RVA = "0x2905050", Offset = "0x2903650", VA = "0x182905050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C6")]
	internal bool PermanentFailure
	{
		[Token(Token = "0x60012CC")]
		[Address(RVA = "0x2904FF0", Offset = "0x29035F0", VA = "0x182904FF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C7")]
	internal bool InvalidStatusCode
	{
		[Token(Token = "0x60012CD")]
		[Address(RVA = "0x2904FD0", Offset = "0x29035D0", VA = "0x182904FD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x2904F60", Offset = "0x2903560", VA = "0x182904F60")]
	public ResponseDescription()
	{
	}
}
