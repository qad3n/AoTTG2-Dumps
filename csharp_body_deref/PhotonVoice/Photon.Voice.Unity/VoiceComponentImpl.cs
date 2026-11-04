// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.VoiceComponentImpl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/VoiceComponent.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x2000015")]
public class VoiceComponentImpl
{
	[Token(Token = "0x2000016")]
	private class LoggerImpl : ILogger
	{
		[Token(Token = "0x4000073")]
		[FieldOffset(Offset = "0x10")]
		private VoiceLogger voiceLogger;

		[Token(Token = "0x4000074")]
		[FieldOffset(Offset = "0x18")]
		private Object obj;

		[Token(Token = "0x4000075")]
		[FieldOffset(Offset = "0x20")]
		private string objName;

		[Token(Token = "0x4000076")]
		[FieldOffset(Offset = "0x28")]
		private string tag;

		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x1D899D0", Offset = "0x1D87FD0", VA = "0x181D899D0")]
		public void SetVoiceLogger(VoiceLogger voiceLogger, Object obj, string tag)
		{
		}

		[Token(Token = "0x60000D6")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		public void SetObjName(string n)
		{
		}

		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x1D89910", Offset = "0x1D87F10", VA = "0x181D89910")]
		private void Log(DebugLevel level, string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x1D898D0", Offset = "0x1D87ED0", VA = "0x181D898D0", Slot = "4")]
		public void LogError(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x1D898F0", Offset = "0x1D87EF0", VA = "0x181D898F0", Slot = "5")]
		public void LogWarning(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x1D898A0", Offset = "0x1D87EA0", VA = "0x181D898A0", Slot = "6")]
		public void LogInfo(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x1D898A0", Offset = "0x1D87EA0", VA = "0x181D898A0", Slot = "7")]
		public void LogDebug(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x1D89A30", Offset = "0x1D88030", VA = "0x181D89A30")]
		public LoggerImpl()
		{
		}
	}

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x10")]
	private VoiceLogger voiceLogger;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x18")]
	private LoggerImpl logger;

	[Token(Token = "0x1700003D")]
	public ILogger Logger
	{
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public VoiceLogger VoiceLogger
	{
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	public string Name
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x1CB0C70", Offset = "0x1CAF270", VA = "0x181CB0C70")]
		set
		{
		}
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x1D956D0", Offset = "0x1D93CD0", VA = "0x181D956D0")]
	public void Awake(MonoBehaviour mb)
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x1D958E0", Offset = "0x1D93EE0", VA = "0x181D958E0")]
	public VoiceComponentImpl()
	{
	}
}
