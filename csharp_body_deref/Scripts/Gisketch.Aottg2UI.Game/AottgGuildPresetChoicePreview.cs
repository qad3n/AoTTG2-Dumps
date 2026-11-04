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

[Token(Token = "0x20002AB")]
internal static class AottgGuildPresetChoicePreview
{
	[Token(Token = "0x4000DD7")]
	private const string Renderer = "profile-character-guild-preset-preview";

	[Token(Token = "0x4000DD8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color DarkSurface;

	[Token(Token = "0x4000DD9")]
	[FieldOffset(Offset = "0x10")]
	private static bool _registered;

	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x1E128C0", Offset = "0x1E10EC0", VA = "0x181E128C0")]
	public static void Register()
	{
	}

	[Token(Token = "0x60010AA")]
	[Address(RVA = "0x1E12C70", Offset = "0x1E11270", VA = "0x181E12C70")]
	public static void UseRenderer(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x60010AB")]
	[Address(RVA = "0x1E129C0", Offset = "0x1E10FC0", VA = "0x181E129C0")]
	private static void Render(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x60010AC")]
	[Address(RVA = "0x1E12630", Offset = "0x1E10C30", VA = "0x181E12630")]
	private static void ApplyDarkSurface(GisketchChoiceOptionRenderContext context)
	{
	}
}
