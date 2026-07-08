using Il2CppDummyDll;

namespace PatreonEffects;

[Token(Token = "0x20000F8")]
public struct RoleSpriteDefinition
{
	[Token(Token = "0x40005EB")]
	[FieldOffset(Offset = "0x0")]
	public string RoleName;

	[Token(Token = "0x40005EC")]
	[FieldOffset(Offset = "0x8")]
	public int SpriteIndex;

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x3F3C1E0", Offset = "0x3F3C1E0", VA = "0x3F3C1E0")]
	public RoleSpriteDefinition(string roleName, int spriteIndex)
	{
	}
}
