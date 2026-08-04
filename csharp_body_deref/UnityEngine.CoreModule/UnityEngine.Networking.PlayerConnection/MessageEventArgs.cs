// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.PlayerConnection.MessageEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Networking.PlayerConnection;

[Serializable]
[Token(Token = "0x2000294")]
public class MessageEventArgs
{
	[Token(Token = "0x40006D2")]
	[FieldOffset(Offset = "0x10")]
	public int playerId;

	[Token(Token = "0x40006D3")]
	[FieldOffset(Offset = "0x18")]
	public byte[] data;

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x4E15D50", Offset = "0x4E15D50", VA = "0x4E15D50")]
	public MessageEventArgs()
	{
	}
}
