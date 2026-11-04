// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.BufferReaderPushAdapterAsyncPoolShortToFloat
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceSourceAdapter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000093")]
public class BufferReaderPushAdapterAsyncPoolShortToFloat : BufferReaderPushAdapterBase<short>
{
	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x18")]
	private short[] buffer;

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x1D68910", Offset = "0x1D66F10", VA = "0x181D68910")]
	public BufferReaderPushAdapterAsyncPoolShortToFloat(IDataReader<short> reader)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x1D68650", Offset = "0x1D66C50", VA = "0x181D68650", Slot = "5")]
	public override void Service(LocalVoice localVoice)
	{
	}
}
