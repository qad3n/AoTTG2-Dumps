using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001EB")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpClampedIntParameter : VolumeParameter<int>
{
	[NonSerialized]
	[Token(Token = "0x4000826")]
	[FieldOffset(Offset = "0x18")]
	public int min;

	[NonSerialized]
	[Token(Token = "0x4000827")]
	[FieldOffset(Offset = "0x1C")]
	public int max;

	[Token(Token = "0x170001A0")]
	public override int value
	{
		[Token(Token = "0x6000DCD")]
		[Address(RVA = "0x48E6110", Offset = "0x48E6110", VA = "0x48E6110", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DCE")]
		[Address(RVA = "0x48E6120", Offset = "0x48E6120", VA = "0x48E6120", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x48E6140", Offset = "0x48E6140", VA = "0x48E6140")]
	public NoInterpClampedIntParameter(int value, int min, int max, bool overrideState = false)
	{
	}
}
