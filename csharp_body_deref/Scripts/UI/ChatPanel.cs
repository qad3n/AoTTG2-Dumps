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

namespace UI;

[Token(Token = "0x2000616")]
internal class ChatPanel : BasePanel
{
	[Token(Token = "0x2000617")]
	private enum EmojiPanelMode
	{
		[Token(Token = "0x4001D5B")]
		Emoji,
		[Token(Token = "0x4001D5C")]
		Sticker
	}

	[Token(Token = "0x2000618")]
	private static class UIAnchors
	{
		[Token(Token = "0x4001D5D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly Vector2 TopStretch;

		[Token(Token = "0x4001D5E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static readonly Vector2 TopStretchEnd;

		[Token(Token = "0x4001D5F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public static readonly Vector2 FullStretch;

		[Token(Token = "0x4001D60")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public static readonly Vector2 FullStretchStart;

		[Token(Token = "0x4001D61")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public static readonly Vector2 RightStretch;

		[Token(Token = "0x4001D62")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public static readonly Vector2 RightStretchEnd;

		[Token(Token = "0x4001D63")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public static readonly Vector2 CenterMiddle;

		[Token(Token = "0x4001D64")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public static readonly Vector2 TopCenter;

		[Token(Token = "0x4001D65")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public static readonly Vector2 RightCenter;

		[Token(Token = "0x4001D66")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public static readonly Vector2 LeftCenter;

		[Token(Token = "0x4001D67")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public static readonly Vector2 BottomLeft;

		[Token(Token = "0x4001D68")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public static readonly Vector2 TopRight;
	}

	[Token(Token = "0x2000619")]
	protected class ChatLineView
	{
		[Token(Token = "0x4001D69")]
		private const float LineHeightAtDefaultFontSize = 30f;

		[Token(Token = "0x4001D6A")]
		private const float DefaultFontSize = 18f;

		[Token(Token = "0x4001D6B")]
		private const float LineRightPadding = 8f;

		[Token(Token = "0x4001D6C")]
		private const float MinimumBodyWidth = 48f;

		[Token(Token = "0x4001D6D")]
		private const float NameReservePadding = 2f;

		[Token(Token = "0x4001D6E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly TextMeshProUGUI _displayText;

		[Token(Token = "0x4001D6F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly RectTransform _rowRect;

		[Token(Token = "0x4001D70")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private readonly ChatPlayerNameOverlay _nameOverlay;

		[Token(Token = "0x4001D71")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private readonly ChatPanel _chatPanel;

		[Token(Token = "0x4001D72")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private readonly Color _defaultColor;

		[Token(Token = "0x4001D73")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private TMP_FontAsset _defaultFont;

		[Token(Token = "0x4001D74")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private string _lastDisplayText;

		[Token(Token = "0x4001D75")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ChatManager.ChatDisplayLine _lastLine;

		[Token(Token = "0x4001D76")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private bool _hasLastLine;

		[Token(Token = "0x4001D77")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x89")]
		private bool _playerMode;

		[Token(Token = "0x4001D78")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8A")]
		private bool _metricsDirty;

		[Token(Token = "0x4001D79")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8B")]
		private bool _playerStyleDirty;

		[Token(Token = "0x4001D7A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
		private int _styledSenderID;

		[Token(Token = "0x4001D7B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		private string _styledSenderName;

		[Token(Token = "0x4001D7C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private TMP_FontAsset _styledNameFont;

		[Token(Token = "0x4001D7D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
		private float _styledFontSize;

		[Token(Token = "0x4001D7E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA4")]
		private float _cachedStyledNameWidth;

		[Token(Token = "0x4001D7F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
		private float _cachedBaseNameWidth;

		[Token(Token = "0x4001D80")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
		private float _fontSize;

		[Token(Token = "0x4001D81")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
		private float _chatWidth;

		[Token(Token = "0x4001D82")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
		private float _rowHeight;

		[Token(Token = "0x17000BAC")]
		public GameObject gameObject
		{
			[Token(Token = "0x6003DAC")]
			[Address(RVA = "0x42B53E0", Offset = "0x42B53E0", VA = "0x42B53E0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6003DAD")]
			[Address(RVA = "0x42B53F0", Offset = "0x42B53F0", VA = "0x42B53F0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000BAD")]
		public Transform transform
		{
			[Token(Token = "0x6003DAE")]
			[Address(RVA = "0x42B5410", Offset = "0x42B5410", VA = "0x42B5410")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BAE")]
		public RectTransform RectTransform
		{
			[Token(Token = "0x6003DAF")]
			[Address(RVA = "0x42B5430", Offset = "0x42B5430", VA = "0x42B5430")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BAF")]
		public float Height
		{
			[Token(Token = "0x6003DB0")]
			[Address(RVA = "0x42B5440", Offset = "0x42B5440", VA = "0x42B5440")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x6003DB1")]
		[Address(RVA = "0x42B5450", Offset = "0x42B5450", VA = "0x42B5450")]
		public ChatLineView(Transform parent, ElementStyle style, TMP_InputField chatInput, ChatPanel chatPanel)
		{
		}

		[Token(Token = "0x6003DB2")]
		[Address(RVA = "0x42B5E20", Offset = "0x42B5E20", VA = "0x42B5E20")]
		public void ApplyChatMetrics(float fontSize, float width)
		{
		}

		[Token(Token = "0x6003DB3")]
		[Address(RVA = "0x42B6050", Offset = "0x42B6050", VA = "0x42B6050")]
		public void SetFont(TMP_FontAsset fontAsset)
		{
		}

		[Token(Token = "0x6003DB4")]
		[Address(RVA = "0x42B6110", Offset = "0x42B6110", VA = "0x42B6110")]
		public void InvalidatePlayerStyle(int actorNumber)
		{
		}

		[Token(Token = "0x6003DB5")]
		[Address(RVA = "0x42B6120", Offset = "0x42B6120", VA = "0x42B6120")]
		public bool SetLine(ChatManager.ChatDisplayLine line)
		{
			return default(bool);
		}

		[Token(Token = "0x6003DB6")]
		[Address(RVA = "0x42B6C40", Offset = "0x42B6C40", VA = "0x42B6C40")]
		private void RememberLine(ChatManager.ChatDisplayLine line)
		{
		}

		[Token(Token = "0x6003DB7")]
		[Address(RVA = "0x42B6A00", Offset = "0x42B6A00", VA = "0x42B6A00")]
		private static bool DisplayLinesEqual(ChatManager.ChatDisplayLine a, ChatManager.ChatDisplayLine b)
		{
			return default(bool);
		}

		[Token(Token = "0x6003DB8")]
		[Address(RVA = "0x42B7340", Offset = "0x42B7340", VA = "0x42B7340")]
		public void HandlePointerClick(PointerEventData eventData)
		{
		}

		[Token(Token = "0x6003DB9")]
		[Address(RVA = "0x42B5C40", Offset = "0x42B5C40", VA = "0x42B5C40")]
		private static void ConfigureText(TextMeshProUGUI text, float fontSize, Color color, bool richText, bool wordWrap)
		{
		}

		[Token(Token = "0x6003DBA")]
		[Address(RVA = "0x42B5C20", Offset = "0x42B5C20", VA = "0x42B5C20")]
		private float BaseLineHeight()
		{
			return default(float);
		}

		[Token(Token = "0x6003DBB")]
		[Address(RVA = "0x42B5F50", Offset = "0x42B5F50", VA = "0x42B5F50")]
		private bool SetRowHeight(float height)
		{
			return default(bool);
		}

		[Token(Token = "0x6003DBC")]
		[Address(RVA = "0x42B6BC0", Offset = "0x42B6BC0", VA = "0x42B6BC0")]
		private bool UpdateRowHeight(string content)
		{
			return default(bool);
		}

		[Token(Token = "0x6003DBD")]
		[Address(RVA = "0x42B6E00", Offset = "0x42B6E00", VA = "0x42B6E00")]
		private float MeasureDisplayNameWidth(string senderName)
		{
			return default(float);
		}

		[Token(Token = "0x6003DBE")]
		[Address(RVA = "0x42B6C90", Offset = "0x42B6C90", VA = "0x42B6C90")]
		private float ApplyPlayerStyle(Player player, TMP_FontAsset font, string senderName, ChatDisplayNameRange nameRange)
		{
			return default(float);
		}
	}

	[Token(Token = "0x200061A")]
	private class ChatLineClickHandler : MonoBehaviour, IPointerClickHandler, IEventSystemHandler
	{
		[Token(Token = "0x4001D84")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private ChatLineView _lineView;

		[Token(Token = "0x4001D85")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TMP_InputField _chatInput;

		[Token(Token = "0x4001D86")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ChatPanel _chatPanel;

		[Token(Token = "0x6003DBF")]
		[Address(RVA = "0x42B5DD0", Offset = "0x42B5DD0", VA = "0x42B5DD0")]
		public void Initialize(ChatLineView lineView, TMP_InputField chatInput, ChatPanel chatPanel)
		{
		}

		[Token(Token = "0x6003DC0")]
		[Address(RVA = "0x42B78B0", Offset = "0x42B78B0", VA = "0x42B78B0", Slot = "4")]
		public void OnPointerClick(PointerEventData eventData)
		{
		}

		[Token(Token = "0x6003DC1")]
		[Address(RVA = "0x42B78D0", Offset = "0x42B78D0", VA = "0x42B78D0")]
		public ChatLineClickHandler()
		{
		}
	}

	[Token(Token = "0x2000626")]
	[CompilerGenerated]
	private sealed class _003CResetPMToggleActive_003Ed__123 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D99")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D9A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D9B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ChatPanel _003C_003E4__this;

		[Token(Token = "0x17000BB0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003DE7")]
			[Address(RVA = "0x42B8390", Offset = "0x42B8390", VA = "0x42B8390", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BB1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003DE9")]
			[Address(RVA = "0x42B83E0", Offset = "0x42B83E0", VA = "0x42B83E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003DE4")]
		[Address(RVA = "0x42B82B0", Offset = "0x42B82B0", VA = "0x42B82B0")]
		[DebuggerHidden]
		public _003CResetPMToggleActive_003Ed__123(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003DE5")]
		[Address(RVA = "0x42B82D0", Offset = "0x42B82D0", VA = "0x42B82D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003DE6")]
		[Address(RVA = "0x42B82E0", Offset = "0x42B82E0", VA = "0x42B82E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003DE8")]
		[Address(RVA = "0x42B83A0", Offset = "0x42B83A0", VA = "0x42B83A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000627")]
	[CompilerGenerated]
	private sealed class _003CShowTemporaryTooltip_003Ed__78 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D9C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D9D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D9E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public TextMeshProUGUI tooltip;

		[Token(Token = "0x4001D9F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string message;

		[Token(Token = "0x4001DA0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public float duration;

		[Token(Token = "0x4001DA1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private string _003Cprev_003E5__2;

		[Token(Token = "0x4001DA2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private float _003CprevSize_003E5__3;

		[Token(Token = "0x17000BB2")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003DED")]
			[Address(RVA = "0x42B85F0", Offset = "0x42B85F0", VA = "0x42B85F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BB3")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003DEF")]
			[Address(RVA = "0x42B8640", Offset = "0x42B8640", VA = "0x42B8640", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003DEA")]
		[Address(RVA = "0x42B83F0", Offset = "0x42B83F0", VA = "0x42B83F0")]
		[DebuggerHidden]
		public _003CShowTemporaryTooltip_003Ed__78(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003DEB")]
		[Address(RVA = "0x42B8410", Offset = "0x42B8410", VA = "0x42B8410", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003DEC")]
		[Address(RVA = "0x42B8420", Offset = "0x42B8420", VA = "0x42B8420", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003DEE")]
		[Address(RVA = "0x42B8600", Offset = "0x42B8600", VA = "0x42B8600", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001D20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private TMP_InputField _inputField;

	[Token(Token = "0x4001D21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private GameObject _panel;

	[Token(Token = "0x4001D22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private ChatScrollRect _scrollRect;

	[Token(Token = "0x4001D23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private RectTransform _chatPanelRect;

	[Token(Token = "0x4001D24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private RectTransform _inputFieldRect;

	[Token(Token = "0x4001D25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private RectTransform _contentRect;

	[Token(Token = "0x4001D26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private RectTransform _scrollbarRect;

	[Token(Token = "0x4001D27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Transform _caret;

	[Token(Token = "0x4001D28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected readonly List<ChatLineView> _linesPool;

	[Token(Token = "0x4001D29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private readonly Dictionary<GameObject, TMP_InputField> _cachedInputFields;

	[Token(Token = "0x4001D2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private readonly List<ChatManager.ChatDisplayLine> _visibleMessages;

	[Token(Token = "0x4001D2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GameObject _currentSelectedObject;

	[Token(Token = "0x4001D2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool _caretInitialized;

	[Token(Token = "0x4001D2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC9")]
	public bool IgnoreNextActivation;

	[Token(Token = "0x4001D2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex _richTextPattern;

	[Token(Token = "0x4001D2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Regex _emojiPattern;

	[Token(Token = "0x4001D30")]
	private const string StickerHiddenMarker = "\u200b\u200b";

	[Token(Token = "0x4001D31")]
	private const float ManualLineBottomPadding = 10f;

	[Token(Token = "0x4001D32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	private float _lastTypeTime;

	[Token(Token = "0x4001D33")]
	private const float TYPING_DEBOUNCE = 0.2f;

	[Token(Token = "0x4001D34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private bool _requestCanvasUpdate;

	[Token(Token = "0x4001D35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Player _currentPMTarget;

	[Token(Token = "0x4001D36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private bool _inPMMode;

	[Token(Token = "0x4001D37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private List<Player> _pmPartners;

	[Token(Token = "0x4001D38")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private int _currentPMIndex;

	[Token(Token = "0x4001D39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
	private bool _pmToggleActive;

	[Token(Token = "0x4001D3A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private Coroutine _pmToggleCoroutine;

	[Token(Token = "0x4001D3B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private GameObject _emojiPanel;

	[Token(Token = "0x4001D3C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private bool _emojiPanelActive;

	[Token(Token = "0x4001D3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private Button _emojiButton;

	[Token(Token = "0x4001D3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private bool _chatHidden;

	[Token(Token = "0x4001D3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x119")]
	private bool _wasChatUIClicked;

	[Token(Token = "0x4001D40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11A")]
	private bool _isInteractingWithChatUI;

	[Token(Token = "0x4001D41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Dictionary<GameObject, RectTransform> _cachedRectTransforms;

	[Token(Token = "0x4001D42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private int _desiredCaretPosition;

	[Token(Token = "0x4001D43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<string, int> EmojiNameToIndex;

	[Token(Token = "0x4001D44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12C")]
	private int _emojiPage;

	[Token(Token = "0x4001D45")]
	private const int EMOJIS_PER_PAGE = 16;

	[Token(Token = "0x4001D46")]
	private const int MAX_EMOJI_INDEX = 140;

	[Token(Token = "0x4001D47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private Button _emojiNextButton;

	[Token(Token = "0x4001D48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private Button _emojiBackButton;

	[Token(Token = "0x4001D49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private TextMeshProUGUI _emojiPageText;

	[Token(Token = "0x4001D4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private Button _emojiModeButton;

	[Token(Token = "0x4001D4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private Button _stickerModeButton;

	[Token(Token = "0x4001D4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private EmojiPanelMode _panelMode;

	[Token(Token = "0x4001D4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x15C")]
	private bool _stickerInserted;

	[Token(Token = "0x4001D4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private string _stickerTag;

	[Token(Token = "0x4001D4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private float _lastStickerSentTime;

	[Token(Token = "0x4001D50")]
	private const float STICKER_COOLDOWN = 15f;

	[Token(Token = "0x4001D51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private Coroutine _tooltipCoroutine;

	[Token(Token = "0x4001D52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private TextMeshProUGUI _chatModeLabel;

	[Token(Token = "0x4001D53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private TextMeshProUGUI _placeholderText;

	[Token(Token = "0x4001D54")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private CanvasGroup _placeholderCanvasGroup;

	[Token(Token = "0x4001D55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private GameObject _notificationBadge;

	[Token(Token = "0x4001D56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private bool _lastNotificationBadgeState;

	[Token(Token = "0x4001D57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Sprite _cachedCircleSprite;

	[Token(Token = "0x4001D58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x199")]
	private bool _isDestroyed;

	[Token(Token = "0x4001D59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19C")]
	private int _actualPoolSize;

	[Token(Token = "0x17000BAA")]
	private int POOL_SIZE
	{
		[Token(Token = "0x6003D5C")]
		[Address(RVA = "0x42A6D70", Offset = "0x42A6D70", VA = "0x42A6D70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BAB")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003D5D")]
		[Address(RVA = "0x42A6DD0", Offset = "0x42A6DD0", VA = "0x42A6DD0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003D5E")]
	[Address(RVA = "0x42A6E00", Offset = "0x42A6E00", VA = "0x42A6E00")]
	static ChatPanel()
	{
	}

	[Token(Token = "0x6003D5F")]
	[Address(RVA = "0x42A6FB0", Offset = "0x42A6FB0", VA = "0x42A6FB0")]
	private string ProcessEmojiCodes(string text)
	{
		return null;
	}

	[Token(Token = "0x6003D60")]
	[Address(RVA = "0x42A70A0", Offset = "0x42A70A0", VA = "0x42A70A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003D61")]
	[Address(RVA = "0x42A99D0", Offset = "0x42A99D0", VA = "0x42A99D0")]
	private void SetupChatModeLabel()
	{
	}

	[Token(Token = "0x6003D62")]
	[Address(RVA = "0x42AB470", Offset = "0x42AB470", VA = "0x42AB470")]
	private void UpdateChatModeElements()
	{
	}

	[Token(Token = "0x6003D63")]
	[Address(RVA = "0x42AB2B0", Offset = "0x42AB2B0", VA = "0x42AB2B0")]
	private void UpdateChatModeLabel()
	{
	}

	[Token(Token = "0x6003D64")]
	[Address(RVA = "0x42A9D70", Offset = "0x42A9D70", VA = "0x42A9D70")]
	private void SetupNotificationBadge()
	{
	}

	[Token(Token = "0x6003D65")]
	[Address(RVA = "0x42ABA40", Offset = "0x42ABA40", VA = "0x42ABA40")]
	private void OnNotificationBadgeClicked()
	{
	}

	[Token(Token = "0x6003D66")]
	[Address(RVA = "0x42AB810", Offset = "0x42AB810", VA = "0x42AB810")]
	private static Sprite GetCircleSprite()
	{
		return null;
	}

	[Token(Token = "0x6003D67")]
	[Address(RVA = "0x42AA610", Offset = "0x42AA610", VA = "0x42AA610")]
	private void SetupEmojiButton()
	{
	}

	[Token(Token = "0x6003D68")]
	[Address(RVA = "0x42ABE30", Offset = "0x42ABE30", VA = "0x42ABE30")]
	private void ToggleEmojiPanel()
	{
	}

	[Token(Token = "0x6003D69")]
	[Address(RVA = "0x42ABFB0", Offset = "0x42ABFB0", VA = "0x42ABFB0")]
	private void CreateEmojiPanel()
	{
	}

	[Token(Token = "0x6003D6A")]
	[Address(RVA = "0x42AD7A0", Offset = "0x42AD7A0", VA = "0x42AD7A0")]
	private void AddEmojiButtons(TextMeshProUGUI tooltipText)
	{
	}

	[Token(Token = "0x6003D6B")]
	[Address(RVA = "0x42ADEF0", Offset = "0x42ADEF0", VA = "0x42ADEF0")]
	private void CreateSpriteButton(GridLayoutGroup emojiGrid, TextMeshProUGUI tooltipText, int spriteIndex, bool isSticker)
	{
	}

	[Token(Token = "0x6003D6C")]
	[Address(RVA = "0x42AE830", Offset = "0x42AE830", VA = "0x42AE830")]
	[IteratorStateMachine(typeof(_003CShowTemporaryTooltip_003Ed__78))]
	private IEnumerator ShowTemporaryTooltip(TextMeshProUGUI tooltip, string message, float duration)
	{
		return null;
	}

	[Token(Token = "0x6003D6D")]
	[Address(RVA = "0x42AE8D0", Offset = "0x42AE8D0", VA = "0x42AE8D0")]
	private void ChangeEmojiPage(int delta, TextMeshProUGUI tooltipText)
	{
	}

	[Token(Token = "0x6003D6E")]
	[Address(RVA = "0x42ADD10", Offset = "0x42ADD10", VA = "0x42ADD10")]
	private void SetPanelMode(EmojiPanelMode mode)
	{
	}

	[Token(Token = "0x6003D6F")]
	[Address(RVA = "0x42AE900", Offset = "0x42AE900", VA = "0x42AE900")]
	private void InsertSticker(int spriteIndex)
	{
	}

	[Token(Token = "0x6003D70")]
	[Address(RVA = "0x42AEF30", Offset = "0x42AEF30", VA = "0x42AEF30")]
	private void InsertEmoji(int spriteIndex)
	{
	}

	[Token(Token = "0x6003D71")]
	[Address(RVA = "0x42AAF70", Offset = "0x42AAF70", VA = "0x42AAF70")]
	public void Sync()
	{
	}

	[Token(Token = "0x6003D72")]
	[Address(RVA = "0x42AFD80", Offset = "0x42AFD80", VA = "0x42AFD80")]
	private void RefreshDisplayedMessages()
	{
	}

	[Token(Token = "0x6003D73")]
	[Address(RVA = "0x42B0DA0", Offset = "0x42B0DA0", VA = "0x42B0DA0")]
	private void UpdateVisibleMessages()
	{
	}

	[Token(Token = "0x6003D74")]
	[Address(RVA = "0x42B0DB0", Offset = "0x42B0DB0", VA = "0x42B0DB0")]
	private int GetEffectivePoolSize()
	{
		return default(int);
	}

	[Token(Token = "0x6003D75")]
	[Address(RVA = "0x42B06E0", Offset = "0x42B06E0", VA = "0x42B06E0")]
	private void UpdateVisibleMessages(List<ChatManager.ChatDisplayLine> lines)
	{
	}

	[Token(Token = "0x6003D76")]
	[Address(RVA = "0x42A98D0", Offset = "0x42A98D0", VA = "0x42A98D0")]
	private void ConfigureManualLineLayout()
	{
	}

	[Token(Token = "0x6003D77")]
	[Address(RVA = "0x42B0DF0", Offset = "0x42B0DF0", VA = "0x42B0DF0")]
	private bool LayoutVisibleRows()
	{
		return default(bool);
	}

	[Token(Token = "0x6003D78")]
	[Address(RVA = "0x42B1260", Offset = "0x42B1260", VA = "0x42B1260")]
	private void UpdateBackgroundVisibility(bool hasMessages)
	{
	}

	[Token(Token = "0x6003D79")]
	[Address(RVA = "0x42ABC70", Offset = "0x42ABC70", VA = "0x42ABC70")]
	public void Activate()
	{
	}

	[Token(Token = "0x6003D7A")]
	[Address(RVA = "0x42ABBF0", Offset = "0x42ABBF0", VA = "0x42ABBF0")]
	public bool IsInputActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6003D7B")]
	[Address(RVA = "0x42B1490", Offset = "0x42B1490", VA = "0x42B1490")]
	public void OnEndEdit(string text)
	{
	}

	[Token(Token = "0x6003D7C")]
	[Address(RVA = "0x42AECC0", Offset = "0x42AECC0", VA = "0x42AECC0")]
	private void SubmitProcessedInput()
	{
	}

	[Token(Token = "0x6003D7D")]
	[Address(RVA = "0x42B1B50", Offset = "0x42B1B50", VA = "0x42B1B50")]
	public void AddLine(string line)
	{
	}

	[Token(Token = "0x6003D7E")]
	[Address(RVA = "0x42B1B60", Offset = "0x42B1B60", VA = "0x42B1B60")]
	public void ReplaceLastLine(string line)
	{
	}

	[Token(Token = "0x6003D7F")]
	[Address(RVA = "0x42B1B70", Offset = "0x42B1B70", VA = "0x42B1B70")]
	public void AddLines(List<string> lines)
	{
	}

	[Token(Token = "0x6003D80")]
	[Address(RVA = "0x42B1CC0", Offset = "0x42B1CC0", VA = "0x42B1CC0")]
	private void InitializeCaret()
	{
	}

	[Token(Token = "0x6003D81")]
	[Address(RVA = "0x42B1E60", Offset = "0x42B1E60", VA = "0x42B1E60")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x6003D82")]
	[Address(RVA = "0x42B25A0", Offset = "0x42B25A0", VA = "0x42B25A0")]
	private void Update()
	{
	}

	[Token(Token = "0x6003D83")]
	[Address(RVA = "0x42B2950", Offset = "0x42B2950", VA = "0x42B2950")]
	private void ToggleChatVisibility()
	{
	}

	[Token(Token = "0x6003D84")]
	[Address(RVA = "0x42AAFA0", Offset = "0x42AAFA0", VA = "0x42AAFA0")]
	private void SetChatHiddenState(bool hidden, bool saveSetting = true)
	{
	}

	[Token(Token = "0x6003D85")]
	[Address(RVA = "0x42B2B00", Offset = "0x42B2B00", VA = "0x42B2B00")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6003D86")]
	[Address(RVA = "0x42B1380", Offset = "0x42B1380", VA = "0x42B1380")]
	private void UpdatePlaceholderVisibility(bool isChatActive)
	{
	}

	[Token(Token = "0x6003D87")]
	[Address(RVA = "0x42B2C60", Offset = "0x42B2C60", VA = "0x42B2C60")]
	public bool IsPointerOverChatUI()
	{
		return default(bool);
	}

	[Token(Token = "0x6003D88")]
	[Address(RVA = "0x42B1660", Offset = "0x42B1660", VA = "0x42B1660")]
	private bool IsMouseOverAnyChatElement(Vector2 mousePosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6003D89")]
	[Address(RVA = "0x42B2A10", Offset = "0x42B2A10", VA = "0x42B2A10")]
	public void UpdateChatInteractionState()
	{
	}

	[Token(Token = "0x6003D8A")]
	[Address(RVA = "0x42AADC0", Offset = "0x42AADC0", VA = "0x42AADC0")]
	protected ChatLineView CreateLine(string text)
	{
		return null;
	}

	[Token(Token = "0x6003D8B")]
	[Address(RVA = "0x42B2EA0", Offset = "0x42B2EA0", VA = "0x42B2EA0")]
	private void OnScroll(Vector2 scrollPosition)
	{
	}

	[Token(Token = "0x6003D8C")]
	[Address(RVA = "0x42B2EB0", Offset = "0x42B2EB0", VA = "0x42B2EB0")]
	private void InGameManager_PlayerInfoUpdated(int actorNumber)
	{
	}

	[Token(Token = "0x6003D8D")]
	[Address(RVA = "0x42B3030", Offset = "0x42B3030", VA = "0x42B3030")]
	private TMP_InputField GetCachedInputField(GameObject obj)
	{
		return null;
	}

	[Token(Token = "0x6003D8E")]
	[Address(RVA = "0x42B3170", Offset = "0x42B3170", VA = "0x42B3170")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6003D8F")]
	[Address(RVA = "0x42B36E0", Offset = "0x42B36E0", VA = "0x42B36E0")]
	private void OnValueChanged(string text)
	{
	}

	[Token(Token = "0x6003D90")]
	[Address(RVA = "0x42B3840", Offset = "0x42B3840", VA = "0x42B3840")]
	public string GetInputText()
	{
		return null;
	}

	[Token(Token = "0x6003D91")]
	[Address(RVA = "0x42B38D0", Offset = "0x42B38D0", VA = "0x42B38D0")]
	public void SetInputText(string newText)
	{
	}

	[Token(Token = "0x6003D92")]
	[Address(RVA = "0x42AAAB0", Offset = "0x42AAAB0", VA = "0x42AAAB0")]
	public void EnterPMMode(Player target)
	{
	}

	[Token(Token = "0x6003D93")]
	[Address(RVA = "0x42B3F70", Offset = "0x42B3F70", VA = "0x42B3F70")]
	public void ExitPMMode()
	{
	}

	[Token(Token = "0x6003D94")]
	[Address(RVA = "0x42B40E0", Offset = "0x42B40E0", VA = "0x42B40E0")]
	public void RemovePMPartner(Player player)
	{
	}

	[Token(Token = "0x6003D95")]
	[Address(RVA = "0x42AF5A0", Offset = "0x42AF5A0", VA = "0x42AF5A0")]
	private void ValidatePMState()
	{
	}

	[Token(Token = "0x6003D96")]
	[Address(RVA = "0x42B42F0", Offset = "0x42B42F0", VA = "0x42B42F0")]
	public bool IsTogglingPM()
	{
		return default(bool);
	}

	[Token(Token = "0x6003D97")]
	[Address(RVA = "0x42B3A00", Offset = "0x42B3A00", VA = "0x42B3A00")]
	[IteratorStateMachine(typeof(_003CResetPMToggleActive_003Ed__123))]
	private IEnumerator ResetPMToggleActive()
	{
		return null;
	}

	[Token(Token = "0x6003D98")]
	[Address(RVA = "0x42B4300", Offset = "0x42B4300", VA = "0x42B4300")]
	public bool IsInPMMode()
	{
		return default(bool);
	}

	[Token(Token = "0x6003D99")]
	[Address(RVA = "0x42B2290", Offset = "0x42B2290", VA = "0x42B2290")]
	private void CycleToPMPartner()
	{
	}

	[Token(Token = "0x6003D9A")]
	[Address(RVA = "0x42B4310", Offset = "0x42B4310", VA = "0x42B4310")]
	private List<Player> GetPmPartnersByRecency()
	{
		return null;
	}

	[Token(Token = "0x6003D9B")]
	[Address(RVA = "0x42B3A70", Offset = "0x42B3A70", VA = "0x42B3A70")]
	public void AddPMPartner(Player player)
	{
	}

	[Token(Token = "0x6003D9C")]
	[Address(RVA = "0x42B4C20", Offset = "0x42B4C20", VA = "0x42B4C20")]
	public Player GetCurrentPMTarget()
	{
		return null;
	}

	[Token(Token = "0x6003D9D")]
	[Address(RVA = "0x42B4C30", Offset = "0x42B4C30", VA = "0x42B4C30")]
	public void ResetPMState()
	{
	}

	[Token(Token = "0x6003D9E")]
	[Address(RVA = "0x42B2980", Offset = "0x42B2980", VA = "0x42B2980")]
	public void CloseEmojiPanel()
	{
	}

	[Token(Token = "0x6003D9F")]
	[Address(RVA = "0x42B4CD0", Offset = "0x42B4CD0", VA = "0x42B4CD0")]
	public void HandleCursorStateChange(CursorState newState)
	{
	}

	[Token(Token = "0x6003DA0")]
	[Address(RVA = "0x42B4D60", Offset = "0x42B4D60", VA = "0x42B4D60")]
	public void MoveCaretToEnd()
	{
	}

	[Token(Token = "0x6003DA1")]
	[Address(RVA = "0x42B4E70", Offset = "0x42B4E70", VA = "0x42B4E70")]
	public bool ShouldBlockGameInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6003DA2")]
	[Address(RVA = "0x42B4F10", Offset = "0x42B4F10", VA = "0x42B4F10")]
	public bool ShouldBlockKeybind(KeyCode keyCode)
	{
		return default(bool);
	}

	[Token(Token = "0x6003DA3")]
	[Address(RVA = "0x42AF0A0", Offset = "0x42AF0A0", VA = "0x42AF0A0")]
	public void RefreshPoolSize()
	{
	}

	[Token(Token = "0x6003DA4")]
	[Address(RVA = "0x42B4FC0", Offset = "0x42B4FC0", VA = "0x42B4FC0")]
	public bool IsInteractingWithChatUI()
	{
		return default(bool);
	}

	[Token(Token = "0x6003DA5")]
	[Address(RVA = "0x42B38E0", Offset = "0x42B38E0", VA = "0x42B38E0")]
	public void SetTextAndPositionCaret(string newText)
	{
	}

	[Token(Token = "0x6003DA6")]
	[Address(RVA = "0x42B3E30", Offset = "0x42B3E30", VA = "0x42B3E30")]
	public void SetTextAndCaretPosition(string newText, int caretPosition)
	{
	}

	[Token(Token = "0x6003DA7")]
	[Address(RVA = "0x42B1A10", Offset = "0x42B1A10", VA = "0x42B1A10")]
	private RectTransform GetCachedRectTransform(GameObject obj)
	{
		return null;
	}

	[Token(Token = "0x6003DA8")]
	[Address(RVA = "0x42B3560", Offset = "0x42B3560", VA = "0x42B3560")]
	private void SaveCurrentConversation()
	{
	}

	[Token(Token = "0x6003DA9")]
	[Address(RVA = "0x42AF7D0", Offset = "0x42AF7D0", VA = "0x42AF7D0")]
	private void RestorePMPartners()
	{
	}

	[Token(Token = "0x6003DAA")]
	[Address(RVA = "0x42B5050", Offset = "0x42B5050", VA = "0x42B5050")]
	public ChatPanel()
	{
	}
}
