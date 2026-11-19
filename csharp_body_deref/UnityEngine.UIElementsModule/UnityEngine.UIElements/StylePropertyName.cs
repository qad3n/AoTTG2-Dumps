// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StylePropertyName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000470")]
public struct StylePropertyName : IEquatable<StylePropertyName>
{
	[Token(Token = "0x2000471")]
	internal class PropertyBag : ContainerPropertyBag<StylePropertyName>
	{
		[Token(Token = "0x2000472")]
		private class IdProperty : Property<StylePropertyName, StylePropertyId>
		{
			[Token(Token = "0x1700091A")]
			public override string Name
			{
				[Token(Token = "0x6002262")]
				[Address(RVA = "0x6B1ED30", Offset = "0x6B1DD30", VA = "0x6B1ED30", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700091B")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6002263")]
				[Address(RVA = "0x6B1ED40", Offset = "0x6B1DD40", VA = "0x6B1ED40", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002264")]
			[Address(RVA = "0x6B1ED50", Offset = "0x6B1DD50", VA = "0x6B1ED50", Slot = "14")]
			public override StylePropertyId GetValue(ref StylePropertyName container)
			{
				return default(StylePropertyId);
			}

			[Token(Token = "0x6002265")]
			[Address(RVA = "0x6B1ED60", Offset = "0x6B1DD60", VA = "0x6B1ED60", Slot = "15")]
			public override void SetValue(ref StylePropertyName container, StylePropertyId value)
			{
			}

			[Token(Token = "0x6002266")]
			[Address(RVA = "0x6B1EC70", Offset = "0x6B1DC70", VA = "0x6B1EC70")]
			public IdProperty()
			{
			}
		}

		[Token(Token = "0x2000473")]
		private class NameProperty : Property<StylePropertyName, string>
		{
			[Token(Token = "0x1700091C")]
			public override string Name
			{
				[Token(Token = "0x6002267")]
				[Address(RVA = "0x6B1ED70", Offset = "0x6B1DD70", VA = "0x6B1ED70", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x1700091D")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6002268")]
				[Address(RVA = "0x6B1ED80", Offset = "0x6B1DD80", VA = "0x6B1ED80", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002269")]
			[Address(RVA = "0x6B1ED90", Offset = "0x6B1DD90", VA = "0x6B1ED90", Slot = "14")]
			public override string GetValue(ref StylePropertyName container)
			{
				return null;
			}

			[Token(Token = "0x600226A")]
			[Address(RVA = "0x6B1EDA0", Offset = "0x6B1DDA0", VA = "0x6B1EDA0", Slot = "15")]
			public override void SetValue(ref StylePropertyName container, string value)
			{
			}

			[Token(Token = "0x600226B")]
			[Address(RVA = "0x6B1ECD0", Offset = "0x6B1DCD0", VA = "0x6B1ECD0")]
			public NameProperty()
			{
			}
		}

		[Token(Token = "0x6002261")]
		[Address(RVA = "0x6B1EAD0", Offset = "0x6B1DAD0", VA = "0x6B1EAD0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x17000918")]
	internal readonly StylePropertyId id
	{
		[Token(Token = "0x6002255")]
		[Address(RVA = "0x6B1E7A0", Offset = "0x6B1D7A0", VA = "0x6B1E7A0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		[CompilerGenerated]
		get
		{
			return default(StylePropertyId);
		}
	}

	[Token(Token = "0x17000919")]
	private readonly string name
	{
		[Token(Token = "0x6002256")]
		[Address(RVA = "0x6B1E7B0", Offset = "0x6B1D7B0", VA = "0x6B1E7B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002257")]
	[Address(RVA = "0x6B1E7C0", Offset = "0x6B1D7C0", VA = "0x6B1E7C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static StylePropertyId StylePropertyIdFromString(string name)
	{
		return default(StylePropertyId);
	}

	[Token(Token = "0x6002258")]
	[Address(RVA = "0x6B1E860", Offset = "0x6B1D860", VA = "0x6B1E860")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StylePropertyName(StylePropertyId stylePropertyId)
	{
	}

	[Token(Token = "0x6002259")]
	[Address(RVA = "0x6B1E920", Offset = "0x6B1D920", VA = "0x6B1E920")]
	public StylePropertyName(string name)
	{
	}

	[Token(Token = "0x600225A")]
	[Address(RVA = "0x6B1E9F0", Offset = "0x6B1D9F0", VA = "0x6B1E9F0")]
	public static bool operator ==(StylePropertyName lhs, StylePropertyName rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600225B")]
	[Address(RVA = "0x6B1EA00", Offset = "0x6B1DA00", VA = "0x6B1EA00")]
	public static bool operator !=(StylePropertyName lhs, StylePropertyName rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600225C")]
	[Address(RVA = "0x6B1EA10", Offset = "0x6B1DA10", VA = "0x6B1EA10")]
	public static implicit operator StylePropertyName(string name)
	{
		return default(StylePropertyName);
	}

	[Token(Token = "0x600225D")]
	[Address(RVA = "0x6B1EA40", Offset = "0x6B1DA40", VA = "0x6B1EA40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600225E")]
	[Address(RVA = "0x6B1EA50", Offset = "0x6B1DA50", VA = "0x6B1EA50", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x600225F")]
	[Address(RVA = "0x6B1EAB0", Offset = "0x6B1DAB0", VA = "0x6B1EAB0", Slot = "4")]
	public bool Equals(StylePropertyName other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002260")]
	[Address(RVA = "0x6B1EAC0", Offset = "0x6B1DAC0", VA = "0x6B1EAC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
