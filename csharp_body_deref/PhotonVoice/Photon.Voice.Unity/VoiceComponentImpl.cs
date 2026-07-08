using ExitGames.Client.Photon;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x2000017")]
public class VoiceComponentImpl
{
	[Token(Token = "0x2000018")]
	private class LoggerImpl : ILogger
	{
		[Token(Token = "0x4000078")]
		[FieldOffset(Offset = "0x10")]
		private VoiceLogger voiceLogger;

		[Token(Token = "0x4000079")]
		[FieldOffset(Offset = "0x18")]
		private Object obj;

		[Token(Token = "0x400007A")]
		[FieldOffset(Offset = "0x20")]
		private string objName;

		[Token(Token = "0x400007B")]
		[FieldOffset(Offset = "0x28")]
		private string tag;

		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x3C5AE00", Offset = "0x3C5AE00", VA = "0x3C5AE00")]
		public void SetVoiceLogger(VoiceLogger voiceLogger, Object obj, string tag)
		{
		}

		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x3C5AEA0", Offset = "0x3C5AEA0", VA = "0x3C5AEA0")]
		public void SetObjName(string n)
		{
		}

		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x3C5AEB0", Offset = "0x3C5AEB0", VA = "0x3C5AEB0")]
		private void Log(DebugLevel level, string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x3C5B170", Offset = "0x3C5B170", VA = "0x3C5B170", Slot = "4")]
		public void LogError(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x3C5AD70", Offset = "0x3C5AD70", VA = "0x3C5AD70", Slot = "5")]
		public void LogWarning(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x3C5B180", Offset = "0x3C5B180", VA = "0x3C5B180", Slot = "6")]
		public void LogInfo(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x3C5B1A0", Offset = "0x3C5B1A0", VA = "0x3C5B1A0", Slot = "7")]
		public void LogDebug(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x3C5AE50", Offset = "0x3C5AE50", VA = "0x3C5AE50")]
		public LoggerImpl()
		{
		}
	}

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x10")]
	private VoiceLogger voiceLogger;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x18")]
	private LoggerImpl logger;

	[Token(Token = "0x1700003D")]
	public ILogger Logger
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x3C5A9B0", Offset = "0x3C5A9B0", VA = "0x3C5A9B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public VoiceLogger VoiceLogger
	{
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x3C5A9C0", Offset = "0x3C5A9C0", VA = "0x3C5A9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	public string Name
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x3C5A990", Offset = "0x3C5A990", VA = "0x3C5A990")]
		set
		{
		}
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x3C59570", Offset = "0x3C59570", VA = "0x3C59570")]
	public void Awake(MonoBehaviour mb)
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x3C5A530", Offset = "0x3C5A530", VA = "0x3C5A530")]
	public VoiceComponentImpl()
	{
	}
}
