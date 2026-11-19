// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanCustomSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TitanCustomSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/TitanCustomSet.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000EA")]
internal class TitanCustomSet : BaseSetSetting
{
	[Token(Token = "0x4000516")]
	public const int RandomModel = -1;

	[Token(Token = "0x4000517")]
	public const string RandomHair = "Random";

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting Head;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting Body;

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting Eye;

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Hair;

	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0x68")]
	public ColorSetting SkinColor;

	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0x70")]
	public ColorSetting HairColor;

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x5A49B00", Offset = "0x5A48B00", VA = "0x5A49B00")]
	public bool IsRandomHair()
	{
		return default(bool);
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x5A49B50", Offset = "0x5A48B50", VA = "0x5A49B50")]
	public int GetBody()
	{
		return default(int);
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x5A49B90", Offset = "0x5A48B90", VA = "0x5A49B90")]
	public int GetHead()
	{
		return default(int);
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x5A49BD0", Offset = "0x5A48BD0", VA = "0x5A49BD0")]
	public int GetEye()
	{
		return default(int);
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x5A49C10", Offset = "0x5A48C10", VA = "0x5A49C10")]
	public string GetHair()
	{
		return null;
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x5A49D50", Offset = "0x5A48D50", VA = "0x5A49D50")]
	public TitanCustomSet()
	{
	}
}
