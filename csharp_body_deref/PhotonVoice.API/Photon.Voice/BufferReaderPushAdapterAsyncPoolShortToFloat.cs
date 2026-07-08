using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000095")]
public class BufferReaderPushAdapterAsyncPoolShortToFloat : BufferReaderPushAdapterBase<short>
{
	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x18")]
	private short[] buffer;

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x3C34EB0", Offset = "0x3C34EB0", VA = "0x3C34EB0")]
	public BufferReaderPushAdapterAsyncPoolShortToFloat(IDataReader<short> reader)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x3C3B070", Offset = "0x3C3B070", VA = "0x3C3B070", Slot = "5")]
	public override void Service(LocalVoice localVoice)
	{
	}
}
