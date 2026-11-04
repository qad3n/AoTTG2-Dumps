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

[Token(Token = "0x2000139")]
public class Logger : ILogger, ILogHandler
{
	[Token(Token = "0x170001BD")]
	public ILogHandler logHandler
	{
		[Token(Token = "0x60009EC")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60009ED")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00", Slot = "13")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BE")]
	public bool logEnabled
	{
		[Token(Token = "0x60009EE")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009EF")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0", Slot = "14")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BF")]
	public LogType filterLogType
	{
		[Token(Token = "0x60009F0")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0", Slot = "15")]
		[CompilerGenerated]
		get
		{
			return default(LogType);
		}
		[Token(Token = "0x60009F1")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80", Slot = "16")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x2F04450", Offset = "0x2F02A50", VA = "0x182F04450")]
	public Logger(ILogHandler logHandler)
	{
	}

	[Token(Token = "0x60009F2")]
	[Address(RVA = "0x2F03E60", Offset = "0x2F02460", VA = "0x182F03E60", Slot = "6")]
	public bool IsLogTypeAllowed(LogType logType)
	{
		return default(bool);
	}

	[Token(Token = "0x60009F3")]
	[Address(RVA = "0x2F03D30", Offset = "0x2F02330", VA = "0x182F03D30")]
	private static string GetString(object message)
	{
		return null;
	}

	[Token(Token = "0x60009F4")]
	[Address(RVA = "0x2F041F0", Offset = "0x2F027F0", VA = "0x182F041F0", Slot = "7")]
	public void Log(LogType logType, object message)
	{
	}

	[Token(Token = "0x60009F5")]
	[Address(RVA = "0x2F04320", Offset = "0x2F02920", VA = "0x182F04320", Slot = "8")]
	public void Log(LogType logType, object message, Object context)
	{
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x2F03E80", Offset = "0x2F02480", VA = "0x182F03E80", Slot = "9")]
	public void LogError(string tag, object message)
	{
	}

	[Token(Token = "0x60009F7")]
	[Address(RVA = "0x2F04000", Offset = "0x2F02600", VA = "0x182F04000", Slot = "12")]
	public void LogException(Exception exception, Object context)
	{
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x2F040E0", Offset = "0x2F026E0", VA = "0x182F040E0", Slot = "10")]
	public void LogFormat(LogType logType, string format, params object[] args)
	{
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x2F04160", Offset = "0x2F02760", VA = "0x182F04160", Slot = "11")]
	public void LogFormat(LogType logType, Object context, string format, params object[] args)
	{
	}
}
