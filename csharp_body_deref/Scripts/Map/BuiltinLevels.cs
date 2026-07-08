using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;

namespace Map;

[Token(Token = "0x200022A")]
internal class BuiltinLevels
{
	[Token(Token = "0x4000C03")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _info;

	[Token(Token = "0x4000C04")]
	[FieldOffset(Offset = "0x8")]
	public static string CustomMapFolderPath;

	[Token(Token = "0x4000C05")]
	[FieldOffset(Offset = "0x10")]
	public static string CustomMapAutosaveFolderPath;

	[Token(Token = "0x4000C06")]
	[FieldOffset(Offset = "0x18")]
	public static string CustomLogicFolderPath;

	[Token(Token = "0x4000C07")]
	[FieldOffset(Offset = "0x20")]
	public static string CustomAddonFolderPath;

	[Token(Token = "0x4000C08")]
	[FieldOffset(Offset = "0x28")]
	public static string UseMapLogic;

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x414B760", Offset = "0x414B760", VA = "0x414B760")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x414B8F0", Offset = "0x414B8F0", VA = "0x414B8F0")]
	public static string LoadMap(string category, string name)
	{
		return null;
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x414BE60", Offset = "0x414BE60", VA = "0x414BE60")]
	public static string LoadAutosave(string name)
	{
		return null;
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x414BF30", Offset = "0x414BF30", VA = "0x414BF30")]
	public static string LoadLogic(string name)
	{
		return null;
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x414C2D0", Offset = "0x414C2D0", VA = "0x414C2D0")]
	public static bool IsLogicBuiltin(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x414C4C0", Offset = "0x414C4C0", VA = "0x414C4C0")]
	public static string[] GetMapCategories()
	{
		return null;
	}

	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x414C830", Offset = "0x414C830", VA = "0x414C830")]
	public static string[] GetMapNames(string category)
	{
		return null;
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x414CF40", Offset = "0x414CF40", VA = "0x414CF40")]
	public static string[] GetAutosaveNames()
	{
		return null;
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x414D030", Offset = "0x414D030", VA = "0x414D030")]
	public static string LoadAddon(string name)
	{
		return null;
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x414D2D0", Offset = "0x414D2D0", VA = "0x414D2D0")]
	private static string LoadBuiltinAddon(string name)
	{
		return null;
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x414D6C0", Offset = "0x414D6C0", VA = "0x414D6C0")]
	public static string[] GetAddonNames()
	{
		return null;
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x414DA50", Offset = "0x414DA50", VA = "0x414DA50")]
	public static string[] GetBuiltinAddons()
	{
		return null;
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x414D230", Offset = "0x414D230", VA = "0x414D230")]
	public static bool IsAddonBuiltin(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x414DE30", Offset = "0x414DE30", VA = "0x414DE30")]
	public static string[] GetCustomAddons()
	{
		return null;
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x414E690", Offset = "0x414E690", VA = "0x414E690")]
	public static void DeleteCustomMap(string name)
	{
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x414E730", Offset = "0x414E730", VA = "0x414E730")]
	public static void DeleteCustomLogic(string name)
	{
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x414E800", Offset = "0x414E800", VA = "0x414E800")]
	public static void DeleteCustomAddon(string name)
	{
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x414E910", Offset = "0x414E910", VA = "0x414E910")]
	public static void SaveCustomMap(string name, MapScript script)
	{
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x414E9D0", Offset = "0x414E9D0", VA = "0x414E9D0")]
	public static void AutosaveCustomMap(string name, MapScript script)
	{
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x414EA90", Offset = "0x414EA90", VA = "0x414EA90")]
	public static void SaveCustomLogic(string name, string script)
	{
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x414EB30", Offset = "0x414EB30", VA = "0x414EB30")]
	public static void SaveCustomAddon(string name, string script)
	{
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x414EBD0", Offset = "0x414EBD0", VA = "0x414EBD0")]
	public static string[] GetGameModes(string category, string mapName, bool hasMapLogic)
	{
		return null;
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x414FD40", Offset = "0x414FD40", VA = "0x414FD40")]
	public static void LoadMiscSettings(string category, string mapName, string gameMode, InGameMiscSettings settings)
	{
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x414CDA0", Offset = "0x414CDA0", VA = "0x414CDA0")]
	private static string[] GetTxtFiles(string path)
	{
		return null;
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x414E4F0", Offset = "0x414E4F0", VA = "0x414E4F0")]
	private static string[] GetClFiles(string path)
	{
		return null;
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x414E350", Offset = "0x414E350", VA = "0x414E350")]
	private static string[] GetAddonFiles(string path)
	{
		return null;
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x414F970", Offset = "0x414F970", VA = "0x414F970")]
	public static string[] GetCustomModes()
	{
		return null;
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x4150380", Offset = "0x4150380", VA = "0x4150380")]
	private static Dictionary<string, JSONNode> GetMiscSettings(string category, string mapName, string gameMode)
	{
		return null;
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x414BB30", Offset = "0x414BB30", VA = "0x414BB30")]
	private static JSONNode GetMap(string category, string mapName)
	{
		return null;
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x414F7B0", Offset = "0x414F7B0", VA = "0x414F7B0")]
	private static JSONNode GetCategory(string category)
	{
		return null;
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x4150560", Offset = "0x4150560", VA = "0x4150560")]
	private static JSONNode GetGameMode(string gameMode)
	{
		return null;
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x4150720", Offset = "0x4150720", VA = "0x4150720")]
	private static void LoadSettings(Dictionary<string, JSONNode> current, JSONNode node)
	{
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x4150930", Offset = "0x4150930", VA = "0x4150930")]
	public BuiltinLevels()
	{
	}
}
