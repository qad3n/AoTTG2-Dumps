using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Localization;
using Gisketch.Aottg2UI.State;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x2000085")]
public sealed class GisketchBuildContext
{
	[Token(Token = "0x40002B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly GisketchManifestDefinition Manifest;

	[Token(Token = "0x40002BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly GisketchTheme Theme;

	[Token(Token = "0x40002BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly IGisketchLocalizer Localizer;

	[Token(Token = "0x40002BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly IGisketchActionHandler Actions;

	[Token(Token = "0x40002BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly GisketchUIState State;

	[Token(Token = "0x40002BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public readonly GisketchComponentRegistry Registry;

	[Token(Token = "0x40002BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public readonly Func<string, GisketchOverlayDefinition> DialogResolver;

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x3A072C0", Offset = "0x3A072C0", VA = "0x3A072C0")]
	public GisketchBuildContext(GisketchManifestDefinition manifest, GisketchTheme theme, IGisketchLocalizer localizer, IGisketchActionHandler actions, GisketchUIState state, [Optional] GisketchComponentRegistry registry, [Optional] Func<string, GisketchOverlayDefinition> dialogResolver)
	{
	}
}
