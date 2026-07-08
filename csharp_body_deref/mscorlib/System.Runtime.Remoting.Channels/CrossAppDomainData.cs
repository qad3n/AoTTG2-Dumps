using Il2CppDummyDll;

namespace System.Runtime.Remoting.Channels;

[Serializable]
[Token(Token = "0x2000378")]
internal class CrossAppDomainData
{
	[Token(Token = "0x4000F0B")]
	[FieldOffset(Offset = "0x10")]
	private object _ContextID;

	[Token(Token = "0x4000F0C")]
	[FieldOffset(Offset = "0x18")]
	private int _DomainID;

	[Token(Token = "0x4000F0D")]
	[FieldOffset(Offset = "0x20")]
	private string _processGuid;

	[Token(Token = "0x1700036F")]
	internal int DomainID
	{
		[Token(Token = "0x6001D8A")]
		[Address(RVA = "0x4E9B160", Offset = "0x4E9B160", VA = "0x4E9B160")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000370")]
	internal string ProcessID
	{
		[Token(Token = "0x6001D8B")]
		[Address(RVA = "0x4E9B170", Offset = "0x4E9B170", VA = "0x4E9B170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D89")]
	[Address(RVA = "0x4E9B0C0", Offset = "0x4E9B0C0", VA = "0x4E9B0C0")]
	internal CrossAppDomainData(int domainId)
	{
	}
}
