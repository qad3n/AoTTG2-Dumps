// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ClampedFloatParameter
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
[Token(Token = "0x20001F2")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class ClampedFloatParameter : FloatParameter
{
	[NonSerialized]
	[Token(Token = "0x400082C")]
	[FieldOffset(Offset = "0x18")]
	public float min;

	[NonSerialized]
	[Token(Token = "0x400082D")]
	[FieldOffset(Offset = "0x1C")]
	public float max;

	[Token(Token = "0x170001A5")]
	public override float value
	{
		[Token(Token = "0x6000DDF")]
		[Address(RVA = "0x4C0B4D0", Offset = "0x4C0B4D0", VA = "0x4C0B4D0", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000DE0")]
		[Address(RVA = "0x4C0B4E0", Offset = "0x4C0B4E0", VA = "0x4C0B4E0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x4C0B510", Offset = "0x4C0B510", VA = "0x4C0B510")]
	public ClampedFloatParameter(float value, float min, float max, bool overrideState = false)
	{
	}
}
