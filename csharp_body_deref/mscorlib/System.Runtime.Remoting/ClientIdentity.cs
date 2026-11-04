// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.ClientIdentity
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000371")]
internal class ClientIdentity : System.Runtime.Remoting.Identity
{
	[Token(Token = "0x4000E85")]
	[FieldOffset(Offset = "0x48")]
	private WeakReference _proxyReference;

	[Token(Token = "0x1700033A")]
	public MarshalByRefObject ClientProxy
	{
		[Token(Token = "0x6001C9C")]
		[Address(RVA = "0x19D6210", Offset = "0x19D4810", VA = "0x1819D6210")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C9D")]
		[Address(RVA = "0x19D62D0", Offset = "0x19D48D0", VA = "0x1819D62D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700033B")]
	public string TargetUri
	{
		[Token(Token = "0x6001C9F")]
		[Address(RVA = "0x19D62A0", Offset = "0x19D48A0", VA = "0x1819D62A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C9B")]
	[Address(RVA = "0x19D6140", Offset = "0x19D4740", VA = "0x1819D6140")]
	public ClientIdentity(string objectUri, ObjRef objRef)
	{
	}

	[Token(Token = "0x6001C9E")]
	[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "4")]
	public override ObjRef CreateObjRef(Type requestedType)
	{
		return null;
	}
}
