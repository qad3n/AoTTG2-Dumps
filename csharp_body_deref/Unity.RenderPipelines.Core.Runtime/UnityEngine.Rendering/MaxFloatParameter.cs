// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.MaxFloatParameter
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
[Token(Token = "0x20001F0")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class MaxFloatParameter : FloatParameter
{
	[NonSerialized]
	[Token(Token = "0x400082A")]
	[FieldOffset(Offset = "0x18")]
	public float max;

	[Token(Token = "0x170001A3")]
	public override float value
	{
		[Token(Token = "0x6000DD9")]
		[Address(RVA = "0x4C0B3D0", Offset = "0x4C0B3D0", VA = "0x4C0B3D0", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000DDA")]
		[Address(RVA = "0x4C0B3E0", Offset = "0x4C0B3E0", VA = "0x4C0B3E0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x4C0B3F0", Offset = "0x4C0B3F0", VA = "0x4C0B3F0")]
	public MaxFloatParameter(float value, float max, bool overrideState = false)
	{
	}
}
