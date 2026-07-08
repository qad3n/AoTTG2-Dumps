using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001E4")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class IntParameter : VolumeParameter<int>
{
	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x48E5DC0", Offset = "0x48E5DC0", VA = "0x48E5DC0")]
	public IntParameter(int value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x48E5E10", Offset = "0x48E5E10", VA = "0x48E5E10", Slot = "16")]
	public sealed override void Interp(int from, int to, float t)
	{
	}
}
