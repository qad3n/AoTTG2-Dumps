using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004DA")]
internal class VectorImageRenderInfo : LinkedPoolItem<VectorImageRenderInfo>
{
	[Token(Token = "0x4000FD6")]
	[FieldOffset(Offset = "0x18")]
	public int useCount;

	[Token(Token = "0x4000FD7")]
	[FieldOffset(Offset = "0x20")]
	public GradientRemap firstGradientRemap;

	[Token(Token = "0x4000FD8")]
	[FieldOffset(Offset = "0x28")]
	public Alloc gradientSettingsAlloc;

	[Token(Token = "0x6001E18")]
	[Address(RVA = "0x4C83260", Offset = "0x4C83260", VA = "0x4C83260")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001E19")]
	[Address(RVA = "0x4C831E0", Offset = "0x4C831E0", VA = "0x4C831E0")]
	public VectorImageRenderInfo()
	{
	}
}
