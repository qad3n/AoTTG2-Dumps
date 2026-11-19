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

[Token(Token = "0x2000363")]
[AttributeUsage(AttributeTargets.Class)]
[ComVisible(true)]
public class ProxyAttribute : Attribute, IContextAttribute
{
	[Token(Token = "0x6001D33")]
	[Address(RVA = "0x537A380", Offset = "0x5379380", VA = "0x537A380", Slot = "9")]
	public virtual MarshalByRefObject CreateInstance(Type serverType)
	{
		return null;
	}

	[Token(Token = "0x6001D34")]
	[Address(RVA = "0x537A4D0", Offset = "0x53794D0", VA = "0x537A4D0", Slot = "10")]
	public virtual RealProxy CreateProxy(ObjRef objRef, Type serverType, object serverObject, Context serverContext)
	{
		return null;
	}

	[Token(Token = "0x6001D35")]
	[Address(RVA = "0x537A530", Offset = "0x5379530", VA = "0x537A530", Slot = "7")]
	[ComVisible(true)]
	public void GetPropertiesForNewContext(IConstructionCallMessage msg)
	{
	}

	[Token(Token = "0x6001D36")]
	[Address(RVA = "0x537A540", Offset = "0x5379540", VA = "0x537A540", Slot = "8")]
	[ComVisible(true)]
	public bool IsContextOK(Context ctx, IConstructionCallMessage msg)
	{
		return default(bool);
	}
}
