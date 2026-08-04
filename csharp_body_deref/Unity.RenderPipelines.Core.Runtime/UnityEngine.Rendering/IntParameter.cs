// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IntParameter
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
[Token(Token = "0x20001E4")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class IntParameter : VolumeParameter<int>
{
	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x4C0AE30", Offset = "0x4C0AE30", VA = "0x4C0AE30")]
	public IntParameter(int value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x4C0AE80", Offset = "0x4C0AE80", VA = "0x4C0AE80", Slot = "16")]
	public sealed override void Interp(int from, int to, float t)
	{
	}
}
