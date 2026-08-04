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
[Token(Token = "0x2000389")]
internal class ContextLevelActivator : IActivator
{
	[Token(Token = "0x4000F1C")]
	[FieldOffset(Offset = "0x10")]
	private IActivator m_NextActivator;

	[Token(Token = "0x17000380")]
	public IActivator NextActivator
	{
		[Token(Token = "0x6001DBD")]
		[Address(RVA = "0x3B83510", Offset = "0x3B83510", VA = "0x3B83510", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DBC")]
	[Address(RVA = "0x3B82900", Offset = "0x3B82900", VA = "0x3B82900")]
	public ContextLevelActivator(IActivator next)
	{
	}

	[Token(Token = "0x6001DBE")]
	[Address(RVA = "0x3B83520", Offset = "0x3B83520", VA = "0x3B83520", Slot = "5")]
	public IConstructionReturnMessage Activate(IConstructionCallMessage ctorCall)
	{
		return null;
	}
}
