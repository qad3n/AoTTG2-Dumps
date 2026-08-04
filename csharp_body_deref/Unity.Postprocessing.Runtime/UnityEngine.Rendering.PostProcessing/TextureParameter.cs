// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.TextureParameter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200005A")]
public sealed class TextureParameter : ParameterOverride<Texture>
{
	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x20")]
	public TextureParameterDefault defaultState;

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x4B4B900", Offset = "0x4B4B900", VA = "0x4B4B900", Slot = "9")]
	public override void Interp(Texture from, Texture to, float t)
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x4B4C0A0", Offset = "0x4B4C0A0", VA = "0x4B4C0A0")]
	public TextureParameter()
	{
	}
}
