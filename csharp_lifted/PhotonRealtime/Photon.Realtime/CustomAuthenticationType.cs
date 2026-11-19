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

[Token(Token = "0x2000038")]
public enum CustomAuthenticationType : byte
{
	[Token(Token = "0x40001C1")]
	Custom = 0,
	[Token(Token = "0x40001C2")]
	Steam = 1,
	[Token(Token = "0x40001C3")]
	Facebook = 2,
	[Token(Token = "0x40001C4")]
	Oculus = 3,
	[Token(Token = "0x40001C5")]
	PlayStation4 = 4,
	[Token(Token = "0x40001C6")]
	[Obsolete("Use PlayStation4 or PlayStation5 as needed")]
	PlayStation = PlayStation4,
	[Token(Token = "0x40001C7")]
	Xbox = 5,
	[Token(Token = "0x40001C8")]
	Viveport = 10,
	[Token(Token = "0x40001C9")]
	NintendoSwitch = 11,
	[Token(Token = "0x40001CA")]
	PlayStation5 = 12,
	[Token(Token = "0x40001CB")]
	[Obsolete("Use PlayStation4 or PlayStation5 as needed")]
	Playstation5 = PlayStation5,
	[Token(Token = "0x40001CC")]
	Epic = 13,
	[Token(Token = "0x40001CD")]
	FacebookGaming = 15,
	[Token(Token = "0x40001CE")]
	None = 255
}
