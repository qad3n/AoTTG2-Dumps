using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001EE")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class MinFloatParameter : FloatParameter
{
	[NonSerialized]
	[Token(Token = "0x4000828")]
	[FieldOffset(Offset = "0x18")]
	public float min;

	[Token(Token = "0x170001A1")]
	public override float value
	{
		[Token(Token = "0x6000DD3")]
		[Address(RVA = "0x48E6260", Offset = "0x48E6260", VA = "0x48E6260", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000DD4")]
		[Address(RVA = "0x48E6270", Offset = "0x48E6270", VA = "0x48E6270", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x48E6280", Offset = "0x48E6280", VA = "0x48E6280")]
	public MinFloatParameter(float value, float min, bool overrideState = false)
	{
	}
}
