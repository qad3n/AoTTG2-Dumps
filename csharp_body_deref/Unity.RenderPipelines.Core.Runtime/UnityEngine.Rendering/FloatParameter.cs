using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001EC")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class FloatParameter : VolumeParameter<float>
{
	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x48E61A0", Offset = "0x48E61A0", VA = "0x48E61A0")]
	public FloatParameter(float value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x48E61F0", Offset = "0x48E61F0", VA = "0x48E61F0", Slot = "16")]
	public sealed override void Interp(float from, float to, float t)
	{
	}
}
