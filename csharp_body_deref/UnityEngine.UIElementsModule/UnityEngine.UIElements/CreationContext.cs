// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CreationContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F74A00", Offset = "0x4F74A00", VA = "0x4F74A00")]
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
		[Address(RVA = "0x4F74630", Offset = "0x4F74630", VA = "0x4F74630")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6001B60")]
		[Address(RVA = "0x4F74640", Offset = "0x4F74640", VA = "0x4F74640")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000741")]
	public VisualTreeAsset visualTreeAsset
	{
		[Token(Token = "0x6001B61")]
		[Address(RVA = "0x4F74650", Offset = "0x4F74650", VA = "0x4F74650")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6001B62")]
		[Address(RVA = "0x4F74660", Offset = "0x4F74660", VA = "0x4F74660")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000742")]
	public Dictionary<string, VisualElement> slotInsertionPoints
	{
		[Token(Token = "0x6001B63")]
		[Address(RVA = "0x4F74670", Offset = "0x4F74670", VA = "0x4F74670")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6001B64")]
		[Address(RVA = "0x4F74680", Offset = "0x4F74680", VA = "0x4F74680")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000743")]
	internal List<AttributeOverrideRange> attributeOverrides
	{
		[Token(Token = "0x6001B65")]
		[Address(RVA = "0x4F74690", Offset = "0x4F74690", VA = "0x4F74690")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6001B66")]
		[Address(RVA = "0x4F746A0", Offset = "0x4F746A0", VA = "0x4F746A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001B67")]
	[Address(RVA = "0x4F6FEC0", Offset = "0x4F6FEC0", VA = "0x4F6FEC0")]
	internal CreationContext(Dictionary<string, VisualElement> slotInsertionPoints, VisualTreeAsset vta, VisualElement target)
	{
	}

	[Token(Token = "0x6001B68")]
	[Address(RVA = "0x4F71200", Offset = "0x4F71200", VA = "0x4F71200")]
	internal CreationContext(Dictionary<string, VisualElement> slotInsertionPoints, List<AttributeOverrideRange> attributeOverrides, VisualTreeAsset vta, VisualElement target)
	{
	}

	[Token(Token = "0x6001B69")]
	[Address(RVA = "0x4F746B0", Offset = "0x4F746B0", VA = "0x4F746B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B6A")]
	[Address(RVA = "0x4F74750", Offset = "0x4F74750", VA = "0x4F74750", Slot = "4")]
	public bool Equals(CreationContext other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B6B")]
	[Address(RVA = "0x4F748B0", Offset = "0x4F748B0", VA = "0x4F748B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
