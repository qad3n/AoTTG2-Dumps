// ==================== AoTTG2 cross-reference ====================
// Type: UI.ChatPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ChatPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ChatPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
				return null;
			}
			[Token(Token = "0x6004DBC")]
			[Address(RVA = "0x5C17FD0", Offset = "0x5C16FD0", VA = "0x5C17FD0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000D78")]
		public Transform transform
		{
			[Token(Token = "0x6004DBD")]
			[Address(RVA = "0x5C17FF0", Offset = "0x5C16FF0", VA = "0x5C17FF0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D79")]
		public RectTransform RectTransform
		{
			[Token(Token = "0x6004DBE")]
			[Address(RVA = "0x5C18010", Offset = "0x5C17010", VA = "0x5C18010")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D7A")]
		public float Height
		{
			[Token(Token = "0x6004DBF")]
			[Address(RVA = "0x5C18020", Offset = "0x5C17020", VA = "0x5C18020")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x6004DC0")]
		[Address(RVA = "0x5C14DD0", Offset = "0x5C13DD0", VA = "0x5C14DD0")]
		public ChatLineView(Transform parent, ElementStyle style, TMP_InputField chatInput, ChatPanel chatPanel)
		{
		}

		[Token(Token = "0x6004DC1")]
		[Address(RVA = "0x5C17660", Offset = "0x5C16660", VA = "0x5C17660")]
		public void ApplyChatMetrics(float fontSize, float width)
		{
		}

		[Token(Token = "0x6004DC2")]
		[Address(RVA = "0x5C177B0", Offset = "0x5C167B0", VA = "0x5C177B0")]
		public void SetFont(TMP_FontAsset fontAsset)
		{
		}

		[Token(Token = "0x6004DC3")]
		[Address(RVA = "0x5C159A0", Offset = "0x5C149A0", VA = "0x5C159A0")]
		public void InvalidatePlayerStyle(int actorNumber)
		{
		}

		[Token(Token = "0x6004DC4")]
		[Address(RVA = "0x5C12C50", Offset = "0x5C11C50", VA = "0x5C12C50")]
		public void SetLine(ChatManager.ChatDisplayLine line)
		{
		}

		[Token(Token = "0x6004DC5")]
		[Address(RVA = "0x5C183C0", Offset = "0x5C173C0", VA = "0x5C183C0")]
		private void SetDisplayText(string text)
		{
		}

		[Token(Token = "0x6004DC6")]
		[Address(RVA = "0x5C131E0", Offset = "0x5C121E0", VA = "0x5C131E0")]
		public bool Shows(ChatManager.ChatDisplayLine line)
		{
			return default(bool);
		}

		[Token(Token = "0x6004DC7")]
		[Address(RVA = "0x5C185B0", Offset = "0x5C175B0", VA = "0x5C185B0")]
		private void RememberLine(ChatManager.ChatDisplayLine line)
		{
		}

		[Token(Token = "0x6004DC8")]
		[Address(RVA = "0x5C18D10", Offset = "0x5C17D10", VA = "0x5C18D10")]
		private static bool DisplayLinesEqual(ChatManager.ChatDisplayLine a, ChatManager.ChatDisplayLine b)
		{
			return default(bool);
		}

		[Token(Token = "0x6004DC9")]
		[Address(RVA = "0x5C18DC0", Offset = "0x5C17DC0", VA = "0x5C18DC0")]
		public void HandlePointerClick(PointerEventData eventData)
		{
		}

		[Token(Token = "0x6004DCA")]
		[Address(RVA = "0x5C18050", Offset = "0x5C17050", VA = "0x5C18050")]
		private static void ConfigureText(TextMeshProUGUI text, float fontSize, Color color, bool richText, bool wordWrap)
		{
		}

		[Token(Token = "0x6004DCB")]
		[Address(RVA = "0x5C18030", Offset = "0x5C17030", VA = "0x5C18030")]
		private float BaseLineHeight()
		{
			return default(float);
		}

		[Token(Token = "0x6004DCC")]
		[Address(RVA = "0x5C18230", Offset = "0x5C17230", VA = "0x5C18230")]
		private void SetRowHeight(float height)
		{
		}

		[Token(Token = "0x6004DCD")]
		[Address(RVA = "0x5C184D0", Offset = "0x5C174D0", VA = "0x5C184D0")]
		private void UpdateRowHeight(string content)
		{
		}

		[Token(Token = "0x6004DCE")]
		[Address(RVA = "0x5C18760", Offset = "0x5C17760", VA = "0x5C18760")]
		private float MeasureDisplayNameWidth(string senderName)
		{
			return default(float);
		}

		[Token(Token = "0x6004DCF")]
		[Address(RVA = "0x5C18600", Offset = "0x5C17600", VA = "0x5C18600")]
		private float ApplyPlayerStyle(Player player, TMP_FontAsset font, string senderName, ChatDisplayNameRange nameRange)
		{
			return default(float);
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
		}

		[Token(Token = "0x6004DD1")]
		[Address(RVA = "0x5C19330", Offset = "0x5C18330", VA = "0x5C19330", Slot = "4")]
		public void OnPointerClick(PointerEventData eventData)
		{
		}

		[Token(Token = "0x6004DD2")]
		[Address(RVA = "0x5C19350", Offset = "0x5C18350", VA = "0x5C19350", Slot = "5")]
		public void OnScroll(PointerEventData eventData)
		{
		}

		[Token(Token = "0x6004DD3")]
		[Address(RVA = "0x5C193F0", Offset = "0x5C183F0", VA = "0x5C193F0")]
		public ChatLineClickHandler()
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x6004DF7")]
		[Address(RVA = "0x5C16B50", Offset = "0x5C15B50", VA = "0x5C16B50")]
		[DebuggerHidden]
		public _003CResetPMToggleActive_003Ed__118(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004DF8")]
		[Address(RVA = "0x5C19D80", Offset = "0x5C18D80", VA = "0x5C19D80", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004DF9")]
		[Address(RVA = "0x5C19D90", Offset = "0x5C18D90", VA = "0x5C19D90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004DFB")]
		[Address(RVA = "0x5C19E40", Offset = "0x5C18E40", VA = "0x5C19E40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x6004DFD")]
		[Address(RVA = "0x5C101F0", Offset = "0x5C0F1F0", VA = "0x5C101F0")]
		[DebuggerHidden]
		public _003CShowTemporaryTooltip_003Ed__73(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004DFE")]
		[Address(RVA = "0x5C19E90", Offset = "0x5C18E90", VA = "0x5C19E90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004DFF")]
		[Address(RVA = "0x5C19EA0", Offset = "0x5C18EA0", VA = "0x5C19EA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004E01")]
		[Address(RVA = "0x5C1A080", Offset = "0x5C19080", VA = "0x5C1A080", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
			return default(int);
		}
	}

	[Token(Token = "0x17000D76")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004D6B")]
		[Address(RVA = "0x5C08AA0", Offset = "0x5C07AA0", VA = "0x5C08AA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004D6C")]
	[Address(RVA = "0x5C08AD0", Offset = "0x5C07AD0", VA = "0x5C08AD0")]
	static ChatPanel()
	{
	}

	[Token(Token = "0x6004D6D")]
	[Address(RVA = "0x5C08C80", Offset = "0x5C07C80", VA = "0x5C08C80")]
	private string ProcessEmojiCodes(string text)
	{
		return null;
	}

	[Token(Token = "0x6004D6E")]
	[Address(RVA = "0x5C08D80", Offset = "0x5C07D80", VA = "0x5C08D80", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004D6F")]
	[Address(RVA = "0x5C0B410", Offset = "0x5C0A410", VA = "0x5C0B410")]
	private void SetupChatModeLabel()
	{
	}

	[Token(Token = "0x6004D70")]
	[Address(RVA = "0x5C0CD70", Offset = "0x5C0BD70", VA = "0x5C0CD70")]
	private void UpdateChatModeElements()
	{
	}

	[Token(Token = "0x6004D71")]
	[Address(RVA = "0x5C0CB60", Offset = "0x5C0BB60", VA = "0x5C0CB60")]
	private void UpdateChatModeLabel()
	{
	}

	[Token(Token = "0x6004D72")]
	[Address(RVA = "0x5C0B7B0", Offset = "0x5C0A7B0", VA = "0x5C0B7B0")]
	private void SetupNotificationBadge()
	{
	}

	[Token(Token = "0x6004D73")]
	[Address(RVA = "0x5C0D330", Offset = "0x5C0C330", VA = "0x5C0D330")]
	private void OnNotificationBadgeClicked()
	{
	}

	[Token(Token = "0x6004D74")]
	[Address(RVA = "0x5C0D100", Offset = "0x5C0C100", VA = "0x5C0D100")]
	private static Sprite GetCircleSprite()
	{
		return null;
	}

	[Token(Token = "0x6004D75")]
	[Address(RVA = "0x5C0C050", Offset = "0x5C0B050", VA = "0x5C0C050")]
	private void SetupEmojiButton()
	{
	}

	[Token(Token = "0x6004D76")]
	[Address(RVA = "0x5C0D720", Offset = "0x5C0C720", VA = "0x5C0D720")]
	private void ToggleEmojiPanel()
	{
	}

	[Token(Token = "0x6004D77")]
	[Address(RVA = "0x5C0D8A0", Offset = "0x5C0C8A0", VA = "0x5C0D8A0")]
	private void CreateEmojiPanel()
	{
	}

	[Token(Token = "0x6004D78")]
	[Address(RVA = "0x5C0F100", Offset = "0x5C0E100", VA = "0x5C0F100")]
	private void AddEmojiButtons(TextMeshProUGUI tooltipText)
	{
	}

	[Token(Token = "0x6004D79")]
	[Address(RVA = "0x5C0F7E0", Offset = "0x5C0E7E0", VA = "0x5C0F7E0")]
	private void CreateSpriteButton(GridLayoutGroup emojiGrid, TextMeshProUGUI tooltipText, int spriteIndex, bool isSticker)
	{
	}

	[Token(Token = "0x6004D7A")]
	[Address(RVA = "0x5C10160", Offset = "0x5C0F160", VA = "0x5C10160")]
	[IteratorStateMachine(typeof(_003CShowTemporaryTooltip_003Ed__73))]
	private IEnumerator ShowTemporaryTooltip(TextMeshProUGUI tooltip, string message, float duration)
	{
		return null;
	}

	[Token(Token = "0x6004D7B")]
	[Address(RVA = "0x5C10210", Offset = "0x5C0F210", VA = "0x5C10210")]
	private void ChangeEmojiPage(int delta, TextMeshProUGUI tooltipText)
	{
	}

	[Token(Token = "0x6004D7C")]
	[Address(RVA = "0x5C0F600", Offset = "0x5C0E600", VA = "0x5C0F600")]
	private void SetPanelMode(EmojiPanelMode mode)
	{
	}

	[Token(Token = "0x6004D7D")]
	[Address(RVA = "0x5C10240", Offset = "0x5C0F240", VA = "0x5C10240")]
	private void InsertSticker(int spriteIndex)
	{
	}

	[Token(Token = "0x6004D7E")]
	[Address(RVA = "0x5C10900", Offset = "0x5C0F900", VA = "0x5C10900")]
	private void InsertEmoji(int spriteIndex)
	{
	}

	[Token(Token = "0x6004D7F")]
	[Address(RVA = "0x5C0C820", Offset = "0x5C0B820", VA = "0x5C0C820")]
	public void Sync()
	{
	}

	[Token(Token = "0x6004D80")]
	[Address(RVA = "0x5C11650", Offset = "0x5C10650", VA = "0x5C11650")]
	private void RefreshDisplayedMessages()
	{
	}

	[Token(Token = "0x6004D81")]
	[Address(RVA = "0x5C11CC0", Offset = "0x5C10CC0", VA = "0x5C11CC0")]
	private bool IsPMWithCurrentTarget(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6004D82")]
	[Address(RVA = "0x5C11BB0", Offset = "0x5C10BB0", VA = "0x5C11BB0")]
	private static bool IsPublicLine(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6004D83")]
	[Address(RVA = "0x5C11E20", Offset = "0x5C10E20", VA = "0x5C11E20")]
	private void UpdateVisibleMessages()
	{
	}

	[Token(Token = "0x6004D84")]
	[Address(RVA = "0x5C12A80", Offset = "0x5C11A80", VA = "0x5C12A80")]
	private void AlignPoolTo(ChatManager.ChatDisplayLine firstLine)
	{
	}

	[Token(Token = "0x6004D85")]
	[Address(RVA = "0x5C132F0", Offset = "0x5C122F0", VA = "0x5C132F0")]
	private void RotatePool(int offset)
	{
	}

	[Token(Token = "0x6004D86")]
	[Address(RVA = "0x5C0B310", Offset = "0x5C0A310", VA = "0x5C0B310")]
	private void ConfigureManualLineLayout()
	{
	}

	[Token(Token = "0x6004D87")]
	[Address(RVA = "0x5C124E0", Offset = "0x5C114E0", VA = "0x5C124E0")]
	private void LayoutVisibleRows()
	{
	}

	[Token(Token = "0x6004D88")]
	[Address(RVA = "0x5C12920", Offset = "0x5C11920", VA = "0x5C12920")]
	private void UpdateBackgroundVisibility(bool hasMessages)
	{
	}

	[Token(Token = "0x6004D89")]
	[Address(RVA = "0x5C0D560", Offset = "0x5C0C560", VA = "0x5C0D560")]
	public void Activate()
	{
	}

	[Token(Token = "0x6004D8A")]
	[Address(RVA = "0x5C0D4E0", Offset = "0x5C0C4E0", VA = "0x5C0D4E0")]
	public bool IsInputActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6004D8B")]
	[Address(RVA = "0x5C13600", Offset = "0x5C12600", VA = "0x5C13600")]
	public void OnEndEdit(string text)
	{
	}

	[Token(Token = "0x6004D8C")]
	[Address(RVA = "0x5C13C80", Offset = "0x5C12C80", VA = "0x5C13C80")]
	private void OnSubmit(string text)
	{
	}

	[Token(Token = "0x6004D8D")]
	[Address(RVA = "0x5C10690", Offset = "0x5C0F690", VA = "0x5C10690")]
	private void SubmitProcessedInput()
	{
	}

	[Token(Token = "0x6004D8E")]
	[Address(RVA = "0x5C13D00", Offset = "0x5C12D00", VA = "0x5C13D00")]
	public void AddLine(string line)
	{
	}

	[Token(Token = "0x6004D8F")]
	[Address(RVA = "0x5C13D10", Offset = "0x5C12D10", VA = "0x5C13D10")]
	public void ReplaceLastLine(string line)
	{
	}

	[Token(Token = "0x6004D90")]
	[Address(RVA = "0x5C13D20", Offset = "0x5C12D20", VA = "0x5C13D20")]
	public void AddLines(List<string> lines)
	{
	}

	[Token(Token = "0x6004D91")]
	[Address(RVA = "0x5C13E60", Offset = "0x5C12E60", VA = "0x5C13E60")]
	private void HandleKeys()
	{
	}

	[Token(Token = "0x6004D92")]
	[Address(RVA = "0x5C14500", Offset = "0x5C13500", VA = "0x5C14500")]
	private void Update()
	{
	}

	[Token(Token = "0x6004D93")]
	[Address(RVA = "0x5C14710", Offset = "0x5C13710", VA = "0x5C14710")]
	private void ToggleChatVisibility()
	{
	}

	[Token(Token = "0x6004D94")]
	[Address(RVA = "0x5C0C850", Offset = "0x5C0B850", VA = "0x5C0C850")]
	private void SetChatHiddenState(bool hidden, bool saveSetting = true)
	{
	}

	[Token(Token = "0x6004D95")]
	[Address(RVA = "0x5C147D0", Offset = "0x5C137D0", VA = "0x5C147D0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6004D96")]
	[Address(RVA = "0x5C134C0", Offset = "0x5C124C0", VA = "0x5C134C0")]
	private void UpdatePlaceholderVisibility(bool isChatActive)
	{
	}

	[Token(Token = "0x6004D97")]
	[Address(RVA = "0x5C14920", Offset = "0x5C13920", VA = "0x5C14920")]
	public bool IsPointerOverChatUI()
	{
		return default(bool);
	}

	[Token(Token = "0x6004D98")]
	[Address(RVA = "0x5C137E0", Offset = "0x5C127E0", VA = "0x5C137E0")]
	private bool IsMouseOverAnyChatElement(Vector2 mousePosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6004D99")]
	[Address(RVA = "0x5C14B60", Offset = "0x5C13B60", VA = "0x5C14B60")]
	public void UpdateChatInteractionState()
	{
	}

	[Token(Token = "0x6004D9A")]
	[Address(RVA = "0x5C14C50", Offset = "0x5C13C50", VA = "0x5C14C50")]
	protected ChatLineView CreateLine(string text)
	{
		return null;
	}

	[Token(Token = "0x6004D9B")]
	[Address(RVA = "0x5C15840", Offset = "0x5C14840", VA = "0x5C15840")]
	private void InGameManager_PlayerInfoUpdated(int actorNumber)
	{
	}

	[Token(Token = "0x6004D9C")]
	[Address(RVA = "0x5C159B0", Offset = "0x5C149B0", VA = "0x5C159B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004D9D")]
	[Address(RVA = "0x5C15F30", Offset = "0x5C14F30", VA = "0x5C15F30")]
	private void OnValueChanged(string text)
	{
	}

	[Token(Token = "0x6004D9E")]
	[Address(RVA = "0x5C16080", Offset = "0x5C15080", VA = "0x5C16080")]
	public string GetInputText()
	{
		return null;
	}

	[Token(Token = "0x6004D9F")]
	[Address(RVA = "0x5C16110", Offset = "0x5C15110", VA = "0x5C16110")]
	public void SetInputText(string newText)
	{
	}

	[Token(Token = "0x6004DA0")]
	[Address(RVA = "0x5C0C520", Offset = "0x5C0B520", VA = "0x5C0C520")]
	public void EnterPMMode(Player target)
	{
	}

	[Token(Token = "0x6004DA1")]
	[Address(RVA = "0x5C167C0", Offset = "0x5C157C0", VA = "0x5C167C0")]
	public void ExitPMMode()
	{
	}

	[Token(Token = "0x6004DA2")]
	[Address(RVA = "0x5C16920", Offset = "0x5C15920", VA = "0x5C16920")]
	public void RemovePMPartner(Player player)
	{
	}

	[Token(Token = "0x6004DA3")]
	[Address(RVA = "0x5C10ED0", Offset = "0x5C0FED0", VA = "0x5C10ED0")]
	private void ValidatePMState()
	{
	}

	[Token(Token = "0x6004DA4")]
	[Address(RVA = "0x5C16B40", Offset = "0x5C15B40", VA = "0x5C16B40")]
	public bool IsTogglingPM()
	{
		return default(bool);
	}

	[Token(Token = "0x6004DA5")]
	[Address(RVA = "0x5C16250", Offset = "0x5C15250", VA = "0x5C16250")]
	[IteratorStateMachine(typeof(_003CResetPMToggleActive_003Ed__118))]
	private IEnumerator ResetPMToggleActive()
	{
		return null;
	}

	[Token(Token = "0x6004DA6")]
	[Address(RVA = "0x5C16B70", Offset = "0x5C15B70", VA = "0x5C16B70")]
	public bool IsInPMMode()
	{
		return default(bool);
	}

	[Token(Token = "0x6004DA7")]
	[Address(RVA = "0x5C141F0", Offset = "0x5C131F0", VA = "0x5C141F0")]
	private void CycleToPMPartner()
	{
	}

	[Token(Token = "0x6004DA8")]
	[Address(RVA = "0x5C16B90", Offset = "0x5C15B90", VA = "0x5C16B90")]
	private List<Player> GetPmPartnersByRecency()
	{
		return null;
	}

	[Token(Token = "0x6004DA9")]
	[Address(RVA = "0x5C162C0", Offset = "0x5C152C0", VA = "0x5C162C0")]
	public void AddPMPartner(Player player)
	{
	}

	[Token(Token = "0x6004DAA")]
	[Address(RVA = "0x5C172C0", Offset = "0x5C162C0", VA = "0x5C172C0")]
	public Player GetCurrentPMTarget()
	{
		return null;
	}

	[Token(Token = "0x6004DAB")]
	[Address(RVA = "0x5C172D0", Offset = "0x5C162D0", VA = "0x5C172D0")]
	public void ResetPMState()
	{
	}

	[Token(Token = "0x6004DAC")]
	[Address(RVA = "0x5C14740", Offset = "0x5C13740", VA = "0x5C14740")]
	public void CloseEmojiPanel()
	{
	}

	[Token(Token = "0x6004DAD")]
	[Address(RVA = "0x5C17370", Offset = "0x5C16370", VA = "0x5C17370")]
	public void HandleCursorStateChange(CursorState newState)
	{
	}

	[Token(Token = "0x6004DAE")]
	[Address(RVA = "0x5C17400", Offset = "0x5C16400", VA = "0x5C17400")]
	public void MoveCaretToEnd()
	{
	}

	[Token(Token = "0x6004DAF")]
	[Address(RVA = "0x5C17510", Offset = "0x5C16510", VA = "0x5C17510")]
	public bool ShouldBlockGameInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6004DB0")]
	[Address(RVA = "0x5C175B0", Offset = "0x5C165B0", VA = "0x5C175B0")]
	public bool ShouldBlockKeybind(KeyCode keyCode)
	{
		return default(bool);
	}

	[Token(Token = "0x6004DB1")]
	[Address(RVA = "0x5C10A60", Offset = "0x5C0FA60", VA = "0x5C10A60")]
	public void RefreshPoolSize()
	{
	}

	[Token(Token = "0x6004DB2")]
	[Address(RVA = "0x5C17870", Offset = "0x5C16870", VA = "0x5C17870")]
	public void ApplyLanguageFont()
	{
	}

	[Token(Token = "0x6004DB3")]
	[Address(RVA = "0x5C17B70", Offset = "0x5C16B70", VA = "0x5C17B70")]
	public bool IsInteractingWithChatUI()
	{
		return default(bool);
	}

	[Token(Token = "0x6004DB4")]
	[Address(RVA = "0x5C16120", Offset = "0x5C15120", VA = "0x5C16120")]
	public void SetTextAndPositionCaret(string newText)
	{
	}

	[Token(Token = "0x6004DB5")]
	[Address(RVA = "0x5C16680", Offset = "0x5C15680", VA = "0x5C16680")]
	public void SetTextAndCaretPosition(string newText, int caretPosition)
	{
	}

	[Token(Token = "0x6004DB6")]
	[Address(RVA = "0x5C13B40", Offset = "0x5C12B40", VA = "0x5C13B40")]
	private RectTransform GetCachedRectTransform(GameObject obj)
	{
		return null;
	}

	[Token(Token = "0x6004DB7")]
	[Address(RVA = "0x5C15DB0", Offset = "0x5C14DB0", VA = "0x5C15DB0")]
	private void SaveCurrentConversation()
	{
	}

	[Token(Token = "0x6004DB8")]
	[Address(RVA = "0x5C11100", Offset = "0x5C10100", VA = "0x5C11100")]
	private void RestorePMPartners()
	{
	}

	[Token(Token = "0x6004DB9")]
	[Address(RVA = "0x5C17C10", Offset = "0x5C16C10", VA = "0x5C17C10")]
	public ChatPanel()
	{
	}
}
