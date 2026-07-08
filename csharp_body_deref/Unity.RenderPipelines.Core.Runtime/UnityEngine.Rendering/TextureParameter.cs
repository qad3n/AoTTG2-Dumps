using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001FE")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class TextureParameter : VolumeParameter<Texture>
{
	[Token(Token = "0x400083A")]
	[FieldOffset(Offset = "0x20")]
	public TextureDimension dimension;

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x48E6C20", Offset = "0x48E6C20", VA = "0x48E6C20")]
	public TextureParameter(Texture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x48E6C70", Offset = "0x48E6C70", VA = "0x48E6C70")]
	public TextureParameter(Texture value, TextureDimension dimension, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x48E6CD0", Offset = "0x48E6CD0", VA = "0x48E6CD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
