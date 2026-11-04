// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocketValidate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x20003BB")]
internal static class WebSocketValidate
{
	[Token(Token = "0x600195B")]
	[Address(RVA = "0x2828A00", Offset = "0x2827000", VA = "0x182828A00")]
	internal static void ThrowIfInvalidState(WebSocketState currentState, bool isDisposed, WebSocketState[] validStates)
	{
	}

	[Token(Token = "0x600195C")]
	[Address(RVA = "0x2828FD0", Offset = "0x28275D0", VA = "0x182828FD0")]
	internal static void ValidateSubprotocol(string subProtocol)
	{
	}

	[Token(Token = "0x600195D")]
	[Address(RVA = "0x2828D90", Offset = "0x2827390", VA = "0x182828D90")]
	internal static void ValidateCloseStatus(WebSocketCloseStatus closeStatus, string statusDescription)
	{
	}

	[Token(Token = "0x600195E")]
	[Address(RVA = "0x2828B70", Offset = "0x2827170", VA = "0x182828B70")]
	internal static void ValidateArraySegment(ArraySegment<byte> arraySegment, string parameterName)
	{
	}
}
