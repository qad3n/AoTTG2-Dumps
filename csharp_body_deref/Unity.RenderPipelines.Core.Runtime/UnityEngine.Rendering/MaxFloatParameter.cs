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
		[Address(RVA = "0x48E6360", Offset = "0x48E6360", VA = "0x48E6360", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000DDA")]
		[Address(RVA = "0x48E6370", Offset = "0x48E6370", VA = "0x48E6370", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x48E6380", Offset = "0x48E6380", VA = "0x48E6380")]
	public MaxFloatParameter(float value, float max, bool overrideState = false)
	{
	}
}
