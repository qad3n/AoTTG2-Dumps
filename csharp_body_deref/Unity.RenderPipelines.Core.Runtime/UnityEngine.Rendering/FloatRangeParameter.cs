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
		[Address(RVA = "0x48E65E0", Offset = "0x48E65E0", VA = "0x48E65E0", Slot = "14")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000DE6")]
		[Address(RVA = "0x48E65F0", Offset = "0x48E65F0", VA = "0x48E65F0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x48E6610", Offset = "0x48E6610", VA = "0x48E6610")]
	public FloatRangeParameter(Vector2 value, float min, float max, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x48E6680", Offset = "0x48E6680", VA = "0x48E6680", Slot = "16")]
	public override void Interp(Vector2 from, Vector2 to, float t)
	{
	}
}
