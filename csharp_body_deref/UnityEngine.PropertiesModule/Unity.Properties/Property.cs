using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Properties.Internal;

namespace Unity.Properties;

[Token(Token = "0x2000009")]
public abstract class Property<TContainer, TValue> : IProperty<TContainer>, IProperty, IAttributes
{
	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x0")]
	private List<Attribute> m_Attributes;

	[Token(Token = "0x17000003")]
	public abstract string Name
	{
		[Token(Token = "0x600000C")]
		get;
	}

	[Token(Token = "0x600000D")]
	public Type DeclaredValueType()
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	protected void AddAttribute(Attribute attribute)
	{
	}

	[Token(Token = "0x600000F")]
	protected void AddAttributes(IEnumerable<Attribute> attributes)
	{
	}

	[Token(Token = "0x6000010")]
	private void Unity_002EProperties_002EInternal_002EIAttributes_002EAddAttribute(Attribute attribute)
	{
	}

	[Token(Token = "0x6000011")]
	private void Unity_002EProperties_002EInternal_002EIAttributes_002EAddAttributes(IEnumerable<Attribute> attributes)
	{
	}

	[Token(Token = "0x6000012")]
	public bool HasAttribute<TAttribute>() where TAttribute : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6000013")]
	public TAttribute GetAttribute<TAttribute>() where TAttribute : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000014")]
	protected Property()
	{
	}
}
