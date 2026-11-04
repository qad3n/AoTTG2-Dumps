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
[Token(Token = "0x20002F2")]
public class MessageEventArgs
{
	[Token(Token = "0x400077F")]
	[FieldOffset(Offset = "0x10")]
	public int playerId;

	[Token(Token = "0x4000780")]
	[FieldOffset(Offset = "0x18")]
	public byte[] data;

	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public MessageEventArgs()
	{
	}
}
