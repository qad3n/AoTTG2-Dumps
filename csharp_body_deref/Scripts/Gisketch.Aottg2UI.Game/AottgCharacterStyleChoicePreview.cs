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

[Token(Token = "0x2000190")]
internal static class AottgCharacterStyleChoicePreview
{
	[Token(Token = "0x40008B0")]
	private const string EffectRenderer = "profile-character-effect-preview";

	[Token(Token = "0x40008B1")]
	private const string FontRenderer = "profile-character-font-preview";

	[Token(Token = "0x40008B2")]
	private const string UiFont = "Aottg2";

	[Token(Token = "0x40008B3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] TwoGradient;

	[Token(Token = "0x40008B4")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] FourGradient;

	[Token(Token = "0x40008B5")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Color DarkSurface;

	[Token(Token = "0x40008B6")]
	[FieldOffset(Offset = "0x20")]
	private static bool _registered;

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x44066F0", Offset = "0x44066F0", VA = "0x44066F0")]
	public static void Register()
	{
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x4409F70", Offset = "0x4409F70", VA = "0x4409F70")]
	public static void UseEffectRenderer(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x4409FC0", Offset = "0x4409FC0", VA = "0x4409FC0")]
	public static void UseFontRenderer(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x440A540", Offset = "0x440A540", VA = "0x440A540")]
	private static void RenderEffect(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x440B450", Offset = "0x440B450", VA = "0x440B450")]
	private static void RenderFont(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x440A800", Offset = "0x440A800", VA = "0x440A800")]
	private static AottgNameStyleChoicePreview Preview(GisketchChoiceOptionRenderContext context)
	{
		return null;
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x440ABE0", Offset = "0x440ABE0", VA = "0x440ABE0")]
	private static void SetFeedback(GisketchChoiceOptionRenderContext context, bool ownsColor)
	{
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x440A930", Offset = "0x440A930", VA = "0x440A930")]
	private static void ApplyDarkSurface(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x440AE80", Offset = "0x440AE80", VA = "0x440AE80")]
	private static Color[] Parse(IList<string> colors)
	{
		return null;
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x440B620", Offset = "0x440B620", VA = "0x440B620")]
	private static Color Parse(string hex)
	{
		return default(Color);
	}
}
