// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.BufferReaderPushAdapterAsyncPoolFloatToShort
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceSourceAdapter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000094")]
public class BufferReaderPushAdapterAsyncPoolFloatToShort : BufferReaderPushAdapterBase<float>
{
	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x18")]
	private float[] buffer;

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x3F2A780", Offset = "0x3F2A780", VA = "0x3F2A780")]
	public BufferReaderPushAdapterAsyncPoolFloatToShort(IDataReader<float> reader)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x3F30740", Offset = "0x3F30740", VA = "0x3F30740", Slot = "5")]
	public override void Service(LocalVoice localVoice)
	{
	}
}
