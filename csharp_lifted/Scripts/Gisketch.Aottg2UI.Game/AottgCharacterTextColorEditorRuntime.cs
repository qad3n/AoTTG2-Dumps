// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Setup): 5 lines keep C-only constructs
		int piVar1;
		int length;
		GisketchUIState __this_00;
		TMP_InputField x;
		TMP_Text pTVar2;
		bool bVar3;
		String pSVar4;
		Action<object> __this_01;
		MethodInfo document;
		List<string> __this_02;

		this._inputId = inputId;
		this._pickerId = pickerId;
		this._state = state;
		this._colorsEnabledKey = colorsEnabledKey;
		this._colorsEnabled = colorsEnabled;
		this._imported = imported;
		pSVar4 = NameFontCatalog.Normalize(previewFont);
		this._previewFont = pSVar4;
		this.StoreEffectPreview(previewEffectType, previewEffectColors);
		__this_00 = this._state;
		if (__this_00 != null) {
			__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnStateChanged);
			__this_00.add_Changed((Action<string>)__this_01);
		}
		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._initialValue = value;
		if (this._attached == false) {
			return;
		}
		document = (MethodInfo)AottgCharacterTextColorCodec.Parse(this._initialValue);
		AottgCharacterTextColorEditorRuntime.Trim((AottgCharacterTextColorCodec.Document)document);
		if (document != null) {
			this._lastText =((AottgCharacterTextColorCodec.Document)&document.invoker_method). Text;
			__this_02 = this._colors;
			if (__this_02 != null) {
				piVar1 = &__this_02._version;
				*piVar1 = *piVar1 + 1;
				length = __this_02._size;
				__this_02._size = 0;
				if (0 < length) {
					Array.Clear((Array)__this_02._items, 0, length);
					__this_02 = this._colors;
					if (__this_02 == null) goto label_058ec01c;
				}
				__this_02.AddRange((IEnumerable<T>)document.name);
				x = this._input;
				bVar3 = ((Object)x != null);
				if (bVar3) {
					this.SetInputText(((AottgCharacterTextColorCodec.Document)&document.invoker_method).Text);
				}
				pTVar2 = this._text;
				bVar3 = ((Object)pTVar2 != null);
				if (!bVar3) {
					return;
				}
				pTVar2 = this._text;
				if (pTVar2 != null) {
					pTVar2.ForceMeshUpdate(false, false);
					return;
				}
			}
		}
	label_058ec01c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x57EBE60", Offset = "0x57EAE60", VA = "0x57EBE60")]
	public void SetSerializedValue(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetSerializedValue): clean
		AottgCharacterTextColorCodec.Document document;

		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._initialValue = value;
		if (this._attached == false) {
			return;
		}
		document = AottgCharacterTextColorCodec.Parse(this._initialValue);
		this.ApplyDocument(document, true);
		return;
	}

	[Token(Token = "0x6001262")]
	[Address(RVA = "0x57EC030", Offset = "0x57EB030", VA = "0x57EC030")]
	private void Start()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Start): clean
		this.Attach();
		return;
	}

	[Token(Token = "0x6001263")]
	[Address(RVA = "0x57EC040", Offset = "0x57EB040", VA = "0x57EC040")]
	private void Attach()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Attach): 17 lines keep C-only constructs
		TMP_InputField* targetAddress;
		TMP_InputField.OnChangeEvent __this_00;
		TMP_InputField.TextSelectionEvent pTVar1;
		TMP_Text pTVar2;
		bool bVar3;
		Transform root;
		TMP_InputField pTVar4;
		UnityAction<T0> __this_01;
		UnityAction<T0, T1, T2> pUVar5;
		Action<TMP_TextInfo> __this_02;
		MethodInfo pMVar6;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo method_01;

		if (this._attached == false) {
			root = this.transform;
			pTVar4 = AottgCharacterTextColorEditorRuntime.Find<TMP_InputField>(root, this._inputId);
			targetAddress = &this._input;
			this._input = pTVar4;
			pTVar4 = this._input;
			bVar3 = ((Object)pTVar4 == null);
			if (!bVar3) {
				pTVar4 = *targetAddress;
				if (pTVar4 != null) {
					pTVar4.m_OnFocusSelectAll = false;
					__this_00 = pTVar4.m_OnValueChanged;
					__this_01 = new UnityAction<string>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextChanged);
					if (__this_00 != null) {
						__this_00.AddListener(__this_01);
						if (*targetAddress != null) {
							pTVar1 = ((*targetAddress).fields).m_OnTextSelection;
							pUVar5 = new UnityAction<string, int, int>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextSelection);
							if (pTVar1 != null) {
								pTVar1.AddListener(pUVar5);
								if (*targetAddress != null) {
									pTVar1 = ((*targetAddress).fields).m_OnEndTextSelection;
									pUVar5 = new UnityAction<string, int, int>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextSelection);
									if (pTVar1 != null) {
										pTVar1.AddListener(pUVar5);
										if (*targetAddress != null) {
											this._text = ((*targetAddress).fields).m_TextComponent;
											pTVar2 = this._text;
											bVar3 = ((Object)pTVar2 != null);
											pMVar6 = extraout_RDX;
											if (bVar3) {
												pTVar2 = this._text;
												__this_02 = new Action<TMP_TextInfo>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_ApplyTextColors);
												if (pTVar2 == null) goto label_058ec331;
												pTVar2.add_OnPreRenderText(__this_02);
												pMVar6 = extraout_RDX_00;
											}
											this._attached = true;
											method_01 = (MethodInfo)this._previewFont;
											this.SetFont((String)method_01);
											pMVar6 = (MethodInfo)AottgCharacterTextColorCodec.Parse(this._initialValue);
											this.ApplyDocument((AottgCharacterTextColorCodec.Document)pMVar6, true);
											this.ApplyStoredEffectPreview();
											return;
										}
									}
								}
							}
						}
					}
				}
	label_058ec331: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6001264")]
	[Address(RVA = "0x57E5EC0", Offset = "0x57E4EC0", VA = "0x57E5EC0")]
	public void SetFont(string font)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetFont): clean
		uint uVar1;
		NameEffectController x;
		TMP_InputField pTVar2;
		TMP_Text pTVar3;
		bool bVar4;
		bool bVar5;
		String pSVar6;
		MethodInfo pMVar7;

		pSVar6 = NameFontCatalog.Normalize(font);
		this._previewFont = pSVar6;
		x = this._effectPreview;
		bVar4 = ((Object)x != null);
		bVar5 = true;
		if (bVar4) {
			pMVar7 = null;
			bVar4 = String.IsNullOrEmpty(this._previewEffectType);
			if (!bVar4) {
				this.DestroyEffectPreview();
				bVar5 = false;
			}
		}
		pTVar2 = this._input;
		pMVar7 = null;
		bVar4 = ((Object)pTVar2 != null);
		if (bVar4) {
			pTVar2 = this._input;
			pMVar7 = (MethodInfo)this._previewFont;
			NameFontCatalog.Apply(pTVar2, (String)pMVar7);
		}
		if (!bVar5) {
			this.ApplyStoredEffectPreview();
		}
		if (Il2CppMethodInitialized_0754555f == false) {
			Il2CppMethodInitialized_0754555f = true;
			pTVar3 = this._text;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pTVar3 = this._text;
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar5 = ((Object)pTVar3 != null);
		if (bVar5) {
			pTVar3 = this._text;
			if (pTVar3 == null) {
				throw new NullReferenceException();
			}
			pTVar3.ForceMeshUpdate(false, false);
			return;
		}
		return;
	}

	[Token(Token = "0x6001265")]
	[Address(RVA = "0x57E48B0", Offset = "0x57E38B0", VA = "0x57E48B0")]
	public void ApplyColor(string hex, bool clearSelection)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyColor): clean
		int iVar1;
		GisketchUIState __this_00;
		List<string> pSVar2;
		TMP_Text pTVar3;
		bool bVar4;
		String value;
		int iVar5;
		int iVar6;
		MethodInfo pMVar7;

		pMVar7 = null;
		bVar4 = String.IsNullOrEmpty(this._colorsEnabledKey);
		if (bVar4) {
			if (this._colorsEnabled == false) {
				return;
			}
		}
		else {
			__this_00 = this._state;
			if (__this_00 == null) {
				return;
			}
			pMVar7 = (MethodInfo)this._colorsEnabledKey;
			bVar4 = __this_00.GetBool((String)pMVar7, this._colorsEnabled);
			if (!bVar4) {
				return;
			}
		}
		iVar6 = this._selectionStart;
		if ((iVar6 < 0) || (this._selectionEnd <= iVar6)) {
			return;
		}
		if (this._hasPreview == false) {
			this.CapturePreviewColors();
		}
		value = AottgCharacterTextColorCodec.NormalizeRgb(hex);
		pSVar2 = this._colors;
		if (pSVar2 == null) {
	label_058e4a72: ;
			throw new NullReferenceException();
		}
		iVar6 = this._selectionStart;
		iVar1 = this._selectionEnd;
		iVar5 = pSVar2._size;
		if (iVar1 < iVar5) {
			iVar5 = iVar1;
		}
		if (iVar6 < iVar5) {
			do {
				pSVar2 = this._colors;
				if (pSVar2 == null) goto label_058e4a72;
				pSVar2.set_Item(iVar6, (object)value);
				iVar6 = iVar6 + 1;
			} while (iVar5 != iVar6);
		}
		pTVar3 = this._text;
		pMVar7 = null;
		bVar4 = ((Object)pTVar3 != null);
		if (bVar4) {
			pTVar3 = this._text;
			if (pTVar3 == null) goto label_058e4a72;
			pMVar7 = null;
			pTVar3.ForceMeshUpdate(false, false);
		}
		if (clearSelection) {
			this.ClearSelection();
			return;
		}
		this.RestoreSelection();
		return;
	}

	[Token(Token = "0x6001266")]
	[Address(RVA = "0x57E4890", Offset = "0x57E3890", VA = "0x57E4890")]
	public void CancelPreview()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$CancelPreview): clean
		this.RestorePreviewColors();
		this.ClearSelection();
		return;
	}

	[Token(Token = "0x6001267")]
	[Address(RVA = "0x57E53B0", Offset = "0x57E43B0", VA = "0x57E53B0")]
	public string Serialized()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Serialized): 4 lines keep C-only constructs
		TMP_InputField pTVar1;
		bool bVar2;
		String* ppSVar3;
		String pSVar4;

		pTVar1 = this._input;
		bVar2 = ((Object)pTVar1 != null);
		if (bVar2) {
			pTVar1 = this._input;
			if (pTVar1 == null) {
				throw new NullReferenceException();
			}
			ppSVar3 = &pTVar1.m_Text;
		}
		else {
			ppSVar3 = &this._lastText;
		}
		pSVar4 = AottgCharacterTextColorCodec.Serialize(*ppSVar3, (IList<string>)this._colors);
		return pSVar4;
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x57E5530", Offset = "0x57E4530", VA = "0x57E5530")]
	public string ApplyGradient(IList<string> stops)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyGradient): 4 lines keep C-only constructs
		TMP_InputField pTVar1;
		bool bVar2;
		String* ppSVar3;
		String serialized;
		AottgCharacterTextColorCodec.Document document;

		pTVar1 = this._input;
		bVar2 = ((Object)pTVar1 != null);
		if (bVar2) {
			pTVar1 = this._input;
			if (pTVar1 == null) {
				throw new NullReferenceException();
			}
			ppSVar3 = &pTVar1.m_Text;
		}
		else {
			ppSVar3 = &this._lastText;
		}
		serialized = AottgCharacterTextColorCodec.SerializeGradient(*ppSVar3, stops);
		document = AottgCharacterTextColorCodec.Parse(serialized);
		this.ApplyDocument(document, false);
		return serialized;
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x57E5BC0", Offset = "0x57E4BC0", VA = "0x57E5BC0")]
	public void SetGradient(IList<string> stops)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetGradient): 6 lines keep C-only constructs
		String[]* targetAddress;
		IList<string> pSVar1;
		int iVar3;
		uint length;
		String[] pSVar5;
		String pSVar6;
		ulong uVar9;

		this.ClearNameEffectPreview();
		if (stops != null) {
			pSVar1 = stops.klass;
			uVar9 = (ulong)(pSVar1._2).interface_offsets_count;
			iVar3 = stops.get_Item();
			if (iVar3 != 0) {
				pSVar1 = stops.klass;
				uVar9 = (ulong)(pSVar1._2).interface_offsets_count;
				length = stops.get_Item();
				pSVar5 = (String[])new string[length];
				targetAddress = &this._gradientStops;
				this._gradientStops = pSVar5;
				uVar9 = 0;
				do {
					pSVar1 = stops.klass;
					iVar3 = stops.get_Item();
					pSVar5 = *targetAddress;
					if ((long)iVar3 <= (long)uVar9) {
						this.ApplyGradient((IList<string>)pSVar5);
						return;
					}
					pSVar1 = stops.klass;
					pSVar6 = stops.get_Item((int32_t)uVar9);
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					if ((uint)pSVar5.Length <= uVar9) {
						throw new IndexOutOfRangeException();
					}
					pSVar5[uVar9] = pSVar6;
					uVar9 = uVar9 + 1;
				} while(true);
			}
		}
		this._gradientStops = null;
		return;
	}

	[Token(Token = "0x600126A")]
	[Address(RVA = "0x57E5BA0", Offset = "0x57E4BA0", VA = "0x57E5BA0")]
	public void ClearGradient()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ClearGradient): clean
		this._gradientStops = null;
		return;
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x57E5E70", Offset = "0x57E4E70", VA = "0x57E5E70")]
	public void SetNameEffectPreview(string type, IList<string> colors)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetNameEffectPreview): clean
		this._gradientStops = null;
		this.StoreEffectPreview(type, colors);
		this.ApplyStoredEffectPreview();
		return;
	}

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x57E5AB0", Offset = "0x57E4AB0", VA = "0x57E5AB0")]
	public void ClearNameEffectPreview()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ClearNameEffectPreview): clean
		TMP_Text pTVar1;
		bool bVar2;
		Color UVar3;

		this._previewEffectType = null;
		this._previewEffectColors = null;
		this.DestroyEffectPreview();
		pTVar1 = this._text;
		bVar2 = ((Object)pTVar1 != null);
		if (bVar2) {
			pTVar1 = this._text;
			if (pTVar1 != null) {
				UVar3.b = 1.0;
				UVar3.a = 1.0;
				UVar3.r = 1.0;
				UVar3.g = 1.0;
				pTVar1.set_color(UVar3);
				pTVar1 = this._text;
				if (pTVar1 != null) {
					pTVar1.ForceMeshUpdate(false, false);
					return;
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x57EC510", Offset = "0x57EB510", VA = "0x57EC510")]
	private void DestroyEffectPreview()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$DestroyEffectPreview): 5 lines keep C-only constructs
		NameEffectController pPVar1;
		bool bVar2;
		NameEffectController* targetAddress;

		pPVar1 = this._effectPreview;
		bVar2 = ((Object)pPVar1 != null);
		if (bVar2) {
			targetAddress = &this._effectPreview;
			if (*targetAddress == null) {
				throw new NullReferenceException();
			}
			(*targetAddress).Clear();
			pPVar1 = *targetAddress;
			Object.Destroy((Object)pPVar1);
			*targetAddress = null;
			return;
		}
		return;
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x57ECB30", Offset = "0x57EBB30", VA = "0x57ECB30")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnDestroy): 5 lines keep C-only constructs
		TMP_InputField pTVar1;
		TMP_InputField.OnChangeEvent __this_00;
		TMP_InputField.TextSelectionEvent pTVar2;
		TMP_Text pTVar3;
		GisketchUIState __this_01;
		bool bVar4;
		UnityAction<T0> __this_02;
		UnityAction<T0, T1, T2> pUVar5;
		Action<TMP_TextInfo> __this_03;
		Action<string> __this_04;

		pTVar1 = this._input;
		bVar4 = ((Object)pTVar1 != null);
		if (bVar4) {
			pTVar1 = this._input;
			if (pTVar1 == null) goto label_058ecde2;
			__this_00 = pTVar1.m_OnValueChanged;
			__this_02 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextChanged);
			if (__this_00 == null) goto label_058ecde2;
			__this_00.RemoveListener(__this_02);
			pTVar1 = this._input;
			if (pTVar1 == null) goto label_058ecde2;
			pTVar2 = pTVar1.m_OnTextSelection;
			pUVar5 = new UnityAction<string, int, int>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextSelection);
			if (pTVar2 == null) goto label_058ecde2;
			pTVar2.RemoveListener(pUVar5);
			pTVar1 = this._input;
			if (pTVar1 == null) goto label_058ecde2;
			pTVar2 = pTVar1.m_OnEndTextSelection;
			pUVar5 = new UnityAction<string, int, int>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnTextSelection);
			if (pTVar2 == null) goto label_058ecde2;
			pTVar2.RemoveListener(pUVar5);
		}
		pTVar3 = this._text;
		__this_03 = null;
		bVar4 = ((Object)pTVar3 != null);
		if (bVar4) {
			pTVar3 = this._text;
			__this_03 = new Action<TMP_TextInfo>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_ApplyTextColors);
			if (pTVar3 == null) {
	label_058ecde2: ;
				throw new NullReferenceException();
			}
			pTVar3.remove_OnPreRenderText(__this_03);
		}
		this.ClearNameEffectPreview();
		__this_01 = this._state;
		if (__this_01 == null) {
			return;
		}
		__this_04 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnStateChanged);
		__this_01.remove_Changed(__this_04);
		return;
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x57ECDF0", Offset = "0x57EBDF0", VA = "0x57ECDF0")]
	private void Update()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Update): 2 lines keep C-only constructs
		int iVar1;
		int iVar2;
		TMP_InputField pTVar3;
		GisketchUIState __this_00;
		String pSVar4;
		GisketchActionContext context;
		bool bVar5;
		int iVar6;
		int start;
		int iVar7;
		GameObject gameObject;
		GisketchActionContext GStack_38;

		if (this._attached == false) {
			this.Attach();
		}
		pTVar3 = this._input;
		bVar5 = ((Object)pTVar3 == null);
		if (bVar5) {
			return;
		}
		pTVar3 = this._input;
		if (pTVar3 != null) {
			if (pTVar3.m_AllowInput == false) {
				return;
			}
			bVar5 = String.IsNullOrEmpty(this._colorsEnabledKey);
			if (bVar5) {
				if (this._colorsEnabled == false) {
					return;
				}
			}
			else {
				__this_00 = this._state;
				if (__this_00 == null) {
					return;
				}
				bVar5 = __this_00.GetBool(this._colorsEnabledKey, this._colorsEnabled);
				if (!bVar5) {
					return;
				}
			}
			pTVar3 = this._input;
			if (pTVar3 != null) {
				iVar6 = pTVar3.selectionStringAnchorPosition;
				pTVar3 = this._input;
				if (pTVar3 != null) {
					start = pTVar3.selectionStringFocusPosition;
					if (iVar6 < start) {
						start = iVar6;
					}
					pTVar3 = this._input;
					if (pTVar3 != null) {
						iVar6 = pTVar3.selectionStringAnchorPosition;
						pTVar3 = this._input;
						if (pTVar3 != null) {
							iVar7 = pTVar3.selectionStringFocusPosition;
							if (iVar6 <= iVar7) {
								iVar6 = iVar7;
							}
							this.SetSelection(start, iVar6);
							iVar1 = this._selectionStart;
							if ((iVar1 < 0) || (this._selectionEnd <= iVar1)) {
								this._openedStart = -1;
								this._openedEnd = -1;
							}
							else {
								bVar5 = Input.GetMouseButton(0);
								if (!bVar5) {
									iVar1 = this._selectionStart;
									if (this._openedStart == iVar1) {
										iVar2 = this._selectionEnd;
										if (this._openedEnd == iVar2) {
											return;
										}
									}
									else {
										iVar2 = this._selectionEnd;
									}
									this._openedStart = iVar1;
									this._openedEnd = iVar2;
									this.CapturePreviewColors();
									pTVar3 = this._input;
									if (pTVar3 == null) goto label_058ed012;
									pSVar4 = this._pickerId;
									gameObject = pTVar3.gameObject;
									GStack_38.Node = null;
									GStack_38.InputSource = 0;
									GStack_38._28_4_ = 0;
									GStack_38.ElementId = null;
									GStack_38.GameObject = null;
									GStack_38 = new GisketchActionContext(pSVar4, gameObject, null);
									pSVar4 = this._pickerId;
									context.GameObject = GStack_38.GameObject;
									context.ElementId = GStack_38.ElementId;
									context.Node = GStack_38.Node;
									context.InputSource = GStack_38.InputSource;
									context._28_4_ = GStack_38._28_4_;
									GisketchUIColorPicker.Open(context, pSVar4, false);
								}
							}
							return;
						}
					}
				}
			}
		}
	label_058ed012: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x57EC650", Offset = "0x57EB650", VA = "0x57EC650")]
	private bool ColorsEnabled()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ColorsEnabled): clean
		GisketchUIState __this_00;
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(this._colorsEnabledKey);
		if (bVar1) {
			return this._colorsEnabled != false;
		}
		__this_00 = this._state;
		if (__this_00 == null) {
			return false;
		}
		bVar1 = __this_00.GetBool(this._colorsEnabledKey, this._colorsEnabled);
		return bVar1;
	}

	[Token(Token = "0x6001271")]
	[Address(RVA = "0x57ED0F0", Offset = "0x57EC0F0", VA = "0x57ED0F0")]
	private void OnStateChanged(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnStateChanged): clean
		GisketchUIState __this_00;
		bool bVar1;
		MethodInfo method_00;

		bVar1 = (key == this._colorsEnabledKey);
		if (!bVar1) {
			return;
		}
		method_00 = null;
		bVar1 = String.IsNullOrEmpty(this._colorsEnabledKey);
		if (bVar1) {
			if (this._colorsEnabled != false) {
				return;
			}
		}
		else {
			__this_00 = this._state;
			if (__this_00 != null) {
				method_00 = (MethodInfo)this._colorsEnabledKey;
				bVar1 = __this_00.GetBool((String)method_00, this._colorsEnabled);
				if (bVar1) {
					return;
				}
			}
		}
		this.ClearSelection();
		return;
	}

	[Token(Token = "0x6001272")]
	[Address(RVA = "0x57ED150", Offset = "0x57EC150", VA = "0x57ED150")]
	private void OnTextChanged(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnTextChanged): 6 lines keep C-only constructs
		int piVar1;
		String[]* targetAddress;
		uint uVar2;
		int length;
		Action<GameObject> pSVar3;
		TMP_Text pTVar4;
		bool bVar5;
		AottgCharacterTextColorCodec.Document pGVar6;
		String pSVar7;
		MethodInfo pMVar8;
		GameObject pUVar9;
		MethodInfo pMVar10;
		String[] method_04;
		List<string> __this_00;
		bool bStack_31;
		String pSStack_30;
		AottgCharacterTextColorCodec.Document pGStack_28;

		pMVar10 = (MethodInfo)value;
		pGStack_28 = null;
		pSStack_30 = null;
		bStack_31 = false;
		pGVar6 = this.CurrentDocument();
		pMVar10 = (MethodInfo)&pSStack_30;
		bVar5 = AottgCharacterTextColorCodec.TryImport(value, pGVar6, ref pGStack_28, (String*)pMVar10, ref bStack_31);
		if (bVar5) {
			this._pendingImportColor = pSStack_30;
			if (bStack_31 != false) {
				this._gradientStops = null;
				pMVar8 = null;
				this.ClearNameEffectPreview();
				pGVar6 = pGStack_28;
				goto label_058ed363;
			}
		}
		if (value == null) {
			uVar2 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
			pSVar7 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			uVar2 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
			pSVar7 = value;
		}
		if (uVar2 == 0) {
		}
		pSVar7 = MiscExtensions.StripRichText(pSVar7);
		pSVar7 = MiscExtensions.StripHex(pSVar7);
		if (pSVar7 != null) {
			pMVar10 = null;
			pMVar8 = (MethodInfo)pSVar7.Replace("\n", (String)**(ulong*)(g_data_07556758 + 0xb8));
			if ((pMVar8 != null) ||(pMVar8 = (MethodInfo)**(long*)(g_data_07556758 + 0xb8), pMVar8 != null)) {
				if (0x1f < ((String)&pMVar8.invoker_method)._stringLength) {
					pMVar10 = null;
					pMVar8 = (MethodInfo)pMVar8.Substring(0, 0x1f);
				}
				bVar5 = ((String)pMVar8 != value);
				if (bVar5) {
					this.SetInputText((String)pMVar8);
				}
				pSVar7 = AottgCharacterTextColorCodec.Serialize(this._lastText, (IList<string>)this._colors);
				pSVar7 = AottgCharacterTextColorCodec.Retarget(pSVar7, (String)pMVar8);
				pGVar6 = AottgCharacterTextColorCodec.Parse(pSVar7);
				bVar5 = this.ApplyPendingImportColor(pGVar6);
				targetAddress = &this._gradientStops;
				if (bVar5) {
					this._gradientStops = null;
					pMVar8 = null;
					this.ClearNameEffectPreview();
					this._pendingImportColor = null;
	label_058ed363: ;
					this.ApplyDocument(pGVar6, true) ;
					pSVar3 = this._imported;
					if (pSVar3 != null) {
						pUVar9 = this.gameObject;
						(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pUVar9,pSVar3.method) ;
					}
					return;
				}
				method_04 = *targetAddress;
				if (method_04 != null) {
					pSVar7 = AottgCharacterTextColorCodec.SerializeGradient((String)pMVar8, (IList<string>)method_04);
					pGVar6 = AottgCharacterTextColorCodec.Parse(pSVar7);
					this.ApplyDocument(pGVar6, false);
					return;
				}
				if (pGVar6 != null) {
					this._lastText = pGVar6.Text;
					__this_00 = this._colors;
					if (__this_00 != null) {
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						length = __this_00._size;
						__this_00._size = 0;
						if (0 < length) {
							Array.Clear((Array)__this_00._items, 0, length);
							__this_00 = this._colors;
							if (__this_00 == null) goto label_058ed4d0;
						}
						__this_00.AddRange((IEnumerable<T>)pGVar6.Colors);
						pTVar4 = this._text;
						bVar5 = ((Object)pTVar4 != null);
						if (!bVar5) {
							return;
						}
						pTVar4 = this._text;
						if (pTVar4 != null) {
							pTVar4.ForceMeshUpdate(false, false);
							return;
						}
					}
				}
			}
		}
	label_058ed4d0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x57EC5C0", Offset = "0x57EB5C0", VA = "0x57EC5C0")]
	private void RefreshTextColors()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$RefreshTextColors): clean
		TMP_Text pTVar1;
		bool bVar2;

		pTVar1 = this._text;
		bVar2 = ((Object)pTVar1 != null);
		if (bVar2) {
			pTVar1 = this._text;
			if (pTVar1 == null) {
				throw new NullReferenceException();
			}
			pTVar1.ForceMeshUpdate(false, false);
			return;
		}
		return;
	}

	[Token(Token = "0x6001274")]
	[Address(RVA = "0x57EBEC0", Offset = "0x57EAEC0", VA = "0x57EBEC0")]
	private void ApplyDocument(AottgCharacterTextColorCodec.Document document, bool updateInput = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyDocument): 2 lines keep C-only constructs
		int piVar1;
		int length;
		TMP_InputField x;
		TMP_Text pTVar2;
		bool bVar3;
		List<string> __this_00;

		AottgCharacterTextColorEditorRuntime.Trim(document);
		if (document != null) {
			this._lastText = document.Text;
			__this_00 = this._colors;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				length = __this_00._size;
				__this_00._size = 0;
				if (0 < length) {
					Array.Clear((Array)__this_00._items, 0, length);
					__this_00 = this._colors;
					if (__this_00 == null) goto label_058ec01c;
				}
				__this_00.AddRange((IEnumerable<T>)document.Colors);
				if (updateInput) {
					x = this._input;
					bVar3 = ((Object)x != null);
					if (bVar3) {
						this.SetInputText(document.Text);
					}
				}
				pTVar2 = this._text;
				bVar3 = ((Object)pTVar2 != null);
				if (!bVar3) {
					return;
				}
				pTVar2 = this._text;
				if (pTVar2 != null) {
					pTVar2.ForceMeshUpdate(false, false);
					return;
				}
			}
		}
	label_058ec01c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x57ED4E0", Offset = "0x57EC4E0", VA = "0x57ED4E0")]
	private AottgCharacterTextColorCodec.Document CurrentDocument()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$CurrentDocument): 1 lines keep C-only constructs
		AottgCharacterTextColorCodec.Document __this_00;
		List<string> pSVar1;
		String pSVar2;

		__this_00 = il2cpp_codegen_object_new(typeof(AottgCharacterTextColorCodec.Document)) ;
		pSVar1 = new List<string>();
		__this_00.Colors = pSVar1;
		__this_00 = new Object();
		pSVar2 = this._lastText;
		if (pSVar2 == null) {
			pSVar2 = (String)**(long*)(g_data_07556758 + 0xb8);
		}
		__this_00.Text = pSVar2;
		pSVar1 = __this_00.Colors;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar1.AddRange((IEnumerable<T>)this._colors);
		return __this_00;
	}

	[Token(Token = "0x6001276")]
	[Address(RVA = "0x57ED6F0", Offset = "0x57EC6F0", VA = "0x57ED6F0")]
	private bool ApplyPendingImportColor(AottgCharacterTextColorCodec.Document document)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyPendingImportColor): clean
		String __this_00;
		List<string> __this_01;
		bool bVar1;
		ushort uVar2;
		ushort uVar3;
		int iVar4;
		int index;
		bool bVar5;
		int iVar6;
		String __this_02;
		int iVar7;
		int iVar8;

		bVar1 = String.IsNullOrEmpty(this._pendingImportColor);
		if ((document != null) && (!bVar1)) {
			bVar1 = String.IsNullOrEmpty(document.Text);
			if (!bVar1) {
				__this_00 = this._lastText;
				if (__this_00 == null) {
					__this_00 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					__this_02 = document.Text;
				}
				else {
					__this_02 = document.Text;
				}
				if (((__this_02 == null) &&(__this_02 = (String)**(long*)(g_data_07556758 + 0xb8), __this_02 == null)) || (__this_00 == null)) {
	label_058ed908: ;
					throw new NullReferenceException();
				}
				iVar6 = __this_00._stringLength;
				index = 0;
				if (iVar6 < __this_02._stringLength) {
					if ((0 < iVar6) && (0 < __this_02._stringLength)) {
						iVar4 = 0;
						do {
							index = iVar4;
							uVar2 = __this_00.get_Chars(index);
							uVar3 = __this_02.get_Chars(index);
							if (uVar2 != uVar3) {
								iVar6 = __this_00._stringLength;
								goto label_058ed84c;
							}
							iVar4 = index + 1;
							iVar6 = __this_00._stringLength;
						} while ((iVar4 < iVar6) && (iVar4 < __this_02._stringLength));
						index = index + 1;
					}
	label_058ed84c: ;
					iVar7 = 0;
					if (0 < iVar6 - index) {
						iVar8 = -1;
						do {
							if (__this_02._stringLength - index <= iVar7) break;
							uVar2 = __this_00.get_Chars(iVar6 + iVar8);
							uVar3 = __this_02.get_Chars(__this_02._stringLength + iVar8);
							if (uVar2 != uVar3) break;
							iVar7 = iVar7 + 1;
							iVar6 = __this_00._stringLength;
							iVar8 = iVar8 + -1;
						} while (iVar7 < iVar6 - index);
					}
					iVar7 = __this_02._stringLength - iVar7;
					if (index < iVar7) {
						do {
							__this_01 = document.Colors;
							if (__this_01 == null) goto label_058ed908;
							if (__this_01._size <= index) {
								return true;
							}
							__this_01.set_Item(index, (object)this._pendingImportColor);
							index = index + 1;
						} while (index < iVar7);
					}
					else {
					}
				}
			}
		}
		return bVar5;
	}

	[Token(Token = "0x6001277")]
	[Address(RVA = "0x57ED640", Offset = "0x57EC640", VA = "0x57ED640")]
	private void SetInputText(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetInputText): clean
		TMP_InputField pTVar1;
		bool bVar2;

		pTVar1 = this._input;
		bVar2 = ((Object)pTVar1 == null);
		if (bVar2) {
			return;
		}
		pTVar1 = this._input;
		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (pTVar1 != null) {
			pTVar1.SetTextWithoutNotify(value);
			pTVar1 = this._input;
			if (pTVar1 != null) {
				pTVar1.ForceLabelUpdate();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001278")]
	[Address(RVA = "0x57ED5F0", Offset = "0x57EC5F0", VA = "0x57ED5F0")]
	private static string Trim(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Trim): clean
		String pSVar1;

		if ((value == null) &&(value = (String)**(long*)(g_data_07556758 + 0xb8), value == null)) {
			throw new NullReferenceException();
		}
		if (value._stringLength < 0x20) {
			return value;
		}
		pSVar1 = value.Substring(0, 0x1f);
		return pSVar1;
	}

	[Token(Token = "0x6001279")]
	[Address(RVA = "0x57ED910", Offset = "0x57EC910", VA = "0x57ED910")]
	private static void Trim(AottgCharacterTextColorCodec.Document document)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Trim): 3 lines keep C-only constructs
		AottgCharacterTextColorCodec.Document targetAddress;
		int piVar1;
		int iVar2;
		uint uVar3;
		String[] pSVar4;
		String pSVar6;
		List<string> __this;

		if (document == null) {
			return;
		}
		pSVar6 = document.Text;
		if ((pSVar6 != null) ||(pSVar6 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar6 != null)) {
			targetAddress = &document.fields;
			if (0x1f < pSVar6._stringLength) {
				pSVar6 = pSVar6.Substring(0, 0x1f);
			}
			document.Text = pSVar6;
			__this = document.Colors;
			while ((__this != null &&(targetAddress.Text != null))) {
				iVar2 = __this._size;
				if (iVar2 <= targetAddress.Text._stringLength) goto label_058eda69;
				__this.RemoveAt(iVar2 + -1);
				__this = document.Colors;
			}
		}
		goto label_058ed9f3;
		while(true) {
			uVar3 = __this._size;
			if (targetAddress.Text._stringLength <= (int)uVar3) {
				return;
			}
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar4 = __this._items;
			if (pSVar4 == null) break;
			if (uVar3 < (uint)pSVar4.Length) {
				__this._size = uVar3 + 1;
				pSVar4[(int)uVar3] = pSVar6;
				__this = document.Colors;
			}
			else {
				__this.AddWithResize((object)pSVar6);
				__this = document.Colors;
			}
			if (__this == null) break;
	label_058eda69: ;
			pSVar6 = "FFFFFF";
			if (targetAddress.Text == null) break;
		}
	label_058ed9f3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600127A")]
	[Address(RVA = "0x57EDA90", Offset = "0x57ECA90", VA = "0x57EDA90")]
	private void OnTextSelection(string _, int start, int end)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$OnTextSelection): clean


		this.SetSelection(start, end);
		return;
	}

	[Token(Token = "0x600127B")]
	[Address(RVA = "0x57ED020", Offset = "0x57EC020", VA = "0x57ED020")]
	private void SetSelection(int start, int end)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$SetSelection): clean
		TMP_InputField pTVar1;
		String pSVar2;
		bool bVar3;
		int iVar4;
		int iVar5;
		int iVar6;

		pTVar1 = this._input;
		bVar3 = ((Object)pTVar1 == null);
		if (!bVar3) {
			pTVar1 = this._input;
			if ((pTVar1 == null) ||(pSVar2 = pTVar1.m_Text, pSVar2 == null)) {
				throw new NullReferenceException();
			}
			iVar5 = pSVar2._stringLength;
			iVar6 = iVar5;
			if (start < iVar5) {
				iVar6 = start;
			}
			if (start < 0) {
				iVar6 = 0;
			}
			if (end < iVar5) {
				iVar5 = end;
			}
			if (end < 0) {
				iVar5 = 0;
			}
			if (iVar6 == iVar5) {
				if (pTVar1.m_AllowInput != false) {
					this._selectionStart = -1;
					this._selectionEnd = -1;
				}
			}
			else {
				iVar4 = iVar5;
				if (iVar6 < iVar5) {
					iVar4 = iVar6;
				}
				this._selectionStart = iVar4;
				if (iVar5 <= iVar6) {
					iVar5 = iVar6;
				}
				this._selectionEnd = iVar5;
			}
		}
		return;
	}

	[Token(Token = "0x600127C")]
	[Address(RVA = "0x57EC690", Offset = "0x57EB690", VA = "0x57EC690")]
	private void CapturePreviewColors()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$CapturePreviewColors): 4 lines keep C-only constructs
		int piVar1;
		int length;
		int iVar2;
		uint uVar3;
		List<string> pSVar4;
		List<string> __this_00;
		String[] pSVar5;
		String item;
		int index;
		int iVar7;

		pSVar4 = this._previewColors;
		if (pSVar4 != null) {
			piVar1 = &pSVar4._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar4._size;
			pSVar4._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar4._items, 0, length);
			}
			pSVar4 = this._colors;
			if (pSVar4 != null) {
				index = this._selectionStart;
				iVar2 = this._selectionEnd;
				iVar7 = pSVar4._size;
				if (iVar2 < iVar7) {
					iVar7 = iVar2;
				}
				if (index < iVar7) {
					do {
						while(true) {
							pSVar4 = this._colors;
							if (pSVar4 == null) goto label_058ec7e0;
							__this_00 = this._previewColors;
							item = pSVar4.get_Item(index);
							if (__this_00 == null) goto label_058ec7e0;
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar5 = __this_00._items;
							if (pSVar5 == null) goto label_058ec7e0;
							uVar3 = __this_00._size;
							if ((uint)pSVar5.Length <= uVar3) break;
							__this_00._size = uVar3 + 1;
							pSVar5[(int)uVar3] = item;
							index = index + 1;
							if (iVar7 == index) goto label_058ec7c9;
						}
						__this_00.AddWithResize((object)item);
						index = index + 1;
					} while (iVar7 != index);
				}
	label_058ec7c9: ;
				this._hasPreview = true;
				return;
			}
		}
	label_058ec7e0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600127D")]
	[Address(RVA = "0x57EC9C0", Offset = "0x57EB9C0", VA = "0x57EC9C0")]
	private void RestorePreviewColors()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$RestorePreviewColors): clean
		int iVar1;
		List<string> pSVar2;
		List<string> pSVar3;
		TMP_Text pTVar4;
		bool bVar5;
		String value;
		int index;
		int iVar6;

		if (this._hasPreview == false) {
			return;
		}
		pSVar2 = this._previewColors;
		if ((pSVar2 != null) &&(pSVar3 = this._colors, pSVar3 != null)) {
			index = this._selectionStart;
			iVar1 = pSVar3._size;
			iVar6 = pSVar2._size + index;
			if (iVar1 <= iVar6) {
				iVar6 = iVar1;
			}
			if (index < iVar6) {
				do {
					pSVar2 = this._previewColors;
					if (pSVar2 == null) goto label_058ecb2a;
					pSVar3 = this._colors;
					value = pSVar2.get_Item(index - this._selectionStart);
					if (pSVar3 == null) goto label_058ecb2a;
					pSVar3.set_Item(index, (object)value);
					index = index + 1;
				} while (iVar6 != index);
			}
			pTVar4 = this._text;
			bVar5 = ((Object)pTVar4 != null);
			if (!bVar5) {
				return;
			}
			pTVar4 = this._text;
			if (pTVar4 != null) {
				pTVar4.ForceMeshUpdate(false, false);
				return;
			}
		}
	label_058ecb2a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600127E")]
	[Address(RVA = "0x57EDAA0", Offset = "0x57ECAA0", VA = "0x57EDAA0")]
	private void ApplyTextColors(TMP_TextInfo textInfo)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyTextColors): 5 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		NameEffectController x;
		List<string> pSVar3;
		TMP_CharacterInfo[] pTVar4;
		TMP_MeshInfo[] pTVar5;
		Color32[] pUVar6;
		bool bVar7;
		uint uVar8;
		Color32 UVar9;
		MethodInfo extraout_RDX;
		MethodInfo method_00;
		ulong uVar10;
		long lVar11;

		x = this._effectPreview;
		bVar7 = ((Object)x != null);
		if (!bVar7) {
			if ((textInfo == null) ||(pSVar3 = this._colors, pSVar3 == null)) {
	label_058edc0b: ;
				throw new NullReferenceException();
			}
			uVar1 = textInfo.characterCount;
			uVar8 = pSVar3._size;
			if ((int)uVar1 < (int)uVar8) {
				uVar8 = uVar1;
			}
			if (0 < (int)uVar8) {
				lVar11 = 0x50;
				uVar10 = 0;
				method_00 = extraout_RDX;
				do {
					pTVar4 = textInfo.characterInfo;
					if (pTVar4 == null) goto label_058edc0b;
					if ((uint)pTVar4.Length <= uVar10) goto label_058edc06;
					if ((*(byte)((long)(&pTVar4[0].color + -8) + lVar11) & 1) != 0) {
						uVar1 = *(uint)((long)(&pTVar4[0].vertex_BL.color + -0x23) + lVar11);
						uVar2 = *(uint)((long)(&pTVar4[0].vertex_BL.color + -0x1e) + lVar11);
						UVar9 = this.ColorFor((int32_t)uVar10);
						pTVar5 = textInfo.meshInfo;
						if (pTVar5 == null) goto label_058edc0b;
						if ((uint)pTVar5.Length <= uVar1) {
	label_058edc06: ;
							throw new IndexOutOfRangeException();
						}
						pUVar6 = pTVar5[(int)uVar1].colors32;
						if (pUVar6 == null) goto label_058edc0b;
						if ((uint)pUVar6.Length <= uVar2) goto label_058edc06;
						pUVar6[(int)uVar2]._overlap_0._at_rgba.rgba = (int32_t)UVar9._overlap_0;
						if ((uint)pUVar6.Length <= uVar2 + 1) goto label_058edc06;
						pUVar6[(int)(uVar2 + 1)]._overlap_0._at_rgba.rgba = (int32_t)UVar9._overlap_0 ;
						if ((uint)pUVar6.Length <= uVar2 + 2) goto label_058edc06;
						pUVar6[(int)(uVar2 + 2)]._overlap_0._at_rgba.rgba = (int32_t)UVar9._overlap_0 ;
						if ((uint)pUVar6.Length <= uVar2 + 3) goto label_058edc06;
						method_00 = (MethodInfo)(long)(int)(uVar2 + 3);
						pUVar6[(long)method_00]._overlap_0._at_rgba.rgba = (int32_t)UVar9._overlap_0;
					}
					uVar10 = uVar10 + 1;
					lVar11 = lVar11 + 0x178;
				} while (uVar8 != uVar10);
			}
		}
		return;
	}

	[Token(Token = "0x600127F")]
	[Address(RVA = "0x57EDC10", Offset = "0x57ECC10", VA = "0x57EDC10")]
	private Color32 ColorFor(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ColorFor): 4 lines keep C-only constructs
		List<string> __this_00;
		bool bVar1;
		Color32 UVar2;
		String pSVar3;
		float fVar4;
		ulong uVar5;
		Color local_28;

		local_28.r = 0.0;
		local_28.g = 0.0;
		local_28.b = 0.0;
		local_28.a = 0.0;
		if (-1 < index) {
			__this_00 = this._colors;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			if (index < __this_00._size) {
				pSVar3 = __this_00.get_Item(index);
				pSVar3 = String.Concat("#", pSVar3);
				goto label_058edca9;
			}
		}
		pSVar3 = "#FFFFFF";
	label_058edca9: ;
		bVar1 = ColorUtility.TryParseHtmlString(pSVar3, ref local_28);
		if (bVar1) {
			fVar4 = local_28.r;
			uVar5 = local_28._8_8_;
		}
		else {
			uVar5._0_4_ = 1.0;
			uVar5._4_4_ = 1.0;
			fVar4 = 1.0;
		}
		UVar2._overlap_0 = (_union_53531)il2cpp_runtime_helper_05334d00(fVar4, uVar5, 0);
		return (Color32)(Color32)UVar2._overlap_0;
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x57EBC10", Offset = "0x57EAC10", VA = "0x57EBC10")]
	private void StoreEffectPreview(string type, IList<string> colors)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$StoreEffectPreview): 5 lines keep C-only constructs
		IList<string> pSVar1;
		uint length;
		int iVar3;
		String[] pSVar5;
		String pSVar6;
		ulong uVar8;
		String[]* targetAddress;

		this._previewEffectType = type;
		if (colors == null) {
			this._previewEffectColors = null;
			return;
		}
		pSVar1 = colors.klass;
		uVar8 = (ulong)(pSVar1._2).interface_offsets_count;
		length = colors.CopyTo();
		pSVar5 = (String[])new string[length];
		this._previewEffectColors = pSVar5;
		targetAddress = &this._previewEffectColors;
		uVar8 = 0;
		do {
			pSVar1 = colors.klass;
			iVar3 = colors.CopyTo();
			if ((long)iVar3 <= (long)uVar8) {
				return;
			}
			pSVar5 = *targetAddress;
			pSVar1 = colors.klass;
			pSVar6 = colors.CopyTo((int32_t)uVar8);
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			if ((uint)pSVar5.Length <= uVar8) {
				throw new IndexOutOfRangeException();
			}
			pSVar5[uVar8] = pSVar6;
			uVar8 = uVar8 + 1;
		} while(true);
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x57EC340", Offset = "0x57EB340", VA = "0x57EC340")]
	private void ApplyStoredEffectPreview()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyStoredEffectPreview): 12 lines keep C-only constructs
		NameEffectController* targetAddress;
		TMP_Text pTVar1;
		bool bVar2;
		uint in_EAX;
		GameObject __this_00;
		NameEffectController pPVar3;
		NameEffectSettings settings;
		MethodInfo* in_RCX;
		Color UVar4;
		ulong uStack_28;

		uStack_28._0_4_ = in_EAX;
		uStack_28 = (ulong)(uint)uStack_28;
		pTVar1 = this._text;
		bVar2 = ((Object)pTVar1 == null);
		if (bVar2) {
			return;
		}
		bVar2 = String.IsNullOrEmpty(this._previewEffectType);
		if (bVar2) {
			return;
		}
		bVar2 = NameEffectPresets.TryResolve(this._previewEffectType, (int)((long)&uStack_28 + 4));
		if (!bVar2) {
			return;
		}
		pPVar3 = this._effectPreview;
		targetAddress = &this._effectPreview;
		bVar2 = ((Object)pPVar3 == null);
		if (bVar2) {
			pTVar1 = this._text;
			if ((pTVar1 == null) ||(__this_00 = pTVar1.gameObject , __this_00 == null)) goto label_058ec509;
			in_RCX = &MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController;
			pPVar3 = __this_00.AddComponent<NameEffectController>();
			*targetAddress = pPVar3;
		}
		if (*targetAddress != null) {
			(*targetAddress).AutoConfigure();
			settings = NameEffectPresets.GetPreset(uStack_28._4_4_);
			if (settings != null) {
				AottgCharacterTextColorEditorRuntime.ApplyPreviewColor((IList<string>)this._previewEffectColors, 0, ref settings.gradientA);
				AottgCharacterTextColorEditorRuntime.ApplyPreviewColor((IList<string>)this._previewEffectColors, 1, ref settings.gradientB);
				AottgCharacterTextColorEditorRuntime.ApplyPreviewColor((IList<string>)this._previewEffectColors, 2, ref settings.gradientC);
				AottgCharacterTextColorEditorRuntime.ApplyPreviewColor((IList<string>)this._previewEffectColors, 3, ref settings.gradientD);
				pTVar1 = this._text;
				if (pTVar1 != null) {
					UVar4.b = 1.0;
					UVar4.a = 1.0;
					UVar4.r = 1.0;
					UVar4.g = 1.0;
					pTVar1.set_color(UVar4);
					if (*targetAddress != null) {
						(*targetAddress).Apply(settings);
						return;
					}
				}
			}
		}
	label_058ec509: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x57EDCF0", Offset = "0x57ECCF0", VA = "0x57EDCF0")]
	private static void ApplyPreviewColor(IList<string> colors, int index, ref Color target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ApplyPreviewColor): clean
		bool bVar3;
		int iVar4;
		String htmlString;
		Color local_28;

		local_28.r = 0.0;
		local_28.g = 0.0;
		local_28.b = 0.0;
		local_28.a = 0.0;
		if (colors != null) {
			iVar4 = colors.get_Item();
			if (index < iVar4) {
				htmlString = colors.get_Item(index);
				bVar3 = ColorUtility.TryParseHtmlString(htmlString, ref local_28);
				if (bVar3) {
					target.r = local_28.r;
					target.g = local_28.g;
					target.b = local_28.b;
					target.a = local_28.a;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x57EC920", Offset = "0x57EB920", VA = "0x57EC920")]
	private void RestoreSelection()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$RestoreSelection): clean
		TMP_InputField pTVar1;
		bool bVar2;

		pTVar1 = this._input;
		bVar2 = ((Object)pTVar1 == null);
		if (bVar2) {
			return;
		}
		pTVar1 = this._input;
		if (pTVar1 != null) {
			pTVar1.selectionStringAnchorPosition = this._selectionStart;
			pTVar1 = this._input;
			if (pTVar1 != null) {
				pTVar1.selectionStringFocusPosition = this._selectionEnd;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001284")]
	[Address(RVA = "0x57EC7F0", Offset = "0x57EB7F0", VA = "0x57EC7F0")]
	public void ClearSelection()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$ClearSelection): 2 lines keep C-only constructs
		int piVar1;
		int iVar2;
		String pSVar3;
		List<string> pSVar4;
		bool bVar5;
		int iVar6;
		int value;
		TMP_InputField pTVar7;

		pTVar7 = this._input;
		bVar5 = ((Object)pTVar7 == null);
		if (bVar5) {
			return;
		}
		iVar2 = this._selectionEnd;
		pTVar7 = this._input;
		if (iVar2 < 0) {
			if (pTVar7 == null) goto label_058ec90f;
			iVar6 = pTVar7.caretPosition;
			pTVar7 = this._input;
			if ((pTVar7 == null) ||(pSVar3 = pTVar7.m_Text, pSVar3 == null)) goto label_058ec90f;
			iVar2 = pSVar3._stringLength;
			if (iVar6 < iVar2) {
				iVar2 = iVar6;
			}
			value = 0;
			if (-1 < iVar6) {
				value = iVar2;
			}
		}
		else {
			if ((pTVar7 == null) ||(pSVar3 = pTVar7.m_Text, pSVar3 == null)) goto label_058ec90f;
			value = pSVar3._stringLength;
			if (iVar2 < value) {
				value = iVar2;
			}
		}
		pTVar7.selectionStringAnchorPosition = value;
		pTVar7 = this._input;
		if (pTVar7 != null) {
			pTVar7.selectionStringFocusPosition = value;
			this._selectionStart = -1;
			this._selectionEnd = -1;
			this._openedStart = -1;
			this._openedEnd = -1;
			pSVar4 = this._previewColors;
			if (pSVar4 != null) {
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				iVar6 = pSVar4._size;
				pSVar4._size = 0;
				if (0 < iVar6) {
					Array.Clear((Array)pSVar4._items, 0, iVar6);
				}
				this._hasPreview = false;
				return;
			}
		}
	label_058ec90f: ;
		throw new NullReferenceException();
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
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$.ctor): clean
		List<string> pSVar1;

		pSVar1 = new List<string>();
		this._colors = pSVar1;
		pSVar1 = new List<string>();
		this._previewColors = pSVar1;
		this._lastText = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this._selectionStart = -1;
		this._selectionEnd = -1;
		this._openedStart = -1;
		this._openedEnd = -1;
		this._colorsEnabled = true;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorEditorRuntime.c.

	// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditorRuntime$$Find<object>: 2 lines keep C-only constructs
	private static object Find_object(Transform root, String id)
	{
		uint uVar1;
		uint uVar2;
		Object x;
		bool bVar3;
		Object[] pSVar4;
		ulong uVar5;
		Object __this;
		String a;
		ulong uVar6;

		if ((method.rgctx_data == null) &&(il2cpp_codegen_initialize_runtime_metadata(&typeof(Object)), method.rgctx_data == null)) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = ((Object)root == null);
		if (!bVar3) {
			if ((root == null) ||(pSVar4 = root.GetComponentsInChildren<object>(true), pSVar4 == null)) {
	label_0358816b: ;
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar4.Length) {
				uVar5 = pSVar4.Length & 0xffffffff;
				uVar6 = 0;
				do {
					if (uVar5 <= uVar6) {
						throw new IndexOutOfRangeException();
					}
					x = (Object)pSVar4[uVar6];
					bVar3 = (x != null);
					if (bVar3) {
						if ((x == null) ||(__this = (Object)x.gameObject, __this == null)) goto label_0358816b;
						a = __this.name;
						bVar3 = (a == id);
						if (bVar3) {
							return (object)x;
						}
					}
					uVar6 = uVar6 + 1;
					uVar2 = (uint)pSVar4.Length;
					uVar5 = (ulong)uVar2;
				} while ((long)uVar6 < (long)(int)uVar2);
			}
		}
		return null;
	}
}
