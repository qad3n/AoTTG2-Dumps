// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.ContainerPropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000017")]
public abstract class ContainerPropertyBag<TContainer> : PropertyBag<TContainer>
{
	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x0")]
	private readonly List<IProperty<TContainer>> m_PropertiesList;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<string, IProperty<TContainer>> m_PropertiesHash;

	[Token(Token = "0x6000048")]
	static ContainerPropertyBag()
	{
	}

	[Token(Token = "0x6000049")]
	protected void AddProperty<TValue>(Property<TContainer, TValue> property)
	{
	}

	[Token(Token = "0x600004A")]
	public bool TryGetProperty(ref TContainer container, string name, out IProperty<TContainer> property)
	{
		return default(bool);
	}

	[Token(Token = "0x600004B")]
	protected ContainerPropertyBag()
	{
	}
}
