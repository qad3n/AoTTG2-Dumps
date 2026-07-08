using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.State;
using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000164")]
internal sealed class AottgCharacterTextColorEditorRuntime : MonoBehaviour
{
	[Token(Token = "0x4000811")]
	private const int MaxVisibleLength = 31;

	[Token(Token = "0x4000812")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<string> _colors;

	[Token(Token = "0x4000813")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<string> _previewColors;

	[Token(Token = "0x4000814")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _inputId;

	[Token(Token = "0x4000815")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _pickerId;

	[Token(Token = "0x4000816")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _colorsEnabledKey;

	[Token(Token = "0x4000817")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _initialValue;

	[Token(Token = "0x4000818")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string _lastText;

	[Token(Token = "0x4000819")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GisketchUIState _state;

	[Token(Token = "0x400081A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private TMP_InputField _input;

	[Token(Token = "0x400081B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private TMP_Text _text;

	[Token(Token = "0x400081C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private NameEffectController _effectPreview;

	[Token(Token = "0x400081D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Action<GameObject> _imported;

	[Token(Token = "0x400081E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private int _selectionStart;

	[Token(Token = "0x400081F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	private int _selectionEnd;

	[Token(Token = "0x4000820")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int _openedStart;

	[Token(Token = "0x4000821")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int _openedEnd;

	[Token(Token = "0x4000822")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private bool _attached;

	[Token(Token = "0x4000823")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x91")]
	private bool _hasPreview;

	[Token(Token = "0x4000824")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x92")]
	private bool _colorsEnabled;

	[Token(Token = "0x4000825")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private string _pendingImportColor;

	[Token(Token = "0x4000826")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string[] _gradientStops;

	[Token(Token = "0x4000827")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _previewEffectType;

	[Token(Token = "0x4000828")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private string[] _previewEffectColors;

	[Token(Token = "0x4000829")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _previewFont;

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x40DBC60", Offset = "0x40DBC60", VA = "0x40DBC60")]
	public void Setup(string inputId, string value, string pickerId, GisketchUIState state, string colorsEnabledKey, bool colorsEnabled, Action<GameObject> imported, [Optional] string previewEffectType, [Optional] IList<string> previewEffectColors, [Optional] string previewFont)
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x40DC090", Offset = "0x40DC090", VA = "0x40DC090")]
	public void SetSerializedValue(string value)
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x40DC260", Offset = "0x40DC260", VA = "0x40DC260")]
	private void Start()
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x40DC270", Offset = "0x40DC270", VA = "0x40DC270")]
	private void Attach()
	{
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x40DC570", Offset = "0x40DC570", VA = "0x40DC570")]
	public void SetFont(string font)
	{
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x40DCA30", Offset = "0x40DCA30", VA = "0x40DCA30")]
	public void ApplyColor(string hex, bool clearSelection)
	{
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x40DCF50", Offset = "0x40DCF50", VA = "0x40DCF50")]
	public void CancelPreview()
	{
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x40DD0F0", Offset = "0x40DD0F0", VA = "0x40DD0F0")]
	public string Serialized()
	{
		return null;
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x40DD170", Offset = "0x40DD170", VA = "0x40DD170")]
	public string ApplyGradient(IList<string> stops)
	{
		return null;
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x40DD210", Offset = "0x40DD210", VA = "0x40DD210")]
	public void SetGradient(IList<string> stops)
	{
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x40DD5C0", Offset = "0x40DD5C0", VA = "0x40DD5C0")]
	public void ClearGradient()
	{
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x40DD5E0", Offset = "0x40DD5E0", VA = "0x40DD5E0")]
	public void SetNameEffectPreview(string type, IList<string> colors)
	{
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x40DD4D0", Offset = "0x40DD4D0", VA = "0x40DD4D0")]
	public void ClearNameEffectPreview()
	{
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x40DC8F0", Offset = "0x40DC8F0", VA = "0x40DC8F0")]
	private void DestroyEffectPreview()
	{
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x40DD630", Offset = "0x40DD630", VA = "0x40DD630")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x40DD8F0", Offset = "0x40DD8F0", VA = "0x40DD8F0")]
	private void Update()
	{
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x40DCBF0", Offset = "0x40DCBF0", VA = "0x40DCBF0")]
	private bool ColorsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x40DDBF0", Offset = "0x40DDBF0", VA = "0x40DDBF0")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x40DDC50", Offset = "0x40DDC50", VA = "0x40DDC50")]
	private void OnTextChanged(string value)
	{
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x40DC9A0", Offset = "0x40DC9A0", VA = "0x40DC9A0")]
	private void RefreshTextColors()
	{
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x40DC0F0", Offset = "0x40DC0F0", VA = "0x40DC0F0")]
	private void ApplyDocument(AottgCharacterTextColorCodec.Document document, bool updateInput = true)
	{
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x40DDFF0", Offset = "0x40DDFF0", VA = "0x40DDFF0")]
	private AottgCharacterTextColorCodec.Document CurrentDocument()
	{
		return null;
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x40DE200", Offset = "0x40DE200", VA = "0x40DE200")]
	private bool ApplyPendingImportColor(AottgCharacterTextColorCodec.Document document)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x40DE150", Offset = "0x40DE150", VA = "0x40DE150")]
	private void SetInputText(string value)
	{
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x40DE100", Offset = "0x40DE100", VA = "0x40DE100")]
	private static string Trim(string value)
	{
		return null;
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x40DE420", Offset = "0x40DE420", VA = "0x40DE420")]
	private static void Trim(AottgCharacterTextColorCodec.Document document)
	{
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x40DE5B0", Offset = "0x40DE5B0", VA = "0x40DE5B0")]
	private void OnTextSelection(string _, int start, int end)
	{
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x40DDB20", Offset = "0x40DDB20", VA = "0x40DDB20")]
	private void SetSelection(int start, int end)
	{
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x40DCC30", Offset = "0x40DCC30", VA = "0x40DCC30")]
	private void CapturePreviewColors()
	{
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x40DCF70", Offset = "0x40DCF70", VA = "0x40DCF70")]
	private void RestorePreviewColors()
	{
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x40DE5C0", Offset = "0x40DE5C0", VA = "0x40DE5C0")]
	private void ApplyTextColors(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x40DE750", Offset = "0x40DE750", VA = "0x40DE750")]
	private Color32 ColorFor(int index)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x40DBE40", Offset = "0x40DBE40", VA = "0x40DBE40")]
	private void StoreEffectPreview(string type, IList<string> colors)
	{
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x40DC720", Offset = "0x40DC720", VA = "0x40DC720")]
	private void ApplyStoredEffectPreview()
	{
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x40DE830", Offset = "0x40DE830", VA = "0x40DE830")]
	private static void ApplyPreviewColor(IList<string> colors, int index, ref Color target)
	{
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x40DCEB0", Offset = "0x40DCEB0", VA = "0x40DCEB0")]
	private void RestoreSelection()
	{
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x40DCD90", Offset = "0x40DCD90", VA = "0x40DCD90")]
	public void ClearSelection()
	{
	}

	[Token(Token = "0x600080A")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x40DE970", Offset = "0x40DE970", VA = "0x40DE970")]
	public AottgCharacterTextColorEditorRuntime()
	{
	}
}
