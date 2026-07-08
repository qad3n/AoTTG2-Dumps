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
				[Address(RVA = "0x4D8F720", Offset = "0x4D8F720", VA = "0x4D8F720", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6001826")]
			[Address(RVA = "0x4D8F660", Offset = "0x4D8F660", VA = "0x4D8F660")]
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
				[Address(RVA = "0x4D8F730", Offset = "0x4D8F730", VA = "0x4D8F730", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6001828")]
			[Address(RVA = "0x4D8F6C0", Offset = "0x4D8F6C0", VA = "0x4D8F6C0")]
			public NameProperty()
			{
			}
		}

		[Token(Token = "0x6001824")]
		[Address(RVA = "0x4D8F4D0", Offset = "0x4D8F4D0", VA = "0x4D8F4D0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x17000675")]
	internal readonly StylePropertyId id
	{
		[Token(Token = "0x6001818")]
		[Address(RVA = "0x4D8F1A0", Offset = "0x4D8F1A0", VA = "0x4D8F1A0")]
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
		[Address(RVA = "0x4D8F1B0", Offset = "0x4D8F1B0", VA = "0x4D8F1B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600181A")]
	[Address(RVA = "0x4D8F1C0", Offset = "0x4D8F1C0", VA = "0x4D8F1C0")]
	internal static StylePropertyId StylePropertyIdFromString(string name)
	{
		return default(StylePropertyId);
	}

	[Token(Token = "0x600181B")]
	[Address(RVA = "0x4D8F260", Offset = "0x4D8F260", VA = "0x4D8F260")]
	internal StylePropertyName(StylePropertyId stylePropertyId)
	{
	}

	[Token(Token = "0x600181C")]
	[Address(RVA = "0x4D8F320", Offset = "0x4D8F320", VA = "0x4D8F320")]
	public StylePropertyName(string name)
	{
	}

	[Token(Token = "0x600181D")]
	[Address(RVA = "0x4D8F3F0", Offset = "0x4D8F3F0", VA = "0x4D8F3F0")]
	public static bool operator ==(StylePropertyName lhs, StylePropertyName rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600181E")]
	[Address(RVA = "0x4D8F400", Offset = "0x4D8F400", VA = "0x4D8F400")]
	public static bool operator !=(StylePropertyName lhs, StylePropertyName rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600181F")]
	[Address(RVA = "0x4D8F410", Offset = "0x4D8F410", VA = "0x4D8F410")]
	public static implicit operator StylePropertyName(string name)
	{
		return default(StylePropertyName);
	}

	[Token(Token = "0x6001820")]
	[Address(RVA = "0x4D8F440", Offset = "0x4D8F440", VA = "0x4D8F440", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001821")]
	[Address(RVA = "0x4D8F450", Offset = "0x4D8F450", VA = "0x4D8F450", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001822")]
	[Address(RVA = "0x4D8F4B0", Offset = "0x4D8F4B0", VA = "0x4D8F4B0", Slot = "4")]
	public bool Equals(StylePropertyName other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001823")]
	[Address(RVA = "0x4D8F4C0", Offset = "0x4D8F4C0", VA = "0x4D8F4C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
