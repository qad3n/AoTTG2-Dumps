// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.BufferReaderPushAdapterBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceSourceAdapter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000092")]
public abstract class BufferReaderPushAdapterBase<T> : IServiceable
{
	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x0")]
	protected IDataReader<T> reader;

	[Token(Token = "0x6000326")]
	public abstract void Service(LocalVoice localVoice);

	[Token(Token = "0x6000327")]
	public BufferReaderPushAdapterBase(IDataReader<T> reader)
	{
	}

	[Token(Token = "0x6000328")]
	public void Dispose()
	{
	}
}
