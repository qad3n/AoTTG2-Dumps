using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000012")]
[UnityEngine.Bindings.StaticAccessor("GetAudioManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public sealed class Microphone
{
	[Token(Token = "0x17000015")]
	public static extern string[] devices
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x4A83920", Offset = "0x4A83920", VA = "0x4A83920")]
		[UnityEngine.Bindings.NativeName("GetRecordDevices")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4A835E0", Offset = "0x4A835E0", VA = "0x4A835E0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern int GetMicrophoneDeviceIDFromName(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4A83610", Offset = "0x4A83610", VA = "0x4A83610")]
	private static extern AudioClip StartRecord(int deviceID, bool loop, float lengthSec, int frequency);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4A83660", Offset = "0x4A83660", VA = "0x4A83660")]
	private static extern void EndRecord(int deviceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4A83690", Offset = "0x4A83690", VA = "0x4A83690")]
	private static extern bool IsRecording(int deviceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4A836C0", Offset = "0x4A836C0", VA = "0x4A836C0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern int GetRecordPosition(int deviceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4A836F0", Offset = "0x4A836F0", VA = "0x4A836F0")]
	private static extern void GetDeviceCaps(int deviceID, out int minFreq, out int maxFreq);

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4A83730", Offset = "0x4A83730", VA = "0x4A83730")]
	public static AudioClip Start(string deviceName, bool loop, int lengthSec, int frequency)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4A838B0", Offset = "0x4A838B0", VA = "0x4A838B0")]
	public static void End(string deviceName)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4A83950", Offset = "0x4A83950", VA = "0x4A83950")]
	public static bool IsRecording(string deviceName)
	{
		return default(bool);
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4A839C0", Offset = "0x4A839C0", VA = "0x4A839C0")]
	public static int GetPosition(string deviceName)
	{
		return default(int);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4A83A30", Offset = "0x4A83A30", VA = "0x4A83A30")]
	public static void GetDeviceCaps(string deviceName, out int minFreq, out int maxFreq)
	{
	}
}
