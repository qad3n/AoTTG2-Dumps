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

[Token(Token = "0x200029A")]
internal sealed class AottgCharacterTextColorEditor : AottgComponent
{
	[Token(Token = "0x200029B")]
	private readonly struct Options
	{
		[Token(Token = "0x4000D6E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly string PickerId;

		[Token(Token = "0x4000D6F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly string ColorsEnabledKey;

		[Token(Token = "0x4000D70")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly bool ColorsEnabled;

		[Token(Token = "0x4000D71")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly Action<GameObject> Imported;

		[Token(Token = "0x4000D72")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly string PreviewEffectType;

		[Token(Token = "0x4000D73")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly IList<string> PreviewEffectColors;

		[Token(Token = "0x4000D74")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly string PreviewFont;

		[Token(Token = "0x600100F")]
		[Address(RVA = "0x1E0BC10", Offset = "0x1E0A210", VA = "0x181E0BC10")]
		public Options(string pickerId, string colorsEnabledKey, bool colorsEnabled, Action<GameObject> imported, [Optional] string previewEffectType, [Optional] IList<string> previewEffectColors, [Optional] string previewFont)
		{
		}
	}

	[Token(Token = "0x4000D61")]
	private const int MaxRawCharacters = 279;

	[Token(Token = "0x4000D62")]
	private const string NodeType = "AottgCharacterTextColorEditor";

	[Token(Token = "0x4000D63")]
	private const string InputId = "profile-character-text-color-editor-input";

	[Token(Token = "0x4000D64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Options> EditorOptions;

	[Token(Token = "0x4000D65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _value;

	[Token(Token = "0x4000D66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _pickerId;

	[Token(Token = "0x4000D67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _colorsEnabledKey;

	[Token(Token = "0x4000D68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _colorsEnabled;

	[Token(Token = "0x4000D69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private readonly bool _inputEnabled;

	[Token(Token = "0x4000D6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Action<GameObject> _imported;

	[Token(Token = "0x4000D6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _previewEffectType;

	[Token(Token = "0x4000D6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly IList<string> _previewEffectColors;

	[Token(Token = "0x4000D6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly string _previewFont;

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x1E04300", Offset = "0x1E02900", VA = "0x181E04300")]
	static AottgCharacterTextColorEditor()
	{
	}

	[Token(Token = "0x600100C")]
	[Address(RVA = "0x1E04430", Offset = "0x1E02A30", VA = "0x181E04430")]
	public AottgCharacterTextColorEditor(string value, string pickerId, string colorsEnabledKey, bool colorsEnabled, [Optional][DefaultParameterValue(true)] bool inputEnabled, [Optional] Action<GameObject> imported, [Optional] string previewEffectType, [Optional] IList<string> previewEffectColors, [Optional] string previewFont)
	{
	}

	[Token(Token = "0x600100D")]
	[Address(RVA = "0x1E03CE0", Offset = "0x1E022E0", VA = "0x181E03CE0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x1E03910", Offset = "0x1E01F10", VA = "0x181E03910")]
	private static bool BuildEditor(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}
