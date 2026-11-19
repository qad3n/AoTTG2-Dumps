// ==================== AoTTG2 cross-reference ====================
// Type: UI.ChatPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ChatPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ChatPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text.RegularExpressions;
using GameManagers;
using Il2CppDummyDll;
using Photon.Realtime;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Utility;

namespace UI;

[Token(Token = "0x200081C")]
internal class ChatPanel : BasePanel
{
	[Token(Token = "0x200081D")]
	private enum EmojiPanelMode
	{
		[Token(Token = "0x4002880")]
		Emoji,
		[Token(Token = "0x4002881")]
		Sticker
	}

	[Token(Token = "0x200081E")]
	private static class UIAnchors
	{
		[Token(Token = "0x4002882")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly Vector2 TopStretch;

		[Token(Token = "0x4002883")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static readonly Vector2 TopStretchEnd;

		[Token(Token = "0x4002884")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public static readonly Vector2 FullStretch;

		[Token(Token = "0x4002885")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public static readonly Vector2 FullStretchStart;

		[Token(Token = "0x4002886")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public static readonly Vector2 RightStretch;

		[Token(Token = "0x4002887")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public static readonly Vector2 RightStretchEnd;

		[Token(Token = "0x4002888")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public static readonly Vector2 CenterMiddle;

		[Token(Token = "0x4002889")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public static readonly Vector2 TopCenter;

		[Token(Token = "0x400288A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public static readonly Vector2 RightCenter;

		[Token(Token = "0x400288B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public static readonly Vector2 LeftCenter;

		[Token(Token = "0x400288C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public static readonly Vector2 BottomLeft;

		[Token(Token = "0x400288D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public static readonly Vector2 TopRight;
	}

	[Token(Token = "0x200081F")]
	protected class ChatLineView
	{
		[Token(Token = "0x400288E")]
		private const float LineHeightAtDefaultFontSize = 30f;

		[Token(Token = "0x400288F")]
		private const float DefaultFontSize = 18f;

		[Token(Token = "0x4002890")]
		private const float LineRightPadding = 8f;

		[Token(Token = "0x4002891")]
		private const float MinimumBodyWidth = 48f;

		[Token(Token = "0x4002892")]
		private const float NameReservePadding = 2f;

		[Token(Token = "0x4002893")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly TMP_InputField _selectionInput;

		[Token(Token = "0x4002894")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly TextMeshProUGUI _displayText;

		[Token(Token = "0x4002895")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private readonly RectTransform _rowRect;

		[Token(Token = "0x4002896")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private readonly ChatPlayerNameOverlay _nameOverlay;

		[Token(Token = "0x4002897")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private readonly ChatPanel _chatPanel;

		[Token(Token = "0x4002898")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private readonly Color _defaultColor;

		[Token(Token = "0x4002899")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private TMP_FontAsset _defaultFont;

		[Token(Token = "0x400289A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ChatManager.ChatDisplayLine _lastLine;

		[Token(Token = "0x400289B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		private bool _hasLastLine;

		[Token(Token = "0x400289C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x91")]
		private bool _playerMode;

		[Token(Token = "0x400289D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x92")]
		private bool _metricsDirty;

		[Token(Token = "0x400289E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x93")]
		private bool _playerStyleDirty;

		[Token(Token = "0x400289F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
		private int _styledSenderID;

		[Token(Token = "0x40028A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private string _styledSenderName;

		[Token(Token = "0x40028A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
		private TMP_FontAsset _styledNameFont;

		[Token(Token = "0x40028A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
		private float _styledFontSize;

		[Token(Token = "0x40028A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
		private float _cachedStyledNameWidth;

		[Token(Token = "0x40028A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
		private float _cachedBaseNameWidth;

		[Token(Token = "0x40028A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
		private float _fontSize;

		[Token(Token = "0x40028A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
		private float _chatWidth;

		[Token(Token = "0x40028A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
		private float _rowHeight;

		[Token(Token = "0x17000D77")]
		public GameObject gameObject
		{
			[Token(Token = "0x6004DBB")]
			[Address(RVA = "0x5C17FC0", Offset = "0x5C16FC0", VA = "0x5C17FC0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$get_gameObject): clean
				return this._gameObject_k__BackingField;
			}
			[Token(Token = "0x6004DBC")]
			[Address(RVA = "0x5C17FD0", Offset = "0x5C16FD0", VA = "0x5C17FD0")]
			[CompilerGenerated]
			private set
			{
				// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$set_gameObject): clean
				this._gameObject_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000D78")]
		public Transform transform
		{
			[Token(Token = "0x6004DBD")]
			[Address(RVA = "0x5C17FF0", Offset = "0x5C16FF0", VA = "0x5C17FF0")]
			get
			{
				// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$get_transform): clean
				GameObject __this_00;
				Transform pUVar1;

				__this_00 = this._gameObject_k__BackingField;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				return pUVar1;
			}
		}

		[Token(Token = "0x17000D79")]
		public RectTransform RectTransform
		{
			[Token(Token = "0x6004DBE")]
			[Address(RVA = "0x5C18010", Offset = "0x5C17010", VA = "0x5C18010")]
			get
			{
				// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$get_RectTransform): clean
				return this._rowRect;
			}
		}

		[Token(Token = "0x17000D7A")]
		public float Height
		{
			[Token(Token = "0x6004DBF")]
			[Address(RVA = "0x5C18020", Offset = "0x5C17020", VA = "0x5C18020")]
			get
			{
				// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$get_Height): clean
				return this._rowHeight;
			}
		}

		[Token(Token = "0x6004DC0")]
		[Address(RVA = "0x5C14DD0", Offset = "0x5C13DD0", VA = "0x5C14DD0")]
		public ChatLineView(Transform parent, ElementStyle style, TMP_InputField chatInput, ChatPanel chatPanel)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$.ctor): 31 lines keep C-only constructs
			RectTransform* targetAddress;
			TextMeshProUGUI* targetAddress_00;
			ChatPanel.ChatLineView targetAddress_01;
			GameObject* targetAddress_02;
			UISettings pSVar1;
			IntSetting pSVar2;
			String panel;
			Il2CppType handle;
			TMP_FontAsset pTVar3;
			Type[] pSVar4;
			Type pSVar5;
			object pIVar6;
			GameObject pUVar7;
			Transform pUVar8;
			RectTransform pUVar9;
			Transform pUVar10;
			GameObject __this_00;
			TextMeshProUGUI pTVar11;
			RectTransform __this_01;
			TMP_InputField pTVar12;
			ChatPlayerNameOverlay pUVar13;
			float fVar14;
			Color UVar15;

			if (Il2CppMethodInitialized_07547d79 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_TMP_InputField) ;
				Il2CppMethodInitialized_07547d79 = true;
			}
			this._metricsDirty = true;
			this._playerStyleDirty = true;
			this._styledSenderID = -1;
			this._styledSenderName = (String)**(ulong*)(g_data_07556758 + 0xb8);
			base();
			this._chatPanel = chatPanel;
			if (style == null) goto label_05d15821;
			this._fontSize = (float)style.FontSize;
			pSVar1 = SettingsManager.UISettings;
			if (pSVar1 == null) goto label_05d15821;
			pSVar2 = pSVar1.ChatWidth;
			if (pSVar2 == null) goto label_05d15821;
			this._chatWidth = (float)pSVar2._value;
			pTVar3 = GisketchTypography.Resolve("text", 400, null);
			this._defaultFont = pTVar3;
			panel = style.ThemePanel;
			UVar15 = (Color)UIManager.GetThemeColor(panel, "TextColor", "Default", "DefaultPanel");
			this._defaultColor = UVar15;
			pSVar4 = (Type[])new Type[1];
			handle = TypeRef_UnityEngine_RectTransform;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			if (pSVar4 == null) goto label_05d15821;
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05d1582b;
			}
			if ((int)pSVar4.Length == 0) goto label_05d15826;
			pSVar4[0] = pSVar5;
			pUVar7 = new GameObject("ChatLine", pSVar4);
			targetAddress_02 = &this._gameObject_k__BackingField;
			this._gameObject_k__BackingField = pUVar7;
			pUVar7 = this._gameObject_k__BackingField;
			if (pUVar7 == null) goto label_05d15821;
			pUVar8 = pUVar7.transform;
			if (pUVar8 == null) goto label_05d15821;
			pUVar8.SetParent(parent, false);
			if (*targetAddress_02 == null) goto label_05d15821;
			pUVar9 = (*targetAddress_02).GetComponent<RectTransform>();
			targetAddress = &this._rowRect;
			this._rowRect = pUVar9;
			pUVar9 = this._rowRect;
			if (pUVar9 == null) goto label_05d15821;
			pUVar9.anchorMin = (Vector2)(ChatPanel.UIAnchors.TopStretch);
			if (*targetAddress == null) goto label_05d15821;
			(*targetAddress).anchorMax = (Vector2)(ChatPanel.UIAnchors.TopStretchEnd);
			if (*targetAddress == null) goto label_05d15821;
			(*targetAddress).pivot = (Vector2)(ChatPanel.UIAnchors.TopCenter);
			fVar14 = (this._fontSize / 18.0) * 30.0;
			this._rowHeight = fVar14;
			pUVar9 = this._rowRect;
			if (pUVar9 == null) goto label_05d15821;
			pUVar9.sizeDelta = (Vector2)((ulong)(uint)fVar14 << 0x20);
			pSVar4 = (Type[])new Type[2];
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
			if (pSVar4 == null) goto label_05d15821;
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05d1582b;
			}
			if ((int)pSVar4.Length == 0) goto label_05d15826;
			pSVar4[0] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_RectMask2D);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05d1582b;
			}
			if ((pSVar4.Length & 0xfffffffe) == 0) goto label_05d15826;
			pSVar4[1] = pSVar5;
			pUVar7 = new GameObject("Text Area", pSVar4);
			if (pUVar7 == null) {
		label_05d15821: ;
				throw new NullReferenceException();
			}
			pUVar8 = pUVar7.transform;
			if (*targetAddress_02 == null) goto label_05d15821;
			pUVar10 = (*targetAddress_02).transform;
			if (pUVar8 == null) goto label_05d15821;
			pUVar8.SetParent(pUVar10, false);
			pUVar9 = pUVar7.GetComponent<RectTransform>();
			if (pUVar9 == null) goto label_05d15821;
			pUVar9.anchorMin = (Vector2)(ChatPanel.UIAnchors.FullStretchStart);
			pUVar9.anchorMax = (Vector2)(ChatPanel.UIAnchors.FullStretch);
			pUVar9.sizeDelta = (Vector2)(Vector2.zeroVector);
			pUVar9.anchoredPosition = (Vector2)(Vector2.zeroVector);
			pUVar9.offsetMax = (Vector2)0xc1000000;
			pSVar4 = (Type[])new Type[3];
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
			if (pSVar4 == null) goto label_05d15821;
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05d1582b;
			}
			if ((int)pSVar4.Length == 0) goto label_05d15826;
			pSVar4[0] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
			if (pSVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05d1582b;
			}
			if ((pSVar4.Length & 0xfffffffe) != 0) {
				pSVar4[1] = pSVar5;
				pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
				if (pSVar5 != null) {
					pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class);
					if (pIVar6 == null) {
		label_05d1582b: ;
						pIVar6 = new ArrayTypeMismatchException();
						throw pIVar6;
					}
				}
				if (2 < (uint)pSVar4.Length) {
					pSVar4[2] = pSVar5;
					__this_00 = new GameObject("Text", pSVar4);
					if (__this_00 != null) {
						pUVar8 = __this_00.transform;
						pUVar10 = pUVar7.transform;
						if (pUVar8 != null) {
							pUVar8.SetParent(pUVar10, false);
							pTVar11 = __this_00.GetComponent<TextMeshProUGUI>();
							targetAddress_00 = &this._displayText;
							this._displayText = pTVar11;
							ChatPanel.ChatLineView.ConfigureText(this._displayText, (float)style.FontSize, (Color)this._defaultColor, true, true);
							__this_01 = __this_00.GetComponent<RectTransform>();
							if (__this_01 != null) {
								__this_01.anchorMin = (Vector2)(ChatPanel.UIAnchors.FullStretchStart);
								__this_01.anchorMax = (Vector2)(ChatPanel.UIAnchors.FullStretch) ;
								__this_01.sizeDelta = (Vector2)(Vector2.zeroVector);
								__this_01.anchoredPosition = (Vector2)(Vector2.zeroVector);
								if (*targetAddress_02 != null) {
									pTVar12 = (*targetAddress_02).AddComponent<TMP_InputField>();
									targetAddress_01 = &this.fields;
									this._selectionInput = pTVar12;
									pTVar12 = this._selectionInput;
									if (pTVar12 != null) {
										pTVar12.textComponent = (TMP_Text)*targetAddress_00;
										if (targetAddress_01._selectionInput != null) {
											(targetAddress_01._selectionInput).textViewport = pUVar9;
											pTVar12 = targetAddress_01._selectionInput;
											if (pTVar12 != null) {
												pTVar12.m_ReadOnly = true;
												pTVar12.richText = true;
												pTVar12 = targetAddress_01._selectionInput;
												if (pTVar12 != null) {
													pTVar12.m_OnFocusSelectAll = false;
													pTVar12.m_ResetOnDeActivation = false;
													pTVar12.m_RestoreOriginalTextOnEscape = false;
													pTVar12.shouldHideMobileInput = true;
													if (targetAddress_01._selectionInput != null) {
														(targetAddress_01._selectionInput).caretWidth = 0;
														if (targetAddress_01._selectionInput != null) {
															(targetAddress_01._selectionInput).lineType = 2;
															if (*targetAddress_02 != null) {
																pUVar13 = (*targetAddress_02).AddComponent<ChatPlayerNameOverlay>();
																this._nameOverlay = pUVar13;
																pUVar13 = this._nameOverlay;
																if (pUVar13 != null) {
																	pUVar13.Initialize(*targetAddress_00);
																	if (*targetAddress_02 != null) {
																		pIVar6 = (*targetAddress_02).AddComponent<ChatPanel.ChatLineClickHandler>();
																		if (pIVar6 != null) {
																			pIVar6[2].klass = (Il2CppClass)this;
																			pIVar6[2].monitor = chatInput;
																			pIVar6[3].klass = (Il2CppClass)chatPanel;
																			return;
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					goto label_05d15821;
				}
			}
		label_05d15826: ;
			throw new IndexOutOfRangeException();
		}

		[Token(Token = "0x6004DC1")]
		[Address(RVA = "0x5C17660", Offset = "0x5C16660", VA = "0x5C17660")]
		public void ApplyChatMetrics(float fontSize, float width)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$ApplyChatMetrics): 31 lines keep C-only constructs
			float fVar1;
			RectTransform __this_00;
			TextMeshProUGUI __this_01;
			Vector2 value;
			Vector2 UVar2;
			byte[] auVar3 = new byte[16];
			byte[] auVar4 = new byte[16];
			uint in_ECX;
			uint uVar5;
			int iVar6;
			int iVar7;
			uint in_XMM0_Db;
			uint in_XMM1_Db;
			float fVar8;
			float fVar9;
			byte[] auVar10 = new byte[16];
			byte[] auVar11 = new byte[16];
			byte[] auVar12 = new byte[16];

			fVar9 = this._fontSize;
			fVar8 = Mathf.Epsilon * 8.0;
			fVar1 = this._chatWidth;
			auVar10._0_8_ = CONCAT44(fVar1, fVar9) & 0x7fffffff7fffffff;
			auVar10._8_8_ = 0;
			auVar11._8_4_ = in_XMM0_Db & 0x7fffffff;
			auVar11._0_8_ = CONCAT44(width, fontSize) & 0x7fffffff7fffffff;
			auVar11._12_4_ = in_XMM1_Db & 0x7fffffff;
			auVar11 = maxps(auVar10, auVar11);
			auVar12._0_4_ = auVar11._0_4_ * 1e-06;
			auVar12._4_4_ = auVar11._4_4_ * 1e-06;
			auVar12._8_4_ = auVar11._8_4_ * 0.0;
			auVar12._12_4_ = auVar11._12_4_ * 0.0;
			auVar3._4_4_ = fVar8;
			auVar3._0_4_ = fVar8;
			auVar3._8_4_ = fVar8;
			auVar3._12_4_ = fVar8;
			auVar11 = maxps(auVar12, auVar3);
			fVar9 = ABS(fontSize - fVar9);
			iVar6 = -(uint)(fVar9 < auVar11._0_4_);
			iVar7 = -(uint)(ABS(width - fVar1) < auVar11._4_4_);
			auVar4._4_4_ = iVar6;
			auVar4._0_4_ = iVar6;
			auVar4._8_4_ = iVar7;
			auVar4._12_4_ = iVar7;
			uVar5 = movmskpd(in_ECX, auVar4);
			if ((char)uVar5 == '\x03') {
				return;
			}
			this._fontSize = fontSize;
			this._chatWidth = width;
			this._metricsDirty = true;
			if (auVar11._0_4_ <= fVar9) {
				this._playerStyleDirty = true;
			}
			fVar9 = ceilf((fontSize / 18.0) * 30.0);
			this._rowHeight = fVar9;
			__this_00 = this._rowRect;
			if (__this_00 != null) {
				UVar2 = __this_00.sizeDelta;
				value.y = this._rowHeight;
				value.x = UVar2.x;
				__this_00.sizeDelta = value;
				__this_01 = this._displayText;
				if (__this_01 != null) {
					__this_01.fontSize = fontSize;
					return;
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004DC2")]
		[Address(RVA = "0x5C177B0", Offset = "0x5C167B0", VA = "0x5C177B0")]
		public void SetFont(TMP_FontAsset fontAsset)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$SetFont): clean
			TMP_FontAsset x;
			TextMeshProUGUI __this_00;
			bool bVar1;

			bVar1 = ((Object)fontAsset == null);
			if (!bVar1) {
				x = this._defaultFont;
				bVar1 = ((Object)x == (Object)fontAsset);
				if (!bVar1) {
					this._defaultFont = fontAsset;
					__this_00 = this._displayText;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_00.font = fontAsset;
					this._metricsDirty = true;
					this._playerStyleDirty = true;
				}
			}
			return;
		}

		[Token(Token = "0x6004DC3")]
		[Address(RVA = "0x5C159A0", Offset = "0x5C149A0", VA = "0x5C159A0")]
		public void InvalidatePlayerStyle(int actorNumber)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$InvalidatePlayerStyle): clean
			if (this._styledSenderID == actorNumber) {
				this._playerStyleDirty = true;
			}
			return;
		}

		[Token(Token = "0x6004DC4")]
		[Address(RVA = "0x5C12C50", Offset = "0x5C11C50", VA = "0x5C12C50")]
		public void SetLine(ChatManager.ChatDisplayLine line)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$SetLine): 18 lines keep C-only constructs
			float fVar1;
			uint uVar2;
			ChatPlayerNameOverlay pUVar3;
			bool bVar4;
			sbyte cVar5;
			Room pPVar6;
			Player player;
			TMP_FontAsset font;
			MethodInfo pMVar7;
			TMP_FontAsset x;
			MethodInfo in_RDX;
			MethodInfo extraout_RDX_00;
			MethodInfo extraout_RDX_01;
			MethodInfo extraout_RDX_02;
			MethodInfo extraout_RDX_03;
			MethodInfo extraout_RDX_04;
			MethodInfo extraout_RDX_05;
			MethodInfo extraout_RDX_06;
			MethodInfo extraout_RDX_07;
			MethodInfo method_02;
			MethodInfo extraout_RDX_08;
			String pSVar8;
			float fVar9;
			ChatDisplayNameRange local_78;
			TMP_FontAsset local_70;
			int local_64;
			String local_60;
			TMP_FontAsset local_58;
			String local_50;
			String local_48;
			TMP_FontAsset local_40;
			String local_38;

			local_78.SourceStartIndex = 0;
			local_78.SourceEndIndex = 0;
			cVar5 = false;
			if ((line.UsePlayerStyle & 1U) != 0) {
				cVar5 = this._playerStyleDirty;
			}
			if (((this._hasLastLine != false) &&(this._lastLine.LineID == line.LineID)) &&(((this._lastLine.UsePlayerStyle ^ line.UsePlayerStyle) & 1U) == 0)) {
				local_70 = (TMP_FontAsset)line.TimeText;
				local_40 = (TMP_FontAsset)line.IdText;
				local_58 = (TMP_FontAsset)line.BodyText;
				local_38 = this._lastLine.TimeText;
				local_48 = this._lastLine.IdText;
				local_50 = this._lastLine.SenderName;
				local_60 = this._lastLine.BodyText;
				local_64 = this._lastLine.SenderID;
				method = (MethodInfo)line.PlainText;
				bVar4 = (this._lastLine.PlainText == line.PlainText);
				in_RDX = extraout_RDX_00;
				if (((((bVar4) &&(method = (MethodInfo)local_70, bVar4 = (local_38 == (String)local_70), in_RDX = extraout_RDX_01, bVar4)) &&((method = (MethodInfo)local_40, bVar4 = (local_48 == (String)local_40), in_RDX = extraout_RDX_02, bVar4 &&((method = (MethodInfo)line.SenderName, bVar4 = (local_50 == line.SenderName), in_RDX = extraout_RDX_03, bVar4 &&(method = (MethodInfo)local_58, bVar4 = (local_60 == (String)local_58), in_RDX = extraout_RDX_04, bVar4)))))) && (local_64 == line.SenderID)) &&((this._metricsDirty == false && (cVar5 == false)))) {
					return;
				}
			}
			if ((line.UsePlayerStyle & 1U) == 0) {
				if (line.PlainText == null) {
					cVar5 = this._playerMode;
					pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				else {
					cVar5 = this._playerMode;
					pSVar8 = line.PlainText;
				}
				if (cVar5 != false) {
					pUVar3 = this._nameOverlay;
					if (pUVar3 == null) goto label_05d1316c;
					pUVar3.Clear();
					in_RDX = extraout_RDX_05;
				}
				this._playerMode = false;
				this._playerStyleDirty = true;
				this.SetDisplayText(pSVar8);
				this.UpdateRowHeight(pSVar8);
				goto label_05d13184;
			}
			this._playerMode = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				pPVar6 = PhotonNetwork.CurrentRoom;
				if (pPVar6 != null) goto label_05d12e85;
		label_05d12f04: ;
				font = this._defaultFont;
				player = null;
				uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			else {
				pPVar6 = PhotonNetwork.CurrentRoom;
				if (pPVar6 == null) goto label_05d12f04;
		label_05d12e85: ;
				pPVar6 = PhotonNetwork.CurrentRoom;
				if (pPVar6 == null) goto label_05d1316c;
				player = pPVar6.GetPlayer(line.SenderID, false);
				if (player == null) goto label_05d12f04;
				font = NameFontCatalog.FontForPlayer(player, false);
				uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			pMVar7 = null;
			bVar4 = ((Object)font == null);
			if (bVar4) {
				font = this._defaultFont;
			}
			pMVar7 = (MethodInfo)ChatDisplayLineComposer.ComposePlayerLine(line, ref local_78, 0.0);
			if ((this._playerStyleDirty == false) &&(this._styledSenderID == line.SenderID)) {
				pSVar8 = this._styledSenderName;
				if (line.SenderName == null) {
					bVar4 = (pSVar8 != (String)**(ulong*)(g_data_07556758 + 0xb8));
					if (!bVar4) goto label_05d12fc9;
					goto label_05d13022;
				}
				bVar4 = (pSVar8 != line.SenderName);
				if (bVar4) goto label_05d13022;
		label_05d12fc9: ;
				x = this._styledNameFont;
				if ((typeof(Object)._2).cctor_finished_or_no_cctor == 0) {
					local_70 = x;
					x = local_70;
				}
				bVar4 = ((Object)x != (Object)font);
				if ((bVar4) ||(cVar5 = il2cpp_runtime_helper_03296c30(this._styledFontSize, this._fontSize, 0), method_02 = extraout_RDX_06, cVar5 == false)) goto label_05d13022;
			}
			else {
		label_05d13022: ;
				fVar9 = this.ApplyPlayerStyle(player, font, line.SenderName, (ChatDisplayNameRange)local_78);
				this._cachedStyledNameWidth = fVar9;
				fVar9 = this.MeasureDisplayNameWidth(line.SenderName);
				this._cachedBaseNameWidth = fVar9;
				this._styledSenderID = line.SenderID;
				pSVar8 = line.SenderName;
				if (line.SenderName == null) {
					pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				this._styledSenderName = pSVar8;
				this._styledNameFont = font;
				this._styledFontSize = this._fontSize;
				this._playerStyleDirty = false;
				method_02 = extraout_RDX_07;
			}
			fVar9 = this._cachedStyledNameWidth;
			fVar1 = this._cachedBaseNameWidth;
			if ((fVar1 < fVar9) && (fVar9 = (fVar9 - fVar1) + 2.0, 0.0 < fVar9)) {
				pMVar7 = (MethodInfo)ChatDisplayLineComposer.ComposePlayerLine(line, ref local_78, fVar9);
				method_02 = extraout_RDX_08;
			}
			this.SetDisplayText((String)pMVar7);
			this.UpdateRowHeight((String)pMVar7);
			pUVar3 = this._nameOverlay;
			if (pUVar3 != null) {
				pUVar3._range = local_78;
				if ((local_78.SourceStartIndex < 0) || (local_78.SourceEndIndex <= local_78.SourceStartIndex)) {
					pUVar3._hasRange = false;
					pUVar3 = this._nameOverlay;
				}
				else {
					pSVar8 = pUVar3._nameText;
					if (pSVar8 == null) goto label_05d1316c;
					pUVar3._hasRange = 0 < pSVar8._stringLength;
					pUVar3 = this._nameOverlay;
				}
				if (pUVar3 != null) {
					pUVar3.SyncToSource();
		label_05d13184: ;
					*(long)&this._lastLine.SenderID = line._48_8_;
					this._lastLine.LineID = line.LineID;
					this._lastLine.SenderName = line.SenderName;
					this._lastLine.BodyText = line.BodyText;
					this._lastLine.TimeText = line.TimeText;
					this._lastLine.IdText = line.IdText;
					this._lastLine.PlainText = line.PlainText;
					*(long)&this._lastLine.UsePlayerStyle = line._8_8_;
					this._hasLastLine = true;
					this._metricsDirty = false;
					return;
				}
			}
		label_05d1316c: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004DC5")]
		[Address(RVA = "0x5C183C0", Offset = "0x5C173C0", VA = "0x5C183C0")]
		private void SetDisplayText(string text)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$SetDisplayText): clean
			TextMeshProUGUI pTVar1;
			TMP_FontAsset x;
			TMP_InputField pTVar2;
			bool bVar3;
			String text_00;
			TMP_FontAsset value;

			text_00 = GisketchArabicText.ToVisual(text, false);
			value = GisketchTypography.ForText(text_00, this._defaultFont);
			pTVar1 = this._displayText;
			if (pTVar1 != null) {
				x = pTVar1.m_fontAsset;
				bVar3 = ((Object)x != (Object)value);
				if (bVar3) {
					pTVar1 = this._displayText;
					if (pTVar1 == null) goto label_05d184c6;
					pTVar1.font = value;
				}
				pTVar2 = this._selectionInput;
				if (pTVar2 != null) {
					bVar3 = (pTVar2.m_Text != text_00);
					if (!bVar3) {
						return;
					}
					pTVar2 = this._selectionInput;
					if (pTVar2 != null) {
						pTVar2.SetTextWithoutNotify(text_00);
						return;
					}
				}
			}
		label_05d184c6: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004DC6")]
		[Address(RVA = "0x5C131E0", Offset = "0x5C121E0", VA = "0x5C131E0")]
		public bool Shows(ChatManager.ChatDisplayLine line)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$Shows): clean
			int iVar1;
			String a;
			String a_00;
			String a_01;
			String a_02;
			bool bVar2;
			bool bVar3;

			if (((this._hasLastLine == false) ||(this._lastLine.LineID != line.LineID)) ||(((this._lastLine.UsePlayerStyle ^ line.UsePlayerStyle) & 1U) != 0)) {
				bVar3 = false;
			}
			else {
				a = this._lastLine.TimeText;
				a_00 = this._lastLine.IdText;
				a_01 = this._lastLine.SenderName;
				a_02 = this._lastLine.BodyText;
				iVar1 = this._lastLine.SenderID;
				bVar3 = false;
				bVar2 = (this._lastLine.PlainText == line.PlainText);
				if (bVar2) {
					bVar3 = false;
					bVar2 = (a == line.TimeText);
					if (bVar2) {
						bVar3 = false;
						bVar2 = (a_00 == line.IdText);
						if (bVar2) {
							bVar3 = false;
							bVar2 = (a_01 == line.SenderName);
							if (bVar2) {
								bVar3 = (a_02 == line.BodyText);
								bVar3 = iVar1 == line.SenderID && bVar3;
							}
						}
					}
				}
			}
			return bVar3;
		}

		[Token(Token = "0x6004DC7")]
		[Address(RVA = "0x5C185B0", Offset = "0x5C175B0", VA = "0x5C185B0")]
		private void RememberLine(ChatManager.ChatDisplayLine line)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$RememberLine): 2 lines keep C-only constructs
			this._lastLine.SenderID = line.SenderID;
			*(uint)&this._lastLine.field_0x34 = line._52_4_;
			this._lastLine.LineID = line.LineID;
			this._lastLine.SenderName = line.SenderName;
			this._lastLine.BodyText = line.BodyText;
			this._lastLine.TimeText = line.TimeText;
			this._lastLine.IdText = line.IdText;
			this._lastLine.PlainText = line.PlainText;
			this._lastLine.UsePlayerStyle = line.UsePlayerStyle;
			*(undefined7)&this._lastLine.field_0x9 = line._9_7_;
			this._hasLastLine = true;
			this._metricsDirty = false;
			return;
		}

		[Token(Token = "0x6004DC8")]
		[Address(RVA = "0x5C18D10", Offset = "0x5C17D10", VA = "0x5C18D10")]
		private static bool DisplayLinesEqual(ChatManager.ChatDisplayLine a, ChatManager.ChatDisplayLine b)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$DisplayLinesEqual): clean
			bool bVar1;

			if ((a.LineID != b.LineID) ||(((b.UsePlayerStyle ^ a.UsePlayerStyle) & 1U) != 0)) {
				return false;
			}
			bVar1 = (a.PlainText == b.PlainText);
			if (!bVar1) {
				return false;
			}
			bVar1 = (a.TimeText == b.TimeText);
			if (!bVar1) {
				return false;
			}
			bVar1 = (a.IdText == b.IdText);
			if (!bVar1) {
				return false;
			}
			bVar1 = (a.SenderName == b.SenderName);
			if (!bVar1) {
				return false;
			}
			bVar1 = (a.BodyText == b.BodyText);
			if (bVar1) {
				return a.SenderID == b.SenderID;
			}
			return false;
		}

		[Token(Token = "0x6004DC9")]
		[Address(RVA = "0x5C18DC0", Offset = "0x5C17DC0", VA = "0x5C18DC0")]
		public void HandlePointerClick(PointerEventData eventData)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$HandlePointerClick): 6 lines keep C-only constructs
			TMP_LinkInfo pTVar1;
			Vector2 UVar2;
			TextMeshProUGUI pTVar3;
			TMP_LinkInfo[] pTVar4;
			ChatPanel __this_00;
			TMP_LinkInfo pTVar5;
			int iVar6;
			bool bVar7;
			uint uVar8;
			TMP_TextInfo pTVar9;
			String pSVar10;
			Player pPVar11;
			Room pPVar12;
			float fVar13;
			float fVar14;
			byte[] auVar15 = new byte[16];
			Vector3 position;
			int local_60;
			int local_5c;
			Vector2 local_58;
			TMP_LinkInfo local_48;

			local_5c = 0;
			local_60 = 0;
			if (eventData != null) {
				pTVar3 = this._displayText;
				UVar2 = eventData._position_k__BackingField;
				fVar13 = UVar2.x;
				fVar14 = UVar2.y;
				if ((typeof(TMP_TextUtilities)._2).cctor_finished_or_no_cctor == 0) {
					local_58 = UVar2;
					fVar13 = local_58.x;
					fVar14 = local_58.y;
				}
				position.y = fVar14;
				position.x = fVar13;
				position.z = 0.0;
				uVar8 = TMP_TextUtilities.FindIntersectingLink((TMP_Text)pTVar3, position, null);
				if (uVar8 == 0xffffffff) {
					return;
				}
				pTVar3 = this._displayText;
				if (((pTVar3 != null) &&(pTVar9 = pTVar3.textInfo, pTVar9 != null)) &&(pTVar4 = pTVar9.linkInfo, pTVar4 != null)) {
					if ((uint)pTVar4.Length <= uVar8) {
						throw new IndexOutOfRangeException();
					}
					pTVar1 = pTVar4.m_Items + (int)uVar8;
					local_48.textComponent = pTVar1.textComponent;
					local_48.hashCode = pTVar1.hashCode;
					local_48.linkIdFirstCharacterIndex = pTVar1.linkIdFirstCharacterIndex;
					pTVar5 = &pTVar4[(int)uVar8];
					local_48.linkIdLength = pTVar5.linkIdLength;
					local_48.linkTextfirstCharacterIndex = pTVar5.linkTextfirstCharacterIndex;
					local_48.linkTextLength = pTVar5.linkTextLength;
					local_48._28_4_ = *(uint)&pTVar5.field_0x1c;
					local_48.linkID = pTVar4[(int)uVar8].linkID;
					pSVar10 = local_48.GetLinkID();
					if (pSVar10 != null) {
						bVar7 = pSVar10.StartsWith("suggestion_");
						if (bVar7) {
							if ("suggestion_" == null) goto label_05d1900d;
							pSVar10 = pSVar10.Substring(("suggestion_".fields)._stringLength);
							bVar7 = Int32.TryParse(pSVar10, ref local_5c);
							iVar6 = local_5c;
							if (bVar7) {
								ChatManager.HandleSuggestionClick(iVar6);
							}
						}
						else {
							bVar7 = Int32.TryParse(pSVar10, ref local_60);
							iVar6 = local_60;
							if (bVar7) {
								pPVar11 = PhotonNetwork.LocalPlayer;
								if (pPVar11 == null) goto label_05d1900d;
								if (iVar6 != pPVar11.actorNumber) {
									pPVar12 = PhotonNetwork.CurrentRoom;
									if (pPVar12 != null) {
										pPVar12 = PhotonNetwork.CurrentRoom;
										if (pPVar12 == null) goto label_05d1900d;
										auVar15 = (byte[])pPVar12.GetPlayer(local_60, false);
										if (auVar15._0_8_ != null) {
											__this_00 = this._chatPanel;
											if (__this_00 == null) goto label_05d1900d;
											__this_00.EnterPMMode(auVar15._0_8_);
										}
									}
								}
							}
						}
						return;
					}
				}
			}
		label_05d1900d: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004DCA")]
		[Address(RVA = "0x5C18050", Offset = "0x5C17050", VA = "0x5C18050")]
		private static void ConfigureText(TextMeshProUGUI text, float fontSize, Color color, bool richText, bool wordWrap)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$ConfigureText): clean
			if (text == null) {
				throw new NullReferenceException();
			}
			text.fontSize = fontSize;
			text.set_color(color);
			text.alignment = 0x201;
			text.enableWordWrapping = wordWrap;
			text.richText = richText;
			text.enableKerning = true;
			text.isTextObjectScaleStatic = false;
			text.overflowMode = 0;
			return;
		}

		[Token(Token = "0x6004DCB")]
		[Address(RVA = "0x5C18030", Offset = "0x5C17030", VA = "0x5C18030")]
		private float BaseLineHeight()
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$BaseLineHeight): clean
			return (this._fontSize / 18.0) * 30.0;
		}

		[Token(Token = "0x6004DCC")]
		[Address(RVA = "0x5C18230", Offset = "0x5C17230", VA = "0x5C18230")]
		private void SetRowHeight(float height)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$SetRowHeight): clean
			RectTransform __this_00;
			Vector2 value;
			Vector2 UVar1;
			float fVar2;

			fVar2 = (this._fontSize / 18.0) * 30.0;
			if (height <= fVar2) {
				height = fVar2;
			}
			fVar2 = ceilf(height);
			this._rowHeight = fVar2;
			__this_00 = this._rowRect;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			UVar1 = __this_00.sizeDelta;
			value.y = this._rowHeight;
			value.x = UVar1.x;
			__this_00.sizeDelta = value;
			return;
		}

		[Token(Token = "0x6004DCD")]
		[Address(RVA = "0x5C184D0", Offset = "0x5C174D0", VA = "0x5C184D0")]
		private void UpdateRowHeight(string content)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$UpdateRowHeight): clean
			TextMeshProUGUI pTVar1;
			RectTransform __this_00;
			Vector2 UVar2;
			Vector2 UVar3;
			float fVar4;
			float fVar5;

			pTVar1 = this._displayText;
			if (content == null) {
				content = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if (pTVar1 != null) {
				fVar4 = this._chatWidth + -8.0;
				fVar5 = 48.0;
				if (48.0 <= fVar4) {
					fVar5 = fVar4;
				}
				UVar2 = pTVar1.GetPreferredValues(content, fVar5, 0.0);
				pTVar1 = this._displayText;
				if (pTVar1 != null) {
					fVar5 = pTVar1.m_fontSize;
					fVar4 = UVar2.y;
					if (UVar2.y <= fVar5) {
						fVar4 = fVar5;
					}
					fVar5 = (this._fontSize / 18.0) * 30.0;
					if (fVar4 <= fVar5) {
						fVar4 = fVar5;
					}
					fVar5 = ceilf(fVar4);
					this._rowHeight = fVar5;
					__this_00 = this._rowRect;
					if (__this_00 != null) {
						UVar3 = __this_00.sizeDelta;
						UVar2.y = this._rowHeight;
						UVar2.x = UVar3.x;
						__this_00.sizeDelta = UVar2;
						return;
					}
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004DCE")]
		[Address(RVA = "0x5C18760", Offset = "0x5C17760", VA = "0x5C18760")]
		private float MeasureDisplayNameWidth(string senderName)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$MeasureDisplayNameWidth): clean
			TextMeshProUGUI pTVar1;
			Vector2 UVar2;
			Vector2 UVar3;
			String text;
			float local_38;

			if ((senderName != null) ||(senderName = (String)**(long*)(g_data_07556758 + 0xb8), senderName != null)) {
				if (senderName._stringLength == 0) {
					return 0.0;
				}
				pTVar1 = this._displayText;
				text = String.Concat(senderName, "|");
				if (pTVar1 != null) {
					UVar2 = pTVar1.GetPreferredValues(text, 3.4028235e+38, 3.4028235e+38);
					pTVar1 = this._displayText;
					if (pTVar1 != null) {
						UVar3 = pTVar1.GetPreferredValues("|", 3.4028235e+38, 3.4028235e+38);
						local_38 = UVar2.x;
						local_38 = local_38 - UVar3.x;
						if (0.0 < local_38) {
							return local_38;
						}
						return 0.0;
					}
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004DCF")]
		[Address(RVA = "0x5C18600", Offset = "0x5C17600", VA = "0x5C18600")]
		private float ApplyPlayerStyle(Player player, TMP_FontAsset font, string senderName, ChatDisplayNameRange nameRange)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineView$$ApplyPlayerStyle): 1 lines keep C-only constructs
			ChatPlayerNameOverlay pUVar1;
			NameEffectLabel pPVar2;
			Color a;
			Color b;
			Color c;
			Color d;
			bool bVar3;
			ChatDisplayNameRange method_01;
			float fVar4;
			ResolvedNameEffect local_78;

			method_01 = nameRange;
			local_78.ColorC.b = 0.0;
			local_78.ColorC.a = 0.0;
			local_78.ColorD.r = 0.0;
			local_78.ColorD.g = 0.0;
			local_78.ColorB.b = 0.0;
			local_78.ColorB.a = 0.0;
			local_78.ColorC.r = 0.0;
			local_78.ColorC.g = 0.0;
			local_78.ColorA.b = 0.0;
			local_78.ColorA.a = 0.0;
			local_78.ColorB.r = 0.0;
			local_78.ColorB.g = 0.0;
			local_78.Enabled = false;
			local_78._1_3_ = 0;
			local_78.Type = 0;
			local_78.ColorA.r = 0.0;
			local_78.ColorA.g = 0.0;
			local_78.ColorD.b = 0.0;
			local_78.ColorD.a = 0.0;
			pUVar1 = this._nameOverlay;
			bVar3 = ((Object)font != null);
			if (!bVar3) {
				font = this._defaultFont;
			}
			if (pUVar1 == null) goto label_05d1874f;
			pUVar1.SetName(senderName, font, this._fontSize, (Color)this._defaultColor, nameRange);
			if (player == null) {
		label_05d18719: ;
				pUVar1 = this._nameOverlay;
				if ((pUVar1 == null) ||(pPVar2 = pUVar1._label, pPVar2 == null)) goto label_05d1874f;
				pPVar2.ClearNameEffect();
			}
			else {
				bVar3 = NameEffectHelpers.TryGetNameEffect(player, ref local_78);
				if (!bVar3) goto label_05d18719;
				pUVar1 = this._nameOverlay;
				if ((pUVar1 == null) ||(pPVar2 = pUVar1._label, pPVar2 == null)) goto label_05d1874f;
				d.b = local_78.ColorD.b;
				d.a = local_78.ColorD.a;
				d.r = local_78.ColorD.r;
				d.g = local_78.ColorD.g;
				c.b = local_78.ColorC.b;
				c.a = local_78.ColorC.a;
				c.r = local_78.ColorC.r;
				c.g = local_78.ColorC.g;
				b.b = local_78.ColorB.b;
				b.a = local_78.ColorB.a;
				b.r = local_78.ColorB.r;
				b.g = local_78.ColorB.g;
				a.b = local_78.ColorA.b;
				a.a = local_78.ColorA.a;
				a.r = local_78.ColorA.r;
				a.g = local_78.ColorA.g;
				pPVar2.SetNameEffect(local_78.Type, a, b, c, d);
			}
			pUVar1 = this._nameOverlay;
			if (pUVar1 != null) {
				return fVar4;
			}
		label_05d1874f: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x2000820")]
	private class ChatLineClickHandler : MonoBehaviour, IPointerClickHandler, IEventSystemHandler, IScrollHandler
	{
		[Token(Token = "0x40028A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private ChatLineView _lineView;

		[Token(Token = "0x40028AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TMP_InputField _chatInput;

		[Token(Token = "0x40028AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ChatPanel _chatPanel;

		[Token(Token = "0x6004DD0")]
		[Address(RVA = "0x5C181E0", Offset = "0x5C171E0", VA = "0x5C181E0")]
		public void Initialize(ChatLineView lineView, TMP_InputField chatInput, ChatPanel chatPanel)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineClickHandler$$Initialize): clean
			this._lineView = lineView;
			this._chatInput = chatInput;
			this._chatPanel = chatPanel;
			return;
		}

		[Token(Token = "0x6004DD1")]
		[Address(RVA = "0x5C19330", Offset = "0x5C18330", VA = "0x5C19330", Slot = "4")]
		public void OnPointerClick(PointerEventData eventData)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineClickHandler$$OnPointerClick): clean
			ChatPanel.ChatLineView __this_00;

			__this_00 = this._lineView;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.HandlePointerClick(eventData);
			return;
		}

		[Token(Token = "0x6004DD2")]
		[Address(RVA = "0x5C19350", Offset = "0x5C18350", VA = "0x5C19350", Slot = "5")]
		public void OnScroll(PointerEventData eventData)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineClickHandler$$OnScroll): clean
			ChatPanel pUVar1;
			ChatScrollRect pUVar2;
			bool bVar3;

			pUVar1 = this._chatPanel;
			if (pUVar1 != null) {
				pUVar2 = pUVar1._scrollRect;
				bVar3 = ((Object)pUVar2 != null);
				if (!bVar3) {
					return;
				}
				pUVar1 = this._chatPanel;
				if ((pUVar1 != null) &&(pUVar2 = pUVar1._scrollRect, pUVar2 != null)) {
					pUVar2.OnScroll(eventData);
					return;
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004DD3")]
		[Address(RVA = "0x5C193F0", Offset = "0x5C183F0", VA = "0x5C193F0")]
		public ChatLineClickHandler()
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.ChatLineClickHandler$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x200082C")]
	[CompilerGenerated]
	private sealed class _003CResetPMToggleActive_003Ed__118 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40028BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40028C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40028C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ChatPanel _003C_003E4__this;

		[Token(Token = "0x17000D7B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004DFA")]
			[Address(RVA = "0x5C19E30", Offset = "0x5C18E30", VA = "0x5C19E30", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.<ResetPMToggleActive>d__118$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D7C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004DFC")]
			[Address(RVA = "0x5C19E80", Offset = "0x5C18E80", VA = "0x5C19E80", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.<ResetPMToggleActive>d__118$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004DF7")]
		[Address(RVA = "0x5C16B50", Offset = "0x5C15B50", VA = "0x5C16B50")]
		[DebuggerHidden]
		public _003CResetPMToggleActive_003Ed__118(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.<ResetPMToggleActive>d__118$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004DF8")]
		[Address(RVA = "0x5C19D80", Offset = "0x5C18D80", VA = "0x5C19D80", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.<ResetPMToggleActive>d__118$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004DF9")]
		[Address(RVA = "0x5C19D90", Offset = "0x5C18D90", VA = "0x5C19D90", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.<ResetPMToggleActive>d__118$$MoveNext): clean
			int iVar1;
			ChatPanel pUVar2;
			WaitForSeconds __this_00;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_00 = new WaitForSeconds(0.2);
				this.__2__current = (object)__this_00;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				pUVar2 = this.__4__this;
				this.__1__state = -1;
				if (pUVar2 == null) {
					throw new NullReferenceException();
				}
				pUVar2._pmToggleActive = false;
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6004DFB")]
		[Address(RVA = "0x5C19E40", Offset = "0x5C18E40", VA = "0x5C19E40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.<ResetPMToggleActive>d__118$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_ChatPanel_ResetPMToggleActive_d__118_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200082D")]
	[CompilerGenerated]
	private sealed class _003CShowTemporaryTooltip_003Ed__73 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40028C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40028C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40028C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public TextMeshProUGUI tooltip;

		[Token(Token = "0x40028C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string message;

		[Token(Token = "0x40028C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public float duration;

		[Token(Token = "0x40028C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private string _003Cprev_003E5__2;

		[Token(Token = "0x40028C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private float _003CprevSize_003E5__3;

		[Token(Token = "0x17000D7D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004E00")]
			[Address(RVA = "0x5C1A070", Offset = "0x5C19070", VA = "0x5C1A070", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.<ShowTemporaryTooltip>d__73$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D7E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004E02")]
			[Address(RVA = "0x5C1A0C0", Offset = "0x5C190C0", VA = "0x5C1A0C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.<ShowTemporaryTooltip>d__73$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004DFD")]
		[Address(RVA = "0x5C101F0", Offset = "0x5C0F1F0", VA = "0x5C101F0")]
		[DebuggerHidden]
		public _003CShowTemporaryTooltip_003Ed__73(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.<ShowTemporaryTooltip>d__73$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004DFE")]
		[Address(RVA = "0x5C19E90", Offset = "0x5C18E90", VA = "0x5C19E90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.<ShowTemporaryTooltip>d__73$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004DFF")]
		[Address(RVA = "0x5C19EA0", Offset = "0x5C18EA0", VA = "0x5C19EA0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.<ShowTemporaryTooltip>d__73$$MoveNext): clean
			int iVar1;
			TextMeshProUGUI pTVar2;
			bool bVar3;
			String pSVar4;
			WaitForSecondsRealtime __this_00;
			float fVar5;

			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -1;
				pTVar2 = this.tooltip;
				bVar3 = ((Object)pTVar2 != null);
				if (bVar3) {
					pTVar2 = this.tooltip;
					if (pTVar2 != null) {
						pTVar2.set_text(this._prev_5__2);
						pTVar2 = this.tooltip;
						if (pTVar2 != null) {
							pTVar2.fontSize = this._prevSize_5__3;
							return false;
						}
					}
		label_05d1a066: ;
					throw new NullReferenceException();
				}
			}
			else if (iVar1 == 0) {
				this.__1__state = -1;
				pTVar2 = this.tooltip;
				bVar3 = ((Object)pTVar2 == null);
				if (!bVar3) {
					pTVar2 = this.tooltip;
					if (pTVar2 != null) {
						pSVar4 = pTVar2.get_text();
						this._prev_5__2 = pSVar4;
						pTVar2 = this.tooltip;
						if (pTVar2 != null) {
							this._prevSize_5__3 = pTVar2.m_fontSize;
							pTVar2.set_text(this.message);
							pTVar2 = this.tooltip;
							if (pTVar2 != null) {
								fVar5 = this._prevSize_5__3;
								if (10.0 <= fVar5) {
									fVar5 = 10.0;
								}
								pTVar2.fontSize = fVar5;
								fVar5 = this.duration;
								__this_00 = new WaitForSecondsRealtime(fVar5);
								this.__2__current = (object)__this_00;
								this.__1__state = 1;
								return true;
							}
						}
					}
					goto label_05d1a066;
				}
			}
			return false;
		}

		[Token(Token = "0x6004E01")]
		[Address(RVA = "0x5C1A080", Offset = "0x5C19080", VA = "0x5C1A080", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel.<ShowTemporaryTooltip>d__73$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_ChatPanel_ShowTemporaryTooltip_d__73_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x400284A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private TMP_InputField _inputField;

	[Token(Token = "0x400284B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private GameObject _panel;

	[Token(Token = "0x400284C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private ChatScrollRect _scrollRect;

	[Token(Token = "0x400284D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private RectTransform _chatPanelRect;

	[Token(Token = "0x400284E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private RectTransform _inputFieldRect;

	[Token(Token = "0x400284F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private RectTransform _contentRect;

	[Token(Token = "0x4002850")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private RectTransform _scrollbarRect;

	[Token(Token = "0x4002851")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	protected readonly List<ChatLineView> _linesPool;

	[Token(Token = "0x4002852")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly List<ChatManager.ChatDisplayLine> _visibleMessages;

	[Token(Token = "0x4002853")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public bool IgnoreNextActivation;

	[Token(Token = "0x4002854")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex _richTextPattern;

	[Token(Token = "0x4002855")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Regex _emojiPattern;

	[Token(Token = "0x4002856")]
	private const string StickerHiddenMarker = "\u200b\u200b";

	[Token(Token = "0x4002857")]
	private const float ManualLineBottomPadding = 10f;

	[Token(Token = "0x4002858")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private readonly List<ChatManager.ChatDisplayLine> _suggestionLines;

	[Token(Token = "0x4002859")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private readonly List<ChatLineView> _poolRotationBuffer;

	[Token(Token = "0x400285A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Image _panelImage;

	[Token(Token = "0x400285B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Player _currentPMTarget;

	[Token(Token = "0x400285C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private bool _inPMMode;

	[Token(Token = "0x400285D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private List<Player> _pmPartners;

	[Token(Token = "0x400285E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private int _currentPMIndex;

	[Token(Token = "0x400285F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xEC")]
	private bool _pmToggleActive;

	[Token(Token = "0x4002860")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Coroutine _pmToggleCoroutine;

	[Token(Token = "0x4002861")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private GameObject _emojiPanel;

	[Token(Token = "0x4002862")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private bool _emojiPanelActive;

	[Token(Token = "0x4002863")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private Button _emojiButton;

	[Token(Token = "0x4002864")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private bool _chatHidden;

	[Token(Token = "0x4002865")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x111")]
	private bool _isInteractingWithChatUI;

	[Token(Token = "0x4002866")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private Dictionary<GameObject, RectTransform> _cachedRectTransforms;

	[Token(Token = "0x4002867")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private int _desiredCaretPosition;

	[Token(Token = "0x4002868")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<string, int> EmojiNameToIndex;

	[Token(Token = "0x4002869")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x124")]
	private int _emojiPage;

	[Token(Token = "0x400286A")]
	private const int EMOJIS_PER_PAGE = 16;

	[Token(Token = "0x400286B")]
	private const int MAX_EMOJI_INDEX = 140;

	[Token(Token = "0x400286C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private Button _emojiNextButton;

	[Token(Token = "0x400286D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private Button _emojiBackButton;

	[Token(Token = "0x400286E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private TextMeshProUGUI _emojiPageText;

	[Token(Token = "0x400286F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private Button _emojiModeButton;

	[Token(Token = "0x4002870")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private Button _stickerModeButton;

	[Token(Token = "0x4002871")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private EmojiPanelMode _panelMode;

	[Token(Token = "0x4002872")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x154")]
	private bool _stickerInserted;

	[Token(Token = "0x4002873")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private string _stickerTag;

	[Token(Token = "0x4002874")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private float _lastStickerSentTime;

	[Token(Token = "0x4002875")]
	private const float STICKER_COOLDOWN = 15f;

	[Token(Token = "0x4002876")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private Coroutine _tooltipCoroutine;

	[Token(Token = "0x4002877")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private TextMeshProUGUI _chatModeLabel;

	[Token(Token = "0x4002878")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private TextMeshProUGUI _placeholderText;

	[Token(Token = "0x4002879")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private CanvasGroup _placeholderCanvasGroup;

	[Token(Token = "0x400287A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private GameObject _notificationBadge;

	[Token(Token = "0x400287B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private bool _lastNotificationBadgeState;

	[Token(Token = "0x400287C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Sprite _cachedCircleSprite;

	[Token(Token = "0x400287D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x191")]
	private bool _isDestroyed;

	[Token(Token = "0x400287E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private GUICallback _keyHandler;

	[Token(Token = "0x17000D75")]
	private int POOL_SIZE
	{
		[Token(Token = "0x6004D6A")]
		[Address(RVA = "0x5C08A40", Offset = "0x5C07A40", VA = "0x5C08A40")]
		get
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$get_POOL_SIZE): clean
			uint uVar1;
			int iVar2;

			if (Il2CppMethodInitialized_07547d35 == false) {
				Il2CppMethodInitialized_07547d35 = true;
				uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return iVar2;
			}
			return iVar2;
		}
	}

	[Token(Token = "0x17000D76")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004D6B")]
		[Address(RVA = "0x5C08AA0", Offset = "0x5C07AA0", VA = "0x5C08AA0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$get_ThemePanel): clean
			return "ChatPanel";
		}
	}

	[Token(Token = "0x6004D6C")]
	[Address(RVA = "0x5C08AD0", Offset = "0x5C07AD0", VA = "0x5C08AD0")]
	static ChatPanel()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$.cctor): clean
		UI_ChatPanel_StaticFields pUVar1;
		Dictionary<object, int> __this;
		Regex pSVar2;
		Dictionary<string, int> __this_00;
		String key;
		int local_24;

		pSVar2 = new Regex("<[^>]+>|</[^>]+>", 8);
		ChatPanel._richTextPattern = pSVar2;
		pSVar2 = new Regex(":([^:\\s]+):", 8);
		pUVar1 = typeof(ChatPanel).static_fields;
		pUVar1._emojiPattern = pSVar2;
		__this_00 = new Dictionary<string, int>();
		pUVar1 = typeof(ChatPanel).static_fields;
		pUVar1.EmojiNameToIndex = __this_00;
		local_24 = 0;
		do {
			__this = (Dictionary<object, int>)ChatPanel.EmojiNameToIndex;
			key = local_24.ToString();
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.set_Item((object)key, local_24);
			local_24 = local_24 + 1;
		} while (local_24 < 0x8d);
		return;
	}

	[Token(Token = "0x6004D6D")]
	[Address(RVA = "0x5C08C80", Offset = "0x5C07C80", VA = "0x5C08C80")]
	private string ProcessEmojiCodes(string text)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$ProcessEmojiCodes): 1 lines keep C-only constructs
		Regex __this_00;
		ChatPanel.c__DisplayClass59_0 __this_01;
		MatchEvaluator __this_02;
		String pSVar1;

		__this_01 = new ChatPanel.c__DisplayClass59_0();
		if (__this_01 != null) {
			__this_01.stickerFound = false;
			__this_00 = ChatPanel._emojiPattern;
			__this_02 = new MatchEvaluator((object)__this_01, (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass59_0_ProcessEmojiCodes_b__0) ;
			if (__this_00 != null) {
				pSVar1 = Regex.Replace(__this_00, text, __this_02);
				return pSVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D6E")]
	[Address(RVA = "0x5C08D80", Offset = "0x5C07D80", VA = "0x5C08D80", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$Setup): 132 lines keep C-only constructs
		TMP_InputField* targetAddress;
		ChatPanel.c__DisplayClass61_0 targetAddress_00;
		GameObject* targetAddress_01;
		ChatScrollRect* targetAddress_02;
		int piVar1;
		TextMeshProUGUI* targetAddress_03;
		CanvasGroup* targetAddress_04;
		Image* targetAddress_05;
		int iVar2;
		uint uVar3;
		TMP_InputField.OnChangeEvent pTVar4;
		TMP_InputField.SubmitEvent pTVar5;
		UISettings pSVar6;
		IntSetting pSVar7;
		ColorSetting pSVar8;
		Color255 __this_00;
		EventTrigger.TriggerEvent __this_01;
		EventTrigger.Entry[] pUVar9;
		UnityEvent<T0> __this_02;
		BoolSetting pSVar10;
		Vector2 UVar11;
		long lVar12;
		ulong uVar13;
		ulong uVar14;
		ulong uVar15;
		Navigation value;
		ColorBlock value_00;
		Il2CppType pIVar16;
		MethodInfo pMVar17;
		bool bVar18;
		ChatPanel.c__DisplayClass61_0 __this_03;
		GameObject pUVar19;
		Action __this_04;
		GUICallback pUVar20;
		Transform pUVar21;
		InputField __this_05;
		Type[] pSVar22;
		Type pSVar23;
		object pIVar24;
		Transform pUVar25;
		RectTransform pUVar26;
		RectTransform pUVar27;
		TMP_InputField pTVar28;
		GameObject pUVar29;
		GameObject pUVar30;
		TextMeshProUGUI pTVar31;
		TMP_FontAsset value_01;
		String pSVar32;
		CanvasGroup pUVar33;
		UnityAction<T0> pUVar34;
		UI_ChatPanel___c_StaticFields pUVar35;
		TMP_InputField.OnValidateInput __this_06;
		TMP_InputField.OnValidateInput pTVar36;
		Action<int> __this_07;
		RectMask2D x;
		ElementStyle __this_08;
		Image pUVar37;
		Object obj;
		MethodInfo pMVar38;
		LayoutElement pUVar39;
		Room pPVar40;
		Player target;
		Player pPVar41;
		ChatScrollRect pUVar42;
		Scrollbar __this_09;
		Transform pUVar43;
		EventTrigger __this_10;
		EventTrigger.Entry __this_11;
		List<EventTrigger.Entry> pSVar44;
		Il2CppRGCTXData method_00;
		int iVar45;
		ChatScrollRect* targetAddress_06;
		System_ValueTuple_string__int__int__o SVar46;
		System_ValueTuple_string__int__o SVar47;
		Color UVar48;
		Color UVar49;
		Color UVar50;
		uint uStack_a8;
		uint uStack_a4;
		uint uStack_a0;
		uint uStack_9c;
		uint uStack_98;
		uint uStack_94;
		uint uStack_90;
		ColorBlock UStack_88;

		if (Il2CppMethodInitialized_07547d39 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ChatScrollRect) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField) ;
			Il2CppMethodInitialized_07547d39 = true;
		}
		__this_03 = new ChatPanel.c__DisplayClass61_0();
		pUVar19 = this.gameObject;
		__this_04 = new Action((object)this, (intptr_t)MethodInfo_UI_ChatPanel_HandleKeys);
		pUVar20 = GUICallback.Create(pUVar19, __this_04);
		this._keyHandler = pUVar20;
		pUVar21 = this.transform;
		if ((pUVar21 == null) ||(pUVar21 = pUVar21.Find("InputField"), pUVar21 == null)) goto label_05d0b2d4;
		__this_05 = pUVar21.GetComponent<InputField>();
		pSVar22 = (Type[])new Type[2];
		pIVar16 = TypeRef_UnityEngine_RectTransform;
		pSVar23 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar16);
		if (pSVar22 == null) goto label_05d0b2d4;
		if ((pSVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar22.obj).klass)._1).element_class), pIVar24 == null)) goto label_05d0b2de;
		if ((int)pSVar22.Length == 0) goto label_05d0b2d9;
		pSVar22[0] = pSVar23;
		pSVar23 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TMP_InputField);
		if ((pSVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar22.obj).klass)._1).element_class), pIVar24 == null)) goto label_05d0b2de;
		if ((pSVar22.Length & 0xfffffffe) == 0) goto label_05d0b2d9;
		pSVar22[1] = pSVar23;
		pUVar19 = new GameObject("TMPInputField", pSVar22);
		if (pUVar19 == null) goto label_05d0b2d4;
		pUVar21 = pUVar19.transform;
		pUVar25 = this.transform;
		if ((pUVar21 == null) ||(pUVar21.SetParent(pUVar25, false), __this_05 == null)) goto label_05d0b2d4;
		pUVar26 = __this_05.GetComponent<RectTransform>();
		pUVar27 = pUVar19.GetComponent<RectTransform>();
		if ((pUVar26 == null) ||(UVar11 = pUVar26.anchorMin, pUVar27 == null)) goto label_05d0b2d4;
		pUVar27.anchorMin = UVar11;
		UVar11 = pUVar26.anchorMax;
		pUVar27.anchorMax = UVar11;
		UVar11 = pUVar26.pivot;
		pUVar27.pivot = UVar11;
		UVar11 = pUVar26.sizeDelta;
		pUVar27.sizeDelta = UVar11;
		UVar11 = pUVar26.anchoredPosition;
		pUVar27.anchoredPosition = UVar11;
		pTVar28 = pUVar19.GetComponent<TMP_InputField>();
		targetAddress = &this._inputField;
		this._inputField = pTVar28;
		pTVar28 = this._inputField;
		if (pTVar28 == null) goto label_05d0b2d4;
		pTVar28.characterLimit = 500;
		pSVar22 = (Type[])new Type[1];
		pSVar23 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar22 == null) goto label_05d0b2d4;
		if ((pSVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar22.obj).klass)._1).element_class), pIVar24 == null)) goto label_05d0b2de;
		if ((int)pSVar22.Length == 0) goto label_05d0b2d9;
		pSVar22[0] = pSVar23;
		pUVar29 = new GameObject("Text Area", pSVar22);
		if (pUVar29 == null) goto label_05d0b2d4;
		pUVar21 = pUVar29.transform;
		pUVar25 = pUVar19.transform;
		if (pUVar21 == null) goto label_05d0b2d4;
		pUVar21.SetParent(pUVar25, false);
		pUVar26 = pUVar29.GetComponent<RectTransform>();
		if (pUVar26 == null) goto label_05d0b2d4;
		pUVar26.anchorMin = (Vector2)(ChatPanel.UIAnchors.FullStretchStart);
		pUVar26.anchorMax = (Vector2)(ChatPanel.UIAnchors.FullStretch);
		pUVar26.sizeDelta = (Vector2)(Vector2.zeroVector);
		pUVar29.AddComponent<RectMask2D>();
		pSVar22 = (Type[])new Type[2];
		pSVar23 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar22 == null) goto label_05d0b2d4;
		if ((pSVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar22.obj).klass)._1).element_class), pIVar24 == null)) goto label_05d0b2de;
		if ((int)pSVar22.Length == 0) goto label_05d0b2d9;
		pSVar22[0] = pSVar23;
		pSVar23 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
		if ((pSVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar22.obj).klass)._1).element_class), pIVar24 == null)) goto label_05d0b2de;
		if ((pSVar22.Length & 0xfffffffe) == 0) goto label_05d0b2d9;
		pSVar22[1] = pSVar23;
		pUVar30 = new GameObject("Text", pSVar22);
		if (pUVar30 == null) goto label_05d0b2d4;
		pUVar21 = pUVar30.transform;
		pUVar25 = pUVar29.transform;
		if (pUVar21 == null) goto label_05d0b2d4;
		pUVar21.SetParent(pUVar25, false);
		pUVar27 = pUVar30.GetComponent<RectTransform>();
		if (pUVar27 == null) goto label_05d0b2d4;
		pUVar27.anchorMin = (Vector2)(ChatPanel.UIAnchors.FullStretchStart);
		pUVar27.anchorMax = (Vector2)(ChatPanel.UIAnchors.FullStretch);
		pUVar27.sizeDelta = (Vector2)(Vector2.zeroVector);
		pTVar31 = pUVar30.GetComponent<TextMeshProUGUI>();
		if (__this_03 == null) goto label_05d0b2d4;
		targetAddress_00 = &__this_03.fields;
		__this_03.tmpText = pTVar31;
		pTVar31 = __this_03.tmpText;
		if (pTVar31 == null) goto label_05d0b2d4;
		pTVar31.enableWordWrapping = false;
		if (targetAddress_00.tmpText == null) goto label_05d0b2d4;
		(targetAddress_00.tmpText).richText = false;
		if (targetAddress_00.tmpText == null) goto label_05d0b2d4;
		(targetAddress_00.tmpText).overflowMode = 4;
		if (targetAddress_00.tmpText == null) goto label_05d0b2d4;
		(targetAddress_00.tmpText).horizontalAlignment = 1;
		if (targetAddress_00.tmpText == null) goto label_05d0b2d4;
		(targetAddress_00.tmpText).verticalAlignment = 0x200 ;
		if (targetAddress_00.tmpText == null) goto label_05d0b2d4;
		(targetAddress_00.tmpText).fontSize = 20.0;
		value_01 = GisketchTypography.Resolve("text", 400, null);
		if (targetAddress_00.tmpText == null) goto label_05d0b2d4;
		(targetAddress_00.tmpText).font = value_01;
		if (*targetAddress == null) goto label_05d0b2d4;
		(*targetAddress).textViewport = pUVar26;
		if (*targetAddress == null) goto label_05d0b2d4;
		(*targetAddress).textComponent = (TMP_Text)targetAddress_00.tmpText;
		pSVar22 = (Type[])new Type[3];
		pSVar23 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar22 == null) goto label_05d0b2d4;
		if ((pSVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar22.obj).klass)._1).element_class), pIVar24 == null)) goto label_05d0b2de;
		if ((int)pSVar22.Length == 0) goto label_05d0b2d9;
		pSVar22[0] = pSVar23;
		pSVar23 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
		if ((pSVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar22.obj).klass)._1).element_class), pIVar24 == null)) goto label_05d0b2de;
		if ((pSVar22.Length & 0xfffffffe) == 0) goto label_05d0b2d9;
		pSVar22[1] = pSVar23;
		pSVar23 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasGroup);
		if ((pSVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar22.obj).klass)._1).element_class), pIVar24 == null)) goto label_05d0b2de;
		if ((uint)pSVar22.Length < 3) goto label_05d0b2d9;
		pSVar22[2] = pSVar23;
		pUVar30 = new GameObject("Placeholder", pSVar22);
		if (pUVar30 == null) goto label_05d0b2d4;
		pUVar21 = pUVar30.transform;
		pUVar25 = pUVar29.transform;
		if (pUVar21 == null) goto label_05d0b2d4;
		pUVar21.SetParent(pUVar25, false);
		pUVar27 = pUVar30.GetComponent<RectTransform>();
		if (pUVar27 == null) goto label_05d0b2d4;
		pUVar27.anchorMin = (Vector2)(ChatPanel.UIAnchors.FullStretchStart);
		pUVar27.anchorMax = (Vector2)(ChatPanel.UIAnchors.FullStretch);
		pUVar27.offsetMin = (Vector2)0xc000000000000000;
		pUVar27.offsetMax = (Vector2)(Vector2.zeroVector);
		pTVar31 = pUVar30.GetComponent<TextMeshProUGUI>();
		targetAddress_03 = &this._placeholderText;
		this._placeholderText = pTVar31;
		pTVar31 = this._placeholderText;
		pSVar32 = UIManager.GetLocale("InGame", "Chat", "Placeholder", "", "");
		if (pTVar31 == null) goto label_05d0b2d4;
		pTVar31.set_text(pSVar32);
		if (*targetAddress_03 == null) goto label_05d0b2d4;
		(*targetAddress_03).fontSize = 18.0;
		if (*targetAddress_03 == null) goto label_05d0b2d4;
		(*targetAddress_03).font = value_01;
		if (*targetAddress_03 == null) goto label_05d0b2d4;
		(*targetAddress_03).enableWordWrapping = false;
		if (*targetAddress_03 == null) goto label_05d0b2d4;
		(*targetAddress_03).horizontalAlignment = 1;
		if (*targetAddress_03 == null) goto label_05d0b2d4;
		(*targetAddress_03).verticalAlignment = 0x200;
		pTVar31 = *targetAddress_03;
		if (pTVar31 == null) goto label_05d0b2d4;
		UVar48.b = 1.0;
		UVar48.a = 0.3;
		UVar48.r = 1.0;
		UVar48.g = 1.0;
		pTVar31.set_color(UVar48);
		pUVar33 = pUVar30.GetComponent<CanvasGroup>();
		targetAddress_04 = &this._placeholderCanvasGroup;
		this._placeholderCanvasGroup = pUVar33;
		pUVar33 = this._placeholderCanvasGroup;
		if (pUVar33 == null) goto label_05d0b2d4;
		pUVar33.alpha = 0.0;
		pUVar33 = *targetAddress_04;
		if (pUVar33 == null) goto label_05d0b2d4;
		pUVar33.blocksRaycasts = false;
		if (*targetAddress == null) goto label_05d0b2d4;
		(*targetAddress).lineType = 0;
		if (*targetAddress == null) goto label_05d0b2d4;
		(*targetAddress).richText = false;
		if (*targetAddress == null) goto label_05d0b2d4;
		pTVar4 = ((*targetAddress).fields).m_OnValueChanged;
		pUVar34 = new UnityAction<string>((object)__this_03, (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass61_0_Setup_b__0);
		if (pTVar4 == null) goto label_05d0b2d4;
		pTVar4.AddListener(pUVar34);
		if (*targetAddress == null) goto label_05d0b2d4;
		(*targetAddress).inputType = 0;
		if (*targetAddress == null) goto label_05d0b2d4;
		(*targetAddress).scrollSensitivity = 60.0;
		pTVar28 = *targetAddress;
		if (pTVar28 == null) goto label_05d0b2d4;
		pTVar36 = pTVar28.m_OnValidateInput;
		if ((typeof(ChatPanel.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar35 = typeof(ChatPanel.c).static_fields;
			__this_06 = pUVar35.__9__61_3;
		}
		else {
			pUVar35 = typeof(ChatPanel.c).static_fields;
			__this_06 = pUVar35.__9__61_3;
		}
		if (__this_06 == null) {
			if (((typeof(ChatPanel.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar35 = typeof(ChatPanel.c).static_fields;
			}
			pIVar24 = (object)pUVar35.__9;
			__this_06 = new TMP_InputField.OnValidateInput(pIVar24, (intptr_t)MethodInfo_UI_ChatPanel_c_Setup_b__61_3);
			pUVar35 = typeof(ChatPanel.c).static_fields;
			pUVar35.__9__61_3 = __this_06;
		}
		pTVar36 = (TMP_InputField.OnValidateInput)Delegate.Combine((Delegate)pTVar36, (Delegate)__this_06);
		if ((pTVar36 != null) &&(pTVar36.klass != typeof(TMP_InputField.OnValidateInput))) {
			throw new InvalidCastException();
		}
		pTVar28.onValidateInput = pTVar36;
		pTVar28 = *targetAddress;
		if (pTVar28 == null) goto label_05d0b2d4;
		pTVar28.m_OnFocusSelectAll = false;
		lVar12 = *(long)&pTVar28.m_Navigation.m_WrapAround;
		uVar13 = *(ulong)((long)&pTVar28.m_Navigation.m_SelectOnUp + 4);
		uVar14 = *(ulong)((long)&pTVar28.m_Navigation.m_SelectOnDown + 4);
		uVar15 = *(ulong)((long)&pTVar28.m_Navigation.m_SelectOnLeft + 4);
		uStack_9c = (undefined4)uVar14;
		uStack_98 = (undefined4)((ulong)uVar14 >> 0x20);
		uStack_94 = (undefined4)uVar15;
		uStack_90 = (undefined4)((ulong)uVar15 >> 0x20);
		uStack_a8 = (undefined4)((ulong)lVar12 >> 0x20);
		uStack_a4 = (undefined4)uVar13;
		uStack_a0 = (undefined4)((ulong)uVar13 >> 0x20);
		value.m_SelectOnRight._4_4_ = *(uint)((long)&pTVar28.m_Navigation.m_SelectOnRight + 4);
		value.m_SelectOnRight._0_4_ = uStack_90;
		lVar12 = lVar12 << 0x20;
		value.m_SelectOnUp._4_4_ = uStack_a4;
		value.m_SelectOnUp._0_4_ = uStack_a8;
		value.m_SelectOnDown._4_4_ = uStack_9c;
		value.m_SelectOnDown._0_4_ = uStack_a0;
		value.m_SelectOnLeft._4_4_ = uStack_94;
		value.m_SelectOnLeft._0_4_ = uStack_98;
		value.m_Mode = (int)lVar12;
		value.m_WrapAround = (bool)(char)((ulong)lVar12 >> 0x20);
		value._5_3_ = (int3)((ulong)lVar12 >> 0x28);
		pTVar28.navigation = value;
		if (*targetAddress == null) goto label_05d0b2d4;
		pTVar4 = ((*targetAddress).fields).m_OnValueChanged;
		pUVar34 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_UI_ChatPanel_OnValueChanged);
		if (pTVar4 == null) goto label_05d0b2d4;
		pTVar4.AddListener(pUVar34);
		if (*targetAddress == null) goto label_05d0b2d4;
		pTVar5 = ((*targetAddress).fields).m_OnEndEdit;
		pUVar34 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_UI_ChatPanel_OnEndEdit);
		if (pTVar5 == null) goto label_05d0b2d4;
		pTVar5.AddListener(pUVar34);
		if (*targetAddress == null) goto label_05d0b2d4;
		pTVar5 = ((*targetAddress).fields).m_OnSubmit;
		pUVar34 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_UI_ChatPanel_OnSubmit);
		if (pTVar5 == null) goto label_05d0b2d4;
		pTVar5.AddListener(pUVar34);
		__this_07 = new Action<int>((object)this, (intptr_t)MethodInfo_UI_ChatPanel_InGameManager_PlayerInfoUpdated);
		InGameManager.add_PlayerInfoUpdated(__this_07);
		if ((*targetAddress == null) ||(pUVar27 = (*targetAddress).GetComponent<RectTransform>(), pUVar27 == null)) goto label_05d0b2d4;
		pUVar27.sizeDelta = (Vector2)0x41f0000000000000;
		x = pUVar29.GetComponent<RectMask2D>();
		bVar18 = ((Object)x == null);
		if (bVar18) {
			pUVar29.AddComponent<RectMask2D>();
		}
		pUVar26.offsetMin = (Vector2)0x4000000040a00000;
		pUVar26.offsetMax = (Vector2)0xc0000000c2200000;
		pSVar32 = this.get_ThemePanel();
		__this_08 = new ElementStyle(0x14, 120.0, 20.0, pSVar32);
		if (__this_08 == null) goto label_05d0b2d4;
		pSVar32 = __this_08.ThemePanel;
		UStack_88 = UIManager.GetThemeColorBlock(pSVar32, "InputField", "Input", "DefaultPanel");
		if (*targetAddress == null) goto label_05d0b2d4;
		value_00.m_NormalColor.b = UStack_88.m_NormalColor.b;
		value_00.m_NormalColor.a = UStack_88.m_NormalColor.a;
		value_00.m_NormalColor.r = UStack_88.m_NormalColor.r;
		value_00.m_NormalColor.g = UStack_88.m_NormalColor.g;
		value_00.m_HighlightedColor.r = UStack_88.m_HighlightedColor.r;
		value_00.m_HighlightedColor.g = UStack_88.m_HighlightedColor.g;
		value_00.m_HighlightedColor.b = UStack_88.m_HighlightedColor.b;
		value_00.m_HighlightedColor.a = UStack_88.m_HighlightedColor.a;
		value_00.m_PressedColor.r = UStack_88.m_PressedColor.r;
		value_00.m_PressedColor.g = UStack_88.m_PressedColor.g;
		value_00.m_PressedColor.b = UStack_88.m_PressedColor.b;
		value_00.m_PressedColor.a = UStack_88.m_PressedColor.a;
		value_00.m_SelectedColor.r = UStack_88.m_SelectedColor.r;
		value_00.m_SelectedColor.g = UStack_88.m_SelectedColor.g;
		value_00.m_SelectedColor.b = UStack_88.m_SelectedColor.b;
		value_00.m_SelectedColor.a = UStack_88.m_SelectedColor.a;
		value_00.m_DisabledColor.r = UStack_88.m_DisabledColor.r;
		value_00.m_DisabledColor.g = UStack_88.m_DisabledColor.g;
		value_00.m_DisabledColor.b = UStack_88.m_DisabledColor.b;
		value_00.m_DisabledColor.a = UStack_88.m_DisabledColor.a;
		value_00.m_ColorMultiplier = UStack_88.m_ColorMultiplier;
		value_00.m_FadeDuration = UStack_88.m_FadeDuration;
		(*targetAddress).colors = value_00;
		pTVar31 = targetAddress_00.tmpText;
		UVar48 = UIManager.GetThemeColor(__this_08.ThemePanel, "InputField", "InputTextColor", "DefaultPanel");
		if (pTVar31 == null) goto label_05d0b2d4;
		pTVar31.set_color(UVar48);
		pTVar28 = *targetAddress;
		UVar48 = UIManager.GetThemeColor(__this_08.ThemePanel, "InputField", "InputSelectionColor", "DefaultPanel");
		if (pTVar28 == null) goto label_05d0b2d4;
		pTVar28.selectionColor = UVar48;
		pSVar22 = (Type[])new Type[2];
		pIVar16 = TypeRef_UnityEngine_RectTransform;
		pSVar23 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar16);
		if (pSVar22 == null) goto label_05d0b2d4;
		if ((pSVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar22.obj).klass)._1).element_class), pIVar24 == null)) goto label_05d0b2de;
		if ((int)pSVar22.Length == 0) goto label_05d0b2d9;
		pSVar22[0] = pSVar23;
		pSVar23 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
		if ((pSVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar22.obj).klass)._1).element_class), pIVar24 == null)) goto label_05d0b2de;
		if ((pSVar22.Length & 0xfffffffe) == 0) goto label_05d0b2d9;
		pSVar22[1] = pSVar23;
		pUVar29 = new GameObject("Background", pSVar22);
		if (pUVar29 == null) goto label_05d0b2d4;
		pUVar21 = pUVar29.transform;
		pUVar25 = pUVar19.transform;
		if (pUVar21 == null) goto label_05d0b2d4;
		pUVar21.SetParent(pUVar25, false);
		pUVar21 = pUVar29.transform;
		if (pUVar21 == null) goto label_05d0b2d4;
		pUVar21.SetAsFirstSibling();
		pUVar26 = pUVar29.GetComponent<RectTransform>();
		if (pUVar26 == null) goto label_05d0b2d4;
		pUVar26.anchorMin = (Vector2)(ChatPanel.UIAnchors.FullStretchStart);
		pUVar26.anchorMax = (Vector2)(ChatPanel.UIAnchors.FullStretch);
		pUVar26.sizeDelta = (Vector2)(Vector2.zeroVector);
		pUVar37 = pUVar29.GetComponent<Image>();
		if (pUVar37 == null) goto label_05d0b2d4;
		UVar49.b = 0.1;
		UVar49.a = 0.6;
		UVar49.r = 0.1;
		UVar49.g = 0.1;
		pUVar37.set_color(UVar49);
		obj = (Object)__this_05.gameObject;
		Object.Destroy(obj);
		pUVar21 = this.transform;
		if ((pUVar21 == null) ||(pUVar21 = pUVar21.Find("Content/Panel"), pUVar21 == null)) goto label_05d0b2d4;
		pUVar19 = pUVar21.gameObject;
		targetAddress_01 = &this._panel;
		this._panel = pUVar19;
		pUVar19 = this._panel;
		if (pUVar19 == null) goto label_05d0b2d4;
		pMVar38 = (MethodInfo)pUVar19.GetComponent<RectTransform>();
		this._chatPanelRect = (RectTransform)pMVar38;
		this.ConfigureManualLineLayout();
		pTVar28 = this._inputField;
		if (pTVar28 == null) goto label_05d0b2d4;
		pUVar26 = pTVar28.GetComponent<RectTransform>();
		this._inputFieldRect = pUVar26;
		pUVar21 = this.transform;
		if ((pUVar21 == null) ||(pUVar21 = pUVar21.Find("Content"), pUVar21 == null)) goto label_05d0b2d4;
		pUVar26 = pUVar21.GetComponent<RectTransform>();
		this._contentRect = pUVar26;
		pUVar21 = this.transform;
		if (pUVar21 == null) goto label_05d0b2d4;
		pUVar26 = null;
		pUVar21 = pUVar21.Find("Content/Scrollbar");
		if (pUVar21 != null) {
			pUVar26 = pUVar21.GetComponent<RectTransform>();
		}
		this._scrollbarRect = pUVar26;
		pUVar21 = this.transform;
		if ((pUVar21 == null) ||(pUVar21 = pUVar21.Find("Content"), pUVar21 == null)) goto label_05d0b2d4;
		pUVar39 = pUVar21.GetComponent<LayoutElement>();
		pSVar6 = SettingsManager.UISettings;
		if ((pSVar6 == null) ||((pSVar7 = pSVar6.ChatHeight, pSVar7 == null ||(pUVar39 == null)))) goto label_05d0b2d4;
		pUVar39.set_preferredHeight((float)pSVar7._value);
		pUVar21 = this.transform;
		if (pUVar21 == null) goto label_05d0b2d4;
		pUVar26 = pUVar21.GetComponent<RectTransform>();
		pSVar6 = SettingsManager.UISettings;
		if (((pSVar6 == null) ||(pSVar7 = pSVar6.ChatWidth, pSVar7 == null)) ||(pUVar26 == null)) goto label_05d0b2d4;
		UVar11.y = 0.0;
		UVar11.x = (float)pSVar7._value;
		pUVar26.sizeDelta = UVar11;
		SVar46 = ChatManager.GetPreservedInputWithCaret();
		SVar47 = ChatManager.GetConversation("PUBLIC");
		iVar45 = SVar47.Item2;
		bVar18 = String.IsNullOrEmpty(SVar47.Item1);
		if (bVar18) {
			pMVar38 = null;
			bVar18 = String.IsNullOrEmpty(SVar46.Item1);
			if (!bVar18) {
				pTVar28 = *targetAddress;
				pMVar38 = (MethodInfo)MiscExtensions.StripRichText(SVar46.Item1);
				if (pTVar28 == null) goto label_05d0b2d4;
				pTVar28.text = (String)pMVar38;
				iVar45 = SVar46.Item2;
				goto label_05d0a786;
			}
		}
		else {
			pTVar28 = *targetAddress;
			pMVar38 = (MethodInfo)MiscExtensions.StripRichText(SVar47.Item1);
			if (pTVar28 == null) goto label_05d0b2d4;
			pTVar28.text = (String)pMVar38;
	label_05d0a786: ;
			this._desiredCaretPosition = iVar45;
		}
		this.SetupChatModeLabel();
		this.SetupNotificationBadge();
		this.SetupEmojiButton();
		if (0 < SVar46.Item3) {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				pPVar40 = PhotonNetwork.CurrentRoom;
			}
			else {
				pPVar40 = PhotonNetwork.CurrentRoom;
			}
			if (pPVar40 != null) {
				if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
				}
				pPVar40 = PhotonNetwork.CurrentRoom;
				if (pPVar40 == null) goto label_05d0b2d4;
				target = pPVar40.GetPlayer(SVar46.Item3, false);
				if (target != null) {
					iVar2 = target.actorNumber;
					pPVar41 = PhotonNetwork.LocalPlayer;
					if (pPVar41 == null) goto label_05d0b2d4;
					if (iVar2 != pPVar41.actorNumber) {
						this.EnterPMMode(target);
					}
				}
			}
		}
		pUVar42 = this.GetComponentInChildren<ChatScrollRect>();
		targetAddress_02 = &this._scrollRect;
		this._scrollRect = pUVar42;
		this.RefreshPoolSize();
		this.ValidatePMState();
		this.RestorePMPartners();
		this.RefreshDisplayedMessages();
		pUVar21 = this.transform;
		if ((pUVar21 != null) &&(pUVar21 = pUVar21.Find("Content"), pUVar21 != null)) {
			pUVar26 = pUVar21.GetComponent<RectTransform>();
			pUVar39 = pUVar21.GetComponent<LayoutElement>();
			pSVar6 = SettingsManager.UISettings;
			if ((pSVar6 != null) &&((pSVar7 = pSVar6.ChatHeight, pSVar7 != null &&(pUVar39 != null)))) {
				pUVar39.set_preferredHeight((float)pSVar7._value);
				if (*targetAddress_01 != null) {
					pUVar37 = (*targetAddress_01).GetComponent<Image>();
					targetAddress_05 = &this._panelImage;
					this._panelImage = pUVar37;
					pUVar37 = this._panelImage;
					bVar18 = ((Object)pUVar37 == null);
					if (bVar18) {
						if (*targetAddress_01 == null) goto label_05d0b2d4;
						pUVar37 = (*targetAddress_01).AddComponent<Image>();
						*targetAddress_05 = pUVar37;
					}
					pSVar6 = SettingsManager.UISettings;
					if (((pSVar6 != null) &&(pSVar8 = pSVar6.ChatBackgroundColor, pSVar8 != null)) &&(__this_00 = pSVar8._value, __this_00 != null)) {
						pUVar37 = *targetAddress_05;
						UVar48 = __this_00.ToColor();
						if (pUVar37 != null) {
							pUVar37.set_color(UVar48);
							pSVar22 = (Type[])new Type[1];
							pIVar16 = TypeRef_UnityEngine_RectTransform;
							pSVar23 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar16);
							if (pSVar22 != null) {
								if ((pSVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar22.obj).klass)._1).element_class), pIVar24 == null)) goto label_05d0b2de;
								if ((int)pSVar22.Length == 0) goto label_05d0b2d9;
								pSVar22[0] = pSVar23;
								pUVar19 = new GameObject("Scrollbar", pSVar22);
								if ((pUVar19 != null) &&(pUVar25 = pUVar19.transform, pUVar25 != null)) {
									pUVar25.SetParent(pUVar21, false);
									pUVar19.SetActive(true);
									pUVar27 = pUVar19.GetComponent<RectTransform>();
									if (pUVar27 != null) {
										pUVar27.anchorMin = (Vector2)(ChatPanel.UIAnchors.RightStretch);
										pUVar27.anchorMax = (Vector2)(ChatPanel.UIAnchors.RightStretchEnd);
										pUVar27.pivot = (Vector2)(ChatPanel.UIAnchors.RightCenter);
										pUVar27.sizeDelta = (Vector2)0x41200000;
										__this_09 = pUVar19.AddComponent<Scrollbar>();
										pSVar22 = (Type[])new Type[1];
										pSVar23 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
										if (pSVar22 != null) {
											if ((pSVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar22.obj).klass)._1).element_class), pIVar24 == null)) goto label_05d0b2de;
											if ((int)pSVar22.Length == 0) goto label_05d0b2d9;
											pSVar22[0] = pSVar23;
											pUVar29 = new GameObject("Sliding Area", pSVar22);
											if (pUVar29 != null) {
												pUVar25 = pUVar29.transform;
												pUVar43 = pUVar19.transform;
												if (pUVar25 != null) {
													pUVar25.SetParent(pUVar43, false);
													pUVar27 = pUVar29.GetComponent<RectTransform>();
													if (pUVar27 != null) {
														pUVar27.anchorMin = (Vector2)(ChatPanel.UIAnchors.FullStretchStart );
														pUVar27.anchorMax = (Vector2)(ChatPanel.UIAnchors.FullStretch). fields;
														pUVar27.sizeDelta = (Vector2)(Vector2.zeroVector);
														pSVar22 = (Type[])new Type[2];
														pSVar23 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
														if (pSVar22 != null) {
															if ((pSVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar22.obj).klass)._1).element_class), pIVar24 == null)) {
	label_05d0b2de: ;
																pIVar24 = new ArrayTypeMismatchException();
																throw pIVar24;
															}
															if ((int)pSVar22.Length != 0) {
																pSVar22[0] = pSVar23;
																pSVar23 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
																if ((pSVar23 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar22.obj).klass)._1).element_class), pIVar24 == null)) goto label_05d0b2de;
																if ((pSVar22.Length & 0xfffffffe) != 0) {
																	pSVar22[1] = pSVar23;
																	pUVar19 = new GameObject("Handle", pSVar22);
																	if (pUVar19 != null) {
																		pUVar25 = pUVar19.transform;
																		pUVar43 = pUVar29.transform;
																		if (pUVar25 != null) {
																			pUVar25.SetParent(pUVar43, false);
																			pUVar27 = pUVar19.GetComponent<RectTransform>();
																			if (pUVar27 != null) {
																				pUVar27.anchorMin = (Vector2)(ChatPanel.UIAnchors. FullStretchStart);
																				pUVar27.anchorMax = (Vector2)(ChatPanel.UIAnchors. FullStretch);
																				pUVar27.sizeDelta = (Vector2)(Vector2. zeroVector);
																				pUVar37 = pUVar19.GetComponent<Image>();
																				if ((pUVar37 != null) &&(UVar50.b = 0.8, UVar50.a = 0.4, UVar50.r = 0.8, UVar50.g = 0.8,pUVar37.set_color(UVar50), __this_09 != null)) {
																					__this_09.handleRect = pUVar27;
																					__this_09.targetGraphic = (Graphic)pUVar37;
																					__this_09.direction = 2 ;
																					pUVar19 = pUVar21.gameObject;
																					if (pUVar19 != null) {
																						pUVar42 = pUVar19.AddComponent<ChatScrollRect>();
																						targetAddress_06 = &__this_03.scrollRect;
																						__this_03.scrollRect = pUVar42;
																						*targetAddress_02 = __this_03.scrollRect;
																						pUVar42 = __this_03.scrollRect;
																						if (pUVar42 != null) {
																							*(ushort)&pUVar42.m_Horizontal = 0x100;
																							pUVar42.viewport = pUVar26;
																							if (*targetAddress_01 != null) {
																								pUVar42 = *targetAddress_06;
																								pUVar26 = (*targetAddress_01).GetComponent<RectTransform>();
																								if (pUVar42 != null) {
																									pUVar42.m_Content = pUVar26;
																									if (*targetAddress_06 != null) {
																										(*targetAddress_06).verticalScrollbar = __this_09;
																										if (*targetAddress_06 != null) {
																											(*targetAddress_06).verticalScrollbarSpacing = -3.0;
																											pSVar6 = typeof(SettingsManager).static_fields .UISettings;
																											if (((pSVar6 != null) &&(pSVar7 = pSVar6.ChatScrollSensitivity, pSVar7 != null)) &&(*targetAddress_06 != null)) {
																												((*targetAddress_06).fields).m_ScrollSensitivity =(float)pSVar7._value;
																												pUVar19 = pUVar21.gameObject;
																												if (pUVar19 != null) {
																													__this_10 = pUVar19.AddComponent<EventTrigger>();
																												__this_11 = il2cpp_codegen_object_new((Il2CppClass)typeof(EventTrigger.Entry));
																												__this_11 = new EventTrigger.Entry();
																												if (__this_11 !=(EventTrigger.Entry)0x0) {
																													__this_11.eventID = 0;
																													__this_01 = __this_11.callback;
																													pUVar34 = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<BaseEventData>));
																												pUVar34 = new UnityAction<string>((object)__this_03, (intptr_t) MethodInfo_UI_ChatPanel_c__DisplayClass61_0_Setup_b__1);
																												if (((__this_01 !=(EventTrigger.TriggerEvent)0x0) && (__this_01.AddListener(pUVar34), __this_10 !=null)) &&(pSVar44 = __this_10.triggers, pMVar38 = MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add , pSVar44 !=(System_Collections_Generic_List_EventTrigger_Entry__o * )0x0)) {
																													piVar1 = &pSVar44._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar9 = pSVar44._items;
																													if (pUVar9 != null ) {
																													uVar3 = pSVar44._size;
																													if (uVar3 < (uint)pUVar9.Length) {
																														pSVar44._size = uVar3 + 1;
																														pUVar9[(int)uVar3] = __this_11;
																													}
																													else {

																												pSVar44.AddWithResize((object)__this_11);
																												}
																												pMVar38 = (MethodInfo)il2cpp_codegen_object_new((Il2CppClass)typeof(EventTrigger.Entry));
																												pMVar38 = new EventTrigger.Entry();
																												if (pMVar38 != null) {
																													*(uint)&pMVar38.invoker_method = 1;
																													__this_02 = (UnityEvent<T0>)pMVar38.name;
																													pUVar34 = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<BaseEventData>));
																												pUVar34 = new UnityAction<string>((object)__this_03, (intptr_t) MethodInfo_UI_ChatPanel_c__DisplayClass61_0_Setup_b__2);
																												if (__this_02 !=null) {
																													__this_02.AddListener(pUVar34);
																												pSVar44 = __this_10.triggers;
																												pMVar17 = MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add ;
																												if (pSVar44 !=(System_Collections_Generic_List_EventTrigger_Entry__o * )0x0) {
																													piVar1 = &pSVar44._version;
																													*piVar1 = *piVar1 + 1;
																													method_00 = (Il2CppRGCTXData)pSVar44._items;
																													if (method_00 != null) {
																														uVar3 = pSVar44._size;
																														if (uVar3 < *(uint)&method_00[3].rgctxDataDummy) {
																															pSVar44._size = uVar3 + 1;
																															method_00[(long)(int)uVar3 + 4].method = pMVar38;
																														}
																														else {
																															method_00 = pMVar17.klass.rgctx_data;

																												pSVar44.AddWithResize((object)pMVar38) ;
																												}
																												pSVar6 = typeof(SettingsManager). static_fields.UISettings;
																												if ((pSVar6 != null) &&(pSVar10 = pSVar6.ChatHidden, pSVar10 != null)) {
																													this.SetChatHiddenState(pSVar10._value, false);
																													return;
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																	goto label_05d0b2d4;
																}
															}
	label_05d0b2d9: ;
															throw new IndexOutOfRangeException();
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05d0b2d4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D6F")]
	[Address(RVA = "0x5C0B410", Offset = "0x5C0A410", VA = "0x5C0B410")]
	private void SetupChatModeLabel()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$SetupChatModeLabel): 12 lines keep C-only constructs
		TextMeshProUGUI* targetAddress;
		TMP_InputField pTVar1;
		Il2CppType handle;
		Type[] components;
		Type pSVar2;
		object pIVar3;
		GameObject pUVar4;
		Transform __this_00;
		Transform parent;
		RectTransform pUVar5;
		TextMeshProUGUI pTVar6;
		Color UVar7;

		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_05d0b797: ;
			throw new NullReferenceException();
		}
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05d0b7a1;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) {
	label_05d0b7a1: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar2;
				pUVar4 = new GameObject("ChatModeLabel", components);
				if (pUVar4 != null) {
					__this_00 = pUVar4.transform;
					pTVar1 = this._inputField;
					if (pTVar1 != null) {
						parent = pTVar1.transform;
						if (__this_00 != null) {
							__this_00.SetParent(parent, false);
							pUVar5 = pUVar4.GetComponent<RectTransform>();
							if (pUVar5 != null) {
								pUVar5.anchorMin = (Vector2)0x3f00000000000000;
								pUVar5.anchorMax = (Vector2)0x3f00000000000000;
								pUVar5.pivot = (Vector2)0x3f00000000000000;
								pUVar5.sizeDelta = (Vector2)0x41d0000042200000;
								pUVar5.anchoredPosition = (Vector2)0xc0800000;
								pTVar6 = pUVar4.GetComponent<TextMeshProUGUI>();
								targetAddress = &this._chatModeLabel;
								this._chatModeLabel = pTVar6;
								pTVar6 = this._chatModeLabel;
								if (pTVar6 != null) {
									pTVar6.fontSize = 18.0;
									if (*targetAddress != null) {
										(*targetAddress).alignment = 0x202;
										if (*targetAddress != null) {
											(*targetAddress).verticalAlignment = 0x200;
											if (*targetAddress != null) {
												(*targetAddress).horizontalAlignment = 2;
												pTVar6 = *targetAddress;
												if (pTVar6 != null) {
													UVar7.b = 1.0;
													UVar7.a = 0.5;
													UVar7.r = 1.0;
													UVar7.g = 1.0;
													pTVar6.set_color(UVar7);
													pTVar6 = *targetAddress;
													if (pTVar6 != null) {
														pTVar6.set_raycastTarget(false);
														this.UpdateChatModeLabel();
														pTVar6 = this._chatModeLabel;
														if (pTVar6 != null) {
															pUVar4 = pTVar6.gameObject;
															if (pUVar4 != null) {
																pUVar4.SetActive(false);
																pTVar1 = this._inputField;
																if ((pTVar1 != null) &&(pUVar5 = pTVar1.m_TextViewport, pUVar5 != null)) {
																	pUVar4 = pUVar5.gameObject;
																	if (pUVar4 != null) {
																		pUVar5 = pUVar4.GetComponent<RectTransform>();
																		if (pUVar5 != null) {
																			pUVar5.offsetMin = (Vector2)0x4080000040a00000;
																			return;
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				goto label_05d0b797;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004D70")]
	[Address(RVA = "0x5C0CD70", Offset = "0x5C0BD70", VA = "0x5C0CD70")]
	private void UpdateChatModeElements()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$UpdateChatModeElements): 2 lines keep C-only constructs
		int iVar1;
		List<Player> pSVar2;
		TextMeshProUGUI pTVar3;
		Object pUVar4;
		TMP_InputField pTVar5;
		Vector2 value;
		Vector2 value_00;
		Vector2 UVar6;
		bool bVar7;
		bool bVar8;
		GameObject pUVar9;
		RectTransform pUVar10;
		float fVar11;
		float fVar12;

		pSVar2 = this._pmPartners;
		if (pSVar2 == null) goto label_05d0d0ef;
		iVar1 = pSVar2._size;
		if (iVar1 < 1) {
			bVar7 = false;
		}
		else {
			bVar7 = ChatManager.HasAnyActivePMNotification();
		}
		pTVar3 = this._chatModeLabel;
		bVar8 = ((Object)pTVar3 != null);
		if (bVar8) {
			pTVar3 = this._chatModeLabel;
			if (pTVar3 == null) goto label_05d0d0ef;
			pUVar9 = pTVar3.gameObject;
			if (pUVar9 == null) goto label_05d0d0ef;
			pUVar9.SetActive(0 < iVar1);
		}
		pUVar4 = (Object)this._notificationBadge;
		bVar8 = (pUVar4 != null);
		if (bVar8) {
			pUVar9 = this._notificationBadge;
			if (pUVar9 == null) goto label_05d0d0ef;
			pUVar9.SetActive(bVar7);
		}
		pTVar3 = this._chatModeLabel;
		bVar8 = ((Object)pTVar3 != null);
		fVar12 = 40.0;
		fVar11 = -4.0;
		if ((0 < iVar1) && (bVar8)) {
			pTVar3 = this._chatModeLabel;
			if (pTVar3 == null) goto label_05d0d0ef;
			pTVar3.ForceMeshUpdate(false, false);
			pTVar3 = this._chatModeLabel;
			if (pTVar3 == null) goto label_05d0d0ef;
			fVar11 = pTVar3.get_preferredWidth();
			bVar8 = this._inPMMode;
			pTVar3 = this._chatModeLabel;
			if (pTVar3 == null) goto label_05d0d0ef;
			pUVar10 = pTVar3.GetComponent<RectTransform>();
			if (pUVar10 == null) goto label_05d0d0ef;
			fVar12 = fVar11 + 8.0;
			if (*(float)(&g_data_0100afb0 + (ulong)(bVar8 == false) * 4) <= fVar11 + 8.0) {
				fVar12 = *(float)(&g_data_0100afb0 + (ulong)(bVar8 == false) * 4);
			}
			UVar6.y = 26.0;
			UVar6.x = fVar12;
			pUVar10.sizeDelta = UVar6;
			pUVar10.anchoredPosition = (Vector2)0x0;
			fVar11 = 0.0;
		}
		pUVar4 = (Object)this._notificationBadge;
		bVar8 = (pUVar4 != null);
		if ((bVar7 & bVar8) != 0) {
			pTVar3 = this._chatModeLabel;
			bVar7 = ((Object)pTVar3 != null);
			if (bVar7) {
				pUVar9 = this._notificationBadge;
				if (pUVar9 == null) goto label_05d0d0ef;
				pUVar10 = pUVar9.GetComponent<RectTransform>();
				if (pUVar10 == null) goto label_05d0d0ef;
				value.y = 10.0;
				value.x = fVar11 + -10.0;
				pUVar10.anchoredPosition = value;
			}
		}
		pTVar5 = this._inputField;
		if ((pTVar5 != null) &&(pUVar10 = pTVar5.m_TextViewport, pUVar10 != null)) {
			pUVar9 = pUVar10.gameObject;
			if (pUVar9 != null) {
				pUVar10 = pUVar9.GetComponent<RectTransform>();
				if (pUVar10 != null) {
					if (iVar1 < 1) {
						fVar11 = 5.0;
					}
					else {
						fVar11 = fVar11 + fVar12;
					}
					UVar6 = pUVar10.offsetMin;
					value_00.y = UVar6.y;
					value_00.x = fVar11;
					pUVar10.offsetMin = value_00;
					return;
				}
			}
		}
	label_05d0d0ef: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D71")]
	[Address(RVA = "0x5C0CB60", Offset = "0x5C0BB60", VA = "0x5C0CB60")]
	private void UpdateChatModeLabel()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$UpdateChatModeLabel): 2 lines keep C-only constructs
		TextMeshProUGUI pTVar1;
		Player player;
		bool bVar2;
		String pSVar3;
		String* ppSVar4;

		pTVar1 = this._chatModeLabel;
		bVar2 = ((Object)pTVar1 == null);
		if (bVar2) {
			return;
		}
		if ((this._inPMMode == false) ||(player = this._currentPMTarget, player == null)) {
			pTVar1 = this._chatModeLabel;
			pSVar3 = UIManager.GetLocale("InGame", "Chat", "All", "", "");
		}
		else {
			pSVar3 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Name, "");
			pSVar3 = MiscExtensions.StripRichText(pSVar3);
			if (pSVar3 == null) goto label_05d0cd67;
			pTVar1 = this._chatModeLabel;
			if (pSVar3._stringLength < 5) {
				ppSVar4 = &":";
			}
			else {
				pSVar3 = pSVar3.Substring(0, 4);
				ppSVar4 = &"..";
			}
			pSVar3 = String.Concat(pSVar3, *ppSVar4);
		}
		if (pTVar1 != null) {
			pTVar1.set_text(pSVar3);
			return;
		}
	label_05d0cd67: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D72")]
	[Address(RVA = "0x5C0B7B0", Offset = "0x5C0A7B0", VA = "0x5C0B7B0")]
	private void SetupNotificationBadge()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$SetupNotificationBadge): 9 lines keep C-only constructs
		TMP_InputField __this_00;
		UnityEvent __this_01;
		Il2CppType handle;
		Type[] pSVar1;
		Type pSVar2;
		object pIVar3;
		GameObject pUVar4;
		Transform pUVar5;
		Transform pUVar6;
		RectTransform pUVar7;
		Image pUVar8;
		GameObject pUVar9;
		Sprite value;
		TextMeshProUGUI __this_02;
		Button __this_03;
		UnityAction __this_04;
		Color UVar10;
		Color UVar11;

		pSVar1 = (Type[])new Type[3];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar1 == null) goto label_05d0c034;
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05d0c03e;
		}
		if ((int)pSVar1.Length == 0) goto label_05d0c039;
		pSVar1[0] = pSVar2;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05d0c03e;
		}
		if ((pSVar1.Length & 0xfffffffe) == 0) goto label_05d0c039;
		pSVar1[1] = pSVar2;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Button);
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05d0c03e;
		}
		if ((uint)pSVar1.Length < 3) goto label_05d0c039;
		pSVar1[2] = pSVar2;
		pUVar4 = new GameObject("NotificationBadge", pSVar1);
		if (pUVar4 == null) goto label_05d0c034;
		pUVar5 = pUVar4.transform;
		__this_00 = this._inputField;
		if (__this_00 == null) goto label_05d0c034;
		pUVar6 = __this_00.transform;
		if (pUVar5 == null) goto label_05d0c034;
		pUVar5.SetParent(pUVar6, false);
		pUVar7 = pUVar4.GetComponent<RectTransform>();
		if (pUVar7 == null) goto label_05d0c034;
		pUVar7.anchorMin = (Vector2)0x3f00000000000000 ;
		pUVar7.anchorMax = (Vector2)0x3f00000000000000 ;
		pUVar7.pivot = (Vector2)0x3f00000000000000;
		pUVar7.sizeDelta = (Vector2)0x41c0000041900000 ;
		pUVar7.anchoredPosition = (Vector2)0x0;
		pUVar8 = pUVar4.GetComponent<Image>();
		if (pUVar8 == null) goto label_05d0c034;
		pUVar8.set_color((Color)ZEXT816(0));
		pSVar1 = (Type[])new Type[2];
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar1 == null) goto label_05d0c034;
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05d0c03e;
		}
		if ((int)pSVar1.Length == 0) goto label_05d0c039;
		pSVar1[0] = pSVar2;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05d0c03e;
		}
		if ((pSVar1.Length & 0xfffffffe) == 0) goto label_05d0c039;
		pSVar1[1] = pSVar2;
		pUVar9 = new GameObject("BadgeCircle", pSVar1);
		if (pUVar9 == null) {
	label_05d0c034: ;
			throw new NullReferenceException();
		}
		pUVar5 = pUVar9.transform;
		pUVar6 = pUVar4.transform;
		if (pUVar5 == null) goto label_05d0c034;
		pUVar5.SetParent(pUVar6, false);
		pUVar7 = pUVar9.GetComponent<RectTransform>();
		if (pUVar7 == null) goto label_05d0c034;
		pUVar7.anchorMin = (Vector2)0x3f0000003f000000 ;
		pUVar7.anchorMax = (Vector2)0x3f0000003f000000 ;
		pUVar7.pivot = (Vector2)0x3f0000003f000000;
		pUVar7.sizeDelta = (Vector2)0x4190000041900000 ;
		pUVar7.anchoredPosition = (Vector2)(Vector2.zeroVector);
		pUVar8 = pUVar9.GetComponent<Image>();
		value = ChatPanel.GetCircleSprite();
		if (pUVar8 == null) goto label_05d0c034;
		pUVar8.sprite = value;
		pUVar8.type = 0;
		UVar10.b = 0.15;
		UVar10.a = 1.0;
		UVar10.r = 0.8;
		UVar10.g = 0.15;
		pUVar8.set_color(UVar10);
		pUVar8.set_raycastTarget(false);
		pSVar1 = (Type[])new Type[2];
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar1 == null) goto label_05d0c034;
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05d0c03e;
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
				if (pIVar3 == null) {
	label_05d0c03e: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
			}
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = pSVar2;
				pUVar9 = new GameObject("BadgeText", pSVar1);
				if (pUVar9 != null) {
					pUVar5 = pUVar9.transform;
					pUVar6 = pUVar4.transform;
					if (pUVar5 != null) {
						pUVar5.SetParent(pUVar6, false);
						pUVar7 = pUVar9.GetComponent<RectTransform>();
						if (pUVar7 != null) {
							pUVar7.anchorMin = (Vector2)(Vector2.zeroVector);
							pUVar7.anchorMax = (Vector2)(Vector2.oneVector);
							pUVar7.sizeDelta = (Vector2)(Vector2.zeroVector);
							__this_02 = pUVar9.GetComponent<TextMeshProUGUI>();
							if (__this_02 != null) {
								__this_02.set_text("!");
								__this_02.fontSize = 16.0;
								__this_02.alignment = 0x202;
								UVar11.b = 0.2;
								UVar11.a = 1.0;
								UVar11.r = 1.0;
								UVar11.g = 0.8;
								__this_02.set_color(UVar11);
								__this_02.set_raycastTarget(false);
								__this_03 = pUVar4.GetComponent<Button>();
								if (__this_03 != null) {
									__this_03.transition = 0;
									__this_01 = (UnityEvent)__this_03.m_OnClick;
									__this_04 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ChatPanel_OnNotificationBadgeClicked);
									if (__this_01 != null) {
										__this_01.AddListener(__this_04);
										this._notificationBadge = pUVar4;
										pUVar4 = this._notificationBadge;
										if (pUVar4 != null) {
											pUVar4.SetActive(false);
											return;
										}
									}
								}
							}
						}
					}
				}
				goto label_05d0c034;
			}
		}
	label_05d0c039: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004D73")]
	[Address(RVA = "0x5C0D330", Offset = "0x5C0C330", VA = "0x5C0D330")]
	private void OnNotificationBadgeClicked()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$OnNotificationBadgeClicked): 1 lines keep C-only constructs
		List<Player> __this_00;
		object @object;
		TMP_InputField pTVar1;
		bool bVar2;
		UI_ChatPanel___c_StaticFields pUVar3;
		Predicate<T> match;
		MethodInfo method_00;

		__this_00 = this._pmPartners;
		if ((typeof(ChatPanel.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar3 = typeof(ChatPanel.c).static_fields;
			match = (Predicate<T>)pUVar3.__9__66_0;
		}
		else {
			pUVar3 = typeof(ChatPanel.c).static_fields;
			match = (Predicate<T>)pUVar3.__9__66_0;
		}
		if (match == null) {
			if (((typeof(ChatPanel.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(ChatPanel.c).static_fields;
			}
			@object = (object)pUVar3.__9;
			match = new Predicate<Player>(@object, (intptr_t)MethodInfo_UI_ChatPanel_c_OnNotificationBadgeClicked_b__66_0);
			pUVar3 = typeof(ChatPanel.c).static_fields;
			pUVar3.__9__66_0 = (Predicate<Player>)match;
		}
		if (__this_00 == null) {
	label_05d0d4db: ;
			throw new NullReferenceException();
		}
		method_00 = (MethodInfo)__this_00.Find(match);
		if (method_00 == null) {
			return;
		}
		this.EnterPMMode((Player)method_00);
		if (this._isDestroyed == false) {
			pTVar1 = this._inputField;
			method_00 = null;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._inputField;
				if (pTVar1 == null) goto label_05d0d4db;
				if (pTVar1.m_AllowInput != false) {
					return;
				}
			}
		}
		this.Activate();
		return;
	}

	[Token(Token = "0x6004D74")]
	[Address(RVA = "0x5C0D100", Offset = "0x5C0C100", VA = "0x5C0D100")]
	private static Sprite GetCircleSprite()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$GetCircleSprite): 1 lines keep C-only constructs
		Object x;
		bool bVar2;
		Texture2D __this;
		Color32[] colors;
		Sprite pUVar3;
		long lVar4;
		int iVar5;
		long lVar6;
		long lVar7;
		Color32 pUVar8;
		float fVar9;
		float fVar10;

		x = (Object)ChatPanel._cachedCircleSprite;
		bVar2 = (x != null);
		if (bVar2) {
	label_05d0d304: ;
			return ChatPanel._cachedCircleSprite;
		}
		__this = new Texture2D(0x40, 0x40, 4, false);
		colors = (Color32[])new Color32[0x1000];
		if (colors != null) {
			pUVar8 = colors.m_Items;
			lVar4 = 0;
			lVar7 = 0;
			do {
				fVar9 = (float)(int)lVar7 + -32.0 + 0.5;
				lVar6 = 0;
				do {
					fVar10 = (float)(int)lVar6 + -32.0 + 0.5;
					if (fVar10 * fVar10 + fVar9 * fVar9 <= 1024.0) {
						iVar5 = -1;
					}
					else {
						iVar5 = 0;
					}
					if ((ulong)(uint)colors.Length <= (ulong)(lVar4 + lVar6)) {
						throw new IndexOutOfRangeException();
					}
					pUVar8[lVar6]._overlap_0._at_rgba.rgba = iVar5;
					lVar6 = lVar6 + 1;
				} while (lVar6 != 0x40);
				lVar7 = lVar7 + 1;
				pUVar8 = pUVar8 + 0x40;
				lVar4 = lVar4 + 0x40;
			} while (lVar7 != 0x40);
			if (__this != null) {
				__this.SetPixels32(colors);
				__this.Apply();
				pUVar3 = Sprite.Create(__this, (Rect)(ZEXT816(0x4280000042800000) << 0x40), (Vector2)0x3f0000003f000000);
				ChatPanel._cachedCircleSprite = pUVar3;
				goto label_05d0d304;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D75")]
	[Address(RVA = "0x5C0C050", Offset = "0x5C0B050", VA = "0x5C0C050")]
	private void SetupEmojiButton()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$SetupEmojiButton): 5 lines keep C-only constructs
		TMP_InputField pTVar1;
		UnityEvent __this_00;
		Il2CppType handle;
		Type[] components;
		Type pSVar2;
		object pIVar3;
		GameObject pUVar4;
		Transform __this_01;
		Transform parent;
		RectTransform pUVar5;
		TextMeshProUGUI __this_02;
		TMP_FontAsset value;
		Button pUVar6;
		UnityAction __this_03;
		Color UVar7;

		components = (Type[])new Type[3];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_05d0c502: ;
			throw new NullReferenceException();
		}
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05d0c50c;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_05d0c50c;
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar2;
				pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Button);
				if (pSVar2 != null) {
					pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class) ;
					if (pIVar3 == null) {
	label_05d0c50c: ;
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
				}
				if (2 < (uint)components.Length) {
					components[2] = pSVar2;
					pUVar4 = new GameObject("EmojiButton", components);
					if (pUVar4 != null) {
						__this_01 = pUVar4.transform;
						pTVar1 = this._inputField;
						if (pTVar1 != null) {
							parent = pTVar1.transform ;
							if (__this_01 != null) {
								__this_01.SetParent(parent, false);
								pUVar5 = pUVar4.GetComponent<RectTransform>();
								if (pUVar5 != null) {
									pUVar5.anchorMin = (Vector2)(ChatPanel.UIAnchors.RightCenter);
									pUVar5.anchorMax = (Vector2)(ChatPanel.UIAnchors.RightCenter);
									pUVar5.pivot = (Vector2)(ChatPanel.UIAnchors.RightCenter);
									pUVar5.sizeDelta = (Vector2)0x41d0000041f00000;
									pUVar5.anchoredPosition = (Vector2)0xc0000000;
									__this_02 = pUVar4.GetComponent<TextMeshProUGUI>();
									value = GisketchTypography.Resolve("text", 400, "\xe2\x98\xba");
									if (__this_02 != null) {
										__this_02.font = value;
										__this_02.set_text("\xe2\x98\xba");
										__this_02.fontSize = 24.0;
										__this_02.alignment = 0x202;
										__this_02.verticalAlignment = 0x200 ;
										__this_02.horizontalAlignment = 2;
										__this_02.set_margin((Vector4)ZEXT816(0));
										UVar7.b = 1.0;
										UVar7.a = 0.5;
										UVar7.r = 1.0;
										UVar7.g = 1.0;
										__this_02.set_color(UVar7);
										pUVar6 = pUVar4.GetComponent<Button>();
										this._emojiButton = pUVar6;
										pUVar6 = this._emojiButton;
										if (pUVar6 != null) {
											__this_00 = (UnityEvent)pUVar6.m_OnClick;
											__this_03 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ChatPanel_ToggleEmojiPanel);
											if (__this_00 != null) {
												__this_00.AddListener(__this_03);
												pTVar1 = this._inputField;
												if ((pTVar1 != null) &&(pUVar5 = pTVar1.m_TextViewport, pUVar5 != null)) {
													pUVar4 = pUVar5.gameObject;
													if (pUVar4 != null) {
														pUVar5 = pUVar4.GetComponent<RectTransform>();
														if (pUVar5 != null) {
															pUVar5.offsetMax = (Vector2)0xc0000000c2040000;
															return;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					goto label_05d0c502;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004D76")]
	[Address(RVA = "0x5C0D720", Offset = "0x5C0C720", VA = "0x5C0D720")]
	private void ToggleEmojiPanel()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$ToggleEmojiPanel): clean
		Object x;
		GameObject pUVar1;
		TMP_InputField __this_00;
		bool bVar2;
		RectTransform __this_01;
		Vector3[] fourCornersArray;
		Transform pUVar3;
		Vector3 value;

		x = (Object)this._emojiPanel;
		bVar2 = (x == null);
		if (bVar2) {
			this.CreateEmojiPanel();
		}
		bVar2 = this._emojiPanelActive;
		this._emojiPanelActive = (bool)(bVar2 ^ 1);
		pUVar1 = this._emojiPanel;
		if (pUVar1 != null) {
			pUVar1.SetActive(bVar2 == false);
			if (this._emojiPanelActive == false) {
				return;
			}
			__this_00 = this._inputField;
			if (__this_00 != null) {
				__this_01 = __this_00.GetComponent<RectTransform>();
				fourCornersArray = (Vector3[])new Vector3[4];
				if (__this_01 != null) {
					__this_01.GetWorldCorners(fourCornersArray);
					pUVar1 = this._emojiPanel;
					if (pUVar1 != null) {
						pUVar3 = pUVar1.transform;
						if (fourCornersArray != null) {
							if ((uint)fourCornersArray.Length < 3) {
								throw new IndexOutOfRangeException();
							}
							if (pUVar3 != null) {
								value.y = fourCornersArray[0].y;
								value.x = fourCornersArray[2].x;
								value.z = fourCornersArray[2].z;
								pUVar3.position = value;
								pUVar1 = this._emojiPanel;
								if (pUVar1 != null) {
									pUVar3 = pUVar1.transform;
									if (pUVar3 != null) {
										pUVar3.SetAsLastSibling();
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D77")]
	[Address(RVA = "0x5C0D8A0", Offset = "0x5C0C8A0", VA = "0x5C0D8A0")]
	private void CreateEmojiPanel()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$CreateEmojiPanel): 53 lines keep C-only constructs
		GameObject* targetAddress;
		TextMeshProUGUI* targetAddress_00;
		BaseMenu __this_00;
		UnityEvent pUVar1;
		Il2CppType handle;
		ChatPanel.c__DisplayClass70_0 __this_01;
		Type[] pSVar2;
		Type pSVar3;
		object pIVar4;
		GameObject pUVar5;
		Transform pUVar6;
		Transform pUVar7;
		RectTransform pUVar8;
		Image pUVar9;
		TextMeshProUGUI pTVar10;
		String pSVar11;
		Button pUVar12;
		UnityAction pUVar13;
		GridLayoutGroup __this_02;
		GameObject pUVar14;
		TextMeshProUGUI* targetAddress_01;
		Color UVar15;
		Color UVar16;
		Color UVar17;
		Color UVar18;
		Color UVar19;
		Color UVar20;
		Color UVar21;

		__this_01 = new ChatPanel.c__DisplayClass70_0();
		if (__this_01 == null) goto label_05d0f0ce;
		__this_01.__4__this = this;
		pSVar2 = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar2 == null) goto label_05d0f0ce;
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((int)pSVar2.Length == 0) goto label_05d0f0d3;
		pSVar2[0] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((pSVar2.Length & 0xfffffffe) == 0) goto label_05d0f0d3;
		pSVar2[1] = pSVar3;
		pUVar5 = new GameObject("EmojiPanel", pSVar2);
		targetAddress = &this._emojiPanel;
		this._emojiPanel = pUVar5;
		pUVar5 = this._emojiPanel;
		if (pUVar5 == null) goto label_05d0f0ce;
		pUVar6 = pUVar5.transform;
		__this_00 = UIManager.CurrentMenu;
		if (__this_00 == null) goto label_05d0f0ce;
		pUVar7 = __this_00.transform;
		if (pUVar6 == null) goto label_05d0f0ce;
		pUVar6.SetParent(pUVar7, false);
		if (*targetAddress == null) goto label_05d0f0ce;
		pUVar8 = (*targetAddress).GetComponent<RectTransform>();
		if (pUVar8 == null) goto label_05d0f0ce;
		pUVar8.anchorMin = (Vector2)(ChatPanel.UIAnchors.BottomLeft);
		pUVar8.anchorMax = (Vector2)(ChatPanel.UIAnchors.BottomLeft);
		pUVar8.pivot = (Vector2)(ChatPanel.UIAnchors.BottomLeft);
		pUVar8.sizeDelta = (Vector2)0x43630000434d0000 ;
		if (*targetAddress == null) goto label_05d0f0ce;
		pUVar9 = (*targetAddress).GetComponent<Image>();
		if (pUVar9 == null) goto label_05d0f0ce;
		UVar15.b = 0.118;
		UVar15.a = 0.95;
		UVar15.r = 0.118;
		UVar15.g = 0.118;
		pUVar9.set_color(UVar15);
		pSVar2 = (Type[])new Type[2];
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar2 == null) goto label_05d0f0ce;
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((int)pSVar2.Length == 0) goto label_05d0f0d3;
		pSVar2[0] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((pSVar2.Length & 0xfffffffe) == 0) goto label_05d0f0d3;
		pSVar2[1] = pSVar3;
		pUVar5 = new GameObject("TooltipArea", pSVar2);
		if (pUVar5 == null) goto label_05d0f0ce;
		pUVar6 = pUVar5.transform;
		if (*targetAddress == null) goto label_05d0f0ce;
		pUVar7 = (*targetAddress).transform;
		if (pUVar6 == null) goto label_05d0f0ce;
		pUVar6.SetParent(pUVar7, false);
		pUVar8 = pUVar5.GetComponent<RectTransform>();
		if (pUVar8 == null) goto label_05d0f0ce;
		pUVar8.anchorMin = (Vector2)0x3f80000000000000 ;
		pUVar8.anchorMax = (Vector2)0x3f8000003f800000 ;
		pUVar8.pivot = (Vector2)0x3f8000003f000000;
		pUVar8.sizeDelta = (Vector2)0x40e0000000000000 ;
		pUVar8.anchoredPosition = (Vector2)0xc0e0000000000000;
		pTVar10 = pUVar5.GetComponent<TextMeshProUGUI>();
		targetAddress_01 = &__this_01.tooltipText;
		__this_01.tooltipText = pTVar10;
		pTVar10 = __this_01.tooltipText;
		if (pTVar10 == null) goto label_05d0f0ce;
		pTVar10.fontSize = 14.0;
		pTVar10 = *targetAddress_01;
		if (pTVar10 == null) goto label_05d0f0ce;
		UVar16.b = 1.0;
		UVar16.a = 0.8;
		UVar16.r = 1.0;
		UVar16.g = 1.0;
		pTVar10.set_color(UVar16);
		if (*targetAddress_01 == null) goto label_05d0f0ce;
		(*targetAddress_01).alignment = 0x202;
		pTVar10 = *targetAddress_01;
		if (pTVar10 == null) goto label_05d0f0ce;
		pTVar10.set_text("");
		pSVar2 = (Type[])new Type[3];
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar2 == null) goto label_05d0f0ce;
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((int)pSVar2.Length == 0) goto label_05d0f0d3;
		pSVar2[0] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Button);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((pSVar2.Length & 0xfffffffe) == 0) goto label_05d0f0d3;
		pSVar2[1] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((uint)pSVar2.Length < 3) goto label_05d0f0d3;
		pSVar2[2] = pSVar3;
		pUVar5 = new GameObject("EmojiModeButton", pSVar2);
		if (pUVar5 == null) goto label_05d0f0ce;
		pUVar6 = pUVar5.transform;
		if (*targetAddress == null) goto label_05d0f0ce;
		pUVar7 = (*targetAddress).transform;
		if (pUVar6 == null) goto label_05d0f0ce;
		pUVar6.SetParent(pUVar7, false);
		pUVar8 = pUVar5.GetComponent<RectTransform>();
		if (pUVar8 == null) goto label_05d0f0ce;
		pUVar8.anchorMin = (Vector2)0x3f8000003f000000 ;
		pUVar8.anchorMax = (Vector2)0x3f8000003f000000 ;
		pUVar8.pivot = (Vector2)0x3f8000003f800000;
		pUVar8.sizeDelta = (Vector2)0x4170000042a00000 ;
		pUVar8.anchoredPosition = (Vector2)0xc0e00000c1f00000;
		pTVar10 = pUVar5.GetComponent<TextMeshProUGUI>();
		pSVar11 = UIManager.GetLocaleCommon("Emoji");
		if (pTVar10 == null) goto label_05d0f0ce;
		pTVar10.set_text(pSVar11);
		pTVar10.fontSize = 14.0;
		pTVar10.alignment = 0x202;
		UVar17.b = 1.0;
		UVar17.a = 1.0;
		UVar17.r = 1.0;
		UVar17.g = 1.0;
		pTVar10.set_color(UVar17);
		pUVar12 = pUVar5.GetComponent<Button>();
		this._emojiModeButton = pUVar12;
		pUVar12 = this._emojiModeButton;
		if (pUVar12 == null) goto label_05d0f0ce;
		pUVar1 = (UnityEvent)pUVar12.m_OnClick;
		pUVar13 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass70_0_CreateEmojiPanel_b__0);
		if (pUVar1 == null) goto label_05d0f0ce;
		pUVar1.AddListener(pUVar13);
		pSVar2 = (Type[])new Type[3];
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar2 == null) goto label_05d0f0ce;
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((int)pSVar2.Length == 0) goto label_05d0f0d3;
		pSVar2[0] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Button);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((pSVar2.Length & 0xfffffffe) == 0) goto label_05d0f0d3;
		pSVar2[1] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((uint)pSVar2.Length < 3) goto label_05d0f0d3;
		pSVar2[2] = pSVar3;
		pUVar5 = new GameObject("StickerModeButton", pSVar2);
		if (pUVar5 == null) goto label_05d0f0ce;
		pUVar6 = pUVar5.transform;
		if (*targetAddress == null) goto label_05d0f0ce;
		pUVar7 = (*targetAddress).transform;
		if (pUVar6 == null) goto label_05d0f0ce;
		pUVar6.SetParent(pUVar7, false);
		pUVar8 = pUVar5.GetComponent<RectTransform>();
		if (pUVar8 == null) goto label_05d0f0ce;
		pUVar8.anchorMin = (Vector2)0x3f8000003f000000 ;
		pUVar8.anchorMax = (Vector2)0x3f8000003f000000 ;
		pUVar8.pivot = (Vector2)0x3f80000000000000;
		pUVar8.sizeDelta = (Vector2)0x4170000042a00000 ;
		pUVar8.anchoredPosition = (Vector2)0xc0e0000041f00000;
		pTVar10 = pUVar5.GetComponent<TextMeshProUGUI>();
		pSVar11 = UIManager.GetLocale("InGame", "Chat", "Sticker", "", "");
		if (pTVar10 == null) goto label_05d0f0ce;
		pTVar10.set_text(pSVar11);
		pTVar10.fontSize = 14.0;
		pTVar10.alignment = 0x202;
		UVar18.b = 1.0;
		UVar18.a = 0.6;
		UVar18.r = 1.0;
		UVar18.g = 1.0;
		pTVar10.set_color(UVar18);
		pUVar12 = pUVar5.GetComponent<Button>();
		this._stickerModeButton = pUVar12;
		pUVar12 = this._stickerModeButton;
		if (pUVar12 == null) goto label_05d0f0ce;
		pUVar1 = (UnityEvent)pUVar12.m_OnClick;
		pUVar13 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass70_0_CreateEmojiPanel_b__1);
		if (pUVar1 == null) goto label_05d0f0ce;
		pUVar1.AddListener(pUVar13);
		pSVar2 = (Type[])new Type[2];
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar2 == null) goto label_05d0f0ce;
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((int)pSVar2.Length == 0) goto label_05d0f0d3;
		pSVar2[0] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_GridLayoutGroup);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((pSVar2.Length & 0xfffffffe) == 0) goto label_05d0f0d3;
		pSVar2[1] = pSVar3;
		pUVar5 = new GameObject("EmojiGrid", pSVar2);
		if (pUVar5 == null) goto label_05d0f0ce;
		pUVar6 = pUVar5.transform;
		if (*targetAddress == null) goto label_05d0f0ce;
		pUVar7 = (*targetAddress).transform;
		if (pUVar6 == null) goto label_05d0f0ce;
		pUVar6.SetParent(pUVar7, false);
		pUVar8 = pUVar5.GetComponent<RectTransform>();
		if (pUVar8 == null) goto label_05d0f0ce;
		pUVar8.anchorMin = (Vector2)(ChatPanel.UIAnchors.FullStretchStart);
		pUVar8.anchorMax = (Vector2)(ChatPanel.UIAnchors.FullStretch);
		pUVar8.sizeDelta = (Vector2)(Vector2.zeroVector);
		pUVar8.offsetMin = (Vector2)0x41f0000041700000 ;
		pUVar8.offsetMax = (Vector2)0xc1b00000c1700000 ;
		__this_02 = pUVar5.GetComponent<GridLayoutGroup>();
		if (__this_02 == null) goto label_05d0f0ce;
		__this_02.cellSize = (Vector2)0x4220000042200000;
		__this_02.spacing = (Vector2)0x40a0000040a00000;
		__this_02.constraint = 1;
		__this_02.constraintCount = 4;
		pSVar2 = (Type[])new Type[1];
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar2 == null) goto label_05d0f0ce;
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((int)pSVar2.Length == 0) goto label_05d0f0d3;
		pSVar2[0] = pSVar3;
		pUVar5 = new GameObject("NavPanel", pSVar2);
		if (pUVar5 == null) goto label_05d0f0ce;
		pUVar6 = pUVar5.transform;
		if (*targetAddress == null) goto label_05d0f0ce;
		pUVar7 = (*targetAddress).transform;
		if (pUVar6 == null) goto label_05d0f0ce;
		pUVar6.SetParent(pUVar7, false);
		pUVar8 = pUVar5.GetComponent<RectTransform>();
		if (pUVar8 == null) goto label_05d0f0ce;
		pUVar8.anchorMin = (Vector2)0x0;
		pUVar8.anchorMax = (Vector2)0x3f800000;
		pUVar8.pivot = (Vector2)0x3f000000;
		pUVar8.sizeDelta = (Vector2)0x4170000000000000 ;
		pUVar8.anchoredPosition = (Vector2)0x40f0000000000000;
		pSVar2 = (Type[])new Type[3];
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar2 == null) goto label_05d0f0ce;
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((int)pSVar2.Length == 0) goto label_05d0f0d3;
		pSVar2[0] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Button);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((pSVar2.Length & 0xfffffffe) == 0) goto label_05d0f0d3;
		pSVar2[1] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((uint)pSVar2.Length < 3) goto label_05d0f0d3;
		pSVar2[2] = pSVar3;
		pUVar14 = new GameObject("BackButton", pSVar2);
		if (pUVar14 == null) goto label_05d0f0ce;
		pUVar6 = pUVar14.transform;
		pUVar7 = pUVar5.transform;
		if (pUVar6 == null) goto label_05d0f0ce;
		pUVar6.SetParent(pUVar7, false);
		pUVar8 = pUVar14.GetComponent<RectTransform>();
		if (pUVar8 == null) goto label_05d0f0ce;
		pUVar8.anchorMin = (Vector2)0x0;
		pUVar8.anchorMax = (Vector2)0x3f80000000000000 ;
		pUVar8.pivot = (Vector2)0x3f00000000000000;
		pUVar8.sizeDelta = (Vector2)0x4170000042700000 ;
		pUVar8.anchoredPosition = (Vector2)0x41200000;
		pTVar10 = pUVar14.GetComponent<TextMeshProUGUI>();
		if (pTVar10 == null) goto label_05d0f0ce;
		pTVar10.set_text("<");
		pTVar10.fontSize = 14.0;
		pTVar10.alignment = 0x202;
		UVar19.b = 1.0;
		UVar19.a = 1.0;
		UVar19.r = 1.0;
		UVar19.g = 1.0;
		pTVar10.set_color(UVar19);
		pUVar12 = pUVar14.GetComponent<Button>();
		this._emojiBackButton = pUVar12;
		pUVar12 = this._emojiBackButton;
		if (pUVar12 == null) goto label_05d0f0ce;
		pUVar1 = (UnityEvent)pUVar12.m_OnClick;
		pUVar13 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass70_0_CreateEmojiPanel_b__2);
		if (pUVar1 == null) goto label_05d0f0ce;
		pUVar1.AddListener(pUVar13);
		pSVar2 = (Type[])new Type[2];
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar2 == null) goto label_05d0f0ce;
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((int)pSVar2.Length == 0) goto label_05d0f0d3;
		pSVar2[0] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((pSVar2.Length & 0xfffffffe) == 0) goto label_05d0f0d3;
		pSVar2[1] = pSVar3;
		pUVar14 = new GameObject("PageText", pSVar2);
		if (pUVar14 == null) {
	label_05d0f0ce: ;
			throw new NullReferenceException();
		}
		pUVar6 = pUVar14.transform;
		pUVar7 = pUVar5.transform;
		if (pUVar6 == null) goto label_05d0f0ce;
		pUVar6.SetParent(pUVar7, false);
		pUVar8 = pUVar14.GetComponent<RectTransform>();
		if (pUVar8 == null) goto label_05d0f0ce;
		pUVar8.anchorMin = (Vector2)0x3f000000;
		pUVar8.anchorMax = (Vector2)0x3f8000003f000000 ;
		pUVar8.pivot = (Vector2)0x3f0000003f000000;
		pUVar8.sizeDelta = (Vector2)0x4170000042700000 ;
		pUVar8.anchoredPosition = (Vector2)0x0;
		pTVar10 = pUVar14.GetComponent<TextMeshProUGUI>();
		targetAddress_00 = &this._emojiPageText;
		this._emojiPageText = pTVar10;
		pTVar10 = this._emojiPageText;
		if (pTVar10 == null) goto label_05d0f0ce;
		pTVar10.fontSize = 14.0;
		if (*targetAddress_00 == null) goto label_05d0f0ce;
		(*targetAddress_00).alignment = 0x202;
		pTVar10 = *targetAddress_00;
		if (pTVar10 == null) goto label_05d0f0ce;
		UVar20.b = 1.0;
		UVar20.a = 1.0;
		UVar20.r = 1.0;
		UVar20.g = 1.0;
		pTVar10.set_color(UVar20);
		pSVar2 = (Type[])new Type[3];
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar2 == null) goto label_05d0f0ce;
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((int)pSVar2.Length == 0) goto label_05d0f0d3;
		pSVar2[0] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Button);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d0f0d8;
		}
		if ((pSVar2.Length & 0xfffffffe) != 0) {
			pSVar2[1] = pSVar3;
			pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
			if (pSVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
				if (pIVar4 == null) {
	label_05d0f0d8: ;
					pIVar4 = new ArrayTypeMismatchException();
					throw pIVar4;
				}
			}
			if (2 < (uint)pSVar2.Length) {
				pSVar2[2] = pSVar3;
				pUVar14 = new GameObject("NextButton", pSVar2);
				if (pUVar14 != null) {
					pUVar6 = pUVar14.transform;
					pUVar7 = pUVar5.transform;
					if (pUVar6 != null) {
						pUVar6.SetParent(pUVar7, false);
						pUVar8 = pUVar14.GetComponent<RectTransform>();
						if (pUVar8 != null) {
							pUVar8.anchorMin = (Vector2)0x3f800000;
							pUVar8.anchorMax = (Vector2)0x3f8000003f800000;
							pUVar8.pivot = (Vector2)0x3f0000003f800000;
							pUVar8.sizeDelta = (Vector2)0x4170000042700000;
							pUVar8.anchoredPosition = (Vector2)0xc1200000;
							pTVar10 = pUVar14.GetComponent<TextMeshProUGUI>();
							if (pTVar10 != null) {
								pTVar10.set_text(">");
								pTVar10.fontSize = 14.0;
								pTVar10.alignment = 0x202;
								UVar21.b = 1.0;
								UVar21.a = 1.0;
								UVar21.r = 1.0;
								UVar21.g = 1.0;
								pTVar10.set_color(UVar21);
								pUVar12 = pUVar14.GetComponent<Button>();
								this._emojiNextButton = pUVar12;
								pUVar12 = this._emojiNextButton;
								if (pUVar12 != null) {
									pUVar1 = (UnityEvent)pUVar12.m_OnClick;
									pUVar13 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass70_0_CreateEmojiPanel_b__3);
									if (pUVar1 != null) {
										pUVar1.AddListener(pUVar13);
										this.AddEmojiButtons(*targetAddress_01);
										this.SetPanelMode(0);
										pUVar5 = this._emojiPanel;
										if (pUVar5 != null) {
											pUVar5.SetActive(false);
											return;
										}
									}
								}
							}
						}
					}
				}
				goto label_05d0f0ce;
			}
		}
	label_05d0f0d3: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004D78")]
	[Address(RVA = "0x5C0F100", Offset = "0x5C0E100", VA = "0x5C0F100")]
	private void AddEmojiButtons(TextMeshProUGUI tooltipText)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$AddEmojiButtons): 11 lines keep C-only constructs
		int iVar1;
		byte bVar2;
		GameObject __this_00;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		Button pUVar5;
		TextMeshProUGUI pTVar6;
		bool bVar7;
		Transform pUVar8;
		GridLayoutGroup emojiGrid;
		VirtualInvokeData pVVar9;
		Component __this_01;
		Object obj;
		object pIVar10;
		object arg1;
		String pSVar11;
		ulong uVar12;
		int spriteIndex;
		int iVar13;
		long lVar14;
		object local_68;
		uint local_5c;
		object local_58;
		ulong local_50;
		byte local_48;
		object* local_40;
		TextMeshProUGUI local_38;

		if (Il2CppMethodInitialized_07547d43 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_GridLayoutGroup) ;
			Il2CppMethodInitialized_07547d43 = true;
		}
		local_58 = null;
		__this_00 = this._emojiPanel;
		if ((((__this_00 != null) &&(pUVar8 = __this_00.transform, pUVar8 != null)) &&(pUVar8 = pUVar8.Find("EmojiGrid"), pUVar8 != null)) &&((emojiGrid = pUVar8.GetComponent<GridLayoutGroup>(), emojiGrid != null &&(local_38 = tooltipText, pUVar8 = emojiGrid.transform, pUVar8 != null)))) {
			local_68 = (object)pUVar8.GetEnumerator();
			local_48 = (byte)&local_68;
			local_50 = 0;
			local_40 = &local_58;
			do {
				pIVar10 = local_68;
				if (local_68 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = local_68.klass;
				uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
				bVar7 = pIVar10.Dispose();
				pIVar10 = local_68;
				if (!bVar7) {
					pIVar10 = (local_68 as IDisposable);
					pTVar6 = local_38;
					local_58 = pIVar10;
					if (pIVar10 == null) goto label_05d0f436;
					pIVar3 = pIVar10.klass;
					uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
					if (uVar12 == 0) goto label_05d0f40f;
					pIVar4 = (pIVar3._1).interfaceOffsets;
					lVar14 = 0;
					goto label_05d0f400;
				}
				if (local_68 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = local_68.klass;
				uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
				__this_01 = (Component)pIVar10.Dispose();
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				bVar2 = (typeof(Transform)._2).typeHierarchyDepth;
				if (((__this_01.klass._2).typeHierarchyDepth < bVar2) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(Transform))) {
					throw new InvalidCastException();
				}
				obj = (Object)__this_01.gameObject;
				Object.Destroy(obj);
			} while(true);
		}
		goto label_05d0f5a8;
		while (true) {
			lVar14 = lVar14 + 0x10;
			if (!(uVar12 * 0x10 != lVar14)) break;
	label_05d0f400: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar14) == typeof(IDisposable)) {
				pVVar9 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar14);
				goto label_05d0f42d;
			}
		}
	label_05d0f40f: ;
	label_05d0f42d: ;
		pIVar10.Dispose();
	label_05d0f436: ;
		spriteIndex = this._emojiPage * 0x10;
		iVar1 = spriteIndex + 0x10;
		iVar13 = 0x8d;
		if (iVar1 < 0x8d) {
			iVar13 = iVar1;
		}
		if (spriteIndex < iVar13) {
			do {
				this.CreateSpriteButton(emojiGrid, pTVar6, spriteIndex, this._panelMode == 1);
				spriteIndex = spriteIndex + 1;
			} while (iVar13 != spriteIndex);
		}
		pUVar5 = this._emojiBackButton;
		if (pUVar5 != null) {
			pUVar5.interactable = 0 < this._emojiPage;
			pUVar5 = this._emojiNextButton;
			if (pUVar5 != null) {
				pUVar5.interactable = iVar1 < 0x8d;
				pTVar6 = this._emojiPageText;
				bVar7 = ((Object)pTVar6 != null);
				if (bVar7) {
					pTVar6 = this._emojiPageText;
					local_50 = CONCAT44(local_50._4_4_, this._emojiPage + 1);
					pIVar10 = (object)local_50;
					local_5c = 9;
					arg1 = (object)local_5c;
					pSVar11 = String.Format("{0}/{1}", pIVar10, arg1);
					if (pTVar6 == null) goto label_05d0f5a8;
					pTVar6.set_text(pSVar11);
				}
				return;
			}
		}
	label_05d0f5a8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D79")]
	[Address(RVA = "0x5C0F7E0", Offset = "0x5C0E7E0", VA = "0x5C0F7E0")]
	private void CreateSpriteButton(GridLayoutGroup emojiGrid, TextMeshProUGUI tooltipText, int spriteIndex, bool isSticker)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$CreateSpriteButton): 23 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String arg0;
		UnityEvent pUVar3;
		EventTrigger.TriggerEvent pUVar4;
		EventTrigger.Entry[] pUVar5;
		Il2CppType pIVar6;
		MethodInfo pMVar7;
		ChatPanel.c__DisplayClass72_0 __this_00;
		String* ppSVar8;
		object pIVar9;
		String pSVar10;
		Type[] pSVar11;
		Type pSVar12;
		GameObject __this_01;
		Transform pUVar13;
		Transform pUVar14;
		Image pUVar15;
		GameObject __this_02;
		RectTransform __this_03;
		TextMeshProUGUI __this_04;
		Button pUVar16;
		UnityAction pUVar17;
		EventTrigger __this_05;
		EventTrigger.Entry pUVar18;
		UnityAction<T0> pUVar19;
		List<EventTrigger.Entry> pSVar20;
		Color UVar21;
		Color UVar22;
		int local_40;
		int local_3c;
		GridLayoutGroup local_38;

		local_38 = emojiGrid;
		__this_00 = new ChatPanel.c__DisplayClass72_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			__this_00.spriteIndex = spriteIndex;
			__this_00.tooltipText = tooltipText;
			pSVar10 = "{0}{1}";
			if (isSticker) {
				ppSVar8 = &"StickerButton_";
			}
			else {
				ppSVar8 = &"EmojiButton_";
			}
			arg0 = *ppSVar8;
			local_3c = __this_00.spriteIndex;
			pIVar9 = (object)local_3c;
			pSVar10 = String.Format(pSVar10, (object)arg0, pIVar9);
			pSVar11 = (Type[])new Type[3];
			pIVar6 = TypeRef_UnityEngine_RectTransform;
			pSVar12 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar6);
			if (pSVar11 != null) {
				if ((pSVar12 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar12, (((pSVar11.obj).klass)._1).element_class) , pIVar9 == null)) {
	label_05d10135: ;
					pIVar9 = new ArrayTypeMismatchException();
					throw pIVar9;
				}
				if ((int)pSVar11.Length != 0) {
					pSVar11[0] = pSVar12;
					pSVar12 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Button);
					if ((pSVar12 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar12, (((pSVar11.obj).klass)._1).element_class), pIVar9 == null)) goto label_05d10135;
					if ((pSVar11.Length & 0xfffffffe) != 0) {
						pSVar11[1] = pSVar12;
						pSVar12 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
						if ((pSVar12 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar12, (((pSVar11.obj).klass)._1).element_class), pIVar9 == null)) goto label_05d10135;
						if (2 < (uint)pSVar11.Length) {
							pSVar11[2] = pSVar12;
							__this_01 = new GameObject(pSVar10, pSVar11);
							if (((__this_01 != null) &&(pUVar13 = __this_01.transform, local_38 != null)) &&(pUVar14 = local_38.transform, pUVar13 != null)) {
								pUVar13.SetParent(pUVar14, false);
								pUVar15 = __this_01.GetComponent<Image>() ;
								if (pUVar15 != null) {
									UVar21.b = 0.3;
									UVar21.a = 0.8;
									UVar21.r = 0.3;
									UVar21.g = 0.3;
									pUVar15.set_color(UVar21);
									if (isSticker) {
										ppSVar8 = &"StickerText";
									}
									else {
										ppSVar8 = &"EmojiText";
									}
									pSVar10 = *ppSVar8;
									pSVar11 = (Type[])new Type[2];
									pIVar6 = TypeRef_UnityEngine_RectTransform;
									pSVar12 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar6) ;
									if (pSVar11 != null) {
										if ((pSVar12 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar12, (((pSVar11.obj).klass)._1).element_class), pIVar9 == null)) goto label_05d10135;
										if ((int)pSVar11.Length != 0) {
											pSVar11[0] = pSVar12;
											pSVar12 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
											if ((pSVar12 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar12, (((pSVar11.obj).klass)._1).element_class), pIVar9 == null)) goto label_05d10135;
											if ((pSVar11.Length & 0xfffffffe) != 0) {
												pSVar11[1] = pSVar12;
												__this_02 = new GameObject(pSVar10, pSVar11);
												if (__this_02 != null) {
													pUVar13 = __this_02.transform;
													pUVar14 = __this_01.transform;
													if (pUVar13 != null) {
														pUVar13.SetParent(pUVar14, false);
														__this_03 = __this_02.GetComponent<RectTransform>() ;
														if (__this_03 != null) {
															__this_03.anchorMin = (Vector2)(ChatPanel.UIAnchors.CenterMiddle);
															__this_03.anchorMax = (Vector2)(ChatPanel.UIAnchors.CenterMiddle);
															__this_03.pivot = (Vector2)(ChatPanel.UIAnchors.CenterMiddle);
															__this_03.sizeDelta = (Vector2)0x4218000042180000;
															__this_03.anchoredPosition = (Vector2)0x0;
															__this_04 = __this_02.GetComponent<TextMeshProUGUI>();
															local_40 = __this_00.spriteIndex;
															pIVar9 = (object)local_40;
															pSVar10 = String.Format("<sprite={0}>", pIVar9);
															if (__this_04 != null) {
																__this_04.set_text(pSVar10);
																__this_04.fontSize = 30.0;
																__this_04.alignment = 0x202;
																__this_04.verticalAlignment = 0x200;
																__this_04.enableAutoSizing = false;
																UVar22.b = 1.0;
																UVar22.a = 1.0;
																UVar22.r = 1.0;
																UVar22.g = 1.0;
																__this_04.set_color(UVar22);
																pUVar16 = __this_01.GetComponent<Button>();
																if (isSticker) {
																	if (pUVar16 != null) {
																		pUVar3 = (UnityEvent)pUVar16.m_OnClick;
																		pUVar17 = il2cpp_codegen_object_new(typeof(UnityAction)) ;
																		pUVar17 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_ChatPanel_c__DisplayClass72_0_CreateSpriteButton_b__0);
																		if (pUVar3 != null) {
																			pUVar3.AddListener(pUVar17);
																			__this_01.AddComponent<EventTrigger>();
																			return;
																		}
																	}
																}
																else if (pUVar16 != null) {
																	pUVar3 = (UnityEvent)pUVar16.m_OnClick;
																	pUVar17 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_ChatPanel_c__DisplayClass72_0_CreateSpriteButton_b__1);
																	if (pUVar3 != null) {
																		pUVar3.AddListener(pUVar17) ;
																		__this_05 = __this_01.AddComponent<EventTrigger>();
																		pUVar18 = il2cpp_codegen_object_new((Il2CppClass)typeof(EventTrigger.Entry));
																		pUVar18 = new EventTrigger.Entry();
																		if (pUVar18 != null) {
																			pUVar18.eventID = 0;
																			pUVar4 = pUVar18.callback;
																			pUVar19 = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<BaseEventData>));
																			pUVar19 = new UnityAction<object>((object)__this_00, (intptr_t) MethodInfo_UI_ChatPanel_c__DisplayClass72_0_CreateSpriteButton_b__2);
																			if (((pUVar4 != (EventTrigger.TriggerEvent)0x0) &&(pUVar4.AddListener(pUVar19), __this_05 != null)) &&(pSVar20 = __this_05.triggers, pMVar7 = MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add, pSVar20 != null )) {
																				piVar1 = &pSVar20._version;
																				*piVar1 = *piVar1 + 1;
																				pUVar5 = pSVar20._items;
																				if (pUVar5 != null) {
																					uVar2 = pSVar20._size;
																					if (uVar2 < (uint)pUVar5.Length) {
																						pSVar20._size = uVar2 + 1;
																						pUVar5[(int)uVar2] = pUVar18;
																					}
																					else {
																						pSVar20.AddWithResize((object)pUVar18);
																					}
																					pUVar18 = il2cpp_codegen_object_new((Il2CppClass)typeof(EventTrigger.Entry));
																					pUVar18 = new EventTrigger.Entry();
																					if (pUVar18 != null) {
																						pUVar18.eventID = 1;
																						pUVar4 = pUVar18.callback;
																						pUVar19 = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<BaseEventData>));
																						pUVar19 = new UnityAction<object>((object)__this_00, (intptr_t) MethodInfo_UI_ChatPanel_c__DisplayClass72_0_CreateSpriteButton_b__3);
																						if (pUVar4 != null) {
																							pUVar4.AddListener(pUVar19);
																							pSVar20 = __this_05.triggers;
																							pMVar7 = MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add;
																							if (pSVar20 !=null) {
																								piVar1 = &pSVar20._version;
																								*piVar1 = *piVar1 + 1;
																								pUVar5 = pSVar20._items;
																								if (pUVar5 != null) {
																									uVar2 = pSVar20._size;
																									if (uVar2 < (uint)pUVar5.Length) {
																										pSVar20._size = uVar2 + 1;
																										pUVar5[(int)uVar2] = pUVar18;
																										return;
																									}
																									pSVar20.AddWithResize((object)pUVar18);
																									return;
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
												goto label_05d1012b;
											}
										}
										goto label_05d10130;
									}
								}
							}
							goto label_05d1012b;
						}
					}
				}
	label_05d10130: ;
				throw new IndexOutOfRangeException();
			}
		}
	label_05d1012b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D7A")]
	[Address(RVA = "0x5C10160", Offset = "0x5C0F160", VA = "0x5C10160")]
	[IteratorStateMachine(typeof(_003CShowTemporaryTooltip_003Ed__73))]
	private IEnumerator ShowTemporaryTooltip(TextMeshProUGUI tooltip, string message, float duration)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$ShowTemporaryTooltip): clean
		ChatPanel.d__73<ShowTemporaryTooltip> __this_00;

		__this_00 = new ChatPanel.d__73<ShowTemporaryTooltip>();
		__this_00.__1__state = 0;
		__this_00.tooltip = tooltip;
		__this_00.message = message;
		__this_00.duration = duration;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004D7B")]
	[Address(RVA = "0x5C10210", Offset = "0x5C0F210", VA = "0x5C10210")]
	private void ChangeEmojiPage(int delta, TextMeshProUGUI tooltipText)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$ChangeEmojiPage): clean
		int iVar1;
		int iVar2;

		iVar2 = delta + this._emojiPage;
		iVar1 = 8;
		if (iVar2 < 8) {
			iVar1 = iVar2;
		}
		iVar2 = 0;
		if (0 < iVar1) {
			iVar2 = iVar1;
		}
		this._emojiPage = iVar2;
		this.AddEmojiButtons(tooltipText);
		return;
	}

	[Token(Token = "0x6004D7C")]
	[Address(RVA = "0x5C0F600", Offset = "0x5C0E600", VA = "0x5C0F600")]
	private void SetPanelMode(EmojiPanelMode mode)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$SetPanelMode): 1 lines keep C-only constructs
		Button pUVar1;
		GameObject __this_00;
		bool bVar2;
		TextMeshProUGUI pTVar3;
		Transform pUVar4;
		ulong uVar5;
		Color UVar6;
		Color UVar7;

		if (Il2CppMethodInitialized_07547d46 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI) ;
			Il2CppMethodInitialized_07547d46 = true;
		}
		this._panelMode = mode;
		pUVar1 = this._emojiModeButton;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._emojiModeButton;
			if (pUVar1 == null) goto label_05d0f7d1;
			pTVar3 = pUVar1.GetComponent<TextMeshProUGUI>();
			if (pTVar3 == null) goto label_05d0f7d1;
			uVar5 = 0x3f8000003f800000;
			if (mode != 0) {
				uVar5 = 0x3f19999a3f800000;
			}
			UVar6.b = (float)(int)uVar5;
			UVar6.a = (float)(int)((ulong)uVar5 >> 0x20);
			UVar6.r = 1.0;
			UVar6.g = 1.0;
			pTVar3.set_color(UVar6);
		}
		pUVar1 = this._stickerModeButton;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._stickerModeButton;
			if (pUVar1 == null) goto label_05d0f7d1;
			pTVar3 = pUVar1.GetComponent<TextMeshProUGUI>();
			if (pTVar3 == null) goto label_05d0f7d1;
			uVar5 = 0x3f8000003f800000;
			if (mode != 1) {
				uVar5 = 0x3f19999a3f800000;
			}
			UVar7.b = (float)(int)uVar5;
			UVar7.a = (float)(int)((ulong)uVar5 >> 0x20);
			UVar7.r = 1.0;
			UVar7.g = 1.0;
			pTVar3.set_color(UVar7);
		}
		if (mode == 0) {
			this._stickerInserted = false;
			this._stickerTag = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		__this_00 = this._emojiPanel;
		if (__this_00 != null) {
			pUVar4 = __this_00.transform;
			if (pUVar4 != null) {
				pUVar4 = pUVar4.Find("TooltipArea");
				if (pUVar4 != null) {
					pTVar3 = pUVar4.GetComponent<TextMeshProUGUI>();
					this.AddEmojiButtons(pTVar3);
					return;
				}
			}
		}
	label_05d0f7d1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D7D")]
	[Address(RVA = "0x5C10240", Offset = "0x5C0F240", VA = "0x5C10240")]
	private void InsertSticker(int spriteIndex)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$InsertSticker): 1 lines keep C-only constructs
		int value;
		GameObject pUVar1;
		TMP_InputField pTVar2;
		TMP_Text pTVar3;
		bool bVar4;
		Transform pUVar5;
		TextMeshProUGUI x;
		String pSVar6;
		object pIVar7;
		ChatPanel.d__73<ShowTemporaryTooltip> __this_00;
		Coroutine pUVar8;
		float fVar9;
		float fVar10;
		int local_30;
		float local_2c;

		if (Il2CppMethodInitialized_07547d47 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI) ;
			Il2CppMethodInitialized_07547d47 = true;
		}
		fVar9 = Time.unscaledTime;
		if (15.0 <= fVar9 - this._lastStickerSentTime) {
			local_30 = spriteIndex;
			pIVar7 = (object)local_30;
			pSVar6 = String.Format(":s{0}{1}:", (Il2CppObject *)"\xe2\x80\x8b\xe2\x80\x8b", pIVar7);
			this._stickerInserted = true;
			this._stickerTag = pSVar6;
			pTVar2 = this._inputField;
			bVar4 = ((Object)pTVar2 != null);
			if (bVar4) {
				pTVar2 = this._inputField;
				if (pTVar2 == null) goto label_05d10685;
				pTVar2.text = pSVar6;
				if ((pSVar6 == null) ||(pTVar2 = this._inputField, pTVar2 == null)) goto label_05d10685;
				value = pSVar6._stringLength;
				pTVar2.caretPosition = value;
				pTVar2 = this._inputField;
				if (pTVar2 == null) goto label_05d10685;
				pTVar2.selectionAnchorPosition = value;
				pTVar2 = this._inputField;
				if (pTVar2 == null) goto label_05d10685;
				pTVar2.selectionFocusPosition = value;
				pTVar2 = this._inputField;
				if ((pTVar2 == null) ||(pTVar3 = pTVar2.m_TextComponent, pTVar3 == null)) goto label_05d10685;
				pTVar3.ForceMeshUpdate(false, false);
				pTVar2 = this._inputField;
				if (pTVar2 == null) goto label_05d10685;
				pTVar2.ForceLabelUpdate();
				Canvas.ForceUpdateCanvases();
			}
			this.SubmitProcessedInput();
			fVar9 = Time.unscaledTime;
			this._lastStickerSentTime = fVar9;
			if (this._emojiPanelActive != false) {
				this._emojiPanelActive = false;
				pUVar1 = this._emojiPanel;
				if (pUVar1 == null) goto label_05d10685;
				pUVar1.SetActive(false);
			}
			pTVar2 = this._inputField;
			if (pTVar2 == null) {
	label_05d10685: ;
				throw new NullReferenceException();
			}
			pTVar2.DeactivateInputField(false);
		}
		else {
			x = null;
			fVar10 = Time.unscaledTime;
			fVar9 = this._lastStickerSentTime;
			pUVar1 = this._emojiPanel;
			if (pUVar1 != null) {
				pUVar5 = pUVar1.transform;
				if (pUVar5 == null) goto label_05d10685;
				x = null;
				pUVar5 = pUVar5.Find("TooltipArea");
				if (pUVar5 != null) {
					x = pUVar5.GetComponent<TextMeshProUGUI>();
				}
			}
			bVar4 = ((Object)x != null);
			if (bVar4) {
				pUVar8 = this._tooltipCoroutine;
				if (pUVar8 != null) {
					this.StopCoroutine(pUVar8);
				}
				pSVar6 = UIManager.GetLocale("InGame", "Chat", "StickerCooldown", "", "");
				local_2c = ceilf((fVar9 - fVar10) + 15.0);
				pIVar7 = (object)local_2c;
				pSVar6 = String.Format(pSVar6, pIVar7);
				__this_00 = new ChatPanel.d__73<ShowTemporaryTooltip>();
				__this_00.__1__state = 0;
				__this_00.tooltip = x;
				__this_00.message = pSVar6;
				__this_00.duration = 1.5;
				pUVar8 = this.StartCoroutine((IEnumerator)__this_00);
				this._tooltipCoroutine = pUVar8;
			}
		}
		return;
	}

	[Token(Token = "0x6004D7E")]
	[Address(RVA = "0x5C10900", Offset = "0x5C0F900", VA = "0x5C10900")]
	private void InsertEmoji(int spriteIndex)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$InsertEmoji): 4 lines keep C-only constructs
		TMP_InputField pTVar1;
		int startIndex;
		ulong in_RAX;
		object arg0;
		String value;
		String pSVar2;
		int iVar3;
		ulong uStack_28;

		uStack_28 = in_RAX;
		pTVar1 = this._inputField;
		if (pTVar1 != null) {
			pTVar1.ActivateInputField();
			pTVar1 = this._inputField;
			if (pTVar1 != null) {
				pTVar1.Select();
				pTVar1 = this._inputField;
				if (pTVar1 != null) {
					pSVar2 = pTVar1.m_Text;
					uStack_28 = CONCAT44(spriteIndex, (undefined4)uStack_28);
					arg0 = (object)(((long)&uStack_28 + 4));
					value = String.Format(":{0}:", arg0);
					pTVar1 = this._inputField;
					if ((pTVar1 != null) &&(startIndex = pTVar1.caretPosition, pSVar2 != null)) {
						pSVar2 = pSVar2.Insert(startIndex, value);
						pTVar1 = this._inputField;
						if ((pTVar1 != null) && (pSVar2 != null)) {
							iVar3 = pTVar1.m_CharacterLimit;
							if ((0 < iVar3) && (iVar3 < pSVar2._stringLength)) {
								return;
							}
							pTVar1.text = pSVar2;
							if ((value != null) &&(pTVar1 = this._inputField, pTVar1 != null)) {
								iVar3 = startIndex + value._stringLength;
								pTVar1.caretPosition = iVar3;
								pTVar1 = this._inputField;
								if (pTVar1 != null) {
									pTVar1.selectionAnchorPosition = iVar3;
									pTVar1 = this._inputField;
									if (pTVar1 != null) {
										pTVar1.selectionFocusPosition = iVar3;
										pTVar1 = this._inputField;
										if (pTVar1 != null) {
											pTVar1.ActivateInputField();
											return;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D7F")]
	[Address(RVA = "0x5C0C820", Offset = "0x5C0B820", VA = "0x5C0C820")]
	public void Sync()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$Sync): clean
		this.RefreshPoolSize();
		this.ValidatePMState();
		this.RestorePMPartners();
		this.RefreshDisplayedMessages();
		return;
	}

	[Token(Token = "0x6004D80")]
	[Address(RVA = "0x5C11650", Offset = "0x5C10650", VA = "0x5C11650")]
	private void RefreshDisplayedMessages()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$RefreshDisplayedMessages): 25 lines keep C-only constructs
		int piVar1;
		String* ppSVar2;
		ChatManager.ChatDisplayLine pGVar3;
		int iVar4;
		uint uVar5;
		uint uVar6;
		List<ChatManager.ChatDisplayLine> pSVar7;
		ChatManager.ChatDisplayLine[] pGVar8;
		bool bVar9;
		ChatManager.ChatDisplayLine item;
		ChatManager.ChatDisplayLine item_00;
		ChatManager.ChatDisplayLine pGVar10;
		bool bVar11;
		String pSVar12;
		String str1;
		DateTime timestamp;
		GameManagers_ChatManager_StaticFields pGVar13;
		MethodInfo pMVar14;
		uint uVar15;
		ChatManager.ChatDisplayLine local_70;

		pSVar7 = this._visibleMessages;
		if (pSVar7 != null) {
			piVar1 = &pSVar7._version;
			*piVar1 = *piVar1 + 1;
			iVar4 = pSVar7._size;
			pSVar7._size = 0;
			if (0 < iVar4) {
				Array.Clear((Array)pSVar7._items, 0, iVar4);
			}
			pSVar7 = this._suggestionLines;
			if (pSVar7 != null) {
				piVar1 = &pSVar7._version;
				*piVar1 = *piVar1 + 1;
				iVar4 = pSVar7._size;
				pSVar7._size = 0;
				if (0 < iVar4) {
					Array.Clear((Array)pSVar7._items, 0, iVar4);
				}
				bVar9 = true;
				if ((this._inPMMode != false) &&(this._currentPMTarget != null)) {
					pSVar7 = this._visibleMessages;
					pSVar12 = UIManager.GetLocale("InGame", "Chat", "PrivateChatWith", "", "");
					pSVar12 = ChatManager.GetColorString(pSVar12, 3, false);
					str1 = ChatManager.GetPlayerIdentifier(this._currentPMTarget);
					pSVar12 = String.Concat(pSVar12, str1);
					timestamp = DateTime.Now;
					pSVar12 = ChatManager.GetFormattedMessage(pSVar12, timestamp, true);
					local_70 = ChatManager.ChatDisplayLine.Plain(pSVar12, 0);
					pMVar14 = MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_Add;
					if (pSVar7 == null) goto label_05d11b9c;
					piVar1 = &pSVar7._version;
					*piVar1 = *piVar1 + 1;
					pGVar8 = pSVar7._items;
					if (pGVar8 == null) goto label_05d11b9c;
					uVar15 = pSVar7._size;
					if (uVar15 < (uint)pGVar8.Length) {
						pSVar7._size = uVar15 + 1;
						pGVar10 = &pGVar8[(int)uVar15];
						pGVar10.SenderID = local_70.SenderID;
						*(uint)&pGVar10.field_0x34 = local_70._52_4_;
						pGVar10.LineID = local_70.LineID;
						ppSVar2 = &pGVar8[(int)uVar15].SenderName;
						*ppSVar2 = local_70.SenderName;
						ppSVar2[1] = local_70.BodyText;
						ppSVar2 = &pGVar8[(int)uVar15].TimeText;
						*ppSVar2 = local_70.TimeText;
						ppSVar2[1] = local_70.IdText;
						pGVar3 = pGVar8.m_Items + (int)uVar15;
						pGVar3.PlainText = local_70.PlainText;
						pGVar3.UsePlayerStyle = local_70.UsePlayerStyle;
						*(undefined7)&pGVar3.field_0x9 = local_70._9_7_;
					}
					else {
						item.UsePlayerStyle = local_70.UsePlayerStyle;
						item._9_7_ = local_70._9_7_;
						item.PlainText = local_70.PlainText;
						item.TimeText = local_70.TimeText;
						item.IdText = local_70.IdText;
						item.SenderName = local_70.SenderName;
						item.BodyText = local_70.BodyText;
						item.SenderID = local_70.SenderID;
						item._52_4_ = local_70._52_4_;
						item.LineID = local_70.LineID;
						pSVar7.AddWithResize(item);
					}
					bVar9 = false;
				}
				uVar15 = 0;
				while(true) {
					pGVar13 = typeof(ChatManager).static_fields;
					if (pGVar13.RawMessages == null) goto label_05d11b9c;
					if (pGVar13.RawMessages._size <= (int)uVar15) break;
					if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
						pGVar13 = typeof(ChatManager).static_fields;
					}
					if (pGVar13.SuggestionFlags == null) goto label_05d11b9c;
					pMVar14 = (MethodInfo)(ulong)uVar15;
					bVar11 = (pGVar13.SuggestionFlags).get_Item(uVar15);
					if (bVar11) {
						pSVar7 = this._suggestionLines;
						uVar5 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
	joined_r0x05d11b55: ;
						if (uVar5 == 0) {
						}
						local_70 = ChatManager.GetDisplayLine(uVar15);
						pMVar14 = MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_Add;
						if (pSVar7 == null) goto label_05d11b9c;
						piVar1 = &pSVar7._version;
						*piVar1 = *piVar1 + 1;
						pGVar8 = pSVar7._items;
						if (pGVar8 == null) goto label_05d11b9c;
						uVar6 = pSVar7._size;
						if (uVar6 < (uint)pGVar8.Length) {
							pSVar7._size = uVar6 + 1;
							pGVar10 = &pGVar8[(int)uVar6];
							pGVar10.SenderID = local_70.SenderID;
							*(uint)&pGVar10.field_0x34 = local_70._52_4_;
							pGVar10.LineID = local_70.LineID;
							ppSVar2 = &pGVar8[(int)uVar6].SenderName;
							*ppSVar2 = local_70.SenderName;
							ppSVar2[1] = local_70.BodyText;
							ppSVar2 = &pGVar8[(int)uVar6].TimeText;
							*ppSVar2 = local_70.TimeText;
							ppSVar2[1] = local_70.IdText;
							pGVar3 = pGVar8.m_Items + (int)uVar6;
							pGVar3.PlainText = local_70.PlainText;
							pGVar3.UsePlayerStyle = local_70.UsePlayerStyle;
							*(undefined7)&pGVar3.field_0x9 = local_70._9_7_;
						}
						else {
							item_00.UsePlayerStyle = local_70.UsePlayerStyle;
							item_00._9_7_ = local_70._9_7_;
							item_00.PlainText = local_70.PlainText;
							item_00.TimeText = local_70.TimeText;
							item_00.IdText = local_70.IdText;
							item_00.SenderName = local_70.SenderName;
							item_00.BodyText = local_70.BodyText;
							item_00.SenderID = local_70.SenderID;
							item_00._52_4_ = local_70._52_4_;
							item_00.LineID = local_70.LineID;
							pSVar7.AddWithResize(item_00);
						}
					}
					else if (bVar9) {
						bVar11 = ChatPanel.IsPublicLine(uVar15);
						if (bVar11) {
	label_05d11b43: ;
							pSVar7 = this._visibleMessages;
							uVar5 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
							goto joined_r0x05d11b55;
						}
					}
					else {
						bVar11 = this.IsPMWithCurrentTarget(uVar15);
						if (bVar11) goto label_05d11b43;
					}
					uVar15 = uVar15 + 1;
				}
				pSVar7 = this._visibleMessages;
				if (pSVar7 != null) {
					pMVar14 = (MethodInfo)this._suggestionLines;
					pSVar7.AddRange((IEnumerable<T>)pMVar14);
					this.UpdateVisibleMessages();
					return;
				}
			}
		}
	label_05d11b9c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D81")]
	[Address(RVA = "0x5C11CC0", Offset = "0x5C10CC0", VA = "0x5C11CC0")]
	private bool IsPMWithCurrentTarget(int index)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$IsPMWithCurrentTarget): clean
		uint uVar1;
		List<bool> __this_00;
		List<int> pSVar2;
		Player pPVar3;
		bool bVar4;
		int iVar5;

		if (Il2CppMethodInitialized_07547d4a == false) {
			Il2CppMethodInitialized_07547d4a = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = ChatManager.PrivateFlags;
		}
		else {
			__this_00 = *(List<bool>*)((long)(typeof(ChatManager)).static_fields + 0xb8);
		}
		if (__this_00 != null) {
			bVar4 = __this_00.get_Item(index);
			if (!bVar4) {
				return false;
			}
			pSVar2 = ChatManager.PMPartnerIDs;
			if (pSVar2 != null) {
				iVar5 = pSVar2.get_Item(index);
				pPVar3 = this._currentPMTarget;
				if (pPVar3 != null) {
					if (iVar5 == pPVar3.actorNumber) {
						return true;
					}
					pSVar2 = ChatManager.SenderIDs;
					if (pSVar2 != null) {
						iVar5 = pSVar2.get_Item(index);
						pPVar3 = this._currentPMTarget;
						if (pPVar3 != null) {
							return iVar5 == pPVar3.actorNumber;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D82")]
	[Address(RVA = "0x5C11BB0", Offset = "0x5C10BB0", VA = "0x5C11BB0")]
	private static bool IsPublicLine(int index)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$IsPublicLine): clean
		uint uVar1;
		List<bool> pSVar2;
		bool bVar3;

		if (Il2CppMethodInitialized_07547d4b == false) {
			Il2CppMethodInitialized_07547d4b = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = ChatManager.NotificationFlags;
		}
		else {
			pSVar2 = *(List<bool>*)((long)(typeof(ChatManager)).static_fields + 0x58);
		}
		if (pSVar2 != null) {
			bVar3 = pSVar2.get_Item(index);
			if (bVar3) {
				return true;
			}
			pSVar2 = ChatManager.PrivateFlags;
			if (pSVar2 != null) {
				bVar3 = pSVar2.get_Item(index);
				if (!bVar3) {
					return true;
				}
				pSVar2 = ChatManager.SystemFlags;
				if (pSVar2 != null) {
					bVar3 = pSVar2.get_Item(index);
					return bVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D83")]
	[Address(RVA = "0x5C11E20", Offset = "0x5C10E20", VA = "0x5C11E20")]
	private void UpdateVisibleMessages()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$UpdateVisibleMessages): 13 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		Scrollbar pUVar3;
		GameObject pUVar4;
		Image pUVar5;
		ChatManager.ChatDisplayLine firstLine;
		ChatManager.ChatDisplayLine line;
		int index;
		bool bVar6;
		int iVar7;
		ChatPanel.ChatLineView __this_00;
		ChatScrollRect pUVar8;
		int iVar9;
		MethodInfo pMVar10;
		List<ChatPanel.ChatLineView> pSVar11;
		float fVar12;
		Color UVar13;
		float local_9c;
		byte[] local_88 = new byte[8];
		String local_78;
		byte[] local_70 = new byte[16];
		String local_60;
		String pSStack_58;
		String local_50;
		String pSStack_48;
		int local_40;
		uint uStack_3c;
		long iStack_38;

		local_88 = (byte[])0x0;
		local_78 = null;
		pSVar11 = this._linesPool;
		if ((pSVar11 == null) ||(pMVar10 = (MethodInfo)this._visibleMessages, pMVar10 == null)) goto label_05d1245d;
		iVar7 = *(int)&pMVar10.name;
		if (iVar7 == 0) {
			local_70.GetEnumerator((List<object>)pSVar11);
			local_78 = local_60;
			local_88 = (byte[])local_70._0_8_;
			local_70._0_8_ = null;
			local_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_88;
			while (bVar6 = local_88.MoveNext()) {
				if (local_78 == null) {
					throw new NullReferenceException();
				}
				if ((*(ulong)((sbyte)local_78 + 0xc0)) == null) {
					throw new NullReferenceException();
				}
				((*(ulong)((sbyte)local_78 + 0xc0))).SetActive(false) ;
			}
			local_88.Dispose();
			pUVar8 = this._scrollRect;
			pMVar10 = null;
			bVar6 = ((bool)(Object)pUVar8);
			if (bVar6) {
				pUVar8 = this._scrollRect;
				if (pUVar8 == null) goto label_05d1245d;
				pUVar3 = pUVar8.m_VerticalScrollbar;
				pMVar10 = null;
				bVar6 = ((bool)(Object)pUVar3);
				if (bVar6) {
					pUVar8 = this._scrollRect;
					if ((pUVar8 == null) ||(pUVar3 = pUVar8.m_VerticalScrollbar, pUVar3 == null)) goto label_05d1245d;
					pMVar10 = null;
					pUVar3.size = 1.0;
				}
			}
			this.LayoutVisibleRows();
			pUVar5 = this._panelImage;
			bVar6 = ((Object)pUVar5 == null);
			if (!bVar6) {
				pUVar5 = this._panelImage;
				if (pUVar5 == null) goto label_05d1245d;
				UVar13 = pUVar5.get_color();
				if (9.9999994e-11 <= UVar13.a * UVar13.a + UVar13.g * UVar13.g + UVar13.r * UVar13.r + UVar13.b * UVar13.b) {
					pUVar5 = this._panelImage;
					if (pUVar5 == null) goto label_05d1245d;
					pUVar5.set_color((Color)ZEXT816(0));
				}
			}
			return;
		}
		iVar1 = pSVar11._size;
		pUVar8 = this._scrollRect;
		if (pUVar8 == null) {
			local_9c = 0.0;
			pUVar8 = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			local_9c = pUVar8.verticalNormalizedPosition;
			iVar7 = *(int)&pMVar10.name;
			pUVar8 = this._scrollRect;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar6 = ((bool)(Object)pUVar8);
		if (bVar6) {
			pUVar8 = this._scrollRect;
			if (pUVar8 == null) goto label_05d1245d;
			pUVar3 = pUVar8.m_VerticalScrollbar;
			bVar6 = ((bool)(Object)pUVar3);
			if (bVar6) {
				pUVar8 = this._scrollRect;
				if ((pUVar8 == null) ||(pUVar3 = pUVar8.m_VerticalScrollbar, pUVar3 == null)) goto label_05d1245d;
				fVar12 = 1.0;
				if ((float)iVar1 / (float)iVar7 <= 1.0) {
					fVar12 = (float)iVar1 / (float)iVar7;
				}
				pUVar3.size = fVar12;
			}
		}
		iVar9 = iVar7 - iVar1;
		index = 0;
		if ((iVar9 != 0 && iVar1 <= iVar7) && (index = iVar9, 0.0 < local_9c)) {
			fVar12 = floorf((1.0 - local_9c) * (float)iVar9);
			iVar7 = (int)fVar12;
			if (iVar7 < iVar9) {
				iVar9 = iVar7;
			}
			index = 0;
			if (-1 < iVar7) {
				index = iVar9;
			}
		}
		if (0 < iVar1) {
			local_70.get_Item((List<ChatManager.ChatDisplayLine>)pMVar10, index);
			firstLine._8_8_ = local_70._8_8_;
			firstLine.PlainText = (String)local_70._0_8_;
			firstLine.TimeText = local_60;
			firstLine.IdText = pSStack_58;
			firstLine.SenderName = local_50;
			firstLine.BodyText = pSStack_48;
			firstLine.SenderID = local_40;
			firstLine._52_4_ = uStack_3c;
			firstLine.LineID = iStack_38;
			this.AlignPoolTo(firstLine);
		}
		pSVar11 = this._linesPool;
		if (pSVar11 != null) {
			iVar7 = 0;
			do {
				if (pSVar11._size <= iVar7) {
					this.LayoutVisibleRows();
					this.UpdateBackgroundVisibility(true);
					return;
				}
				__this_00 = (ChatPanel.ChatLineView)pSVar11.get_Item(iVar7);
				if (index + iVar7 < *(int)&pMVar10.name) {
					if ((__this_00 == null) ||(pUVar4 = __this_00._gameObject_k__BackingField, pUVar4 == null)) break;
					bVar6 = pUVar4.activeSelf;
					if (!bVar6) {
						pUVar4 = __this_00._gameObject_k__BackingField;
						if (pUVar4 == null) break;
						pUVar4.SetActive(true);
					}
					local_70.get_Item((List<ChatManager.ChatDisplayLine>)pMVar10, index + iVar7);
					line._8_8_ = local_70._8_8_;
					line.PlainText = (String)local_70._0_8_;
					line.TimeText = local_60;
					line.IdText = pSStack_58;
					line.SenderName = local_50;
					line.BodyText = pSStack_48;
					line.SenderID = local_40;
					line._52_4_ = uStack_3c;
					line.LineID = iStack_38;
					__this_00.SetLine(line);
				}
				else {
					if ((__this_00 == null) ||(pUVar4 = __this_00._gameObject_k__BackingField, pUVar4 == null)) break;
					bVar6 = pUVar4.activeSelf;
					if (bVar6) {
						pUVar4 = __this_00._gameObject_k__BackingField;
						if (pUVar4 == null) break;
						pUVar4.SetActive(false);
					}
				}
				iVar7 = iVar7 + 1;
				pSVar11 = this._linesPool;
			} while (pSVar11 != null);
		}
	label_05d1245d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D84")]
	[Address(RVA = "0x5C12A80", Offset = "0x5C11A80", VA = "0x5C12A80")]
	private void AlignPoolTo(ChatManager.ChatDisplayLine firstLine)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$AlignPoolTo): 5 lines keep C-only constructs
		int iVar1;
		Il2CppClass a;
		String a_00;
		Il2CppClass a_01;
		String a_02;
		bool bVar2;
		object pIVar3;
		int index;
		List<ChatPanel.ChatLineView> __this_00;

		__this_00 = this._linesPool;
		if (__this_00 != null) {
			index = 0;
			do {
				if (__this_00._size <= index) {
					return;
				}
				pIVar3 = __this_00.get_Item(index);
				if (pIVar3 == null) break;
				if (((*(sbyte)&pIVar3[9].klass != false) && (pIVar3[8].monitor == (IntPtr)firstLine.LineID)) &&(((*(byte)&pIVar3[5].monitor ^ firstLine.UsePlayerStyle) & 1) == 0)) {
					a = pIVar3[6].klass;
					a_00 = pIVar3[6].monitor;
					a_01 = pIVar3[7].klass;
					a_02 = pIVar3[7].monitor;
					iVar1 = *(int)&pIVar3[8].klass;
					bVar2 = ((String)pIVar3[5].klass == firstLine.PlainText);
					if ((((bVar2) &&(bVar2 = ((String)a == firstLine.TimeText))) &&((bVar2 = (a_00 == firstLine.IdText), bVar2 &&((bVar2 = ((String)a_01 == firstLine.SenderName), bVar2 && (bVar2 = (a_02 == firstLine.BodyText))))))) && (iVar1 == firstLine.SenderID)) {
						if (index < 1) {
							return;
						}
						this.RotatePool(index);
						return;
					}
				}
				index = index + 1;
				__this_00 = this._linesPool;
			} while (__this_00 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D85")]
	[Address(RVA = "0x5C132F0", Offset = "0x5C122F0", VA = "0x5C132F0")]
	private void RotatePool(int offset)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$RotatePool): 6 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		List<ChatPanel.ChatLineView> pSVar4;
		List<ChatPanel.ChatLineView> __this_00;
		ChatPanel.ChatLineView[] pUVar5;
		ChatPanel.ChatLineView item;
		int index;

		pSVar4 = this._poolRotationBuffer;
		if (pSVar4 != null) {
			piVar1 = &pSVar4._version;
			*piVar1 = *piVar1 + 1;
			iVar2 = pSVar4._size;
			pSVar4._size = 0;
			if (0 < iVar2) {
				Array.Clear((Array)pSVar4._items, 0, iVar2);
			}
			if (0 < offset) {
				index = 0;
				do {
					while(true) {
						pSVar4 = this._linesPool;
						if (pSVar4 == null) goto label_05d134b4;
						__this_00 = this._poolRotationBuffer;
						item = (ChatPanel.ChatLineView)pSVar4.get_Item(index);
						if (__this_00 == null) goto label_05d134b4;
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pUVar5 = __this_00._items;
						if (pUVar5 == null) goto label_05d134b4;
						uVar3 = __this_00._size;
						if ((uint)pUVar5.Length <= uVar3) break;
						__this_00._size = uVar3 + 1;
						pUVar5[(int)uVar3] = item;
						index = index + 1;
						if (offset == index) goto label_05d1342b;
					}
					__this_00.AddWithResize((object)item);
					index = index + 1;
				} while (offset != index);
			}
	label_05d1342b: ;
			pSVar4 = this._linesPool;
			if (pSVar4 != null) {
				pSVar4.RemoveRange(0, offset);
				pSVar4 = this._linesPool;
				if (pSVar4 != null) {
					pSVar4.AddRange((IEnumerable<T>)this._poolRotationBuffer);
					pSVar4 = this._poolRotationBuffer;
					if (pSVar4 != null) {
						piVar1 = &pSVar4._version;
						*piVar1 = *piVar1 + 1;
						iVar2 = pSVar4._size;
						pSVar4._size = 0;
						if (iVar2 < 1) {
							return;
						}
						Array.Clear((Array)pSVar4._items, 0, iVar2);
						return;
					}
				}
			}
		}
	label_05d134b4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D86")]
	[Address(RVA = "0x5C0B310", Offset = "0x5C0A310", VA = "0x5C0B310")]
	private void ConfigureManualLineLayout()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$ConfigureManualLineLayout): clean
		GameObject pUVar1;
		bool bVar2;
		VerticalLayoutGroup x;
		ContentSizeFitter x_00;

		pUVar1 = this._panel;
		if (pUVar1 != null) {
			x = pUVar1.GetComponent<VerticalLayoutGroup>();
			bVar2 = ((Object)x != null);
			if (bVar2) {
				if (x == null) goto label_05d0b3fc;
				x.enabled = false;
			}
			pUVar1 = this._panel;
			if (pUVar1 != null) {
				x_00 = pUVar1.GetComponent<ContentSizeFitter>();
				bVar2 = ((Object)x_00 != null);
				if (!bVar2) {
					return;
				}
				if (x_00 != null) {
					x_00.enabled = false;
					return;
				}
			}
		}
	label_05d0b3fc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D87")]
	[Address(RVA = "0x5C124E0", Offset = "0x5C114E0", VA = "0x5C124E0")]
	private void LayoutVisibleRows()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$LayoutVisibleRows): 21 lines keep C-only constructs
		List<ChatPanel.ChatLineView> pSVar1;
		RectTransform pUVar2;
		object pIVar3;
		bool bVar4;
		Vector2 UVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		Rect UVar10;
		float local_98;
		byte[] local_80 = new byte[16];
		object local_70;
		byte[] local_68 = new byte[8];
		object local_58;
		byte[] local_48 = new byte[8];

		local_68 = (byte[])0x0;
		local_58 = null;
		pSVar1 = this._linesPool;
		if (pSVar1 != null) {
			local_80.GetEnumerator((List<object>)pSVar1);
			local_58 = local_70;
			local_68 = (byte[])local_80._0_8_;
			local_80._0_8_ = null;
			local_98 = 10.0;
			local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
			while (true) {
				bVar4 = local_68.MoveNext();
				pIVar3 = local_58;
				if (!(bVar4)) break;
				if (local_58 == null) {
					throw new NullReferenceException();
				}
				if (local_58[0xc].klass == null) {
					throw new NullReferenceException();
				}
				bVar4 = local_58[0xc].klass.activeSelf;
				if (bVar4) {
					local_98 = local_98 + *(float)((long)&pIVar3[0xb].monitor + 4);
				}
			}
			local_68.Dispose();
			pUVar2 = this._chatPanelRect;
			if (pUVar2 != null) {
				UVar10 = pUVar2.rect;
				fVar8 = UVar10.m_Height;
				if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
					local_48 = (byte[])UVar10._8_8_;
					fVar8 = (float)local_48._4_4_;
				}
				if (Il2CppMethodInitialized_0753e7b4 == false) {
					local_48._4_4_ = fVar8;
					local_48._0_4_ = fVar8;
					Il2CppMethodInitialized_0753e7b4 = true;
					fVar8 = (float)local_48._0_4_;
				}
				fVar6 = ABS(fVar8);
				if (ABS(fVar8) <= ABS(local_98)) {
					fVar6 = ABS(local_98);
				}
				fVar9 = Mathf.Epsilon * 8.0;
				fVar7 = fVar6 * 1e-06;
				if (fVar6 * 1e-06 <= fVar9) {
					fVar7 = fVar9;
				}
				if (fVar7 <= ABS(local_98 - fVar8)) {
					pUVar2 = this._chatPanelRect;
					if (pUVar2 == null) goto label_05d12844;
					pUVar2.SetSizeWithCurrentAnchors(1, local_98);
				}
				pSVar1 = this._linesPool;
				if (pSVar1 != null) {
					local_80.GetEnumerator((List<object>)pSVar1);
					local_58 = local_70;
					local_68 = (byte[])local_80._0_8_;
					local_80._0_8_ = null;
					local_98 = 0.0;
					local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
					while(true) {
						bVar4 = local_68.MoveNext();
						pIVar3 = local_58;
						if (!bVar4) {
							local_68.Dispose();
							return;
						}
						if (local_58 == null) break;
						if (local_58[0xc].klass == null) {
							throw new NullReferenceException();
						}
						bVar4 = local_58[0xc].klass.activeSelf;
						if (bVar4) {
							if (pIVar3[2].klass == null) {
								throw new NullReferenceException();
							}
							UVar5 = pIVar3[2].klass.anchoredPosition;
							fVar8 = UVar5.y + local_98;
							if (9.9999994e-11 <= fVar8 * fVar8 + UVar5.x * UVar5.x) {
								if (pIVar3[2].klass == null) {
									throw new NullReferenceException();
								}
								pIVar3[2].klass.anchoredPosition = (Vector2)((ulong)((uint)local_98 ^ (uint)g_data_01004fa0) << 0x20);
							}
							local_98 = local_98 + *(float)((long)&pIVar3[0xb].monitor + 4);
						}
					}
					throw new NullReferenceException();
				}
			}
		}
	label_05d12844: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D88")]
	[Address(RVA = "0x5C12920", Offset = "0x5C11920", VA = "0x5C12920")]
	private void UpdateBackgroundVisibility(bool hasMessages)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$UpdateBackgroundVisibility): clean
		Image pUVar1;
		UISettings pSVar2;
		ColorSetting pSVar3;
		Color255 __this_00;
		bool bVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		Color UVar9;
		Color UVar10;

		pUVar1 = this._panelImage;
		bVar4 = ((Object)pUVar1 == null);
		if (bVar4) {
			return;
		}
		fVar5 = 0.0;
		fVar6 = 0.0;
		fVar7 = 0.0;
		fVar8 = 0.0;
		if (hasMessages) {
			pSVar2 = SettingsManager.UISettings;
			if (((pSVar2 == null) ||(pSVar3 = pSVar2.ChatBackgroundColor, pSVar3 == null)) ||(__this_00 = pSVar3._value, __this_00 == null)) goto label_05d12a75;
			UVar9 = __this_00.ToColor();
			fVar7 = UVar9.b;
			fVar8 = UVar9.a;
			fVar5 = UVar9.r;
			fVar6 = UVar9.g;
		}
		pUVar1 = this._panelImage;
		if (pUVar1 != null) {
			UVar9 = pUVar1.get_color();
			UVar10.g = fVar6;
			UVar10.r = fVar5;
			fVar5 = UVar9.r - fVar5;
			fVar6 = UVar9.g - fVar6;
			UVar10.a = fVar8;
			UVar10.b = fVar7;
			fVar7 = UVar9.b - fVar7;
			fVar8 = UVar9.a - fVar8;
			if (fVar8 * fVar8 + fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7 < 9.9999994e-11) {
				return;
			}
			pUVar1 = this._panelImage;
			if (pUVar1 != null) {
				pUVar1.set_color(UVar10);
				return;
			}
		}
	label_05d12a75: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D89")]
	[Address(RVA = "0x5C0D560", Offset = "0x5C0C560", VA = "0x5C0D560")]
	public void Activate()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$Activate): clean
		int iVar1;
		TMP_InputField pTVar2;
		String pSVar3;
		bool bVar4;
		int value;

		if (this._isDestroyed == false) {
			pTVar2 = this._inputField;
			bVar4 = ((Object)pTVar2 == null);
			if (!bVar4) {
				if (this._chatHidden != false) {
					this.SetChatHiddenState(false, true);
				}
				pTVar2 = this._inputField;
				if (pTVar2 != null) {
					pTVar2.Select();
					pTVar2 = this._inputField;
					if (pTVar2 != null) {
						pTVar2.ActivateInputField();
						this.UpdatePlaceholderVisibility(true);
						if (0 < this._desiredCaretPosition) {
							pTVar2 = this._inputField;
							if (pTVar2 == null) goto label_05d0d718;
							bVar4 = String.IsNullOrEmpty(pTVar2.m_Text);
							if (!bVar4) {
								pTVar2 = this._inputField;
								if ((pTVar2 == null) ||(pSVar3 = pTVar2.m_Text, pSVar3 == null)) goto label_05d0d718;
								iVar1 = this._desiredCaretPosition;
								value = pSVar3._stringLength;
								if (iVar1 < value) {
									value = iVar1;
								}
								if (iVar1 < 0) {
									value = 0;
								}
								pTVar2.caretPosition = value;
								pTVar2 = this._inputField;
								if (pTVar2 == null) goto label_05d0d718;
								pTVar2.selectionAnchorPosition = value;
								pTVar2 = this._inputField;
								if (pTVar2 == null) goto label_05d0d718;
								pTVar2.selectionFocusPosition = value;
								this._desiredCaretPosition = 0;
							}
						}
						pTVar2 = this._inputField;
						if (pTVar2 != null) {
							bVar4 = String.IsNullOrEmpty(pTVar2.m_Text);
							if (bVar4) {
								return;
							}
							ChatManager.ForceSuggestionRefresh();
							pTVar2 = this._inputField;
							if (pTVar2 != null) {
								ChatManager.HandleTyping(pTVar2.m_Text);
								return;
							}
						}
					}
				}
	label_05d0d718: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6004D8A")]
	[Address(RVA = "0x5C0D4E0", Offset = "0x5C0C4E0", VA = "0x5C0D4E0")]
	public bool IsInputActive()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$IsInputActive): clean
		TMP_InputField pTVar1;
		bool bVar2;
		bool bVar3;

		if (this._isDestroyed == false) {
			pTVar1 = this._inputField;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._inputField;
				if (pTVar1 == null) {
					throw new NullReferenceException();
				}
				bVar3 = pTVar1.m_AllowInput != false;
			}
		}
		else {
		}
		return bVar3;
	}

	[Token(Token = "0x6004D8B")]
	[Address(RVA = "0x5C13600", Offset = "0x5C12600", VA = "0x5C13600")]
	public void OnEndEdit(string text)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$OnEndEdit): 2 lines keep C-only constructs
		TMP_InputField x;
		Object x_00;
		GameObject __this_00;
		InputSettings pSVar1;
		GeneralInputSettings pSVar2;
		KeybindSetting __this_01;
		bool bVar3;
		RectTransform rect;
		Vector3 UVar4;

		if (this._isDestroyed != false) {
			return;
		}
		x = this._inputField;
		bVar3 = ((Object)x == null);
		if (bVar3) {
			return;
		}
		this.UpdatePlaceholderVisibility(false);
		bVar3 = MobilePlatformUtility.IsMobileRuntime();
		if (bVar3) {
			return;
		}
		bVar3 = Input.GetKey(0xd);
		if (bVar3) {
	label_05d136c1: ;
			this.SubmitProcessedInput();
			return;
		}
		bVar3 = Input.GetKey(0x10f);
		if (bVar3) goto label_05d136c1;
		UVar4 = Input.mousePosition;
		bVar3 = this.IsMouseOverAnyChatElement((Vector2)UVar4._0_8_);
		if (!bVar3) {
			x_00 = (Object)this._emojiPanel;
			bVar3 = (x_00 != null);
			if (bVar3) {
				__this_00 = this._emojiPanel;
				if (__this_00 == null) goto label_05d137cd;
				bVar3 = __this_00.activeSelf;
				if (bVar3) {
					rect = this.GetCachedRectTransform(this._emojiPanel);
					bVar3 = RectTransformUtility.RectangleContainsScreenPoint(rect, (Vector2)UVar4._0_8_);
					if (bVar3) goto label_05d1378b;
				}
			}
			ChatManager.ClearLastSuggestions();
		}
	label_05d1378b: ;
		pSVar1 = SettingsManager.InputSettings;
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.General, pSVar2 != null)) &&(__this_01 = pSVar2.Chat, __this_01 != null)) {
			bVar3 = __this_01.ContainsEnter();
			this.IgnoreNextActivation = bVar3;
			return;
		}
	label_05d137cd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D8C")]
	[Address(RVA = "0x5C13C80", Offset = "0x5C12C80", VA = "0x5C13C80")]
	private void OnSubmit(string text)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$OnSubmit): clean
		TMP_InputField x;
		bool bVar1;

		if (this._isDestroyed == false) {
			x = this._inputField;
			bVar1 = ((Object)x == null);
			if (!bVar1) {
				bVar1 = MobilePlatformUtility.IsMobileRuntime();
				if (bVar1) {
					this.SubmitProcessedInput();
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004D8D")]
	[Address(RVA = "0x5C10690", Offset = "0x5C0F690", VA = "0x5C10690")]
	private void SubmitProcessedInput()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$SubmitProcessedInput): 5 lines keep C-only constructs
		uint uVar1;
		TMP_InputField pTVar2;
		Player pPVar3;
		InputSettings pSVar4;
		GeneralInputSettings pSVar5;
		KeybindSetting __this_00;
		bool bVar6;
		ulong in_RAX;
		String pSVar7;
		object arg0;
		String* __this_01;
		ulong uStack_28;

		__this_01 = (String*)this;
		uStack_28 = in_RAX;
		if (Il2CppMethodInitialized_07547d56 == false) {
			__this_01 = &"";
			Il2CppMethodInitialized_07547d56 = true;
		}
		pTVar2 = this._inputField;
		if (pTVar2 != null) {
			pSVar7 = __this_01.ProcessEmojiCodes(pTVar2.m_Text);
			bVar6 = String.IsNullOrWhiteSpace(pSVar7);
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			if (bVar6) {
				if (uVar1 == 0) {
				}
				ChatManager.ClearLastSuggestions();
				this.IgnoreNextActivation = true;
				pTVar2 = this._inputField;
				if (pTVar2 != null) {
					pTVar2.text = "";
					pTVar2 = this._inputField;
					if (pTVar2 != null) {
						pTVar2.DeactivateInputField(false);
						return;
					}
				}
			}
			else {
				if (uVar1 == 0) {
				}
				ChatManager.ClearLastSuggestions();
				if (pSVar7 != null) {
					bVar6 = pSVar7.StartsWith("/");
					if (((bVar6) || (this._inPMMode == false)) ||(pPVar3 = this._currentPMTarget, pPVar3 == null)) {
						ChatManager.HandleInput(pSVar7);
						pSVar7 = "PUBLIC";
					}
					else {
						ChatManager.SendPrivateMessage(pPVar3, pSVar7);
						pPVar3 = this._currentPMTarget;
						if (pPVar3 == null) goto label_05d108f6;
						uStack_28 = CONCAT44(pPVar3.actorNumber, (undefined4)uStack_28);
						arg0 = (object)(((long)&uStack_28 + 4));
						pSVar7 = String.Format("PM_{0}", arg0);
					}
					ChatManager.ClearConversation(pSVar7);
					pTVar2 = this._inputField;
					if (pTVar2 != null) {
						pTVar2.text = "";
						pTVar2 = this._inputField;
						if (pTVar2 != null) {
							pTVar2.DeactivateInputField(false);
							this.RefreshPoolSize();
							this.ValidatePMState();
							this.RestorePMPartners();
							this.RefreshDisplayedMessages();
							pSVar4 = SettingsManager.InputSettings;
							if (((pSVar4 != null) &&(pSVar5 = pSVar4.General, pSVar5 != null)) &&(__this_00 = pSVar5.Chat, __this_00 != null)) {
								bVar6 = __this_00.ContainsEnter();
								this.IgnoreNextActivation = bVar6;
								return;
							}
						}
					}
				}
			}
		}
	label_05d108f6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D8E")]
	[Address(RVA = "0x5C13D00", Offset = "0x5C12D00", VA = "0x5C13D00")]
	public void AddLine(string line)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$AddLine): clean
		this.RefreshDisplayedMessages();
		return;
	}

	[Token(Token = "0x6004D8F")]
	[Address(RVA = "0x5C13D10", Offset = "0x5C12D10", VA = "0x5C13D10")]
	public void ReplaceLastLine(string line)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$ReplaceLastLine): clean
		this.RefreshDisplayedMessages();
		return;
	}

	[Token(Token = "0x6004D90")]
	[Address(RVA = "0x5C13D20", Offset = "0x5C12D20", VA = "0x5C13D20")]
	public void AddLines(List<string> lines)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$AddLines): 1 lines keep C-only constructs
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_38;

		local_38._list = null;
		local_38._index = 0;
		local_38._version = 0;
		local_38._current = null;
		if (lines == null) {
			throw new NullReferenceException();
		}
		local_38 = lines.GetEnumerator();
		while(true) {
			bVar1 = local_38.MoveNext();
			if (!bVar1) break;
			this.RefreshDisplayedMessages();
		}
		local_38.Dispose();
		return;
	}

	[Token(Token = "0x6004D91")]
	[Address(RVA = "0x5C13E60", Offset = "0x5C12E60", VA = "0x5C13E60")]
	private void HandleKeys()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$HandleKeys): clean
		TMP_InputField pTVar1;
		String __this_00;
		List<Player> pSVar2;
		bool bVar3;
		bool bVar4;
		int iVar5;
		Event __this_01;
		byte bVar6;

		if (this._isDestroyed != false) {
			return;
		}
		pTVar1 = this._inputField;
		bVar3 = ((Object)pTVar1 == null);
		if (bVar3) {
			return;
		}
		__this_01 = Event.current;
		if (__this_01 == null) goto label_05d141e9;
		iVar5 = __this_01.type;
		if (iVar5 != 4) {
			return;
		}
		if (this._isDestroyed == false) {
			pTVar1 = this._inputField;
			bVar3 = ((Object)pTVar1 != null);
			if (!bVar3) goto label_05d13f75;
			pTVar1 = this._inputField;
			if (pTVar1 == null) goto label_05d141e9;
			bVar6 = 1;
			if (pTVar1.m_AllowInput == false) goto label_05d13f75;
		}
		else {
	label_05d13f75: ;
			bVar6 = this._isInteractingWithChatUI;
		}
		iVar5 = __this_01.keyCode;
		if ((bVar6 & iVar5 == 9) == 0) {
			iVar5 = __this_01.keyCode;
			if ((bVar6 & iVar5 == 0x1b) != 0) {
				__this_01.Use();
				bVar3 = this.IsInputActive();
				if (bVar3) {
					ChatManager.ClearLastSuggestions();
					return;
				}
			}
		}
		else {
			bVar3 = true;
			if (this._isDestroyed == false) {
				pTVar1 = this._inputField;
				bVar4 = ((Object)pTVar1 != null);
				if (bVar4) {
					pTVar1 = this._inputField;
					if (pTVar1 == null) goto label_05d141e9;
					if (pTVar1.m_AllowInput != false) {
						__this_00 = pTVar1.m_Text;
						if (__this_00 == null) goto label_05d141e9;
						bVar3 = __this_00.StartsWith("/");
						bVar3 = !bVar3;
					}
				}
			}
			if (this._isDestroyed == false) {
				pTVar1 = this._inputField;
				bVar4 = ((Object)pTVar1 != null);
				if (bVar4) {
					pTVar1 = this._inputField;
					if (pTVar1 == null) goto label_05d141e9;
					if (pTVar1.m_AllowInput != false) {
						bVar4 = ChatManager.HasActiveSuggestions();
						if (bVar4) {
							__this_01.Use();
							goto label_05d14170;
						}
					}
				}
			}
			if (bVar3) {
				pSVar2 = this._pmPartners;
				if (pSVar2 == null) goto label_05d141e9;
				if (0 < pSVar2._size) {
					__this_01.Use();
					this.CycleToPMPartner();
					return;
				}
			}
			if (this._isDestroyed == false) {
				pTVar1 = this._inputField;
				bVar3 = ((Object)pTVar1 != null);
				if (bVar3) {
					pTVar1 = this._inputField;
					if (pTVar1 == null) {
	label_05d141e9: ;
						throw new NullReferenceException();
					}
					if (pTVar1.m_AllowInput != false) {
						__this_01.Use();
	label_05d14170: ;
						ChatManager.HandleTabComplete();
						return;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004D92")]
	[Address(RVA = "0x5C14500", Offset = "0x5C13500", VA = "0x5C14500")]
	private void Update()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$Update): 4 lines keep C-only constructs
		TMP_InputField pTVar1;
		GUICallback __this_00;
		InputSettings pSVar2;
		GeneralInputSettings pSVar3;
		KeybindSetting __this_01;
		bool bVar4;
		TMP_InputField in_RCX;

		if (this._isDestroyed != false) {
			return;
		}
		pTVar1 = this._inputField;
		bVar4 = ((Object)pTVar1 == null);
		if (bVar4) {
			return;
		}
		if (this._isInteractingWithChatUI != false) {
			if (this._isDestroyed == false) {
				pTVar1 = this._inputField;
				bVar4 = ((Object)pTVar1 != null);
				if (bVar4) {
					pTVar1 = this._inputField;
					if (pTVar1 == null) goto label_05d146ff;
					if (pTVar1.m_AllowInput != false) goto label_05d145fb;
				}
			}
			if ((this._emojiPanelActive == false) &&(bVar4 = InGameMenu.InMenu())) {
				this._isInteractingWithChatUI = false;
			}
		}
	label_05d145fb: ;
		__this_00 = this._keyHandler;
		if (this._isDestroyed == false) {
			pTVar1 = this._inputField;
			bVar4 = ((Object)pTVar1 != null);
			if (!bVar4) goto label_05d14666;
			in_RCX = this._inputField;
			if (in_RCX == null) goto label_05d146ff;
			bVar4 = true;
			if (in_RCX.m_AllowInput == false) goto label_05d14666;
		}
		else {
	label_05d14666: ;
			bVar4 = this._isInteractingWithChatUI != false;
		}
		if (__this_00 != null) {
			__this_00.enabled = bVar4;
			pSVar2 = SettingsManager.InputSettings;
			if (((pSVar2 != null) &&(pSVar3 = pSVar2.General, pSVar3 != null)) &&(__this_01 = pSVar3.HideChat, __this_01 != null)) {
				bVar4 = __this_01.GetKeyDown(false);
				if ((bVar4) && (this._isDestroyed == false)) {
					this.SetChatHiddenState(this._chatHidden == false, true);
					return;
				}
				return;
			}
		}
	label_05d146ff: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D93")]
	[Address(RVA = "0x5C14710", Offset = "0x5C13710", VA = "0x5C14710")]
	private void ToggleChatVisibility()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$ToggleChatVisibility): clean


		if (this._isDestroyed == false) {
			this.SetChatHiddenState(this._chatHidden == false, true);
			return;
		}
		return;
	}

	[Token(Token = "0x6004D94")]
	[Address(RVA = "0x5C0C850", Offset = "0x5C0B850", VA = "0x5C0C850")]
	private void SetChatHiddenState(bool hidden, bool saveSetting = true)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$SetChatHiddenState): clean
		UISettings pSVar1;
		BoolSetting __this_00;
		Object x;
		TMP_InputField pTVar2;
		Button __this_01;
		bool bVar3;
		GameObject pUVar4;

		this._chatHidden = hidden;
		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 != null) &&(__this_00 = pSVar1.ChatHidden, __this_00 != null)) {
			__this_00.Value = hidden;
			if (this._chatHidden != false) {
				x = (Object)this._emojiPanel;
				bVar3 = (x != null);
				if (bVar3) {
					this._emojiPanelActive = false;
					pUVar4 = this._emojiPanel;
					if (pUVar4 == null) goto label_05d0cad4;
					pUVar4.SetActive(false);
				}
			}
			pUVar4 = this._panel;
			if (pUVar4 != null) {
				pUVar4.SetActive(this._chatHidden == false);
			}
			pTVar2 = this._inputField;
			bVar3 = ((Object)pTVar2 != null);
			if (bVar3) {
				pTVar2 = this._inputField;
				if ((pTVar2 == null) ||(pUVar4 = pTVar2.gameObject, pUVar4 == null)) goto label_05d0cad4;
				bVar3 = this._chatHidden == false;
				pUVar4.SetActive(bVar3);
				if (this._chatHidden != false) {
					pTVar2 = this._inputField;
					if (pTVar2 == null) {
						throw new NullReferenceException();
					}
					pTVar2.DeactivateInputField(false);
					if (this._chatHidden != false) {
						this.IgnoreNextActivation = false;
					}
				}
			}
			__this_01 = this._emojiButton;
			if (__this_01 != null) {
				pUVar4 = __this_01.gameObject;
				if (pUVar4 == null) goto label_05d0cad4;
				bVar3 = this._chatHidden == false;
				pUVar4.SetActive(bVar3);
			}
			pUVar4 = this._notificationBadge;
			if (pUVar4 != null) {
				if (this._chatHidden == false) {
					bVar3 = pUVar4.activeSelf;
				}
				else {
					bVar3 = false;
				}
				pUVar4.SetActive(bVar3);
			}
			if (this._chatHidden == false) {
				this.RefreshPoolSize();
				this.ValidatePMState();
				this.RestorePMPartners();
				this.RefreshDisplayedMessages();
				this.UpdateChatModeElements();
			}
			if (!saveSetting) {
				return;
			}
			pSVar1 = SettingsManager.UISettings;
			if (pSVar1 != null) {
				pSVar1.Save();
				return;
			}
		}
	label_05d0cad4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D95")]
	[Address(RVA = "0x5C147D0", Offset = "0x5C137D0", VA = "0x5C147D0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$LateUpdate): clean
		TMP_InputField pTVar1;
		List<Player> pSVar2;
		bool bVar3;

		if (this._isDestroyed != false) {
			return;
		}
		pTVar1 = this._inputField;
		bVar3 = ((Object)pTVar1 == null);
		if (bVar3) {
			return;
		}
		if (this._isDestroyed == false) {
			pTVar1 = this._inputField;
			bVar3 = ((Object)pTVar1 != null);
			if (!bVar3) goto label_05d148a7;
			pTVar1 = this._inputField;
			if (pTVar1 == null) goto label_05d14918;
			bVar3 = true;
			if (pTVar1.m_AllowInput == false) goto label_05d148a7;
		}
		else {
	label_05d148a7: ;
			bVar3 = this._isInteractingWithChatUI != false;
		}
		this.UpdatePlaceholderVisibility(bVar3);
		pSVar2 = this._pmPartners;
		if (pSVar2 == null) {
	label_05d14918: ;
			throw new NullReferenceException();
		}
		if (pSVar2._size < 1) {
			bVar3 = false;
			if (this._lastNotificationBadgeState != false) goto label_05d14905;
		}
		else {
			bVar3 = ChatManager.HasAnyActivePMNotification();
			if (bVar3 != this._lastNotificationBadgeState) {
	label_05d14905: ;
				this._lastNotificationBadgeState = bVar3;
				this.UpdateChatModeElements();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004D96")]
	[Address(RVA = "0x5C134C0", Offset = "0x5C124C0", VA = "0x5C134C0")]
	private void UpdatePlaceholderVisibility(bool isChatActive)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$UpdatePlaceholderVisibility): clean
		CanvasGroup pUVar1;
		TMP_InputField pTVar2;
		List<Player> pSVar3;
		bool bVar4;
		float value;
		float fVar5;

		pUVar1 = this._placeholderCanvasGroup;
		bVar4 = ((Object)pUVar1 == null);
		if (bVar4) {
			return;
		}
		if (this._isDestroyed != false) {
			return;
		}
		pTVar2 = this._inputField;
		bVar4 = ((Object)pTVar2 == null);
		if (bVar4) {
			return;
		}
		if (isChatActive) {
			pTVar2 = this._inputField;
			if (pTVar2 == null) goto label_05d135f3;
			bVar4 = String.IsNullOrEmpty(pTVar2.m_Text);
			if (!bVar4) goto label_05d1359f;
			pSVar3 = this._pmPartners;
			if (pSVar3 == null) goto label_05d135f3;
			if (pSVar3._size < 1) goto label_05d1359f;
			value = 1.0;
		}
		else {
	label_05d1359f: ;
			value = 0.0;
		}
		pUVar1 = this._placeholderCanvasGroup;
		if (pUVar1 != null) {
			fVar5 = pUVar1.alpha;
			if ((fVar5 == value) && (!NAN(fVar5) && !NAN(value))) {
				return;
			}
			pUVar1 = this._placeholderCanvasGroup;
			if (pUVar1 != null) {
				pUVar1.alpha = value;
				return;
			}
		}
	label_05d135f3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D97")]
	[Address(RVA = "0x5C14920", Offset = "0x5C13920", VA = "0x5C14920")]
	public bool IsPointerOverChatUI()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$IsPointerOverChatUI): 2 lines keep C-only constructs
		int iVar1;
		Object x;
		GameObject __this_00;
		bool bVar2;
		bool bVar3;
		EventSystem pUVar4;
		RectTransform rect;
		Vector3 UVar5;

		pUVar4 = EventSystem.current;
		bVar3 = false;
		bVar2 = ((Object)pUVar4 == null);
		if (!bVar2) {
			UVar5 = Input.mousePosition;
			bVar2 = false;
			pUVar4 = EventSystem.current;
			if (pUVar4 == null) {
	label_05d14b5a: ;
				throw new NullReferenceException();
			}
			bVar3 = pUVar4.IsPointerOverGameObject();
			if (bVar3) {
				bVar3 = this.IsMouseOverAnyChatElement((Vector2)UVar5._0_8_);
				bVar2 = true;
				if (!bVar3) {
					x = (Object)this._emojiPanel;
					bVar2 = false;
					bVar3 = (x != null);
					if (bVar3) {
						__this_00 = this._emojiPanel;
						if (__this_00 == null) goto label_05d14b5a;
						bVar2 = false;
						bVar3 = __this_00.activeSelf;
						if (bVar3) {
							rect = this.GetCachedRectTransform(this._emojiPanel);
							bVar2 = RectTransformUtility.RectangleContainsScreenPoint(rect, (Vector2)UVar5._0_8_);
						}
					}
				}
			}
			iVar1 = CursorManager.State;
			bVar3 = Input.GetMouseButtonDown(0);
			if ((bVar3) && ((iVar1 == 0 & ~bVar2) != 0)) {
				this._isInteractingWithChatUI = false;
				ChatManager.ClearLastSuggestions();
				this.IgnoreNextActivation = false;
			}
			if ((bVar2 & iVar1 == 0) == 0) {
				bVar3 = this._isInteractingWithChatUI != false;
			}
			else {
				this._isInteractingWithChatUI = true;
				bVar3 = true;
			}
		}
		return bVar3;
	}

	[Token(Token = "0x6004D98")]
	[Address(RVA = "0x5C137E0", Offset = "0x5C127E0", VA = "0x5C137E0")]
	private bool IsMouseOverAnyChatElement(Vector2 mousePosition)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$IsMouseOverAnyChatElement): 6 lines keep C-only constructs
		List<ChatPanel.ChatLineView> __this_00;
		Il2CppClass rect;
		Button pUVar1;
		object pIVar2;
		bool bVar3;
		GameObject obj;
		RectTransform pUVar4;
		byte[] local_68 = new byte[8];
		object local_58;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		pUVar4 = this._chatPanelRect;
		bVar3 = RectTransformUtility.RectangleContainsScreenPoint(pUVar4, mousePosition);
		if (!bVar3) {
			pUVar4 = this._inputFieldRect;
			bVar3 = RectTransformUtility.RectangleContainsScreenPoint(pUVar4, mousePosition);
			if (!bVar3) {
				pUVar4 = this._contentRect;
				bVar3 = RectTransformUtility.RectangleContainsScreenPoint(pUVar4, mousePosition);
				if (!bVar3) {
					pUVar4 = this._scrollbarRect;
					bVar3 = ((Object)pUVar4 != null);
					if (bVar3) {
						pUVar4 = this._scrollbarRect;
						bVar3 = RectTransformUtility.RectangleContainsScreenPoint(pUVar4, mousePosition);
						if (bVar3) {
							return true;
						}
					}
					__this_00 = this._linesPool;
					if (__this_00 == null) {
	label_05d13ad1: ;
						throw new NullReferenceException();
					}
					local_48.GetEnumerator((List<object>)__this_00);
					local_58 = local_38;
					local_68 = (byte[])local_48._0_8_;
					local_48._0_8_ = null;
					local_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
					do {
						do {
							bVar3 = local_68.MoveNext();
							pIVar2 = local_58;
							if (!bVar3) {
								local_68.Dispose() ;
								pUVar1 = this._emojiButton;
								bVar3 = ((Object)pUVar1 != null) ;
								if (bVar3) {
									pUVar1 = this._emojiButton;
									if (pUVar1 == null) goto label_05d13ad1;
									obj = pUVar1.gameObject;
									pUVar4 = this.GetCachedRectTransform(obj);
									bVar3 = RectTransformUtility.RectangleContainsScreenPoint(pUVar4, mousePosition);
									if (bVar3) {
										return true;
									}
								}
								return false;
							}
							if (local_58 == null) {
								throw new NullReferenceException();
							}
							if (local_58[0xc].klass == null) {
								throw new NullReferenceException();
							}
							bVar3 = local_58[0xc].klass.activeSelf;
						} while (!bVar3);
						rect = pIVar2[2].klass;
						bVar3 = RectTransformUtility.RectangleContainsScreenPoint((RectTransform)rect, mousePosition);
					} while (!bVar3);
					local_68.Dispose();
				}
			}
		}
		return true;
	}

	[Token(Token = "0x6004D99")]
	[Address(RVA = "0x5C14B60", Offset = "0x5C13B60", VA = "0x5C14B60")]
	public void UpdateChatInteractionState()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$UpdateChatInteractionState): clean
		sbyte cVar1;
		TMP_InputField pTVar2;
		bool bVar3;

		if (Il2CppMethodInitialized_07547d5f == false) {
			Il2CppMethodInitialized_07547d5f = true;
			if (Il2CppMethodInitialized_07547d53 != false) goto label_05d14b79;
	label_05d14ba0: ;
			Il2CppMethodInitialized_07547d53 = true;
			cVar1 = this._isDestroyed;
		}
		else {
			if (Il2CppMethodInitialized_07547d53 == false) goto label_05d14ba0;
	label_05d14b79: ;
			cVar1 = this._isDestroyed;
		}
		if (cVar1 == false) {
			pTVar2 = this._inputField;
			if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar3 = ((Object)pTVar2 != null);
			if (bVar3) {
				pTVar2 = this._inputField;
				if (pTVar2 == null) {
					throw new NullReferenceException();
				}
				bVar3 = true;
				if (pTVar2.m_AllowInput != false) goto label_05d14c30;
			}
		}
		bVar3 = true;
		if (this._emojiPanelActive == false) {
			if (CursorManager.State == 0) {
				return;
			}
			bVar3 = false;
		}
	label_05d14c30: ;
		this._isInteractingWithChatUI = bVar3;
		return;
	}

	[Token(Token = "0x6004D9A")]
	[Address(RVA = "0x5C14C50", Offset = "0x5C13C50", VA = "0x5C14C50")]
	protected ChatLineView CreateLine(string text)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$CreateLine): 2 lines keep C-only constructs
		int fontSize;
		UISettings pSVar1;
		IntSetting pSVar2;
		GameObject __this_00;
		TMP_InputField chatInput;
		ChatManager.ChatDisplayLine line;
		String themePanel;
		ElementStyle __this_01;
		Transform parent;
		ChatPanel.ChatLineView __this_02;
		ChatManager.ChatDisplayLine local_70;

		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.ChatFontSize, pSVar2 != null)) {
			fontSize = pSVar2._value;
			themePanel = this.get_ThemePanel();
			__this_01 = new ElementStyle(fontSize, 120.0, 20.0, themePanel);
			__this_00 = this._panel;
			if (__this_00 != null) {
				parent = __this_00.transform;
				chatInput = this._inputField;
				__this_02 = new ChatPanel.ChatLineView(parent, __this_01, chatInput, this);
				local_70 = ChatManager.ChatDisplayLine.Plain(text, 0);
				if (__this_02 != null) {
					line.UsePlayerStyle = local_70.UsePlayerStyle;
					line._9_7_ = local_70._9_7_;
					line.PlainText = local_70.PlainText;
					line.TimeText = local_70.TimeText;
					line.IdText = local_70.IdText;
					line.SenderName = local_70.SenderName;
					line.BodyText = local_70.BodyText;
					line.SenderID = local_70.SenderID;
					line._52_4_ = local_70._52_4_;
					line.LineID = local_70.LineID;
					__this_02.SetLine(line);
					return __this_02;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D9B")]
	[Address(RVA = "0x5C15840", Offset = "0x5C14840", VA = "0x5C15840")]
	private void InGameManager_PlayerInfoUpdated(int actorNumber)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$InGameManager_PlayerInfoUpdated): 4 lines keep C-only constructs
		List<ChatPanel.ChatLineView> __this_00;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o SStack_48;
		byte puStack_28;

		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		if (this._isDestroyed == false) {
			__this_00 = this._linesPool;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			SStack_48 = __this_00.GetEnumerator();
			puStack_28 = (byte)&SStack_48;
			while(true) {
				bVar1 = SStack_48.MoveNext();
				if (!bVar1) break;
				if (SStack_48._current == null) {
					throw new NullReferenceException();
				}
				if (*(int)((long)&SStack_48._current[9].klass + 4) == actorNumber) {
					*(byte)((long)&SStack_48._current[9].klass + 3) = 1;
				}
			}
			SStack_48.Dispose();
			this.RefreshDisplayedMessages();
		}
		return;
	}

	[Token(Token = "0x6004D9C")]
	[Address(RVA = "0x5C159B0", Offset = "0x5C149B0", VA = "0x5C159B0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$OnDestroy): 6 lines keep C-only constructs
		int piVar1;
		sbyte cVar2;
		uint uVar3;
		Int32[] array;
		TMP_InputField pTVar4;
		TMP_InputField.OnChangeEvent __this_00;
		TMP_InputField.SubmitEvent pTVar5;
		String text;
		Player pPVar6;
		Dictionary<GameObject, RectTransform> pSVar7;
		bool bVar8;
		int iVar9;
		Action<int> __this_01;
		UnityAction<T0> pUVar10;

		this._isDestroyed = true;
		__this_01 = new Action<int>((object)this, (intptr_t)MethodInfo_UI_ChatPanel_InGameManager_PlayerInfoUpdated);
		InGameManager.remove_PlayerInfoUpdated(__this_01);
		pTVar4 = this._inputField;
		bVar8 = ((Object)pTVar4 != null);
		if (bVar8) {
			pTVar4 = this._inputField;
			if (pTVar4 == null) goto label_05d15d1d;
			__this_00 = pTVar4.m_OnValueChanged;
			pUVar10 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_UI_ChatPanel_OnValueChanged);
			if (__this_00 == null) goto label_05d15d1d;
			__this_00.RemoveListener(pUVar10);
			pTVar4 = this._inputField;
			if (pTVar4 == null) goto label_05d15d1d;
			pTVar5 = pTVar4.m_OnEndEdit;
			pUVar10 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_UI_ChatPanel_OnEndEdit);
			if (pTVar5 == null) goto label_05d15d1d;
			pTVar5.RemoveListener(pUVar10);
			pTVar4 = this._inputField;
			if (pTVar4 == null) goto label_05d15d1d;
			pTVar5 = pTVar4.m_OnSubmit;
			pUVar10 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_UI_ChatPanel_OnSubmit);
			if (pTVar5 == null) goto label_05d15d1d;
			pTVar5.RemoveListener(pUVar10);
			pTVar4 = this._inputField;
			if (pTVar4 == null) {
				throw new NullReferenceException();
			}
			pTVar4.DeactivateInputField(false);
			if (this._inPMMode != false) {
				this.SaveCurrentConversation();
			}
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				cVar2 = ChatManager.PreserveInputOnRestart;
			}
			else {
				cVar2 = ChatManager.PreserveInputOnRestart;
			}
			if (cVar2 == false) goto label_05d15cc3;
			pTVar4 = this._inputField;
			if (pTVar4 == null) goto label_05d15d1d;
			text = pTVar4.m_Text;
			iVar9 = pTVar4.caretPosition;
			ChatManager.PreserveInputText(text, iVar9);
			iVar9 = -1;
			if ((this._inPMMode != false) &&(pPVar6 = this._currentPMTarget, pPVar6 != null)) {
				iVar9 = pPVar6.actorNumber;
			}
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07547d9f != false) goto label_05d15caa;
	label_05d15cf4: ;
				g_data_07547d9f = true;
				uVar3 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (g_data_07547d9f == false) goto label_05d15cf4;
	label_05d15caa: ;
				uVar3 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
			}
			ChatManager._preservedPMTargetActorNumber = iVar9;
		}
	label_05d15cc3: ;
		pSVar7 = this._cachedRectTransforms;
		if (pSVar7 != null) {
			iVar9 = pSVar7._count;
			if (0 < iVar9) {
				array = pSVar7._buckets;
				if (array == null) {
					throw new NullReferenceException();
				}
				Array.Clear((Array)array, 0, (int32_t)array.Length);
				pSVar7._count = 0;
				pSVar7._freeList = -1;
				pSVar7._freeCount = 0;
				Array.Clear((Array)pSVar7._entries, 0, iVar9);
			}
			piVar1 = &pSVar7._version;
			*piVar1 = *piVar1 + 1;
			return;
		}
	label_05d15d1d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D9D")]
	[Address(RVA = "0x5C15F30", Offset = "0x5C14F30", VA = "0x5C15F30")]
	private void OnValueChanged(string text)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$OnValueChanged): clean
		uint uVar1;
		TMP_InputField pTVar2;
		bool bVar3;
		bool isChatActive;

		if (this._isDestroyed == false) {
			pTVar2 = this._inputField;
			bVar3 = ((Object)pTVar2 == null);
			if (!bVar3) {
				if (text == null) {
					text = (String)**(ulong*)(g_data_07556758 + 0xb8);
					uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				ChatManager.HandleTyping(text);
				if (this._isDestroyed == false) {
					pTVar2 = this._inputField;
					isChatActive = false;
					bVar3 = ((Object)pTVar2 != null);
					if (bVar3) {
						pTVar2 = this._inputField;
						if (pTVar2 == null) {
							throw new NullReferenceException();
						}
						isChatActive = pTVar2.m_AllowInput != false;
					}
				}
				else {
					isChatActive = false;
				}
				this.UpdatePlaceholderVisibility(isChatActive);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004D9E")]
	[Address(RVA = "0x5C16080", Offset = "0x5C15080", VA = "0x5C16080")]
	public string GetInputText()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$GetInputText): 2 lines keep C-only constructs
		TMP_InputField pTVar1;
		bool bVar2;
		String* ppSVar3;

		if (this._isDestroyed == false) {
			pTVar1 = this._inputField;
			bVar2 = ((Object)pTVar1 == null);
			if (!bVar2) {
				pTVar1 = this._inputField;
				if (pTVar1 == null) {
					throw new NullReferenceException();
				}
				ppSVar3 = &pTVar1.m_Text;
				goto label_05d160ed;
			}
		}
		ppSVar3 = *(String**)(g_data_07556758 + 0xb8);
	label_05d160ed: ;
		return *ppSVar3;
	}

	[Token(Token = "0x6004D9F")]
	[Address(RVA = "0x5C16110", Offset = "0x5C15110", VA = "0x5C16110")]
	public void SetInputText(string newText)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$SetInputText): clean
		this.SetTextAndPositionCaret(newText);
		return;
	}

	[Token(Token = "0x6004DA0")]
	[Address(RVA = "0x5C0C520", Offset = "0x5C0B520", VA = "0x5C0C520")]
	public void EnterPMMode(Player target)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$EnterPMMode): 5 lines keep C-only constructs
		int iVar1;
		List<Player> __this_00;
		int iVar2;
		ChatPanel.c__DisplayClass113_0 __this_01;
		Player pPVar3;
		ChatPanel.d__118<ResetPMToggleActive> __this_02;
		Coroutine pUVar4;
		Predicate<T> match;
		object arg0;
		String key;
		MethodInfo pMVar5;
		String* method_00;
		ChatPanel.c__DisplayClass113_0 targetAddress;
		System_ValueTuple_string__int__o SVar6;
		byte[] local_34 = new byte[4];

		if (Il2CppMethodInitialized_07547d65 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ChatPanel_c__DisplayClass113_0_EnterPMMode_b__0) ;
			Il2CppMethodInitialized_07547d65 = true;
		}
		__this_01 = new ChatPanel.c__DisplayClass113_0();
		if (__this_01 != null) {
			targetAddress = &__this_01.fields;
			__this_01.target = target;
			pPVar3 = __this_01.target;
			if (pPVar3 == null) {
				return;
			}
			iVar1 = pPVar3.actorNumber;
			pPVar3 = PhotonNetwork.LocalPlayer;
			if (pPVar3 != null) {
				if (iVar1 == pPVar3.actorNumber) {
					return;
				}
				if ((this._inPMMode != false) &&(pPVar3 = this._currentPMTarget, pPVar3 != null)) {
					if (targetAddress.target == null) goto label_05d0c815;
					if (pPVar3.actorNumber == targetAddress.target.actorNumber) {
						return;
					}
				}
				this.SaveCurrentConversation();
				this._currentPMTarget = targetAddress.target;
				this._inPMMode = true;
				this._pmToggleActive = true;
				pUVar4 = this._pmToggleCoroutine;
				if (pUVar4 != null) {
					this.StopCoroutine(pUVar4);
				}
				__this_02 = new ChatPanel.d__118<ResetPMToggleActive>();
				__this_02.__1__state = 0;
				__this_02.__4__this = this;
				pUVar4 = this.StartCoroutine((IEnumerator)__this_02);
				this._pmToggleCoroutine = pUVar4;
				this.AddPMPartner(__this_01.target);
				__this_00 = this._pmPartners;
				match = new Predicate<Player>((object)__this_01, (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass113_0_EnterPMMode_b__0);
				if (__this_00 != null) {
					iVar2 = __this_00.FindIndex(match);
					this._currentPMIndex = iVar2;
					if (targetAddress.target != null) {
						iVar2 = targetAddress.target.actorNumber;
						pMVar5 = null;
						ChatManager.ClearPMNotification(iVar2);
						this.UpdateChatModeLabel();
						this.UpdateChatModeElements();
						if (targetAddress.target != null) {
							arg0 = (object)local_34;
							method_00 = &"PM_{0}";
							key = String.Format("PM_{0}", arg0);
							SVar6 = ChatManager.GetConversation(key);
							pMVar5 = (MethodInfo)SVar6.Item1;
							this.SetTextAndCaretPosition((String)pMVar5, SVar6.Item2);
							this.RefreshPoolSize();
							this.ValidatePMState();
							this.RestorePMPartners();
							this.RefreshDisplayedMessages();
							return;
						}
					}
				}
			}
		}
	label_05d0c815: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004DA1")]
	[Address(RVA = "0x5C167C0", Offset = "0x5C157C0", VA = "0x5C167C0")]
	public void ExitPMMode()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$ExitPMMode): 1 lines keep C-only constructs
		Coroutine routine;
		ChatPanel.d__118<ResetPMToggleActive> __this_00;
		MethodInfo pMVar1;
		System_ValueTuple_string__int__o SVar2;

		this.SaveCurrentConversation();
		this._currentPMTarget = null;
		this._inPMMode = false;
		this._currentPMIndex = -1;
		this._pmToggleActive = true;
		routine = this._pmToggleCoroutine;
		if (routine != null) {
			this.StopCoroutine(routine);
		}
		__this_00 = new ChatPanel.d__118<ResetPMToggleActive>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		pMVar1 = (MethodInfo)this.StartCoroutine((IEnumerator)__this_00);
		this._pmToggleCoroutine = (Coroutine)pMVar1;
		this.UpdateChatModeLabel();
		this.UpdateChatModeElements();
		SVar2 = ChatManager.GetConversation("PUBLIC");
		pMVar1 = (MethodInfo)SVar2.Item1;
		this.SetTextAndCaretPosition((String)pMVar1, SVar2.Item2);
		this.RefreshPoolSize();
		this.ValidatePMState();
		this.RestorePMPartners();
		this.RefreshDisplayedMessages();
		return;
	}

	[Token(Token = "0x6004DA2")]
	[Address(RVA = "0x5C16920", Offset = "0x5C15920", VA = "0x5C16920")]
	public void RemovePMPartner(Player player)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$RemovePMPartner): 1 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		List<Player> pSVar3;
		Player pPVar4;
		uint index;
		int iVar5;
		ChatPanel.c__DisplayClass115_0 __this_00;
		Predicate<T> match;
		Player pPVar6;

		__this_00 = new ChatPanel.c__DisplayClass115_0();
		if (__this_00 != null) {
			__this_00.player = player;
			if (__this_00.player == null) {
				return;
			}
			pSVar3 = this._pmPartners;
			match = new Predicate<Player>((object)__this_00, (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass115_0_RemovePMPartner_b__0);
			if (pSVar3 != null) {
				index = pSVar3.FindIndex(match);
				if (index == 0xffffffff) {
					return;
				}
				pSVar3 = this._pmPartners;
				if (pSVar3 != null) {
					pSVar3.RemoveAt(index);
					this.UpdateChatModeElements();
					pSVar3 = this._pmPartners;
					if (pSVar3 != null) {
						uVar1 = pSVar3._size;
						if (uVar1 == 0) {
	label_05d16acd: ;
							this.ExitPMMode();
							return;
						}
						pPVar6 = this._currentPMTarget;
						if (pPVar6 != null) {
							pPVar4 = __this_00.player;
							if (pPVar4 == null) goto label_05d16b1d;
							if (pPVar6.actorNumber == pPVar4.actorNumber) {
								if (0 < (int)uVar1) {
									this._currentPMIndex = uVar1 - 1;
									pPVar6 = pSVar3.get_Item(uVar1 - 1);
									this.EnterPMMode(pPVar6);
									return;
								}
								goto label_05d16acd;
							}
						}
						iVar2 = this._currentPMIndex;
						if (iVar2 < (int)index) {
							return;
						}
						iVar5 = Math.Max(0, iVar2 + -1);
						this._currentPMIndex = iVar5;
						return;
					}
				}
			}
		}
	label_05d16b1d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004DA3")]
	[Address(RVA = "0x5C10ED0", Offset = "0x5C0FED0", VA = "0x5C10ED0")]
	private void ValidatePMState()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$ValidatePMState): 4 lines keep C-only constructs
		Player* targetAddress;
		int iVar1;
		List<Player> pSVar2;
		object @object;
		Dictionary<int, @object> __this_00;
		bool bVar3;
		int iVar4;
		UI_ChatPanel___c_StaticFields pUVar5;
		Predicate<T> match;
		Room pPVar6;
		uint val2;

		pSVar2 = this._pmPartners;
		if ((typeof(ChatPanel.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar5 = typeof(ChatPanel.c).static_fields;
			match = (Predicate<T>)pUVar5.__9__116_0;
		}
		else {
			pUVar5 = typeof(ChatPanel.c).static_fields;
			match = (Predicate<T>)pUVar5.__9__116_0;
		}
		if (match == null) {
			if (((typeof(ChatPanel.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar5 = typeof(ChatPanel.c).static_fields;
			}
			@object = (object)pUVar5.__9;
			match = new Predicate<Player>(@object, (intptr_t)MethodInfo_UI_ChatPanel_c_ValidatePMState_b__116_0);
			pUVar5 = typeof(ChatPanel.c).static_fields;
			pUVar5.__9__116_0 = (Predicate<Player>)match;
		}
		if (pSVar2 != null) {
			pSVar2.RemoveAll(match);
			targetAddress = &this._currentPMTarget;
			if (this._currentPMTarget != null) {
				pPVar6 = PhotonNetwork.CurrentRoom;
				if ((pPVar6 == null) ||(__this_00 = (Dictionary<int, @object>)pPVar6.players, __this_00 == null)) goto label_05d110f2;
				match = (Predicate<T>)*targetAddress;
				bVar3 = __this_00.ContainsValue((object)match);
				if (!bVar3) {
					*targetAddress = null;
					match = null;
				}
			}
			if ((this._inPMMode != false) && (*targetAddress == null)) {
				this.ExitPMMode();
			}
			pSVar2 = this._pmPartners;
			if (pSVar2 != null) {
				iVar4 = this._currentPMIndex;
				iVar1 = pSVar2._size;
				val2 = iVar1 - 1;
				iVar4 = Math.Min(iVar4, val2);
				this._currentPMIndex = iVar4;
				this.UpdateChatModeElements();
				return;
			}
		}
	label_05d110f2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004DA4")]
	[Address(RVA = "0x5C16B40", Offset = "0x5C15B40", VA = "0x5C16B40")]
	public bool IsTogglingPM()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$IsTogglingPM): clean
		return this._pmToggleActive;
	}

	[Token(Token = "0x6004DA5")]
	[Address(RVA = "0x5C16250", Offset = "0x5C15250", VA = "0x5C16250")]
	[IteratorStateMachine(typeof(_003CResetPMToggleActive_003Ed__118))]
	private IEnumerator ResetPMToggleActive()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$ResetPMToggleActive): clean
		ChatPanel.d__118<ResetPMToggleActive> __this_00;

		__this_00 = new ChatPanel.d__118<ResetPMToggleActive>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004DA6")]
	[Address(RVA = "0x5C16B70", Offset = "0x5C15B70", VA = "0x5C16B70")]
	public bool IsInPMMode()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$IsInPMMode): clean
		return this._inPMMode;
	}

	[Token(Token = "0x6004DA7")]
	[Address(RVA = "0x5C141F0", Offset = "0x5C131F0", VA = "0x5C141F0")]
	private void CycleToPMPartner()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$CycleToPMPartner): 4 lines keep C-only constructs
		int iVar1;
		List<Player> __this_00;
		bool bVar2;
		int iVar3;
		ChatPanel.c__DisplayClass120_0 __this_01;
		List<Player> pSVar4;
		ChatPanel match;
		Player pPVar5;
		int index;

		__this_01 = new ChatPanel.c__DisplayClass120_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			match = this;
			pSVar4 = this._pmPartners;
			if (pSVar4 != null) {
				if (pSVar4._size == 0) {
					return;
				}
				pSVar4 = this.GetPmPartnersByRecency();
				if (pSVar4 != null) {
					iVar1 = pSVar4._size;
					if (this._currentPMTarget == null) {
						__this_01.currentIndexInRecency = iVar1;
					}
					else {
						match = (ChatPanel)il2cpp_codegen_object_new(typeof(Predicate<Player>)) ;
						match = new Predicate<Player>((object)__this_01, (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass120_0_CycleToPMPartner_b__0);
						iVar3 = pSVar4.FindIndex((Predicate<T>)match);
						__this_01.currentIndexInRecency = iVar3;
						if (iVar3 == -1) {
							__this_00 = this._pmPartners;
							match = new Predicate<Player>((object)__this_01, (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass120_0_CycleToPMPartner_b__1);
							if (__this_00 == null) goto label_05d144f0;
							iVar3 = __this_00.FindIndex((Predicate<T>)match);
							__this_01.currentIndexInRecency = iVar3;
							if (iVar3 == -1) {
								__this_01.currentIndexInRecency = iVar1;
							}
							else {
								match = new Predicate<Player>((object)__this_01, (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass120_0_CycleToPMPartner_b__2);
								iVar3 = pSVar4.FindIndex((Predicate<T>)match);
								if (iVar3 != -1) {
									__this_01.currentIndexInRecency = iVar3;
								}
							}
						}
					}
					if (0 < iVar1) {
						index = 0;
						do {
							pPVar5 = pSVar4.get_Item(index);
							if (pPVar5 == null) goto label_05d144f0;
							iVar3 = pPVar5.actorNumber;
							match = null;
							bVar2 = ChatManager.HasActivePMNotification(iVar3);
							if (bVar2) {
								if (__this_01.currentIndexInRecency != index) goto label_05d1447d;
								break;
							}
							index = index + 1;
						} while (iVar1 != index);
					}
					index = (__this_01.currentIndexInRecency + 1) % (iVar1 + 1);
	label_05d1447d: ;
					if (index == iVar1) {
						this.SaveCurrentConversation();
						this.ExitPMMode();
						return;
					}
					pPVar5 = pSVar4.get_Item(index);
					this.EnterPMMode(pPVar5);
					return;
				}
			}
		}
	label_05d144f0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004DA8")]
	[Address(RVA = "0x5C16B90", Offset = "0x5C15B90", VA = "0x5C16B90")]
	private List<Player> GetPmPartnersByRecency()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$GetPmPartnersByRecency): 17 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<Player> pSVar3;
		List<int> pSVar4;
		Player[] pPVar5;
		Player pPVar6;
		byte puVar8;
		bool bVar9;
		int item;
		List<Player> __this_00;
		Dictionary<int, Player> __this_01;
		HashSet<int> __this_02;
		List<bool> __this_03;
		ChatPanel.c__DisplayClass121_0 __this_04;
		Func<Player, bool> __this_05;
		int index;
		ChatPanel.c__DisplayClass121_0 targetAddress;
		byte[] local_78 = new byte[8];
		Player local_68;
		byte[] local_58 = new byte[16];
		Player local_48;
		Player local_40;
		ChatPanel local_38;

		local_78 = (byte[])0x0;
		local_68 = null;
		local_40 = null;
		__this_00 = new List<Player>();
		pSVar3 = this._pmPartners;
		if ((pSVar3 == null) || (pSVar3._size == 0)) {
			return __this_00;
		}
		__this_01 = new Dictionary<int, Player>();
		pSVar3 = this._pmPartners;
		if (pSVar3 != null) {
			local_38 = this;
			local_58.GetEnumerator((List<object>)pSVar3);
			local_68 = local_48;
			local_78 = (byte[])local_58._0_8_;
			local_58._0_8_ = null;
			local_58._8_8_ = local_78;
			puVar8 = local_78;
			if (__this_01 == null) {
				while (true) {
					local_58._8_8_ = puVar8;
					bVar9 = local_78.MoveNext();
					if (!(bVar9)) break;
					puVar8 = (byte)local_58._8_8_;
					if (local_68 != null) {
						throw new NullReferenceException();
					}
				}
			}
			else {
				while (true) {
					bVar9 = local_78.MoveNext();
					pPVar6 = local_68;
					if (!(bVar9)) break;
					if ((local_68 != null) &&(bVar9 = __this_01.ContainsKey(local_68.actorNumber), !bVar9)) {
						__this_01.set_Item(pPVar6.actorNumber, (object)pPVar6);
					}
				}
			}
			local_78.Dispose();
			__this_02 = new HashSet<int>();
			pSVar4 = ChatManager.PMPartnerIDs;
			if (pSVar4 != null) {
				index = pSVar4._size;
				while(true) {
					index = index + -1;
					if (index < 0) break;
					__this_03 = ChatManager.PrivateFlags;
					if (__this_03 == null) goto label_05d171c6;
					if (index < __this_03._size) {
						if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
							__this_03 = ChatManager.PrivateFlags;
							if (__this_03 == null) goto label_05d171c6;
						}
						bVar9 = __this_03.get_Item(index);
						if (bVar9) {
							pSVar4 = ChatManager.PMPartnerIDs;
							if (pSVar4 == null) goto label_05d171c6;
							item = pSVar4.get_Item(index);
							if (0 < item) {
								if (__this_02 == null) goto label_05d171c6;
								bVar9 = __this_02.Contains(item);
								if (!bVar9) {
									__this_02.Add(item);
									if (__this_01 == null) goto label_05d171c6;
									bVar9 = __this_01.TryGetValue(item, (object*)&local_40);
									if (bVar9) {
										if (__this_00 == null) goto label_05d171c6;
										piVar1 = &__this_00._version;
										*piVar1 = *piVar1 + 1;
										pPVar5 = __this_00._items;
										if (pPVar5 == null) goto label_05d171c6;
										uVar2 = __this_00._size;
										if (uVar2 < (uint)pPVar5.Length) {
											__this_00._size = uVar2 + 1;
											pPVar5[(int)uVar2] = local_40;
										}
										else {
											__this_00.AddWithResize((object)local_40);
										}
									}
								}
							}
						}
					}
				}
				pSVar3 = local_38._pmPartners;
				if (pSVar3 != null) {
					local_58.GetEnumerator((List<object>)pSVar3);
					local_68 = local_48;
					local_78 = (byte[])local_58._0_8_;
					local_58._0_8_ = null;
					local_58._8_8_ = local_78;
					while(true) {
						do {
							do {
								bVar9 = local_78.MoveNext();
								if (!bVar9) {
									local_78.Dispose();
									return __this_00;
								}
								__this_04 = il2cpp_codegen_object_new(typeof(ChatPanel.c__DisplayClass121_0)) ;
								__this_04 = new Object();
								if (__this_04 == null) {
									throw new NullReferenceException();
								}
								targetAddress = &__this_04.fields;
								__this_04.p = local_68;
							} while (targetAddress.p == null);
							__this_05 = new Func<Player, bool>((object)__this_04, (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass121_0_GetPmPartnersByRecency_b__0);
							bVar9 = Enumerable.Any<Player>((System_Collections_Generic_IEnumerable_TSource__o)__this_00, (System_Func_TSource__bool__o)__this_05);
						} while (bVar9);
						if (__this_00 == null) break;
						pPVar6 = targetAddress.p;
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pPVar5 = __this_00._items;
						if (pPVar5 == null) break;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pPVar5.Length) {
							__this_00._size = uVar2 + 1;
							pPVar5[(int)uVar2] = pPVar6;
						}
						else {
							__this_00.AddWithResize((object)pPVar6);
						}
					}
					throw new NullReferenceException();
				}
			}
		}
	label_05d171c6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004DA9")]
	[Address(RVA = "0x5C162C0", Offset = "0x5C152C0", VA = "0x5C162C0")]
	public void AddPMPartner(Player player)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$AddPMPartner): 5 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		List<Player> pSVar4;
		Player[] pPVar5;
		Player pPVar6;
		int iVar8;
		ChatPanel.c__DisplayClass122_0 __this_00;
		Player pPVar9;
		Predicate<T> match;
		object arg0;
		String key;
		MethodInfo method_00;
		int local_2c;

		__this_00 = new ChatPanel.c__DisplayClass122_0();
		if (__this_00 != null) {
			__this_00.player = player;
			pPVar9 = __this_00.player;
			if (pPVar9 == null) {
				return;
			}
			iVar2 = pPVar9.actorNumber;
			pPVar9 = PhotonNetwork.LocalPlayer;
			if (pPVar9 != null) {
				if (iVar2 == pPVar9.actorNumber) {
					return;
				}
				pSVar4 = this._pmPartners;
				match = new Predicate<Player>((object)__this_00, (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass122_0_AddPMPartner_b__0);
				if (pSVar4 != null) {
					iVar8 = pSVar4.FindIndex(match);
					pSVar4 = this._pmPartners;
					if (iVar8 == -1) {
						if (pSVar4 != null) {
							if (9 < pSVar4._size) {
								pPVar9 = pSVar4.get_Item(0);
								if (pPVar9 != null) {
									local_2c = pPVar9.actorNumber;
									arg0 = (object)local_2c;
									key = String.Format("PM_{0}", arg0);
									ChatManager.ClearConversation(key);
									ChatManager.ClearPMNotification(pPVar9.actorNumber);
									ChatManager.ResetNotifiedForPM(pPVar9.actorNumber);
								}
								pSVar4 = this._pmPartners;
								if (pSVar4 == null) goto label_05d1666f;
								pSVar4.RemoveAt(0);
								pPVar6 = this._currentPMTarget;
								if (pPVar6 != null) {
									if (pPVar9 == null) {
										iVar8 = -1;
									}
									else {
										iVar8 = pPVar9.actorNumber;
									}
									if (pPVar6.actorNumber == iVar8) {
										this._currentPMTarget = null;
										this._inPMMode = false;
									}
								}
							}
							pSVar4 = this._pmPartners;
							if (pSVar4 != null) {
								method_00 = (MethodInfo)__this_00.player;
								piVar1 = &pSVar4._version;
								*piVar1 = *piVar1 + 1;
								pPVar5 = pSVar4._items;
								if (pPVar5 != null) {
									uVar3 = pSVar4._size;
									if (uVar3 < (uint)pPVar5.Length) {
										pSVar4._size = uVar3 + 1;
										pPVar5[(int)uVar3] = (Player)method_00;
									}
									else {
										pSVar4.AddWithResize((object)method_00);
									}
									this.UpdateChatModeElements();
									return;
								}
							}
						}
					}
					else if (pSVar4 != null) {
						pPVar9 = pSVar4.get_Item(iVar8);
						pSVar4 = this._pmPartners;
						if (pSVar4 != null) {
							pSVar4.RemoveAt(iVar8);
							pSVar4 = this._pmPartners;
							if (pSVar4 != null) {
								piVar1 = &pSVar4._version;
								*piVar1 = *piVar1 + 1;
								pPVar5 = pSVar4._items;
								if (pPVar5 != null) {
									uVar3 = pSVar4._size;
									if (uVar3 < (uint)pPVar5.Length) {
										pSVar4._size = uVar3 + 1;
										pPVar5[(int)uVar3] = pPVar9;
										return;
									}
									pSVar4.AddWithResize((object)pPVar9);
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05d1666f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004DAA")]
	[Address(RVA = "0x5C172C0", Offset = "0x5C162C0", VA = "0x5C172C0")]
	public Player GetCurrentPMTarget()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$GetCurrentPMTarget): clean
		return this._currentPMTarget;
	}

	[Token(Token = "0x6004DAB")]
	[Address(RVA = "0x5C172D0", Offset = "0x5C162D0", VA = "0x5C172D0")]
	public void ResetPMState()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$ResetPMState): 2 lines keep C-only constructs
		int piVar1;
		int length;
		List<Player> pSVar2;
		MethodInfo method_00;

		this._inPMMode = false;
		this._currentPMTarget = null;
		pSVar2 = this._pmPartners;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		piVar1 = &pSVar2._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar2._size;
		pSVar2._size = 0;
		if (0 < length) {
			Array.Clear((Array)pSVar2._items, 0, length);
		}
		this._currentPMIndex = -1;
		this._pmToggleActive = false;
		method_00 = (MethodInfo)this._pmToggleCoroutine;
		if (method_00 != null) {
			this.StopCoroutine((Coroutine)method_00);
		}
		this.UpdateChatModeElements();
		return;
	}

	[Token(Token = "0x6004DAC")]
	[Address(RVA = "0x5C14740", Offset = "0x5C13740", VA = "0x5C14740")]
	public void CloseEmojiPanel()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$CloseEmojiPanel): clean
		Object x;
		GameObject __this_00;
		bool bVar1;

		x = (Object)this._emojiPanel;
		bVar1 = (x != null);
		if (bVar1) {
			this._emojiPanelActive = false;
			__this_00 = this._emojiPanel;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.SetActive(false);
			return;
		}
		return;
	}

	[Token(Token = "0x6004DAD")]
	[Address(RVA = "0x5C17370", Offset = "0x5C16370", VA = "0x5C17370")]
	public void HandleCursorStateChange(CursorState newState)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$HandleCursorStateChange): clean
		Object x;
		GameObject __this_00;
		bool bVar1;

		if ((newState != 0) && (this._emojiPanelActive != false)) {
			x = (Object)this._emojiPanel;
			bVar1 = (x != null);
			if (bVar1) {
				this._emojiPanelActive = false;
				__this_00 = this._emojiPanel;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.SetActive(false);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004DAE")]
	[Address(RVA = "0x5C17400", Offset = "0x5C16400", VA = "0x5C17400")]
	public void MoveCaretToEnd()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$MoveCaretToEnd): clean
		int value;
		TMP_InputField pTVar1;
		String pSVar2;
		TMP_Text pTVar3;
		bool bVar4;

		pTVar1 = this._inputField;
		bVar4 = ((Object)pTVar1 != null);
		if (bVar4) {
			pTVar1 = this._inputField;
			if ((pTVar1 != null) &&(pSVar2 = pTVar1.m_Text, pSVar2 != null)) {
				value = pSVar2._stringLength;
				pTVar1.caretPosition = value;
				pTVar1 = this._inputField;
				if (pTVar1 != null) {
					pTVar1.selectionAnchorPosition = value;
					pTVar1 = this._inputField;
					if (pTVar1 != null) {
						pTVar1.selectionFocusPosition = value;
						pTVar1 = this._inputField;
						if ((pTVar1 != null) &&(pTVar3 = pTVar1.m_TextComponent, pTVar3 != null)) {
							pTVar3.ForceMeshUpdate(false, false);
							pTVar1 = this._inputField;
							if (pTVar1 != null) {
								pTVar1.ActivateInputField();
								pTVar1 = this._inputField;
								if (pTVar1 != null) {
									pTVar1.ForceLabelUpdate();
									Canvas.ForceUpdateCanvases();
									return;
								}
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x6004DAF")]
	[Address(RVA = "0x5C17510", Offset = "0x5C16510", VA = "0x5C17510")]
	public bool ShouldBlockGameInput()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$ShouldBlockGameInput): clean
		TMP_InputField pTVar1;
		bool bVar2;

		if (this._isDestroyed == false) {
			pTVar1 = this._inputField;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._inputField;
				if (pTVar1 == null) {
					throw new NullReferenceException();
				}
				if (pTVar1.m_AllowInput != false) {
					return true;
				}
			}
		}
		if (this._emojiPanelActive == false) {
			return this._isInteractingWithChatUI != false;
		}
		return true;
	}

	[Token(Token = "0x6004DB0")]
	[Address(RVA = "0x5C175B0", Offset = "0x5C165B0", VA = "0x5C175B0")]
	public bool ShouldBlockKeybind(KeyCode keyCode)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$ShouldBlockKeybind): clean
		TMP_InputField pTVar1;
		bool bVar2;

		if (this._isDestroyed == false) {
			pTVar1 = this._inputField;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._inputField;
				if (pTVar1 == null) {
					throw new NullReferenceException();
				}
				if (pTVar1.m_AllowInput != false) goto label_05d1762e;
			}
		}
		if ((this._emojiPanelActive == false) && (this._isInteractingWithChatUI == false)) {
			return false;
		}
	label_05d1762e: ;
		if ((((uint)keyCode < 0x1c) && ((0x8002200U >> (keyCode & 0x1fU) & 1) != 0)) || (keyCode == 0x10f)) {
			return false;
		}
		return true;
	}

	[Token(Token = "0x6004DB1")]
	[Address(RVA = "0x5C10A60", Offset = "0x5C0FA60", VA = "0x5C10A60")]
	public void RefreshPoolSize()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$RefreshPoolSize): 16 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<ChatPanel.ChatLineView> pSVar3;
		UISettings pSVar4;
		IntSetting pSVar5;
		IntSetting pSVar6;
		Il2CppClass pIVar7;
		GameObject __this_00;
		ChatPanel.ChatLineView[] pUVar8;
		bool bVar9;
		int iVar10;
		object pIVar11;
		TMP_FontAsset fontAsset;
		ChatPanel.ChatLineView __this_01;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar12;
		MethodInfo extraout_RDX_01;
		int index;
		int iVar13;
		float fontSize;
		float width;
		byte[] local_60 = new byte[16];
		ChatPanel.ChatLineView local_50;
		byte[] local_48 = new byte[16];
		ChatPanel.ChatLineView local_38;

		pSVar3 = this._linesPool;
		if (pSVar3 != null) {
			iVar13 = pSVar3._size;
			iVar10 = ChatManager.MaxLines;
			pSVar4 = SettingsManager.UISettings;
			if ((((pSVar4 != null) &&(pSVar5 = pSVar4.ChatFontSize, pSVar5 != null)) &&(pSVar6 = pSVar4.ChatWidth, pSVar6 != null)) &&(pSVar3 = this._linesPool, pSVar3 != null)) {
				fontSize = (float)pSVar5._value;
				width = (float)pSVar6._value;
				local_60.GetEnumerator((List<object>)pSVar3);
				local_38 = local_50;
				local_48._0_8_ = local_60._0_8_;
				local_48._8_8_ = local_60._8_8_;
				local_60._0_8_ = null;
				local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_48;
				while (true) {
					pMVar12 = MethodInfo_System_Collections_Generic_List_Enumerator_ChatPanel_ChatLineView_MoveNext;
					bVar9 = local_48.MoveNext();
					if (!(bVar9)) break;
					if (local_38 != null) {
						local_38.ApplyChatMetrics(fontSize, width);
					}
				}
				local_48.Dispose();
				if (iVar10 < iVar13) {
					index = iVar13 + -1;
					do {
						pSVar3 = this._linesPool;
						if (pSVar3 == null) goto label_05d10e64;
						pIVar11 = pSVar3.get_Item(index);
						if (pIVar11 != null) {
							pSVar3 = this._linesPool;
							if ((pSVar3 == null) ||(pIVar11 = pSVar3.get_Item(index), pIVar11 == null)) goto label_05d10e64;
							pIVar7 = pIVar11[0xc].klass;
							bVar9 = ((Object)pIVar7 != null);
							if (bVar9) {
								pSVar3 = this._linesPool;
								if ((pSVar3 == null) ||(pIVar11 = pSVar3.get_Item(index), pIVar11 == null)) goto label_05d10e64;
								pIVar7 = pIVar11[0xc].klass;
								Object.Destroy((Object)pIVar7);
							}
						}
						pSVar3 = this._linesPool;
						if (pSVar3 == null) goto label_05d10e64;
						pSVar3.RemoveAt(index);
						index = index + -1;
					} while (iVar10 <= index);
				}
				else if (iVar13 < iVar10) {
					fontAsset = GisketchTypography.Resolve("text", 400, null);
					iVar13 = iVar10 - iVar13;
					pMVar12 = extraout_RDX;
					do {
						while(true) {
							__this_01 = this.CreateLine((String)**(ulong*)(g_data_07556758 + 0xb8));
							if (__this_01 == null) goto label_05d10e64;
							__this_01.SetFont(fontAsset);
							__this_01.ApplyChatMetrics(fontSize, width);
							__this_00 = __this_01._gameObject_k__BackingField;
							if (__this_00 == null) goto label_05d10e64;
							__this_00.SetActive(false);
							pMVar12 = MethodInfo_System_Collections_Generic_List_ChatPanel_ChatLineView_Add;
							pSVar3 = this._linesPool;
							if (pSVar3 == null) goto label_05d10e64;
							piVar1 = &pSVar3._version;
							*piVar1 = *piVar1 + 1;
							pUVar8 = pSVar3._items;
							if (pUVar8 == null) goto label_05d10e64;
							uVar2 = pSVar3._size;
							if ((uint)pUVar8.Length <= uVar2) break;
							pSVar3._size = uVar2 + 1;
							pUVar8[(int)uVar2] = __this_01;
							iVar13 = iVar13 + -1;
							pMVar12 = extraout_RDX_01;
							if (iVar13 == 0) {
								return;
							}
						}
						pSVar3.AddWithResize((object)__this_01);
						iVar13 = iVar13 + -1;
						pMVar12 = extraout_RDX_00;
					} while (iVar13 != 0);
				}
				return;
			}
		}
	label_05d10e64: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004DB2")]
	[Address(RVA = "0x5C17870", Offset = "0x5C16870", VA = "0x5C17870")]
	public void ApplyLanguageFont()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$ApplyLanguageFont): 2 lines keep C-only constructs
		TMP_InputField pTVar1;
		TMP_Text __this_00;
		TextMeshProUGUI pTVar2;
		List<ChatPanel.ChatLineView> __this_01;
		bool bVar3;
		TMP_FontAsset value;
		String pSVar4;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		if (this._isDestroyed == false) {
			pTVar1 = this._inputField;
			bVar3 = ((Object)pTVar1 == null);
			if (!bVar3) {
				value = GisketchTypography.Resolve("text", 400, null);
				pTVar1 = this._inputField;
				if ((pTVar1 != null) &&(__this_00 = pTVar1.m_TextComponent, __this_00 != null)) {
					__this_00.font = value;
					pTVar2 = this._placeholderText;
					if (pTVar2 != null) {
						pTVar2.font = value;
						pTVar2 = this._placeholderText;
						pSVar4 = UIManager.GetLocale("InGame", "Chat", "Placeholder", "", "");
						if (pTVar2 != null) {
							pTVar2.set_text(pSVar4);
							pTVar2 = this._chatModeLabel;
							if (pTVar2 != null) {
								pTVar2.font = value;
								this.UpdateChatModeLabel();
								local_28 = (byte)&local_48;
								__this_01 = this._linesPool;
								if (__this_01 != null) {
									local_48 = __this_01.GetEnumerator();
									while(true) {
										bVar3 = local_48.MoveNext();
										if (!bVar3) {
											local_48.Dispose();
											if (this._chatHidden == false) {
												this.RefreshPoolSize();
												this.ValidatePMState();
												this.RestorePMPartners();
												this.RefreshDisplayedMessages();
												return;
											}
											return;
										}
										if ((ChatPanel.ChatLineView)local_48._current ==null) break;
										local_48._current.SetFont(value);
									}
									throw new NullReferenceException();
								}
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6004DB3")]
	[Address(RVA = "0x5C17B70", Offset = "0x5C16B70", VA = "0x5C17B70")]
	public bool IsInteractingWithChatUI()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$IsInteractingWithChatUI): clean
		TMP_InputField pTVar1;
		bool bVar2;

		bVar2 = true;
		if (this._isInteractingWithChatUI == false) {
			if (this._isDestroyed == false) {
				pTVar1 = this._inputField;
				bVar2 = ((Object)pTVar1 != null);
				if (bVar2) {
					pTVar1 = this._inputField;
					if (pTVar1 == null) {
						throw new NullReferenceException();
					}
					if (pTVar1.m_AllowInput != false) {
						return true;
					}
				}
			}
			bVar2 = this._emojiPanelActive != false;
		}
		return bVar2;
	}

	[Token(Token = "0x6004DB4")]
	[Address(RVA = "0x5C16120", Offset = "0x5C15120", VA = "0x5C16120")]
	public void SetTextAndPositionCaret(string newText)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$SetTextAndPositionCaret): clean
		int value;
		TMP_InputField pTVar1;
		TMP_Text pTVar2;
		bool bVar3;

		pTVar1 = this._inputField;
		bVar3 = ((Object)pTVar1 != null);
		if (bVar3) {
			pTVar1 = this._inputField;
			if (pTVar1 != null) {
				pTVar1.text = newText;
				pTVar1 = this._inputField;
				if ((pTVar1 != null) &&(pTVar2 = pTVar1.m_TextComponent, pTVar2 != null)) {
					pTVar2.ForceMeshUpdate(false, false);
					if ((newText != null) &&(pTVar1 = this._inputField, pTVar1 != null)) {
						value = newText._stringLength;
						pTVar1.caretPosition = value;
						pTVar1 = this._inputField;
						if (pTVar1 != null) {
							pTVar1.selectionAnchorPosition = value;
							pTVar1 = this._inputField;
							if (pTVar1 != null) {
								pTVar1.selectionFocusPosition = value;
								pTVar1 = this._inputField;
								if (pTVar1 != null) {
									pTVar1.ActivateInputField();
									pTVar1 = this._inputField;
									if (pTVar1 != null) {
										pTVar1.ForceLabelUpdate();
										Canvas.ForceUpdateCanvases();
										return;
									}
								}
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x6004DB5")]
	[Address(RVA = "0x5C16680", Offset = "0x5C15680", VA = "0x5C16680")]
	public void SetTextAndCaretPosition(string newText, int caretPosition)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$SetTextAndCaretPosition): clean
		TMP_InputField pTVar1;
		TMP_Text pTVar2;
		bool bVar3;
		int value;

		pTVar1 = this._inputField;
		bVar3 = ((Object)pTVar1 != null);
		if (bVar3) {
			pTVar1 = this._inputField;
			if (pTVar1 != null) {
				pTVar1.text = newText;
				pTVar1 = this._inputField;
				if ((pTVar1 != null) &&(pTVar2 = pTVar1.m_TextComponent, pTVar2 != null)) {
					pTVar2.ForceMeshUpdate(false, false);
					if (newText != null) {
						value = newText._stringLength;
						if (caretPosition < value) {
							value = caretPosition;
						}
						if (caretPosition < 0) {
							value = 0;
						}
						pTVar1 = this._inputField;
						if (pTVar1 != null) {
							pTVar1.caretPosition = value;
							pTVar1 = this._inputField;
							if (pTVar1 != null) {
								pTVar1.selectionAnchorPosition = value;
								pTVar1 = this._inputField;
								if (pTVar1 != null) {
									pTVar1.selectionFocusPosition = value;
									pTVar1 = this._inputField;
									if (pTVar1 != null) {
										pTVar1.ActivateInputField();
										pTVar1 = this._inputField;
										if (pTVar1 != null) {
											pTVar1.ForceLabelUpdate();
											Canvas.ForceUpdateCanvases();
											return;
										}
									}
								}
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x6004DB6")]
	[Address(RVA = "0x5C13B40", Offset = "0x5C12B40", VA = "0x5C13B40")]
	private RectTransform GetCachedRectTransform(GameObject obj)
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$GetCachedRectTransform): 1 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		RectTransform pUVar3;
		RectTransform local_30;

		local_30 = null;
		bVar2 = ((Object)obj == null);
		pUVar3 = null;
		if (!bVar2) {
			pSVar1 = (Dictionary<object, object>)this._cachedRectTransforms ;
			if (pSVar1 == null) {
	label_05d13c70: ;
				throw new NullReferenceException();
			}
			bVar2 = pSVar1.TryGetValue((object)obj, (object*)&local_30);
			if (!bVar2) {
				if (obj == null) goto label_05d13c70;
				pUVar3 = obj.GetComponent<RectTransform>();
				local_30 = pUVar3;
				bVar2 = ((Object)pUVar3 != null);
				if (bVar2) {
					pSVar1 = (Dictionary<object, object>)this._cachedRectTransforms;
					if (pSVar1 == null) goto label_05d13c70;
					pSVar1.set_Item((object)obj, (object)local_30);
				}
			}
			pUVar3 = local_30;
		}
		return pUVar3;
	}

	[Token(Token = "0x6004DB7")]
	[Address(RVA = "0x5C15DB0", Offset = "0x5C14DB0", VA = "0x5C15DB0")]
	private void SaveCurrentConversation()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$SaveCurrentConversation): clean
		sbyte cVar1;
		TMP_InputField pTVar2;
		Player pPVar3;
		String text;
		bool bVar4;
		int caretPos;
		object arg0;
		String key;
		int local_1c;

		pTVar2 = this._inputField;
		bVar4 = ((Object)pTVar2 == null);
		if (!bVar4) {
			cVar1 = this._inPMMode;
			key = "PUBLIC";
			if (((bool)cVar1 != false) &&(pPVar3 = this._currentPMTarget, pPVar3 != null)) {
				local_1c = pPVar3.actorNumber;
				arg0 = (object)local_1c;
				key = String.Format("PM_{0}", arg0);
				cVar1 = this._inPMMode;
			}
			if (cVar1 == false) {
				pTVar2 = this._inputField;
				if (pTVar2 == null) goto label_05d15f23;
				bVar4 = String.IsNullOrEmpty(pTVar2.m_Text);
				if (bVar4) {
					ChatManager.ClearConversation("PUBLIC");
					return;
				}
			}
			pTVar2 = this._inputField;
			if (pTVar2 == null) {
	label_05d15f23: ;
				throw new NullReferenceException();
			}
			text = pTVar2.m_Text;
			caretPos = pTVar2.caretPosition;
			ChatManager.SaveConversation(key, text, caretPos);
		}
		return;
	}

	[Token(Token = "0x6004DB8")]
	[Address(RVA = "0x5C11100", Offset = "0x5C10100", VA = "0x5C11100")]
	private void RestorePMPartners()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$RestorePMPartners): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int iVar3;
		List<int> pSVar4;
		List<Player> pSVar5;
		Player[] pPVar6;
		bool bVar7;
		int item;
		int item_00;
		HashSet<int> __this_00;
		GameManagers_ChatManager_StaticFields pGVar8;
		Player pPVar9;
		ChatPanel.c__DisplayClass137_0 __this_01;
		Room pPVar10;
		Predicate<T> match;
		int index;
		byte[] local_68 = new byte[8];
		object local_58;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		__this_00 = new HashSet<int>();
		index = 0;
		while(true) {
			pGVar8 = typeof(ChatManager).static_fields;
			if (pGVar8.RawMessages == null) goto label_05d113bd;
			if (pGVar8.RawMessages._size <= index) break;
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				pGVar8 = typeof(ChatManager).static_fields;
			}
			if (pGVar8.PrivateFlags == null) goto label_05d113bd;
			bVar7 = (pGVar8.PrivateFlags).get_Item(index);
			if (bVar7) {
				pSVar4 = ChatManager.SenderIDs;
				if (pSVar4 == null) goto label_05d113bd;
				item = pSVar4.get_Item(index);
				pSVar4 = ChatManager.PMPartnerIDs;
				if (pSVar4 == null) goto label_05d113bd;
				item_00 = pSVar4.get_Item(index);
				pPVar9 = PhotonNetwork.LocalPlayer;
				if (pPVar9 == null) goto label_05d113bd;
				if (item != pPVar9.actorNumber) {
					if (__this_00 == null) goto label_05d113bd;
					__this_00.Add(item) ;
				}
				pPVar9 = PhotonNetwork.LocalPlayer;
				if (pPVar9 == null) goto label_05d113bd;
				if (item_00 != pPVar9.actorNumber) {
					if (__this_00 == null) goto label_05d113bd;
					__this_00.Add(item_00);
				}
			}
			index = index + 1;
		}
		if (__this_00 != null) {
			local_48.GetEnumerator(__this_00);
			local_58 = local_38;
			local_68 = (byte[])local_48._0_8_;
			local_48._0_8_ = null;
			local_48._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_68;
			goto label_05d11430;
		}
		goto label_05d113bd;
	label_05d11430: ;
		bVar7 = local_68.MoveNext();
		if (bVar7) {
			__this_01 = new ChatPanel.c__DisplayClass137_0();
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			__this_01.partnerID = (int32_t)local_58;
			pPVar10 = PhotonNetwork.CurrentRoom;
			if (pPVar10 == null) {
				throw new NullReferenceException();
			}
			pPVar9 = pPVar10.GetPlayer(__this_01.partnerID, false);
			if (pPVar9 != null) {
				pSVar5 = this._pmPartners;
				match = new Predicate<Player>((object)__this_01, (intptr_t)MethodInfo_UI_ChatPanel_c__DisplayClass137_0_RestorePMPartners_b__0);
				if (pSVar5 == null) {
					throw new NullReferenceException();
				}
				bVar7 = pSVar5.Exists(match);
				if (!bVar7) {
					pSVar5 = this._pmPartners;
					if (pSVar5 != null) {
						piVar1 = &pSVar5._version;
						*piVar1 = *piVar1 + 1;
						pPVar6 = pSVar5._items;
						if (pPVar6 != null) {
							uVar2 = pSVar5._size;
							if (uVar2 < (uint)pPVar6.Length) {
								pSVar5._size = uVar2 + 1;
								pPVar6[(int)uVar2] = pPVar9;
							}
							else {
								pSVar5.AddWithResize((object)pPVar9);
							}
							goto label_05d11430;
						}
					}
					throw new NullReferenceException();
				}
			}
			goto label_05d11430;
		}
		local_68.Dispose();
		pSVar5 = this._pmPartners;
		if (pSVar5 != null) {
			iVar3 = pSVar5._size;
			if (0 < iVar3) {
				this._currentPMIndex = iVar3 + -1;
			}
			this.UpdateChatModeElements();
			return;
		}
	label_05d113bd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004DB9")]
	[Address(RVA = "0x5C17C10", Offset = "0x5C16C10", VA = "0x5C17C10")]
	public ChatPanel()
	{
		// Lifted from source/cpp/UI/ChatPanel.c (UI.ChatPanel$$.ctor): 1 lines keep C-only constructs
		List<ChatPanel.ChatLineView> pSVar1;
		List<ChatManager.ChatDisplayLine> pSVar2;
		List<Player> __this_00;
		Dictionary<GameObject, RectTransform> __this_01;

		pSVar1 = new List<ChatPanel.ChatLineView>();
		this._linesPool = pSVar1;
		pSVar2 = new List<ChatManager.ChatDisplayLine>();
		this._visibleMessages = pSVar2;
		pSVar2 = new List<ChatManager.ChatDisplayLine>();
		this._suggestionLines = pSVar2;
		pSVar1 = new List<ChatPanel.ChatLineView>();
		this._poolRotationBuffer = pSVar1;
		__this_00 = new List<Player>();
		this._pmPartners = __this_00;
		this._currentPMIndex = -1;
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<GameObject, RectTransform>));
		__this_01 = new Dictionary<object, object>();
		this._cachedRectTransforms = __this_01;
		this._stickerTag = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this._lastStickerSentTime = -INFINITY;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ChatPanel.c.

	// UI.ChatPanel.<>c__DisplayClass59_0$$.ctor: clean
	private void c__DisplayClass59_0__ctor()
	{
		base();
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass61_0$$.ctor: clean
	private void c__DisplayClass61_0__ctor()
	{
		base();
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass70_0$$.ctor: clean
	private void c__DisplayClass70_0__ctor()
	{
		base();
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass72_0$$.ctor: clean
	private void c__DisplayClass72_0__ctor()
	{
		base();
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass113_0$$.ctor: clean
	private void c__DisplayClass113_0__ctor()
	{
		base();
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass115_0$$.ctor: clean
	private void c__DisplayClass115_0__ctor()
	{
		base();
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass120_0$$.ctor: clean
	private void c__DisplayClass120_0__ctor()
	{
		base();
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass121_0$$.ctor: clean
	private void c__DisplayClass121_0__ctor()
	{
		base();
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass122_0$$.ctor: clean
	private void c__DisplayClass122_0__ctor()
	{
		base();
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass137_0$$.ctor: clean
	private void c__DisplayClass137_0__ctor()
	{
		base();
		return;
	}

	// UI.ChatPanel.UIAnchors$$.cctor: clean
	private static void UIAnchors__cctor()
	{
		ChatPanel.UIAnchors pUVar1;
		Vector2 pUVar2;

		(ChatPanel.UIAnchors.TopStretch) =(Vector2)0x3f80000000000000;
		pUVar1 = typeof(ChatPanel.UIAnchors);
		(ChatPanel.UIAnchors.TopStretchEnd) =(Vector2)0x3f8000003f800000;
		if (Il2CppMethodInitialized_07542885 == false) {
			Il2CppMethodInitialized_07542885 = true;
			pUVar1 = typeof(ChatPanel.UIAnchors);
		}
		pUVar2 = typeof(Vector2);
		(pUVar1.static_fields.FullStretch) =(Vector2.oneVector);
		if (Il2CppMethodInitialized_0753ecc8 == false) {
			Il2CppMethodInitialized_0753ecc8 = true;
			pUVar1 = typeof(ChatPanel.UIAnchors);
			pUVar2 = typeof(Vector2);
		}
		(pUVar1.static_fields.FullStretchStart) = (pUVar2.static_fields.zeroVector);
		(pUVar1.static_fields.RightStretch) = (Vector2)0x3f800000;
		(pUVar1.static_fields.RightStretchEnd) = (Vector2)0x3f8000003f800000;
		(pUVar1.static_fields.CenterMiddle) = (Vector2)0x3f0000003f000000;
		(pUVar1.static_fields.TopCenter) = (Vector2)0x3f8000003f000000;
		(pUVar1.static_fields.RightCenter) = (Vector2)0x3f0000003f800000;
		(pUVar1.static_fields.LeftCenter) = (Vector2)0x0;
		(pUVar1.static_fields.BottomLeft) = (pUVar2.static_fields.zeroVector);
		if (Il2CppMethodInitialized_07542885 == false) {
			Il2CppMethodInitialized_07542885 = true;
			pUVar1 = typeof(ChatPanel.UIAnchors);
			pUVar2 = typeof(Vector2);
		}
		(pUVar1.static_fields.TopRight) = (pUVar2.static_fields.oneVector);
		return;
	}

	// UI.ChatPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new ChatPanel.c();
		ChatPanel.c.__9 = (ChatPanel.c)__this;
		return;
	}

	// UI.ChatPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.ChatPanel.<>c$$<Setup>b__61_3: clean
	private ushort c__Setup_b__61_3(String text, int charIndex, ushort addedChar)
	{
		if ((addedChar < 0x1c) && ((0x8002400U >> (addedChar & 0x1f) & 1) != 0)) {
			addedChar = 0;
		}
		return addedChar;
	}

	// UI.ChatPanel.<>c$$<OnNotificationBadgeClicked>b__66_0: clean
	private bool c__OnNotificationBadgeClicked_b__66_0(Player p)
	{
		bool bVar1;

		if (p == null) {
			throw new NullReferenceException();
		}
		if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
			return bVar1;
		}
		return bVar1;
	}

	// UI.ChatPanel.<>c$$<ValidatePMState>b__116_0: clean
	private bool c__ValidatePMState_b__116_0(Player p)
	{
		Dictionary<int, object> __this_00;
		bool bVar1;
		Room pPVar2;

		if (p == null) {
			return true;
		}
		pPVar2 = PhotonNetwork.CurrentRoom;
		if ((pPVar2 == null) ||(__this_00 = (Dictionary<int, object>)pPVar2.players, __this_00 == null)) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.ContainsValue((object)p);
		return !bVar1;
	}

	// UI.ChatPanel.<>c__DisplayClass113_0$$<EnterPMMode>b__0: clean
	private bool c__DisplayClass113_0__EnterPMMode_b__0(Player p)
	{
		Player pPVar1;

		if ((p == null) ||(pPVar1 = this.target, pPVar1 == null)) {
			throw new NullReferenceException();
		}
		return p.actorNumber == pPVar1.actorNumber;
	}

	// UI.ChatPanel.<>c__DisplayClass115_0$$<RemovePMPartner>b__0: clean
	private bool c__DisplayClass115_0__RemovePMPartner_b__0(Player p)
	{
		Player pPVar1;

		if ((p == null) ||(pPVar1 = this.player, pPVar1 == null)) {
			throw new NullReferenceException();
		}
		return p.actorNumber == pPVar1.actorNumber;
	}

	// UI.ChatPanel.<>c__DisplayClass120_0$$<CycleToPMPartner>b__0: clean
	private bool c__DisplayClass120_0__CycleToPMPartner_b__0(Player p)
	{
		ChatPanel pUVar1;
		Player pPVar2;

		if (((p == null) ||(pUVar1 = this.__4__this, pUVar1 == null)) ||(pPVar2 = pUVar1._currentPMTarget, pPVar2 == null)) {
			throw new NullReferenceException();
		}
		return p.actorNumber == pPVar2.actorNumber;
	}

	// UI.ChatPanel.<>c__DisplayClass120_0$$<CycleToPMPartner>b__1: clean
	private bool c__DisplayClass120_0__CycleToPMPartner_b__1(Player p)
	{
		ChatPanel pUVar1;
		Player pPVar2;

		if (((p == null) ||(pUVar1 = this.__4__this, pUVar1 == null)) ||(pPVar2 = pUVar1._currentPMTarget, pPVar2 == null)) {
			throw new NullReferenceException();
		}
		return p.actorNumber == pPVar2.actorNumber;
	}

	// UI.ChatPanel.<>c__DisplayClass120_0$$<CycleToPMPartner>b__2: clean
	private bool c__DisplayClass120_0__CycleToPMPartner_b__2(Player p2)
	{
		int iVar1;
		ChatPanel pUVar2;
		List<Player> __this_00;
		Player pPVar3;

		if (((p2 != null) &&(pUVar2 = this.__4__this, pUVar2 != null)) &&(__this_00 = pUVar2._pmPartners, __this_00 != null) ) {
			iVar1 = p2.actorNumber;
			pPVar3 = __this_00.get_Item(this.currentIndexInRecency);
			if (pPVar3 != null) {
				return iVar1 == pPVar3.actorNumber;
			}
		}
		throw new NullReferenceException();
	}

	// UI.ChatPanel.<>c__DisplayClass121_0$$<GetPmPartnersByRecency>b__0: clean
	private bool c__DisplayClass121_0__GetPmPartnersByRecency_b__0(Player r)
	{
		Player pPVar1;

		if ((r == null) ||(pPVar1 = this.p, pPVar1 == null)) {
			throw new NullReferenceException();
		}
		return r.actorNumber == pPVar1.actorNumber;
	}

	// UI.ChatPanel.<>c__DisplayClass122_0$$<AddPMPartner>b__0: clean
	private bool c__DisplayClass122_0__AddPMPartner_b__0(Player p)
	{
		Player pPVar1;

		if ((p == null) ||(pPVar1 = this.player, pPVar1 == null)) {
			throw new NullReferenceException();
		}
		return p.actorNumber == pPVar1.actorNumber;
	}

	// UI.ChatPanel.<>c__DisplayClass137_0$$<RestorePMPartners>b__0: clean
	private bool c__DisplayClass137_0__RestorePMPartners_b__0(Player p)
	{
		if (p == null) {
			throw new NullReferenceException();
		}
		return p.actorNumber == this.partnerID;
	}

	// UI.ChatPanel.<>c__DisplayClass59_0$$<ProcessEmojiCodes>b__0: 2 lines keep C-only constructs
	private String c__DisplayClass59_0__ProcessEmojiCodes_b__0(Match match)
	{
		Dictionary<object, int> __this_00;
		bool bVar1;
		GroupCollection __this_01;
		Group __this_02;
		String __this_03;
		String pSVar2;
		object arg0;
		String* ppSVar3;
		int iStack_2c;
		int iStack_28;
		int iStack_24;

		iStack_24 = 0;
		iStack_28 = 0;
		if ((((match == null) ||(__this_01 = match.get_Groups(), __this_01 == null)) ||(__this_02 = __this_01.get_Item(1), __this_02 == null)) ||(__this_03 = __this_02.Value, pSVar2 = "s\xe2\x80\x8b\xe2\x80\x8b", __this_03 == null)) {
	label_05d198f4: ;
			throw new NullReferenceException();
		}
		bVar1 = __this_03.StartsWith("s\xe2\x80\x8b\xe2\x80\x8b");
		if (bVar1) {
			if (this.stickerFound != false) {
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if (pSVar2 == null) goto label_05d198f4;
			pSVar2 = __this_03.Substring(pSVar2._stringLength);
			bVar1 = Int32.TryParse(pSVar2, ref iStack_28);
			if (((!bVar1) || (iStack_28 < 0)) || (0x8c < iStack_28)) {
	label_05d198de: ;
				pSVar2 = match.Value;
				return pSVar2;
			}
			this.stickerFound = true;
			iStack_2c = iStack_28;
			arg0 = (object)iStack_2c;
			ppSVar3 = &"\n<size=60><sprite={0}></size>";
		}
		else {
			pSVar2 = __this_03.ToLower();
			__this_00 = (Dictionary<object, int>)ChatPanel.EmojiNameToIndex;
			if (__this_00 == null) goto label_05d198f4;
			bVar1 = __this_00.TryGetValue((object)pSVar2, ref iStack_24);
			if (!bVar1) goto label_05d198de;
			iStack_2c = iStack_24;
			arg0 = (object)iStack_2c;
			ppSVar3 = &"<sprite={0}>";
		}
		pSVar2 = String.Format(*ppSVar3, arg0);
		return pSVar2;
	}

	// UI.ChatPanel.<>c__DisplayClass61_0$$<Setup>b__0: clean
	private void c__DisplayClass61_0__Setup_b__0(String value)
	{
		TextMeshProUGUI pTVar1;

		pTVar1 = this.tmpText;
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		GisketchTypography.ForText(value, pTVar1.m_fontAsset);
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass61_0$$<Setup>b__1: clean
	private void c__DisplayClass61_0__Setup_b__1(BaseEventData data)
	{
		ChatScrollRect pUVar1;
		Image pUVar2;
		bool bVar3;

		pUVar1 = this.scrollRect;
		if (pUVar1 != null) {
			pUVar1.isMouseOver = true;
			pUVar2 = pUVar1.handleImage;
			bVar3 = ((Object)pUVar2 != null);
			if (!bVar3) {
				return;
			}
			pUVar2 = pUVar1.handleImage;
			bVar3 = true;
			if (pUVar1.isMouseOver == false) {
				bVar3 = pUVar1.isDragging != false;
			}
			if (pUVar2 != null) {
				pUVar2.enabled = bVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.ChatPanel.<>c__DisplayClass61_0$$<Setup>b__2: clean
	private void c__DisplayClass61_0__Setup_b__2(BaseEventData data)
	{
		ChatScrollRect pUVar1;
		Image pUVar2;
		bool bVar3;

		pUVar1 = this.scrollRect;
		if (pUVar1 != null) {
			pUVar1.isMouseOver = false;
			pUVar2 = pUVar1.handleImage;
			bVar3 = ((Object)pUVar2 != null);
			if ((!bVar3) || (pUVar1.isDragging != false)) {
				return;
			}
			pUVar2 = pUVar1.handleImage;
			if (pUVar2 != null) {
				pUVar2.enabled = false;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.ChatPanel.<>c__DisplayClass70_0$$<CreateEmojiPanel>b__0: clean
	private void c__DisplayClass70_0__CreateEmojiPanel_b__0()
	{
		ChatPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetPanelMode(0);
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass70_0$$<CreateEmojiPanel>b__1: clean
	private void c__DisplayClass70_0__CreateEmojiPanel_b__1()
	{
		ChatPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetPanelMode(1);
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass70_0$$<CreateEmojiPanel>b__2: 1 lines keep C-only constructs
	private void c__DisplayClass70_0__CreateEmojiPanel_b__2()
	{
		ChatPanel __this_00;
		TextMeshProUGUI tooltipText;
		uint uVar1;
		int iVar2;
		MethodInfo method_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		uVar1 = __this_00._emojiPage - 1;
		method_00 = (MethodInfo)&g_data_00000008;
		if ((int)uVar1 < 8) {
			method_00 = (MethodInfo)(ulong)uVar1;
		}
		iVar2 = 0;
		if (0 < (int)method_00) {
			iVar2 = (int)method_00;
		}
		tooltipText = this.tooltipText;
		__this_00._emojiPage = iVar2;
		__this_00.AddEmojiButtons(tooltipText);
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass70_0$$<CreateEmojiPanel>b__3: 1 lines keep C-only constructs
	private void c__DisplayClass70_0__CreateEmojiPanel_b__3()
	{
		ChatPanel __this_00;
		TextMeshProUGUI tooltipText;
		uint uVar1;
		int iVar2;
		MethodInfo method_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		uVar1 = __this_00._emojiPage + 1;
		method_00 = (MethodInfo)&g_data_00000008;
		if ((int)uVar1 < 8) {
			method_00 = (MethodInfo)(ulong)uVar1;
		}
		iVar2 = 0;
		if (0 < (int)method_00) {
			iVar2 = (int)method_00;
		}
		tooltipText = this.tooltipText;
		__this_00._emojiPage = iVar2;
		__this_00.AddEmojiButtons(tooltipText);
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass72_0$$<CreateSpriteButton>b__0: clean
	private void c__DisplayClass72_0__CreateSpriteButton_b__0()
	{
		ChatPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.InsertSticker(this.spriteIndex);
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass72_0$$<CreateSpriteButton>b__1: clean
	private void c__DisplayClass72_0__CreateSpriteButton_b__1()
	{
		ChatPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.InsertEmoji(this.spriteIndex);
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass72_0$$<CreateSpriteButton>b__2: clean
	private void c__DisplayClass72_0__CreateSpriteButton_b__2(BaseEventData data)
	{
		TextMeshProUGUI pTVar1;
		object arg0;
		String pSVar2;
		byte[] auStack_14 = new byte[4];

		pTVar1 = this.tooltipText;
		arg0 = (object)auStack_14;
		pSVar2 = String.Format(":{0}:", arg0);
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		pTVar1.set_text(pSVar2) ;
		return;
	}

	// UI.ChatPanel.<>c__DisplayClass72_0$$<CreateSpriteButton>b__3: clean
	private void c__DisplayClass72_0__CreateSpriteButton_b__3(BaseEventData data)
	{
		TextMeshProUGUI pTVar1;

		pTVar1 = this.tooltipText;
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		pTVar1.set_text("");
		return;
	}
}
