// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ParticleSystemShapeType
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000016")]
public enum ParticleSystemShapeType
{
	[Token(Token = "0x4000056")]
	Sphere,
	[Token(Token = "0x4000057")]
	[Obsolete("SphereShell is deprecated and does nothing. Please use ShapeModule.radiusThickness instead, to control edge emission.", false)]
	SphereShell,
	[Token(Token = "0x4000058")]
	Hemisphere,
	[Token(Token = "0x4000059")]
	[Obsolete("HemisphereShell is deprecated and does nothing. Please use ShapeModule.radiusThickness instead, to control edge emission.", false)]
	HemisphereShell,
	[Token(Token = "0x400005A")]
	Cone,
	[Token(Token = "0x400005B")]
	Box,
	[Token(Token = "0x400005C")]
	Mesh,
	[Token(Token = "0x400005D")]
	[Obsolete("ConeShell is deprecated and does nothing. Please use ShapeModule.radiusThickness instead, to control edge emission.", false)]
	ConeShell,
	[Token(Token = "0x400005E")]
	ConeVolume,
	[Token(Token = "0x400005F")]
	[Obsolete("ConeVolumeShell is deprecated and does nothing. Please use ShapeModule.radiusThickness instead, to control edge emission.", false)]
	ConeVolumeShell,
	[Token(Token = "0x4000060")]
	Circle,
	[Token(Token = "0x4000061")]
	[Obsolete("CircleEdge is deprecated and does nothing. Please use ShapeModule.radiusThickness instead, to control edge emission.", false)]
	CircleEdge,
	[Token(Token = "0x4000062")]
	SingleSidedEdge,
	[Token(Token = "0x4000063")]
	MeshRenderer,
	[Token(Token = "0x4000064")]
	SkinnedMeshRenderer,
	[Token(Token = "0x4000065")]
	BoxShell,
	[Token(Token = "0x4000066")]
	BoxEdge,
	[Token(Token = "0x4000067")]
	Donut,
	[Token(Token = "0x4000068")]
	Rectangle,
	[Token(Token = "0x4000069")]
	Sprite,
	[Token(Token = "0x400006A")]
	SpriteRenderer
}
