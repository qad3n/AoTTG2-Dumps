// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ColorParameter
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
	[Address(RVA = "0x4C0B7C0", Offset = "0x4C0B7C0", VA = "0x4C0B7C0")]
	public ColorParameter(Color value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x4C0B820", Offset = "0x4C0B820", VA = "0x4C0B820")]
	public ColorParameter(Color value, bool hdr, bool showAlpha, bool showEyeDropper, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x4C0B8C0", Offset = "0x4C0B8C0", VA = "0x4C0B8C0", Slot = "16")]
	public override void Interp(Color from, Color to, float t)
	{
	}
}
