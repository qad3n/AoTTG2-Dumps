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

[Token(Token = "0x200038D")]
internal class RemoteActivationAttribute : Attribute, IContextAttribute
{
	[Token(Token = "0x4000F1D")]
	[FieldOffset(Offset = "0x10")]
	private IList _contextProperties;

	[Token(Token = "0x6001DC7")]
	[Address(RVA = "0x3B83890", Offset = "0x3B83890", VA = "0x3B83890")]
	public RemoteActivationAttribute(IList contextProperties)
	{
	}

	[Token(Token = "0x6001DC8")]
	[Address(RVA = "0x3B838C0", Offset = "0x3B838C0", VA = "0x3B838C0", Slot = "8")]
	public bool IsContextOK(Context ctx, IConstructionCallMessage ctor)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DC9")]
	[Address(RVA = "0x3B838D0", Offset = "0x3B838D0", VA = "0x3B838D0", Slot = "7")]
	public void GetPropertiesForNewContext(IConstructionCallMessage ctor)
	{
	}
}
