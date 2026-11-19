// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.ClientIdentity
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x200034A")]
internal class ClientIdentity : System.Runtime.Remoting.Identity
{
	[Token(Token = "0x4000DE5")]
	[FieldOffset(Offset = "0x48")]
	private WeakReference _proxyReference;

	[Token(Token = "0x17000339")]
	public MarshalByRefObject ClientProxy
	{
		[Token(Token = "0x6001C72")]
		[Address(RVA = "0x53693A0", Offset = "0x53683A0", VA = "0x53693A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C73")]
		[Address(RVA = "0x5369420", Offset = "0x5368420", VA = "0x5369420")]
		set
		{
		}
	}

	[Token(Token = "0x1700033A")]
	public string TargetUri
	{
		[Token(Token = "0x6001C75")]
		[Address(RVA = "0x5369490", Offset = "0x5368490", VA = "0x5369490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C71")]
	[Address(RVA = "0x5369260", Offset = "0x5368260", VA = "0x5369260")]
	public ClientIdentity(string objectUri, ObjRef objRef)
	{
	}

	[Token(Token = "0x6001C74")]
	[Address(RVA = "0x5369480", Offset = "0x5368480", VA = "0x5369480", Slot = "4")]
	public override ObjRef CreateObjRef(Type requestedType)
	{
		return null;
	}
}
