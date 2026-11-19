// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LightType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x20000F6")]
public enum LightType
{
	[Token(Token = "0x4000284")]
	Spot = 0,
	[Token(Token = "0x4000285")]
	Directional = 1,
	[Token(Token = "0x4000286")]
	Point = 2,
	[Token(Token = "0x4000287")]
	[Obsolete("Enum member LightType.Area has been deprecated. Use LightType.Rectangle instead (UnityUpgradable) -> Rectangle", true)]
	Area = 3,
	[Token(Token = "0x4000288")]
	Rectangle = Area,
	[Token(Token = "0x4000289")]
	Disc = 4,
	[Token(Token = "0x400028A")]
	Pyramid = 5,
	[Token(Token = "0x400028B")]
	Box = 6,
	[Token(Token = "0x400028C")]
	Tube = 7
}
