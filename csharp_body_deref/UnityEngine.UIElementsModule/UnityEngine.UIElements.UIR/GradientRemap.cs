// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.GradientRemap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004DD")]
internal class GradientRemap : LinkedPoolItem<GradientRemap>
{
	[Token(Token = "0x4000FDC")]
	[FieldOffset(Offset = "0x18")]
	public int origIndex;

	[Token(Token = "0x4000FDD")]
	[FieldOffset(Offset = "0x1C")]
	public int destIndex;

	[Token(Token = "0x4000FDE")]
	[FieldOffset(Offset = "0x20")]
	public RectInt location;

	[Token(Token = "0x4000FDF")]
	[FieldOffset(Offset = "0x30")]
	public GradientRemap next;

	[Token(Token = "0x4000FE0")]
	[FieldOffset(Offset = "0x38")]
	public TextureId atlas;

	[Token(Token = "0x6001E1F")]
	[Address(RVA = "0x4FAAF70", Offset = "0x4FAAF70", VA = "0x4FAAF70")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001E20")]
	[Address(RVA = "0x4FAAEC0", Offset = "0x4FAAEC0", VA = "0x4FAAEC0")]
	public GradientRemap()
	{
	}
}
