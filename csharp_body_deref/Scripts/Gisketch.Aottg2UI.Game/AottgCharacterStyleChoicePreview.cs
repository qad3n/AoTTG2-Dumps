using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200015E")]
internal static class AottgCharacterStyleChoicePreview
{
	[Token(Token = "0x40007EF")]
	private const string EffectRenderer = "profile-character-effect-preview";

	[Token(Token = "0x40007F0")]
	private const string FontRenderer = "profile-character-font-preview";

	[Token(Token = "0x40007F1")]
	private const string UiFont = "Aottg2";

	[Token(Token = "0x40007F2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] TwoGradient;

	[Token(Token = "0x40007F3")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] FourGradient;

	[Token(Token = "0x40007F4")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Color DarkSurface;

	[Token(Token = "0x40007F5")]
	[FieldOffset(Offset = "0x20")]
	private static bool _registered;

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x40D4350", Offset = "0x40D4350", VA = "0x40D4350")]
	public static void Register()
	{
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x40D6DF0", Offset = "0x40D6DF0", VA = "0x40D6DF0")]
	public static void UseEffectRenderer(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x40D6E40", Offset = "0x40D6E40", VA = "0x40D6E40")]
	public static void UseFontRenderer(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x40D73C0", Offset = "0x40D73C0", VA = "0x40D73C0")]
	private static void RenderEffect(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x40D82D0", Offset = "0x40D82D0", VA = "0x40D82D0")]
	private static void RenderFont(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x40D7680", Offset = "0x40D7680", VA = "0x40D7680")]
	private static AottgNameStyleChoicePreview Preview(GisketchChoiceOptionRenderContext context)
	{
		return null;
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x40D7A60", Offset = "0x40D7A60", VA = "0x40D7A60")]
	private static void SetFeedback(GisketchChoiceOptionRenderContext context, bool ownsColor)
	{
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x40D77B0", Offset = "0x40D77B0", VA = "0x40D77B0")]
	private static void ApplyDarkSurface(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x40D7D00", Offset = "0x40D7D00", VA = "0x40D7D00")]
	private static Color[] Parse(IList<string> colors)
	{
		return null;
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x40D84A0", Offset = "0x40D84A0", VA = "0x40D84A0")]
	private static Color Parse(string hex)
	{
		return default(Color);
	}
}
