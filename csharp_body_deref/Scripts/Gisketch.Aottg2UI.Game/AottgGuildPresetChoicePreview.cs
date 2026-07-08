using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000173")]
internal static class AottgGuildPresetChoicePreview
{
	[Token(Token = "0x400086C")]
	private const string Renderer = "profile-character-guild-preset-preview";

	[Token(Token = "0x400086D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color DarkSurface;

	[Token(Token = "0x400086E")]
	[FieldOffset(Offset = "0x10")]
	private static bool _registered;

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x40E2EA0", Offset = "0x40E2EA0", VA = "0x40E2EA0")]
	public static void Register()
	{
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x40E5040", Offset = "0x40E5040", VA = "0x40E5040")]
	public static void UseRenderer(GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x40E8B00", Offset = "0x40E8B00", VA = "0x40E8B00")]
	private static void Render(GisketchChoiceOptionRenderContext context)
	{
	}

	[Token(Token = "0x6000879")]
	[Address(RVA = "0x40E8DA0", Offset = "0x40E8DA0", VA = "0x40E8DA0")]
	private static void ApplyDarkSurface(GisketchChoiceOptionRenderContext context)
	{
	}
}
