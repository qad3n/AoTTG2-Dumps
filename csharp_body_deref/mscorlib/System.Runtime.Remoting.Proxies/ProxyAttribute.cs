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

[Token(Token = "0x200038A")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Class)]
public class ProxyAttribute : Attribute, IContextAttribute
{
	[Token(Token = "0x6001D5D")]
	[Address(RVA = "0x1A045F0", Offset = "0x1A02BF0", VA = "0x181A045F0", Slot = "9")]
	public virtual MarshalByRefObject CreateInstance(Type serverType)
	{
		return null;
	}

	[Token(Token = "0x6001D5E")]
	[Address(RVA = "0x1A047A0", Offset = "0x1A02DA0", VA = "0x181A047A0", Slot = "10")]
	public virtual RealProxy CreateProxy(ObjRef objRef, Type serverType, object serverObject, Context serverContext)
	{
		return null;
	}

	[Token(Token = "0x6001D5F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	[ComVisible(true)]
	public void GetPropertiesForNewContext(IConstructionCallMessage msg)
	{
	}

	[Token(Token = "0x6001D60")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
	[ComVisible(true)]
	public bool IsContextOK(Context ctx, IConstructionCallMessage msg)
	{
		return default(bool);
	}
}
