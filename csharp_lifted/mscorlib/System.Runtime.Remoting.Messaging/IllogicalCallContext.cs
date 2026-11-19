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

[Token(Token = "0x200039D")]
internal class IllogicalCallContext
{
	[Token(Token = "0x4000E9D")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable m_Datastore;

	[Token(Token = "0x4000E9E")]
	[FieldOffset(Offset = "0x18")]
	private object m_HostContext;

	[Token(Token = "0x17000395")]
	private Hashtable Datastore
	{
		[Token(Token = "0x6001E2C")]
		[Address(RVA = "0x538CBA0", Offset = "0x538BBA0", VA = "0x538CBA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000396")]
	internal object HostContext
	{
		[Token(Token = "0x6001E2D")]
		[Address(RVA = "0x538CC20", Offset = "0x538BC20", VA = "0x538CC20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E2E")]
		[Address(RVA = "0x538CC30", Offset = "0x538BC30", VA = "0x538CC30")]
		set
		{
		}
	}

	[Token(Token = "0x17000397")]
	internal bool HasUserData
	{
		[Token(Token = "0x6001E2F")]
		[Address(RVA = "0x538CC40", Offset = "0x538BC40", VA = "0x538CC40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E30")]
	[Address(RVA = "0x538CA20", Offset = "0x538BA20", VA = "0x538CA20")]
	public void FreeNamedDataSlot(string name)
	{
	}

	[Token(Token = "0x6001E31")]
	[Address(RVA = "0x538CC70", Offset = "0x538BC70", VA = "0x538CC70")]
	public System.Runtime.Remoting.Messaging.IllogicalCallContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x6001E32")]
	[Address(RVA = "0x538CF50", Offset = "0x538BF50", VA = "0x538CF50")]
	public IllogicalCallContext()
	{
	}
}
