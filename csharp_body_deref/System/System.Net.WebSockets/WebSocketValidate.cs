using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x200021C")]
internal static class WebSocketValidate
{
	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x4695960", Offset = "0x4695960", VA = "0x4695960")]
	internal static void ThrowIfInvalidState(WebSocketState currentState, bool isDisposed, WebSocketState[] validStates)
	{
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x469E0D0", Offset = "0x469E0D0", VA = "0x469E0D0")]
	internal static void ValidateSubprotocol(string subProtocol)
	{
	}

	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x46960A0", Offset = "0x46960A0", VA = "0x46960A0")]
	internal static void ValidateCloseStatus(WebSocketCloseStatus closeStatus, string statusDescription)
	{
	}

	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x4695420", Offset = "0x4695420", VA = "0x4695420")]
	internal static void ValidateArraySegment(ArraySegment<byte> arraySegment, string parameterName)
	{
	}
}
