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

[Token(Token = "0x2000194")]
internal sealed class AottgCharacterTextColorEditor : AottgComponent
{
	[Token(Token = "0x2000195")]
	private readonly struct Options
	{
		[Token(Token = "0x40008CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly string PickerId;

		[Token(Token = "0x40008CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly string ColorsEnabledKey;

		[Token(Token = "0x40008CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly bool ColorsEnabled;

		[Token(Token = "0x40008CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly Action<GameObject> Imported;

		[Token(Token = "0x40008CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly string PreviewEffectType;

		[Token(Token = "0x40008D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly IList<string> PreviewEffectColors;

		[Token(Token = "0x40008D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly string PreviewFont;

		[Token(Token = "0x6000958")]
		[Address(RVA = "0x440EA30", Offset = "0x440EA30", VA = "0x440EA30")]
		public Options(string pickerId, string colorsEnabledKey, bool colorsEnabled, Action<GameObject> imported, [Optional] string previewEffectType, [Optional] IList<string> previewEffectColors, [Optional] string previewFont)
		{
		}
	}

	[Token(Token = "0x40008BE")]
	private const int MaxRawCharacters = 279;

	[Token(Token = "0x40008BF")]
	private const string NodeType = "AottgCharacterTextColorEditor";

	[Token(Token = "0x40008C0")]
	private const string InputId = "profile-character-text-color-editor-input";

	[Token(Token = "0x40008C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Options> EditorOptions;

	[Token(Token = "0x40008C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _value;

	[Token(Token = "0x40008C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _pickerId;

	[Token(Token = "0x40008C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _colorsEnabledKey;

	[Token(Token = "0x40008C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _colorsEnabled;

	[Token(Token = "0x40008C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private readonly bool _inputEnabled;

	[Token(Token = "0x40008C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Action<GameObject> _imported;

	[Token(Token = "0x40008C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _previewEffectType;

	[Token(Token = "0x40008C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly IList<string> _previewEffectColors;

	[Token(Token = "0x40008CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly string _previewFont;

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x440E350", Offset = "0x440E350", VA = "0x440E350")]
	static AottgCharacterTextColorEditor()
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x4406870", Offset = "0x4406870", VA = "0x4406870")]
	public AottgCharacterTextColorEditor(string value, string pickerId, string colorsEnabledKey, bool colorsEnabled, [Optional][DefaultParameterValue(true)] bool inputEnabled, [Optional] Action<GameObject> imported, [Optional] string previewEffectType, [Optional] IList<string> previewEffectColors, [Optional] string previewFont)
	{
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x440E480", Offset = "0x440E480", VA = "0x440E480", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x440EAD0", Offset = "0x440EAD0", VA = "0x440EAD0")]
	private static bool BuildEditor(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}
