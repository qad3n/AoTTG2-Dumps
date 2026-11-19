// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.PhotonCodes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200001E")]
internal static class PhotonCodes
{
	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x0")]
	internal static byte ClientKey;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x1")]
	internal static byte ModeKey;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x2")]
	internal static byte ServerKey;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x3")]
	internal static byte InitEncryption;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x4")]
	internal static byte Ping;

	[Token(Token = "0x40000D2")]
	public const byte Ok = 0;
}
