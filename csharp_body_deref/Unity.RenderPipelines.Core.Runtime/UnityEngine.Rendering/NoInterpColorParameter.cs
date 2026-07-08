using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001F7")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpColorParameter : VolumeParameter<Color>
{
	[Token(Token = "0x4000837")]
	[FieldOffset(Offset = "0x24")]
	public bool hdr;

	[NonSerialized]
	[Token(Token = "0x4000838")]
	[FieldOffset(Offset = "0x25")]
	public bool showAlpha;

	[NonSerialized]
	[Token(Token = "0x4000839")]
	[FieldOffset(Offset = "0x26")]
	public bool showEyeDropper;

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x48E6870", Offset = "0x48E6870", VA = "0x48E6870")]
	public NoInterpColorParameter(Color value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x48E68D0", Offset = "0x48E68D0", VA = "0x48E68D0")]
	public NoInterpColorParameter(Color value, bool hdr, bool showAlpha, bool showEyeDropper, bool overrideState = false)
	{
	}
}
