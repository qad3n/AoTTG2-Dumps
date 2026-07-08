using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001E6")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class MinIntParameter : IntParameter
{
	[NonSerialized]
	[Token(Token = "0x4000820")]
	[FieldOffset(Offset = "0x18")]
	public int min;

	[Token(Token = "0x1700019B")]
	public override int value
	{
		[Token(Token = "0x6000DBE")]
		[Address(RVA = "0x48E5E80", Offset = "0x48E5E80", VA = "0x48E5E80", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DBF")]
		[Address(RVA = "0x48E5E90", Offset = "0x48E5E90", VA = "0x48E5E90", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x48E5EA0", Offset = "0x48E5EA0", VA = "0x48E5EA0")]
	public MinIntParameter(int value, int min, bool overrideState = false)
	{
	}
}
