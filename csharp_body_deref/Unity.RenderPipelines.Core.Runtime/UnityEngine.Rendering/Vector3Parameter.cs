// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Vector3Parameter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4C0BAB0", Offset = "0x4C0BAB0", VA = "0x4C0BAB0")]
	public Vector3Parameter(Vector3 value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x4C0BB10", Offset = "0x4C0BB10", VA = "0x4C0BB10", Slot = "16")]
	public override void Interp(Vector3 from, Vector3 to, float t)
	{
	}
}
