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
		[Address(RVA = "0x5736E50", Offset = "0x5735E50", VA = "0x5736E50")]
		public void SetVoiceLogger(VoiceLogger voiceLogger, Object obj, string tag)
		{
		}

		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x5736EF0", Offset = "0x5735EF0", VA = "0x5736EF0")]
		public void SetObjName(string n)
		{
		}

		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x5736F00", Offset = "0x5735F00", VA = "0x5736F00")]
		private void Log(DebugLevel level, string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x57371B0", Offset = "0x57361B0", VA = "0x57371B0", Slot = "4")]
		public void LogError(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x5736D30", Offset = "0x5735D30", VA = "0x5736D30", Slot = "5")]
		public void LogWarning(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x5737250", Offset = "0x5736250", VA = "0x5737250", Slot = "6")]
		public void LogInfo(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x5737270", Offset = "0x5736270", VA = "0x5737270", Slot = "7")]
		public void LogDebug(string fmt, params object[] args)
		{
		}

		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x5736EA0", Offset = "0x5735EA0", VA = "0x5736EA0")]
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
		[Address(RVA = "0x5736990", Offset = "0x5735990", VA = "0x5736990")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public VoiceLogger VoiceLogger
	{
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x57369A0", Offset = "0x57359A0", VA = "0x57369A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	public string Name
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x5736970", Offset = "0x5735970", VA = "0x5736970")]
		set
		{
		}
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x5735570", Offset = "0x5734570", VA = "0x5735570")]
	public void Awake(MonoBehaviour mb)
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x5736510", Offset = "0x5735510", VA = "0x5736510")]
	public VoiceComponentImpl()
	{
	}
}
