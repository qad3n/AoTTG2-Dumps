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

[Token(Token = "0x20003C6")]
public class WebSocketReceiveResult
{
	[Token(Token = "0x40010BE")]
	[FieldOffset(Offset = "0x1C")]
	[CompilerGenerated]
	private readonly WebSocketCloseStatus? _003CCloseStatus_003Ek__BackingField;

	[Token(Token = "0x40010BF")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private readonly string _003CCloseStatusDescription_003Ek__BackingField;

	[Token(Token = "0x1700056A")]
	public int Count
	{
		[Token(Token = "0x600199C")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700056B")]
	public bool EndOfMessage
	{
		[Token(Token = "0x600199D")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700056C")]
	public WebSocketMessageType MessageType
	{
		[Token(Token = "0x600199E")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(WebSocketMessageType);
		}
	}

	[Token(Token = "0x600199A")]
	[Address(RVA = "0x28289E0", Offset = "0x2826FE0", VA = "0x1828289E0")]
	public WebSocketReceiveResult(int count, WebSocketMessageType messageType, bool endOfMessage)
	{
	}

	[Token(Token = "0x600199B")]
	[Address(RVA = "0x2828940", Offset = "0x2826F40", VA = "0x182828940")]
	public WebSocketReceiveResult(int count, WebSocketMessageType messageType, bool endOfMessage, WebSocketCloseStatus? closeStatus, string closeStatusDescription)
	{
	}
}
