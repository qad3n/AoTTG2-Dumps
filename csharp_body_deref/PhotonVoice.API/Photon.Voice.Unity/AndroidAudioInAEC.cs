using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000A1")]
public class AndroidAudioInAEC : IAudioPusher<short>, IAudioDesc, IDisposable, IResettable
{
	[Token(Token = "0x20000A2")]
	private class DataCallback : AndroidJavaProxy
	{
		[Token(Token = "0x40002AC")]
		[FieldOffset(Offset = "0x20")]
		private Action<short[]> callback;

		[Token(Token = "0x40002AD")]
		[FieldOffset(Offset = "0x28")]
		private IntPtr javaBuf;

		[Token(Token = "0x40002AE")]
		[FieldOffset(Offset = "0x30")]
		private int cntFrame;

		[Token(Token = "0x40002AF")]
		[FieldOffset(Offset = "0x34")]
		private int cntShort;

		[Token(Token = "0x6000378")]
		[Address(RVA = "0x3C42010", Offset = "0x3C42010", VA = "0x3C42010")]
		public DataCallback()
		{
		}

		[Token(Token = "0x6000379")]
		[Address(RVA = "0x3C42380", Offset = "0x3C42380", VA = "0x3C42380")]
		public void SetCallback(Action<short[]> callback, IntPtr javaBuf)
		{
		}

		[Token(Token = "0x600037A")]
		[Address(RVA = "0x3C425D0", Offset = "0x3C425D0", VA = "0x3C425D0")]
		public void OnData()
		{
		}

		[Token(Token = "0x600037B")]
		[Address(RVA = "0x3C42620", Offset = "0x3C42620", VA = "0x3C42620")]
		public void OnStop()
		{
		}
	}

	[Token(Token = "0x40002A6")]
	[FieldOffset(Offset = "0x10")]
	private AndroidJavaObject audioIn;

	[Token(Token = "0x40002A7")]
	[FieldOffset(Offset = "0x18")]
	private IntPtr javaBuf;

	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0x20")]
	private ILogger logger;

	[Token(Token = "0x40002A9")]
	[FieldOffset(Offset = "0x28")]
	private int audioInSampleRate;

	[Token(Token = "0x40002AA")]
	[FieldOffset(Offset = "0x30")]
	private DataCallback callback;

	[Token(Token = "0x170000EF")]
	public int Channels
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x3C42070", Offset = "0x3C42070", VA = "0x3C42070", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F0")]
	public int SamplingRate
	{
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x3C423B0", Offset = "0x3C423B0", VA = "0x3C423B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F1")]
	public string Error
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x3C423C0", Offset = "0x3C423C0", VA = "0x3C423C0", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x3C423D0", Offset = "0x3C423D0", VA = "0x3C423D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x3C40A80", Offset = "0x3C40A80", VA = "0x3C40A80")]
	public AndroidAudioInAEC(ILogger logger, bool enableAEC = false, bool enableAGC = false, bool enableNS = false)
	{
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x3C42080", Offset = "0x3C42080", VA = "0x3C42080", Slot = "4")]
	public void SetCallback(Action<short[]> callback, ObjectFactory<short[], int> bufferFactory)
	{
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x3C423E0", Offset = "0x3C423E0", VA = "0x3C423E0", Slot = "9")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x3C424D0", Offset = "0x3C424D0", VA = "0x3C424D0", Slot = "8")]
	public void Dispose()
	{
	}
}
