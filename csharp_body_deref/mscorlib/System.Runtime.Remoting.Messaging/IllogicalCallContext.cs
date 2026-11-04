// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.IllogicalCallContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003C4")]
internal class IllogicalCallContext
{
	[Token(Token = "0x4000F3D")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable m_Datastore;

	[Token(Token = "0x4000F3E")]
	[FieldOffset(Offset = "0x18")]
	private object m_HostContext;

	[Token(Token = "0x17000396")]
	private Hashtable Datastore
	{
		[Token(Token = "0x6001E56")]
		[Address(RVA = "0x19FB4C0", Offset = "0x19F9AC0", VA = "0x1819FB4C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000397")]
	internal object HostContext
	{
		[Token(Token = "0x6001E57")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E58")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000398")]
	internal bool HasUserData
	{
		[Token(Token = "0x6001E59")]
		[Address(RVA = "0x19FB530", Offset = "0x19F9B30", VA = "0x1819FB530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E5A")]
	[Address(RVA = "0x19FB420", Offset = "0x19F9A20", VA = "0x1819FB420")]
	public void FreeNamedDataSlot(string name)
	{
	}

	[Token(Token = "0x6001E5B")]
	[Address(RVA = "0x19FB110", Offset = "0x19F9710", VA = "0x1819FB110")]
	public System.Runtime.Remoting.Messaging.IllogicalCallContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x6001E5C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public IllogicalCallContext()
	{
	}
}
