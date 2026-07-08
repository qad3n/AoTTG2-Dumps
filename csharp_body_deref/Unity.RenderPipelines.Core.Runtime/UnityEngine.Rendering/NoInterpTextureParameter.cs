using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001FF")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpTextureParameter : VolumeParameter<Texture>
{
	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x48E6DB0", Offset = "0x48E6DB0", VA = "0x48E6DB0")]
	public NoInterpTextureParameter(Texture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x48E6E00", Offset = "0x48E6E00", VA = "0x48E6E00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
