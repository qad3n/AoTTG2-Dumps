// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.FloatRangeParameter
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
[Token(Token = "0x20001F4")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class FloatRangeParameter : VolumeParameter<Vector2>
{
	[NonSerialized]
	[Token(Token = "0x4000830")]
	[FieldOffset(Offset = "0x1C")]
	public float min;

	[NonSerialized]
	[Token(Token = "0x4000831")]
	[FieldOffset(Offset = "0x20")]
	public float max;

	[Token(Token = "0x170001A7")]
	public override Vector2 value
	{
		[Token(Token = "0x6000DE5")]
		[Address(RVA = "0x4C0B650", Offset = "0x4C0B650", VA = "0x4C0B650", Slot = "14")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000DE6")]
		[Address(RVA = "0x4C0B660", Offset = "0x4C0B660", VA = "0x4C0B660", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x4C0B680", Offset = "0x4C0B680", VA = "0x4C0B680")]
	public FloatRangeParameter(Vector2 value, float min, float max, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x4C0B6F0", Offset = "0x4C0B6F0", VA = "0x4C0B6F0", Slot = "16")]
	public override void Interp(Vector2 from, Vector2 to, float t)
	{
	}
}
