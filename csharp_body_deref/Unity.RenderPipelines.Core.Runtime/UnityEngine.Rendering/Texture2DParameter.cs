using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000200")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class Texture2DParameter : VolumeParameter<Texture>
{
	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x48E6EE0", Offset = "0x48E6EE0", VA = "0x48E6EE0")]
	public Texture2DParameter(Texture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x48E6F30", Offset = "0x48E6F30", VA = "0x48E6F30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
