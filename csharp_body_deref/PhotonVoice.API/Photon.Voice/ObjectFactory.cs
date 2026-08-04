// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.ObjectFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/ObjectFactory.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000041")]
public interface ObjectFactory<TType, TInfo> : IDisposable
{
	[Token(Token = "0x1700005D")]
	TInfo Info
	{
		[Token(Token = "0x6000157")]
		get;
	}

	[Token(Token = "0x6000158")]
	TType New();

	[Token(Token = "0x6000159")]
	TType New(TInfo info);

	[Token(Token = "0x600015A")]
	void Free(TType obj);

	[Token(Token = "0x600015B")]
	void Free(TType obj, TInfo info);
}
