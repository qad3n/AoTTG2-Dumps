// ==================== AoTTG2 cross-reference ====================
// Type: UI.ChatPanel
// Update status: unchanged since the previous dump
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

namespace UI;

[Token(Token = "0x2000771")]
internal class ChatPanel : BasePanel
{
	[Token(Token = "0x2000772")]
	private enum EmojiPanelMode
	{
		[Token(Token = "0x400250F")]
		Emoji,
		[Token(Token = "0x4002510")]
		Sticker
	}

	[Token(Token = "0x2000773")]
	private static class UIAnchors
	{
		[Token(Token = "0x4002511")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly Vector2 TopStretch;

		[Token(Token = "0x4002512")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static readonly Vector2 TopStretchEnd;

		[Token(Token = "0x4002513")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public static readonly Vector2 FullStretch;

		[Token(Token = "0x4002514")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public static readonly Vector2 FullStretchStart;

		[Token(Token = "0x4002515")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public static readonly Vector2 RightStretch;

		[Token(Token = "0x4002516")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public static readonly Vector2 RightStretchEnd;

		[Token(Token = "0x4002517")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public static readonly Vector2 CenterMiddle;

		[Token(Token = "0x4002518")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public static readonly Vector2 TopCenter;

		[Token(Token = "0x4002519")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public static readonly Vector2 RightCenter;

		[Token(Token = "0x400251A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public static readonly Vector2 LeftCenter;

		[Token(Token = "0x400251B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public static readonly Vector2 BottomLeft;

		[Token(Token = "0x400251C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public static readonly Vector2 TopRight;
	}

	[Token(Token = "0x2000774")]
	protected class ChatLineView
	{
		[Token(Token = "0x400251D")]
		private const float LineHeightAtDefaultFontSize = 30f;

		[Token(Token = "0x400251E")]
		private const float DefaultFontSize = 18f;

		[Token(Token = "0x400251F")]
		private const float LineRightPadding = 8f;

		[Token(Token = "0x4002520")]
		private const float MinimumBodyWidth = 48f;

		[Token(Token = "0x4002521")]
		private const float NameReservePadding = 2f;

		[Token(Token = "0x4002522")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly TMP_InputField _selectionInput;

		[Token(Token = "0x4002523")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly TextMeshProUGUI _displayText;

		[Token(Token = "0x4002524")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private readonly RectTransform _rowRect;

		[Token(Token = "0x4002525")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private readonly ChatPlayerNameOverlay _nameOverlay;

		[Token(Token = "0x4002526")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private readonly ChatPanel _chatPanel;

		[Token(Token = "0x4002527")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private readonly Color _defaultColor;

		[Token(Token = "0x4002528")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private TMP_FontAsset _defaultFont;

		[Token(Token = "0x4002529")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private string _lastDisplayText;

		[Token(Token = "0x400252A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ChatManager.ChatDisplayLine _lastLine;

		[Token(Token = "0x400252B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		private bool _hasLastLine;

		[Token(Token = "0x400252C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x91")]
		private bool _playerMode;

		[Token(Token = "0x400252D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x92")]
		private bool _metricsDirty;

		[Token(Token = "0x400252E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x93")]
		private bool _playerStyleDirty;

		[Token(Token = "0x400252F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
		private int _styledSenderID;

		[Token(Token = "0x4002530")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private string _styledSenderName;

		[Token(Token = "0x4002531")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
		private TMP_FontAsset _styledNameFont;

		[Token(Token = "0x4002532")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
		private float _styledFontSize;

		[Token(Token = "0x4002533")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
		private float _cachedStyledNameWidth;

		[Token(Token = "0x4002534")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
		private float _cachedBaseNameWidth;

		[Token(Token = "0x4002535")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
		private float _fontSize;

		[Token(Token = "0x4002536")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
		private float _chatWidth;

		[Token(Token = "0x4002537")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
		private float _rowHeight;

		[Token(Token = "0x17000CFB")]
		public GameObject gameObject
		{
			[Token(Token = "0x6004898")]
			[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6004899")]
			[Address(RVA = "0xC8FFC0", Offset = "0xC8E5C0", VA = "0x180C8FFC0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000CFC")]
		public Transform transform
		{
			[Token(Token = "0x600489A")]
			[Address(RVA = "0x223CFE0", Offset = "0x223B5E0", VA = "0x18223CFE0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CFD")]
		public RectTransform RectTransform
		{
			[Token(Token = "0x600489B")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CFE")]
		public float Height
		{
			[Token(Token = "0x600489C")]
			[Address(RVA = "0x1D981F0", Offset = "0x1D967F0", VA = "0x181D981F0")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x600489D")]
		[Address(RVA = "0x223C350", Offset = "0x223A950", VA = "0x18223C350")]
		public ChatLineView(Transform parent, ElementStyle style, TMP_InputField chatInput, ChatPanel chatPanel)
		{
		}

		[Token(Token = "0x600489E")]
		[Address(RVA = "0x223ADA0", Offset = "0x22393A0", VA = "0x18223ADA0")]
		public void ApplyChatMetrics(float fontSize, float width)
		{
		}

		[Token(Token = "0x600489F")]
		[Address(RVA = "0x223B750", Offset = "0x2239D50", VA = "0x18223B750")]
		public void SetFont(TMP_FontAsset fontAsset)
		{
		}

		[Token(Token = "0x60048A0")]
		[Address(RVA = "0x223B5F0", Offset = "0x2239BF0", VA = "0x18223B5F0")]
		public void InvalidatePlayerStyle(int actorNumber)
		{
		}

		[Token(Token = "0x60048A1")]
		[Address(RVA = "0x223B820", Offset = "0x2239E20", VA = "0x18223B820")]
		public bool SetLine(ChatManager.ChatDisplayLine line)
		{
			return default(bool);
		}

		[Token(Token = "0x60048A2")]
		[Address(RVA = "0x223B700", Offset = "0x2239D00", VA = "0x18223B700")]
		private void RememberLine(ChatManager.ChatDisplayLine line)
		{
		}

		[Token(Token = "0x60048A3")]
		[Address(RVA = "0x223B270", Offset = "0x2239870", VA = "0x18223B270")]
		private static bool DisplayLinesEqual(ChatManager.ChatDisplayLine a, ChatManager.ChatDisplayLine b)
		{
			return default(bool);
		}

		[Token(Token = "0x60048A4")]
		[Address(RVA = "0x223B310", Offset = "0x2239910", VA = "0x18223B310")]
		public void HandlePointerClick(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60048A5")]
		[Address(RVA = "0x223B1B0", Offset = "0x22397B0", VA = "0x18223B1B0")]
		private static void ConfigureText(TextMeshProUGUI text, float fontSize, Color color, bool richText, bool wordWrap)
		{
		}

		[Token(Token = "0x60048A6")]
		[Address(RVA = "0x223B190", Offset = "0x2239790", VA = "0x18223B190")]
		private float BaseLineHeight()
		{
			return default(float);
		}

		[Token(Token = "0x60048A7")]
		[Address(RVA = "0x223C1A0", Offset = "0x223A7A0", VA = "0x18223C1A0")]
		private bool SetRowHeight(float height)
		{
			return default(bool);
		}

		[Token(Token = "0x60048A8")]
		[Address(RVA = "0x223C2C0", Offset = "0x223A8C0", VA = "0x18223C2C0")]
		private bool UpdateRowHeight(string content)
		{
			return default(bool);
		}

		[Token(Token = "0x60048A9")]
		[Address(RVA = "0x223B600", Offset = "0x2239C00", VA = "0x18223B600")]
		private float MeasureDisplayNameWidth(string senderName)
		{
			return default(float);
		}

		[Token(Token = "0x60048AA")]
		[Address(RVA = "0x223AE60", Offset = "0x2239460", VA = "0x18223AE60")]
		private float ApplyPlayerStyle(Player player, TMP_FontAsset font, string senderName, ChatDisplayNameRange nameRange)
		{
			return default(float);
		}
	}

	[Token(Token = "0x2000775")]
	private class ChatLineClickHandler : MonoBehaviour, IPointerClickHandler, IEventSystemHandler, IScrollHandler
	{
		[Token(Token = "0x4002539")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private ChatLineView _lineView;

		[Token(Token = "0x400253A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TMP_InputField _chatInput;

		[Token(Token = "0x400253B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ChatPanel _chatPanel;

		[Token(Token = "0x60048AB")]
		[Address(RVA = "0x223AC80", Offset = "0x2239280", VA = "0x18223AC80")]
		public void Initialize(ChatLineView lineView, TMP_InputField chatInput, ChatPanel chatPanel)
		{
		}

		[Token(Token = "0x60048AC")]
		[Address(RVA = "0x223ACE0", Offset = "0x22392E0", VA = "0x18223ACE0", Slot = "4")]
		public void OnPointerClick(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60048AD")]
		[Address(RVA = "0x223AD00", Offset = "0x2239300", VA = "0x18223AD00", Slot = "5")]
		public void OnScroll(PointerEventData eventData)
		{
		}

		[Token(Token = "0x60048AE")]
		[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
		public ChatLineClickHandler()
		{
		}
	}

	[Token(Token = "0x2000781")]
	[CompilerGenerated]
	private sealed class _003CResetPMToggleActive_003Ed__123 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400254E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400254F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002550")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ChatPanel _003C_003E4__this;

		[Token(Token = "0x17000CFF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60048D4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D00")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60048D6")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60048D1")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CResetPMToggleActive_003Ed__123(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60048D2")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60048D3")]
		[Address(RVA = "0x2254230", Offset = "0x2252830", VA = "0x182254230", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60048D5")]
		[Address(RVA = "0x22542E0", Offset = "0x22528E0", VA = "0x1822542E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000782")]
	[CompilerGenerated]
	private sealed class _003CShowTemporaryTooltip_003Ed__78 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002551")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002552")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002553")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public TextMeshProUGUI tooltip;

		[Token(Token = "0x4002554")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string message;

		[Token(Token = "0x4002555")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public float duration;

		[Token(Token = "0x4002556")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private string _003Cprev_003E5__2;

		[Token(Token = "0x4002557")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private float _003CprevSize_003E5__3;

		[Token(Token = "0x17000D01")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60048DA")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D02")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60048DC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60048D7")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CShowTemporaryTooltip_003Ed__78(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60048D8")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60048D9")]
		[Address(RVA = "0x2254320", Offset = "0x2252920", VA = "0x182254320", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60048DB")]
		[Address(RVA = "0x22544F0", Offset = "0x2252AF0", VA = "0x1822544F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40024D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private TMP_InputField _inputField;

	[Token(Token = "0x40024D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private GameObject _panel;

	[Token(Token = "0x40024D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private ChatScrollRect _scrollRect;

	[Token(Token = "0x40024D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private RectTransform _chatPanelRect;

	[Token(Token = "0x40024D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private RectTransform _inputFieldRect;

	[Token(Token = "0x40024D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private RectTransform _contentRect;

	[Token(Token = "0x40024DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private RectTransform _scrollbarRect;

	[Token(Token = "0x40024DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Transform _caret;

	[Token(Token = "0x40024DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected readonly List<ChatLineView> _linesPool;

	[Token(Token = "0x40024DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private readonly Dictionary<GameObject, TMP_InputField> _cachedInputFields;

	[Token(Token = "0x40024DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private readonly List<ChatManager.ChatDisplayLine> _visibleMessages;

	[Token(Token = "0x40024DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GameObject _currentSelectedObject;

	[Token(Token = "0x40024E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool _caretInitialized;

	[Token(Token = "0x40024E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC9")]
	public bool IgnoreNextActivation;

	[Token(Token = "0x40024E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex _richTextPattern;

	[Token(Token = "0x40024E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Regex _emojiPattern;

	[Token(Token = "0x40024E4")]
	private const string StickerHiddenMarker = "\u200b\u200b";

	[Token(Token = "0x40024E5")]
	private const float ManualLineBottomPadding = 10f;

	[Token(Token = "0x40024E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	private float _lastTypeTime;

	[Token(Token = "0x40024E7")]
	private const float TYPING_DEBOUNCE = 0.2f;

	[Token(Token = "0x40024E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private bool _requestCanvasUpdate;

	[Token(Token = "0x40024E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Player _currentPMTarget;

	[Token(Token = "0x40024EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private bool _inPMMode;

	[Token(Token = "0x40024EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private List<Player> _pmPartners;

	[Token(Token = "0x40024EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private int _currentPMIndex;

	[Token(Token = "0x40024ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
	private bool _pmToggleActive;

	[Token(Token = "0x40024EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private Coroutine _pmToggleCoroutine;

	[Token(Token = "0x40024EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private GameObject _emojiPanel;

	[Token(Token = "0x40024F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private bool _emojiPanelActive;

	[Token(Token = "0x40024F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private Button _emojiButton;

	[Token(Token = "0x40024F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private bool _chatHidden;

	[Token(Token = "0x40024F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x119")]
	private bool _wasChatUIClicked;

	[Token(Token = "0x40024F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11A")]
	private bool _isInteractingWithChatUI;

	[Token(Token = "0x40024F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Dictionary<GameObject, RectTransform> _cachedRectTransforms;

	[Token(Token = "0x40024F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private int _desiredCaretPosition;

	[Token(Token = "0x40024F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<string, int> EmojiNameToIndex;

	[Token(Token = "0x40024F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12C")]
	private int _emojiPage;

	[Token(Token = "0x40024F9")]
	private const int EMOJIS_PER_PAGE = 16;

	[Token(Token = "0x40024FA")]
	private const int MAX_EMOJI_INDEX = 140;

	[Token(Token = "0x40024FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private Button _emojiNextButton;

	[Token(Token = "0x40024FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private Button _emojiBackButton;

	[Token(Token = "0x40024FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private TextMeshProUGUI _emojiPageText;

	[Token(Token = "0x40024FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private Button _emojiModeButton;

	[Token(Token = "0x40024FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private Button _stickerModeButton;

	[Token(Token = "0x4002500")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private EmojiPanelMode _panelMode;

	[Token(Token = "0x4002501")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x15C")]
	private bool _stickerInserted;

	[Token(Token = "0x4002502")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private string _stickerTag;

	[Token(Token = "0x4002503")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private float _lastStickerSentTime;

	[Token(Token = "0x4002504")]
	private const float STICKER_COOLDOWN = 15f;

	[Token(Token = "0x4002505")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private Coroutine _tooltipCoroutine;

	[Token(Token = "0x4002506")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private TextMeshProUGUI _chatModeLabel;

	[Token(Token = "0x4002507")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private TextMeshProUGUI _placeholderText;

	[Token(Token = "0x4002508")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private CanvasGroup _placeholderCanvasGroup;

	[Token(Token = "0x4002509")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private GameObject _notificationBadge;

	[Token(Token = "0x400250A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private bool _lastNotificationBadgeState;

	[Token(Token = "0x400250B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Sprite _cachedCircleSprite;

	[Token(Token = "0x400250C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x199")]
	private bool _isDestroyed;

	[Token(Token = "0x400250D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19C")]
	private int _actualPoolSize;

	[Token(Token = "0x17000CF9")]
	private int POOL_SIZE
	{
		[Token(Token = "0x6004848")]
		[Address(RVA = "0x2236780", Offset = "0x2234D80", VA = "0x182236780")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CFA")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004849")]
		[Address(RVA = "0x22367C0", Offset = "0x2234DC0", VA = "0x1822367C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600484A")]
	[Address(RVA = "0x22363C0", Offset = "0x22349C0", VA = "0x1822363C0")]
	static ChatPanel()
	{
	}

	[Token(Token = "0x600484B")]
	[Address(RVA = "0x222F050", Offset = "0x222D650", VA = "0x18222F050")]
	private string ProcessEmojiCodes(string text)
	{
		return null;
	}

	[Token(Token = "0x600484C")]
	[Address(RVA = "0x2231EE0", Offset = "0x22304E0", VA = "0x182231EE0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600484D")]
	[Address(RVA = "0x2230C70", Offset = "0x222F270", VA = "0x182230C70")]
	private void SetupChatModeLabel()
	{
	}

	[Token(Token = "0x600484E")]
	[Address(RVA = "0x2235020", Offset = "0x2233620", VA = "0x182235020")]
	private void UpdateChatModeElements()
	{
	}

	[Token(Token = "0x600484F")]
	[Address(RVA = "0x22353E0", Offset = "0x22339E0", VA = "0x1822353E0")]
	private void UpdateChatModeLabel()
	{
	}

	[Token(Token = "0x6004850")]
	[Address(RVA = "0x22315A0", Offset = "0x222FBA0", VA = "0x1822315A0")]
	private void SetupNotificationBadge()
	{
	}

	[Token(Token = "0x6004851")]
	[Address(RVA = "0x222EE00", Offset = "0x222D400", VA = "0x18222EE00")]
	private void OnNotificationBadgeClicked()
	{
	}

	[Token(Token = "0x6004852")]
	[Address(RVA = "0x222C790", Offset = "0x222AD90", VA = "0x18222C790")]
	private static Sprite GetCircleSprite()
	{
		return null;
	}

	[Token(Token = "0x6004853")]
	[Address(RVA = "0x2231090", Offset = "0x222F690", VA = "0x182231090")]
	private void SetupEmojiButton()
	{
	}

	[Token(Token = "0x6004854")]
	[Address(RVA = "0x2234CD0", Offset = "0x22332D0", VA = "0x182234CD0")]
	private void ToggleEmojiPanel()
	{
	}

	[Token(Token = "0x6004855")]
	[Address(RVA = "0x2229870", Offset = "0x2227E70", VA = "0x182229870")]
	private void CreateEmojiPanel()
	{
	}

	[Token(Token = "0x6004856")]
	[Address(RVA = "0x2228E40", Offset = "0x2227440", VA = "0x182228E40")]
	private void AddEmojiButtons(TextMeshProUGUI tooltipText)
	{
	}

	[Token(Token = "0x6004857")]
	[Address(RVA = "0x222B4F0", Offset = "0x2229AF0", VA = "0x18222B4F0")]
	private void CreateSpriteButton(GridLayoutGroup emojiGrid, TextMeshProUGUI tooltipText, int spriteIndex, bool isSticker)
	{
	}

	[Token(Token = "0x6004858")]
	[Address(RVA = "0x2234870", Offset = "0x2232E70", VA = "0x182234870")]
	[IteratorStateMachine(typeof(_003CShowTemporaryTooltip_003Ed__78))]
	private IEnumerator ShowTemporaryTooltip(TextMeshProUGUI tooltip, string message, float duration)
	{
		return null;
	}

	[Token(Token = "0x6004859")]
	[Address(RVA = "0x22296A0", Offset = "0x2227CA0", VA = "0x1822296A0")]
	private void ChangeEmojiPage(int delta, TextMeshProUGUI tooltipText)
	{
	}

	[Token(Token = "0x600485A")]
	[Address(RVA = "0x2230920", Offset = "0x222EF20", VA = "0x182230920")]
	private void SetPanelMode(EmojiPanelMode mode)
	{
	}

	[Token(Token = "0x600485B")]
	[Address(RVA = "0x222D5A0", Offset = "0x222BBA0", VA = "0x18222D5A0")]
	private void InsertSticker(int spriteIndex)
	{
	}

	[Token(Token = "0x600485C")]
	[Address(RVA = "0x222D420", Offset = "0x222BA20", VA = "0x18222D420")]
	private void InsertEmoji(int spriteIndex)
	{
	}

	[Token(Token = "0x600485D")]
	[Address(RVA = "0x2234C70", Offset = "0x2233270", VA = "0x182234C70")]
	public void Sync()
	{
	}

	[Token(Token = "0x600485E")]
	[Address(RVA = "0x222F150", Offset = "0x222D750", VA = "0x18222F150")]
	private void RefreshDisplayedMessages()
	{
	}

	[Token(Token = "0x600485F")]
	[Address(RVA = "0x222EF60", Offset = "0x222D560", VA = "0x18222EF60")]
	private void UpdateVisibleMessages()
	{
	}

	[Token(Token = "0x6004860")]
	[Address(RVA = "0x222CA30", Offset = "0x222B030", VA = "0x18222CA30")]
	private int GetEffectivePoolSize()
	{
		return default(int);
	}

	[Token(Token = "0x6004861")]
	[Address(RVA = "0x22356C0", Offset = "0x2233CC0", VA = "0x1822356C0")]
	private void UpdateVisibleMessages(List<ChatManager.ChatDisplayLine> lines)
	{
	}

	[Token(Token = "0x6004862")]
	[Address(RVA = "0x2229770", Offset = "0x2227D70", VA = "0x182229770")]
	private void ConfigureManualLineLayout()
	{
	}

	[Token(Token = "0x6004863")]
	[Address(RVA = "0x222E140", Offset = "0x222C740", VA = "0x18222E140")]
	private bool LayoutVisibleRows()
	{
		return default(bool);
	}

	[Token(Token = "0x6004864")]
	[Address(RVA = "0x2234E60", Offset = "0x2233460", VA = "0x182234E60")]
	private void UpdateBackgroundVisibility(bool hasMessages)
	{
	}

	[Token(Token = "0x6004865")]
	[Address(RVA = "0x2228C70", Offset = "0x2227270", VA = "0x182228C70")]
	public void Activate()
	{
	}

	[Token(Token = "0x6004866")]
	[Address(RVA = "0x222D970", Offset = "0x222BF70", VA = "0x18222D970")]
	public bool IsInputActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6004867")]
	[Address(RVA = "0x222E9A0", Offset = "0x222CFA0", VA = "0x18222E9A0")]
	public void OnEndEdit(string text)
	{
	}

	[Token(Token = "0x6004868")]
	[Address(RVA = "0x2234910", Offset = "0x2232F10", VA = "0x182234910")]
	private void SubmitProcessedInput()
	{
	}

	[Token(Token = "0x6004869")]
	[Address(RVA = "0x2229270", Offset = "0x2227870", VA = "0x182229270")]
	public void AddLine(string line)
	{
	}

	[Token(Token = "0x600486A")]
	[Address(RVA = "0x222FE50", Offset = "0x222E450", VA = "0x18222FE50")]
	public void ReplaceLastLine(string line)
	{
	}

	[Token(Token = "0x600486B")]
	[Address(RVA = "0x2229280", Offset = "0x2227880", VA = "0x182229280")]
	public void AddLines(List<string> lines)
	{
	}

	[Token(Token = "0x600486C")]
	[Address(RVA = "0x222D280", Offset = "0x222B880", VA = "0x18222D280")]
	private void InitializeCaret()
	{
	}

	[Token(Token = "0x600486D")]
	[Address(RVA = "0x222EBB0", Offset = "0x222D1B0", VA = "0x18222EBB0")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x600486E")]
	[Address(RVA = "0x2235C90", Offset = "0x2234290", VA = "0x182235C90")]
	private void Update()
	{
	}

	[Token(Token = "0x600486F")]
	[Address(RVA = "0x2234CB0", Offset = "0x22332B0", VA = "0x182234CB0")]
	private void ToggleChatVisibility()
	{
	}

	[Token(Token = "0x6004870")]
	[Address(RVA = "0x22305A0", Offset = "0x222EBA0", VA = "0x1822305A0")]
	private void SetChatHiddenState(bool hidden, bool saveSetting = true)
	{
	}

	[Token(Token = "0x6004871")]
	[Address(RVA = "0x222E030", Offset = "0x222C630", VA = "0x18222E030")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6004872")]
	[Address(RVA = "0x22355A0", Offset = "0x2233BA0", VA = "0x1822355A0")]
	private void UpdatePlaceholderVisibility(bool isChatActive)
	{
	}

	[Token(Token = "0x6004873")]
	[Address(RVA = "0x222DDA0", Offset = "0x222C3A0", VA = "0x18222DDA0")]
	public bool IsPointerOverChatUI()
	{
		return default(bool);
	}

	[Token(Token = "0x6004874")]
	[Address(RVA = "0x222DA40", Offset = "0x222C040", VA = "0x18222DA40")]
	private bool IsMouseOverAnyChatElement(Vector2 mousePosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6004875")]
	[Address(RVA = "0x2234FA0", Offset = "0x22335A0", VA = "0x182234FA0")]
	public void UpdateChatInteractionState()
	{
	}

	[Token(Token = "0x6004876")]
	[Address(RVA = "0x222B330", Offset = "0x2229930", VA = "0x18222B330")]
	protected ChatLineView CreateLine(string text)
	{
		return null;
	}

	[Token(Token = "0x6004877")]
	[Address(RVA = "0x222EF60", Offset = "0x222D560", VA = "0x18222EF60")]
	private void OnScroll(Vector2 scrollPosition)
	{
	}

	[Token(Token = "0x6004878")]
	[Address(RVA = "0x222D120", Offset = "0x222B720", VA = "0x18222D120")]
	private void InGameManager_PlayerInfoUpdated(int actorNumber)
	{
	}

	[Token(Token = "0x6004879")]
	[Address(RVA = "0x222C510", Offset = "0x222AB10", VA = "0x18222C510")]
	private TMP_InputField GetCachedInputField(GameObject obj)
	{
		return null;
	}

	[Token(Token = "0x600487A")]
	[Address(RVA = "0x222E660", Offset = "0x222CC60", VA = "0x18222E660")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600487B")]
	[Address(RVA = "0x222EF70", Offset = "0x222D570", VA = "0x18222EF70")]
	private void OnValueChanged(string text)
	{
	}

	[Token(Token = "0x600487C")]
	[Address(RVA = "0x222CA70", Offset = "0x222B070", VA = "0x18222CA70")]
	public string GetInputText()
	{
		return null;
	}

	[Token(Token = "0x600487D")]
	[Address(RVA = "0x22307F0", Offset = "0x222EDF0", VA = "0x1822307F0")]
	public void SetInputText(string newText)
	{
	}

	[Token(Token = "0x600487E")]
	[Address(RVA = "0x222C0A0", Offset = "0x222A6A0", VA = "0x18222C0A0")]
	public void EnterPMMode(Player target)
	{
	}

	[Token(Token = "0x600487F")]
	[Address(RVA = "0x222C380", Offset = "0x222A980", VA = "0x18222C380")]
	public void ExitPMMode()
	{
	}

	[Token(Token = "0x6004880")]
	[Address(RVA = "0x222FC10", Offset = "0x222E210", VA = "0x18222FC10")]
	public void RemovePMPartner(Player player)
	{
	}

	[Token(Token = "0x6004881")]
	[Address(RVA = "0x2236190", Offset = "0x2234790", VA = "0x182236190")]
	private void ValidatePMState()
	{
	}

	[Token(Token = "0x6004882")]
	[Address(RVA = "0x222E020", Offset = "0x222C620", VA = "0x18222E020")]
	public bool IsTogglingPM()
	{
		return default(bool);
	}

	[Token(Token = "0x6004883")]
	[Address(RVA = "0x222FF30", Offset = "0x222E530", VA = "0x18222FF30")]
	[IteratorStateMachine(typeof(_003CResetPMToggleActive_003Ed__123))]
	private IEnumerator ResetPMToggleActive()
	{
		return null;
	}

	[Token(Token = "0x6004884")]
	[Address(RVA = "0x222D960", Offset = "0x222BF60", VA = "0x18222D960")]
	public bool IsInPMMode()
	{
		return default(bool);
	}

	[Token(Token = "0x6004885")]
	[Address(RVA = "0x222BDF0", Offset = "0x222A3F0", VA = "0x18222BDF0")]
	private void CycleToPMPartner()
	{
	}

	[Token(Token = "0x6004886")]
	[Address(RVA = "0x222CB10", Offset = "0x222B110", VA = "0x18222CB10")]
	private List<Player> GetPmPartnersByRecency()
	{
		return null;
	}

	[Token(Token = "0x6004887")]
	[Address(RVA = "0x22293A0", Offset = "0x22279A0", VA = "0x1822293A0")]
	public void AddPMPartner(Player player)
	{
	}

	[Token(Token = "0x6004888")]
	[Address(RVA = "0x187BC60", Offset = "0x187A260", VA = "0x18187BC60")]
	public Player GetCurrentPMTarget()
	{
		return null;
	}

	[Token(Token = "0x6004889")]
	[Address(RVA = "0x222FE70", Offset = "0x222E470", VA = "0x18222FE70")]
	public void ResetPMState()
	{
	}

	[Token(Token = "0x600488A")]
	[Address(RVA = "0x22296E0", Offset = "0x2227CE0", VA = "0x1822296E0")]
	public void CloseEmojiPanel()
	{
	}

	[Token(Token = "0x600488B")]
	[Address(RVA = "0x222D100", Offset = "0x222B700", VA = "0x18222D100")]
	public void HandleCursorStateChange(CursorState newState)
	{
	}

	[Token(Token = "0x600488C")]
	[Address(RVA = "0x222E550", Offset = "0x222CB50", VA = "0x18222E550")]
	public void MoveCaretToEnd()
	{
	}

	[Token(Token = "0x600488D")]
	[Address(RVA = "0x22347D0", Offset = "0x2232DD0", VA = "0x1822347D0")]
	public bool ShouldBlockGameInput()
	{
		return default(bool);
	}

	[Token(Token = "0x600488E")]
	[Address(RVA = "0x2234810", Offset = "0x2232E10", VA = "0x182234810")]
	public bool ShouldBlockKeybind(KeyCode keyCode)
	{
		return default(bool);
	}

	[Token(Token = "0x600488F")]
	[Address(RVA = "0x222F750", Offset = "0x222DD50", VA = "0x18222F750")]
	public void RefreshPoolSize()
	{
	}

	[Token(Token = "0x6004890")]
	[Address(RVA = "0x222DA00", Offset = "0x222C000", VA = "0x18222DA00")]
	public bool IsInteractingWithChatUI()
	{
		return default(bool);
	}

	[Token(Token = "0x6004891")]
	[Address(RVA = "0x22307F0", Offset = "0x222EDF0", VA = "0x1822307F0")]
	public void SetTextAndPositionCaret(string newText)
	{
	}

	[Token(Token = "0x6004892")]
	[Address(RVA = "0x2230B40", Offset = "0x222F140", VA = "0x182230B40")]
	public void SetTextAndCaretPosition(string newText, int caretPosition)
	{
	}

	[Token(Token = "0x6004893")]
	[Address(RVA = "0x222C650", Offset = "0x222AC50", VA = "0x18222C650")]
	private RectTransform GetCachedRectTransform(GameObject obj)
	{
		return null;
	}

	[Token(Token = "0x6004894")]
	[Address(RVA = "0x2230420", Offset = "0x222EA20", VA = "0x182230420")]
	private void SaveCurrentConversation()
	{
	}

	[Token(Token = "0x6004895")]
	[Address(RVA = "0x222FFA0", Offset = "0x222E5A0", VA = "0x18222FFA0")]
	private void RestorePMPartners()
	{
	}

	[Token(Token = "0x6004896")]
	[Address(RVA = "0x2236590", Offset = "0x2234B90", VA = "0x182236590")]
	public ChatPanel()
	{
	}
}
