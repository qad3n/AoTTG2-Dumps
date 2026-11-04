// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CharacterData
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/CharacterData.c
// Prior real C# source (older reference): Assets/Scripts/Characters/CharacterData.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;

namespace Characters;

[Token(Token = "0x200063C")]
internal class CharacterData
{
	[Token(Token = "0x4001C24")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode HumanWeaponInfo;

	[Token(Token = "0x4001C25")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, JSONNode> TitanAIInfos;

	[Token(Token = "0x4001C26")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, Dictionary<string, TitanAttackInfo>> TitanAttackInfos;

	[Token(Token = "0x6003D9F")]
	[Address(RVA = "0x2113F70", Offset = "0x2112570", VA = "0x182113F70")]
	public static void Init()
	{
	}

	[Token(Token = "0x6003DA0")]
	[Address(RVA = "0x21142F0", Offset = "0x21128F0", VA = "0x1821142F0")]
	private static Dictionary<string, TitanAttackInfo> LoadTitanAttackInfos(JSONNode info, string keyframeFile)
	{
		return null;
	}

	[Token(Token = "0x6003DA1")]
	[Address(RVA = "0x21139C0", Offset = "0x2111FC0", VA = "0x1821139C0")]
	public static JSONNode GetTitanAI(GameDifficulty difficulty, string titanType)
	{
		return null;
	}

	[Token(Token = "0x6003DA2")]
	[Address(RVA = "0x21136C0", Offset = "0x2111CC0", VA = "0x1821136C0")]
	public static JSONNode GetShifterAI(GameDifficulty difficulty, string name)
	{
		return null;
	}

	[Token(Token = "0x6003DA3")]
	[Address(RVA = "0x21134D0", Offset = "0x2111AD0", VA = "0x1821134D0")]
	private static void CopyNode(JSONNode current, JSONNode copy)
	{
	}

	[Token(Token = "0x6003DA4")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CharacterData()
	{
	}
}
