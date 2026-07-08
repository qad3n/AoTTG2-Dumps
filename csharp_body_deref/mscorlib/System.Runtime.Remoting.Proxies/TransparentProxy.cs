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
		[Address(RVA = "0x4E8C1D0", Offset = "0x4E8C1D0", VA = "0x4E8C1D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000355")]
	private Context TargetContext
	{
		[Token(Token = "0x6001CF4")]
		[Address(RVA = "0x4E8C1F0", Offset = "0x4E8C1F0", VA = "0x4E8C1F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CF2")]
	[Address(RVA = "0x4E8C120", Offset = "0x4E8C120", VA = "0x4E8C120")]
	internal System.RuntimeType GetProxyType()
	{
		return null;
	}

	[Token(Token = "0x6001CF5")]
	[Address(RVA = "0x4E8C210", Offset = "0x4E8C210", VA = "0x4E8C210")]
	private bool InCurrentContext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001CF6")]
	[Address(RVA = "0x4E8C260", Offset = "0x4E8C260", VA = "0x4E8C260")]
	internal object LoadRemoteFieldNew(IntPtr classPtr, IntPtr fieldPtr)
	{
		return null;
	}

	[Token(Token = "0x6001CF7")]
	[Address(RVA = "0x4E8D370", Offset = "0x4E8D370", VA = "0x4E8D370")]
	internal void StoreRemoteField(IntPtr classPtr, IntPtr fieldPtr, object arg)
	{
	}

	[Token(Token = "0x6001CF8")]
	[Address(RVA = "0x4E8D6A0", Offset = "0x4E8D6A0", VA = "0x4E8D6A0")]
	public TransparentProxy()
	{
	}
}
