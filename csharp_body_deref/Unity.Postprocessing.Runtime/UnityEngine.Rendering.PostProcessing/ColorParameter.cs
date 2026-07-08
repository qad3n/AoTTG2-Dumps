using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000054")]
public sealed class ColorParameter : ParameterOverride<Color>
{
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x4826380", Offset = "0x4826380", VA = "0x4826380", Slot = "9")]
	public override void Interp(Color from, Color to, float t)
	{
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x48263A0", Offset = "0x48263A0", VA = "0x48263A0")]
	public static implicit operator Vector4(ColorParameter prop)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x48263C0", Offset = "0x48263C0", VA = "0x48263C0")]
	public ColorParameter()
	{
	}
}
