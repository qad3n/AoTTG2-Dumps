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
[Token(Token = "0x200021A")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class Vector4Parameter : VolumeParameter<Vector4>
{
	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x2B64680", Offset = "0x2B62C80", VA = "0x182B64680")]
	public Vector4Parameter(Vector4 value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x2B4FFD0", Offset = "0x2B4E5D0", VA = "0x182B4FFD0", Slot = "16")]
	public override void Interp(Vector4 from, Vector4 to, float t)
	{
	}
}
