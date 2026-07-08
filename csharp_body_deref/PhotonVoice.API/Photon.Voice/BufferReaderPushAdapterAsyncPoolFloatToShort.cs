using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000094")]
public class BufferReaderPushAdapterAsyncPoolFloatToShort : BufferReaderPushAdapterBase<float>
{
	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x18")]
	private float[] buffer;

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x3C34E30", Offset = "0x3C34E30", VA = "0x3C34E30")]
	public BufferReaderPushAdapterAsyncPoolFloatToShort(IDataReader<float> reader)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x3C3ADF0", Offset = "0x3C3ADF0", VA = "0x3C3ADF0", Slot = "5")]
	public override void Service(LocalVoice localVoice)
	{
	}
}
