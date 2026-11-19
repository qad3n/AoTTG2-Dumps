// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditor.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002F6")]
internal sealed class AottgCharacterTextColorEditor : AottgComponent
{
	[Token(Token = "0x20002F7")]
	private readonly struct Options
	{
		[Token(Token = "0x4000F05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly string PickerId;

		[Token(Token = "0x4000F06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly string ColorsEnabledKey;

		[Token(Token = "0x4000F07")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly bool ColorsEnabled;

		[Token(Token = "0x4000F08")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly Action<GameObject> Imported;

		[Token(Token = "0x4000F09")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly string PreviewEffectType;

		[Token(Token = "0x4000F0A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly IList<string> PreviewEffectColors;

		[Token(Token = "0x4000F0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly string PreviewFont;

		[Token(Token = "0x600125F")]
		[Address(RVA = "0x57EB730", Offset = "0x57EA730", VA = "0x57EB730")]
		public Options(string pickerId, string colorsEnabledKey, bool colorsEnabled, Action<GameObject> imported, [Optional] string previewEffectType, [Optional] IList<string> previewEffectColors, [Optional] string previewFont)
		{
		}
	}

	[Token(Token = "0x4000EF8")]
	private const int MaxRawCharacters = 279;

	[Token(Token = "0x4000EF9")]
	private const string NodeType = "AottgCharacterTextColorEditor";

	[Token(Token = "0x4000EFA")]
	private const string InputId = "profile-character-text-color-editor-input";

	[Token(Token = "0x4000EFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Options> EditorOptions;

	[Token(Token = "0x4000EFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _value;

	[Token(Token = "0x4000EFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _pickerId;

	[Token(Token = "0x4000EFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _colorsEnabledKey;

	[Token(Token = "0x4000EFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _colorsEnabled;

	[Token(Token = "0x4000F00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private readonly bool _inputEnabled;

	[Token(Token = "0x4000F01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Action<GameObject> _imported;

	[Token(Token = "0x4000F02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _previewEffectType;

	[Token(Token = "0x4000F03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly IList<string> _previewEffectColors;

	[Token(Token = "0x4000F04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly string _previewFont;

	[Token(Token = "0x600125B")]
	[Address(RVA = "0x57EB020", Offset = "0x57EA020", VA = "0x57EB020")]
	static AottgCharacterTextColorEditor()
	{
	}

	[Token(Token = "0x600125C")]
	[Address(RVA = "0x57E2D90", Offset = "0x57E1D90", VA = "0x57E2D90")]
	public AottgCharacterTextColorEditor(string value, string pickerId, string colorsEnabledKey, bool colorsEnabled, [Optional][DefaultParameterValue(true)] bool inputEnabled, [Optional] Action<GameObject> imported, [Optional] string previewEffectType, [Optional] IList<string> previewEffectColors, [Optional] string previewFont)
	{
	}

	[Token(Token = "0x600125D")]
	[Address(RVA = "0x57EB150", Offset = "0x57EA150", VA = "0x57EB150", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600125E")]
	[Address(RVA = "0x57EB7D0", Offset = "0x57EA7D0", VA = "0x57EB7D0")]
	private static bool BuildEditor(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}
