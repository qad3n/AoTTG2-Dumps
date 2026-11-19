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

[Token(Token = "0x200013A")]
public class Logger : ILogger, ILogHandler
{
	[Token(Token = "0x170001C2")]
	public ILogHandler logHandler
	{
		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x68FB2F0", Offset = "0x68FA2F0", VA = "0x68FB2F0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60009FE")]
		[Address(RVA = "0x68FB300", Offset = "0x68FA300", VA = "0x68FB300", Slot = "13")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C3")]
	public bool logEnabled
	{
		[Token(Token = "0x60009FF")]
		[Address(RVA = "0x68FB310", Offset = "0x68FA310", VA = "0x68FB310", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A00")]
		[Address(RVA = "0x68FB320", Offset = "0x68FA320", VA = "0x68FB320", Slot = "14")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C4")]
	public LogType filterLogType
	{
		[Token(Token = "0x6000A01")]
		[Address(RVA = "0x68FB330", Offset = "0x68FA330", VA = "0x68FB330", Slot = "15")]
		[CompilerGenerated]
		get
		{
			return default(LogType);
		}
		[Token(Token = "0x6000A02")]
		[Address(RVA = "0x68FB340", Offset = "0x68FA340", VA = "0x68FB340", Slot = "16")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x68FB2B0", Offset = "0x68FA2B0", VA = "0x68FB2B0")]
	public Logger(ILogHandler logHandler)
	{
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x68FB350", Offset = "0x68FA350", VA = "0x68FB350", Slot = "6")]
	public bool IsLogTypeAllowed(LogType logType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x68FB380", Offset = "0x68FA380", VA = "0x68FB380")]
	private static string GetString(object message)
	{
		return null;
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x68FB4C0", Offset = "0x68FA4C0", VA = "0x68FB4C0", Slot = "7")]
	public void Log(LogType logType, object message)
	{
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x68FB640", Offset = "0x68FA640", VA = "0x68FB640", Slot = "8")]
	public void Log(LogType logType, object message, Object context)
	{
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x68FB7E0", Offset = "0x68FA7E0", VA = "0x68FB7E0", Slot = "9")]
	public void LogError(string tag, object message)
	{
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x68FB9A0", Offset = "0x68FA9A0", VA = "0x68FB9A0", Slot = "12")]
	public void LogException(Exception exception, Object context)
	{
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x68FBA60", Offset = "0x68FAA60", VA = "0x68FBA60", Slot = "10")]
	public void LogFormat(LogType logType, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x68FBB40", Offset = "0x68FAB40", VA = "0x68FBB40", Slot = "11")]
	public void LogFormat(LogType logType, Object context, string format, params object[] args)
	{
	}
}
