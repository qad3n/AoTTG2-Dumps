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
	[Address(RVA = "0x4E8BF50", Offset = "0x4E8BF50", VA = "0x4E8BF50", Slot = "9")]
	public virtual MarshalByRefObject CreateInstance(Type serverType)
	{
		return null;
	}

	[Token(Token = "0x6001CEF")]
	[Address(RVA = "0x4E8C0A0", Offset = "0x4E8C0A0", VA = "0x4E8C0A0", Slot = "10")]
	public virtual RealProxy CreateProxy(ObjRef objRef, Type serverType, object serverObject, Context serverContext)
	{
		return null;
	}

	[Token(Token = "0x6001CF0")]
	[Address(RVA = "0x4E8C100", Offset = "0x4E8C100", VA = "0x4E8C100", Slot = "7")]
	[ComVisible(true)]
	public void GetPropertiesForNewContext(IConstructionCallMessage msg)
	{
	}

	[Token(Token = "0x6001CF1")]
	[Address(RVA = "0x4E8C110", Offset = "0x4E8C110", VA = "0x4E8C110", Slot = "8")]
	[ComVisible(true)]
	public bool IsContextOK(Context ctx, IConstructionCallMessage msg)
	{
		return default(bool);
	}
}
