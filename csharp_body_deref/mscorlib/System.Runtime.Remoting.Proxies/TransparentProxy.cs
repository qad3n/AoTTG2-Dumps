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
[Token(Token = "0x200035C")]
internal class TransparentProxy
{
	[Token(Token = "0x4000ECB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public RealProxy _rp;

	[Token(Token = "0x4000ECC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Mono.RuntimeRemoteClassHandle _class;

	[Token(Token = "0x4000ECD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool _custom_type_info;

	[Token(Token = "0x17000354")]
	private bool IsContextBoundObject
	{
		[Token(Token = "0x6001CF3")]
		[Address(RVA = "0x3B71CF0", Offset = "0x3B71CF0", VA = "0x3B71CF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000355")]
	private Context TargetContext
	{
		[Token(Token = "0x6001CF4")]
		[Address(RVA = "0x3B71D10", Offset = "0x3B71D10", VA = "0x3B71D10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CF2")]
	[Address(RVA = "0x3B71C40", Offset = "0x3B71C40", VA = "0x3B71C40")]
	internal System.RuntimeType GetProxyType()
	{
		return null;
	}

	[Token(Token = "0x6001CF5")]
	[Address(RVA = "0x3B71D30", Offset = "0x3B71D30", VA = "0x3B71D30")]
	private bool InCurrentContext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001CF6")]
	[Address(RVA = "0x3B71D80", Offset = "0x3B71D80", VA = "0x3B71D80")]
	internal object LoadRemoteFieldNew(IntPtr classPtr, IntPtr fieldPtr)
	{
		return null;
	}

	[Token(Token = "0x6001CF7")]
	[Address(RVA = "0x3B72E90", Offset = "0x3B72E90", VA = "0x3B72E90")]
	internal void StoreRemoteField(IntPtr classPtr, IntPtr fieldPtr, object arg)
	{
	}

	[Token(Token = "0x6001CF8")]
	[Address(RVA = "0x3B731C0", Offset = "0x3B731C0", VA = "0x3B731C0")]
	public TransparentProxy()
	{
	}
}
