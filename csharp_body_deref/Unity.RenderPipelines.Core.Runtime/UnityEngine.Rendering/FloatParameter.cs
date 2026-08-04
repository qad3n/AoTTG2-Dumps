// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.FloatParameter
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
[Token(Token = "0x20001EC")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class FloatParameter : VolumeParameter<float>
{
	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x4C0B210", Offset = "0x4C0B210", VA = "0x4C0B210")]
	public FloatParameter(float value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x4C0B260", Offset = "0x4C0B260", VA = "0x4C0B260", Slot = "16")]
	public sealed override void Interp(float from, float to, float t)
	{
	}
}
