// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Vector4Parameter
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
[Token(Token = "0x20001FC")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class Vector4Parameter : VolumeParameter<Vector4>
{
	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x4C0BBB0", Offset = "0x4C0BBB0", VA = "0x4C0BBB0")]
	public Vector4Parameter(Vector4 value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x4C0BC10", Offset = "0x4C0BC10", VA = "0x4C0BC10", Slot = "16")]
	public override void Interp(Vector4 from, Vector4 to, float t)
	{
	}
}
