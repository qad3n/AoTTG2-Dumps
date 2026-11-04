// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.NoInterpColorParameter
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
[Token(Token = "0x2000215")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpColorParameter : VolumeParameter<Color>
{
	[Token(Token = "0x40009A8")]
	[FieldOffset(Offset = "0x28")]
	public bool hdr;

	[NonSerialized]
	[Token(Token = "0x40009A9")]
	[FieldOffset(Offset = "0x29")]
	public bool showAlpha;

	[NonSerialized]
	[Token(Token = "0x40009AA")]
	[FieldOffset(Offset = "0x2A")]
	public bool showEyeDropper;

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x2B5F4B0", Offset = "0x2B5DAB0", VA = "0x182B5F4B0")]
	public NoInterpColorParameter(Color value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x2B5F520", Offset = "0x2B5DB20", VA = "0x182B5F520")]
	public NoInterpColorParameter(Color value, bool hdr, bool showAlpha, bool showEyeDropper, bool overrideState = false)
	{
	}
}
