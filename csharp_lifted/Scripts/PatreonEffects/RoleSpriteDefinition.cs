// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.RoleSpriteDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/RoleSpriteDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace PatreonEffects;

[Token(Token = "0x200008E")]
public struct RoleSpriteDefinition
{
	[Token(Token = "0x40002F7")]
	[FieldOffset(Offset = "0x0")]
	public string RoleName;

	[Token(Token = "0x40002F8")]
	[FieldOffset(Offset = "0x8")]
	public int SpriteIndex;

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x58C9CB0", Offset = "0x58C8CB0", VA = "0x58C9CB0")]
	public RoleSpriteDefinition(string roleName, int spriteIndex)
	{
		// Lifted from source/cpp/PatreonEffects/RoleSpriteDefinition.c (PatreonEffects.RoleSpriteDefinition$$.ctor): clean
		this.RoleName = roleName;
		this.SpriteIndex = spriteIndex;
		return;
	}
}
