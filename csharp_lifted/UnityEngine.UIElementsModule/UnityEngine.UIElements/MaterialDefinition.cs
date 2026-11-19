// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MaterialDefinition
// Update status: unchanged since the previous dump
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
[Token(Token = "0x20003FF")]
public struct MaterialDefinition : IEquatable<MaterialDefinition>
{
	[Token(Token = "0x2000400")]
	internal class PropertyBag : ContainerPropertyBag<MaterialDefinition>
	{
		[Token(Token = "0x2000401")]
		private class MaterialProperty : Property<MaterialDefinition, Material>
		{
			[Token(Token = "0x170008AE")]
			public override string Name
			{
				[Token(Token = "0x6001F4B")]
				[Address(RVA = "0x6B10250", Offset = "0x6B0F250", VA = "0x6B10250", Slot = "12")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x170008AF")]
			public override bool IsReadOnly
			{
				[Token(Token = "0x6001F4C")]
				[Address(RVA = "0x6B10260", Offset = "0x6B0F260", VA = "0x6B10260", Slot = "13")]
				[CompilerGenerated]
				get
				{
					return default(bool);
				}
			}

			[Token(Token = "0x6001F4D")]
			[Address(RVA = "0x6B10270", Offset = "0x6B0F270", VA = "0x6B10270", Slot = "14")]
			public override Material GetValue(ref MaterialDefinition container)
			{
				return null;
			}

			[Token(Token = "0x6001F4E")]
			[Address(RVA = "0x6B10280", Offset = "0x6B0F280", VA = "0x6B10280", Slot = "15")]
			public override void SetValue(ref MaterialDefinition container, Material value)
			{
			}

			[Token(Token = "0x6001F4F")]
			[Address(RVA = "0x6B101F0", Offset = "0x6B0F1F0", VA = "0x6B101F0")]
			public MaterialProperty()
			{
			}
		}

		[Token(Token = "0x6001F4A")]
		[Address(RVA = "0x6B100F0", Offset = "0x6B0F0F0", VA = "0x6B100F0")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x4000D96")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Material m_Material;

	[Token(Token = "0x4000D97")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	[SerializeField]
	internal List<MaterialPropertyValue> propertyValues;

	[Token(Token = "0x170008AD")]
	public Material material
	{
		[Token(Token = "0x6001F3D")]
		[Address(RVA = "0x6B0F170", Offset = "0x6B0E170", VA = "0x6B0F170")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F3E")]
		[Address(RVA = "0x6B0F180", Offset = "0x6B0E180", VA = "0x6B0F180")]
		set
		{
		}
	}

	[Token(Token = "0x6001F3F")]
	[Address(RVA = "0x6B0F190", Offset = "0x6B0E190", VA = "0x6B0F190")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal MaterialDefinition(MaterialDefinition other)
	{
	}

	[Token(Token = "0x6001F40")]
	[Address(RVA = "0x6B0F240", Offset = "0x6B0E240", VA = "0x6B0F240")]
	public static MaterialDefinition FromMaterial(Material m)
	{
		return default(MaterialDefinition);
	}

	[Token(Token = "0x6001F41")]
	[Address(RVA = "0x6B0F270", Offset = "0x6B0E270", VA = "0x6B0F270")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
	internal static MaterialDefinition FromObject(object obj)
	{
		return default(MaterialDefinition);
	}

	[Token(Token = "0x6001F42")]
	[Address(RVA = "0x6B0F380", Offset = "0x6B0E380", VA = "0x6B0F380")]
	internal MaterialPropertyBlock BuildPropertyBlock()
	{
		return null;
	}

	[Token(Token = "0x6001F43")]
	[Address(RVA = "0x6B0F6C0", Offset = "0x6B0E6C0", VA = "0x6B0F6C0")]
	public static bool operator ==(MaterialDefinition lhs, MaterialDefinition rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F44")]
	[Address(RVA = "0x6B0FA50", Offset = "0x6B0EA50", VA = "0x6B0FA50")]
	public static bool operator !=(MaterialDefinition lhs, MaterialDefinition rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F45")]
	[Address(RVA = "0x6B0FA60", Offset = "0x6B0EA60", VA = "0x6B0FA60")]
	public static implicit operator MaterialDefinition(Material m)
	{
		return default(MaterialDefinition);
	}

	[Token(Token = "0x6001F46")]
	[Address(RVA = "0x6B0FA90", Offset = "0x6B0EA90", VA = "0x6B0FA90", Slot = "4")]
	public bool Equals(MaterialDefinition other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F47")]
	[Address(RVA = "0x6B0FAB0", Offset = "0x6B0EAB0", VA = "0x6B0FAB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F48")]
	[Address(RVA = "0x6B0FB20", Offset = "0x6B0EB20", VA = "0x6B0FB20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F49")]
	[Address(RVA = "0x6B0FE10", Offset = "0x6B0EE10", VA = "0x6B0FE10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
