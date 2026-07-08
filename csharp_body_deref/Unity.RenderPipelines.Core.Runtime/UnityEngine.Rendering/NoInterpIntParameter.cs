using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001E5")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpIntParameter : VolumeParameter<int>
{
	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x48E5E30", Offset = "0x48E5E30", VA = "0x48E5E30")]
	public NoInterpIntParameter(int value, bool overrideState = false)
	{
	}
}
