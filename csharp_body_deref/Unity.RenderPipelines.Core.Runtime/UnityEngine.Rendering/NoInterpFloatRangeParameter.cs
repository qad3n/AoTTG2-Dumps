using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001F5")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpFloatRangeParameter : VolumeParameter<Vector2>
{
	[NonSerialized]
	[Token(Token = "0x4000832")]
	[FieldOffset(Offset = "0x1C")]
	public float min;

	[NonSerialized]
	[Token(Token = "0x4000833")]
	[FieldOffset(Offset = "0x20")]
	public float max;

	[Token(Token = "0x170001A8")]
	public override Vector2 value
	{
		[Token(Token = "0x6000DE9")]
		[Address(RVA = "0x48E66B0", Offset = "0x48E66B0", VA = "0x48E66B0", Slot = "14")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000DEA")]
		[Address(RVA = "0x48E66C0", Offset = "0x48E66C0", VA = "0x48E66C0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x48E66E0", Offset = "0x48E66E0", VA = "0x48E66E0")]
	public NoInterpFloatRangeParameter(Vector2 value, float min, float max, bool overrideState = false)
	{
	}
}
