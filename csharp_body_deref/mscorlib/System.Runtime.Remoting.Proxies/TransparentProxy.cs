// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Proxies.TransparentProxy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Contexts;
using Il2CppDummyDll;
using Mono;

namespace System.Runtime.Remoting.Proxies;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200038B")]
internal class TransparentProxy
{
	[Token(Token = "0x4000ED8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public RealProxy _rp;

	[Token(Token = "0x4000ED9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Mono.RuntimeRemoteClassHandle _class;

	[Token(Token = "0x4000EDA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool _custom_type_info;

	[Token(Token = "0x17000356")]
	private bool IsContextBoundObject
	{
		[Token(Token = "0x6001D62")]
		[Address(RVA = "0x1A0AB30", Offset = "0x1A09130", VA = "0x181A0AB30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000357")]
	private Context TargetContext
	{
		[Token(Token = "0x6001D63")]
		[Address(RVA = "0x19BCDF0", Offset = "0x19BB3F0", VA = "0x1819BCDF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D61")]
	[Address(RVA = "0x1A0A300", Offset = "0x1A08900", VA = "0x181A0A300")]
	internal System.RuntimeType GetProxyType()
	{
		return null;
	}

	[Token(Token = "0x6001D64")]
	[Address(RVA = "0x1A0A3B0", Offset = "0x1A089B0", VA = "0x181A0A3B0")]
	private bool InCurrentContext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001D65")]
	[Address(RVA = "0x1A0A4B0", Offset = "0x1A08AB0", VA = "0x181A0A4B0")]
	internal object LoadRemoteFieldNew(IntPtr classPtr, IntPtr fieldPtr)
	{
		return null;
	}

	[Token(Token = "0x6001D66")]
	[Address(RVA = "0x1A0A7E0", Offset = "0x1A08DE0", VA = "0x181A0A7E0")]
	internal void StoreRemoteField(IntPtr classPtr, IntPtr fieldPtr, object arg)
	{
	}

	[Token(Token = "0x6001D67")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public TransparentProxy()
	{
	}
}
