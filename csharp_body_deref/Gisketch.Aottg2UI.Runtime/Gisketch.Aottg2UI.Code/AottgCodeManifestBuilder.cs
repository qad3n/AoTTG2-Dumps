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

[Token(Token = "0x2000078")]
public static class AottgCodeManifestBuilder
{
	[Token(Token = "0x600037E")]
	[Address(RVA = "0x18C32D0", Offset = "0x18C18D0", VA = "0x1818C32D0")]
	public static GisketchManifestDefinition Build(string selectedScreenId, GisketchThemeDefinition theme, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x18C2F50", Offset = "0x18C1550", VA = "0x1818C2F50")]
	public static GisketchManifestDefinition Build(AottgCodeCatalog catalog, string selectedScreenId, GisketchThemeDefinition theme, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x18C2BB0", Offset = "0x18C11B0", VA = "0x1818C2BB0")]
	private static GisketchOverlayDefinition[] BuildDialogs(AottgCodeCatalog catalog, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x6000381")]
	[Address(RVA = "0x18C2A50", Offset = "0x18C1050", VA = "0x1818C2A50")]
	public static GisketchOverlayDefinition BuildDialog(string id, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x18C28F0", Offset = "0x18C0EF0", VA = "0x1818C28F0")]
	public static GisketchOverlayDefinition BuildDialog(AottgCodeCatalog catalog, string id, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x18C2D80", Offset = "0x18C1380", VA = "0x1818C2D80")]
	private static GisketchOverlayDefinition[] BuildPopovers(AottgCodeCatalog catalog, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x6000384")]
	private static T Instance<T>(Type type)
	{
		return (T)null;
	}
}
