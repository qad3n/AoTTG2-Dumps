// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.DebugConsole
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/DebugConsole.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugConsole.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole.LogMessage$$Initialize): 2 lines keep C-only constructs
			String* ppSVar1;

			if (message == null) {
				message = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if (this == null) {
				throw new NullReferenceException();
			}
			this.Message = message;
			if (stackTrace == null) {
				stackTrace = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			this.StackTrace = stackTrace;
			this.Type = type;
			this.IsCustomLogic = isCustomLogic;
			this.Count = 1;
			this._cachedFormatted = null;
			this._lastShowStackTraces = false;
			this._lastCount = 0;
			switch(type) {
			case 0:
				ppSVar1 = &"<color=red>\xe2\x9c\x96</color> ";
				break;
			case 1:
				ppSVar1 = &"<color=orange>!</color> ";
				break;
			case 2:
				ppSVar1 = &"<color=yellow>\xe2\x9a\xa0</color> ";
				break;
			case 3:
				ppSVar1 = &"<color=white>\xe2\x84\xb9</color> ";
				break;
			case 4:
				ppSVar1 = &"<color=red>\xe2\x9b\x94</color> ";
				break;
			default: ;
				ppSVar1 = &"";
			}
			this.Prefix = *ppSVar1;
			return;
		}

		[Token(Token = "0x6005890")]
		[Address(RVA = "0x5D13EC0", Offset = "0x5D12EC0", VA = "0x5D13EC0")]
		public void Reset()
		{
			// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole.LogMessage$$Reset): clean
			this.Message = null;
			this.StackTrace = null;
			this.Prefix = null;
			this._cachedFormatted = null;
			this.Count = 1;
			return;
		}

		[Token(Token = "0x6005891")]
		[Address(RVA = "0x5D11230", Offset = "0x5D10230", VA = "0x5D11230")]
		public string GetFormattedMessage(bool showStackTraces)
		{
			// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole.LogMessage$$GetFormattedMessage): 7 lines keep C-only constructs
			String* targetAddress;
			int iVar1;
			bool bVar2;
			ulong in_RAX;
			object arg0;
			String pSVar3;
			ulong uStack_28;

			uStack_28 = in_RAX;
			pSVar3 = this._cachedFormatted;
			if (((pSVar3 == null) || (this._lastShowStackTraces != showStackTraces)) ||(this._lastCount != this.Count)) {
				this._lastShowStackTraces = showStackTraces;
				iVar1 = this.Count;
				this._lastCount = iVar1;
				if (iVar1 < 2) {
					pSVar3 = "";
				}
				else {
					uStack_28 = CONCAT44(iVar1, (undefined4)uStack_28);
					arg0 = (object)(((long)&uStack_28 + 4));
					pSVar3 = String.Format(" (x{0})", arg0);
				}
				targetAddress = &this._cachedFormatted;
				pSVar3 = String.Concat(this.Prefix, this.Message, pSVar3);
				if (showStackTraces) {
					bVar2 = String.IsNullOrEmpty(this.StackTrace);
					if (!bVar2) {
						pSVar3 = String.Concat(pSVar3, "\n", this.StackTrace);
					}
				}
				*targetAddress = pSVar3;
				pSVar3 = *targetAddress;
			}
			return pSVar3;
		}

		[Token(Token = "0x6005892")]
		[Address(RVA = "0x5D101C0", Offset = "0x5D0F1C0", VA = "0x5D101C0")]
		public bool IsDuplicateOf(string message, LogType type, bool isCustomLogic, string stackTrace)
		{
			// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole.LogMessage$$IsDuplicateOf): clean
			bool bVar1;

			bVar1 = (this.Message == message);
			if (((bVar1) && (this.Type == type)) && (this.IsCustomLogic == isCustomLogic)) {
				bVar1 = (this.StackTrace == stackTrace);
				return bVar1;
			}
			return false;
		}

		[Token(Token = "0x6005893")]
		[Address(RVA = "0x5D13F20", Offset = "0x5D12F20", VA = "0x5D13F20")]
		public LogMessage()
		{
			// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole.LogMessage$$.ctor): clean
			base();
			return;
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
			// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole.LogMessagePool$$.cctor): clean
			Stack<DebugConsole.LogMessage> pSVar1;
			DebugConsole.LogMessage __this;
			int iVar2;

			iVar2 = 0x200;
			pSVar1 = new Stack<DebugConsole.LogMessage>(0x200);
			DebugConsole.LogMessagePool._pool = pSVar1;
			do {
				pSVar1 = DebugConsole.LogMessagePool._pool;
				__this = new DebugConsole.LogMessage();
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				pSVar1.Push((object)__this) ;
				iVar2 = iVar2 + -1;
			} while (iVar2 != 0);
			return;
		}

		[Token(Token = "0x6005895")]
		[Address(RVA = "0x5D10220", Offset = "0x5D0F220", VA = "0x5D10220")]
		public static LogMessage Get(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
		{
			// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole.LogMessagePool$$Get): 1 lines keep C-only constructs
			Stack<DebugConsole.LogMessage> __this;
			DebugConsole.LogMessage __this_00;

			if (Il2CppMethodInitialized_0754841a == false) {
				Il2CppMethodInitialized_0754841a = true;
				if ((typeof(DebugConsole.LogMessagePool)._2).cctor_finished_or_no_cctor != 0) goto label_05e10250;
		label_05e102ae: ;
				il2cpp_codegen_runtime_class_init(typeof(DebugConsole.LogMessagePool)) ;
				__this = DebugConsole.LogMessagePool._pool;
			}
			else {
				if ((typeof(DebugConsole.LogMessagePool)._2).cctor_finished_or_no_cctor == 0) goto label_05e102ae;
		label_05e10250: ;
				__this = DebugConsole.LogMessagePool._pool;
			}
			if (__this != null) {
				if (__this._size < 1) {
					__this_00 = new DebugConsole.LogMessage();
				}
				else {
					if (((typeof(DebugConsole.LogMessagePool))._2). cctor_finished_or_no_cctor == 0) {
						__this = DebugConsole.LogMessagePool._pool;
						if (__this == null) goto label_05e1034b;
					}
					__this_00 = (DebugConsole.LogMessage)__this.Pop();
				}
				if (__this_00 != null) {
					__this_00.Initialize(message, type, stackTrace, isCustomLogic);
					return __this_00;
				}
			}
		label_05e1034b: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6005896")]
		[Address(RVA = "0x5D10350", Offset = "0x5D0F350", VA = "0x5D10350")]
		public static void Return(LogMessage logMessage)
		{
			// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole.LogMessagePool$$Return): clean
			Stack<DebugConsole.LogMessage> __this;

			if (logMessage != null) {
				logMessage.Message = null;
				logMessage.StackTrace = null;
				logMessage.Prefix = null;
				logMessage._cachedFormatted = null;
				logMessage.Count = 1;
				__this = DebugConsole.LogMessagePool._pool;
				if (__this == null) {
		label_05e1045e: ;
					throw new NullReferenceException();
				}
				if (__this._size < 0x200) {
					if ((typeof(DebugConsole.LogMessagePool)._2).cctor_finished_or_no_cctor == 0) {
						__this = DebugConsole.LogMessagePool._pool;
						if (__this == null) goto label_05e1045e;
					}
					__this.Push((object)logMessage);
					return;
				}
			}
			return;
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
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$Init): 2 lines keep C-only constructs
		DebugConsole @object;
		bool bVar2;
		DebugConsole pAVar3;
		GameObject owner;
		Action __this;
		GUICallback pUVar4;
		Application.LogCallback __this_00;

		pAVar3 = SingletonFactory.CreateSingleton<DebugConsole>((object)DebugConsole._instance);
		DebugConsole._instance = pAVar3;
		pAVar3 = DebugConsole._instance;
		if (pAVar3 == null) {
			throw new NullReferenceException();
		}
		owner = pAVar3.gameObject;
		@object = DebugConsole._instance;
		__this = new Action((object)@object, (intptr_t)MethodInfo_ApplicationManagers_DebugConsole_DrawWindow);
		pUVar4 = GUICallback.Create(owner, __this);
		pAVar3._window = pUVar4;
		__this_00 = new Application.LogCallback(null, (intptr_t)MethodInfo_ApplicationManagers_DebugConsole_OnUnityDebugLog);
		Application.add_logMessageReceived(__this_00);
		bVar2 = Debug.isDebugBuild;
		DebugConsole._currentTab = (uint)!bVar2 << 2;
		DebugConsole._lastFilterTab = (uint)!bVar2 << 2;
		return;
	}

	[Token(Token = "0x600587A")]
	[Address(RVA = "0x5D0FA90", Offset = "0x5D0EA90", VA = "0x5D0FA90")]
	public static void Log(string message, bool showInChat = false)
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$Log): clean
		bool bVar1;

		Debug.Log((object)message);
		if (showInChat) {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				bVar1 = ChatManager.IsChatAvailable();
			}
			else {
				bVar1 = ChatManager.IsChatAvailable();
			}
			if (bVar1) {
				if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				ChatManager.AddException(message);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600587B")]
	[Address(RVA = "0x5D0FB40", Offset = "0x5D0EB40", VA = "0x5D0FB40")]
	public static void LogCustomLogic(string message, bool showInChat = false)
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$LogCustomLogic): clean
		bool bVar1;
		String message_00;

		message_00 = String.Concat("[Custom Logic Error] ", message);
		Debug.LogError((object)message_00);
		if (showInChat) {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				bVar1 = ChatManager.IsChatAvailable();
			}
			else {
				bVar1 = ChatManager.IsChatAvailable();
			}
			if (bVar1) {
				if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				ChatManager.AddException(message);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600587C")]
	[Address(RVA = "0x5D0FC10", Offset = "0x5D0EC10", VA = "0x5D0FC10")]
	public static void LogTimeSince(float start, string prefix = "")
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$LogTimeSince): clean
		String pSVar1;
		float local_c;

		local_c = Time.realtimeSinceStartup;
		local_c = local_c - start;
		pSVar1 = local_c.ToString();
		pSVar1 = String.Concat(prefix, ": ", pSVar1);
		Debug.Log((object)pSVar1);
		return;
	}

	[Token(Token = "0x600587D")]
	[Address(RVA = "0x5D0FCB0", Offset = "0x5D0ECB0", VA = "0x5D0FCB0")]
	private static void OnUnityDebugLog(string log, string stackTrace, LogType type)
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$OnUnityDebugLog): clean
		bool isCustomLogic;

		if (log == null) {
	label_05e0fd5d: ;
			throw new NullReferenceException();
		}
		isCustomLogic = log.StartsWith("[Custom Logic Error] ");
		if (isCustomLogic) {
			if ("[Custom Logic Error] " == null) goto label_05e0fd5d;
			log = log.Substring(("[Custom Logic Error] ".fields)._stringLength);
			if (type == 3) {
				type = 0;
			}
		}
		DebugConsole.AddMessageBuffer(log, type, stackTrace, isCustomLogic);
		return;
	}

	[Token(Token = "0x600587E")]
	[Address(RVA = "0x5D0FD70", Offset = "0x5D0ED70", VA = "0x5D0FD70")]
	private static void AddMessageBuffer(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$AddMessageBuffer): 18 lines keep C-only constructs
		object pIVar1;
		bool bVar2;
		String pSVar3;
		String pSVar4;
		LinkedList<DebugConsole.LogMessage> pSVar5;
		LinkedListNode<T> pSVar6;
		DebugConsole.LogMessage pAVar7;
		ApplicationManagers_DebugConsole_StaticFields pAVar8;
		int iVar9;
		bool pbVar10;
		int length;
		Il2CppClass klass;

		if (message == null) {
			message = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (stackTrace == null) {
			stackTrace = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (message == null) goto label_05e101b3;
		iVar9 = message._stringLength;
		pSVar3 = message;
		if (0x400 < iVar9) {
			pSVar3 = message.Substring(0, 0x400);
			pSVar3 = String.Concat(pSVar3, "...");
			iVar9 = message._stringLength;
		}
		if (0x3ff < iVar9) {
			iVar9 = 0x400;
		}
		if (stackTrace == null) goto label_05e101b3;
		length = 0x400 - iVar9;
		if (length < stackTrace._stringLength) {
			if (length < 1) {
				length = 0;
			}
			pSVar4 = stackTrace.Substring(0, length);
			stackTrace = String.Concat(pSVar4, "...");
			if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor != 0) goto label_05e0fed8;
	label_05e0ff2b: ;
			pSVar5 = DebugConsole._messageBuffer;
		}
		else {
			if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) goto label_05e0ff2b;
	label_05e0fed8: ;
			pSVar5 = DebugConsole._messageBuffer;
		}
		if (pSVar5 != null) {
			if (0 < pSVar5.count) {
				if (((typeof(DebugConsole))._2).cctor_finished_or_no_cctor == 0) {
					pSVar5 = DebugConsole._messageBuffer;
					if (pSVar5 == null) goto label_05e101b3;
				}
				pSVar6 = pSVar5.Last;
				if ((pSVar6 == null) ||(pIVar1 = pSVar6.item, pIVar1 == null)) goto label_05e101b3;
				bVar2 = ((String)pIVar1[1].klass == pSVar3);
				if ((bVar2) &&(((*(int)&pIVar1[1].monitor == type && ((bool)*(sbyte)&pIVar1[2].monitor == isCustomLogic)) &&(bVar2 = ((String)pIVar1[3].klass == stackTrace))))) {
					*(int)&pIVar1[3].monitor = *(int)&pIVar1[3].monitor + 1;
					pAVar8 = typeof(DebugConsole).static_fields;
					pbVar10 = &pAVar8._needResetScroll;
	label_05e1019d: ;
					*pbVar10 = true;
					pAVar8._displayDirty = true;
					return;
				}
			}
			pAVar7 = DebugConsole.LogMessagePool.Get(pSVar3, type, stackTrace, isCustomLogic) ;
			pSVar5 = DebugConsole._messageBuffer;
			if (((pSVar5 != null) &&(pSVar5.AddLast((object)pAVar7), klass = typeof(DebugConsole), pSVar3 != null)) && (stackTrace != null)) {
				DebugConsole._currentCharCountBuffer = DebugConsole._currentCharCountBuffer +pSVar3._stringLength + stackTrace._stringLength;
				while(true) {
					if ((klass._2).cctor_finished_or_no_cctor == 0) {
						klass = typeof(DebugConsole);
					}
					pAVar8 = klass.static_fields;
					if (pAVar8._messageBuffer == null) break;
					if (pAVar8._messageBuffer.count < 0x401) {
						if ((klass._2).cctor_finished_or_no_cctor == 0) {
							pAVar8 = typeof(DebugConsole).static_fields;
							klass = typeof(DebugConsole);
						}
						if (pAVar8._currentCharCountBuffer < 0x7a121) {
							if ((klass._2).cctor_finished_or_no_cctor == 0) {
								pAVar8 = typeof(DebugConsole).static_fields;
							}
							pAVar8._needResetScroll = true;
							pbVar10 = &pAVar8._filterDirty;
							goto label_05e1019d;
						}
					}
					if ((klass._2).cctor_finished_or_no_cctor == 0) {
						klass = typeof(DebugConsole);
					}
					pAVar8 = klass.static_fields;
					pSVar5 = pAVar8._messageBuffer;
					if (((pSVar5 == null) ||(pSVar6 = ((LinkedList<T>)&pSVar5.fields).head, pSVar6 == null)) ||((pAVar7 = (DebugConsole.LogMessage)pSVar6.item, pAVar7 == null ||((pSVar3 = pAVar7.Message, pSVar3 == null ||(pSVar4 = pAVar7.StackTrace, pSVar4 == null)))))) break;
					pAVar8._currentCharCountBuffer = pAVar8._currentCharCountBuffer -(pSVar3._stringLength + pSVar4._stringLength);
					pSVar5.RemoveFirst();
					DebugConsole.LogMessagePool.Return(pAVar7);
					klass = typeof(DebugConsole);
				}
			}
		}
	label_05e101b3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600587F")]
	[Address(RVA = "0x5D10470", Offset = "0x5D0F470", VA = "0x5D10470")]
	private static void AddMessage(string message, LogType type, string stackTrace = "", bool isCustomLogic = false)
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$AddMessage): 16 lines keep C-only constructs
		object pIVar1;
		String pSVar2;
		String pSVar3;
		bool bVar4;
		LinkedList<DebugConsole.LogMessage> pSVar5;
		LinkedListNode<T> pSVar6;
		DebugConsole.LogMessage pAVar7;
		ApplicationManagers_DebugConsole_StaticFields pAVar8;
		Il2CppClass klass;

		bVar4 = (message == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar4) {
			return;
		}
		pSVar5 = DebugConsole._messages;
		if (pSVar5 != null) {
			if (0 < pSVar5.count) {
				if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
					pSVar5 = DebugConsole._messages;
					if (pSVar5 == null) goto label_05e107a8;
				}
				pSVar6 = pSVar5.Last;
				if ((pSVar6 == null) ||(pIVar1 = pSVar6.item, pIVar1 == null)) goto label_05e107a8;
				bVar4 = ((String)pIVar1[1].klass == message);
				if ((bVar4) &&(((*(int)&pIVar1[1].monitor == type && ((bool)*(sbyte)&pIVar1[2].monitor == isCustomLogic)) &&(bVar4 = ((String)pIVar1[3].klass == stackTrace))))) {
					*(int)&pIVar1[3].monitor = *(int)&pIVar1[3].monitor + 1;
					pAVar8 = typeof(DebugConsole).static_fields;
	label_05e10795: ;
					pAVar8._displayDirty = true;
					return;
				}
			}
			pAVar7 = DebugConsole.LogMessagePool.Get(message, type, stackTrace, isCustomLogic);
			pSVar5 = DebugConsole._messages;
			if (((pSVar5 != null) &&(pSVar5.AddLast((object)pAVar7), klass = typeof(DebugConsole), message != null)) && (stackTrace != null)) {
				DebugConsole._currentCharCount = DebugConsole._currentCharCount +message._stringLength + stackTrace._stringLength;
				while(true) {
					if ((klass._2).cctor_finished_or_no_cctor == 0) {
						klass = typeof(DebugConsole);
					}
					pAVar8 = klass.static_fields;
					if (pAVar8._messages == null) break;
					if (pAVar8._messages.count < 0x401) {
						if ((klass._2).cctor_finished_or_no_cctor == 0) {
							pAVar8 = typeof(DebugConsole).static_fields;
							klass = typeof(DebugConsole);
						}
						if (pAVar8._currentCharCount < 0x7a121) {
							if ((klass._2).cctor_finished_or_no_cctor == 0) {
								pAVar8 = typeof(DebugConsole).static_fields;
							}
							pAVar8._filterDirty = true;
							goto label_05e10795;
						}
					}
					if ((klass._2).cctor_finished_or_no_cctor == 0) {
						klass = typeof(DebugConsole);
					}
					pAVar8 = klass.static_fields;
					pSVar5 = pAVar8._messages;
					if (((pSVar5 == null) ||(pSVar6 = ((LinkedList<T>)&pSVar5.fields).head, pSVar6 == null)) ||((pAVar7 = (DebugConsole.LogMessage)pSVar6.item, pAVar7 == null ||((pSVar2 = pAVar7.Message, pSVar2 == null ||(pSVar3 = pAVar7.StackTrace, pSVar3 == null)))))) break;
					pAVar8._currentCharCount = pAVar8._currentCharCount - (pSVar2._stringLength + pSVar3._stringLength);
					pSVar5.RemoveFirst();
					DebugConsole.LogMessagePool.Return(pAVar7);
					klass = typeof(DebugConsole);
				}
			}
		}
	label_05e107a8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005880")]
	[Address(RVA = "0x5D107B0", Offset = "0x5D0F7B0", VA = "0x5D107B0")]
	private static void ProcessMessageBuffer()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$ProcessMessageBuffer): 5 lines keep C-only constructs
		DebugConsole.LogMessage pAVar1;
		object pIVar2;
		String pSVar3;
		String pSVar4;
		bool bVar5;
		bool bVar6;
		LinkedList<DebugConsole.LogMessage> pSVar7;
		LinkedListNode<T> pSVar8;
		ApplicationManagers_DebugConsole_StaticFields pAVar9;
		int iVar10;
		uint uVar11;
		uint uVar13;

		uVar13 = 0;
		while(true) {
			pAVar9 = typeof(DebugConsole).static_fields;
			pSVar7 = pAVar9._messageBuffer;
			if (pSVar7 == null) break;
			if ((0x31 < uVar13) || (pSVar7.count < 1)) {
				if (uVar13 != 0) {
					if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
						pAVar9 = typeof(DebugConsole).static_fields;
					}
					pAVar9._filterDirty = true;
					pAVar9._displayDirty = true;
				}
				return;
			}
			if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
				pSVar7 = DebugConsole._messageBuffer;
				if (pSVar7 == null) break;
			}
			pSVar8 = pSVar7.head;
			if (pSVar8 == null) break;
			pAVar1 = (DebugConsole.LogMessage)pSVar8.item;
			pSVar7.RemoveFirst();
			pSVar7 = DebugConsole._messages;
			if (pSVar7 == null) break;
			if (pSVar7.count < 1) {
	label_05e10a20: ;
				if (((pAVar1 != null) &&(pSVar3 = pAVar1.Message, pSVar3 != null)) &&(pSVar4 = pAVar1.StackTrace, pSVar4 != null)) {
					pAVar9 = typeof(DebugConsole).static_fields;
					iVar10 = pSVar4._stringLength + pSVar3._stringLength;
					pAVar9._currentCharCountBuffer = pAVar9._currentCharCountBuffer - iVar10;
					pAVar9._currentCharCount = pAVar9._currentCharCount + iVar10;
					if (pAVar9._messages != null) {
						(pAVar9._messages).AddLast((object)pAVar1);
						do {
							pAVar9 = typeof(DebugConsole).static_fields;
							if (pAVar9._messages == null) break;
							if (pAVar9._messages.count < 0x401) {
								if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
									pAVar9 = typeof(DebugConsole).static_fields;
								}
								if (pAVar9._currentCharCount < 0x7a121) goto label_05e10860;
							}
							pAVar9 = typeof(DebugConsole).static_fields;
							pSVar7 = pAVar9._messages;
							if ((((pSVar7 == null) ||(pSVar8 = ((LinkedList<T>)&pSVar7.fields).head, pSVar8 == null)) ||(pAVar1 = (DebugConsole.LogMessage)pSVar8.item, pAVar1 == null)) ||((pSVar3 = pAVar1.Message, pSVar3 == null ||(pSVar4 = pAVar1.StackTrace, pSVar4 == null)))) break;
							pAVar9._currentCharCount = pAVar9._currentCharCount - (pSVar3._stringLength + pSVar4._stringLength) ;
							pSVar7.RemoveFirst();
							if ((typeof(DebugConsole.LogMessagePool)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							DebugConsole.LogMessagePool.Return(pAVar1);
						} while(true);
					}
				}
				break;
			}
			if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
				pSVar7 = DebugConsole._messages;
				if (pSVar7 == null) break;
			}
			pSVar8 = pSVar7.Last;
			if (((pSVar8 == null) ||(pAVar1 == null)) ||(pIVar2 = pSVar8.item, pIVar2 == null)) break;
			iVar10 = pAVar1.Type;
			bVar6 = pAVar1.IsCustomLogic;
			pSVar3 = pAVar1.StackTrace;
			bVar5 = ((String)pIVar2[1].klass == pAVar1.Message);
			if (((!bVar5) || (*(int)&pIVar2[1].monitor != iVar10)) || ((bool)*(sbyte)&pIVar2[2].monitor != bVar6)) goto label_05e10a20;
			bVar6 = ((String)pIVar2[3].klass == pSVar3);
			if (!bVar6) goto label_05e10a20;
			*(int)&pIVar2[3].monitor = *(int)&pIVar2[3].monitor + pAVar1.Count;
			pSVar3 = pAVar1.Message;
			if ((pSVar3 == null) ||(pSVar4 = pAVar1.StackTrace, pSVar4 == null)) break;
			uVar11 = DebugConsole._currentCharCountBuffer -(pSVar3._stringLength + pSVar4._stringLength);
			DebugConsole._currentCharCountBuffer = uVar11;
			DebugConsole.LogMessagePool.Return(pAVar1);
	label_05e10860: ;
			uVar13 = uVar13 + 1;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005881")]
	[Address(RVA = "0x5D10BB0", Offset = "0x5D0FBB0", VA = "0x5D10BB0")]
	private static void UpdateFilteredMessages()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$UpdateFilteredMessages): 15 lines keep C-only constructs
		int piVar1;
		sbyte cVar2;
		int length;
		uint uVar3;
		List<DebugConsole.LogMessage> pSVar4;
		DebugConsole.LogMessage[] pAVar5;
		LinkedListNode<T> item;
		bool bVar7;
		ApplicationManagers_DebugConsole_StaticFields pAVar8;
		LinkedListNode<T> local_88;
		byte[] local_58 = new byte[24];
		DebugConsole.LogMessage pAStack_40;
		LinkedListNode<T> local_38;

		local_88.list = null;
		local_88.next = null;
		local_88.klass = null;
		local_88.monitor = null;
		local_88.prev = null;
		if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
			pAVar8 = typeof(DebugConsole).static_fields;
			cVar2 = pAVar8._filterDirty;
		}
		else {
			pAVar8 = typeof(DebugConsole).static_fields;
			cVar2 = pAVar8._filterDirty;
		}
		if (cVar2 == false) {
			if (((typeof(DebugConsole))._2).cctor_finished_or_no_cctor == 0) {
				if (DebugConsole._lastFilterTab == DebugConsole._currentTab) {
					return;
				}
			}
			else if (pAVar8._lastFilterTab == pAVar8._currentTab) {
				return;
			}
		}
		pAVar8 = typeof(DebugConsole).static_fields;
		pSVar4 = pAVar8._filteredMessages;
		if (pSVar4 != null) {
			piVar1 = &pSVar4._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar4._size;
			pSVar4._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar4._items, 0, length);
				pAVar8 = typeof(DebugConsole).static_fields;
			}
			if (pAVar8._messages != null) {
				local_58.GetEnumerator((LinkedList<T>)pAVar8._messages);
				local_88.prev = local_38;
				local_88.list = (LinkedList<T>)local_58._16_8_;
				local_88.next = (LinkedListNode<T>)pAStack_40;
				local_88.klass = (LinkedListNode<T>)local_58._0_8_;
				local_88.monitor = (IntPtr)local_58._8_8_;
				local_58._0_8_ = null;
				local_58._8_8_ = &local_88;
	switchD_05e10dbf_default: ;
				bVar7 = local_88.MoveNext();
				item = local_88.next;
				if (!bVar7) {
					local_88.Dispose();
					pAVar8 = typeof(DebugConsole).static_fields;
					pAVar8._filterDirty = false;
					pAVar8._lastFilterTab = pAVar8._currentTab;
					pAVar8._displayDirty = true;
					return;
				}
				pAVar8 = typeof(DebugConsole).static_fields;
				switch(pAVar8._currentTab) {
				case 0:
					break;
				case 1:
					if ((DebugConsole.LogMessage)item ==null) {
						throw new NullReferenceException();
					}
					if (((DebugConsole.LogMessage)&item.fields).Type == 3) goto label_05e10df4;
					goto switchD_05e10dbf_default;
				case 2:
					if ((DebugConsole.LogMessage)item ==null) {
						throw new NullReferenceException();
					}
					if (((DebugConsole.LogMessage)&item.fields).Type != 2) goto switchD_05e10dbf_default;
	label_05e10df4: ;
					if (((DebugConsole.LogMessage)&item.fields).IsCustomLogic == true) goto switchD_05e10dbf_default;
					break;
				case 3:
					if ((DebugConsole.LogMessage)item ==null) {
						throw new NullReferenceException();
					}
					if ((((DebugConsole.LogMessage)&item.fields).IsCustomLogic != false) ||((uVar3 = ((DebugConsole.LogMessage)&item.fields).Type,(uVar3 & 0xfffffffb) != 0 && (uVar3 != 1)))) goto switchD_05e10dbf_default;
					break;
				case 4:
					if ((DebugConsole.LogMessage)item ==null) {
						throw new NullReferenceException();
					}
					if (((DebugConsole.LogMessage)&item.fields).IsCustomLogic == false) goto switchD_05e10dbf_default;
					break;
				default: ;
					goto switchD_05e10dbf_default;
				}
				if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
					pAVar8 = typeof(DebugConsole).static_fields;
				}
				pSVar4 = pAVar8._filteredMessages;
				if (pSVar4 != null) {
					piVar1 = &pSVar4._version;
					*piVar1 = *piVar1 + 1;
					pAVar5 = pSVar4._items;
					if (pAVar5 != null) {
						uVar3 = pSVar4._size;
						if (uVar3 < (uint)pAVar5.Length) {
							pSVar4._size = uVar3 + 1;
							pAVar5[(int)uVar3] = (DebugConsole.LogMessage)item;
						}
						else {
							pSVar4.AddWithResize((object)item);
						}
						goto switchD_05e10dbf_default;
					}
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005882")]
	[Address(RVA = "0x5D10F70", Offset = "0x5D0FF70", VA = "0x5D10F70")]
	private static string GetDisplayText()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$GetDisplayText): clean
		sbyte cVar1;
		uint uVar2;
		StringBuilder pSVar3;
		List<DebugConsole.LogMessage> __this;
		DebugConsole.LogMessage __this_00;
		String pSVar4;
		ApplicationManagers_DebugConsole_StaticFields pAVar5;
		int index;

		if (Il2CppMethodInitialized_0754840c == false) {
			Il2CppMethodInitialized_0754840c = true;
			if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) goto label_05e10fe5;
	label_05e10f94: ;
			pAVar5 = typeof(DebugConsole).static_fields;
			cVar1 = pAVar5._displayDirty;
		}
		else {
			if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor != 0) goto label_05e10f94;
	label_05e10fe5: ;
			pAVar5 = typeof(DebugConsole).static_fields;
			cVar1 = pAVar5._displayDirty;
		}
		if (cVar1 == false) {
			if (((typeof(DebugConsole))._2).cctor_finished_or_no_cctor == 0) {
				pAVar5 = typeof(DebugConsole).static_fields;
			}
			if (pAVar5._filteredMessages == null) goto label_05e11226;
			if (pAVar5._lastFilteredCount == pAVar5._filteredMessages._size) {
				if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
					pAVar5 = typeof(DebugConsole).static_fields;
					if (pAVar5._lastShowStackTraces == pAVar5._showStackTraces) goto label_05e1103c;
				}
				else if (pAVar5._lastShowStackTraces == pAVar5._showStackTraces) {
	label_05e1103c: ;
					if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
						pAVar5 = typeof(DebugConsole).static_fields;
					}
	label_05e11216: ;
					return pAVar5._cachedDisplayText;
				}
			}
		}
		pSVar3 = DebugConsole._displayBuilder;
		if (pSVar3 != null) {
			index = 0;
			pSVar3.Clear();
			uVar2 = (typeof(DebugConsole)._2).cctor_finished_or_no_cctor;
			while(true) {
				if (uVar2 == 0) {
				}
				pAVar5 = typeof(DebugConsole).static_fields;
				if (pAVar5._filteredMessages == null) goto label_05e11226;
				if (pAVar5._filteredMessages._size <= index) break;
				if (index != 0) {
					if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
						pAVar5 = typeof(DebugConsole).static_fields;
					}
					if (pAVar5._displayBuilder == null) goto label_05e11226;
					(pAVar5._displayBuilder).Append(10);
				}
				__this = DebugConsole._filteredMessages;
				if (__this == null) goto label_05e11226;
				pSVar3 = DebugConsole._displayBuilder;
				__this_00 = (DebugConsole.LogMessage)__this.get_Item(index);
				if ((__this_00 == null) ||(pSVar4 = __this_00.GetFormattedMessage(DebugConsole._showStackTraces), pSVar3 == null)) goto label_05e11226;
				pSVar3.Append(pSVar4);
				index = index + 1;
				uVar2 = (typeof(DebugConsole)._2).cctor_finished_or_no_cctor;
			}
			if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
				pAVar5 = typeof(DebugConsole).static_fields;
			}
			pSVar3 = pAVar5._displayBuilder;
			if (pSVar3 != null) {
				pSVar4 = pSVar3.ToString();
				pAVar5 = typeof(DebugConsole).static_fields;
				pAVar5._cachedDisplayText = pSVar4;
				pAVar5 = typeof(DebugConsole).static_fields;
				if (pAVar5._filteredMessages != null) {
					pAVar5._lastFilteredCount = pAVar5._filteredMessages._size;
					pAVar5._lastShowStackTraces = pAVar5._showStackTraces;
					pAVar5._displayDirty = false;
					goto label_05e11216;
				}
			}
		}
	label_05e11226: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005883")]
	[Address(RVA = "0x5D11340", Offset = "0x5D10340", VA = "0x5D11340")]
	private void Update()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$Update): 6 lines keep C-only constructs
		bool pbVar1;
		uint uVar2;
		InputSettings pSVar3;
		GeneralInputSettings pSVar4;
		KeybindSetting __this_00;
		GUICallback __this_01;
		Il2CppClass klass;
		bool bVar5;

		pSVar3 = SettingsManager.InputSettings;
		if (((pSVar3 != null) &&(pSVar4 = pSVar3.General, pSVar4 != null)) &&(__this_00 = pSVar4.DebugWindow, __this_00 != null)) {
			bVar5 = __this_00.GetKeyDown(false);
			if (bVar5) {
				klass = typeof(DebugConsole);
				pbVar1 = &DebugConsole.Enabled;
				*pbVar1 = (bool)(*pbVar1 ^ 1);
				__this_01 = this._window;
				uVar2 = (((DebugConsole)klass)._2).cctor_finished_or_no_cctor;
			}
			else {
				__this_01 = this._window;
				uVar2 = (typeof(DebugConsole)._2).cctor_finished_or_no_cctor;
				klass = typeof(DebugConsole);
			}
			if (uVar2 == 0) {
			}
			if (__this_01 != null) {
				__this_01.enabled = DebugConsole.Enabled;
				bVar5 = Input.GetKeyDown(0x123);
				if (!bVar5) {
					return;
				}
				DebugLagSim.Toggle();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005884")]
	[Address(RVA = "0x5D11450", Offset = "0x5D10450", VA = "0x5D11450")]
	private void DrawWindow()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$DrawWindow): clean
		sbyte cVar1;
		uint uVar2;
		ApplicationManagers_DebugConsole_StaticFields pAVar3;
		Rect position;
		Rect position_00;
		bool bVar4;
		Texture image;
		String pSVar5;
		MethodInfo method_01;
		Il2CppClass pIVar6;
		Color value;
		Color value_00;

		if (Il2CppMethodInitialized_0754840e == false) {
			Il2CppMethodInitialized_0754840e = true;
			uVar2 = (typeof(DebugConsole)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(DebugConsole)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = DebugConsole.Enabled;
		}
		else {
			cVar1 = (*(ApplicationManagers_DebugConsole_StaticFields*)((long)typeof(DebugConsole) + 0xb8)).Enabled;
		}
		if (cVar1 == false) {
			return;
		}
		if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar4 = ChatManager.IsChatActive();
		GUI.depth = 1;
		DebugConsole.HandleWindowInteraction();
		if (DebugConsole._solidBackground != false) {
			value = GUI.color;
			value_00.b = 0.15;
			value_00.a = 1.0;
			value_00.r = 0.15;
			value_00.g = 0.15;
			GUI.color = value_00;
			pAVar3 = typeof(DebugConsole).static_fields;
			position.m_XMin = pAVar3._windowX;
			position.m_YMin = pAVar3._windowY;
			position.m_Width = pAVar3._windowWidth;
			position.m_Height = pAVar3._windowHeight;
			image = (Texture)Texture2D.whiteTexture;
			GUI.DrawTexture(position, image);
			GUI.color = value;
		}
		pAVar3 = typeof(DebugConsole).static_fields;
		position_00.m_XMin = pAVar3._windowX;
		position_00.m_YMin = pAVar3._windowY;
		position_00.m_Width = pAVar3._windowWidth;
		position_00.m_Height = pAVar3._windowHeight;
		method_01 = (MethodInfo *)"";
		GUI.Box(position_00, "");
		DebugConsole.DrawTabs();
		if (bVar4) {
			GUI.enabled = false;
			uVar2 = (typeof(DebugConsole)._2).cctor_finished_or_no_cctor;
			pIVar6 = typeof(DebugConsole);
		}
		else {
			uVar2 = (typeof(DebugConsole)._2).cctor_finished_or_no_cctor;
			pIVar6 = typeof(DebugConsole);
		}
		typeof(DebugConsole) = (DebugConsole)pIVar6;
		if (uVar2 == 0) {
			DebugConsole.DrawMessageWindow();
			DebugConsole.DrawInputWindow();
			pIVar6 = typeof(DebugConsole);
		}
		else {
			DebugConsole.DrawMessageWindow();
			DebugConsole.DrawInputWindow();
			pIVar6 = typeof(DebugConsole);
		}
		typeof(DebugConsole) = (DebugConsole)pIVar6;
		if (bVar4) {
			if (((typeof(GUI))._2).cctor_finished_or_no_cctor == 0) {
			}
			GUI.enabled = true;
			pSVar5 = GUI.GetNameOfFocusedControl();
			bVar4 = (pSVar5 == "DebugInput");
			if (bVar4) {
				pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				GUI.FocusControl(pSVar5);
				uVar2 = (typeof(DebugConsole)._2).cctor_finished_or_no_cctor;
				pIVar6 = typeof(DebugConsole);
			}
			else {
				uVar2 = (typeof(DebugConsole)._2).cctor_finished_or_no_cctor;
				pIVar6 = typeof(DebugConsole);
			}
		}
		else {
			DebugConsole.HandleInput();
			uVar2 = (typeof(DebugConsole)._2).cctor_finished_or_no_cctor;
			pIVar6 = typeof(DebugConsole);
		}
		typeof(DebugConsole) = (DebugConsole)pIVar6;
		if (uVar2 == 0) {
			DebugConsole.DrawResizeHandle();
			uVar2 = (typeof(GUI)._2).cctor_finished_or_no_cctor;
		}
		else {
			DebugConsole.DrawResizeHandle();
			uVar2 = (typeof(GUI)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		GUI.depth = 0;
		return;
	}

	[Token(Token = "0x6005885")]
	[Address(RVA = "0x5D117E0", Offset = "0x5D107E0", VA = "0x5D117E0")]
	private static void HandleWindowInteraction()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$HandleWindowInteraction): 14 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar6;
		uint uVar7;
		Vector2 UVar5;
		uint uVar8;
		DebugConsole pAVar9;
		sbyte cVar10;
		int iVar11;
		Event __this;
		ApplicationManagers_DebugConsole_StaticFields pAVar12;
		Vector2 UVar13;
		ulong extraout_XMM0_Qb;
		byte[] auVar14 = new byte[16];
		float fVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		float local_68;
		float fStack_64;
		float fStack_60;
		float fStack_5c;
		ulong local_28;
		float local_20;

		__this = Event.current;
		if (__this == null) {
			throw new NullReferenceException();
		}
		UVar13 = (Vector2)__this.mousePosition;
		pAVar12 = typeof(DebugConsole).static_fields;
		fVar18 = pAVar12._windowWidth;
		uVar2 = pAVar12._windowX;
		uVar6 = pAVar12._windowY;
		fVar1 = pAVar12._windowHeight;
		fVar15 = (float)uVar2;
		fVar16 = (float)uVar6;
		fVar17 = fVar18;
		if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
			pAVar12 = typeof(DebugConsole).static_fields;
			uVar3 = pAVar12._windowX;
			uVar7 = pAVar12._windowY;
			fVar17 = pAVar12._windowWidth;
			fVar15 = (float)uVar3;
			fVar16 = (float)uVar7;
		}
		local_20 = fVar17 + -20.0;
		local_28 = CONCAT44(fVar16 + 20.0 + 25.0, fVar15 + 10.0);
		iVar11 = __this.type;
		fStack_64 = UVar13.y;
		local_68 = UVar13.x;
		if ((iVar11 == 0) && (iVar11 = __this.button, iVar11 == 0)) {
			fVar18 = fVar18 + (float)uVar2 + -15.0;
			if (fVar18 <= local_68) {
				if ((local_68 < fVar18 + 15.0) && (fVar18 = (float)uVar6 + fVar1 + -15.0, fVar18 <= fStack_64)) {
					if (fStack_64 < fVar18 + 15.0) {
						pAVar9 = typeof(DebugConsole);
						pAVar12 = typeof(DebugConsole).static_fields;
						pAVar12._isResizing = true;
						(pAVar12._resizeStartSize) = *(Vector2)&pAVar12._windowWidth;
						(pAVar9.static_fields._resizeStartMousePos) = UVar13;
						goto label_05e11cd7;
					}
				}
			}
			if (fVar15 <= local_68) {
				if (((typeof(Rect))._2).cctor_finished_or_no_cctor == 0) {
				}
				if ((local_68 < fVar15 + fVar17) && (fVar16 <= fStack_64)) {
					if (fStack_64 < fVar16 + 80.0) {
						fVar18 = fVar15 + fVar17 + -335.0;
						if (fVar18 + -20.0 <= local_68) {
							if (((typeof(Rect))._2).cctor_finished_or_no_cctor == 0) {
							}
							if ((local_68 < fVar18 + -20.0 + 345.0) && (fVar16 + 10.0 <= fStack_64)) {
								if (fStack_64 < fVar16 + 10.0 + 25.0) {
									return;
								}
							}
						}
						cVar10 = il2cpp_runtime_helper_05e24330(&local_28);
						if (cVar10 == false) {
							pAVar12 = typeof(DebugConsole).static_fields;
							pAVar12._isDragging = true;
							uVar4 = pAVar12._windowX;
							uVar8 = pAVar12._windowY;
							UVar13.y = fStack_64 - (float)uVar8;
							UVar13.x = local_68 - (float)uVar4;
							(pAVar12._dragOffset) = UVar13;
							__this.Use();
						}
					}
				}
			}
		}
		else {
			iVar11 = __this.type;
			if ((iVar11 == 1) && (iVar11 = __this.button, iVar11 == 0)) {
				pAVar12 = typeof(DebugConsole).static_fields;
				pAVar12._isDragging = false;
				pAVar12._isResizing = false;
			}
			else {
				iVar11 = __this.type;
				if (iVar11 == 3) {
					if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
						pAVar12 = typeof(DebugConsole).static_fields;
						cVar10 = pAVar12._isDragging;
					}
					else {
						pAVar12 = typeof(DebugConsole).static_fields;
						cVar10 = pAVar12._isDragging;
					}
					if (cVar10 == false) {
						if (((typeof(DebugConsole))._2).cctor_finished_or_no_cctor == 0 ) {
							pAVar12 = typeof(DebugConsole).static_fields;
							cVar10 = pAVar12._isResizing;
						}
						else {
							cVar10 = pAVar12._isResizing;
						}
						if (cVar10 == false) {
							return;
						}
						if (((typeof(DebugConsole))._2).cctor_finished_or_no_cctor == 0 ) {
							pAVar12 = typeof(DebugConsole).static_fields;
						}
						UVar13 = (pAVar12._resizeStartSize);
						UVar5 = (pAVar12._resizeStartMousePos);
						fStack_60 = (float)extraout_XMM0_Qb;
						fStack_5c = (float)((ulong)extraout_XMM0_Qb >> 0x20);
						auVar14._4_4_ = (fStack_64 - UVar5.y) + UVar13.y;
						auVar14._0_4_ = (local_68 - UVar5.x) + UVar13.x;
						auVar14._8_4_ = (fStack_60 - 0.0) + 0.0;
						auVar14._12_4_ = (fStack_5c - 0.0) + 0.0;
						auVar14 = maxps(_DAT_0100a8c0, auVar14);
						pAVar12._windowWidth = (float)auVar14._0_4_;
						pAVar12._windowHeight = (float)auVar14._4_4_;
					}
					else {
						if (((typeof(DebugConsole))._2).cctor_finished_or_no_cctor == 0 ) {
							pAVar12 = typeof(DebugConsole).static_fields;
						}
						UVar13 = (pAVar12._dragOffset);
						pAVar12._windowX = local_68 - UVar13.x;
						pAVar12._windowY = fStack_64 - UVar13.y;
					}
	label_05e11cd7: ;
					__this.Use();
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6005886")]
	[Address(RVA = "0x5D11E30", Offset = "0x5D10E30", VA = "0x5D11E30")]
	private static void DrawTabs()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$DrawTabs): 35 lines keep C-only constructs
		int iVar1;
		int piVar2;
		bool pbVar3;
		sbyte cVar4;
		int length;
		uint uVar5;
		LinkedList<DebugConsole.LogMessage> pSVar6;
		List<DebugConsole.LogMessage> pSVar7;
		String pSVar8;
		ulong uVar9;
		bool bVar10;
		String* ppSVar11;
		int iVar12;
		MethodInfo pMVar13;
		ApplicationManagers_DebugConsole_StaticFields pAVar14;
		Il2CppClass pIVar15;
		int iVar16;
		float fVar17;
		uint uVar19;
		float fVar18;
		float fVar20;
		Rect position;
		Rect position_00;
		Rect position_01;
		Rect position_02;
		Rect position_03;
		Rect position_04;
		Rect position_05;
		Rect position_06;
		Rect position_07;
		Rect position_08;
		Rect position_09;
		byte[] local_a8 = new byte[48];
		LinkedListNode<T> pSStack_78;
		ulong local_70;
		DebugConsole.LogMessage pAStack_68;
		ulong local_60;
		float local_58;
		uint uStack_54;
		byte[] local_48 = new byte[16];

		local_a8._16_8_ = 0;
		local_a8._24_8_ = null;
		local_a8._0_8_ = null;
		local_a8._8_8_ = null;
		local_a8._32_8_ = 0;
		pAVar14 = typeof(DebugConsole).static_fields;
		iVar12 = (int)pAVar14._windowX;
		fVar18 = pAVar14._windowY;
		iVar16 = (int)pAVar14._windowWidth;
		iVar1 = iVar12 + 10;
		position.m_XMin = (float)iVar1;
		fVar17 = (float)((int)fVar18 + 10);
		local_48 = ZEXT416((uint)position.m_XMin);
		fVar20 = (float)(iVar16 + -0x195);
		uVar19 = 0x41c80000;
		if ((typeof(GUI)._2).cctor_finished_or_no_cctor == 0) {
			uStack_54 = 0x41c80000;
			local_58 = (float)(iVar16 + -0x195);
			fVar20 = local_58;
			uVar19 = uStack_54;
		}
		position.m_YMin = fVar17;
		position.m_Height = (float)uVar19;
		position.m_Width = fVar20;
		GUI.Label(position, "Debug Console (Press F11 to hide)");
		position_00.m_XMin = (float)(iVar12 + -0x181 + iVar16);
		position_00.m_YMin = fVar17;
		position_00.m_Width = 90.0;
		position_00.m_Height = 25.0;
		bVar10 = GUI.Button(position_00, "Clear");
		if (bVar10) {
			pSVar6 = DebugConsole._messages;
			if (pSVar6 != null) {
				((local_a8 + 0x28)).GetEnumerator((LinkedList<T>)pSVar6);
				local_a8._32_8_ = local_60;
				local_a8._16_8_ = local_70;
				local_a8._24_8_ = pAStack_68;
				local_a8._0_8_ = local_a8._40_8_;
				local_a8._8_8_ = pSStack_78;
				local_a8._40_8_ = null;
				pSStack_78 = (LinkedListNode<T>)local_a8;
				while (true) {
					pMVar13 = MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_MoveNext;
					bVar10 = local_a8.MoveNext();
					uVar9 = local_a8._24_8_;
					if (!(bVar10)) break;
					DebugConsole.LogMessagePool.Return((DebugConsole.LogMessage)uVar9);
				}
				local_a8.Dispose();
				pSVar6 = DebugConsole._messageBuffer;
				if (pSVar6 != null) {
					((local_a8 + 0x28)).GetEnumerator((LinkedList<T>)pSVar6);
					local_a8._32_8_ = local_60;
					local_a8._16_8_ = local_70;
					local_a8._24_8_ = pAStack_68;
					local_a8._0_8_ = local_a8._40_8_;
					local_a8._8_8_ = pSStack_78;
					local_a8._40_8_ = null;
					pSStack_78 = (LinkedListNode<T>)local_a8;
					while (true) {
						pMVar13 = MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_MoveNext;
						bVar10 = local_a8.MoveNext();
						uVar9 = local_a8._24_8_;
						if (!(bVar10)) break;
						DebugConsole.LogMessagePool.Return((DebugConsole.LogMessage)uVar9);
					}
					local_a8.Dispose();
					pSVar6 = DebugConsole._messages;
					if (pSVar6 != null) {
						pSVar6.Clear();
						pSVar6 = DebugConsole._messageBuffer;
						if (pSVar6 != null) {
							pSVar6.Clear();
							pAVar14 = typeof(DebugConsole).static_fields;
							pSVar7 = pAVar14._filteredMessages;
							if (pSVar7 != null) {
								piVar2 = &pSVar7._version;
								*piVar2 = *piVar2 + 1;
								length = pSVar7._size;
								pSVar7._size = 0;
								if (0 < length) {
									Array.Clear((Array)pSVar7._items, 0, length);
									pAVar14 = typeof(DebugConsole).static_fields;
								}
								pAVar14._currentCharCount = 0;
								pAVar14._currentCharCountBuffer = 0;
								pAVar14._filterDirty = true;
								pAVar14._displayDirty = true;
								pAVar14._cachedDisplayText = "";
								goto label_05e122d3;
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	label_05e122d3: ;
		iVar12 = iVar12 + iVar16;
		if (DebugConsole._showStackTraces == false) {
			ppSVar11 = &"Show Traces";
		}
		else {
			ppSVar11 = &"Hide Traces";
		}
		pSVar8 = *ppSVar11;
		position_01.m_XMin = (float)(iVar12 + -0x122);
		position_01.m_YMin = fVar17;
		position_01.m_Width = 90.0;
		position_01.m_Height = 25.0;
		bVar10 = GUI.Button(position_01, pSVar8);
		if (bVar10) {
			pIVar15 = typeof(DebugConsole);
			pAVar14 = typeof(DebugConsole).static_fields;
			pbVar3 = &pAVar14._showStackTraces;
			*pbVar3 = (bool)(*pbVar3 ^ 1);
			pAVar14._displayDirty = true;
			uVar5 = (((DebugConsole)pIVar15)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar5 = (typeof(DebugConsole)._2).cctor_finished_or_no_cctor;
			pIVar15 = typeof(DebugConsole);
		}
		if (uVar5 == 0) {
			cVar4 = DebugConsole._solidBackground;
		}
		else {
			cVar4 = *(sbyte)((long)pIVar15.static_fields + 0x9d);
		}
		if (cVar4 == false) {
			ppSVar11 = &"Opaque";
		}
		else {
			ppSVar11 = &"Glass";
		}
		pSVar8 = *ppSVar11;
		position_02.m_XMin = (float)(iVar12 + -0xc3);
		if (((typeof(GUI))._2).cctor_finished_or_no_cctor == 0) {
		}
		position_02.m_YMin = fVar17;
		position_02.m_Width = 90.0;
		position_02.m_Height = 25.0;
		bVar10 = GUI.Button(position_02, pSVar8);
		if (bVar10) {
			pIVar15 = typeof(DebugConsole);
			pbVar3 = &DebugConsole._solidBackground;
			*pbVar3 = (bool)(*pbVar3 ^ 1);
			uVar5 = (((DebugConsole)pIVar15)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar5 = (typeof(DebugConsole)._2).cctor_finished_or_no_cctor;
			pIVar15 = typeof(DebugConsole);
		}
		if (uVar5 == 0) {
			cVar4 = DebugConsole._wordWrap;
		}
		else {
			cVar4 = *(sbyte)((long)pIVar15.static_fields + 0x9e);
		}
		if (cVar4 == false) {
			ppSVar11 = &"Wrap";
		}
		else {
			ppSVar11 = &"No Wrap";
		}
		pSVar8 = *ppSVar11;
		if (((typeof(GUI))._2).cctor_finished_or_no_cctor == 0) {
		}
		uVar19 = local_48._0_4_;
		position_03.m_YMin = fVar17;
		position_03.m_XMin = (float)(iVar12 + -100);
		position_03.m_Width = 90.0;
		position_03.m_Height = 25.0;
		bVar10 = GUI.Button(position_03, pSVar8);
		if (bVar10) {
			pbVar3 = &DebugConsole._wordWrap;
			*pbVar3 = (bool)(*pbVar3 ^ 1);
		}
		iVar12 = (iVar16 + -0x3c) / 5;
		fVar18 = (float)((int)fVar18 + 0x2d);
		fVar20 = (float)iVar12;
		position_04.m_YMin = fVar18;
		position_04.m_XMin = (float)uVar19;
		position_04.m_Height = 25.0;
		position_04.m_Width = fVar20;
		bVar10 = GUI.Button(position_04, "All");
		if (bVar10) {
			pAVar14 = typeof(DebugConsole).static_fields;
			pAVar14._currentTab = 0;
			pAVar14._needResetScroll = true;
			pAVar14._filterDirty = true;
		}
		iVar16 = iVar12 + iVar1 + 10;
		position_05.m_XMin = (float)iVar16;
		iVar12 = iVar12 + 10;
		position_05.m_YMin = fVar18;
		position_05.m_Width = fVar20;
		position_05.m_Height = 25.0;
		bVar10 = GUI.Button(position_05, "Info");
		if (bVar10) {
			pAVar14 = typeof(DebugConsole).static_fields;
			pAVar14._currentTab = 1;
			pAVar14._needResetScroll = true;
			pAVar14._filterDirty = true;
		}
		iVar16 = iVar16 + iVar12;
		position_06.m_XMin = (float)iVar16;
		position_06.m_YMin = fVar18;
		position_06.m_Width = fVar20;
		position_06.m_Height = 25.0;
		bVar10 = GUI.Button(position_06, "Warning");
		if (bVar10) {
			pAVar14 = typeof(DebugConsole).static_fields;
			pAVar14._currentTab = 2;
			pAVar14._needResetScroll = true;
			pAVar14._filterDirty = true;
		}
		iVar16 = iVar16 + iVar12;
		position_07.m_XMin = (float)iVar16;
		position_07.m_YMin = fVar18;
		position_07.m_Width = fVar20;
		position_07.m_Height = 25.0;
		bVar10 = GUI.Button(position_07, "Error");
		if (bVar10) {
			pAVar14 = typeof(DebugConsole).static_fields;
			pAVar14._currentTab = 3;
			pAVar14._needResetScroll = true;
			pAVar14._filterDirty = true;
		}
		position_08.m_XMin = (float)(iVar16 + iVar12);
		position_08.m_YMin = fVar18;
		position_08.m_Width = fVar20;
		position_08.m_Height = 25.0;
		bVar10 = GUI.Button(position_08, "CL");
		pIVar15 = typeof(DebugConsole);
		if (bVar10) {
			pIVar15 = typeof(DebugConsole);
			pAVar14 = typeof(DebugConsole).static_fields;
			pAVar14._currentTab = 4;
			pAVar14._needResetScroll = true;
			pAVar14._filterDirty = true;
		}
		if ((pIVar15._2).cctor_finished_or_no_cctor == 0) {
			pIVar15 = typeof(DebugConsole);
		}
		iVar16 = pIVar15.static_fields._currentTab;
		position_09.m_XMin = (float)(iVar16 * iVar12 + iVar1);
		position_09.m_YMin = fVar18;
		position_09.m_Width = fVar20;
		position_09.m_Height = 25.0;
		GUI.Box(position_09, "");
		return;
	}

	[Token(Token = "0x6005887")]
	[Address(RVA = "0x5D128B0", Offset = "0x5D118B0", VA = "0x5D128B0")]
	private static void DrawMessageWindow()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$DrawMessageWindow): 18 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		String text;
		byte[] auVar6 = new byte[16];
		byte[] auVar7 = new byte[16];
		GUISkin __this;
		GUIStyle other;
		GUIStyle __this_00;
		String __this_01;
		GUIContent pUVar8;
		String[] pSVar9;
		ulong uVar10;
		ApplicationManagers_DebugConsole_StaticFields pAVar11;
		int iVar12;
		int iVar13;
		ulong uVar15;
		float fVar16;
		ulong extraout_XMM0_Qb;
		byte[] auVar17 = new byte[16];
		Rect position;

		pAVar11 = typeof(DebugConsole).static_fields;
		uVar1 = pAVar11._windowX;
		uVar3 = pAVar11._windowY;
		uVar2 = pAVar11._windowWidth;
		uVar4 = pAVar11._windowHeight;
		__this = GUI.skin;
		if (__this == null) goto label_05e12cd7;
		other = __this.textArea;
		__this_00 = new GUIStyle(other);
		if (__this_00 == null) goto label_05e12cd7;
		__this_00.wordWrap = DebugConsole._wordWrap;
		__this_00.richText = true;
		pAVar11 = typeof(DebugConsole).static_fields;
		if (pAVar11._needResetScroll == false) {
			if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
				pAVar11 = typeof(DebugConsole).static_fields;
			}
			if (pAVar11._messageBuffer == null) goto label_05e12cd7;
			if (0 < pAVar11._messageBuffer.count) goto label_05e12a07;
		}
		else {
	label_05e12a07: ;
			DebugConsole.ProcessMessageBuffer();
		}
		DebugConsole.UpdateFilteredMessages();
		__this_01 = DebugConsole.GetDisplayText();
		iVar13 = (int)(float)uVar2 + -0x28;
		if (DebugConsole._wordWrap != false) {
			pUVar8 = new GUIContent(__this_01);
	label_05e12b75: ;
			fVar16 = __this_00.CalcHeight(pUVar8, (float)iVar13);
			position.m_XMin = (float)((int)(float)uVar1 + 10);
			position.m_YMin = (float)((int)(float)uVar3 + 0x50);
			position.m_Width = (float)((int)(float)uVar2 + -0x14);
			position.m_Height = (float)((int)(float)uVar4 + -0x87);
			position._0_8_ = (DebugConsole._scrollPosition) ;
			uVar10 = CONCAT44((float)((int)fVar16 + 10), (float)iVar13);
			auVar6._8_8_ = 0;
			auVar6._0_8_ = uVar10;
			position._0_8_ =(Vector2)GUI.BeginScrollView(position, (Vector2)position._0_8_, (Rect)(auVar6 << 0x40));
			(DebugConsole._scrollPosition) = position._0_8_ ;
			auVar7._8_8_ = 0;
			auVar7._0_8_ = uVar10;
			GUI.TextArea((Rect)(auVar7 << 0x40), __this_01, __this_00);
			pAVar11 = typeof(DebugConsole).static_fields;
			if (pAVar11._needResetScroll != false) {
				if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
					pAVar11 = typeof(DebugConsole).static_fields;
				}
				iVar12 = ((int)fVar16 + 10) - ((int)(float)uVar4 + -0x87);
				iVar13 = 0;
				if (0 < iVar12) {
					iVar13 = iVar12;
				}
				pAVar11._needResetScroll = false;
				(pAVar11._scrollPosition).x = 0.0;
				(pAVar11._scrollPosition).y = (float)iVar13;
			}
			GUI.EndScrollView();
			return;
		}
		if (__this_01 != null) {
			iVar12 = 10;
			pSVar9 = __this_01.Split(10, 0);
			if (pSVar9 != null) {
				if (0 < (int)pSVar9.Length) {
					uVar10 = pSVar9.Length & 0xffffffff;
					fVar16 = 0.0;
					uVar15 = 0;
					do {
						if (uVar10 <= uVar15) {
							throw new IndexOutOfRangeException();
						}
						text = pSVar9[uVar15];
						pUVar8 = new GUIContent(text);
						auVar17._0_8_ = __this_00.CalcSize(pUVar8);
						auVar17._8_8_ = extraout_XMM0_Qb;
						if (auVar17._0_4_ <= fVar16) {
							auVar17._0_4_ = fVar16;
						}
						uVar15 = uVar15 + 1;
						uVar5 = (uint)pSVar9.Length;
						uVar10 = (ulong)uVar5;
						fVar16 = auVar17._0_4_;
					} while ((long)uVar15 < (long)(int)uVar5);
					iVar12 = (int)fVar16 + 10;
				}
				if (iVar13 <= iVar12) {
					iVar13 = iVar12;
				}
				pUVar8 = new GUIContent(__this_01);
				goto label_05e12b75;
			}
		}
	label_05e12cd7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005888")]
	[Address(RVA = "0x5D12CE0", Offset = "0x5D11CE0", VA = "0x5D12CE0")]
	private static void DrawInputWindow()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$DrawInputWindow): clean
		float fVar1;
		float fVar2;
		ApplicationManagers_DebugConsole_StaticFields pAVar3;
		String pSVar4;
		Rect position;

		fVar1 = DebugConsole._windowY;
		fVar2 = DebugConsole._windowHeight;
		GUI.SetNextControlName("DebugInput");
		pAVar3 = typeof(DebugConsole).static_fields;
		position.m_XMin = (float)((int)pAVar3._windowX + 10);
		position.m_YMin = (float)((int)(fVar1 + fVar2) + -0x23);
		position.m_Width = (float)((int)pAVar3._windowWidth + -0x14);
		position.m_Height = 25.0;
		pSVar4 = GUI.TextField(position, pAVar3._inputLine);
		pAVar3 = typeof(DebugConsole).static_fields;
		pAVar3._inputLine = pSVar4;
		return;
	}

	[Token(Token = "0x6005889")]
	[Address(RVA = "0x5D12DF0", Offset = "0x5D11DF0", VA = "0x5D12DF0")]
	private static void HandleInput()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$HandleInput): clean
		bool bVar2;
		String pSVar3;

		pSVar3 = GUI.GetNameOfFocusedControl();
		bVar2 = (pSVar3 == "DebugInput");
		if (bVar2) {
			if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) {
				bVar2 = DebugConsole.IsEnterUp();
			}
			else {
				bVar2 = DebugConsole.IsEnterUp();
			}
			if (bVar2) {
				if (((typeof(DebugConsole))._2).cctor_finished_or_no_cctor == 0) {
				}
				bVar2 = (DebugConsole._inputLine != (String)**(ulong*)(g_data_07556758 + 0xb8));
				if (bVar2) {
					pSVar3 = DebugConsole._inputLine;
					Debug.Log((object)pSVar3);
					pSVar3 = DebugConsole._inputLine;
					if (pSVar3 == null) {
	label_05e13055: ;
						throw new NullReferenceException();
					}
					bVar2 = pSVar3.StartsWith("/");
					if (bVar2) {
						pSVar3 = DebugConsole._inputLine;
						if (pSVar3 == null) goto label_05e13055;
						pSVar3 = pSVar3.Substring(1);
						DebugTesting.RunDebugCommand(pSVar3);
					}
					else {
						Debug.Log((Il2CppObject *)"Invalid debug command.");
					}
					pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					DebugConsole._inputLine = pSVar3;
				}
				pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				GUI.FocusControl(pSVar3);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600588A")]
	[Address(RVA = "0x5D13120", Offset = "0x5D12120", VA = "0x5D13120")]
	private static bool IsEnterUp()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$IsEnterUp): clean
		int iVar1;
		Event pUVar2;
		bool bVar3;

		pUVar2 = Event.current;
		if (pUVar2 == null) {
	label_05e1317d: ;
			throw new NullReferenceException();
		}
		iVar1 = pUVar2.type;
		if (iVar1 == 5) {
			pUVar2 = Event.current;
			if (pUVar2 == null) goto label_05e1317d;
			iVar1 = pUVar2.keyCode;
			if (iVar1 != 0xd) {
				pUVar2 = Event.current;
				if (pUVar2 == null) goto label_05e1317d;
				iVar1 = pUVar2.keyCode;
				bVar3 = iVar1 == 0x10f;
			}
		}
		return bVar3;
	}

	[Token(Token = "0x600588B")]
	[Address(RVA = "0x5D134C0", Offset = "0x5D124C0", VA = "0x5D134C0")]
	private static void HandleWindowDraggingAndResizing()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$HandleWindowDraggingAndResizing): 15 lines keep C-only constructs
		float fVar1;
		float fVar2;
		uint uVar3;
		Vector2 UVar4;
		uint uVar5;
		sbyte cVar6;
		uint uVar7;
		ApplicationManagers_DebugConsole_StaticFields pAVar8;
		float fVar9;
		DebugConsole pAVar10;
		int iVar11;
		Event pUVar12;
		Il2CppClass klass;
		float fVar13;
		Vector2 UVar14;
		Vector2 UVar15;
		float fVar17;
		ulong extraout_XMM0_Qb;
		byte[] auVar16 = new byte[16];
		float fVar18;

		if (Il2CppMethodInitialized_07548414 == false) {
			Il2CppMethodInitialized_07548414 = true;
			if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor != 0) goto label_05e134e3;
	label_05e13545: ;
			if (DebugConsole._isDragging == false) goto label_05e134f0;
	label_05e1355a: ;
			pUVar12 = Event.current;
			if (pUVar12 == null) goto label_05e13ab2;
			UVar14 = pUVar12.mousePosition;
			klass = typeof(DebugConsole);
			pAVar8 = typeof(DebugConsole).static_fields;
			UVar15 = (pAVar8._dragOffset);
			pAVar8._windowX = UVar14.x + UVar15.x;
			pAVar8._windowY = UVar14.y + UVar15.y;
			if ((((DebugConsole)klass)._2).cctor_finished_or_no_cctor != 0) goto label_05e134fd;
	label_05e135b5: ;
			cVar6 = DebugConsole._isResizing;
		}
		else {
			if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) goto label_05e13545;
	label_05e134e3: ;
			if (DebugConsole._isDragging != false) goto label_05e1355a;
	label_05e134f0: ;
			klass = typeof(DebugConsole);
			if ((typeof(DebugConsole)._2).cctor_finished_or_no_cctor == 0) goto label_05e135b5;
	label_05e134fd: ;
			cVar6 = ((DebugConsole)klass).static_fields._isResizing;
		}
		if (cVar6 != false) {
			pUVar12 = Event.current;
			if (pUVar12 == null) goto label_05e13ab2;
			UVar14 = pUVar12.mousePosition;
			pAVar8 = typeof(DebugConsole).static_fields;
			UVar15 = (pAVar8._resizeStartSize);
			UVar4 = (pAVar8._resizeStartMousePos);
			auVar16._0_4_ = (UVar14.x - UVar4.x) + UVar15.x;
			auVar16._4_4_ = (UVar14.y - UVar4.y) + UVar15.y;
			auVar16._8_4_ = ((float)extraout_XMM0_Qb - 0.0) + 0.0;
			auVar16._12_4_ = ((float)((ulong)extraout_XMM0_Qb >> 0x20) - 0.0) + 0.0;
			auVar16 = maxps(auVar16, _DAT_0100a8c0);
			pAVar8._windowWidth = (float)auVar16._0_4_;
			pAVar8._windowHeight = (float)auVar16._4_4_;
		}
		pUVar12 = Event.current;
		if (pUVar12 == null) goto label_05e13ab2;
		iVar11 = pUVar12.type;
		if (iVar11 != 0) goto label_05e13997;
		pUVar12 = Event.current;
		if (pUVar12 == null) goto label_05e13ab2;
		iVar11 = pUVar12.button;
		if (iVar11 != 0) goto label_05e13997;
		pUVar12 = Event.current;
		if (pUVar12 == null) goto label_05e13ab2;
		UVar15 = (Vector2)pUVar12.mousePosition;
		pAVar8 = typeof(DebugConsole).static_fields;
		fVar18 = pAVar8._windowX;
		fVar13 = pAVar8._windowY;
		fVar1 = pAVar8._windowWidth;
		fVar9 = UVar15.x;
		fVar17 = UVar15.y;
		if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_0754205c != false) goto label_05e136ea;
	label_05e1370d: ;
			Il2CppMethodInitialized_0754205c = true;
			if (fVar9 < fVar18) goto label_05e137df;
	label_05e13734: ;
			if ((fVar18 + fVar1 <= fVar9) || (fVar17 < fVar13)) goto label_05e137df;
			if (fVar13 + 70.0 <= fVar17) goto label_05e137df;
			pAVar10 = typeof(DebugConsole);
			pAVar8 = typeof(DebugConsole).static_fields;
			uVar3 = pAVar8._windowX;
			uVar5 = pAVar8._windowY;
			UVar15.x = (float)uVar3 - fVar9;
			UVar15.y = (float)uVar5 - fVar17;
			(pAVar8._dragOffset) = UVar15;
			pAVar10.static_fields._isDragging = true;
	label_05e1397d: ;
			pUVar12 = Event.current;
			if (pUVar12 == null) goto label_05e13ab2;
			pUVar12.Use();
		}
		else {
			if (Il2CppMethodInitialized_0754205c == false) goto label_05e1370d;
	label_05e136ea: ;
			if (fVar18 <= fVar9) goto label_05e13734;
	label_05e137df: ;
			pAVar8 = typeof(DebugConsole).static_fields;
			fVar18 = pAVar8._windowX;
			fVar13 = pAVar8._windowY;
			fVar1 = pAVar8._windowWidth;
			fVar2 = pAVar8._windowHeight;
			fVar18 = fVar18 + fVar1 + -15.0;
			if (fVar18 <= fVar9) {
				if (((typeof(Rect))._2).cctor_finished_or_no_cctor == 0) {
				}
				if ((fVar9 < fVar18 + 15.0) && (fVar18 = fVar13 + fVar2 + -15.0, fVar18 <= fVar17)) {
					if (fVar17 < fVar18 + 15.0) {
						pAVar10 = typeof(DebugConsole);
						(DebugConsole._resizeStartSize) = *(Vector2)&DebugConsole._windowWidth;
						(pAVar10.static_fields._resizeStartMousePos) = UVar15;
						pAVar10.static_fields._isResizing = true;
						goto label_05e1397d;
					}
				}
			}
		}
	label_05e13997: ;
		pUVar12 = Event.current;
		if (pUVar12 == null) {
	label_05e13ab2: ;
			throw new NullReferenceException();
		}
		iVar11 = pUVar12.type;
		if (iVar11 == 1) {
			pUVar12 = Event.current;
			if (pUVar12 == null) goto label_05e13ab2;
			iVar11 = pUVar12.button;
			if (iVar11 == 0) {
				pAVar8 = typeof(DebugConsole).static_fields;
				pAVar8._isDragging = false;
				pAVar8._isResizing = false;
				uVar7 = (typeof(DebugConsole)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05e139e2;
			}
		}
		uVar7 = (typeof(DebugConsole)._2).cctor_finished_or_no_cctor;
	joined_r0x05e139e2: ;
		if (uVar7 == 0) {
		}
		fVar18 = DebugConsole._windowX;
		iVar11 = Screen.width;
		pAVar8 = typeof(DebugConsole).static_fields;
		fVar13 = (float)iVar11 - pAVar8._windowWidth;
		if (fVar18 <= fVar13) {
			fVar13 = fVar18;
		}
		pAVar8._windowX = (float)(-(uint)(0.0 <= fVar18) & (uint)fVar13);
		fVar18 = pAVar8._windowY;
		iVar11 = Screen.height;
		fVar13 = (float)iVar11 - DebugConsole._windowHeight;
		if (fVar18 <= fVar13) {
			fVar13 = fVar18;
		}
		DebugConsole._windowY =(float)(-(uint)(0.0 <= fVar18) & (uint)fVar13);
		return;
	}

	[Token(Token = "0x600588C")]
	[Address(RVA = "0x5D13060", Offset = "0x5D12060", VA = "0x5D13060")]
	private static void DrawResizeHandle()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$DrawResizeHandle): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		Rect position;

		uVar1 = DebugConsole._windowX;
		uVar3 = DebugConsole._windowY;
		uVar2 = DebugConsole._windowWidth;
		uVar4 = DebugConsole._windowHeight;
		position.m_XMin = (float)uVar1 + (float)uVar2 + -15.0;
		position.m_YMin = (float)uVar3 + (float)uVar4 + -15.0;
		position.m_Width = 15.0;
		position.m_Height = 15.0;
		GUI.Box(position, "\xe2\x8b\xb0");
		return;
	}

	[Token(Token = "0x600588D")]
	[Address(RVA = "0x5D13AC0", Offset = "0x5D12AC0", VA = "0x5D13AC0")]
	public DebugConsole()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugConsole.c (ApplicationManagers.DebugConsole$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/DebugConsole.c.

	// ApplicationManagers.DebugConsole$$.cctor: clean
	static DebugConsole()
	{
		LinkedList<DebugConsole.LogMessage> pSVar1;
		DebugConsole pAVar2;
		List<DebugConsole.LogMessage> __this;
		StringBuilder __this_00;
		ApplicationManagers_DebugConsole_StaticFields pAVar3;

		pSVar1 = new LinkedList<DebugConsole.LogMessage>();
		pAVar3 = typeof(DebugConsole).static_fields;
		pAVar3._messages = pSVar1;
		pSVar1 = new LinkedList<DebugConsole.LogMessage>();
		pAVar3 = typeof(DebugConsole).static_fields;
		pAVar3._messageBuffer = pSVar1;
		pAVar2 = typeof(DebugConsole);
		pAVar3 = typeof(DebugConsole).static_fields;
		pAVar3._currentCharCount = 0;
		pAVar3._currentCharCountBuffer = 0;
		if (Il2CppMethodInitialized_0753ecc8 == false) {
			Il2CppMethodInitialized_0753ecc8 = true;
			pAVar3 = typeof(DebugConsole).static_fields;
			pAVar2 = typeof(DebugConsole);
		}
		(pAVar3._scrollPosition) = (Vector2.zeroVector);
		pAVar3 = pAVar2.static_fields;
		pAVar3._inputLine = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this = new List<DebugConsole.LogMessage>(0x400);
		pAVar3 = typeof(DebugConsole).static_fields;
		pAVar3._filteredMessages = __this;
		DebugConsole._filterDirty = true;
		__this_00 = new StringBuilder(0x2000);
		pAVar3 = typeof(DebugConsole).static_fields;
		pAVar3._displayBuilder = __this_00;
		pAVar3 = typeof(DebugConsole).static_fields;
		pAVar3._cachedDisplayText = "";
		pAVar3 = typeof(DebugConsole).static_fields;
		pAVar3._displayDirty = true;
		pAVar3._lastFilteredCount = 0;
		pAVar3._lastShowStackTraces = false;
		pAVar3._windowX = 20.0;
		pAVar3._windowY = 20.0;
		pAVar3._windowWidth = 600.0;
		pAVar3._windowHeight = 400.0;
		pAVar3._isDragging = false;
		pAVar3._isResizing = false;
		pAVar3._showStackTraces = false;
		pAVar3._solidBackground = true;
		pAVar3._wordWrap = true;
		return;
	}
}
