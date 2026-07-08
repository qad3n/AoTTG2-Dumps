using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001FA")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class Vector3Parameter : VolumeParameter<Vector3>
{
	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x48E6A40", Offset = "0x48E6A40", VA = "0x48E6A40")]
	public Vector3Parameter(Vector3 value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x48E6AA0", Offset = "0x48E6AA0", VA = "0x48E6AA0", Slot = "16")]
	public override void Interp(Vector3 from, Vector3 to, float t)
	{
	}
}
