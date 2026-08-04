// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.DisconnectMessage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200002F")]
public class DisconnectMessage
{
	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x10")]
	public short Code;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x18")]
	public string DebugMessage;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<byte, object> Parameters;

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x3E79340", Offset = "0x3E79340", VA = "0x3E79340")]
	public DisconnectMessage()
	{
	}
}
