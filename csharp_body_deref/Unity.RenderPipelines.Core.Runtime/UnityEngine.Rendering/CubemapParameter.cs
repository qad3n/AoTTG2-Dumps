using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000204")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class CubemapParameter : VolumeParameter<Texture>
{
	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x48E73A0", Offset = "0x48E73A0", VA = "0x48E73A0")]
	public CubemapParameter(Texture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000E08")]
	[Address(RVA = "0x48E73F0", Offset = "0x48E73F0", VA = "0x48E73F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
