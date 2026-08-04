// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchBuildContext
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchBuildContext.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Localization;
using Gisketch.Aottg2UI.State;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x2000088")]
public sealed class GisketchBuildContext
{
	[Token(Token = "0x40002D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly GisketchManifestDefinition Manifest;

	[Token(Token = "0x40002D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly GisketchTheme Theme;

	[Token(Token = "0x40002D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly IGisketchLocalizer Localizer;

	[Token(Token = "0x40002D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly IGisketchActionHandler Actions;

	[Token(Token = "0x40002D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly GisketchUIState State;

	[Token(Token = "0x40002DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public readonly GisketchComponentRegistry Registry;

	[Token(Token = "0x40002DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public readonly Func<string, GisketchOverlayDefinition> DialogResolver;

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x3A73280", Offset = "0x3A73280", VA = "0x3A73280")]
	public GisketchBuildContext(GisketchManifestDefinition manifest, GisketchTheme theme, IGisketchLocalizer localizer, IGisketchActionHandler actions, GisketchUIState state, [Optional] GisketchComponentRegistry registry, [Optional] Func<string, GisketchOverlayDefinition> dialogResolver)
	{
	}
}
