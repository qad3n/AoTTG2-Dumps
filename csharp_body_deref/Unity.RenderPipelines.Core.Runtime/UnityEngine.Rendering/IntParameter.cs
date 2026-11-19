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
[Token(Token = "0x2000202")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class IntParameter : VolumeParameter<int>
{
	[Token(Token = "0x6000F1A")]
	[Address(RVA = "0x65554A0", Offset = "0x65544A0", VA = "0x65554A0")]
	public IntParameter(int value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F1B")]
	[Address(RVA = "0x65554F0", Offset = "0x65544F0", VA = "0x65554F0", Slot = "16")]
	public sealed override void Interp(int from, int to, float t)
	{
	}
}
