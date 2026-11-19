// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleValueHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000489")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal struct StyleValueHandle : IEquatable<StyleValueHandle>
{
	[Token(Token = "0x4000F0F")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private StyleValueType m_ValueType;

	[Token(Token = "0x4000F10")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	[SerializeField]
	internal int valueIndex;

	[Token(Token = "0x17000935")]
	public StyleValueType valueType
	{
		[Token(Token = "0x600230F")]
		[Address(RVA = "0x6B26530", Offset = "0x6B25530", VA = "0x6B26530")]
		get
		{
			return default(StyleValueType);
		}
		[Token(Token = "0x6002310")]
		[Address(RVA = "0x6B26F00", Offset = "0x6B25F00", VA = "0x6B26F00")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x6002311")]
	[Address(RVA = "0x6B26540", Offset = "0x6B25540", VA = "0x6B26540")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleValueHandle(int valueIndex, StyleValueType valueType)
	{
	}

	[Token(Token = "0x6002312")]
	[Address(RVA = "0x6B26F10", Offset = "0x6B25F10", VA = "0x6B26F10")]
	public bool IsVarFunction()
	{
		return default(bool);
	}

	[Token(Token = "0x6002313")]
	[Address(RVA = "0x6B26F20", Offset = "0x6B25F20", VA = "0x6B26F20", Slot = "4")]
	public bool Equals(StyleValueHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002314")]
	[Address(RVA = "0x6B26F40", Offset = "0x6B25F40", VA = "0x6B26F40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002315")]
	[Address(RVA = "0x6B26FB0", Offset = "0x6B25FB0", VA = "0x6B26FB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
