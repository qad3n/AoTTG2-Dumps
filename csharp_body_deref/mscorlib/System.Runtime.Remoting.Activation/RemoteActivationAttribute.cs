// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Activation.RemoteActivationAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.Remoting.Contexts;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x20003BC")]
internal class RemoteActivationAttribute : Attribute, IContextAttribute
{
	[Token(Token = "0x4000F2A")]
	[FieldOffset(Offset = "0x10")]
	private IList _contextProperties;

	[Token(Token = "0x6001E36")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public RemoteActivationAttribute(IList contextProperties)
	{
	}

	[Token(Token = "0x6001E37")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
	public bool IsContextOK(Context ctx, IConstructionCallMessage ctor)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E38")]
	[Address(RVA = "0x1A05FD0", Offset = "0x1A045D0", VA = "0x181A05FD0", Slot = "7")]
	public void GetPropertiesForNewContext(IConstructionCallMessage ctor)
	{
	}
}
