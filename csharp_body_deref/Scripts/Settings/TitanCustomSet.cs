// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanCustomSet
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/TitanCustomSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/TitanCustomSet.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B3")]
internal class TitanCustomSet : BaseSetSetting
{
	[Token(Token = "0x40003E1")]
	public const int RandomModel = -1;

	[Token(Token = "0x40003E2")]
	public const string RandomHair = "Random";

	[Token(Token = "0x40003E3")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting Head;

	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting Body;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting Eye;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Hair;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x68")]
	public ColorSetting SkinColor;

	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x70")]
	public ColorSetting HairColor;

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x1F281B0", Offset = "0x1F267B0", VA = "0x181F281B0")]
	public bool IsRandomHair()
	{
		return default(bool);
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x1F27FA0", Offset = "0x1F265A0", VA = "0x181F27FA0")]
	public int GetBody()
	{
		return default(int);
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x1F28160", Offset = "0x1F26760", VA = "0x181F28160")]
	public int GetHead()
	{
		return default(int);
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x1F27FF0", Offset = "0x1F265F0", VA = "0x181F27FF0")]
	public int GetEye()
	{
		return default(int);
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x1F28040", Offset = "0x1F26640", VA = "0x181F28040")]
	public string GetHair()
	{
		return null;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x1F28210", Offset = "0x1F26810", VA = "0x181F28210")]
	public TitanCustomSet()
	{
	}
}
