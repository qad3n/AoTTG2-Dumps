using System.Collections;
using System.Runtime.Remoting.Contexts;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x200038D")]
internal class RemoteActivationAttribute : Attribute, IContextAttribute
{
	[Token(Token = "0x4000F1D")]
	[FieldOffset(Offset = "0x10")]
	private IList _contextProperties;

	[Token(Token = "0x6001DC7")]
	[Address(RVA = "0x4E9DD70", Offset = "0x4E9DD70", VA = "0x4E9DD70")]
	public RemoteActivationAttribute(IList contextProperties)
	{
	}

	[Token(Token = "0x6001DC8")]
	[Address(RVA = "0x4E9DDA0", Offset = "0x4E9DDA0", VA = "0x4E9DDA0", Slot = "8")]
	public bool IsContextOK(Context ctx, IConstructionCallMessage ctor)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DC9")]
	[Address(RVA = "0x4E9DDB0", Offset = "0x4E9DDB0", VA = "0x4E9DDB0", Slot = "7")]
	public void GetPropertiesForNewContext(IConstructionCallMessage ctor)
	{
	}
}
