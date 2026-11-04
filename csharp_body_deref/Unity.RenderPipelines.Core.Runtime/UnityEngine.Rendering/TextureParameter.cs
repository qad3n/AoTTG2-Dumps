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
[Token(Token = "0x200021C")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class TextureParameter : VolumeParameter<Texture>
{
	[Token(Token = "0x40009AB")]
	[FieldOffset(Offset = "0x20")]
	public TextureDimension dimension;

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x2B63D90", Offset = "0x2B62390", VA = "0x182B63D90")]
	public TextureParameter(Texture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x2B63D30", Offset = "0x2B62330", VA = "0x182B63D30")]
	public TextureParameter(Texture value, TextureDimension dimension, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x2B63C40", Offset = "0x2B62240", VA = "0x182B63C40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
