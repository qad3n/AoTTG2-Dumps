// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.InitV3Flags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000021")]
[Flags]
internal enum InitV3Flags : short
{
	[Token(Token = "0x40000E6")]
	NoFlags = 0,
	[Token(Token = "0x40000E7")]
	EncryptionFlag = 1,
	[Token(Token = "0x40000E8")]
	IPv6Flag = 2,
	[Token(Token = "0x40000E9")]
	ReleaseSdkFlag = 4
}
