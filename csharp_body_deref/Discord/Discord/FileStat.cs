// ==================== AoTTG2 cross-reference ====================
// Type: Discord.FileStat
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000046")]
public struct FileStat
{
	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x0")]
	public string Filename;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x8")]
	public ulong Size;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x10")]
	public ulong LastModified;
}
