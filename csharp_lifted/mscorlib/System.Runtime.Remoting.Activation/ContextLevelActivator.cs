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
[Token(Token = "0x2000391")]
internal class ContextLevelActivator : IActivator
{
	[Token(Token = "0x4000E89")]
	[FieldOffset(Offset = "0x10")]
	private IActivator m_NextActivator;

	[Token(Token = "0x17000381")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001E02")]
		[Address(RVA = "0x538B3D0", Offset = "0x538A3D0", VA = "0x538B3D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E01")]
	[Address(RVA = "0x538A7D0", Offset = "0x53897D0", VA = "0x538A7D0")]
	public ContextLevelActivator(IActivator next)
	{
	}

	[Token(Token = "0x6001E03")]
	[Address(RVA = "0x538B3E0", Offset = "0x538A3E0", VA = "0x538B3E0", Slot = "5")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage ctorCall)
	{
		return null;
	}
}
