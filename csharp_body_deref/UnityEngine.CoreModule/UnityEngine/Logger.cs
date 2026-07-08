using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000111")]
public class Logger : ILogger, ILogHandler
{
	[Token(Token = "0x17000163")]
	public ILogHandler logHandler
	{
		[Token(Token = "0x600075C")]
		[Address(RVA = "0x4ABCA60", Offset = "0x4ABCA60", VA = "0x4ABCA60", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600075D")]
		[Address(RVA = "0x4ABCA70", Offset = "0x4ABCA70", VA = "0x4ABCA70", Slot = "13")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000164")]
	public bool logEnabled
	{
		[Token(Token = "0x600075E")]
		[Address(RVA = "0x4ABCA80", Offset = "0x4ABCA80", VA = "0x4ABCA80", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600075F")]
		[Address(RVA = "0x4ABCA90", Offset = "0x4ABCA90", VA = "0x4ABCA90", Slot = "14")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public LogType filterLogType
	{
		[Token(Token = "0x6000760")]
		[Address(RVA = "0x4ABCAA0", Offset = "0x4ABCAA0", VA = "0x4ABCAA0", Slot = "15")]
		[CompilerGenerated]
		get
		{
			return default(LogType);
		}
		[Token(Token = "0x6000761")]
		[Address(RVA = "0x4ABCAB0", Offset = "0x4ABCAB0", VA = "0x4ABCAB0", Slot = "16")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x4ABCA20", Offset = "0x4ABCA20", VA = "0x4ABCA20")]
	public Logger(ILogHandler logHandler)
	{
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x4ABCAC0", Offset = "0x4ABCAC0", VA = "0x4ABCAC0", Slot = "6")]
	public bool IsLogTypeAllowed(LogType logType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x4ABCAF0", Offset = "0x4ABCAF0", VA = "0x4ABCAF0")]
	private static string GetString(object message)
	{
		return null;
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x4ABCC30", Offset = "0x4ABCC30", VA = "0x4ABCC30", Slot = "7")]
	public void Log(LogType logType, object message)
	{
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x4ABCDB0", Offset = "0x4ABCDB0", VA = "0x4ABCDB0", Slot = "8")]
	public void Log(LogType logType, object message, Object context)
	{
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x4ABCF50", Offset = "0x4ABCF50", VA = "0x4ABCF50", Slot = "9")]
	public void LogError(string tag, object message)
	{
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x4ABD110", Offset = "0x4ABD110", VA = "0x4ABD110", Slot = "12")]
	public void LogException(Exception exception, Object context)
	{
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x4ABD1D0", Offset = "0x4ABD1D0", VA = "0x4ABD1D0", Slot = "10")]
	public void LogFormat(LogType logType, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x4ABD2B0", Offset = "0x4ABD2B0", VA = "0x4ABD2B0", Slot = "11")]
	public void LogFormat(LogType logType, Object context, string format, params object[] args)
	{
	}
}
