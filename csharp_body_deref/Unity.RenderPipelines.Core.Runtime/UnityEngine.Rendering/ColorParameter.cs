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
[Token(Token = "0x2000214")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class ColorParameter : VolumeParameter<Color>
{
	[NonSerialized]
	[Token(Token = "0x40009A5")]
	[FieldOffset(Offset = "0x24")]
	public bool hdr;

	[NonSerialized]
	[Token(Token = "0x40009A6")]
	[FieldOffset(Offset = "0x25")]
	public bool showAlpha;

	[NonSerialized]
	[Token(Token = "0x40009A7")]
	[FieldOffset(Offset = "0x26")]
	public bool showEyeDropper;

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x6555E40", Offset = "0x6554E40", VA = "0x6555E40")]
	public ColorParameter(Color value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x6555EA0", Offset = "0x6554EA0", VA = "0x6555EA0")]
	public ColorParameter(Color value, bool hdr, bool showAlpha, bool showEyeDropper, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x6555F40", Offset = "0x6554F40", VA = "0x6555F40", Slot = "16")]
	public override void Interp(Color from, Color to, float t)
	{
	}
}
