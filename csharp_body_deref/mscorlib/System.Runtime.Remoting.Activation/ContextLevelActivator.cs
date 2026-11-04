// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Activation.ContextLevelActivator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Serializable]
[Token(Token = "0x20003B8")]
internal class ContextLevelActivator : IActivator
{
	[Token(Token = "0x4000F29")]
	[FieldOffset(Offset = "0x10")]
	private IActivator m_NextActivator;

	[Token(Token = "0x17000382")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001E2C")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E2B")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public ContextLevelActivator(IActivator next)
	{
	}

	[Token(Token = "0x6001E2D")]
	[Address(RVA = "0x19F5B60", Offset = "0x19F4160", VA = "0x1819F5B60", Slot = "5")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage ctorCall)
	{
		return null;
	}
}
