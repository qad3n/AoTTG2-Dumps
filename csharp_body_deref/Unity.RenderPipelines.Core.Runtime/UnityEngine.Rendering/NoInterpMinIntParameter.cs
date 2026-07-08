using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001E7")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpMinIntParameter : VolumeParameter<int>
{
	[NonSerialized]
	[Token(Token = "0x4000821")]
	[FieldOffset(Offset = "0x18")]
	public int min;

	[Token(Token = "0x1700019C")]
	public override int value
	{
		[Token(Token = "0x6000DC1")]
		[Address(RVA = "0x48E5F00", Offset = "0x48E5F00", VA = "0x48E5F00", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DC2")]
		[Address(RVA = "0x48E5F10", Offset = "0x48E5F10", VA = "0x48E5F10", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x48E5F20", Offset = "0x48E5F20", VA = "0x48E5F20")]
	public NoInterpMinIntParameter(int value, int min, bool overrideState = false)
	{
	}
}
