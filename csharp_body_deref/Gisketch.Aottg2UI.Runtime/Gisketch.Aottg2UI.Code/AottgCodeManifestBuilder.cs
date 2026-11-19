// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgCodeManifestBuilder.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200007E")]
public static class AottgCodeManifestBuilder
{
	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x5263830", Offset = "0x5262830", VA = "0x5263830")]
	public static GisketchManifestDefinition Build(string selectedScreenId, GisketchThemeDefinition theme, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x5263860", Offset = "0x5262860", VA = "0x5263860")]
	public static GisketchManifestDefinition Build(AottgCodeCatalog catalog, string selectedScreenId, GisketchThemeDefinition theme, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x5263CD0", Offset = "0x5262CD0", VA = "0x5263CD0")]
	private static GisketchOverlayDefinition[] BuildDialogs(AottgCodeCatalog catalog, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x5264410", Offset = "0x5263410", VA = "0x5264410")]
	public static GisketchOverlayDefinition BuildDialog(string id, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x5264440", Offset = "0x5263440", VA = "0x5264440")]
	public static GisketchOverlayDefinition BuildDialog(AottgCodeCatalog catalog, string id, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x5263EE0", Offset = "0x5262EE0", VA = "0x5263EE0")]
	private static GisketchOverlayDefinition[] BuildPopovers(AottgCodeCatalog catalog, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x60003CF")]
	private static T Instance<T>(Type type)
	{
		return (T)null;
	}
}
