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
		[Address(RVA = "0x3B5F530", Offset = "0x3B5F530", VA = "0x3B5F530", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C0D")]
	[Address(RVA = "0x3B5F420", Offset = "0x3B5F420", VA = "0x3B5F420")]
	public ChannelInfo()
	{
	}

	[Token(Token = "0x6001C0E")]
	[Address(RVA = "0x3B5F480", Offset = "0x3B5F480", VA = "0x3B5F480")]
	public ChannelInfo(object remoteChannelData)
	{
	}
}
