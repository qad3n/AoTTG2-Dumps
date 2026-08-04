// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.State;
using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000196")]
internal sealed class AottgCharacterTextColorEditorRuntime : MonoBehaviour
{
	[Token(Token = "0x40008D2")]
	private const int MaxVisibleLength = 31;

	[Token(Token = "0x40008D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<string> _colors;

	[Token(Token = "0x40008D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<string> _previewColors;

	[Token(Token = "0x40008D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _inputId;

	[Token(Token = "0x40008D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _pickerId;

	[Token(Token = "0x40008D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _colorsEnabledKey;

	[Token(Token = "0x40008D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _initialValue;

	[Token(Token = "0x40008D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string _lastText;

	[Token(Token = "0x40008DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GisketchUIState _state;

	[Token(Token = "0x40008DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private TMP_InputField _input;

	[Token(Token = "0x40008DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private TMP_Text _text;

	[Token(Token = "0x40008DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private NameEffectController _effectPreview;

	[Token(Token = "0x40008DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Action<GameObject> _imported;

	[Token(Token = "0x40008DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private int _selectionStart;

	[Token(Token = "0x40008E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	private int _selectionEnd;

	[Token(Token = "0x40008E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int _openedStart;

	[Token(Token = "0x40008E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int _openedEnd;

	[Token(Token = "0x40008E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private bool _attached;

	[Token(Token = "0x40008E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x91")]
	private bool _hasPreview;

	[Token(Token = "0x40008E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x92")]
	private bool _colorsEnabled;

	[Token(Token = "0x40008E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private string _pendingImportColor;

	[Token(Token = "0x40008E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string[] _gradientStops;

	[Token(Token = "0x40008E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _previewEffectType;

	[Token(Token = "0x40008E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private string[] _previewEffectColors;

	[Token(Token = "0x40008EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _previewFont;

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x440ED30", Offset = "0x440ED30", VA = "0x440ED30")]
	public void Setup(string inputId, string value, string pickerId, GisketchUIState state, string colorsEnabledKey, bool colorsEnabled, Action<GameObject> imported, [Optional] string previewEffectType, [Optional] IList<string> previewEffectColors, [Optional] string previewFont)
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x440F160", Offset = "0x440F160", VA = "0x440F160")]
	public void SetSerializedValue(string value)
	{
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x440F330", Offset = "0x440F330", VA = "0x440F330")]
	private void Start()
	{
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x440F340", Offset = "0x440F340", VA = "0x440F340")]
	private void Attach()
	{
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x4409640", Offset = "0x4409640", VA = "0x4409640")]
	public void SetFont(string font)
	{
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x4408180", Offset = "0x4408180", VA = "0x4408180")]
	public void ApplyColor(string hex, bool clearSelection)
	{
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x4408160", Offset = "0x4408160", VA = "0x4408160")]
	public void CancelPreview()
	{
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x4408BF0", Offset = "0x4408BF0", VA = "0x4408BF0")]
	public string Serialized()
	{
		return null;
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x4408D80", Offset = "0x4408D80", VA = "0x4408D80")]
	public string ApplyGradient(IList<string> stops)
	{
		return null;
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x4409330", Offset = "0x4409330", VA = "0x4409330")]
	public void SetGradient(IList<string> stops)
	{
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x4409310", Offset = "0x4409310", VA = "0x4409310")]
	public void ClearGradient()
	{
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x44095F0", Offset = "0x44095F0", VA = "0x44095F0")]
	public void SetNameEffectPreview(string type, IList<string> colors)
	{
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x4409220", Offset = "0x4409220", VA = "0x4409220")]
	public void ClearNameEffectPreview()
	{
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x440F810", Offset = "0x440F810", VA = "0x440F810")]
	private void DestroyEffectPreview()
	{
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x440FE30", Offset = "0x440FE30", VA = "0x440FE30")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x44100F0", Offset = "0x44100F0", VA = "0x44100F0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x440F950", Offset = "0x440F950", VA = "0x440F950")]
	private bool ColorsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x44103F0", Offset = "0x44103F0", VA = "0x44103F0")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x4410450", Offset = "0x4410450", VA = "0x4410450")]
	private void OnTextChanged(string value)
	{
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x440F8C0", Offset = "0x440F8C0", VA = "0x440F8C0")]
	private void RefreshTextColors()
	{
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x440F1C0", Offset = "0x440F1C0", VA = "0x440F1C0")]
	private void ApplyDocument(AottgCharacterTextColorCodec.Document document, bool updateInput = true)
	{
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x44107E0", Offset = "0x44107E0", VA = "0x44107E0")]
	private AottgCharacterTextColorCodec.Document CurrentDocument()
	{
		return null;
	}

	[Token(Token = "0x600096F")]
	[Address(RVA = "0x44109F0", Offset = "0x44109F0", VA = "0x44109F0")]
	private bool ApplyPendingImportColor(AottgCharacterTextColorCodec.Document document)
	{
		return default(bool);
	}

	[Token(Token = "0x6000970")]
	[Address(RVA = "0x4410940", Offset = "0x4410940", VA = "0x4410940")]
	private void SetInputText(string value)
	{
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x44108F0", Offset = "0x44108F0", VA = "0x44108F0")]
	private static string Trim(string value)
	{
		return null;
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x4410C10", Offset = "0x4410C10", VA = "0x4410C10")]
	private static void Trim(AottgCharacterTextColorCodec.Document document)
	{
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x4410DA0", Offset = "0x4410DA0", VA = "0x4410DA0")]
	private void OnTextSelection(string _, int start, int end)
	{
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x4410320", Offset = "0x4410320", VA = "0x4410320")]
	private void SetSelection(int start, int end)
	{
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x440F990", Offset = "0x440F990", VA = "0x440F990")]
	private void CapturePreviewColors()
	{
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x440FCB0", Offset = "0x440FCB0", VA = "0x440FCB0")]
	private void RestorePreviewColors()
	{
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x4410DB0", Offset = "0x4410DB0", VA = "0x4410DB0")]
	private void ApplyTextColors(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x4410F40", Offset = "0x4410F40", VA = "0x4410F40")]
	private Color32 ColorFor(int index)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x440EF10", Offset = "0x440EF10", VA = "0x440EF10")]
	private void StoreEffectPreview(string type, IList<string> colors)
	{
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x440F640", Offset = "0x440F640", VA = "0x440F640")]
	private void ApplyStoredEffectPreview()
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x4411020", Offset = "0x4411020", VA = "0x4411020")]
	private static void ApplyPreviewColor(IList<string> colors, int index, ref Color target)
	{
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x440FC10", Offset = "0x440FC10", VA = "0x440FC10")]
	private void RestoreSelection()
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x440FAF0", Offset = "0x440FAF0", VA = "0x440FAF0")]
	public void ClearSelection()
	{
	}

	[Token(Token = "0x600097E")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x4411160", Offset = "0x4411160", VA = "0x4411160")]
	public AottgCharacterTextColorEditorRuntime()
	{
	}
}
