// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MaterialDefinition
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000401")]
public struct MaterialDefinition : IEquatable<MaterialDefinition>
{
	[Token(Token = "0x2000402")]
	internal class PropertyBag : ContainerPropertyBag<MaterialDefinition>
	{
		[Token(Token = "0x2000403")]
		private class MaterialProperty : Property<MaterialDefinition, Material>
		{
			[Token(Token = "0x170008AE")]
			public override string Name
			{
				[Token(Token = "0x6001F53")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170008AF")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6001F54")]
				[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001F55")]
			[Address(RVA = "0x30BB710", Offset = "0x30B9D10", VA = "0x1830BB710", Slot = "14")]
			public override Material GetValue(ref MaterialDefinition container)
			{
				return null;
			}

			[Token(Token = "0x6001F56")]
			[Address(RVA = "0x310F510", Offset = "0x310DB10", VA = "0x18310F510", Slot = "15")]
			public override void SetValue(ref MaterialDefinition container, Material value)
			{
			}

			[Token(Token = "0x6001F57")]
			[Address(RVA = "0x310F520", Offset = "0x310DB20", VA = "0x18310F520")]
			public MaterialProperty()
			{
			}
		}

		[Token(Token = "0x6001F52")]
		[Address(RVA = "0x310FBB0", Offset = "0x310E1B0", VA = "0x18310FBB0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000D9F")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Material m_Material;

	[Token(Token = "0x4000DA0")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	[SerializeField]
	internal List<MaterialPropertyValue> propertyValues;

	[Token(Token = "0x170008AD")]
	public Material material
	{
		[Token(Token = "0x6001F45")]
		[Address(RVA = "0x737B90", Offset = "0x736190", VA = "0x180737B90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F46")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		set
		{
		}
	}

	[Token(Token = "0x6001F47")]
	[Address(RVA = "0x310EC70", Offset = "0x310D270", VA = "0x18310EC70")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal MaterialDefinition(MaterialDefinition other)
	{
	}

	[Token(Token = "0x6001F48")]
	[Address(RVA = "0x30BB0F0", Offset = "0x30B96F0", VA = "0x1830BB0F0")]
	public static MaterialDefinition FromMaterial(Material m)
	{
		return default(MaterialDefinition);
	}

	[Token(Token = "0x6001F49")]
	[Address(RVA = "0x310E7A0", Offset = "0x310CDA0", VA = "0x18310E7A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
	internal static MaterialDefinition FromObject(object obj)
	{
		return default(MaterialDefinition);
	}

	[Token(Token = "0x6001F4A")]
	[Address(RVA = "0x310E3E0", Offset = "0x310C9E0", VA = "0x18310E3E0")]
	internal MaterialPropertyBlock BuildPropertyBlock()
	{
		return null;
	}

	[Token(Token = "0x6001F4B")]
	[Address(RVA = "0x310ED20", Offset = "0x310D320", VA = "0x18310ED20")]
	public static bool operator ==(MaterialDefinition lhs, MaterialDefinition rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F4C")]
	[Address(RVA = "0x310EF20", Offset = "0x310D520", VA = "0x18310EF20")]
	public static bool operator !=(MaterialDefinition lhs, MaterialDefinition rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F4D")]
	[Address(RVA = "0x30BB0F0", Offset = "0x30B96F0", VA = "0x1830BB0F0")]
	public static implicit operator MaterialDefinition(Material m)
	{
		return default(MaterialDefinition);
	}

	[Token(Token = "0x6001F4E")]
	[Address(RVA = "0x310E6D0", Offset = "0x310CCD0", VA = "0x18310E6D0", Slot = "4")]
	public bool Equals(MaterialDefinition other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F4F")]
	[Address(RVA = "0x310E700", Offset = "0x310CD00", VA = "0x18310E700", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F50")]
	[Address(RVA = "0x310E8F0", Offset = "0x310CEF0", VA = "0x18310E8F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F51")]
	[Address(RVA = "0x310EAC0", Offset = "0x310D0C0", VA = "0x18310EAC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
