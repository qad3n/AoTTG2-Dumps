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
		[Address(RVA = "0x48E6460", Offset = "0x48E6460", VA = "0x48E6460", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000DE0")]
		[Address(RVA = "0x48E6470", Offset = "0x48E6470", VA = "0x48E6470", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x48E64A0", Offset = "0x48E64A0", VA = "0x48E64A0")]
	public ClampedFloatParameter(float value, float min, float max, bool overrideState = false)
	{
	}
}
