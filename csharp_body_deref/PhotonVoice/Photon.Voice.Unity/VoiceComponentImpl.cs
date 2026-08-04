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
		[Address(RVA = "0x3F4D3B0", Offset = "0x3F4D3B0", VA = "0x3F4D3B0")]
		public void SetVoiceLogger(VoiceLogger voiceLogger, Object obj, string tag)
		{
		}

		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x3F4D450", Offset = "0x3F4D450", VA = "0x3F4D450")]
		public void SetObjName(string n)
		{
		}

		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x3F4D460", Offset = "0x3F4D460", VA = "0x3F4D460")]
		private void Log(DebugLevel level, string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x3F4D720", Offset = "0x3F4D720", VA = "0x3F4D720", Slot = "4")]
		public void LogError(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x3F4D320", Offset = "0x3F4D320", VA = "0x3F4D320", Slot = "5")]
		public void LogWarning(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x3F4D730", Offset = "0x3F4D730", VA = "0x3F4D730", Slot = "6")]
		public void LogInfo(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x3F4D750", Offset = "0x3F4D750", VA = "0x3F4D750", Slot = "7")]
		public void LogDebug(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x3F4D400", Offset = "0x3F4D400", VA = "0x3F4D400")]
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
		[Address(RVA = "0x3F4CF60", Offset = "0x3F4CF60", VA = "0x3F4CF60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public VoiceLogger VoiceLogger
	{
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x3F4CF70", Offset = "0x3F4CF70", VA = "0x3F4CF70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	public string Name
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x3F4CF40", Offset = "0x3F4CF40", VA = "0x3F4CF40")]
		set
		{
		}
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x3F4BB20", Offset = "0x3F4BB20", VA = "0x3F4BB20")]
	public void Awake(MonoBehaviour mb)
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x3F4CAE0", Offset = "0x3F4CAE0", VA = "0x3F4CAE0")]
	public VoiceComponentImpl()
	{
	}
}
