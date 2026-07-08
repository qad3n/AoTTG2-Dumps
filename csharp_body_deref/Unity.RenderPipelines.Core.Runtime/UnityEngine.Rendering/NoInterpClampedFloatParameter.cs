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
		[Address(RVA = "0x48E6520", Offset = "0x48E6520", VA = "0x48E6520", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000DE3")]
		[Address(RVA = "0x48E6530", Offset = "0x48E6530", VA = "0x48E6530", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x48E6560", Offset = "0x48E6560", VA = "0x48E6560")]
	public NoInterpClampedFloatParameter(float value, float min, float max, bool overrideState = false)
	{
	}
}
