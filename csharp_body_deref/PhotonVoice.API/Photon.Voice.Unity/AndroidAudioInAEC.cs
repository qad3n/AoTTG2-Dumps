// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.AndroidAudioInAEC
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Unity/Android/UnityAndroidAudioInAEC.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000A3")]
public class AndroidAudioInAEC : IAudioPusher<short>, IAudioDesc, IDisposable, IResettable
{
	[Token(Token = "0x20000A4")]
	private class DataCallback : AndroidJavaProxy
	{
		[Token(Token = "0x40002B5")]
		[FieldOffset(Offset = "0x20")]
		private Action<short[]> callback;

		[Token(Token = "0x40002B6")]
		[FieldOffset(Offset = "0x28")]
		private IntPtr javaBuf;

		[Token(Token = "0x40002B7")]
		[FieldOffset(Offset = "0x30")]
		private int cntFrame;

		[Token(Token = "0x40002B8")]
		[FieldOffset(Offset = "0x34")]
		private int cntShort;

		[Token(Token = "0x600038E")]
		[Address(RVA = "0x1D841D0", Offset = "0x1D827D0", VA = "0x181D841D0")]
		public DataCallback()
		{
		}

		[Token(Token = "0x600038F")]
		[Address(RVA = "0x1D841A0", Offset = "0x1D827A0", VA = "0x181D841A0")]
		public void SetCallback(Action<short[]> callback, IntPtr javaBuf)
		{
		}

		[Token(Token = "0x6000390")]
		[Address(RVA = "0x1D84130", Offset = "0x1D82730", VA = "0x181D84130")]
		public void OnData()
		{
		}

		[Token(Token = "0x6000391")]
		[Address(RVA = "0x1D84190", Offset = "0x1D82790", VA = "0x181D84190")]
		public void OnStop()
		{
		}
	}

	[Token(Token = "0x40002AF")]
	[FieldOffset(Offset = "0x10")]
	private AndroidJavaObject audioIn;

	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0x18")]
	private IntPtr javaBuf;

	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x20")]
	private ILogger logger;

	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0x28")]
	private int audioInSampleRate;

	[Token(Token = "0x40002B3")]
	[FieldOffset(Offset = "0x30")]
	private DataCallback callback;

	[Token(Token = "0x170000F2")]
	public int Channels
	{
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F3")]
	public int SamplingRate
	{
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F4")]
	public string Error
	{
		[Token(Token = "0x600038A")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x1D82170", Offset = "0x1D80770", VA = "0x181D82170")]
	public AndroidAudioInAEC(ILogger logger, bool enableAEC = false, bool enableAGC = false, bool enableNS = false)
	{
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x1D81EC0", Offset = "0x1D804C0", VA = "0x181D81EC0", Slot = "4")]
	public void SetCallback(Action<short[]> callback, ObjectFactory<short[], int> bufferFactory)
	{
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x1D81E50", Offset = "0x1D80450", VA = "0x181D81E50", Slot = "9")]
	public void Reset()
	{
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x1D81DD0", Offset = "0x1D803D0", VA = "0x181D81DD0", Slot = "8")]
	public void Dispose()
	{
	}
}
