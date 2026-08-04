// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.PropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties.Internal;

namespace Unity.Properties;

[Token(Token = "0x2000023")]
public static class PropertyBag
{
	[Token(Token = "0x6000067")]
	public static void Register<TContainer>(PropertyBag<TContainer> propertyBag)
	{
	}

	[Token(Token = "0x6000068")]
	public static void RegisterList<TElement>()
	{
	}

	[Token(Token = "0x6000069")]
	public static void RegisterList<TContainer, TElement>()
	{
	}
}
[Token(Token = "0x2000024")]
public abstract class PropertyBag<TContainer> : IPropertyBag<TContainer>, IPropertyBag, IPropertyBagRegister, IConstructor<TContainer>, IConstructor
{
	[Token(Token = "0x1700001B")]
	private InstantiationKind Unity_002EProperties_002EIConstructor_002EInstantiationKind
	{
		[Token(Token = "0x600006D")]
		get
		{
			return default(InstantiationKind);
		}
	}

	[Token(Token = "0x1700001C")]
	protected virtual InstantiationKind InstantiationKind
	{
		[Token(Token = "0x600006F")]
		[CompilerGenerated]
		get
		{
			return default(InstantiationKind);
		}
	}

	[Token(Token = "0x600006A")]
	static PropertyBag()
	{
	}

	[Token(Token = "0x600006B")]
	private void Unity_002EProperties_002EInternal_002EIPropertyBagRegister_002ERegister()
	{
	}

	[Token(Token = "0x600006C")]
	public void Accept(ITypeVisitor visitor)
	{
	}

	[Token(Token = "0x600006E")]
	private TContainer Unity_002EProperties_002EIConstructor_003CTContainer_003E_002EInstantiate()
	{
		return (TContainer)null;
	}

	[Token(Token = "0x6000070")]
	protected virtual TContainer Instantiate()
	{
		return (TContainer)null;
	}

	[Token(Token = "0x6000071")]
	protected PropertyBag()
	{
	}
}
