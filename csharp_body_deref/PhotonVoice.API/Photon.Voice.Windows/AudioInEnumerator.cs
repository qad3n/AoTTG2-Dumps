// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Windows.AudioInEnumerator
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Apple/MacOSDeviceEnumerator.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice.Windows;

[Token(Token = "0x200009E")]
public class AudioInEnumerator : DeviceEnumeratorBase
{
	[Token(Token = "0x400029D")]
	private const string lib_name = "AudioIn";

	[Token(Token = "0x400029E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private IntPtr handle;

	[PreserveSig]
	[Token(Token = "0x600036D")]
	[Address(RVA = "0x1D832B0", Offset = "0x1D818B0", VA = "0x181D832B0")]
	private static extern IntPtr Photon_Audio_In_CreateMicEnumerator();

	[PreserveSig]
	[Token(Token = "0x600036E")]
	[Address(RVA = "0x1D83320", Offset = "0x1D81920", VA = "0x181D83320")]
	private static extern void Photon_Audio_In_DestroyMicEnumerator(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x600036F")]
	[Address(RVA = "0x1D833A0", Offset = "0x1D819A0", VA = "0x181D833A0")]
	private static extern int Photon_Audio_In_MicEnumerator_Count(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x6000370")]
	[Address(RVA = "0x1D834B0", Offset = "0x1D81AB0", VA = "0x181D834B0")]
	private static extern IntPtr Photon_Audio_In_MicEnumerator_NameAtIndex(IntPtr handle, int idx);

	[PreserveSig]
	[Token(Token = "0x6000371")]
	[Address(RVA = "0x1D83420", Offset = "0x1D81A20", VA = "0x181D83420")]
	private static extern int Photon_Audio_In_MicEnumerator_IDAtIndex(IntPtr handle, int idx);

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x1D83BA0", Offset = "0x1D821A0", VA = "0x181D83BA0")]
	public AudioInEnumerator(ILogger logger)
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x1D83540", Offset = "0x1D81B40", VA = "0x181D83540", Slot = "14")]
	public override void Refresh()
	{
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x1D83200", Offset = "0x1D81800", VA = "0x181D83200", Slot = "15")]
	public override void Dispose()
	{
	}
}
