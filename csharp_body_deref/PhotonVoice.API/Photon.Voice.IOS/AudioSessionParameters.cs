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
[Token(Token = "0x20000B1")]
public struct AudioSessionParameters
{
	[Token(Token = "0x40002E1")]
	[FieldOffset(Offset = "0x0")]
	public AudioSessionCategory Category;

	[Token(Token = "0x40002E2")]
	[FieldOffset(Offset = "0x4")]
	public AudioSessionMode Mode;

	[Token(Token = "0x40002E3")]
	[FieldOffset(Offset = "0x8")]
	public AudioSessionCategoryOption[] CategoryOptions;

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x3F3AF70", Offset = "0x3F3AF70", VA = "0x3F3AF70")]
	public int CategoryOptionsToInt()
	{
		return default(int);
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x3F3AFB0", Offset = "0x3F3AFB0", VA = "0x3F3AFB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
