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
		[Address(RVA = "0x4E9F210", Offset = "0x4E9F210", VA = "0x4E9F210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000395")]
	internal object HostContext
	{
		[Token(Token = "0x6001DE8")]
		[Address(RVA = "0x4E9F290", Offset = "0x4E9F290", VA = "0x4E9F290")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001DE9")]
		[Address(RVA = "0x4E9F2A0", Offset = "0x4E9F2A0", VA = "0x4E9F2A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000396")]
	internal bool HasUserData
	{
		[Token(Token = "0x6001DEA")]
		[Address(RVA = "0x4E9F2B0", Offset = "0x4E9F2B0", VA = "0x4E9F2B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001DEB")]
	[Address(RVA = "0x4E9F090", Offset = "0x4E9F090", VA = "0x4E9F090")]
	public void FreeNamedDataSlot(string name)
	{
	}

	[Token(Token = "0x6001DEC")]
	[Address(RVA = "0x4E9F2E0", Offset = "0x4E9F2E0", VA = "0x4E9F2E0")]
	public System.Runtime.Remoting.Messaging.IllogicalCallContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x6001DED")]
	[Address(RVA = "0x4E9F5C0", Offset = "0x4E9F5C0", VA = "0x4E9F5C0")]
	public IllogicalCallContext()
	{
	}
}
