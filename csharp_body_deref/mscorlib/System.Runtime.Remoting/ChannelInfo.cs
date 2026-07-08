using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Serializable]
[Token(Token = "0x2000339")]
internal class ChannelInfo : IChannelInfo
{
	[Token(Token = "0x4000E68")]
	[FieldOffset(Offset = "0x10")]
	private object[] channelData;

	[Token(Token = "0x17000328")]
	public object[] ChannelData
	{
		[Token(Token = "0x6001C0F")]
		[Address(RVA = "0x4E79A10", Offset = "0x4E79A10", VA = "0x4E79A10", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C0D")]
	[Address(RVA = "0x4E79900", Offset = "0x4E79900", VA = "0x4E79900")]
	public ChannelInfo()
	{
	}

	[Token(Token = "0x6001C0E")]
	[Address(RVA = "0x4E79960", Offset = "0x4E79960", VA = "0x4E79960")]
	public ChannelInfo(object remoteChannelData)
	{
	}
}
