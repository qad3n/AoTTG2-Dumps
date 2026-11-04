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
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002264")]
			[Address(RVA = "0x1392600", Offset = "0x1390C00", VA = "0x181392600", Slot = "14")]
			public override StylePropertyId GetValue(ref StylePropertyName container)
			{
				return default(StylePropertyId);
			}

			[Token(Token = "0x6002265")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
			public override void SetValue(ref StylePropertyName container, StylePropertyId value)
			{
			}

			[Token(Token = "0x6002266")]
			[Address(RVA = "0x310DF50", Offset = "0x310C550", VA = "0x18310DF50")]
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
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
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
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6002269")]
			[Address(RVA = "0x8EBCB0", Offset = "0x8EA2B0", VA = "0x1808EBCB0", Slot = "14")]
			public override string GetValue(ref StylePropertyName container)
			{
				return null;
			}

			[Token(Token = "0x600226A")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
			public override void SetValue(ref StylePropertyName container, string value)
			{
			}

			[Token(Token = "0x600226B")]
			[Address(RVA = "0x310F590", Offset = "0x310DB90", VA = "0x18310F590")]
			public NameProperty()
			{
			}
		}

		[Token(Token = "0x6002261")]
		[Address(RVA = "0x310FCB0", Offset = "0x310E2B0", VA = "0x18310FCB0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x17000918")]
	internal readonly StylePropertyId id
	{
		[Token(Token = "0x6002255")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		[CompilerGenerated]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return default(StylePropertyId);
		}
	}

	[Token(Token = "0x17000919")]
	private readonly string name
	{
		[Token(Token = "0x6002256")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002257")]
	[Address(RVA = "0x3116140", Offset = "0x3114740", VA = "0x183116140")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static StylePropertyId StylePropertyIdFromString(string name)
	{
		return default(StylePropertyId);
	}

	[Token(Token = "0x6002258")]
	[Address(RVA = "0x31162B0", Offset = "0x31148B0", VA = "0x1831162B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StylePropertyName(StylePropertyId stylePropertyId)
	{
	}

	[Token(Token = "0x6002259")]
	[Address(RVA = "0x31161E0", Offset = "0x31147E0", VA = "0x1831161E0")]
	public StylePropertyName(string name)
	{
	}

	[Token(Token = "0x600225A")]
	[Address(RVA = "0x3116130", Offset = "0x3114730", VA = "0x183116130")]
	public static bool operator ==(StylePropertyName lhs, StylePropertyName rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600225B")]
	[Address(RVA = "0x31163B0", Offset = "0x31149B0", VA = "0x1831163B0")]
	public static bool operator !=(StylePropertyName lhs, StylePropertyName rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600225C")]
	[Address(RVA = "0x3116370", Offset = "0x3114970", VA = "0x183116370")]
	public static implicit operator StylePropertyName(string name)
	{
		return default(StylePropertyName);
	}

	[Token(Token = "0x600225D")]
	[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600225E")]
	[Address(RVA = "0x31160B0", Offset = "0x31146B0", VA = "0x1831160B0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x600225F")]
	[Address(RVA = "0x3116130", Offset = "0x3114730", VA = "0x183116130", Slot = "4")]
	public bool Equals(StylePropertyName other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002260")]
	[Address(RVA = "0x1B943C0", Offset = "0x1B929C0", VA = "0x181B943C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
