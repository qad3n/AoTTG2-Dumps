using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001F6")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class ColorParameter : VolumeParameter<Color>
{
	[NonSerialized]
	[Token(Token = "0x4000834")]
	[FieldOffset(Offset = "0x24")]
	public bool hdr;

	[NonSerialized]
	[Token(Token = "0x4000835")]
	[FieldOffset(Offset = "0x25")]
	public bool showAlpha;

	[NonSerialized]
	[Token(Token = "0x4000836")]
	[FieldOffset(Offset = "0x26")]
	public bool showEyeDropper;

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x48E6750", Offset = "0x48E6750", VA = "0x48E6750")]
	public ColorParameter(Color value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x48E67B0", Offset = "0x48E67B0", VA = "0x48E67B0")]
	public ColorParameter(Color value, bool hdr, bool showAlpha, bool showEyeDropper, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x48E6850", Offset = "0x48E6850", VA = "0x48E6850", Slot = "16")]
	public override void Interp(Color from, Color to, float t)
	{
	}
}
