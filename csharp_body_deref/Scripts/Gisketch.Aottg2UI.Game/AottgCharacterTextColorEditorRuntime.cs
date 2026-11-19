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

[Token(Token = "0x20002F8")]
internal sealed class AottgCharacterTextColorEditorRuntime : MonoBehaviour
{
	[Token(Token = "0x4000F0C")]
	private const int MaxVisibleLength = 31;

	[Token(Token = "0x4000F0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<string> _colors;

	[Token(Token = "0x4000F0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<string> _previewColors;

	[Token(Token = "0x4000F0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _inputId;

	[Token(Token = "0x4000F10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _pickerId;

	[Token(Token = "0x4000F11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _colorsEnabledKey;

	[Token(Token = "0x4000F12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _initialValue;

	[Token(Token = "0x4000F13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string _lastText;

	[Token(Token = "0x4000F14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GisketchUIState _state;

	[Token(Token = "0x4000F15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private TMP_InputField _input;

	[Token(Token = "0x4000F16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private TMP_Text _text;

	[Token(Token = "0x4000F17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private NameEffectController _effectPreview;

	[Token(Token = "0x4000F18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Action<GameObject> _imported;

	[Token(Token = "0x4000F19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private int _selectionStart;

	[Token(Token = "0x4000F1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	private int _selectionEnd;

	[Token(Token = "0x4000F1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int _openedStart;

	[Token(Token = "0x4000F1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int _openedEnd;

	[Token(Token = "0x4000F1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private bool _attached;

	[Token(Token = "0x4000F1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x91")]
	private bool _hasPreview;

	[Token(Token = "0x4000F1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x92")]
	private bool _colorsEnabled;

	[Token(Token = "0x4000F20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private string _pendingImportColor;

	[Token(Token = "0x4000F21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string[] _gradientStops;

	[Token(Token = "0x4000F22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _previewEffectType;

	[Token(Token = "0x4000F23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private string[] _previewEffectColors;

	[Token(Token = "0x4000F24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _previewFont;

	[Token(Token = "0x6001260")]
	[Address(RVA = "0x57EBA30", Offset = "0x57EAA30", VA = "0x57EBA30")]
	public void Setup(string inputId, string value, string pickerId, GisketchUIState state, string colorsEnabledKey, bool colorsEnabled, Action<GameObject> imported, [Optional] string previewEffectType, [Optional] IList<string> previewEffectColors, [Optional] string previewFont)
	{
	}

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x57EBE60", Offset = "0x57EAE60", VA = "0x57EBE60")]
	public void SetSerializedValue(string value)
	{
	}

	[Token(Token = "0x6001262")]
	[Address(RVA = "0x57EC030", Offset = "0x57EB030", VA = "0x57EC030")]
	private void Start()
	{
	}

	[Token(Token = "0x6001263")]
	[Address(RVA = "0x57EC040", Offset = "0x57EB040", VA = "0x57EC040")]
	private void Attach()
	{
	}

	[Token(Token = "0x6001264")]
	[Address(RVA = "0x57E5EC0", Offset = "0x57E4EC0", VA = "0x57E5EC0")]
	public void SetFont(string font)
	{
	}

	[Token(Token = "0x6001265")]
	[Address(RVA = "0x57E48B0", Offset = "0x57E38B0", VA = "0x57E48B0")]
	public void ApplyColor(string hex, bool clearSelection)
	{
	}

	[Token(Token = "0x6001266")]
	[Address(RVA = "0x57E4890", Offset = "0x57E3890", VA = "0x57E4890")]
	public void CancelPreview()
	{
	}

	[Token(Token = "0x6001267")]
	[Address(RVA = "0x57E53B0", Offset = "0x57E43B0", VA = "0x57E53B0")]
	public string Serialized()
	{
		return null;
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x57E5530", Offset = "0x57E4530", VA = "0x57E5530")]
	public string ApplyGradient(IList<string> stops)
	{
		return null;
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x57E5BC0", Offset = "0x57E4BC0", VA = "0x57E5BC0")]
	public void SetGradient(IList<string> stops)
	{
	}

	[Token(Token = "0x600126A")]
	[Address(RVA = "0x57E5BA0", Offset = "0x57E4BA0", VA = "0x57E5BA0")]
	public void ClearGradient()
	{
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x57E5E70", Offset = "0x57E4E70", VA = "0x57E5E70")]
	public void SetNameEffectPreview(string type, IList<string> colors)
	{
	}

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x57E5AB0", Offset = "0x57E4AB0", VA = "0x57E5AB0")]
	public void ClearNameEffectPreview()
	{
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x57EC510", Offset = "0x57EB510", VA = "0x57EC510")]
	private void DestroyEffectPreview()
	{
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x57ECB30", Offset = "0x57EBB30", VA = "0x57ECB30")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x57ECDF0", Offset = "0x57EBDF0", VA = "0x57ECDF0")]
	private void Update()
	{
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x57EC650", Offset = "0x57EB650", VA = "0x57EC650")]
	private bool ColorsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6001271")]
	[Address(RVA = "0x57ED0F0", Offset = "0x57EC0F0", VA = "0x57ED0F0")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x6001272")]
	[Address(RVA = "0x57ED150", Offset = "0x57EC150", VA = "0x57ED150")]
	private void OnTextChanged(string value)
	{
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x57EC5C0", Offset = "0x57EB5C0", VA = "0x57EC5C0")]
	private void RefreshTextColors()
	{
	}

	[Token(Token = "0x6001274")]
	[Address(RVA = "0x57EBEC0", Offset = "0x57EAEC0", VA = "0x57EBEC0")]
	private void ApplyDocument(AottgCharacterTextColorCodec.Document document, bool updateInput = true)
	{
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x57ED4E0", Offset = "0x57EC4E0", VA = "0x57ED4E0")]
	private AottgCharacterTextColorCodec.Document CurrentDocument()
	{
		return null;
	}

	[Token(Token = "0x6001276")]
	[Address(RVA = "0x57ED6F0", Offset = "0x57EC6F0", VA = "0x57ED6F0")]
	private bool ApplyPendingImportColor(AottgCharacterTextColorCodec.Document document)
	{
		return default(bool);
	}

	[Token(Token = "0x6001277")]
	[Address(RVA = "0x57ED640", Offset = "0x57EC640", VA = "0x57ED640")]
	private void SetInputText(string value)
	{
	}

	[Token(Token = "0x6001278")]
	[Address(RVA = "0x57ED5F0", Offset = "0x57EC5F0", VA = "0x57ED5F0")]
	private static string Trim(string value)
	{
		return null;
	}

	[Token(Token = "0x6001279")]
	[Address(RVA = "0x57ED910", Offset = "0x57EC910", VA = "0x57ED910")]
	private static void Trim(AottgCharacterTextColorCodec.Document document)
	{
	}

	[Token(Token = "0x600127A")]
	[Address(RVA = "0x57EDA90", Offset = "0x57ECA90", VA = "0x57EDA90")]
	private void OnTextSelection(string _, int start, int end)
	{
	}

	[Token(Token = "0x600127B")]
	[Address(RVA = "0x57ED020", Offset = "0x57EC020", VA = "0x57ED020")]
	private void SetSelection(int start, int end)
	{
	}

	[Token(Token = "0x600127C")]
	[Address(RVA = "0x57EC690", Offset = "0x57EB690", VA = "0x57EC690")]
	private void CapturePreviewColors()
	{
	}

	[Token(Token = "0x600127D")]
	[Address(RVA = "0x57EC9C0", Offset = "0x57EB9C0", VA = "0x57EC9C0")]
	private void RestorePreviewColors()
	{
	}

	[Token(Token = "0x600127E")]
	[Address(RVA = "0x57EDAA0", Offset = "0x57ECAA0", VA = "0x57EDAA0")]
	private void ApplyTextColors(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x600127F")]
	[Address(RVA = "0x57EDC10", Offset = "0x57ECC10", VA = "0x57EDC10")]
	private Color32 ColorFor(int index)
	{
		return default(Color32);
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x57EBC10", Offset = "0x57EAC10", VA = "0x57EBC10")]
	private void StoreEffectPreview(string type, IList<string> colors)
	{
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x57EC340", Offset = "0x57EB340", VA = "0x57EC340")]
	private void ApplyStoredEffectPreview()
	{
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x57EDCF0", Offset = "0x57ECCF0", VA = "0x57EDCF0")]
	private static void ApplyPreviewColor(IList<string> colors, int index, ref Color target)
	{
	}

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x57EC920", Offset = "0x57EB920", VA = "0x57EC920")]
	private void RestoreSelection()
	{
	}

	[Token(Token = "0x6001284")]
	[Address(RVA = "0x57EC7F0", Offset = "0x57EB7F0", VA = "0x57EC7F0")]
	public void ClearSelection()
	{
	}

	[Token(Token = "0x6001285")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x57EDE30", Offset = "0x57ECE30", VA = "0x57EDE30")]
	public AottgCharacterTextColorEditorRuntime()
	{
	}
}
