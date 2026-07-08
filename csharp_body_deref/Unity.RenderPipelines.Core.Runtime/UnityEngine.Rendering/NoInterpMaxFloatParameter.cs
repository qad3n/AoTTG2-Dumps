using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001F1")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpMaxFloatParameter : VolumeParameter<float>
{
	[NonSerialized]
	[Token(Token = "0x400082B")]
	[FieldOffset(Offset = "0x18")]
	public float max;

	[Token(Token = "0x170001A4")]
	public override float value
	{
		[Token(Token = "0x6000DDC")]
		[Address(RVA = "0x48E63E0", Offset = "0x48E63E0", VA = "0x48E63E0", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000DDD")]
		[Address(RVA = "0x48E63F0", Offset = "0x48E63F0", VA = "0x48E63F0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x48E6400", Offset = "0x48E6400", VA = "0x48E6400")]
	public NoInterpMaxFloatParameter(float value, float max, bool overrideState = false)
	{
	}
}
