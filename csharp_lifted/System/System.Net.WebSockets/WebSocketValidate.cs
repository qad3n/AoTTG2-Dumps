// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocketValidate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x2000377")]
internal static class WebSocketValidate
{
	[Token(Token = "0x60017A2")]
	[Address(RVA = "0x61BEE30", Offset = "0x61BDE30", VA = "0x61BEE30")]
	internal static void ThrowIfInvalidState(WebSocketState currentState, bool isDisposed, WebSocketState[] validStates)
	{
	}

	[Token(Token = "0x60017A3")]
	[Address(RVA = "0x61CBA30", Offset = "0x61CAA30", VA = "0x61CBA30")]
	internal static void ValidateSubprotocol(string subProtocol)
	{
	}

	[Token(Token = "0x60017A4")]
	[Address(RVA = "0x61BF5B0", Offset = "0x61BE5B0", VA = "0x61BF5B0")]
	internal static void ValidateCloseStatus(WebSocketCloseStatus closeStatus, string statusDescription)
	{
	}

	[Token(Token = "0x60017A5")]
	[Address(RVA = "0x61BE940", Offset = "0x61BD940", VA = "0x61BE940")]
	internal static void ValidateArraySegment(ArraySegment<byte> arraySegment, string parameterName)
	{
	}
}
