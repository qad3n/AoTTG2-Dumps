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

[Token(Token = "0x200090B")]
internal class DebugConsole : MonoBehaviour
{
	[Token(Token = "0x200090C")]
	public class LogMessage
	{
		[Token(Token = "0x4002CF8")]
		[FieldOffset(Offset = "0x10")]
		public string Message;

		[Token(Token = "0x4002CF9")]
		[FieldOffset(Offset = "0x18")]
		public LogType Type;

		[Token(Token = "0x4002CFA")]
		[FieldOffset(Offset = "0x20")]
		public string Prefix;

		[Token(Token = "0x4002CFB")]
		[FieldOffset(Offset = "0x28")]
		public bool IsCustomLogic;

		[Token(Token = "0x4002CFC")]
		[FieldOffset(Offset = "0x30")]
		public string StackTrace;

		[Token(Token = "0x4002CFD")]
		[FieldOffset(Offset = "0x38")]
		public int Count;

		[Token(Token = "0x4002CFE")]
		[FieldOffset(Offset = "0x40")]
		private string _cachedFormatted;

		[Token(Token = "0x4002CFF")]
		[FieldOffset(Offset = "0x48")]
		private bool _lastShowStackTraces;

		[Token(Token = "0x4002D00")]
		[FieldOffset(Offset = "0x4C")]
		private int _lastCount;

		[Token(Token = "0x600552D")]
		[Address(RVA = "0x2351720", Offset = "0x234FD20", VA = "0x182351720")]
		public void Initialize(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
		{
		}

		[Token(Token = "0x600552E")]
		[Address(RVA = "0x2351960", Offset = "0x234FF60", VA = "0x182351960")]
		public void Reset()
		{
		}

		[Token(Token = "0x600552F")]
		[Address(RVA = "0x2351610", Offset = "0x234FC10", VA = "0x182351610")]
		public string GetFormattedMessage(bool showStackTraces)
		{
			return null;
		}

		[Token(Token = "0x6005530")]
		[Address(RVA = "0x23518F0", Offset = "0x234FEF0", VA = "0x1823518F0")]
		public bool IsDuplicateOf(string message, LogType type, bool isCustomLogic, string stackTrace)
		{
			return default(bool);
		}

		[Token(Token = "0x6005531")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public LogMessage()
		{
		}
	}

	[Token(Token = "0x200090D")]
	private static class LogMessagePool
	{
		[Token(Token = "0x4002D01")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Stack<LogMessage> _pool;

		[Token(Token = "0x4002D02")]
		private const int PoolSize = 512;

		[Token(Token = "0x6005532")]
		[Address(RVA = "0x23514F0", Offset = "0x234FAF0", VA = "0x1823514F0")]
		static LogMessagePool()
		{
		}

		[Token(Token = "0x6005533")]
		[Address(RVA = "0x2351170", Offset = "0x234F770", VA = "0x182351170")]
		public static LogMessage Get(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
		{
			return null;
		}

		[Token(Token = "0x6005534")]
		[Address(RVA = "0x23513E0", Offset = "0x234F9E0", VA = "0x1823513E0")]
		public static void Return(LogMessage logMessage)
		{
		}
	}

	[Token(Token = "0x200090E")]
	private enum LogTab
	{
		[Token(Token = "0x4002D04")]
		All,
		[Token(Token = "0x4002D05")]
		Info,
		[Token(Token = "0x4002D06")]
		Warning,
		[Token(Token = "0x4002D07")]
		Error,
		[Token(Token = "0x4002D08")]
		CustomLogic
	}

	[Token(Token = "0x4002CCE")]
	[FieldOffset(Offset = "0x0")]
	private static DebugConsole _instance;

	[Token(Token = "0x4002CCF")]
	[FieldOffset(Offset = "0x8")]
	public static bool Enabled;

	[Token(Token = "0x4002CD0")]
	[FieldOffset(Offset = "0x10")]
	public static LinkedList<LogMessage> _messages;

	[Token(Token = "0x4002CD1")]
	[FieldOffset(Offset = "0x18")]
	public static LinkedList<LogMessage> _messageBuffer;

	[Token(Token = "0x4002CD2")]
	[FieldOffset(Offset = "0x20")]
	private static int _currentCharCount;

	[Token(Token = "0x4002CD3")]
	[FieldOffset(Offset = "0x24")]
	private static int _currentCharCountBuffer;

	[Token(Token = "0x4002CD4")]
	[FieldOffset(Offset = "0x28")]
	private static Vector2 _scrollPosition;

	[Token(Token = "0x4002CD5")]
	[FieldOffset(Offset = "0x30")]
	private static string _inputLine;

	[Token(Token = "0x4002CD6")]
	[FieldOffset(Offset = "0x38")]
	private static bool _needResetScroll;

	[Token(Token = "0x4002CD7")]
	[FieldOffset(Offset = "0x40")]
	private static List<LogMessage> _filteredMessages;

	[Token(Token = "0x4002CD8")]
	[FieldOffset(Offset = "0x48")]
	private static bool _filterDirty;

	[Token(Token = "0x4002CD9")]
	[FieldOffset(Offset = "0x4C")]
	private static LogTab _lastFilterTab;

	[Token(Token = "0x4002CDA")]
	[FieldOffset(Offset = "0x50")]
	private static StringBuilder _displayBuilder;

	[Token(Token = "0x4002CDB")]
	[FieldOffset(Offset = "0x58")]
	private static string _cachedDisplayText;

	[Token(Token = "0x4002CDC")]
	[FieldOffset(Offset = "0x60")]
	private static bool _displayDirty;

	[Token(Token = "0x4002CDD")]
	[FieldOffset(Offset = "0x64")]
	private static int _lastFilteredCount;

	[Token(Token = "0x4002CDE")]
	[FieldOffset(Offset = "0x68")]
	private static bool _lastShowStackTraces;

	[Token(Token = "0x4002CDF")]
	private const int MaxBufferProcessPerFrame = 50;

	[Token(Token = "0x4002CE0")]
	[FieldOffset(Offset = "0x6C")]
	private static float _windowX;

	[Token(Token = "0x4002CE1")]
	[FieldOffset(Offset = "0x70")]
	private static float _windowY;

	[Token(Token = "0x4002CE2")]
	[FieldOffset(Offset = "0x74")]
	private static float _windowWidth;

	[Token(Token = "0x4002CE3")]
	[FieldOffset(Offset = "0x78")]
	private static float _windowHeight;

	[Token(Token = "0x4002CE4")]
	[FieldOffset(Offset = "0x7C")]
	private static bool _isDragging;

	[Token(Token = "0x4002CE5")]
	[FieldOffset(Offset = "0x7D")]
	private static bool _isResizing;

	[Token(Token = "0x4002CE6")]
	[FieldOffset(Offset = "0x80")]
	private static Vector2 _dragOffset;

	[Token(Token = "0x4002CE7")]
	[FieldOffset(Offset = "0x88")]
	private static Vector2 _resizeStartSize;

	[Token(Token = "0x4002CE8")]
	[FieldOffset(Offset = "0x90")]
	private static Vector2 _resizeStartMousePos;

	[Token(Token = "0x4002CE9")]
	[FieldOffset(Offset = "0x98")]
	private static LogTab _currentTab;

	[Token(Token = "0x4002CEA")]
	[FieldOffset(Offset = "0x9C")]
	private static bool _showStackTraces;

	[Token(Token = "0x4002CEB")]
	[FieldOffset(Offset = "0x9D")]
	private static bool _solidBackground;

	[Token(Token = "0x4002CEC")]
	[FieldOffset(Offset = "0x9E")]
	private static bool _wordWrap;

	[Token(Token = "0x4002CED")]
	private const int MaxMessages = 1024;

	[Token(Token = "0x4002CEE")]
	private const int MaxChars = 500000;

	[Token(Token = "0x4002CEF")]
	private const int MaxMessageLength = 1024;

	[Token(Token = "0x4002CF0")]
	private const int InputHeight = 25;

	[Token(Token = "0x4002CF1")]
	private const int Padding = 10;

	[Token(Token = "0x4002CF2")]
	private const int TabHeight = 25;

	[Token(Token = "0x4002CF3")]
	private const int ResizeHandleSize = 15;

	[Token(Token = "0x4002CF4")]
	private const int MinWidth = 400;

	[Token(Token = "0x4002CF5")]
	private const int MinHeight = 300;

	[Token(Token = "0x4002CF6")]
	private const string InputControlName = "DebugInput";

	[Token(Token = "0x4002CF7")]
	private const string CustomLogicErrorPrefix = "[Custom Logic Error] ";

	[Token(Token = "0x6005517")]
	[Address(RVA = "0x234BED0", Offset = "0x234A4D0", VA = "0x18234BED0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005518")]
	[Address(RVA = "0x234C240", Offset = "0x234A840", VA = "0x18234C240")]
	public static void Log(string message, bool showInChat = false)
	{
	}

	[Token(Token = "0x6005519")]
	[Address(RVA = "0x234C0C0", Offset = "0x234A6C0", VA = "0x18234C0C0")]
	public static void LogCustomLogic(string message, bool showInChat = false)
	{
	}

	[Token(Token = "0x600551A")]
	[Address(RVA = "0x234C1A0", Offset = "0x234A7A0", VA = "0x18234C1A0")]
	public static void LogTimeSince(float start, string prefix = "")
	{
	}

	[Token(Token = "0x600551B")]
	[Address(RVA = "0x234C830", Offset = "0x234AE30", VA = "0x18234C830")]
	private static void OnUnityDebugLog(string log, string stackTrace, LogType type)
	{
	}

	[Token(Token = "0x600551C")]
	[Address(RVA = "0x2349180", Offset = "0x2347780", VA = "0x182349180")]
	private static void AddMessageBuffer(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
	{
	}

	[Token(Token = "0x600551D")]
	[Address(RVA = "0x23495D0", Offset = "0x2347BD0", VA = "0x1823495D0")]
	private static void AddMessage(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
	{
	}

	[Token(Token = "0x600551E")]
	[Address(RVA = "0x234C910", Offset = "0x234AF10", VA = "0x18234C910")]
	private static void ProcessMessageBuffer()
	{
	}

	[Token(Token = "0x600551F")]
	[Address(RVA = "0x234CD80", Offset = "0x234B380", VA = "0x18234CD80")]
	private static void UpdateFilteredMessages()
	{
	}

	[Token(Token = "0x6005520")]
	[Address(RVA = "0x234AD90", Offset = "0x2349390", VA = "0x18234AD90")]
	private static string GetDisplayText()
	{
		return null;
	}

	[Token(Token = "0x6005521")]
	[Address(RVA = "0x234D0E0", Offset = "0x234B6E0", VA = "0x18234D0E0")]
	private void Update()
	{
	}

	[Token(Token = "0x6005522")]
	[Address(RVA = "0x234C2F0", Offset = "0x234A8F0", VA = "0x18234C2F0")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x6005523")]
	[Address(RVA = "0x234B970", Offset = "0x2349F70", VA = "0x18234B970")]
	private static void HandleWindowInteraction()
	{
	}

	[Token(Token = "0x6005524")]
	[Address(RVA = "0x234A0D0", Offset = "0x23486D0", VA = "0x18234A0D0")]
	private static void DrawTabs()
	{
	}

	[Token(Token = "0x6005525")]
	[Address(RVA = "0x2349AB0", Offset = "0x23480B0", VA = "0x182349AB0")]
	private static void DrawMessageWindow()
	{
	}

	[Token(Token = "0x6005526")]
	[Address(RVA = "0x2349990", Offset = "0x2347F90", VA = "0x182349990")]
	private static void DrawInputWindow()
	{
	}

	[Token(Token = "0x6005527")]
	[Address(RVA = "0x234B0D0", Offset = "0x23496D0", VA = "0x18234B0D0")]
	private static void HandleInput()
	{
	}

	[Token(Token = "0x6005528")]
	[Address(RVA = "0x234C040", Offset = "0x234A640", VA = "0x18234C040")]
	private static bool IsEnterUp()
	{
		return default(bool);
	}

	[Token(Token = "0x6005529")]
	[Address(RVA = "0x234B3B0", Offset = "0x23499B0", VA = "0x18234B3B0")]
	private static void HandleWindowDraggingAndResizing()
	{
	}

	[Token(Token = "0x600552A")]
	[Address(RVA = "0x2349FF0", Offset = "0x23485F0", VA = "0x182349FF0")]
	private static void DrawResizeHandle()
	{
	}

	[Token(Token = "0x600552B")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public DebugConsole()
	{
	}
}
