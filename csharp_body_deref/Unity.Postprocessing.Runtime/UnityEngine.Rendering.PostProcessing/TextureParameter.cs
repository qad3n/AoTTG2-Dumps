using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200005A")]
public sealed class TextureParameter : ParameterOverride<Texture>
{
	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x20")]
	public TextureParameterDefault defaultState;

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x4826810", Offset = "0x4826810", VA = "0x4826810", Slot = "9")]
	public override void Interp(Texture from, Texture to, float t)
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x4826FB0", Offset = "0x4826FB0", VA = "0x4826FB0")]
	public TextureParameter()
	{
	}
}
