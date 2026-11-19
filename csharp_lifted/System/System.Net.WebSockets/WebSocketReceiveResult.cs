// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocketReceiveResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x2000382")]
public class WebSocketReceiveResult
{
	[Token(Token = "0x4000FD6")]
	[FieldOffset(Offset = "0x1C")]
	[CompilerGenerated]
	private readonly WebSocketCloseStatus? _003CCloseStatus_003Ek__BackingField;

	[Token(Token = "0x4000FD7")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private readonly string _003CCloseStatusDescription_003Ek__BackingField;

	[Token(Token = "0x1700053D")]
	public int Count
	{
		[Token(Token = "0x60017E3")]
		[Address(RVA = "0x61CD5D0", Offset = "0x61CC5D0", VA = "0x61CD5D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700053E")]
	public bool EndOfMessage
	{
		[Token(Token = "0x60017E4")]
		[Address(RVA = "0x61CD5E0", Offset = "0x61CC5E0", VA = "0x61CD5E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700053F")]
	public WebSocketMessageType MessageType
	{
		[Token(Token = "0x60017E5")]
		[Address(RVA = "0x61CD5F0", Offset = "0x61CC5F0", VA = "0x61CD5F0")]
		[CompilerGenerated]
		get
		{
			return default(WebSocketMessageType);
		}
	}

	[Token(Token = "0x60017E1")]
	[Address(RVA = "0x61C2390", Offset = "0x61C1390", VA = "0x61C2390")]
	public WebSocketReceiveResult(int count, WebSocketMessageType messageType, bool endOfMessage)
	{
	}

	[Token(Token = "0x60017E2")]
	[Address(RVA = "0x61C2420", Offset = "0x61C1420", VA = "0x61C2420")]
	public WebSocketReceiveResult(int count, WebSocketMessageType messageType, bool endOfMessage, WebSocketCloseStatus? closeStatus, string closeStatusDescription)
	{
	}
}
