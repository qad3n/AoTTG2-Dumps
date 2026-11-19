// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.NoInterpClampedFloatParameter
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
[Token(Token = "0x2000211")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpClampedFloatParameter : VolumeParameter<float>
{
	[NonSerialized]
	[Token(Token = "0x400099F")]
	[FieldOffset(Offset = "0x18")]
	public float min;

	[NonSerialized]
	[Token(Token = "0x40009A0")]
	[FieldOffset(Offset = "0x1C")]
	public float max;

	[Token(Token = "0x170001F7")]
	public override float value
	{
		[Token(Token = "0x6000F41")]
		[Address(RVA = "0x6555C00", Offset = "0x6554C00", VA = "0x6555C00", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000F42")]
		[Address(RVA = "0x6555C10", Offset = "0x6554C10", VA = "0x6555C10", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F43")]
	[Address(RVA = "0x6555C40", Offset = "0x6554C40", VA = "0x6555C40")]
	public NoInterpClampedFloatParameter(float value, float min, float max, bool overrideState = false)
	{
	}
}
