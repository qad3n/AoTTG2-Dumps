// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapVersionConverter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapVersionConverter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x200041F")]
public static class MapVersionConverter
{
	[Token(Token = "0x4001539")]
	public const string CurrentVersion = "1.1";

	[Token(Token = "0x400153A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<IMapVersionConverter> Converters;

	[Token(Token = "0x170002C1")]
	public static string[] SupportedVersions
	{
		[Token(Token = "0x6001A2B")]
		[Address(RVA = "0x58A50D0", Offset = "0x58A40D0", VA = "0x58A50D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001A2C")]
	[Address(RVA = "0x58A3000", Offset = "0x58A2000", VA = "0x58A3000")]
	public static MapVersionConversionResult UpgradeToCurrent(MapScript mapScript)
	{
		return null;
	}

	[Token(Token = "0x6001A2D")]
	[Address(RVA = "0x58A52E0", Offset = "0x58A42E0", VA = "0x58A52E0")]
	public static MapVersionConversionResult Downgrade(MapScript mapScript, string targetVersion)
	{
		return null;
	}
}
