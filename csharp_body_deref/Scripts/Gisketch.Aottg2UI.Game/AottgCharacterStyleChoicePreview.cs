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

[Token(Token = "0x2000296")]
internal static class AottgCharacterStyleChoicePreview
{
	[Token(Token = "0x4000D53")]
	private const string EffectRenderer = "profile-character-effect-preview";

	[Token(Token = "0x4000D54")]
	private const string FontRenderer = "profile-character-font-preview";

	[Token(Token = "0x4000D55")]
	private const string UiFont = "Aottg2";

	[Token(Token = "0x4000D56")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] TwoGradient;

	[Token(Token = "0x4000D57")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] FourGradient;

	[Token(Token = "0x4000D58")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Color DarkSurface;

	[Token(Token = "0x4000D59")]
	[FieldOffset(Offset = "0x20")]
	private static bool _registered;

	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x1DFD320", Offset = "0x1DFB920", VA = "0x181DFD320")]
	public static void Register()
	{
	}

	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x1DFDB80", Offset = "0x1DFC180", VA = "0x181DFDB80")]
	public static void UseEffectRenderer(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x6000FDB")]
	[Address(RVA = "0x1DFDBE0", Offset = "0x1DFC1E0", VA = "0x181DFDBE0")]
	public static void UseFontRenderer(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x1DFD470", Offset = "0x1DFBA70", VA = "0x181DFD470")]
	private static void RenderEffect(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x1DFD8A0", Offset = "0x1DFBEA0", VA = "0x181DFD8A0")]
	private static void RenderFont(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x1DFD200", Offset = "0x1DFB800", VA = "0x181DFD200")]
	private static AottgNameStyleChoicePreview Preview(GisketchChoiceOptionRenderContext context)
	{
		return null;
	}

	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x1DFDA90", Offset = "0x1DFC090", VA = "0x181DFDA90")]
	private static void SetFeedback(GisketchChoiceOptionRenderContext context, bool ownsColor)
	{
	}

	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x1DFCCD0", Offset = "0x1DFB2D0", VA = "0x181DFCCD0")]
	private static void ApplyDarkSurface(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x1DFCF60", Offset = "0x1DFB560", VA = "0x181DFCF60")]
	private static Color[] Parse(IList<string> colors)
	{
		return null;
	}

	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x1DFD1A0", Offset = "0x1DFB7A0", VA = "0x181DFD1A0")]
	private static Color Parse(string hex)
	{
		return default(Color);
	}
}
