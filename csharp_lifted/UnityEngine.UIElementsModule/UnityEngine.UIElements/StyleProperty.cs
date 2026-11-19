// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleProperty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200047B")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class StyleProperty
{
	[Token(Token = "0x4000EBF")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private StylePropertyId m_Id;

	[Token(Token = "0x4000EC0")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private string m_CustomName;

	[Token(Token = "0x4000EC1")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private int m_Line;

	[Token(Token = "0x4000EC2")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private StyleValueHandle[] m_Values;

	[NonSerialized]
	[Token(Token = "0x4000EC3")]
	[FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool requireVariableResolve;

	[Token(Token = "0x17000922")]
	internal StylePropertyId id
	{
		[Token(Token = "0x600227F")]
		[Address(RVA = "0x6B20220", Offset = "0x6B1F220", VA = "0x6B20220")]
		get
		{
			return default(StylePropertyId);
		}
	}

	[Token(Token = "0x17000923")]
	public string name
	{
		[Token(Token = "0x6002280")]
		[Address(RVA = "0x6B20230", Offset = "0x6B1F230", VA = "0x6B20230")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002281")]
		[Address(RVA = "0x6B20310", Offset = "0x6B1F310", VA = "0x6B20310")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x17000924")]
	public StyleValueHandle[] values
	{
		[Token(Token = "0x6002282")]
		[Address(RVA = "0x6B204A0", Offset = "0x6B1F4A0", VA = "0x6B204A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002283")]
		[Address(RVA = "0x6B204B0", Offset = "0x6B1F4B0", VA = "0x6B204B0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x17000925")]
	internal int handleCount
	{
		[Token(Token = "0x6002284")]
		[Address(RVA = "0x6B204C0", Offset = "0x6B1F4C0", VA = "0x6B204C0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000926")]
	internal bool isCustomProperty
	{
		[Token(Token = "0x6002285")]
		[Address(RVA = "0x6B204D0", Offset = "0x6B1F4D0", VA = "0x6B204D0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002286")]
	[Address(RVA = "0x6B204E0", Offset = "0x6B1F4E0", VA = "0x6B204E0")]
	internal StyleProperty()
	{
	}

	[Token(Token = "0x6002287")]
	[Address(RVA = "0x6B20320", Offset = "0x6B1F320", VA = "0x6B20320")]
	internal void CacheId(string value)
	{
	}

	[Token(Token = "0x6002288")]
	[Address(RVA = "0x6B205B0", Offset = "0x6B1F5B0", VA = "0x6B205B0")]
	public bool TryGetMaterialDefinition(StyleSheet styleSheet, out MaterialDefinition value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002289")]
	[Address(RVA = "0x6B21650", Offset = "0x6B20650", VA = "0x6B21650")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static FilterFunctionType ToFilterFunctionType(StyleValueFunction function)
	{
		return default(FilterFunctionType);
	}

	[Token(Token = "0x600228A")]
	[Address(RVA = "0x6B21660", Offset = "0x6B20660", VA = "0x6B21660")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static float ConvertDimensionToFilterFloat(Dimension dim)
	{
		return default(float);
	}
}
