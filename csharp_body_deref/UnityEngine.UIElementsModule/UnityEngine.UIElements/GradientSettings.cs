using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000459")]
internal struct GradientSettings
{
	[Token(Token = "0x4000CFD")]
	[FieldOffset(Offset = "0x0")]
	public GradientType gradientType;

	[Token(Token = "0x4000CFE")]
	[FieldOffset(Offset = "0x4")]
	public AddressMode addressMode;

	[Token(Token = "0x4000CFF")]
	[FieldOffset(Offset = "0x8")]
	public Vector2 radialFocus;

	[Token(Token = "0x4000D00")]
	[FieldOffset(Offset = "0x10")]
	public RectInt location;
}
