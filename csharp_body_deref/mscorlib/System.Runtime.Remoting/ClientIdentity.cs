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
		[Address(RVA = "0x4E7A090", Offset = "0x4E7A090", VA = "0x4E7A090")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C2E")]
		[Address(RVA = "0x4E7A110", Offset = "0x4E7A110", VA = "0x4E7A110")]
		set
		{
		}
	}

	[Token(Token = "0x17000339")]
	public string TargetUri
	{
		[Token(Token = "0x6001C30")]
		[Address(RVA = "0x4E7A180", Offset = "0x4E7A180", VA = "0x4E7A180")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C2C")]
	[Address(RVA = "0x4E79F50", Offset = "0x4E79F50", VA = "0x4E79F50")]
	public ClientIdentity(string objectUri, ObjRef objRef)
	{
	}

	[Token(Token = "0x6001C2F")]
	[Address(RVA = "0x4E7A170", Offset = "0x4E7A170", VA = "0x4E7A170", Slot = "4")]
	public override ObjRef CreateObjRef(Type requestedType)
	{
		return null;
	}
}
