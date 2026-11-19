// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Microphone
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000015")]
[UnityEngine.Bindings.StaticAccessor("GetAudioManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public sealed class Microphone
{
	[Token(Token = "0x1700001C")]
	public static extern string[] devices
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x68B1740", Offset = "0x68B0740", VA = "0x68B1740")]
		[UnityEngine.Bindings.NativeName("GetRecordDevices")]
		get;
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x68B1230", Offset = "0x68B0230", VA = "0x68B1230")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static int GetMicrophoneDeviceIDFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x68B13C0", Offset = "0x68B03C0", VA = "0x68B13C0")]
	private static AudioClip StartRecord(int deviceID, bool loop, float lengthSec, int frequency)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000070")]
	[Address(RVA = "0x68B14A0", Offset = "0x68B04A0", VA = "0x68B14A0")]
	private static extern void EndRecord(int deviceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000071")]
	[Address(RVA = "0x68B14D0", Offset = "0x68B04D0", VA = "0x68B14D0")]
	private static extern bool IsRecording(int deviceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000072")]
	[Address(RVA = "0x68B1500", Offset = "0x68B0500", VA = "0x68B1500")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern int GetRecordPosition(int deviceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000073")]
	[Address(RVA = "0x68B1530", Offset = "0x68B0530", VA = "0x68B1530")]
	private static extern void GetDeviceCaps(int deviceID, out int minFreq, out int maxFreq);

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x68B1570", Offset = "0x68B0570", VA = "0x68B1570")]
	public static AudioClip Start(string deviceName, bool loop, int lengthSec, int frequency)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x68B1700", Offset = "0x68B0700", VA = "0x68B1700")]
	public static void End(string deviceName)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x68B1770", Offset = "0x68B0770", VA = "0x68B1770")]
	public static bool IsRecording(string deviceName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x68B17B0", Offset = "0x68B07B0", VA = "0x68B17B0")]
	public static int GetPosition(string deviceName)
	{
		return default(int);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x68B17F0", Offset = "0x68B07F0", VA = "0x68B17F0")]
	public static void GetDeviceCaps(string deviceName, out int minFreq, out int maxFreq)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x68B1390", Offset = "0x68B0390", VA = "0x68B1390")]
	private static extern int GetMicrophoneDeviceIDFromName_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x68B1450", Offset = "0x68B0450", VA = "0x68B1450")]
	private static extern IntPtr StartRecord_Injected(int deviceID, bool loop, float lengthSec, int frequency);
}
