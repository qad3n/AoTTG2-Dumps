// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.CallContextRemotingData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x20003A1")]
internal class CallContextRemotingData : ICloneable
{
	[Token(Token = "0x4000EA7")]
	[FieldOffset(Offset = "0x10")]
	private string _logicalCallID;

	[Token(Token = "0x1700039E")]
	internal string LogicalCallID
	{
		[Token(Token = "0x6001E46")]
		[Address(RVA = "0x538E460", Offset = "0x538D460", VA = "0x538E460")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E47")]
		[Address(RVA = "0x538E470", Offset = "0x538D470", VA = "0x538E470")]
		set
		{
		}
	}

	[Token(Token = "0x1700039F")]
	internal bool HasInfo
	{
		[Token(Token = "0x6001E48")]
		[Address(RVA = "0x538E250", Offset = "0x538D250", VA = "0x538E250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E49")]
	[Address(RVA = "0x538E170", Offset = "0x538D170", VA = "0x538E170", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001E4A")]
	[Address(RVA = "0x538E480", Offset = "0x538D480", VA = "0x538E480")]
	public CallContextRemotingData()
	{
	}
}
