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
[Token(Token = "0x2000388")]
internal class ConstructionLevelActivator : IActivator
{
	[Token(Token = "0x1700037F")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001DB9")]
		[Address(RVA = "0x3B833F0", Offset = "0x3B833F0", VA = "0x3B833F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DBA")]
	[Address(RVA = "0x3B83400", Offset = "0x3B83400", VA = "0x3B83400", Slot = "5")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001DBB")]
	[Address(RVA = "0x3B826B0", Offset = "0x3B826B0", VA = "0x3B826B0")]
	public ConstructionLevelActivator()
	{
	}
}
