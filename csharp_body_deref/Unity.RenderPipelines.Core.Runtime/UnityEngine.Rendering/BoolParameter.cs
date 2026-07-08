using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001E1")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class BoolParameter : VolumeParameter<bool>
{
	[Token(Token = "0x20001E2")]
	public enum DisplayType
	{
		[Token(Token = "0x400081E")]
		Checkbox,
		[Token(Token = "0x400081F")]
		EnumPopup
	}

	[NonSerialized]
	[Token(Token = "0x400081C")]
	[FieldOffset(Offset = "0x14")]
	public DisplayType displayType;

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x48E5CC0", Offset = "0x48E5CC0", VA = "0x48E5CC0")]
	public BoolParameter(bool value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x48E5D10", Offset = "0x48E5D10", VA = "0x48E5D10")]
	public BoolParameter(bool value, DisplayType displayType, bool overrideState = false)
	{
	}
}
