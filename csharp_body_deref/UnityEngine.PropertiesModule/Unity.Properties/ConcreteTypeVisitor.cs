// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.ConcreteTypeVisitor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000048")]
public abstract class ConcreteTypeVisitor : IPropertyBagVisitor
{
	[Token(Token = "0x600012A")]
	protected abstract void VisitContainer<TContainer>(ref TContainer container);

	[Token(Token = "0x600012B")]
	private void Unity_002EProperties_002EIPropertyBagVisitor_002EVisit<TContainer>(IPropertyBag<TContainer> properties, ref TContainer container)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected ConcreteTypeVisitor()
	{
	}
}
