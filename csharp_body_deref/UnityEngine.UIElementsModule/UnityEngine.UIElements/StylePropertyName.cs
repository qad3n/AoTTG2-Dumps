// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StylePropertyName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003C7")]
public struct StylePropertyName : IEquatable<StylePropertyName>
{
	[Token(Token = "0x20003C8")]
	internal class PropertyBag : ContainerPropertyBag<StylePropertyName>
	{
		[Token(Token = "0x20003C9")]
		private class IdProperty : Property<StylePropertyName, StylePropertyId>
		{
			[Token(Token = "0x4000B46")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000677")]
			public override string Name
			{
				[Token(Token = "0x6001825")]
				[Address(RVA = "0x50B7050", Offset = "0x50B7050", VA = "0x50B7050", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6001826")]
			[Address(RVA = "0x50B6F90", Offset = "0x50B6F90", VA = "0x50B6F90")]
			public IdProperty()
			{
			}
		}

		[Token(Token = "0x20003CA")]
		private class NameProperty : Property<StylePropertyName, string>
		{
			[Token(Token = "0x4000B48")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x17000678")]
			public override string Name
			{
				[Token(Token = "0x6001827")]
				[Address(RVA = "0x50B7060", Offset = "0x50B7060", VA = "0x50B7060", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6001828")]
			[Address(RVA = "0x50B6FF0", Offset = "0x50B6FF0", VA = "0x50B6FF0")]
			public NameProperty()
			{
			}
		}

		[Token(Token = "0x6001824")]
		[Address(RVA = "0x50B6E00", Offset = "0x50B6E00", VA = "0x50B6E00")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x17000675")]
	internal readonly StylePropertyId id
	{
		[Token(Token = "0x6001818")]
		[Address(RVA = "0x50B6AD0", Offset = "0x50B6AD0", VA = "0x50B6AD0")]
		[CompilerGenerated]
		get
		{
			return default(StylePropertyId);
		}
	}

	[Token(Token = "0x17000676")]
	private readonly string name
	{
		[Token(Token = "0x6001819")]
		[Address(RVA = "0x50B6AE0", Offset = "0x50B6AE0", VA = "0x50B6AE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600181A")]
	[Address(RVA = "0x50B6AF0", Offset = "0x50B6AF0", VA = "0x50B6AF0")]
	internal static StylePropertyId StylePropertyIdFromString(string name)
	{
		return default(StylePropertyId);
	}

	[Token(Token = "0x600181B")]
	[Address(RVA = "0x50B6B90", Offset = "0x50B6B90", VA = "0x50B6B90")]
	internal StylePropertyName(StylePropertyId stylePropertyId)
	{
	}

	[Token(Token = "0x600181C")]
	[Address(RVA = "0x50B6C50", Offset = "0x50B6C50", VA = "0x50B6C50")]
	public StylePropertyName(string name)
	{
	}

	[Token(Token = "0x600181D")]
	[Address(RVA = "0x50B6D20", Offset = "0x50B6D20", VA = "0x50B6D20")]
	public static bool operator ==(StylePropertyName lhs, StylePropertyName rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600181E")]
	[Address(RVA = "0x50B6D30", Offset = "0x50B6D30", VA = "0x50B6D30")]
	public static bool operator !=(StylePropertyName lhs, StylePropertyName rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600181F")]
	[Address(RVA = "0x50B6D40", Offset = "0x50B6D40", VA = "0x50B6D40")]
	public static implicit operator StylePropertyName(string name)
	{
		return default(StylePropertyName);
	}

	[Token(Token = "0x6001820")]
	[Address(RVA = "0x50B6D70", Offset = "0x50B6D70", VA = "0x50B6D70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001821")]
	[Address(RVA = "0x50B6D80", Offset = "0x50B6D80", VA = "0x50B6D80", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001822")]
	[Address(RVA = "0x50B6DE0", Offset = "0x50B6DE0", VA = "0x50B6DE0", Slot = "4")]
	public bool Equals(StylePropertyName other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001823")]
	[Address(RVA = "0x50B6DF0", Offset = "0x50B6DF0", VA = "0x50B6DF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
