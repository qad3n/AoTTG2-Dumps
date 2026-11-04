// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.PropertyBag
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties.Internal;

namespace Unity.Properties;

[Token(Token = "0x2000040")]
public static class PropertyBag
{
	[Token(Token = "0x60000F0")]
	public static void AcceptWithSpecializedVisitor<TContainer>(IPropertyBag<TContainer> properties, IPropertyBagVisitor visitor, ref TContainer container)
	{
	}

	[Token(Token = "0x60000F1")]
	public static void Register<TContainer>(PropertyBag<TContainer> propertyBag)
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x2FED640", Offset = "0x2FEBC40", VA = "0x182FED640")]
	public static IPropertyBag GetPropertyBag(Type type)
	{
		return null;
	}

	[Token(Token = "0x60000F3")]
	public static IPropertyBag<TContainer> GetPropertyBag<TContainer>()
	{
		return null;
	}

	[Token(Token = "0x60000F4")]
	public static bool TryGetPropertyBagForValue<TValue>(ref TValue value, out IPropertyBag propertyBag)
	{
		return default(bool);
	}
}
[Token(Token = "0x2000041")]
public abstract class PropertyBag<TContainer> : IPropertyBag<TContainer>, IPropertyBag, IPropertyBagRegister, IConstructor<TContainer>, IConstructor
{
	[Token(Token = "0x17000031")]
	private InstantiationKind Unity_002EProperties_002EIConstructor_002EInstantiationKind
	{
		[Token(Token = "0x60000FC")]
		get
		{
			return default(InstantiationKind);
		}
	}

	[Token(Token = "0x17000032")]
	protected virtual InstantiationKind InstantiationKind
	{
		[Token(Token = "0x6000100")]
		[CompilerGenerated]
		get
		{
			return default(InstantiationKind);
		}
	}

	[Token(Token = "0x60000F5")]
	static PropertyBag()
	{
	}

	[Token(Token = "0x60000F6")]
	private void Unity_002EProperties_002EInternal_002EIPropertyBagRegister_002ERegister()
	{
	}

	[Token(Token = "0x60000F7")]
	public void Accept(ITypeVisitor visitor)
	{
	}

	[Token(Token = "0x60000F8")]
	private void Unity_002EProperties_002EIPropertyBag_002EAccept(IPropertyBagVisitor visitor, ref object container)
	{
	}

	[Token(Token = "0x60000F9")]
	private void Unity_002EProperties_002EIPropertyBag_003CTContainer_003E_002EAccept(IPropertyBagVisitor visitor, ref TContainer container)
	{
	}

	[Token(Token = "0x60000FA")]
	private PropertyCollection<TContainer> Unity_002EProperties_002EIPropertyBag_003CTContainer_003E_002EGetProperties()
	{
		return default(PropertyCollection<TContainer>);
	}

	[Token(Token = "0x60000FB")]
	private PropertyCollection<TContainer> Unity_002EProperties_002EIPropertyBag_003CTContainer_003E_002EGetProperties(ref TContainer container)
	{
		return default(PropertyCollection<TContainer>);
	}

	[Token(Token = "0x60000FD")]
	private TContainer Unity_002EProperties_002EIConstructor_003CTContainer_003E_002EInstantiate()
	{
		return (TContainer)null;
	}

	[Token(Token = "0x60000FE")]
	public abstract PropertyCollection<TContainer> GetProperties();

	[Token(Token = "0x60000FF")]
	public abstract PropertyCollection<TContainer> GetProperties(ref TContainer container);

	[Token(Token = "0x6000101")]
	protected virtual TContainer Instantiate()
	{
		return (TContainer)null;
	}

	[Token(Token = "0x6000102")]
	protected PropertyBag()
	{
	}
}
