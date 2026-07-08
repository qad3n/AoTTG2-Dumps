using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000454")]
public struct CreationContext : IEquatable<CreationContext>
{
	[Token(Token = "0x2000455")]
	internal struct AttributeOverrideRange
	{
		[Token(Token = "0x4000CEE")]
		[FieldOffset(Offset = "0x0")]
		internal readonly VisualTreeAsset sourceAsset;

		[Token(Token = "0x4000CEF")]
		[FieldOffset(Offset = "0x8")]
		internal readonly List<TemplateAsset.AttributeOverride> attributeOverrides;

		[Token(Token = "0x6001B6D")]
		[Address(RVA = "0x4C4D0D0", Offset = "0x4C4D0D0", VA = "0x4C4D0D0")]
		public AttributeOverrideRange(VisualTreeAsset sourceAsset, List<TemplateAsset.AttributeOverride> attributeOverrides)
		{
		}
	}

	[Token(Token = "0x4000CE9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly CreationContext Default;

	[Token(Token = "0x17000740")]
	public VisualElement target
	{
		[Token(Token = "0x6001B5F")]
		[Address(RVA = "0x4C4CD00", Offset = "0x4C4CD00", VA = "0x4C4CD00")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6001B60")]
		[Address(RVA = "0x4C4CD10", Offset = "0x4C4CD10", VA = "0x4C4CD10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000741")]
	public VisualTreeAsset visualTreeAsset
	{
		[Token(Token = "0x6001B61")]
		[Address(RVA = "0x4C4CD20", Offset = "0x4C4CD20", VA = "0x4C4CD20")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6001B62")]
		[Address(RVA = "0x4C4CD30", Offset = "0x4C4CD30", VA = "0x4C4CD30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000742")]
	public Dictionary<string, VisualElement> slotInsertionPoints
	{
		[Token(Token = "0x6001B63")]
		[Address(RVA = "0x4C4CD40", Offset = "0x4C4CD40", VA = "0x4C4CD40")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6001B64")]
		[Address(RVA = "0x4C4CD50", Offset = "0x4C4CD50", VA = "0x4C4CD50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000743")]
	internal List<AttributeOverrideRange> attributeOverrides
	{
		[Token(Token = "0x6001B65")]
		[Address(RVA = "0x4C4CD60", Offset = "0x4C4CD60", VA = "0x4C4CD60")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6001B66")]
		[Address(RVA = "0x4C4CD70", Offset = "0x4C4CD70", VA = "0x4C4CD70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001B67")]
	[Address(RVA = "0x4C48590", Offset = "0x4C48590", VA = "0x4C48590")]
	internal CreationContext(Dictionary<string, VisualElement> slotInsertionPoints, VisualTreeAsset vta, VisualElement target)
	{
	}

	[Token(Token = "0x6001B68")]
	[Address(RVA = "0x4C498D0", Offset = "0x4C498D0", VA = "0x4C498D0")]
	internal CreationContext(Dictionary<string, VisualElement> slotInsertionPoints, List<AttributeOverrideRange> attributeOverrides, VisualTreeAsset vta, VisualElement target)
	{
	}

	[Token(Token = "0x6001B69")]
	[Address(RVA = "0x4C4CD80", Offset = "0x4C4CD80", VA = "0x4C4CD80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B6A")]
	[Address(RVA = "0x4C4CE20", Offset = "0x4C4CE20", VA = "0x4C4CE20", Slot = "4")]
	public bool Equals(CreationContext other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B6B")]
	[Address(RVA = "0x4C4CF80", Offset = "0x4C4CF80", VA = "0x4C4CF80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
