using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000051")]
public sealed class FloatParameter : ParameterOverride<float>
{
	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x4826280", Offset = "0x4826280", VA = "0x4826280", Slot = "9")]
	public override void Interp(float from, float to, float t)
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x48262A0", Offset = "0x48262A0", VA = "0x48262A0")]
	public FloatParameter()
	{
	}
}
