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
[Token(Token = "0x20000AF")]
public struct AudioSessionParameters
{
	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x0")]
	public AudioSessionCategory Category;

	[Token(Token = "0x40002DD")]
	[FieldOffset(Offset = "0x4")]
	public AudioSessionMode Mode;

	[Token(Token = "0x40002DE")]
	[FieldOffset(Offset = "0x8")]
	public AudioSessionCategoryOption[] CategoryOptions;

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x5724A80", Offset = "0x5723A80", VA = "0x5724A80")]
	public int CategoryOptionsToInt()
	{
		return default(int);
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x5724B10", Offset = "0x5723B10", VA = "0x5724B10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
