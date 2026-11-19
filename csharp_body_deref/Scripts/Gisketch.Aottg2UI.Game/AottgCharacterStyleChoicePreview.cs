// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterStyleChoicePreview.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002F2")]
internal static class AottgCharacterStyleChoicePreview
{
	[Token(Token = "0x4000EEA")]
	private const string EffectRenderer = "profile-character-effect-preview";

	[Token(Token = "0x4000EEB")]
	private const string FontRenderer = "profile-character-font-preview";

	[Token(Token = "0x4000EEC")]
	private const string UiFont = "Aottg2";

	[Token(Token = "0x4000EED")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] TwoGradient;

	[Token(Token = "0x4000EEE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] FourGradient;

	[Token(Token = "0x4000EEF")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Color DarkSurface;

	[Token(Token = "0x4000EF0")]
	[FieldOffset(Offset = "0x20")]
	private static bool _registered;

	[Token(Token = "0x6001229")]
	[Address(RVA = "0x57E2C10", Offset = "0x57E1C10", VA = "0x57E2C10")]
	public static void Register()
	{
	}

	[Token(Token = "0x600122A")]
	[Address(RVA = "0x57E6800", Offset = "0x57E5800", VA = "0x57E6800")]
	public static void UseEffectRenderer(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x57E6850", Offset = "0x57E5850", VA = "0x57E6850")]
	public static void UseFontRenderer(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x57E6DF0", Offset = "0x57E5DF0", VA = "0x57E6DF0")]
	private static void RenderEffect(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x600122D")]
	[Address(RVA = "0x57E7BF0", Offset = "0x57E6BF0", VA = "0x57E7BF0")]
	private static void RenderFont(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x57E70D0", Offset = "0x57E60D0", VA = "0x57E70D0")]
	private static AottgNameStyleChoicePreview Preview(GisketchChoiceOptionRenderContext context)
	{
		return null;
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x57E74A0", Offset = "0x57E64A0", VA = "0x57E74A0")]
	private static void SetFeedback(GisketchChoiceOptionRenderContext context, bool ownsColor)
	{
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x57E7200", Offset = "0x57E6200", VA = "0x57E7200")]
	private static void ApplyDarkSurface(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x6001231")]
	[Address(RVA = "0x57E7740", Offset = "0x57E6740", VA = "0x57E7740")]
	private static Color[] Parse(IList<string> colors)
	{
		return null;
	}

	[Token(Token = "0x6001232")]
	[Address(RVA = "0x57E7DC0", Offset = "0x57E6DC0", VA = "0x57E7DC0")]
	private static Color Parse(string hex)
	{
		return default(Color);
	}
}
