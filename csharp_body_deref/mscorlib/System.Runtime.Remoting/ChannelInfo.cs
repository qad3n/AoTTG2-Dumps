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
[Token(Token = "0x2000368")]
internal class ChannelInfo : IChannelInfo
{
	[Token(Token = "0x4000E75")]
	[FieldOffset(Offset = "0x10")]
	private object[] channelData;

	[Token(Token = "0x1700032A")]
	public object[] ChannelData
	{
		[Token(Token = "0x6001C7E")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C7C")]
	[Address(RVA = "0x19D32A0", Offset = "0x19D18A0", VA = "0x1819D32A0")]
	public ChannelInfo()
	{
	}

	[Token(Token = "0x6001C7D")]
	[Address(RVA = "0x19D3300", Offset = "0x19D1900", VA = "0x1819D3300")]
	public ChannelInfo(object remoteChannelData)
	{
	}
}
