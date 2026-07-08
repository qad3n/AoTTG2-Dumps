using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000320")]
[Flags]
public enum ShaderPropertyFlags
{
	[Token(Token = "0x40009ED")]
	None = 0,
	[Token(Token = "0x40009EE")]
	HideInInspector = 1,
	[Token(Token = "0x40009EF")]
	PerRendererData = 2,
	[Token(Token = "0x40009F0")]
	NoScaleOffset = 4,
	[Token(Token = "0x40009F1")]
	Normal = 8,
	[Token(Token = "0x40009F2")]
	HDR = 0x10,
	[Token(Token = "0x40009F3")]
	Gamma = 0x20,
	[Token(Token = "0x40009F4")]
	NonModifiableTextureData = 0x40,
	[Token(Token = "0x40009F5")]
	MainTexture = 0x80,
	[Token(Token = "0x40009F6")]
	MainColor = 0x100
}
