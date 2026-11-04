// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Microphone
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000014")]
[UnityEngine.Bindings.StaticAccessor("GetAudioManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public sealed class Microphone
{
	[Token(Token = "0x1700001B")]
	public static extern string[] devices
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x2EB63F0", Offset = "0x2EB49F0", VA = "0x182EB63F0")]
		[UnityEngine.Bindings.NativeName("GetRecordDevices")]
		get;
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x2EB5DA0", Offset = "0x2EB43A0", VA = "0x182EB5DA0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static int GetMicrophoneDeviceIDFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x2EB60C0", Offset = "0x2EB46C0", VA = "0x182EB60C0")]
	private static AudioClip StartRecord(int deviceID, bool loop, float lengthSec, int frequency)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000071")]
	[Address(RVA = "0x2EB5C10", Offset = "0x2EB4210", VA = "0x182EB5C10")]
	private static extern void EndRecord(int deviceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000072")]
	[Address(RVA = "0x2EB5FC0", Offset = "0x2EB45C0", VA = "0x182EB5FC0")]
	private static extern bool IsRecording(int deviceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000073")]
	[Address(RVA = "0x2EB5F80", Offset = "0x2EB4580", VA = "0x182EB5F80")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern int GetRecordPosition(int deviceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000074")]
	[Address(RVA = "0x2EB5D10", Offset = "0x2EB4310", VA = "0x182EB5D10")]
	private static extern void GetDeviceCaps(int deviceID, out int minFreq, out int maxFreq);

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x2EB6150", Offset = "0x2EB4750", VA = "0x182EB6150")]
	public static AudioClip Start(string deviceName, bool loop, int lengthSec, int frequency)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x2EB5C50", Offset = "0x2EB4250", VA = "0x182EB5C50")]
	public static void End(string deviceName)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x2EB6000", Offset = "0x2EB4600", VA = "0x182EB6000")]
	public static bool IsRecording(string deviceName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x2EB5F30", Offset = "0x2EB4530", VA = "0x182EB5F30")]
	public static int GetPosition(string deviceName)
	{
		return default(int);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x2EB5CA0", Offset = "0x2EB42A0", VA = "0x182EB5CA0")]
	public static void GetDeviceCaps(string deviceName, out int minFreq, out int maxFreq)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x2EB5D60", Offset = "0x2EB4360", VA = "0x182EB5D60")]
	private static extern int GetMicrophoneDeviceIDFromName_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x2EB6050", Offset = "0x2EB4650", VA = "0x182EB6050")]
	private static extern IntPtr StartRecord_Injected(int deviceID, bool loop, float lengthSec, int frequency);
}
