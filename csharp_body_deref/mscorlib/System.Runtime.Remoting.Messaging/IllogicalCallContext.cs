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

[Token(Token = "0x2000395")]
internal class IllogicalCallContext
{
	[Token(Token = "0x4000F30")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable m_Datastore;

	[Token(Token = "0x4000F31")]
	[FieldOffset(Offset = "0x18")]
	private object m_HostContext;

	[Token(Token = "0x17000394")]
	private Hashtable Datastore
	{
		[Token(Token = "0x6001DE7")]
		[Address(RVA = "0x3B84D30", Offset = "0x3B84D30", VA = "0x3B84D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000395")]
	internal object HostContext
	{
		[Token(Token = "0x6001DE8")]
		[Address(RVA = "0x3B84DB0", Offset = "0x3B84DB0", VA = "0x3B84DB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001DE9")]
		[Address(RVA = "0x3B84DC0", Offset = "0x3B84DC0", VA = "0x3B84DC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000396")]
	internal bool HasUserData
	{
		[Token(Token = "0x6001DEA")]
		[Address(RVA = "0x3B84DD0", Offset = "0x3B84DD0", VA = "0x3B84DD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001DEB")]
	[Address(RVA = "0x3B84BB0", Offset = "0x3B84BB0", VA = "0x3B84BB0")]
	public void FreeNamedDataSlot(string name)
	{
	}

	[Token(Token = "0x6001DEC")]
	[Address(RVA = "0x3B84E00", Offset = "0x3B84E00", VA = "0x3B84E00")]
	public System.Runtime.Remoting.Messaging.IllogicalCallContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x6001DED")]
	[Address(RVA = "0x3B850E0", Offset = "0x3B850E0", VA = "0x3B850E0")]
	public IllogicalCallContext()
	{
	}
}
