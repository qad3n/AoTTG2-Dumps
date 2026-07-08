using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x20001A0")]
[Flags]
public enum DrivenTransformProperties
{
	[Token(Token = "0x40005F1")]
	None = 0,
	[Token(Token = "0x40005F2")]
	All = -1,
	[Token(Token = "0x40005F3")]
	AnchoredPositionX = 2,
	[Token(Token = "0x40005F4")]
	AnchoredPositionY = 4,
	[Token(Token = "0x40005F5")]
	AnchoredPositionZ = 8,
	[Token(Token = "0x40005F6")]
	Rotation = 0x10,
	[Token(Token = "0x40005F7")]
	ScaleX = 0x20,
	[Token(Token = "0x40005F8")]
	ScaleY = 0x40,
	[Token(Token = "0x40005F9")]
	ScaleZ = 0x80,
	[Token(Token = "0x40005FA")]
	AnchorMinX = 0x100,
	[Token(Token = "0x40005FB")]
	AnchorMinY = 0x200,
	[Token(Token = "0x40005FC")]
	AnchorMaxX = 0x400,
	[Token(Token = "0x40005FD")]
	AnchorMaxY = 0x800,
	[Token(Token = "0x40005FE")]
	SizeDeltaX = 0x1000,
	[Token(Token = "0x40005FF")]
	SizeDeltaY = 0x2000,
	[Token(Token = "0x4000600")]
	PivotX = 0x4000,
	[Token(Token = "0x4000601")]
	PivotY = 0x8000,
	[Token(Token = "0x4000602")]
	AnchoredPosition = 6,
	[Token(Token = "0x4000603")]
	AnchoredPosition3D = 0xE,
	[Token(Token = "0x4000604")]
	Scale = 0xE0,
	[Token(Token = "0x4000605")]
	AnchorMin = 0x300,
	[Token(Token = "0x4000606")]
	AnchorMax = 0xC00,
	[Token(Token = "0x4000607")]
	Anchors = 0xF00,
	[Token(Token = "0x4000608")]
	SizeDelta = 0x3000,
	[Token(Token = "0x4000609")]
	Pivot = 0xC000
}
