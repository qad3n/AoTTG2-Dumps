using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000201")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class Texture3DParameter : VolumeParameter<Texture>
{
	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x48E7010", Offset = "0x48E7010", VA = "0x48E7010")]
	public Texture3DParameter(Texture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x48E7060", Offset = "0x48E7060", VA = "0x48E7060", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
