using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001E9")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpMaxIntParameter : VolumeParameter<int>
{
	[NonSerialized]
	[Token(Token = "0x4000823")]
	[FieldOffset(Offset = "0x18")]
	public int max;

	[Token(Token = "0x1700019E")]
	public override int value
	{
		[Token(Token = "0x6000DC7")]
		[Address(RVA = "0x48E6000", Offset = "0x48E6000", VA = "0x48E6000", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DC8")]
		[Address(RVA = "0x48E6010", Offset = "0x48E6010", VA = "0x48E6010", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x48E6020", Offset = "0x48E6020", VA = "0x48E6020")]
	public NoInterpMaxIntParameter(int value, int max, bool overrideState = false)
	{
	}
}
