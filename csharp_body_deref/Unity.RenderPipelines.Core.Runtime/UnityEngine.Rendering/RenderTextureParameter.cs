using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000202")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class RenderTextureParameter : VolumeParameter<RenderTexture>
{
	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x48E7140", Offset = "0x48E7140", VA = "0x48E7140")]
	public RenderTextureParameter(RenderTexture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x48E7190", Offset = "0x48E7190", VA = "0x48E7190", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
