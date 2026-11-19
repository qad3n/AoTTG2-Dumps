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
[Token(Token = "0x2000380")]
internal class CrossAppDomainData
{
	[Token(Token = "0x4000E78")]
	[FieldOffset(Offset = "0x10")]
	private object _ContextID;

	[Token(Token = "0x4000E79")]
	[FieldOffset(Offset = "0x18")]
	private int _DomainID;

	[Token(Token = "0x4000E7A")]
	[FieldOffset(Offset = "0x20")]
	private string _processGuid;

	[Token(Token = "0x17000370")]
	internal int DomainID
	{
		[Token(Token = "0x6001DCF")]
		[Address(RVA = "0x5388AD0", Offset = "0x5387AD0", VA = "0x5388AD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000371")]
	internal string ProcessID
	{
		[Token(Token = "0x6001DD0")]
		[Address(RVA = "0x5388AE0", Offset = "0x5387AE0", VA = "0x5388AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DCE")]
	[Address(RVA = "0x5388A30", Offset = "0x5387A30", VA = "0x5388A30")]
	internal CrossAppDomainData(int domainId)
	{
	}
}
