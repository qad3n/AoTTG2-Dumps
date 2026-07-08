using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001ED")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpFloatParameter : VolumeParameter<float>
{
	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x48E6210", Offset = "0x48E6210", VA = "0x48E6210")]
	public NoInterpFloatParameter(float value, bool overrideState = false)
	{
	}
}
