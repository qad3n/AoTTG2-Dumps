// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.BufferReaderPushAdapterAsyncPoolFloatToShort
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceSourceAdapter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000092")]
public class BufferReaderPushAdapterAsyncPoolFloatToShort : BufferReaderPushAdapterBase<float>
{
	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0x18")]
	private float[] buffer;

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x5714E10", Offset = "0x5713E10", VA = "0x5714E10")]
	public BufferReaderPushAdapterAsyncPoolFloatToShort(IDataReader<float> reader)
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x571AA00", Offset = "0x5719A00", VA = "0x571AA00", Slot = "5")]
	public override void Service(LocalVoice localVoice)
	{
	}
}
