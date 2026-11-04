// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Activation.ConstructionLevelActivator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Serializable]
[Token(Token = "0x20003B7")]
internal class ConstructionLevelActivator : IActivator
{
	[Token(Token = "0x17000381")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001E28")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E29")]
	[Address(RVA = "0x19F58A0", Offset = "0x19F3EA0", VA = "0x1819F58A0", Slot = "5")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E2A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ConstructionLevelActivator()
	{
	}
}
