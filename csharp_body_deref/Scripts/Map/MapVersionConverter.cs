// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapVersionConverter
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapVersionConverter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x20003C0")]
public static class MapVersionConverter
{
	[Token(Token = "0x4001399")]
	public const string CurrentVersion = "1.1";

	[Token(Token = "0x400139A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<IMapVersionConverter> Converters;

	[Token(Token = "0x17000280")]
	public static string[] SupportedVersions
	{
		[Token(Token = "0x60017B4")]
		[Address(RVA = "0x1EDE130", Offset = "0x1EDC730", VA = "0x181EDE130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017B5")]
	[Address(RVA = "0x1EDDC40", Offset = "0x1EDC240", VA = "0x181EDDC40")]
	public static MapVersionConversionResult UpgradeToCurrent(MapScript mapScript)
	{
		return null;
	}

	[Token(Token = "0x60017B6")]
	[Address(RVA = "0x1EDD690", Offset = "0x1EDBC90", VA = "0x181EDD690")]
	public static MapVersionConversionResult Downgrade(MapScript mapScript, string targetVersion)
	{
		return null;
	}
}
