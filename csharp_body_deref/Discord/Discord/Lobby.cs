// ==================== AoTTG2 cross-reference ====================
// Type: Discord.Lobby
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000043")]
public struct Lobby
{
	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x0")]
	public long Id;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x8")]
	public LobbyType Type;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x10")]
	public long OwnerId;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x18")]
	public string Secret;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x20")]
	public uint Capacity;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x24")]
	public bool Locked;
}
