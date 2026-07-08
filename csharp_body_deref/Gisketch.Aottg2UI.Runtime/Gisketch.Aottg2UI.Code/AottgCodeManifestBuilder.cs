using System;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000062")]
public static class AottgCodeManifestBuilder
{
	[Token(Token = "0x6000292")]
	[Address(RVA = "0x39F2750", Offset = "0x39F2750", VA = "0x39F2750")]
	public static GisketchManifestDefinition Build(string selectedScreenId, GisketchThemeDefinition theme, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x39F2780", Offset = "0x39F2780", VA = "0x39F2780")]
	public static GisketchManifestDefinition Build(AottgCodeCatalog catalog, string selectedScreenId, GisketchThemeDefinition theme, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x39F2BD0", Offset = "0x39F2BD0", VA = "0x39F2BD0")]
	private static GisketchOverlayDefinition[] BuildDialogs(AottgCodeCatalog catalog, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x39F32C0", Offset = "0x39F32C0", VA = "0x39F32C0")]
	public static GisketchOverlayDefinition BuildDialog(string id, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x39F32F0", Offset = "0x39F32F0", VA = "0x39F32F0")]
	public static GisketchOverlayDefinition BuildDialog(AottgCodeCatalog catalog, string id, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x39F2DD0", Offset = "0x39F2DD0", VA = "0x39F2DD0")]
	private static GisketchOverlayDefinition[] BuildPopovers(AottgCodeCatalog catalog, AottgActionRegistry actions)
	{
		return null;
	}

	[Token(Token = "0x6000298")]
	private static T Instance<T>(Type type)
	{
		return (T)null;
	}
}
