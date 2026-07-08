using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using Photon.Realtime;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005CF")]
internal class ChatPanel : BasePanel
{
	[Token(Token = "0x20005D0")]
	private enum EmojiPanelMode
	{
		[Token(Token = "0x4001C46")]
		Emoji,
		[Token(Token = "0x4001C47")]
		Sticker
	}

	[Token(Token = "0x20005D1")]
	private static class UIAnchors
	{
		[Token(Token = "0x4001C48")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly Vector2 TopStretch;

		[Token(Token = "0x4001C49")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static readonly Vector2 TopStretchEnd;

		[Token(Token = "0x4001C4A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public static readonly Vector2 FullStretch;

		[Token(Token = "0x4001C4B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public static readonly Vector2 FullStretchStart;

		[Token(Token = "0x4001C4C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public static readonly Vector2 RightStretch;

		[Token(Token = "0x4001C4D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public static readonly Vector2 RightStretchEnd;

		[Token(Token = "0x4001C4E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public static readonly Vector2 CenterMiddle;

		[Token(Token = "0x4001C4F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public static readonly Vector2 TopCenter;

		[Token(Token = "0x4001C50")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public static readonly Vector2 RightCenter;

		[Token(Token = "0x4001C51")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public static readonly Vector2 LeftCenter;

		[Token(Token = "0x4001C52")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public static readonly Vector2 BottomLeft;

		[Token(Token = "0x4001C53")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public static readonly Vector2 TopRight;
	}

	[Token(Token = "0x20005D2")]
	private class ChatLineClickHandler : MonoBehaviour, IPointerClickHandler, IEventSystemHandler
	{
		[Token(Token = "0x4001C54")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private TextMeshProUGUI _textComponent;

		[Token(Token = "0x4001C55")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TMP_InputField _chatInput;

		[Token(Token = "0x4001C56")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ChatPanel _chatPanel;

		[Token(Token = "0x6003B93")]
		[Address(RVA = "0x3FA69A0", Offset = "0x3FA69A0", VA = "0x3FA69A0")]
		public void Initialize(TextMeshProUGUI textComponent, TMP_InputField chatInput, ChatPanel chatPanel)
		{
		}

		[Token(Token = "0x6003B94")]
		[Address(RVA = "0x3FA69F0", Offset = "0x3FA69F0", VA = "0x3FA69F0", Slot = "4")]
		public void OnPointerClick(PointerEventData eventData)
		{
		}

		[Token(Token = "0x6003B95")]
		[Address(RVA = "0x3FA6C40", Offset = "0x3FA6C40", VA = "0x3FA6C40")]
		public ChatLineClickHandler()
		{
		}
	}

	[Token(Token = "0x20005DE")]
	[CompilerGenerated]
	private sealed class _003CResetPMToggleActive_003Ed__119 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C69")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C6A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C6B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ChatPanel _003C_003E4__this;

		[Token(Token = "0x17000B41")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003BBB")]
			[Address(RVA = "0x3FA7700", Offset = "0x3FA7700", VA = "0x3FA7700", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B42")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003BBD")]
			[Address(RVA = "0x3FA7750", Offset = "0x3FA7750", VA = "0x3FA7750", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003BB8")]
		[Address(RVA = "0x3FA7620", Offset = "0x3FA7620", VA = "0x3FA7620")]
		[DebuggerHidden]
		public _003CResetPMToggleActive_003Ed__119(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003BB9")]
		[Address(RVA = "0x3FA7640", Offset = "0x3FA7640", VA = "0x3FA7640", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003BBA")]
		[Address(RVA = "0x3FA7650", Offset = "0x3FA7650", VA = "0x3FA7650", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003BBC")]
		[Address(RVA = "0x3FA7710", Offset = "0x3FA7710", VA = "0x3FA7710", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20005DF")]
	[CompilerGenerated]
	private sealed class _003CShowTemporaryTooltip_003Ed__78 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C6C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C6D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C6E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public TextMeshProUGUI tooltip;

		[Token(Token = "0x4001C6F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string message;

		[Token(Token = "0x4001C70")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public float duration;

		[Token(Token = "0x4001C71")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private string _003Cprev_003E5__2;

		[Token(Token = "0x4001C72")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private float _003CprevSize_003E5__3;

		[Token(Token = "0x17000B43")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003BC1")]
			[Address(RVA = "0x3FA7960", Offset = "0x3FA7960", VA = "0x3FA7960", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B44")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003BC3")]
			[Address(RVA = "0x3FA79B0", Offset = "0x3FA79B0", VA = "0x3FA79B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003BBE")]
		[Address(RVA = "0x3FA7760", Offset = "0x3FA7760", VA = "0x3FA7760")]
		[DebuggerHidden]
		public _003CShowTemporaryTooltip_003Ed__78(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003BBF")]
		[Address(RVA = "0x3FA7780", Offset = "0x3FA7780", VA = "0x3FA7780", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003BC0")]
		[Address(RVA = "0x3FA7790", Offset = "0x3FA7790", VA = "0x3FA7790", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003BC2")]
		[Address(RVA = "0x3FA7970", Offset = "0x3FA7970", VA = "0x3FA7970", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001C0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private TMP_InputField _inputField;

	[Token(Token = "0x4001C0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private GameObject _panel;

	[Token(Token = "0x4001C0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private ChatScrollRect _scrollRect;

	[Token(Token = "0x4001C0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private RectTransform _chatPanelRect;

	[Token(Token = "0x4001C0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private RectTransform _inputFieldRect;

	[Token(Token = "0x4001C10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private RectTransform _contentRect;

	[Token(Token = "0x4001C11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private RectTransform _scrollbarRect;

	[Token(Token = "0x4001C12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Transform _caret;

	[Token(Token = "0x4001C13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected readonly List<TMP_InputField> _linesPool;

	[Token(Token = "0x4001C14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private readonly Dictionary<GameObject, TMP_InputField> _cachedInputFields;

	[Token(Token = "0x4001C15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private readonly List<string> _allMessages;

	[Token(Token = "0x4001C16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GameObject _currentSelectedObject;

	[Token(Token = "0x4001C17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool _caretInitialized;

	[Token(Token = "0x4001C18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	private int _currentLineIndex;

	[Token(Token = "0x4001C19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public bool IgnoreNextActivation;

	[Token(Token = "0x4001C1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex _richTextPattern;

	[Token(Token = "0x4001C1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Regex _emojiPattern;

	[Token(Token = "0x4001C1C")]
	private const string StickerHiddenMarker = "\u200b\u200b";

	[Token(Token = "0x4001C1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD4")]
	private float _lastTypeTime;

	[Token(Token = "0x4001C1E")]
	private const float TYPING_DEBOUNCE = 0.2f;

	[Token(Token = "0x4001C1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private bool _requestCanvasUpdate;

	[Token(Token = "0x4001C20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Player _currentPMTarget;

	[Token(Token = "0x4001C21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private bool _inPMMode;

	[Token(Token = "0x4001C22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private List<Player> _pmPartners;

	[Token(Token = "0x4001C23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private int _currentPMIndex;

	[Token(Token = "0x4001C24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xFC")]
	private bool _pmToggleActive;

	[Token(Token = "0x4001C25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private Coroutine _pmToggleCoroutine;

	[Token(Token = "0x4001C26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private GameObject _emojiPanel;

	[Token(Token = "0x4001C27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private bool _emojiPanelActive;

	[Token(Token = "0x4001C28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private Button _emojiButton;

	[Token(Token = "0x4001C29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private bool _chatHidden;

	[Token(Token = "0x4001C2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x121")]
	private bool _wasChatUIClicked;

	[Token(Token = "0x4001C2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x122")]
	private bool _isInteractingWithChatUI;

	[Token(Token = "0x4001C2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private Dictionary<GameObject, RectTransform> _cachedRectTransforms;

	[Token(Token = "0x4001C2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private int _desiredCaretPosition;

	[Token(Token = "0x4001C2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<string, int> EmojiNameToIndex;

	[Token(Token = "0x4001C2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x134")]
	private int _emojiPage;

	[Token(Token = "0x4001C30")]
	private const int EMOJIS_PER_PAGE = 16;

	[Token(Token = "0x4001C31")]
	private const int MAX_EMOJI_INDEX = 140;

	[Token(Token = "0x4001C32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private Button _emojiNextButton;

	[Token(Token = "0x4001C33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private Button _emojiBackButton;

	[Token(Token = "0x4001C34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private TextMeshProUGUI _emojiPageText;

	[Token(Token = "0x4001C35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private Button _emojiModeButton;

	[Token(Token = "0x4001C36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private Button _stickerModeButton;

	[Token(Token = "0x4001C37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private EmojiPanelMode _panelMode;

	[Token(Token = "0x4001C38")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x164")]
	private bool _stickerInserted;

	[Token(Token = "0x4001C39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private string _stickerTag;

	[Token(Token = "0x4001C3A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private float _lastStickerSentTime;

	[Token(Token = "0x4001C3B")]
	private const float STICKER_COOLDOWN = 15f;

	[Token(Token = "0x4001C3C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private Coroutine _tooltipCoroutine;

	[Token(Token = "0x4001C3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private TextMeshProUGUI _chatModeLabel;

	[Token(Token = "0x4001C3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private TextMeshProUGUI _placeholderText;

	[Token(Token = "0x4001C3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private CanvasGroup _placeholderCanvasGroup;

	[Token(Token = "0x4001C40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private GameObject _notificationBadge;

	[Token(Token = "0x4001C41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private bool _lastNotificationBadgeState;

	[Token(Token = "0x4001C42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Sprite _cachedCircleSprite;

	[Token(Token = "0x4001C43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A1")]
	private bool _isDestroyed;

	[Token(Token = "0x4001C44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A4")]
	private int _actualPoolSize;

	[Token(Token = "0x17000B3F")]
	private int POOL_SIZE
	{
		[Token(Token = "0x6003B46")]
		[Address(RVA = "0x3F986F0", Offset = "0x3F986F0", VA = "0x3F986F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B40")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003B47")]
		[Address(RVA = "0x3F98750", Offset = "0x3F98750", VA = "0x3F98750", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003B48")]
	[Address(RVA = "0x3F98780", Offset = "0x3F98780", VA = "0x3F98780")]
	static ChatPanel()
	{
	}

	[Token(Token = "0x6003B49")]
	[Address(RVA = "0x3F98930", Offset = "0x3F98930", VA = "0x3F98930")]
	private string ProcessEmojiCodes(string text)
	{
		return null;
	}

	[Token(Token = "0x6003B4A")]
	[Address(RVA = "0x3F98A20", Offset = "0x3F98A20", VA = "0x3F98A20", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003B4B")]
	[Address(RVA = "0x3F9B260", Offset = "0x3F9B260", VA = "0x3F9B260")]
	private void SetupChatModeLabel()
	{
	}

	[Token(Token = "0x6003B4C")]
	[Address(RVA = "0x3F9D200", Offset = "0x3F9D200", VA = "0x3F9D200")]
	private void UpdateChatModeElements()
	{
	}

	[Token(Token = "0x6003B4D")]
	[Address(RVA = "0x3F9D040", Offset = "0x3F9D040", VA = "0x3F9D040")]
	private void UpdateChatModeLabel()
	{
	}

	[Token(Token = "0x6003B4E")]
	[Address(RVA = "0x3F9B600", Offset = "0x3F9B600", VA = "0x3F9B600")]
	private void SetupNotificationBadge()
	{
	}

	[Token(Token = "0x6003B4F")]
	[Address(RVA = "0x3F9D7D0", Offset = "0x3F9D7D0", VA = "0x3F9D7D0")]
	private void OnNotificationBadgeClicked()
	{
	}

	[Token(Token = "0x6003B50")]
	[Address(RVA = "0x3F9D5A0", Offset = "0x3F9D5A0", VA = "0x3F9D5A0")]
	private static Sprite GetCircleSprite()
	{
		return null;
	}

	[Token(Token = "0x6003B51")]
	[Address(RVA = "0x3F9BEA0", Offset = "0x3F9BEA0", VA = "0x3F9BEA0")]
	private void SetupEmojiButton()
	{
	}

	[Token(Token = "0x6003B52")]
	[Address(RVA = "0x3F9DBC0", Offset = "0x3F9DBC0", VA = "0x3F9DBC0")]
	private void ToggleEmojiPanel()
	{
	}

	[Token(Token = "0x6003B53")]
	[Address(RVA = "0x3F9DD40", Offset = "0x3F9DD40", VA = "0x3F9DD40")]
	private void CreateEmojiPanel()
	{
	}

	[Token(Token = "0x6003B54")]
	[Address(RVA = "0x3F9F530", Offset = "0x3F9F530", VA = "0x3F9F530")]
	private void AddEmojiButtons(TextMeshProUGUI tooltipText)
	{
	}

	[Token(Token = "0x6003B55")]
	[Address(RVA = "0x3F9FC80", Offset = "0x3F9FC80", VA = "0x3F9FC80")]
	private void CreateSpriteButton(GridLayoutGroup emojiGrid, TextMeshProUGUI tooltipText, int spriteIndex, bool isSticker)
	{
	}

	[Token(Token = "0x6003B56")]
	[Address(RVA = "0x3FA05C0", Offset = "0x3FA05C0", VA = "0x3FA05C0")]
	[IteratorStateMachine(typeof(_003CShowTemporaryTooltip_003Ed__78))]
	private IEnumerator ShowTemporaryTooltip(TextMeshProUGUI tooltip, string message, float duration)
	{
		return null;
	}

	[Token(Token = "0x6003B57")]
	[Address(RVA = "0x3FA0660", Offset = "0x3FA0660", VA = "0x3FA0660")]
	private void ChangeEmojiPage(int delta, TextMeshProUGUI tooltipText)
	{
	}

	[Token(Token = "0x6003B58")]
	[Address(RVA = "0x3F9FAA0", Offset = "0x3F9FAA0", VA = "0x3F9FAA0")]
	private void SetPanelMode(EmojiPanelMode mode)
	{
	}

	[Token(Token = "0x6003B59")]
	[Address(RVA = "0x3FA0690", Offset = "0x3FA0690", VA = "0x3FA0690")]
	private void InsertSticker(int spriteIndex)
	{
	}

	[Token(Token = "0x6003B5A")]
	[Address(RVA = "0x3FA0CC0", Offset = "0x3FA0CC0", VA = "0x3FA0CC0")]
	private void InsertEmoji(int spriteIndex)
	{
	}

	[Token(Token = "0x6003B5B")]
	[Address(RVA = "0x3F9D010", Offset = "0x3F9D010", VA = "0x3F9D010")]
	public void Sync()
	{
	}

	[Token(Token = "0x6003B5C")]
	[Address(RVA = "0x3FA1A10", Offset = "0x3FA1A10", VA = "0x3FA1A10")]
	private void RefreshDisplayedMessages()
	{
	}

	[Token(Token = "0x6003B5D")]
	[Address(RVA = "0x3FA2860", Offset = "0x3FA2860", VA = "0x3FA2860")]
	private void UpdateVisibleMessages()
	{
	}

	[Token(Token = "0x6003B5E")]
	[Address(RVA = "0x3FA2870", Offset = "0x3FA2870", VA = "0x3FA2870")]
	private int GetEffectivePoolSize()
	{
		return default(int);
	}

	[Token(Token = "0x6003B5F")]
	[Address(RVA = "0x3FA2250", Offset = "0x3FA2250", VA = "0x3FA2250")]
	private void UpdateVisibleMessages(List<string> lines)
	{
	}

	[Token(Token = "0x6003B60")]
	[Address(RVA = "0x3FA28B0", Offset = "0x3FA28B0", VA = "0x3FA28B0")]
	private void UpdateBackgroundVisibility(bool hasMessages)
	{
	}

	[Token(Token = "0x6003B61")]
	[Address(RVA = "0x3F9DA00", Offset = "0x3F9DA00", VA = "0x3F9DA00")]
	public void Activate()
	{
	}

	[Token(Token = "0x6003B62")]
	[Address(RVA = "0x3F9D980", Offset = "0x3F9D980", VA = "0x3F9D980")]
	public bool IsInputActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6003B63")]
	[Address(RVA = "0x3FA2AE0", Offset = "0x3FA2AE0", VA = "0x3FA2AE0")]
	public void OnEndEdit(string text)
	{
	}

	[Token(Token = "0x6003B64")]
	[Address(RVA = "0x3FA0A50", Offset = "0x3FA0A50", VA = "0x3FA0A50")]
	private void SubmitProcessedInput()
	{
	}

	[Token(Token = "0x6003B65")]
	[Address(RVA = "0x3FA31C0", Offset = "0x3FA31C0", VA = "0x3FA31C0")]
	public void AddLine(string line)
	{
	}

	[Token(Token = "0x6003B66")]
	[Address(RVA = "0x3FA3260", Offset = "0x3FA3260", VA = "0x3FA3260")]
	public void ReplaceLastLine(string line)
	{
	}

	[Token(Token = "0x6003B67")]
	[Address(RVA = "0x3FA3320", Offset = "0x3FA3320", VA = "0x3FA3320")]
	public void AddLines(List<string> lines)
	{
	}

	[Token(Token = "0x6003B68")]
	[Address(RVA = "0x3FA3470", Offset = "0x3FA3470", VA = "0x3FA3470")]
	private void InitializeCaret()
	{
	}

	[Token(Token = "0x6003B69")]
	[Address(RVA = "0x3FA3610", Offset = "0x3FA3610", VA = "0x3FA3610")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x6003B6A")]
	[Address(RVA = "0x3FA3D50", Offset = "0x3FA3D50", VA = "0x3FA3D50")]
	private void Update()
	{
	}

	[Token(Token = "0x6003B6B")]
	[Address(RVA = "0x3FA4100", Offset = "0x3FA4100", VA = "0x3FA4100")]
	private void ToggleChatVisibility()
	{
	}

	[Token(Token = "0x6003B6C")]
	[Address(RVA = "0x3F9C340", Offset = "0x3F9C340", VA = "0x3F9C340")]
	private void SetChatHiddenState(bool hidden, bool saveSetting = true)
	{
	}

	[Token(Token = "0x6003B6D")]
	[Address(RVA = "0x3FA42B0", Offset = "0x3FA42B0", VA = "0x3FA42B0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6003B6E")]
	[Address(RVA = "0x3FA29D0", Offset = "0x3FA29D0", VA = "0x3FA29D0")]
	private void UpdatePlaceholderVisibility(bool isChatActive)
	{
	}

	[Token(Token = "0x6003B6F")]
	[Address(RVA = "0x3FA4410", Offset = "0x3FA4410", VA = "0x3FA4410")]
	public bool IsPointerOverChatUI()
	{
		return default(bool);
	}

	[Token(Token = "0x6003B70")]
	[Address(RVA = "0x3FA2CB0", Offset = "0x3FA2CB0", VA = "0x3FA2CB0")]
	private bool IsMouseOverAnyChatElement(Vector2 mousePosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6003B71")]
	[Address(RVA = "0x3FA41C0", Offset = "0x3FA41C0", VA = "0x3FA41C0")]
	public void UpdateChatInteractionState()
	{
	}

	[Token(Token = "0x6003B72")]
	[Address(RVA = "0x3F9C960", Offset = "0x3F9C960", VA = "0x3F9C960")]
	protected TMP_InputField CreateLine(string text)
	{
		return null;
	}

	[Token(Token = "0x6003B73")]
	[Address(RVA = "0x3FA4650", Offset = "0x3FA4650", VA = "0x3FA4650")]
	private void OnScroll(Vector2 scrollPosition)
	{
	}

	[Token(Token = "0x6003B74")]
	[Address(RVA = "0x3FA4660", Offset = "0x3FA4660", VA = "0x3FA4660")]
	private TMP_InputField GetCachedInputField(GameObject obj)
	{
		return null;
	}

	[Token(Token = "0x6003B75")]
	[Address(RVA = "0x3FA47A0", Offset = "0x3FA47A0", VA = "0x3FA47A0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6003B76")]
	[Address(RVA = "0x3FA4CA0", Offset = "0x3FA4CA0", VA = "0x3FA4CA0")]
	private void OnValueChanged(string text)
	{
	}

	[Token(Token = "0x6003B77")]
	[Address(RVA = "0x3FA4E00", Offset = "0x3FA4E00", VA = "0x3FA4E00")]
	public string GetInputText()
	{
		return null;
	}

	[Token(Token = "0x6003B78")]
	[Address(RVA = "0x3FA4E90", Offset = "0x3FA4E90", VA = "0x3FA4E90")]
	public void SetInputText(string newText)
	{
	}

	[Token(Token = "0x6003B79")]
	[Address(RVA = "0x3F9C650", Offset = "0x3F9C650", VA = "0x3F9C650")]
	public void EnterPMMode(Player target)
	{
	}

	[Token(Token = "0x6003B7A")]
	[Address(RVA = "0x3FA5530", Offset = "0x3FA5530", VA = "0x3FA5530")]
	public void ExitPMMode()
	{
	}

	[Token(Token = "0x6003B7B")]
	[Address(RVA = "0x3FA56A0", Offset = "0x3FA56A0", VA = "0x3FA56A0")]
	public void RemovePMPartner(Player player)
	{
	}

	[Token(Token = "0x6003B7C")]
	[Address(RVA = "0x3FA1230", Offset = "0x3FA1230", VA = "0x3FA1230")]
	private void ValidatePMState()
	{
	}

	[Token(Token = "0x6003B7D")]
	[Address(RVA = "0x3FA58B0", Offset = "0x3FA58B0", VA = "0x3FA58B0")]
	public bool IsTogglingPM()
	{
		return default(bool);
	}

	[Token(Token = "0x6003B7E")]
	[Address(RVA = "0x3FA4FC0", Offset = "0x3FA4FC0", VA = "0x3FA4FC0")]
	[IteratorStateMachine(typeof(_003CResetPMToggleActive_003Ed__119))]
	private IEnumerator ResetPMToggleActive()
	{
		return null;
	}

	[Token(Token = "0x6003B7F")]
	[Address(RVA = "0x3FA58C0", Offset = "0x3FA58C0", VA = "0x3FA58C0")]
	public bool IsInPMMode()
	{
		return default(bool);
	}

	[Token(Token = "0x6003B80")]
	[Address(RVA = "0x3FA3A40", Offset = "0x3FA3A40", VA = "0x3FA3A40")]
	private void CycleToPMPartner()
	{
	}

	[Token(Token = "0x6003B81")]
	[Address(RVA = "0x3FA58D0", Offset = "0x3FA58D0", VA = "0x3FA58D0")]
	private List<Player> GetPmPartnersByRecency()
	{
		return null;
	}

	[Token(Token = "0x6003B82")]
	[Address(RVA = "0x3FA5030", Offset = "0x3FA5030", VA = "0x3FA5030")]
	public void AddPMPartner(Player player)
	{
	}

	[Token(Token = "0x6003B83")]
	[Address(RVA = "0x3FA61E0", Offset = "0x3FA61E0", VA = "0x3FA61E0")]
	public Player GetCurrentPMTarget()
	{
		return null;
	}

	[Token(Token = "0x6003B84")]
	[Address(RVA = "0x3FA61F0", Offset = "0x3FA61F0", VA = "0x3FA61F0")]
	public void ResetPMState()
	{
	}

	[Token(Token = "0x6003B85")]
	[Address(RVA = "0x3FA4130", Offset = "0x3FA4130", VA = "0x3FA4130")]
	public void CloseEmojiPanel()
	{
	}

	[Token(Token = "0x6003B86")]
	[Address(RVA = "0x3FA6290", Offset = "0x3FA6290", VA = "0x3FA6290")]
	public void HandleCursorStateChange(CursorState newState)
	{
	}

	[Token(Token = "0x6003B87")]
	[Address(RVA = "0x3FA6320", Offset = "0x3FA6320", VA = "0x3FA6320")]
	public void MoveCaretToEnd()
	{
	}

	[Token(Token = "0x6003B88")]
	[Address(RVA = "0x3FA6430", Offset = "0x3FA6430", VA = "0x3FA6430")]
	public bool ShouldBlockGameInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6003B89")]
	[Address(RVA = "0x3FA64D0", Offset = "0x3FA64D0", VA = "0x3FA64D0")]
	public bool ShouldBlockKeybind(KeyCode keyCode)
	{
		return default(bool);
	}

	[Token(Token = "0x6003B8A")]
	[Address(RVA = "0x3FA0E30", Offset = "0x3FA0E30", VA = "0x3FA0E30")]
	public void RefreshPoolSize()
	{
	}

	[Token(Token = "0x6003B8B")]
	[Address(RVA = "0x3FA6580", Offset = "0x3FA6580", VA = "0x3FA6580")]
	public bool IsInteractingWithChatUI()
	{
		return default(bool);
	}

	[Token(Token = "0x6003B8C")]
	[Address(RVA = "0x3FA4EA0", Offset = "0x3FA4EA0", VA = "0x3FA4EA0")]
	public void SetTextAndPositionCaret(string newText)
	{
	}

	[Token(Token = "0x6003B8D")]
	[Address(RVA = "0x3FA53F0", Offset = "0x3FA53F0", VA = "0x3FA53F0")]
	public void SetTextAndCaretPosition(string newText, int caretPosition)
	{
	}

	[Token(Token = "0x6003B8E")]
	[Address(RVA = "0x3FA3080", Offset = "0x3FA3080", VA = "0x3FA3080")]
	private RectTransform GetCachedRectTransform(GameObject obj)
	{
		return null;
	}

	[Token(Token = "0x6003B8F")]
	[Address(RVA = "0x3FA4B20", Offset = "0x3FA4B20", VA = "0x3FA4B20")]
	private void SaveCurrentConversation()
	{
	}

	[Token(Token = "0x6003B90")]
	[Address(RVA = "0x3FA1460", Offset = "0x3FA1460", VA = "0x3FA1460")]
	private void RestorePMPartners()
	{
	}

	[Token(Token = "0x6003B91")]
	[Address(RVA = "0x3FA6610", Offset = "0x3FA6610", VA = "0x3FA6610")]
	public ChatPanel()
	{
	}
}
