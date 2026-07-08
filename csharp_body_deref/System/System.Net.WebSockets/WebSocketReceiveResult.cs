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
		[Address(RVA = "0x46A4FD0", Offset = "0x46A4FD0", VA = "0x46A4FD0")]
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
		[Address(RVA = "0x46A4FE0", Offset = "0x46A4FE0", VA = "0x46A4FE0")]
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
		[Address(RVA = "0x46A4FF0", Offset = "0x46A4FF0", VA = "0x46A4FF0")]
		[CompilerGenerated]
		get
		{
			return default(WebSocketMessageType);
		}
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x4698F60", Offset = "0x4698F60", VA = "0x4698F60")]
	public WebSocketReceiveResult(int count, WebSocketMessageType messageType, bool endOfMessage)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x4698FF0", Offset = "0x4698FF0", VA = "0x4698FF0")]
	public WebSocketReceiveResult(int count, WebSocketMessageType messageType, bool endOfMessage, WebSocketCloseStatus? closeStatus, string closeStatusDescription)
	{
	}
}
