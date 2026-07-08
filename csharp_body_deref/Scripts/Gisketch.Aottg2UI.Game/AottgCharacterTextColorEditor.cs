using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000162")]
internal sealed class AottgCharacterTextColorEditor : AottgComponent
{
	[Token(Token = "0x2000163")]
	private readonly struct Options
	{
		[Token(Token = "0x400080A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly string PickerId;

		[Token(Token = "0x400080B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly string ColorsEnabledKey;

		[Token(Token = "0x400080C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly bool ColorsEnabled;

		[Token(Token = "0x400080D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly Action<GameObject> Imported;

		[Token(Token = "0x400080E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly string PreviewEffectType;

		[Token(Token = "0x400080F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly IList<string> PreviewEffectColors;

		[Token(Token = "0x4000810")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly string PreviewFont;

		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x40DB960", Offset = "0x40DB960", VA = "0x40DB960")]
		public Options(string pickerId, string colorsEnabledKey, bool colorsEnabled, Action<GameObject> imported, [Optional] string previewEffectType, [Optional] IList<string> previewEffectColors, [Optional] string previewFont)
		{
		}
	}

	[Token(Token = "0x40007FD")]
	private const int MaxRawCharacters = 279;

	[Token(Token = "0x40007FE")]
	private const string NodeType = "AottgCharacterTextColorEditor";

	[Token(Token = "0x40007FF")]
	private const string InputId = "profile-character-text-color-editor-input";

	[Token(Token = "0x4000800")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Options> EditorOptions;

	[Token(Token = "0x4000801")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _value;

	[Token(Token = "0x4000802")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _pickerId;

	[Token(Token = "0x4000803")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _colorsEnabledKey;

	[Token(Token = "0x4000804")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _colorsEnabled;

	[Token(Token = "0x4000805")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private readonly bool _inputEnabled;

	[Token(Token = "0x4000806")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Action<GameObject> _imported;

	[Token(Token = "0x4000807")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _previewEffectType;

	[Token(Token = "0x4000808")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly IList<string> _previewEffectColors;

	[Token(Token = "0x4000809")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly string _previewFont;

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x40DB170", Offset = "0x40DB170", VA = "0x40DB170")]
	static AottgCharacterTextColorEditor()
	{
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x40DB2A0", Offset = "0x40DB2A0", VA = "0x40DB2A0")]
	public AottgCharacterTextColorEditor(string value, string pickerId, string colorsEnabledKey, bool colorsEnabled, [Optional][DefaultParameterValue(true)] bool inputEnabled, [Optional] Action<GameObject> imported, [Optional] string previewEffectType, [Optional] IList<string> previewEffectColors, [Optional] string previewFont)
	{
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x40DB3B0", Offset = "0x40DB3B0", VA = "0x40DB3B0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x40DBA00", Offset = "0x40DBA00", VA = "0x40DBA00")]
	private static bool BuildEditor(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}
