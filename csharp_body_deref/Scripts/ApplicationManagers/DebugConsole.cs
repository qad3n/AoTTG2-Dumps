using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000731")]
internal class DebugConsole : MonoBehaviour
{
	[Token(Token = "0x2000732")]
	public class LogMessage
	{
		[Token(Token = "0x40022C7")]
		[FieldOffset(Offset = "0x10")]
		public string Message;

		[Token(Token = "0x40022C8")]
		[FieldOffset(Offset = "0x18")]
		public LogType Type;

		[Token(Token = "0x40022C9")]
		[FieldOffset(Offset = "0x20")]
		public string Prefix;

		[Token(Token = "0x40022CA")]
		[FieldOffset(Offset = "0x28")]
		public bool IsCustomLogic;

		[Token(Token = "0x40022CB")]
		[FieldOffset(Offset = "0x30")]
		public string StackTrace;

		[Token(Token = "0x40022CC")]
		[FieldOffset(Offset = "0x38")]
		public int Count;

		[Token(Token = "0x40022CD")]
		[FieldOffset(Offset = "0x40")]
		private string _cachedFormatted;

		[Token(Token = "0x40022CE")]
		[FieldOffset(Offset = "0x48")]
		private bool _lastShowStackTraces;

		[Token(Token = "0x40022CF")]
		[FieldOffset(Offset = "0x4C")]
		private int _lastCount;

		[Token(Token = "0x6004648")]
		[Address(RVA = "0x409B7F0", Offset = "0x409B7F0", VA = "0x409B7F0")]
		public void Initialize(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
		{
		}

		[Token(Token = "0x6004649")]
		[Address(RVA = "0x409B980", Offset = "0x409B980", VA = "0x409B980")]
		public void Reset()
		{
		}

		[Token(Token = "0x600464A")]
		[Address(RVA = "0x409B9E0", Offset = "0x409B9E0", VA = "0x409B9E0")]
		public string GetFormattedMessage(bool showStackTraces)
		{
			return null;
		}

		[Token(Token = "0x600464B")]
		[Address(RVA = "0x409BAF0", Offset = "0x409BAF0", VA = "0x409BAF0")]
		public bool IsDuplicateOf(string message, LogType type, bool isCustomLogic, string stackTrace)
		{
			return default(bool);
		}

		[Token(Token = "0x600464C")]
		[Address(RVA = "0x409BB50", Offset = "0x409BB50", VA = "0x409BB50")]
		public LogMessage()
		{
		}
	}

	[Token(Token = "0x2000733")]
	private static class LogMessagePool
	{
		[Token(Token = "0x40022D0")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Stack<LogMessage> _pool;

		[Token(Token = "0x40022D1")]
		private const int PoolSize = 512;

		[Token(Token = "0x600464D")]
		[Address(RVA = "0x409BB60", Offset = "0x409BB60", VA = "0x409BB60")]
		static LogMessagePool()
		{
		}

		[Token(Token = "0x600464E")]
		[Address(RVA = "0x409BC70", Offset = "0x409BC70", VA = "0x409BC70")]
		public static LogMessage Get(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
		{
			return null;
		}

		[Token(Token = "0x600464F")]
		[Address(RVA = "0x409BDC0", Offset = "0x409BDC0", VA = "0x409BDC0")]
		public static void Return(LogMessage logMessage)
		{
		}
	}

	[Token(Token = "0x2000734")]
	private enum LogTab
	{
		[Token(Token = "0x40022D3")]
		All,
		[Token(Token = "0x40022D4")]
		Info,
		[Token(Token = "0x40022D5")]
		Warning,
		[Token(Token = "0x40022D6")]
		Error,
		[Token(Token = "0x40022D7")]
		CustomLogic
	}

	[Token(Token = "0x400229D")]
	[FieldOffset(Offset = "0x0")]
	private static DebugConsole _instance;

	[Token(Token = "0x400229E")]
	[FieldOffset(Offset = "0x8")]
	public static bool Enabled;

	[Token(Token = "0x400229F")]
	[FieldOffset(Offset = "0x10")]
	public static LinkedList<LogMessage> _messages;

	[Token(Token = "0x40022A0")]
	[FieldOffset(Offset = "0x18")]
	public static LinkedList<LogMessage> _messageBuffer;

	[Token(Token = "0x40022A1")]
	[FieldOffset(Offset = "0x20")]
	private static int _currentCharCount;

	[Token(Token = "0x40022A2")]
	[FieldOffset(Offset = "0x24")]
	private static int _currentCharCountBuffer;

	[Token(Token = "0x40022A3")]
	[FieldOffset(Offset = "0x28")]
	private static Vector2 _scrollPosition;

	[Token(Token = "0x40022A4")]
	[FieldOffset(Offset = "0x30")]
	private static string _inputLine;

	[Token(Token = "0x40022A5")]
	[FieldOffset(Offset = "0x38")]
	private static bool _needResetScroll;

	[Token(Token = "0x40022A6")]
	[FieldOffset(Offset = "0x40")]
	private static List<LogMessage> _filteredMessages;

	[Token(Token = "0x40022A7")]
	[FieldOffset(Offset = "0x48")]
	private static bool _filterDirty;

	[Token(Token = "0x40022A8")]
	[FieldOffset(Offset = "0x4C")]
	private static LogTab _lastFilterTab;

	[Token(Token = "0x40022A9")]
	[FieldOffset(Offset = "0x50")]
	private static StringBuilder _displayBuilder;

	[Token(Token = "0x40022AA")]
	[FieldOffset(Offset = "0x58")]
	private static string _cachedDisplayText;

	[Token(Token = "0x40022AB")]
	[FieldOffset(Offset = "0x60")]
	private static bool _displayDirty;

	[Token(Token = "0x40022AC")]
	[FieldOffset(Offset = "0x64")]
	private static int _lastFilteredCount;

	[Token(Token = "0x40022AD")]
	[FieldOffset(Offset = "0x68")]
	private static bool _lastShowStackTraces;

	[Token(Token = "0x40022AE")]
	private const int MaxBufferProcessPerFrame = 50;

	[Token(Token = "0x40022AF")]
	[FieldOffset(Offset = "0x6C")]
	private static float _windowX;

	[Token(Token = "0x40022B0")]
	[FieldOffset(Offset = "0x70")]
	private static float _windowY;

	[Token(Token = "0x40022B1")]
	[FieldOffset(Offset = "0x74")]
	private static float _windowWidth;

	[Token(Token = "0x40022B2")]
	[FieldOffset(Offset = "0x78")]
	private static float _windowHeight;

	[Token(Token = "0x40022B3")]
	[FieldOffset(Offset = "0x7C")]
	private static bool _isDragging;

	[Token(Token = "0x40022B4")]
	[FieldOffset(Offset = "0x7D")]
	private static bool _isResizing;

	[Token(Token = "0x40022B5")]
	[FieldOffset(Offset = "0x80")]
	private static Vector2 _dragOffset;

	[Token(Token = "0x40022B6")]
	[FieldOffset(Offset = "0x88")]
	private static Vector2 _resizeStartSize;

	[Token(Token = "0x40022B7")]
	[FieldOffset(Offset = "0x90")]
	private static Vector2 _resizeStartMousePos;

	[Token(Token = "0x40022B8")]
	[FieldOffset(Offset = "0x98")]
	private static LogTab _currentTab;

	[Token(Token = "0x40022B9")]
	[FieldOffset(Offset = "0x9C")]
	private static bool _showStackTraces;

	[Token(Token = "0x40022BA")]
	[FieldOffset(Offset = "0x9D")]
	private static bool _solidBackground;

	[Token(Token = "0x40022BB")]
	[FieldOffset(Offset = "0x9E")]
	private static bool _wordWrap;

	[Token(Token = "0x40022BC")]
	private const int MaxMessages = 1024;

	[Token(Token = "0x40022BD")]
	private const int MaxChars = 500000;

	[Token(Token = "0x40022BE")]
	private const int MaxMessageLength = 1024;

	[Token(Token = "0x40022BF")]
	private const int InputHeight = 25;

	[Token(Token = "0x40022C0")]
	private const int Padding = 10;

	[Token(Token = "0x40022C1")]
	private const int TabHeight = 25;

	[Token(Token = "0x40022C2")]
	private const int ResizeHandleSize = 15;

	[Token(Token = "0x40022C3")]
	private const int MinWidth = 400;

	[Token(Token = "0x40022C4")]
	private const int MinHeight = 300;

	[Token(Token = "0x40022C5")]
	private const string InputControlName = "DebugInput";

	[Token(Token = "0x40022C6")]
	private const string CustomLogicErrorPrefix = "[Custom Logic Error] ";

	[Token(Token = "0x6004632")]
	[Address(RVA = "0x4094620", Offset = "0x4094620", VA = "0x4094620")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004633")]
	[Address(RVA = "0x4097EE0", Offset = "0x4097EE0", VA = "0x4097EE0")]
	public static void Log(string message, bool showInChat = false)
	{
	}

	[Token(Token = "0x6004634")]
	[Address(RVA = "0x4097F90", Offset = "0x4097F90", VA = "0x4097F90")]
	public static void LogCustomLogic(string message, bool showInChat = false)
	{
	}

	[Token(Token = "0x6004635")]
	[Address(RVA = "0x4098060", Offset = "0x4098060", VA = "0x4098060")]
	public static void LogTimeSince(float start, string prefix = "")
	{
	}

	[Token(Token = "0x6004636")]
	[Address(RVA = "0x4098100", Offset = "0x4098100", VA = "0x4098100")]
	private static void OnUnityDebugLog(string log, string stackTrace, LogType type)
	{
	}

	[Token(Token = "0x6004637")]
	[Address(RVA = "0x40981B0", Offset = "0x40981B0", VA = "0x40981B0")]
	private static void AddMessageBuffer(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
	{
	}

	[Token(Token = "0x6004638")]
	[Address(RVA = "0x4098610", Offset = "0x4098610", VA = "0x4098610")]
	private static void AddMessage(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
	{
	}

	[Token(Token = "0x6004639")]
	[Address(RVA = "0x4098950", Offset = "0x4098950", VA = "0x4098950")]
	private static void ProcessMessageBuffer()
	{
	}

	[Token(Token = "0x600463A")]
	[Address(RVA = "0x4098D30", Offset = "0x4098D30", VA = "0x4098D30")]
	private static void UpdateFilteredMessages()
	{
	}

	[Token(Token = "0x600463B")]
	[Address(RVA = "0x4099180", Offset = "0x4099180", VA = "0x4099180")]
	private static string GetDisplayText()
	{
		return null;
	}

	[Token(Token = "0x600463C")]
	[Address(RVA = "0x4099470", Offset = "0x4099470", VA = "0x4099470")]
	private void Update()
	{
	}

	[Token(Token = "0x600463D")]
	[Address(RVA = "0x4099520", Offset = "0x4099520", VA = "0x4099520")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x600463E")]
	[Address(RVA = "0x40998D0", Offset = "0x40998D0", VA = "0x40998D0")]
	private static void HandleWindowInteraction()
	{
	}

	[Token(Token = "0x600463F")]
	[Address(RVA = "0x4099CE0", Offset = "0x4099CE0", VA = "0x4099CE0")]
	private static void DrawTabs()
	{
	}

	[Token(Token = "0x6004640")]
	[Address(RVA = "0x409A7A0", Offset = "0x409A7A0", VA = "0x409A7A0")]
	private static void DrawMessageWindow()
	{
	}

	[Token(Token = "0x6004641")]
	[Address(RVA = "0x409AC20", Offset = "0x409AC20", VA = "0x409AC20")]
	private static void DrawInputWindow()
	{
	}

	[Token(Token = "0x6004642")]
	[Address(RVA = "0x409AD20", Offset = "0x409AD20", VA = "0x409AD20")]
	private static void HandleInput()
	{
	}

	[Token(Token = "0x6004643")]
	[Address(RVA = "0x409B040", Offset = "0x409B040", VA = "0x409B040")]
	private static bool IsEnterUp()
	{
		return default(bool);
	}

	[Token(Token = "0x6004644")]
	[Address(RVA = "0x409B0B0", Offset = "0x409B0B0", VA = "0x409B0B0")]
	private static void HandleWindowDraggingAndResizing()
	{
	}

	[Token(Token = "0x6004645")]
	[Address(RVA = "0x409AF90", Offset = "0x409AF90", VA = "0x409AF90")]
	private static void DrawResizeHandle()
	{
	}

	[Token(Token = "0x6004646")]
	[Address(RVA = "0x409B580", Offset = "0x409B580", VA = "0x409B580")]
	public DebugConsole()
	{
	}
}
