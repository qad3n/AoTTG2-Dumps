// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.DebugConsole
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/DebugConsole.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugConsole.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000780")]
internal class DebugConsole : MonoBehaviour
{
	[Token(Token = "0x2000781")]
	public class LogMessage
	{
		[Token(Token = "0x4002429")]
		[FieldOffset(Offset = "0x10")]
		public string Message;

		[Token(Token = "0x400242A")]
		[FieldOffset(Offset = "0x18")]
		public LogType Type;

		[Token(Token = "0x400242B")]
		[FieldOffset(Offset = "0x20")]
		public string Prefix;

		[Token(Token = "0x400242C")]
		[FieldOffset(Offset = "0x28")]
		public bool IsCustomLogic;

		[Token(Token = "0x400242D")]
		[FieldOffset(Offset = "0x30")]
		public string StackTrace;

		[Token(Token = "0x400242E")]
		[FieldOffset(Offset = "0x38")]
		public int Count;

		[Token(Token = "0x400242F")]
		[FieldOffset(Offset = "0x40")]
		private string _cachedFormatted;

		[Token(Token = "0x4002430")]
		[FieldOffset(Offset = "0x48")]
		private bool _lastShowStackTraces;

		[Token(Token = "0x4002431")]
		[FieldOffset(Offset = "0x4C")]
		private int _lastCount;

		[Token(Token = "0x60048B7")]
		[Address(RVA = "0x43B4970", Offset = "0x43B4970", VA = "0x43B4970")]
		public void Initialize(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
		{
		}

		[Token(Token = "0x60048B8")]
		[Address(RVA = "0x43B4B00", Offset = "0x43B4B00", VA = "0x43B4B00")]
		public void Reset()
		{
		}

		[Token(Token = "0x60048B9")]
		[Address(RVA = "0x43B4B60", Offset = "0x43B4B60", VA = "0x43B4B60")]
		public string GetFormattedMessage(bool showStackTraces)
		{
			return null;
		}

		[Token(Token = "0x60048BA")]
		[Address(RVA = "0x43B4C70", Offset = "0x43B4C70", VA = "0x43B4C70")]
		public bool IsDuplicateOf(string message, LogType type, bool isCustomLogic, string stackTrace)
		{
			return default(bool);
		}

		[Token(Token = "0x60048BB")]
		[Address(RVA = "0x43B4CD0", Offset = "0x43B4CD0", VA = "0x43B4CD0")]
		public LogMessage()
		{
		}
	}

	[Token(Token = "0x2000782")]
	private static class LogMessagePool
	{
		[Token(Token = "0x4002432")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Stack<LogMessage> _pool;

		[Token(Token = "0x4002433")]
		private const int PoolSize = 512;

		[Token(Token = "0x60048BC")]
		[Address(RVA = "0x43B4CE0", Offset = "0x43B4CE0", VA = "0x43B4CE0")]
		static LogMessagePool()
		{
		}

		[Token(Token = "0x60048BD")]
		[Address(RVA = "0x43B4DF0", Offset = "0x43B4DF0", VA = "0x43B4DF0")]
		public static LogMessage Get(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
		{
			return null;
		}

		[Token(Token = "0x60048BE")]
		[Address(RVA = "0x43B4F40", Offset = "0x43B4F40", VA = "0x43B4F40")]
		public static void Return(LogMessage logMessage)
		{
		}
	}

	[Token(Token = "0x2000783")]
	private enum LogTab
	{
		[Token(Token = "0x4002435")]
		All,
		[Token(Token = "0x4002436")]
		Info,
		[Token(Token = "0x4002437")]
		Warning,
		[Token(Token = "0x4002438")]
		Error,
		[Token(Token = "0x4002439")]
		CustomLogic
	}

	[Token(Token = "0x40023FF")]
	[FieldOffset(Offset = "0x0")]
	private static DebugConsole _instance;

	[Token(Token = "0x4002400")]
	[FieldOffset(Offset = "0x8")]
	public static bool Enabled;

	[Token(Token = "0x4002401")]
	[FieldOffset(Offset = "0x10")]
	public static LinkedList<LogMessage> _messages;

	[Token(Token = "0x4002402")]
	[FieldOffset(Offset = "0x18")]
	public static LinkedList<LogMessage> _messageBuffer;

	[Token(Token = "0x4002403")]
	[FieldOffset(Offset = "0x20")]
	private static int _currentCharCount;

	[Token(Token = "0x4002404")]
	[FieldOffset(Offset = "0x24")]
	private static int _currentCharCountBuffer;

	[Token(Token = "0x4002405")]
	[FieldOffset(Offset = "0x28")]
	private static Vector2 _scrollPosition;

	[Token(Token = "0x4002406")]
	[FieldOffset(Offset = "0x30")]
	private static string _inputLine;

	[Token(Token = "0x4002407")]
	[FieldOffset(Offset = "0x38")]
	private static bool _needResetScroll;

	[Token(Token = "0x4002408")]
	[FieldOffset(Offset = "0x40")]
	private static List<LogMessage> _filteredMessages;

	[Token(Token = "0x4002409")]
	[FieldOffset(Offset = "0x48")]
	private static bool _filterDirty;

	[Token(Token = "0x400240A")]
	[FieldOffset(Offset = "0x4C")]
	private static LogTab _lastFilterTab;

	[Token(Token = "0x400240B")]
	[FieldOffset(Offset = "0x50")]
	private static StringBuilder _displayBuilder;

	[Token(Token = "0x400240C")]
	[FieldOffset(Offset = "0x58")]
	private static string _cachedDisplayText;

	[Token(Token = "0x400240D")]
	[FieldOffset(Offset = "0x60")]
	private static bool _displayDirty;

	[Token(Token = "0x400240E")]
	[FieldOffset(Offset = "0x64")]
	private static int _lastFilteredCount;

	[Token(Token = "0x400240F")]
	[FieldOffset(Offset = "0x68")]
	private static bool _lastShowStackTraces;

	[Token(Token = "0x4002410")]
	private const int MaxBufferProcessPerFrame = 50;

	[Token(Token = "0x4002411")]
	[FieldOffset(Offset = "0x6C")]
	private static float _windowX;

	[Token(Token = "0x4002412")]
	[FieldOffset(Offset = "0x70")]
	private static float _windowY;

	[Token(Token = "0x4002413")]
	[FieldOffset(Offset = "0x74")]
	private static float _windowWidth;

	[Token(Token = "0x4002414")]
	[FieldOffset(Offset = "0x78")]
	private static float _windowHeight;

	[Token(Token = "0x4002415")]
	[FieldOffset(Offset = "0x7C")]
	private static bool _isDragging;

	[Token(Token = "0x4002416")]
	[FieldOffset(Offset = "0x7D")]
	private static bool _isResizing;

	[Token(Token = "0x4002417")]
	[FieldOffset(Offset = "0x80")]
	private static Vector2 _dragOffset;

	[Token(Token = "0x4002418")]
	[FieldOffset(Offset = "0x88")]
	private static Vector2 _resizeStartSize;

	[Token(Token = "0x4002419")]
	[FieldOffset(Offset = "0x90")]
	private static Vector2 _resizeStartMousePos;

	[Token(Token = "0x400241A")]
	[FieldOffset(Offset = "0x98")]
	private static LogTab _currentTab;

	[Token(Token = "0x400241B")]
	[FieldOffset(Offset = "0x9C")]
	private static bool _showStackTraces;

	[Token(Token = "0x400241C")]
	[FieldOffset(Offset = "0x9D")]
	private static bool _solidBackground;

	[Token(Token = "0x400241D")]
	[FieldOffset(Offset = "0x9E")]
	private static bool _wordWrap;

	[Token(Token = "0x400241E")]
	private const int MaxMessages = 1024;

	[Token(Token = "0x400241F")]
	private const int MaxChars = 500000;

	[Token(Token = "0x4002420")]
	private const int MaxMessageLength = 1024;

	[Token(Token = "0x4002421")]
	private const int InputHeight = 25;

	[Token(Token = "0x4002422")]
	private const int Padding = 10;

	[Token(Token = "0x4002423")]
	private const int TabHeight = 25;

	[Token(Token = "0x4002424")]
	private const int ResizeHandleSize = 15;

	[Token(Token = "0x4002425")]
	private const int MinWidth = 400;

	[Token(Token = "0x4002426")]
	private const int MinHeight = 300;

	[Token(Token = "0x4002427")]
	private const string InputControlName = "DebugInput";

	[Token(Token = "0x4002428")]
	private const string CustomLogicErrorPrefix = "[Custom Logic Error] ";

	[Token(Token = "0x60048A1")]
	[Address(RVA = "0x43AC6A0", Offset = "0x43AC6A0", VA = "0x43AC6A0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60048A2")]
	[Address(RVA = "0x43B1060", Offset = "0x43B1060", VA = "0x43B1060")]
	public static void Log(string message, bool showInChat = false)
	{
	}

	[Token(Token = "0x60048A3")]
	[Address(RVA = "0x43B1110", Offset = "0x43B1110", VA = "0x43B1110")]
	public static void LogCustomLogic(string message, bool showInChat = false)
	{
	}

	[Token(Token = "0x60048A4")]
	[Address(RVA = "0x43B11E0", Offset = "0x43B11E0", VA = "0x43B11E0")]
	public static void LogTimeSince(float start, string prefix = "")
	{
	}

	[Token(Token = "0x60048A5")]
	[Address(RVA = "0x43B1280", Offset = "0x43B1280", VA = "0x43B1280")]
	private static void OnUnityDebugLog(string log, string stackTrace, LogType type)
	{
	}

	[Token(Token = "0x60048A6")]
	[Address(RVA = "0x43B1330", Offset = "0x43B1330", VA = "0x43B1330")]
	private static void AddMessageBuffer(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
	{
	}

	[Token(Token = "0x60048A7")]
	[Address(RVA = "0x43B1790", Offset = "0x43B1790", VA = "0x43B1790")]
	private static void AddMessage(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
	{
	}

	[Token(Token = "0x60048A8")]
	[Address(RVA = "0x43B1AD0", Offset = "0x43B1AD0", VA = "0x43B1AD0")]
	private static void ProcessMessageBuffer()
	{
	}

	[Token(Token = "0x60048A9")]
	[Address(RVA = "0x43B1EB0", Offset = "0x43B1EB0", VA = "0x43B1EB0")]
	private static void UpdateFilteredMessages()
	{
	}

	[Token(Token = "0x60048AA")]
	[Address(RVA = "0x43B2300", Offset = "0x43B2300", VA = "0x43B2300")]
	private static string GetDisplayText()
	{
		return null;
	}

	[Token(Token = "0x60048AB")]
	[Address(RVA = "0x43B25F0", Offset = "0x43B25F0", VA = "0x43B25F0")]
	private void Update()
	{
	}

	[Token(Token = "0x60048AC")]
	[Address(RVA = "0x43B26A0", Offset = "0x43B26A0", VA = "0x43B26A0")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x60048AD")]
	[Address(RVA = "0x43B2A50", Offset = "0x43B2A50", VA = "0x43B2A50")]
	private static void HandleWindowInteraction()
	{
	}

	[Token(Token = "0x60048AE")]
	[Address(RVA = "0x43B2E60", Offset = "0x43B2E60", VA = "0x43B2E60")]
	private static void DrawTabs()
	{
	}

	[Token(Token = "0x60048AF")]
	[Address(RVA = "0x43B3920", Offset = "0x43B3920", VA = "0x43B3920")]
	private static void DrawMessageWindow()
	{
	}

	[Token(Token = "0x60048B0")]
	[Address(RVA = "0x43B3DA0", Offset = "0x43B3DA0", VA = "0x43B3DA0")]
	private static void DrawInputWindow()
	{
	}

	[Token(Token = "0x60048B1")]
	[Address(RVA = "0x43B3EA0", Offset = "0x43B3EA0", VA = "0x43B3EA0")]
	private static void HandleInput()
	{
	}

	[Token(Token = "0x60048B2")]
	[Address(RVA = "0x43B41C0", Offset = "0x43B41C0", VA = "0x43B41C0")]
	private static bool IsEnterUp()
	{
		return default(bool);
	}

	[Token(Token = "0x60048B3")]
	[Address(RVA = "0x43B4230", Offset = "0x43B4230", VA = "0x43B4230")]
	private static void HandleWindowDraggingAndResizing()
	{
	}

	[Token(Token = "0x60048B4")]
	[Address(RVA = "0x43B4110", Offset = "0x43B4110", VA = "0x43B4110")]
	private static void DrawResizeHandle()
	{
	}

	[Token(Token = "0x60048B5")]
	[Address(RVA = "0x43B4700", Offset = "0x43B4700", VA = "0x43B4700")]
	public DebugConsole()
	{
	}
}
