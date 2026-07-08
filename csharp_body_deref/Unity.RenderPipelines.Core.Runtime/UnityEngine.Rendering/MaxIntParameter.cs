using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001E8")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class MaxIntParameter : IntParameter
{
	[NonSerialized]
	[Token(Token = "0x4000822")]
	[FieldOffset(Offset = "0x18")]
	public int max;

	[Token(Token = "0x1700019D")]
	public override int value
	{
		[Token(Token = "0x6000DC4")]
		[Address(RVA = "0x48E5F80", Offset = "0x48E5F80", VA = "0x48E5F80", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DC5")]
		[Address(RVA = "0x48E5F90", Offset = "0x48E5F90", VA = "0x48E5F90", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x48E5FA0", Offset = "0x48E5FA0", VA = "0x48E5FA0")]
	public MaxIntParameter(int value, int max, bool overrideState = false)
	{
	}
}
