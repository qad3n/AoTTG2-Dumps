// ==================== AoTTG2 cross-reference ====================
// Type: Map.BuiltinLevels
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/BuiltinLevels.c
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinLevels.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;

namespace Map;

[Token(Token = "0x2000263")]
internal class BuiltinLevels
{
	[Token(Token = "0x4000CEA")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _info;

	[Token(Token = "0x4000CEB")]
	[FieldOffset(Offset = "0x8")]
	public static string CustomMapFolderPath;

	[Token(Token = "0x4000CEC")]
	[FieldOffset(Offset = "0x10")]
	public static string CustomMapAutosaveFolderPath;

	[Token(Token = "0x4000CED")]
	[FieldOffset(Offset = "0x18")]
	public static string CustomLogicFolderPath;

	[Token(Token = "0x4000CEE")]
	[FieldOffset(Offset = "0x20")]
	public static string CustomAddonFolderPath;

	[Token(Token = "0x4000CEF")]
	[FieldOffset(Offset = "0x28")]
	public static string UseMapLogic;

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x3F9AA30", Offset = "0x3F9AA30", VA = "0x3F9AA30")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x3F9ABC0", Offset = "0x3F9ABC0", VA = "0x3F9ABC0")]
	public static string LoadMap(string category, string name)
	{
		return null;
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x3F9B130", Offset = "0x3F9B130", VA = "0x3F9B130")]
	public static string LoadAutosave(string name)
	{
		return null;
	}

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x3F9B200", Offset = "0x3F9B200", VA = "0x3F9B200")]
	public static string LoadLogic(string name)
	{
		return null;
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x3F9B5A0", Offset = "0x3F9B5A0", VA = "0x3F9B5A0")]
	public static bool IsLogicBuiltin(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x3F9B790", Offset = "0x3F9B790", VA = "0x3F9B790")]
	public static string[] GetMapCategories()
	{
		return null;
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x3F9BB00", Offset = "0x3F9BB00", VA = "0x3F9BB00")]
	public static string[] GetMapNames(string category)
	{
		return null;
	}

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x3F9C210", Offset = "0x3F9C210", VA = "0x3F9C210")]
	public static string[] GetAutosaveNames()
	{
		return null;
	}

	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x3F98A40", Offset = "0x3F98A40", VA = "0x3F98A40")]
	public static string LoadAddon(string name)
	{
		return null;
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x3F9C300", Offset = "0x3F9C300", VA = "0x3F9C300")]
	public static string[] GetAddonNames()
	{
		return null;
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x3F9C690", Offset = "0x3F9C690", VA = "0x3F9C690")]
	public static string[] GetBuiltinAddons()
	{
		return null;
	}

	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x3F989A0", Offset = "0x3F989A0", VA = "0x3F989A0")]
	public static bool IsAddonBuiltin(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x3F9CA70", Offset = "0x3F9CA70", VA = "0x3F9CA70")]
	public static string[] GetCustomAddons()
	{
		return null;
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x3F9CD00", Offset = "0x3F9CD00", VA = "0x3F9CD00")]
	public static void DeleteCustomMap(string name)
	{
	}

	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x3F9CDA0", Offset = "0x3F9CDA0", VA = "0x3F9CDA0")]
	public static void DeleteCustomLogic(string name)
	{
	}

	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x3F9CE70", Offset = "0x3F9CE70", VA = "0x3F9CE70")]
	public static void DeleteCustomAddon(string name)
	{
	}

	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x3F9CF10", Offset = "0x3F9CF10", VA = "0x3F9CF10")]
	public static void SaveCustomMap(string name, MapScript script)
	{
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x3F9CFD0", Offset = "0x3F9CFD0", VA = "0x3F9CFD0")]
	public static void AutosaveCustomMap(string name, MapScript script)
	{
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x3F9D090", Offset = "0x3F9D090", VA = "0x3F9D090")]
	public static void SaveCustomLogic(string name, string script)
	{
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x3F9D130", Offset = "0x3F9D130", VA = "0x3F9D130")]
	public static void SaveCustomAddon(string name, string script)
	{
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x3F9D1D0", Offset = "0x3F9D1D0", VA = "0x3F9D1D0")]
	public static string[] GetGameModes(string category, string mapName, bool hasMapLogic)
	{
		return null;
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x3F9E340", Offset = "0x3F9E340", VA = "0x3F9E340")]
	public static void LoadMiscSettings(string category, string mapName, string gameMode, InGameMiscSettings settings)
	{
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x3F9C070", Offset = "0x3F9C070", VA = "0x3F9C070")]
	private static string[] GetTxtFiles(string path)
	{
		return null;
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x3F9CB60", Offset = "0x3F9CB60", VA = "0x3F9CB60")]
	private static string[] GetClFiles(string path)
	{
		return null;
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x3F9DF70", Offset = "0x3F9DF70", VA = "0x3F9DF70")]
	public static string[] GetCustomModes()
	{
		return null;
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x3F9E980", Offset = "0x3F9E980", VA = "0x3F9E980")]
	private static Dictionary<string, JSONNode> GetMiscSettings(string category, string mapName, string gameMode)
	{
		return null;
	}

	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x3F9AE00", Offset = "0x3F9AE00", VA = "0x3F9AE00")]
	private static JSONNode GetMap(string category, string mapName)
	{
		return null;
	}

	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x3F9DDB0", Offset = "0x3F9DDB0", VA = "0x3F9DDB0")]
	private static JSONNode GetCategory(string category)
	{
		return null;
	}

	[Token(Token = "0x6000ECD")]
	[Address(RVA = "0x3F9EB60", Offset = "0x3F9EB60", VA = "0x3F9EB60")]
	private static JSONNode GetGameMode(string gameMode)
	{
		return null;
	}

	[Token(Token = "0x6000ECE")]
	[Address(RVA = "0x3F9ED20", Offset = "0x3F9ED20", VA = "0x3F9ED20")]
	private static void LoadSettings(Dictionary<string, JSONNode> current, JSONNode node)
	{
	}

	[Token(Token = "0x6000ECF")]
	[Address(RVA = "0x3F9EF30", Offset = "0x3F9EF30", VA = "0x3F9EF30")]
	public BuiltinLevels()
	{
	}
}
