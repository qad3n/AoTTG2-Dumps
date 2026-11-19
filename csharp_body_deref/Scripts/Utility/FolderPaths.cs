// ==================== AoTTG2 cross-reference ====================
// Type: Utility.FolderPaths
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Utility/FolderPaths.c
// Prior real C# source (older reference): Assets/Scripts/Utility/FolderPaths.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x200092A")]
internal class FolderPaths
{
	[Token(Token = "0x4002E23")]
	[FieldOffset(Offset = "0x0")]
	public static string Documents;

	[Token(Token = "0x4002E24")]
	[FieldOffset(Offset = "0x8")]
	public static string StreamingAssetsPath;

	[Token(Token = "0x4002E25")]
	[FieldOffset(Offset = "0x10")]
	public static string LanguagesPath;

	[Token(Token = "0x4002E26")]
	[FieldOffset(Offset = "0x18")]
	public static string PresetsPath;

	[Token(Token = "0x4002E27")]
	[FieldOffset(Offset = "0x20")]
	public static string UIThemesPath;

	[Token(Token = "0x4002E28")]
	[FieldOffset(Offset = "0x28")]
	public static string Settings;

	[Token(Token = "0x4002E29")]
	[FieldOffset(Offset = "0x30")]
	public static string Snapshots;

	[Token(Token = "0x4002E2A")]
	[FieldOffset(Offset = "0x38")]
	public static string GameProgress;

	[Token(Token = "0x4002E2B")]
	[FieldOffset(Offset = "0x40")]
	public static string PersistentData;

	[Token(Token = "0x4002E2C")]
	[FieldOffset(Offset = "0x48")]
	public static string CustomLogic;

	[Token(Token = "0x4002E2D")]
	[FieldOffset(Offset = "0x50")]
	public static string CustomAddon;

	[Token(Token = "0x4002E2E")]
	[FieldOffset(Offset = "0x58")]
	public static string CustomMap;

	[Token(Token = "0x4002E2F")]
	[FieldOffset(Offset = "0x60")]
	public static string CustomMapAutosave;

	[Token(Token = "0x4002E30")]
	[FieldOffset(Offset = "0x68")]
	public static string CustomMapBackups;

	[Token(Token = "0x4002E31")]
	[FieldOffset(Offset = "0x70")]
	public static string CustomAssetsLocal;

	[Token(Token = "0x4002E32")]
	[FieldOffset(Offset = "0x78")]
	public static string CustomAssetsWeb;

	[Token(Token = "0x4002E33")]
	[FieldOffset(Offset = "0x80")]
	public static string CharacterPreviews;

	[Token(Token = "0x4002E34")]
	[FieldOffset(Offset = "0x88")]
	public static string CustomControlSkins;

	[Token(Token = "0x4002E35")]
	[FieldOffset(Offset = "0x90")]
	public static string CustomLocale;

	[Token(Token = "0x17000F02")]
	public static bool IsDocumentsWritable
	{
		[Token(Token = "0x6005692")]
		[Address(RVA = "0x5CEDC60", Offset = "0x5CECC60", VA = "0x5CEDC60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005693")]
		[Address(RVA = "0x5CEDCD0", Offset = "0x5CECCD0", VA = "0x5CEDCD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6005694")]
	[Address(RVA = "0x5CEDD30", Offset = "0x5CECD30", VA = "0x5CEDD30")]
	public static void CheckDocumentsWritable()
	{
	}

	[Token(Token = "0x6005695")]
	[Address(RVA = "0x5CEE170", Offset = "0x5CED170", VA = "0x5CEE170")]
	public static void TryCreateDirectory(string path)
	{
	}

	[Token(Token = "0x6005696")]
	[Address(RVA = "0x5CEE2F0", Offset = "0x5CED2F0", VA = "0x5CEE2F0")]
	public FolderPaths()
	{
	}
}
