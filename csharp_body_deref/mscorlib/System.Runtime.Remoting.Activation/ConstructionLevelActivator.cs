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
[Token(Token = "0x2000390")]
internal class ConstructionLevelActivator : IActivator
{
	[Token(Token = "0x17000380")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001DFE")]
		[Address(RVA = "0x538B2B0", Offset = "0x538A2B0", VA = "0x538B2B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DFF")]
	[Address(RVA = "0x538B2C0", Offset = "0x538A2C0", VA = "0x538B2C0", Slot = "5")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E00")]
	[Address(RVA = "0x538A5B0", Offset = "0x53895B0", VA = "0x538A5B0")]
	public ConstructionLevelActivator()
	{
	}
}
