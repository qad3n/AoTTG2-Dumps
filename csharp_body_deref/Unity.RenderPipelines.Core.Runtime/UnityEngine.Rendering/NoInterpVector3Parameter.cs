using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001FB")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpVector3Parameter : VolumeParameter<Vector3>
{
	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x48E6AE0", Offset = "0x48E6AE0", VA = "0x48E6AE0")]
	public NoInterpVector3Parameter(Vector3 value, bool overrideState = false)
	{
	}
}
