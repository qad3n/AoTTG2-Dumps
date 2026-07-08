using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;

namespace Characters;

[Token(Token = "0x200049E")]
internal class CharacterData
{
	[Token(Token = "0x40014A1")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode HumanWeaponInfo;

	[Token(Token = "0x40014A2")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, JSONNode> TitanAIInfos;

	[Token(Token = "0x40014A3")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, Dictionary<string, TitanAttackInfo>> TitanAttackInfos;

	[Token(Token = "0x60031AF")]
	[Address(RVA = "0x3E9CAD0", Offset = "0x3E9CAD0", VA = "0x3E9CAD0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60031B0")]
	[Address(RVA = "0x3E9CE70", Offset = "0x3E9CE70", VA = "0x3E9CE70")]
	private static Dictionary<string, TitanAttackInfo> LoadTitanAttackInfos(JSONNode info, string keyframeFile)
	{
		return null;
	}

	[Token(Token = "0x60031B1")]
	[Address(RVA = "0x3E9D1D0", Offset = "0x3E9D1D0", VA = "0x3E9D1D0")]
	public static JSONNode GetTitanAI(GameDifficulty difficulty, string titanType)
	{
		return null;
	}

	[Token(Token = "0x60031B2")]
	[Address(RVA = "0x3E9D8E0", Offset = "0x3E9D8E0", VA = "0x3E9D8E0")]
	public static JSONNode GetShifterAI(GameDifficulty difficulty, string name)
	{
		return null;
	}

	[Token(Token = "0x60031B3")]
	[Address(RVA = "0x3E9D660", Offset = "0x3E9D660", VA = "0x3E9D660")]
	private static void CopyNode(JSONNode current, JSONNode copy)
	{
	}

	[Token(Token = "0x60031B4")]
	[Address(RVA = "0x3E9DBE0", Offset = "0x3E9DBE0", VA = "0x3E9DBE0")]
	public CharacterData()
	{
	}
}
