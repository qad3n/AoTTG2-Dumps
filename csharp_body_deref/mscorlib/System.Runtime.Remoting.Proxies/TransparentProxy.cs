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
[Token(Token = "0x2000364")]
internal class TransparentProxy
{
	[Token(Token = "0x4000E38")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public RealProxy _rp;

	[Token(Token = "0x4000E39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Mono.RuntimeRemoteClassHandle _class;

	[Token(Token = "0x4000E3A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool _custom_type_info;

	[Token(Token = "0x17000355")]
	private bool IsContextBoundObject
	{
		[Token(Token = "0x6001D38")]
		[Address(RVA = "0x537A600", Offset = "0x5379600", VA = "0x537A600")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000356")]
	private Context TargetContext
	{
		[Token(Token = "0x6001D39")]
		[Address(RVA = "0x537A620", Offset = "0x5379620", VA = "0x537A620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D37")]
	[Address(RVA = "0x537A550", Offset = "0x5379550", VA = "0x537A550")]
	internal System.RuntimeType GetProxyType()
	{
		return null;
	}

	[Token(Token = "0x6001D3A")]
	[Address(RVA = "0x537A640", Offset = "0x5379640", VA = "0x537A640")]
	private bool InCurrentContext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001D3B")]
	[Address(RVA = "0x537A690", Offset = "0x5379690", VA = "0x537A690")]
	internal object LoadRemoteFieldNew(IntPtr classPtr, IntPtr fieldPtr)
	{
		return null;
	}

	[Token(Token = "0x6001D3C")]
	[Address(RVA = "0x537B790", Offset = "0x537A790", VA = "0x537B790")]
	internal void StoreRemoteField(IntPtr classPtr, IntPtr fieldPtr, object arg)
	{
	}

	[Token(Token = "0x6001D3D")]
	[Address(RVA = "0x537BAC0", Offset = "0x537AAC0", VA = "0x537BAC0")]
	public TransparentProxy()
	{
	}
}
