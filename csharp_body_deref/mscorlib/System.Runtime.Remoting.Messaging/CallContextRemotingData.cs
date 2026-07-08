using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x2000399")]
internal class CallContextRemotingData : ICloneable
{
	[Token(Token = "0x4000F3D")]
	[FieldOffset(Offset = "0x10")]
	private string _logicalCallID;

	[Token(Token = "0x1700039D")]
	internal string LogicalCallID
	{
		[Token(Token = "0x6001E01")]
		[Address(RVA = "0x4EA09F0", Offset = "0x4EA09F0", VA = "0x4EA09F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E02")]
		[Address(RVA = "0x4EA0A00", Offset = "0x4EA0A00", VA = "0x4EA0A00")]
		set
		{
		}
	}

	[Token(Token = "0x1700039E")]
	internal bool HasInfo
	{
		[Token(Token = "0x6001E03")]
		[Address(RVA = "0x4EA07E0", Offset = "0x4EA07E0", VA = "0x4EA07E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E04")]
	[Address(RVA = "0x4EA0700", Offset = "0x4EA0700", VA = "0x4EA0700", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001E05")]
	[Address(RVA = "0x4EA0A10", Offset = "0x4EA0A10", VA = "0x4EA0A10")]
	public CallContextRemotingData()
	{
	}
}
