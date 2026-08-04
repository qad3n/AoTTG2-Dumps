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
[Token(Token = "0x20001F3")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpClampedFloatParameter : VolumeParameter<float>
{
	[NonSerialized]
	[Token(Token = "0x400082E")]
	[FieldOffset(Offset = "0x18")]
	public float min;

	[NonSerialized]
	[Token(Token = "0x400082F")]
	[FieldOffset(Offset = "0x1C")]
	public float max;

	[Token(Token = "0x170001A6")]
	public override float value
	{
		[Token(Token = "0x6000DE2")]
		[Address(RVA = "0x4C0B590", Offset = "0x4C0B590", VA = "0x4C0B590", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000DE3")]
		[Address(RVA = "0x4C0B5A0", Offset = "0x4C0B5A0", VA = "0x4C0B5A0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x4C0B5D0", Offset = "0x4C0B5D0", VA = "0x4C0B5D0")]
	public NoInterpClampedFloatParameter(float value, float min, float max, bool overrideState = false)
	{
	}
}
