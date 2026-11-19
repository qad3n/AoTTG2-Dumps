// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ScreenOrientation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000109")]
public enum ScreenOrientation
{
	[Token(Token = "0x40002E2")]
	Portrait = 1,
	[Token(Token = "0x40002E3")]
	PortraitUpsideDown = 2,
	[Token(Token = "0x40002E4")]
	LandscapeLeft = 3,
	[Token(Token = "0x40002E5")]
	LandscapeRight = 4,
	[Token(Token = "0x40002E6")]
	AutoRotation = 5,
	[Token(Token = "0x40002E7")]
	[Obsolete("Enum member Unknown has been deprecated.", false)]
	Unknown = 0,
	[Token(Token = "0x40002E8")]
	[Obsolete("Use LandscapeLeft instead (UnityUpgradable) -> LandscapeLeft", true)]
	Landscape = LandscapeLeft
}
