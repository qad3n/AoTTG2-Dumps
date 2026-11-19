// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchBuildContext
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchBuildContext.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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

[Token(Token = "0x20000A7")]
public sealed class GisketchBuildContext
{
	[Token(Token = "0x400038D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly GisketchManifestDefinition Manifest;

	[Token(Token = "0x400038E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly GisketchTheme Theme;

	[Token(Token = "0x400038F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly IGisketchLocalizer Localizer;

	[Token(Token = "0x4000390")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly IGisketchActionHandler Actions;

	[Token(Token = "0x4000391")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly GisketchUIState State;

	[Token(Token = "0x4000392")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public readonly GisketchComponentRegistry Registry;

	[Token(Token = "0x4000393")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public readonly Func<string, GisketchOverlayDefinition> DialogResolver;

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x527B520", Offset = "0x527A520", VA = "0x527B520")]
	public GisketchBuildContext(GisketchManifestDefinition manifest, GisketchTheme theme, IGisketchLocalizer localizer, IGisketchActionHandler actions, GisketchUIState state, [Optional] GisketchComponentRegistry registry, [Optional] Func<string, GisketchOverlayDefinition> dialogResolver)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchBuildContext.c (Gisketch.Aottg2UI.Building.GisketchBuildContext$$.ctor): 1 lines keep C-only constructs
		if (Il2CppMethodInitialized_07542aac == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07542aac = true;
		}
		base();
		this.Manifest = manifest;
		if (theme == null) {
			theme = GisketchTheme.Default;
		}
		this.Theme = theme;
		this.Localizer = localizer;
		this.Actions = actions;
		this.State = state;
		if (registry == null) {
			registry = GisketchComponentRegistry.Default;
		}
		this.Registry = registry;
		this.DialogResolver = dialogResolver;
		return;
	}
}
