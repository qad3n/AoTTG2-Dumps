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

[Token(Token = "0x200029C")]
internal sealed class AottgCharacterTextColorEditorRuntime : MonoBehaviour
{
	[Token(Token = "0x4000D75")]
	private const int MaxVisibleLength = 31;

	[Token(Token = "0x4000D76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<string> _colors;

	[Token(Token = "0x4000D77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<string> _previewColors;

	[Token(Token = "0x4000D78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _inputId;

	[Token(Token = "0x4000D79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _pickerId;

	[Token(Token = "0x4000D7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _colorsEnabledKey;

	[Token(Token = "0x4000D7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _initialValue;

	[Token(Token = "0x4000D7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string _lastText;

	[Token(Token = "0x4000D7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GisketchUIState _state;

	[Token(Token = "0x4000D7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private TMP_InputField _input;

	[Token(Token = "0x4000D7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private TMP_Text _text;

	[Token(Token = "0x4000D80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private NameEffectController _effectPreview;

	[Token(Token = "0x4000D81")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Action<GameObject> _imported;

	[Token(Token = "0x4000D82")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private int _selectionStart;

	[Token(Token = "0x4000D83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	private int _selectionEnd;

	[Token(Token = "0x4000D84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int _openedStart;

	[Token(Token = "0x4000D85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int _openedEnd;

	[Token(Token = "0x4000D86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private bool _attached;

	[Token(Token = "0x4000D87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x91")]
	private bool _hasPreview;

	[Token(Token = "0x4000D88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x92")]
	private bool _colorsEnabled;

	[Token(Token = "0x4000D89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private string _pendingImportColor;

	[Token(Token = "0x4000D8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string[] _gradientStops;

	[Token(Token = "0x4000D8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _previewEffectType;

	[Token(Token = "0x4000D8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private string[] _previewEffectColors;

	[Token(Token = "0x4000D8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _previewFont;

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x1E03030", Offset = "0x1E01630", VA = "0x181E03030")]
	public void Setup(string inputId, string value, string pickerId, GisketchUIState state, string colorsEnabledKey, bool colorsEnabled, Action<GameObject> imported, [Optional] string previewEffectType, [Optional] IList<string> previewEffectColors, [Optional] string previewFont)
	{
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x1E02FC0", Offset = "0x1E015C0", VA = "0x181E02FC0")]
	public void SetSerializedValue(string value)
	{
	}

	[Token(Token = "0x6001012")]
	[Address(RVA = "0x1E031D0", Offset = "0x1E017D0", VA = "0x181E031D0")]
	private void Start()
	{
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x1E00B60", Offset = "0x1DFF160", VA = "0x181E00B60")]
	private void Attach()
	{
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x1E02A20", Offset = "0x1E01020", VA = "0x181E02A20")]
	public void SetFont(string font)
	{
	}

	[Token(Token = "0x6001015")]
	[Address(RVA = "0x1DFFFB0", Offset = "0x1DFE5B0", VA = "0x181DFFFB0")]
	public void ApplyColor(string hex, bool clearSelection)
	{
	}

	[Token(Token = "0x6001016")]
	[Address(RVA = "0x1E00E60", Offset = "0x1DFF460", VA = "0x181E00E60")]
	public void CancelPreview()
	{
	}

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x1E02990", Offset = "0x1E00F90", VA = "0x181E02990")]
	public string Serialized()
	{
		return null;
	}

	[Token(Token = "0x6001018")]
	[Address(RVA = "0x1E00300", Offset = "0x1DFE900", VA = "0x181E00300")]
	public string ApplyGradient(IList<string> stops)
	{
		return null;
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x1E02B70", Offset = "0x1E01170", VA = "0x181E02B70")]
	public void SetGradient(IList<string> stops)
	{
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x1E01130", Offset = "0x1DFF730", VA = "0x181E01130")]
	public void ClearGradient()
	{
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x1E02E60", Offset = "0x1E01460", VA = "0x181E02E60")]
	public void SetNameEffectPreview(string type, IList<string> colors)
	{
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x1E01150", Offset = "0x1DFF750", VA = "0x181E01150")]
	public void ClearNameEffectPreview()
	{
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x1E015B0", Offset = "0x1DFFBB0", VA = "0x181E015B0")]
	private void DestroyEffectPreview()
	{
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x1E01660", Offset = "0x1DFFC60", VA = "0x181E01660")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x1E035C0", Offset = "0x1E01BC0", VA = "0x181E035C0")]
	private void Update()
	{
	}

	[Token(Token = "0x6001020")]
	[Address(RVA = "0x1E014A0", Offset = "0x1DFFAA0", VA = "0x181E014A0")]
	private bool ColorsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6001021")]
	[Address(RVA = "0x1E01900", Offset = "0x1DFFF00", VA = "0x181E01900")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x6001022")]
	[Address(RVA = "0x1E01970", Offset = "0x1DFFF70", VA = "0x181E01970")]
	private void OnTextChanged(string value)
	{
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x1E02700", Offset = "0x1E00D00", VA = "0x181E02700")]
	private void RefreshTextColors()
	{
	}

	[Token(Token = "0x6001024")]
	[Address(RVA = "0x1E001E0", Offset = "0x1DFE7E0", VA = "0x181E001E0")]
	private void ApplyDocument(AottgCharacterTextColorCodec.Document document, bool updateInput = true)
	{
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x1E01500", Offset = "0x1DFFB00", VA = "0x181E01500")]
	private AottgCharacterTextColorCodec.Document CurrentDocument()
	{
		return null;
	}

	[Token(Token = "0x6001026")]
	[Address(RVA = "0x1E00450", Offset = "0x1DFEA50", VA = "0x181E00450")]
	private bool ApplyPendingImportColor(AottgCharacterTextColorCodec.Document document)
	{
		return default(bool);
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x1E02DB0", Offset = "0x1E013B0", VA = "0x181E02DB0")]
	private void SetInputText(string value)
	{
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x1E03570", Offset = "0x1E01B70", VA = "0x181E03570")]
	private static string Trim(string value)
	{
		return null;
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x1E03400", Offset = "0x1E01A00", VA = "0x181E03400")]
	private static void Trim(AottgCharacterTextColorCodec.Document document)
	{
	}

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x1E026E0", Offset = "0x1E00CE0", VA = "0x181E026E0")]
	private void OnTextSelection(string _, int start, int end)
	{
	}

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x1E02EC0", Offset = "0x1E014C0", VA = "0x181E02EC0")]
	private void SetSelection(int start, int end)
	{
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x1E00FC0", Offset = "0x1DFF5C0", VA = "0x181E00FC0")]
	private void CapturePreviewColors()
	{
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x1E02790", Offset = "0x1E00D90", VA = "0x181E02790")]
	private void RestorePreviewColors()
	{
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x1E008A0", Offset = "0x1DFEEA0", VA = "0x181E008A0")]
	private void ApplyTextColors(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x1E01390", Offset = "0x1DFF990", VA = "0x181E01390")]
	private Color32 ColorFor(int index)
	{
		return default(Color32);
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x1E031E0", Offset = "0x1E017E0", VA = "0x181E031E0")]
	private void StoreEffectPreview(string type, IList<string> colors)
	{
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x1E006C0", Offset = "0x1DFECC0", VA = "0x181E006C0")]
	private void ApplyStoredEffectPreview()
	{
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x1E00610", Offset = "0x1DFEC10", VA = "0x181E00610")]
	private static void ApplyPreviewColor(IList<string> colors, int index, ref Color target)
	{
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x1E028F0", Offset = "0x1E00EF0", VA = "0x181E028F0")]
	private void RestoreSelection()
	{
	}

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x1E01240", Offset = "0x1DFF840", VA = "0x181E01240")]
	public void ClearSelection()
	{
	}

	[Token(Token = "0x6001035")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6001036")]
	[Address(RVA = "0x1E03830", Offset = "0x1E01E30", VA = "0x181E03830")]
	public AottgCharacterTextColorEditorRuntime()
	{
	}
}
