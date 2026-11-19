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

[Token(Token = "0x200069B")]
internal class CharacterData
{
	[Token(Token = "0x4001DCB")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode HumanWeaponInfo;

	[Token(Token = "0x4001DCC")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, JSONNode> TitanAIInfos;

	[Token(Token = "0x4001DCD")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, Dictionary<string, TitanAttackInfo>> TitanAttackInfos;

	[Token(Token = "0x6004031")]
	[Address(RVA = "0x5AE1A60", Offset = "0x5AE0A60", VA = "0x5AE1A60")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004032")]
	[Address(RVA = "0x5AE1E00", Offset = "0x5AE0E00", VA = "0x5AE1E00")]
	private static Dictionary<string, TitanAttackInfo> LoadTitanAttackInfos(JSONNode info, string keyframeFile)
	{
		return null;
	}

	[Token(Token = "0x6004033")]
	[Address(RVA = "0x5AE2110", Offset = "0x5AE1110", VA = "0x5AE2110")]
	public static JSONNode GetTitanAI(GameDifficulty difficulty, string titanType)
	{
		return null;
	}

	[Token(Token = "0x6004034")]
	[Address(RVA = "0x5AE2910", Offset = "0x5AE1910", VA = "0x5AE2910")]
	public static JSONNode GetShifterAI(GameDifficulty difficulty, string name)
	{
		return null;
	}

	[Token(Token = "0x6004035")]
	[Address(RVA = "0x5AE26F0", Offset = "0x5AE16F0", VA = "0x5AE26F0")]
	private static void CopyNode(JSONNode current, JSONNode copy)
	{
	}

	[Token(Token = "0x6004036")]
	[Address(RVA = "0x5AE2C10", Offset = "0x5AE1C10", VA = "0x5AE2C10")]
	public CharacterData()
	{
	}
}
