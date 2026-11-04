// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleRule
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200047C")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class StyleRule
{
	[Token(Token = "0x4000EC4")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private StyleComplexSelector[] m_ComplexSelectors;

	[Token(Token = "0x4000EC5")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private StyleProperty[] m_Properties;

	[Token(Token = "0x4000EC6")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int line;

	[NonSerialized]
	[Token(Token = "0x4000EC8")]
	[FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int customPropertiesCount;

	[Token(Token = "0x17000927")]
	internal StyleSheet styleSheet
	{
		[Token(Token = "0x600228B")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600228C")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000928")]
	public StyleComplexSelector[] complexSelectors
	{
		[Token(Token = "0x600228E")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000929")]
	public StyleProperty[] properties
	{
		[Token(Token = "0x600228F")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600228D")]
	[Address(RVA = "0x3117EE0", Offset = "0x31164E0", VA = "0x183117EE0")]
	internal StyleRule(StyleSheet styleSheet)
	{
	}

	[Token(Token = "0x6002290")]
	[Address(RVA = "0x3117D80", Offset = "0x3116380", VA = "0x183117D80")]
	public bool TryAddSelector(string selectorStr, out StyleComplexSelector selector, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6002291")]
	[Address(RVA = "0x3117BD0", Offset = "0x31161D0", VA = "0x183117BD0")]
	public StyleComplexSelector AddSelector(string selectorStr)
	{
		return null;
	}

	[Token(Token = "0x6002292")]
	[Address(RVA = "0x3117990", Offset = "0x3115F90", VA = "0x183117990")]
	public StyleProperty AddProperty(string propertyName)
	{
		return null;
	}
}
