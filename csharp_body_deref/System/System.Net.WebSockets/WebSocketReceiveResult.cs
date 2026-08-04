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

[Token(Token = "0x200022E")]
public class WebSocketReceiveResult
{
	[Token(Token = "0x4000C6B")]
	[FieldOffset(Offset = "0x1C")]
	[CompilerGenerated]
	private readonly WebSocketCloseStatus? _003CCloseStatus_003Ek__BackingField;

	[Token(Token = "0x4000C6C")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private readonly string _003CCloseStatusDescription_003Ek__BackingField;

	[Token(Token = "0x17000313")]
	public int Count
	{
		[Token(Token = "0x6000DBD")]
		[Address(RVA = "0x49CA0D0", Offset = "0x49CA0D0", VA = "0x49CA0D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000314")]
	public bool EndOfMessage
	{
		[Token(Token = "0x6000DBE")]
		[Address(RVA = "0x49CA0E0", Offset = "0x49CA0E0", VA = "0x49CA0E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000315")]
	public WebSocketMessageType MessageType
	{
		[Token(Token = "0x6000DBF")]
		[Address(RVA = "0x49CA0F0", Offset = "0x49CA0F0", VA = "0x49CA0F0")]
		[CompilerGenerated]
		get
		{
			return default(WebSocketMessageType);
		}
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x49BE060", Offset = "0x49BE060", VA = "0x49BE060")]
	public WebSocketReceiveResult(int count, WebSocketMessageType messageType, bool endOfMessage)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x49BE0F0", Offset = "0x49BE0F0", VA = "0x49BE0F0")]
	public WebSocketReceiveResult(int count, WebSocketMessageType messageType, bool endOfMessage, WebSocketCloseStatus? closeStatus, string closeStatusDescription)
	{
	}
}
