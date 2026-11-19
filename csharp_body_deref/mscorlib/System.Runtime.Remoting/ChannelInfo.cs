// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.ChannelInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Serializable]
[Token(Token = "0x2000341")]
internal class ChannelInfo : IChannelInfo
{
	[Token(Token = "0x4000DD5")]
	[FieldOffset(Offset = "0x10")]
	private object[] channelData;

	[Token(Token = "0x17000329")]
	public object[] ChannelData
	{
		[Token(Token = "0x6001C54")]
		[Address(RVA = "0x5368D20", Offset = "0x5367D20", VA = "0x5368D20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C52")]
	[Address(RVA = "0x5368C10", Offset = "0x5367C10", VA = "0x5368C10")]
	public ChannelInfo()
	{
	}

	[Token(Token = "0x6001C53")]
	[Address(RVA = "0x5368C70", Offset = "0x5367C70", VA = "0x5368C70")]
	public ChannelInfo(object remoteChannelData)
	{
	}
}
