// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.IOS.AudioSessionParameters
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Apple/iOSAudioSession.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice.IOS;

[Serializable]
[Token(Token = "0x20000B3")]
public struct AudioSessionParameters
{
	[Token(Token = "0x40002EA")]
	[FieldOffset(Offset = "0x0")]
	public AudioSessionCategory Category;

	[Token(Token = "0x40002EB")]
	[FieldOffset(Offset = "0x4")]
	public AudioSessionMode Mode;

	[Token(Token = "0x40002EC")]
	[FieldOffset(Offset = "0x8")]
	public AudioSessionCategoryOption[] CategoryOptions;

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x1D83EB0", Offset = "0x1D824B0", VA = "0x181D83EB0")]
	public int CategoryOptionsToInt()
	{
		return default(int);
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x1D83EF0", Offset = "0x1D824F0", VA = "0x181D83EF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
