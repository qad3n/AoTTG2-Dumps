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

[Token(Token = "0x200009F")]
public class AndroidAudioInAEC : IAudioPusher<short>, IAudioDesc, IDisposable, IResettable
{
	[Token(Token = "0x20000A0")]
	private class DataCallback : AndroidJavaProxy
	{
		[Token(Token = "0x40002A7")]
		[FieldOffset(Offset = "0x20")]
		private Action<short[]> callback;

		[Token(Token = "0x40002A8")]
		[FieldOffset(Offset = "0x28")]
		private IntPtr javaBuf;

		[Token(Token = "0x40002A9")]
		[FieldOffset(Offset = "0x30")]
		private int cntFrame;

		[Token(Token = "0x40002AA")]
		[FieldOffset(Offset = "0x34")]
		private int cntShort;

		[Token(Token = "0x6000376")]
		[Address(RVA = "0x57218C0", Offset = "0x57208C0", VA = "0x57218C0")]
		public DataCallback()
		{
		}

		[Token(Token = "0x6000377")]
		[Address(RVA = "0x5721C30", Offset = "0x5720C30", VA = "0x5721C30")]
		public void SetCallback(Action<short[]> callback, IntPtr javaBuf)
		{
		}

		[Token(Token = "0x6000378")]
		[Address(RVA = "0x5721E80", Offset = "0x5720E80", VA = "0x5721E80")]
		public void OnData()
		{
		}

		[Token(Token = "0x6000379")]
		[Address(RVA = "0x5721ED0", Offset = "0x5720ED0", VA = "0x5721ED0")]
		public void OnStop()
		{
		}
	}

	[Token(Token = "0x40002A1")]
	[FieldOffset(Offset = "0x10")]
	private AndroidJavaObject audioIn;

	[Token(Token = "0x40002A2")]
	[FieldOffset(Offset = "0x18")]
	private IntPtr javaBuf;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0x20")]
	private ILogger logger;

	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0x28")]
	private int audioInSampleRate;

	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0x30")]
	private DataCallback callback;

	[Token(Token = "0x170000EF")]
	public int Channels
	{
		[Token(Token = "0x6000370")]
		[Address(RVA = "0x5721920", Offset = "0x5720920", VA = "0x5721920", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F0")]
	public int SamplingRate
	{
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x5721C60", Offset = "0x5720C60", VA = "0x5721C60", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F1")]
	public string Error
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x5721C70", Offset = "0x5720C70", VA = "0x5721C70", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x5721C80", Offset = "0x5720C80", VA = "0x5721C80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x5720600", Offset = "0x571F600", VA = "0x5720600")]
	public AndroidAudioInAEC(ILogger logger, bool enableAEC = false, bool enableAGC = false, bool enableNS = false)
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x5721930", Offset = "0x5720930", VA = "0x5721930", Slot = "4")]
	public void SetCallback(Action<short[]> callback, ObjectFactory<short[], int> bufferFactory)
	{
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x5721C90", Offset = "0x5720C90", VA = "0x5721C90", Slot = "9")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x5721D80", Offset = "0x5720D80", VA = "0x5721D80", Slot = "8")]
	public void Dispose()
	{
	}
}
