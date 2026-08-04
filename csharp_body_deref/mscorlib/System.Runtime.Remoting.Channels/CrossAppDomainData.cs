// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Channels.CrossAppDomainData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B80C80", Offset = "0x3B80C80", VA = "0x3B80C80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000370")]
	internal string ProcessID
	{
		[Token(Token = "0x6001D8B")]
		[Address(RVA = "0x3B80C90", Offset = "0x3B80C90", VA = "0x3B80C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D89")]
	[Address(RVA = "0x3B80BE0", Offset = "0x3B80BE0", VA = "0x3B80BE0")]
	internal CrossAppDomainData(int domainId)
	{
	}
}
