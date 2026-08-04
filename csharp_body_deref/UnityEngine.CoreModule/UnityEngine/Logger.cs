// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Logger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Unity/Logger.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000114")]
public class Logger : ILogger, ILogHandler
{
	[Token(Token = "0x17000164")]
	public ILogHandler logHandler
	{
		[Token(Token = "0x600075E")]
		[Address(RVA = "0x4DE4390", Offset = "0x4DE4390", VA = "0x4DE4390", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600075F")]
		[Address(RVA = "0x4DE43A0", Offset = "0x4DE43A0", VA = "0x4DE43A0", Slot = "13")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public bool logEnabled
	{
		[Token(Token = "0x6000760")]
		[Address(RVA = "0x4DE43B0", Offset = "0x4DE43B0", VA = "0x4DE43B0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000761")]
		[Address(RVA = "0x4DE43C0", Offset = "0x4DE43C0", VA = "0x4DE43C0", Slot = "14")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	public LogType filterLogType
	{
		[Token(Token = "0x6000762")]
		[Address(RVA = "0x4DE43D0", Offset = "0x4DE43D0", VA = "0x4DE43D0", Slot = "15")]
		[CompilerGenerated]
		get
		{
			return default(LogType);
		}
		[Token(Token = "0x6000763")]
		[Address(RVA = "0x4DE43E0", Offset = "0x4DE43E0", VA = "0x4DE43E0", Slot = "16")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x4DE4350", Offset = "0x4DE4350", VA = "0x4DE4350")]
	public Logger(ILogHandler logHandler)
	{
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x4DE43F0", Offset = "0x4DE43F0", VA = "0x4DE43F0", Slot = "6")]
	public bool IsLogTypeAllowed(LogType logType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x4DE4420", Offset = "0x4DE4420", VA = "0x4DE4420")]
	private static string GetString(object message)
	{
		return null;
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x4DE4560", Offset = "0x4DE4560", VA = "0x4DE4560", Slot = "7")]
	public void Log(LogType logType, object message)
	{
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x4DE46E0", Offset = "0x4DE46E0", VA = "0x4DE46E0", Slot = "8")]
	public void Log(LogType logType, object message, Object context)
	{
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x4DE4880", Offset = "0x4DE4880", VA = "0x4DE4880", Slot = "9")]
	public void LogError(string tag, object message)
	{
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x4DE4A40", Offset = "0x4DE4A40", VA = "0x4DE4A40", Slot = "12")]
	public void LogException(Exception exception, Object context)
	{
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x4DE4B00", Offset = "0x4DE4B00", VA = "0x4DE4B00", Slot = "10")]
	public void LogFormat(LogType logType, string format, params object[] args)
	{
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x4DE4BE0", Offset = "0x4DE4BE0", VA = "0x4DE4BE0", Slot = "11")]
	public void LogFormat(LogType logType, Object context, string format, params object[] args)
	{
	}
}
