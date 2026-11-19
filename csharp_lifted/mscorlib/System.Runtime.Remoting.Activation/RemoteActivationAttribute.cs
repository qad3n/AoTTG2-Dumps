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

[Token(Token = "0x2000395")]
internal class RemoteActivationAttribute : Attribute, IContextAttribute
{
	[Token(Token = "0x4000E8A")]
	[FieldOffset(Offset = "0x10")]
	private IList _contextProperties;

	[Token(Token = "0x6001E0C")]
	[Address(RVA = "0x538B760", Offset = "0x538A760", VA = "0x538B760")]
	public RemoteActivationAttribute(IList contextProperties)
	{
	}

	[Token(Token = "0x6001E0D")]
	[Address(RVA = "0x538B790", Offset = "0x538A790", VA = "0x538B790", Slot = "8")]
	public bool IsContextOK(Context ctx, IConstructionCallMessage ctor)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E0E")]
	[Address(RVA = "0x538B7A0", Offset = "0x538A7A0", VA = "0x538B7A0", Slot = "7")]
	public void GetPropertiesForNewContext(IConstructionCallMessage ctor)
	{
	}
}
