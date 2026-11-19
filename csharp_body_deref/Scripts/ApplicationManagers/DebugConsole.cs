// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.DebugConsole
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/DebugConsole.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugConsole.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace ApplicationManagers;

[Token(Token = "0x2000975")]
internal class DebugConsole : MonoBehaviour
{
	[Token(Token = "0x2000976")]
	public class LogMessage
	{
		[Token(Token = "0x4002FBA")]
		[FieldOffset(Offset = "0x10")]
		public string Message;

		[Token(Token = "0x4002FBB")]
		[FieldOffset(Offset = "0x18")]
		public LogType Type;

		[Token(Token = "0x4002FBC")]
		[FieldOffset(Offset = "0x20")]
		public string Prefix;

		[Token(Token = "0x4002FBD")]
		[FieldOffset(Offset = "0x28")]
		public bool IsCustomLogic;

		[Token(Token = "0x4002FBE")]
		[FieldOffset(Offset = "0x30")]
		public string StackTrace;

		[Token(Token = "0x4002FBF")]
		[FieldOffset(Offset = "0x38")]
		public int Count;

		[Token(Token = "0x4002FC0")]
		[FieldOffset(Offset = "0x40")]
		private string _cachedFormatted;

		[Token(Token = "0x4002FC1")]
		[FieldOffset(Offset = "0x48")]
		private bool _lastShowStackTraces;

		[Token(Token = "0x4002FC2")]
		[FieldOffset(Offset = "0x4C")]
		private int _lastCount;

		[Token(Token = "0x600588F")]
		[Address(RVA = "0x5D13D30", Offset = "0x5D12D30", VA = "0x5D13D30")]
		public void Initialize(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
		{
		}

		[Token(Token = "0x6005890")]
		[Address(RVA = "0x5D13EC0", Offset = "0x5D12EC0", VA = "0x5D13EC0")]
		public void Reset()
		{
		}

		[Token(Token = "0x6005891")]
		[Address(RVA = "0x5D11230", Offset = "0x5D10230", VA = "0x5D11230")]
		public string GetFormattedMessage(bool showStackTraces)
		{
			return null;
		}

		[Token(Token = "0x6005892")]
		[Address(RVA = "0x5D101C0", Offset = "0x5D0F1C0", VA = "0x5D101C0")]
		public bool IsDuplicateOf(string message, LogType type, bool isCustomLogic, string stackTrace)
		{
			return default(bool);
		}

		[Token(Token = "0x6005893")]
		[Address(RVA = "0x5D13F20", Offset = "0x5D12F20", VA = "0x5D13F20")]
		public LogMessage()
		{
		}
	}

	[Token(Token = "0x2000977")]
	private static class LogMessagePool
	{
		[Token(Token = "0x4002FC3")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Stack<LogMessage> _pool;

		[Token(Token = "0x4002FC4")]
		private const int PoolSize = 512;

		[Token(Token = "0x6005894")]
		[Address(RVA = "0x5D13F30", Offset = "0x5D12F30", VA = "0x5D13F30")]
		static LogMessagePool()
		{
		}

		[Token(Token = "0x6005895")]
		[Address(RVA = "0x5D10220", Offset = "0x5D0F220", VA = "0x5D10220")]
		public static LogMessage Get(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
		{
			return null;
		}

		[Token(Token = "0x6005896")]
		[Address(RVA = "0x5D10350", Offset = "0x5D0F350", VA = "0x5D10350")]
		public static void Return(LogMessage logMessage)
		{
		}
	}

	[Token(Token = "0x2000978")]
	private enum LogTab
	{
		[Token(Token = "0x4002FC6")]
		All,
		[Token(Token = "0x4002FC7")]
		Info,
		[Token(Token = "0x4002FC8")]
		Warning,
		[Token(Token = "0x4002FC9")]
		Error,
		[Token(Token = "0x4002FCA")]
		CustomLogic
	}

	[Token(Token = "0x4002F8F")]
	[FieldOffset(Offset = "0x0")]
	private static DebugConsole _instance;

	[Token(Token = "0x4002F90")]
	[FieldOffset(Offset = "0x8")]
	public static bool Enabled;

	[Token(Token = "0x4002F91")]
	[FieldOffset(Offset = "0x20")]
	private GUICallback _window;

	[Token(Token = "0x4002F92")]
	[FieldOffset(Offset = "0x10")]
	public static LinkedList<LogMessage> _messages;

	[Token(Token = "0x4002F93")]
	[FieldOffset(Offset = "0x18")]
	public static LinkedList<LogMessage> _messageBuffer;

	[Token(Token = "0x4002F94")]
	[FieldOffset(Offset = "0x20")]
	private static int _currentCharCount;

	[Token(Token = "0x4002F95")]
	[FieldOffset(Offset = "0x24")]
	private static int _currentCharCountBuffer;

	[Token(Token = "0x4002F96")]
	[FieldOffset(Offset = "0x28")]
	private static Vector2 _scrollPosition;

	[Token(Token = "0x4002F97")]
	[FieldOffset(Offset = "0x30")]
	private static string _inputLine;

	[Token(Token = "0x4002F98")]
	[FieldOffset(Offset = "0x38")]
	private static bool _needResetScroll;

	[Token(Token = "0x4002F99")]
	[FieldOffset(Offset = "0x40")]
	private static List<LogMessage> _filteredMessages;

	[Token(Token = "0x4002F9A")]
	[FieldOffset(Offset = "0x48")]
	private static bool _filterDirty;

	[Token(Token = "0x4002F9B")]
	[FieldOffset(Offset = "0x4C")]
	private static LogTab _lastFilterTab;

	[Token(Token = "0x4002F9C")]
	[FieldOffset(Offset = "0x50")]
	private static StringBuilder _displayBuilder;

	[Token(Token = "0x4002F9D")]
	[FieldOffset(Offset = "0x58")]
	private static string _cachedDisplayText;

	[Token(Token = "0x4002F9E")]
	[FieldOffset(Offset = "0x60")]
	private static bool _displayDirty;

	[Token(Token = "0x4002F9F")]
	[FieldOffset(Offset = "0x64")]
	private static int _lastFilteredCount;

	[Token(Token = "0x4002FA0")]
	[FieldOffset(Offset = "0x68")]
	private static bool _lastShowStackTraces;

	[Token(Token = "0x4002FA1")]
	private const int MaxBufferProcessPerFrame = 50;

	[Token(Token = "0x4002FA2")]
	[FieldOffset(Offset = "0x6C")]
	private static float _windowX;

	[Token(Token = "0x4002FA3")]
	[FieldOffset(Offset = "0x70")]
	private static float _windowY;

	[Token(Token = "0x4002FA4")]
	[FieldOffset(Offset = "0x74")]
	private static float _windowWidth;

	[Token(Token = "0x4002FA5")]
	[FieldOffset(Offset = "0x78")]
	private static float _windowHeight;

	[Token(Token = "0x4002FA6")]
	[FieldOffset(Offset = "0x7C")]
	private static bool _isDragging;

	[Token(Token = "0x4002FA7")]
	[FieldOffset(Offset = "0x7D")]
	private static bool _isResizing;

	[Token(Token = "0x4002FA8")]
	[FieldOffset(Offset = "0x80")]
	private static Vector2 _dragOffset;

	[Token(Token = "0x4002FA9")]
	[FieldOffset(Offset = "0x88")]
	private static Vector2 _resizeStartSize;

	[Token(Token = "0x4002FAA")]
	[FieldOffset(Offset = "0x90")]
	private static Vector2 _resizeStartMousePos;

	[Token(Token = "0x4002FAB")]
	[FieldOffset(Offset = "0x98")]
	private static LogTab _currentTab;

	[Token(Token = "0x4002FAC")]
	[FieldOffset(Offset = "0x9C")]
	private static bool _showStackTraces;

	[Token(Token = "0x4002FAD")]
	[FieldOffset(Offset = "0x9D")]
	private static bool _solidBackground;

	[Token(Token = "0x4002FAE")]
	[FieldOffset(Offset = "0x9E")]
	private static bool _wordWrap;

	[Token(Token = "0x4002FAF")]
	private const int MaxMessages = 1024;

	[Token(Token = "0x4002FB0")]
	private const int MaxChars = 500000;

	[Token(Token = "0x4002FB1")]
	private const int MaxMessageLength = 1024;

	[Token(Token = "0x4002FB2")]
	private const int InputHeight = 25;

	[Token(Token = "0x4002FB3")]
	private const int Padding = 10;

	[Token(Token = "0x4002FB4")]
	private const int TabHeight = 25;

	[Token(Token = "0x4002FB5")]
	private const int ResizeHandleSize = 15;

	[Token(Token = "0x4002FB6")]
	private const int MinWidth = 400;

	[Token(Token = "0x4002FB7")]
	private const int MinHeight = 300;

	[Token(Token = "0x4002FB8")]
	private const string InputControlName = "DebugInput";

	[Token(Token = "0x4002FB9")]
	private const string CustomLogicErrorPrefix = "[Custom Logic Error] ";

	[Token(Token = "0x6005879")]
	[Address(RVA = "0x5D08A90", Offset = "0x5D07A90", VA = "0x5D08A90")]
	public static void Init()
	{
	}

	[Token(Token = "0x600587A")]
	[Address(RVA = "0x5D0FA90", Offset = "0x5D0EA90", VA = "0x5D0FA90")]
	public static void Log(string message, bool showInChat = false)
	{
	}

	[Token(Token = "0x600587B")]
	[Address(RVA = "0x5D0FB40", Offset = "0x5D0EB40", VA = "0x5D0FB40")]
	public static void LogCustomLogic(string message, bool showInChat = false)
	{
	}

	[Token(Token = "0x600587C")]
	[Address(RVA = "0x5D0FC10", Offset = "0x5D0EC10", VA = "0x5D0FC10")]
	public static void LogTimeSince(float start, string prefix = "")
	{
	}

	[Token(Token = "0x600587D")]
	[Address(RVA = "0x5D0FCB0", Offset = "0x5D0ECB0", VA = "0x5D0FCB0")]
	private static void OnUnityDebugLog(string log, string stackTrace, LogType type)
	{
	}

	[Token(Token = "0x600587E")]
	[Address(RVA = "0x5D0FD70", Offset = "0x5D0ED70", VA = "0x5D0FD70")]
	private static void AddMessageBuffer(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
	{
	}

	[Token(Token = "0x600587F")]
	[Address(RVA = "0x5D10470", Offset = "0x5D0F470", VA = "0x5D10470")]
	private static void AddMessage(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
	{
	}

	[Token(Token = "0x6005880")]
	[Address(RVA = "0x5D107B0", Offset = "0x5D0F7B0", VA = "0x5D107B0")]
	private static void ProcessMessageBuffer()
	{
	}

	[Token(Token = "0x6005881")]
	[Address(RVA = "0x5D10BB0", Offset = "0x5D0FBB0", VA = "0x5D10BB0")]
	private static void UpdateFilteredMessages()
	{
	}

	[Token(Token = "0x6005882")]
	[Address(RVA = "0x5D10F70", Offset = "0x5D0FF70", VA = "0x5D10F70")]
	private static string GetDisplayText()
	{
		return null;
	}

	[Token(Token = "0x6005883")]
	[Address(RVA = "0x5D11340", Offset = "0x5D10340", VA = "0x5D11340")]
	private void Update()
	{
	}

	[Token(Token = "0x6005884")]
	[Address(RVA = "0x5D11450", Offset = "0x5D10450", VA = "0x5D11450")]
	private void DrawWindow()
	{
	}

	[Token(Token = "0x6005885")]
	[Address(RVA = "0x5D117E0", Offset = "0x5D107E0", VA = "0x5D117E0")]
	private static void HandleWindowInteraction()
	{
	}

	[Token(Token = "0x6005886")]
	[Address(RVA = "0x5D11E30", Offset = "0x5D10E30", VA = "0x5D11E30")]
	private static void DrawTabs()
	{
	}

	[Token(Token = "0x6005887")]
	[Address(RVA = "0x5D128B0", Offset = "0x5D118B0", VA = "0x5D128B0")]
	private static void DrawMessageWindow()
	{
	}

	[Token(Token = "0x6005888")]
	[Address(RVA = "0x5D12CE0", Offset = "0x5D11CE0", VA = "0x5D12CE0")]
	private static void DrawInputWindow()
	{
	}

	[Token(Token = "0x6005889")]
	[Address(RVA = "0x5D12DF0", Offset = "0x5D11DF0", VA = "0x5D12DF0")]
	private static void HandleInput()
	{
	}

	[Token(Token = "0x600588A")]
	[Address(RVA = "0x5D13120", Offset = "0x5D12120", VA = "0x5D13120")]
	private static bool IsEnterUp()
	{
		return default(bool);
	}

	[Token(Token = "0x600588B")]
	[Address(RVA = "0x5D134C0", Offset = "0x5D124C0", VA = "0x5D134C0")]
	private static void HandleWindowDraggingAndResizing()
	{
	}

	[Token(Token = "0x600588C")]
	[Address(RVA = "0x5D13060", Offset = "0x5D12060", VA = "0x5D13060")]
	private static void DrawResizeHandle()
	{
	}

	[Token(Token = "0x600588D")]
	[Address(RVA = "0x5D13AC0", Offset = "0x5D12AC0", VA = "0x5D13AC0")]
	public DebugConsole()
	{
	}
}
