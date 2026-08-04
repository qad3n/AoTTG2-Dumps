// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Microphone
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4DAB140", Offset = "0x4DAB140", VA = "0x4DAB140")]
		[UnityEngine.Bindings.NativeName("GetRecordDevices")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4DAAE00", Offset = "0x4DAAE00", VA = "0x4DAAE00")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern int GetMicrophoneDeviceIDFromName(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4DAAE30", Offset = "0x4DAAE30", VA = "0x4DAAE30")]
	private static extern AudioClip StartRecord(int deviceID, bool loop, float lengthSec, int frequency);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4DAAE80", Offset = "0x4DAAE80", VA = "0x4DAAE80")]
	private static extern void EndRecord(int deviceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4DAAEB0", Offset = "0x4DAAEB0", VA = "0x4DAAEB0")]
	private static extern bool IsRecording(int deviceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4DAAEE0", Offset = "0x4DAAEE0", VA = "0x4DAAEE0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern int GetRecordPosition(int deviceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4DAAF10", Offset = "0x4DAAF10", VA = "0x4DAAF10")]
	private static extern void GetDeviceCaps(int deviceID, out int minFreq, out int maxFreq);

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4DAAF50", Offset = "0x4DAAF50", VA = "0x4DAAF50")]
	public static AudioClip Start(string deviceName, bool loop, int lengthSec, int frequency)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4DAB0D0", Offset = "0x4DAB0D0", VA = "0x4DAB0D0")]
	public static void End(string deviceName)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4DAB170", Offset = "0x4DAB170", VA = "0x4DAB170")]
	public static bool IsRecording(string deviceName)
	{
		return default(bool);
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4DAB1E0", Offset = "0x4DAB1E0", VA = "0x4DAB1E0")]
	public static int GetPosition(string deviceName)
	{
		return default(int);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4DAB250", Offset = "0x4DAB250", VA = "0x4DAB250")]
	public static void GetDeviceCaps(string deviceName, out int minFreq, out int maxFreq)
	{
	}
}
