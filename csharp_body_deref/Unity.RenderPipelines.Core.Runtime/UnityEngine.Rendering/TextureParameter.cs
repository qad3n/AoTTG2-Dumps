// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.TextureParameter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4C0BC90", Offset = "0x4C0BC90", VA = "0x4C0BC90")]
	public TextureParameter(Texture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x4C0BCE0", Offset = "0x4C0BCE0", VA = "0x4C0BCE0")]
	public TextureParameter(Texture value, TextureDimension dimension, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x4C0BD40", Offset = "0x4C0BD40", VA = "0x4C0BD40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
