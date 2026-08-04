// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Proxies.ProxyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Activation;
using System.Runtime.Remoting.Contexts;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Proxies;

[Token(Token = "0x200035B")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Class)]
public class ProxyAttribute : Attribute, IContextAttribute
{
	[Token(Token = "0x6001CEE")]
	[Address(RVA = "0x3B71A70", Offset = "0x3B71A70", VA = "0x3B71A70", Slot = "9")]
	public virtual MarshalByRefObject CreateInstance(Type serverType)
	{
		return null;
	}

	[Token(Token = "0x6001CEF")]
	[Address(RVA = "0x3B71BC0", Offset = "0x3B71BC0", VA = "0x3B71BC0", Slot = "10")]
	public virtual RealProxy CreateProxy(ObjRef objRef, Type serverType, object serverObject, Context serverContext)
	{
		return null;
	}

	[Token(Token = "0x6001CF0")]
	[Address(RVA = "0x3B71C20", Offset = "0x3B71C20", VA = "0x3B71C20", Slot = "7")]
	[ComVisible(true)]
	public void GetPropertiesForNewContext(IConstructionCallMessage msg)
	{
	}

	[Token(Token = "0x6001CF1")]
	[Address(RVA = "0x3B71C30", Offset = "0x3B71C30", VA = "0x3B71C30", Slot = "8")]
	[ComVisible(true)]
	public bool IsContextOK(Context ctx, IConstructionCallMessage msg)
	{
		return default(bool);
	}
}
