using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000203")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpRenderTextureParameter : VolumeParameter<RenderTexture>
{
	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x48E7270", Offset = "0x48E7270", VA = "0x48E7270")]
	public NoInterpRenderTextureParameter(RenderTexture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x48E72C0", Offset = "0x48E72C0", VA = "0x48E72C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
