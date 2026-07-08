using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001EF")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpMinFloatParameter : VolumeParameter<float>
{
	[NonSerialized]
	[Token(Token = "0x4000829")]
	[FieldOffset(Offset = "0x18")]
	public float min;

	[Token(Token = "0x170001A2")]
	public override float value
	{
		[Token(Token = "0x6000DD6")]
		[Address(RVA = "0x48E62E0", Offset = "0x48E62E0", VA = "0x48E62E0", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000DD7")]
		[Address(RVA = "0x48E62F0", Offset = "0x48E62F0", VA = "0x48E62F0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x48E6300", Offset = "0x48E6300", VA = "0x48E6300")]
	public NoInterpMinFloatParameter(float value, float min, bool overrideState = false)
	{
	}
}
