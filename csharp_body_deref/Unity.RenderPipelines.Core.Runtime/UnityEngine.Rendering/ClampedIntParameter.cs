using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001EA")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class ClampedIntParameter : IntParameter
{
	[NonSerialized]
	[Token(Token = "0x4000824")]
	[FieldOffset(Offset = "0x18")]
	public int min;

	[NonSerialized]
	[Token(Token = "0x4000825")]
	[FieldOffset(Offset = "0x1C")]
	public int max;

	[Token(Token = "0x1700019F")]
	public override int value
	{
		[Token(Token = "0x6000DCA")]
		[Address(RVA = "0x48E6080", Offset = "0x48E6080", VA = "0x48E6080", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DCB")]
		[Address(RVA = "0x48E6090", Offset = "0x48E6090", VA = "0x48E6090", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x48E60B0", Offset = "0x48E60B0", VA = "0x48E60B0")]
	public ClampedIntParameter(int value, int min, int max, bool overrideState = false)
	{
	}
}
