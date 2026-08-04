// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.ClientIdentity
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000342")]
internal class ClientIdentity : System.Runtime.Remoting.Identity
{
	[Token(Token = "0x4000E78")]
	[FieldOffset(Offset = "0x48")]
	private WeakReference _proxyReference;

	[Token(Token = "0x17000338")]
	public MarshalByRefObject ClientProxy
	{
		[Token(Token = "0x6001C2D")]
		[Address(RVA = "0x3B5FBB0", Offset = "0x3B5FBB0", VA = "0x3B5FBB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C2E")]
		[Address(RVA = "0x3B5FC30", Offset = "0x3B5FC30", VA = "0x3B5FC30")]
		set
		{
		}
	}

	[Token(Token = "0x17000339")]
	public string TargetUri
	{
		[Token(Token = "0x6001C30")]
		[Address(RVA = "0x3B5FCA0", Offset = "0x3B5FCA0", VA = "0x3B5FCA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C2C")]
	[Address(RVA = "0x3B5FA70", Offset = "0x3B5FA70", VA = "0x3B5FA70")]
	public ClientIdentity(string objectUri, ObjRef objRef)
	{
	}

	[Token(Token = "0x6001C2F")]
	[Address(RVA = "0x3B5FC90", Offset = "0x3B5FC90", VA = "0x3B5FC90", Slot = "4")]
	public override ObjRef CreateObjRef(Type requestedType)
	{
		return null;
	}
}
