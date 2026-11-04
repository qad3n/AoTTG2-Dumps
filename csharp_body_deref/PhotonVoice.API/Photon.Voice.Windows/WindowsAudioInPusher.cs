// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Windows.WindowsAudioInPusher
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Windows/WindowsAudioIn.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice.Windows;

[Token(Token = "0x200009F")]
public class WindowsAudioInPusher : IAudioPusher<short>, IAudioDesc, IDisposable
{
	[Token(Token = "0x20000A0")]
	private enum SystemMode
	{
		[Token(Token = "0x40002A7")]
		SINGLE_CHANNEL_AEC = 0,
		[Token(Token = "0x40002A8")]
		OPTIBEAM_ARRAY_ONLY = 2,
		[Token(Token = "0x40002A9")]
		OPTIBEAM_ARRAY_AND_AEC = 4,
		[Token(Token = "0x40002AA")]
		SINGLE_CHANNEL_NSAGC = 5
	}

	[Token(Token = "0x20000A1")]
	private delegate void CallbackDelegate(int instanceID, IntPtr buf, int len);

	[Token(Token = "0x400029F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr handle;

	[Token(Token = "0x40002A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int instanceID;

	[Token(Token = "0x40002A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Action<short[]> pushCallback;

	[Token(Token = "0x40002A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private ObjectFactory<short[], int> bufferFactory;

	[Token(Token = "0x40002A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int instanceCnt;

	[Token(Token = "0x40002A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<int, WindowsAudioInPusher> instancePerHandle;

	[Token(Token = "0x170000EF")]
	public int Channels
	{
		[Token(Token = "0x600037B")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F0")]
	public int SamplingRate
	{
		[Token(Token = "0x600037C")]
		[Address(RVA = "0x1D881D0", Offset = "0x1D867D0", VA = "0x181D881D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F1")]
	public string Error
	{
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[PreserveSig]
	[Token(Token = "0x6000375")]
	[Address(RVA = "0x1D87C40", Offset = "0x1D86240", VA = "0x181D87C40")]
	private static extern IntPtr Photon_Audio_In_Create(int instanceID, SystemMode systemMode, int micDevIdx, int spkDevIdx, Action<int, IntPtr, int> callback, bool featrModeOn, bool noiseSup, bool agc, bool cntrClip);

	[PreserveSig]
	[Token(Token = "0x6000376")]
	[Address(RVA = "0x1D87D30", Offset = "0x1D86330", VA = "0x181D87D30")]
	private static extern void Photon_Audio_In_Destroy(IntPtr handler);

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x1D87E80", Offset = "0x1D86480", VA = "0x181D87E80")]
	public WindowsAudioInPusher(int deviceID, ILogger logger)
	{
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x1D881E0", Offset = "0x1D867E0", VA = "0x181D881E0")]
	[MonoPInvokeCallback(typeof(CallbackDelegate))]
	private static void nativePushCallback(int instanceID, IntPtr buf, int len)
	{
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x1D87DB0", Offset = "0x1D863B0", VA = "0x181D87DB0", Slot = "4")]
	public void SetCallback(Action<short[]> callback, ObjectFactory<short[], int> bufferFactory)
	{
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x1D88490", Offset = "0x1D86A90", VA = "0x181D88490")]
	private void push(IntPtr buf, int lenBytes)
	{
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x1D87A40", Offset = "0x1D86040", VA = "0x181D87A40", Slot = "8")]
	public void Dispose()
	{
	}
}
