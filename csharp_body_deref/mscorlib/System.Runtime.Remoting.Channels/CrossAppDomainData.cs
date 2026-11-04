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
[Token(Token = "0x20003A7")]
internal class CrossAppDomainData
{
	[Token(Token = "0x4000F18")]
	[FieldOffset(Offset = "0x10")]
	private object _ContextID;

	[Token(Token = "0x4000F19")]
	[FieldOffset(Offset = "0x18")]
	private int _DomainID;

	[Token(Token = "0x4000F1A")]
	[FieldOffset(Offset = "0x20")]
	private string _processGuid;

	[Token(Token = "0x17000371")]
	internal int DomainID
	{
		[Token(Token = "0x6001DF9")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000372")]
	internal string ProcessID
	{
		[Token(Token = "0x6001DFA")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DF8")]
	[Address(RVA = "0x19F8980", Offset = "0x19F6F80", VA = "0x1819F8980")]
	internal CrossAppDomainData(int domainId)
	{
	}
}
