using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001FC")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class Vector4Parameter : VolumeParameter<Vector4>
{
	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x48E6B40", Offset = "0x48E6B40", VA = "0x48E6B40")]
	public Vector4Parameter(Vector4 value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x48E6BA0", Offset = "0x48E6BA0", VA = "0x48E6BA0", Slot = "16")]
	public override void Interp(Vector4 from, Vector4 to, float t)
	{
	}
}
