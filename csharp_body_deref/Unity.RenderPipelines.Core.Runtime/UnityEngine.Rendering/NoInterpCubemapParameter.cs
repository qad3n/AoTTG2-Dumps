using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000205")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpCubemapParameter : VolumeParameter<Cubemap>
{
	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x48E74D0", Offset = "0x48E74D0", VA = "0x48E74D0")]
	public NoInterpCubemapParameter(Cubemap value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x48E7520", Offset = "0x48E7520", VA = "0x48E7520", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
