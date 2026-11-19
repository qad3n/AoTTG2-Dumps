// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetChoicePreview.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000308")]
internal static class AottgGuildPresetChoicePreview
{
	[Token(Token = "0x4000F6C")]
	private const string Renderer = "profile-character-guild-preset-preview";

	[Token(Token = "0x4000F6D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color DarkSurface;

	[Token(Token = "0x4000F6E")]
	[FieldOffset(Offset = "0x10")]
	private static bool _registered;

	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x57F1940", Offset = "0x57F0940", VA = "0x57F1940")]
	public static void Register()
	{
	}

	[Token(Token = "0x60012FB")]
	[Address(RVA = "0x57F3630", Offset = "0x57F2630", VA = "0x57F3630")]
	public static void UseRenderer(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x57F6CD0", Offset = "0x57F5CD0", VA = "0x57F6CD0")]
	private static void Render(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x57F6F60", Offset = "0x57F5F60", VA = "0x57F6F60")]
	private static void ApplyDarkSurface(GisketchChoiceOptionRenderContext context)
	{
	}
}
