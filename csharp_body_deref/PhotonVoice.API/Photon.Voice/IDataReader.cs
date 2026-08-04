// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.IDataReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Voice.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200005A")]
public interface IDataReader<T> : IDisposable
{
	[Token(Token = "0x60001C7")]
	bool Read(T[] buffer);
}
