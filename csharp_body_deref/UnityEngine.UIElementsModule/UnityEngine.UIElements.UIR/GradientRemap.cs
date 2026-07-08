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
	[Address(RVA = "0x4C83640", Offset = "0x4C83640", VA = "0x4C83640")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001E20")]
	[Address(RVA = "0x4C83590", Offset = "0x4C83590", VA = "0x4C83590")]
	public GradientRemap()
	{
	}
}
