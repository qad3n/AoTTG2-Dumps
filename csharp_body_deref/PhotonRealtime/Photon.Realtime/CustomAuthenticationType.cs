// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.CustomAuthenticationType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChatPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200003A")]
public enum CustomAuthenticationType : byte
{
	[Token(Token = "0x40001C6")]
	Custom = 0,
	[Token(Token = "0x40001C7")]
	Steam = 1,
	[Token(Token = "0x40001C8")]
	Facebook = 2,
	[Token(Token = "0x40001C9")]
	Oculus = 3,
	[Token(Token = "0x40001CA")]
	PlayStation4 = 4,
	[Token(Token = "0x40001CB")]
	[Obsolete("Use PlayStation4 or PlayStation5 as needed")]
	PlayStation = 4,
	[Token(Token = "0x40001CC")]
	Xbox = 5,
	[Token(Token = "0x40001CD")]
	Viveport = 10,
	[Token(Token = "0x40001CE")]
	NintendoSwitch = 11,
	[Token(Token = "0x40001CF")]
	PlayStation5 = 12,
	[Token(Token = "0x40001D0")]
	[Obsolete("Use PlayStation4 or PlayStation5 as needed")]
	Playstation5 = 12,
	[Token(Token = "0x40001D1")]
	Epic = 13,
	[Token(Token = "0x40001D2")]
	FacebookGaming = 15,
	[Token(Token = "0x40001D3")]
	None = byte.MaxValue
}
