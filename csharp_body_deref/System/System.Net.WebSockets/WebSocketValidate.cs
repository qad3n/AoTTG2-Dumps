// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocketValidate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x200021C")]
internal static class WebSocketValidate
{
	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x49BAA60", Offset = "0x49BAA60", VA = "0x49BAA60")]
	internal static void ThrowIfInvalidState(WebSocketState currentState, bool isDisposed, WebSocketState[] validStates)
	{
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x49C31D0", Offset = "0x49C31D0", VA = "0x49C31D0")]
	internal static void ValidateSubprotocol(string subProtocol)
	{
	}

	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x49BB1A0", Offset = "0x49BB1A0", VA = "0x49BB1A0")]
	internal static void ValidateCloseStatus(WebSocketCloseStatus closeStatus, string statusDescription)
	{
	}

	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x49BA520", Offset = "0x49BA520", VA = "0x49BA520")]
	internal static void ValidateArraySegment(ArraySegment<byte> arraySegment, string parameterName)
	{
	}
}
