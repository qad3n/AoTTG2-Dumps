using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001FD")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpVector4Parameter : VolumeParameter<Vector4>
{
	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x48E6BC0", Offset = "0x48E6BC0", VA = "0x48E6BC0")]
	public NoInterpVector4Parameter(Vector4 value, bool overrideState = false)
	{
	}
}
