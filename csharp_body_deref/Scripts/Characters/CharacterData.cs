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

[Token(Token = "0x20004E3")]
internal class CharacterData
{
	[Token(Token = "0x40015B2")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode HumanWeaponInfo;

	[Token(Token = "0x40015B3")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, JSONNode> TitanAIInfos;

	[Token(Token = "0x40015B4")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, Dictionary<string, TitanAttackInfo>> TitanAttackInfos;

	[Token(Token = "0x60033BD")]
	[Address(RVA = "0x41A9370", Offset = "0x41A9370", VA = "0x41A9370")]
	public static void Init()
	{
	}

	[Token(Token = "0x60033BE")]
	[Address(RVA = "0x41A9710", Offset = "0x41A9710", VA = "0x41A9710")]
	private static Dictionary<string, TitanAttackInfo> LoadTitanAttackInfos(JSONNode info, string keyframeFile)
	{
		return null;
	}

	[Token(Token = "0x60033BF")]
	[Address(RVA = "0x41A9A70", Offset = "0x41A9A70", VA = "0x41A9A70")]
	public static JSONNode GetTitanAI(GameDifficulty difficulty, string titanType)
	{
		return null;
	}

	[Token(Token = "0x60033C0")]
	[Address(RVA = "0x41AA180", Offset = "0x41AA180", VA = "0x41AA180")]
	public static JSONNode GetShifterAI(GameDifficulty difficulty, string name)
	{
		return null;
	}

	[Token(Token = "0x60033C1")]
	[Address(RVA = "0x41A9F00", Offset = "0x41A9F00", VA = "0x41A9F00")]
	private static void CopyNode(JSONNode current, JSONNode copy)
	{
	}

	[Token(Token = "0x60033C2")]
	[Address(RVA = "0x41AA480", Offset = "0x41AA480", VA = "0x41AA480")]
	public CharacterData()
	{
	}
}
