// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleValueHandle
// Update status: CHANGED in this game update
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
	[SerializeField]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int valueIndex;

	[Token(Token = "0x17000935")]
	public StyleValueType valueType
	{
		[Token(Token = "0x600230F")]
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930")]
		get
		{
			return default(StyleValueType);
		}
		[Token(Token = "0x6002310")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x6002311")]
	[Address(RVA = "0x312D060", Offset = "0x312B660", VA = "0x18312D060")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleValueHandle(int valueIndex, StyleValueType valueType)
	{
	}

	[Token(Token = "0x6002312")]
	[Address(RVA = "0x312D040", Offset = "0x312B640", VA = "0x18312D040")]
	public bool IsVarFunction()
	{
		return default(bool);
	}

	[Token(Token = "0x6002313")]
	[Address(RVA = "0x2ED5CB0", Offset = "0x2ED42B0", VA = "0x182ED5CB0", Slot = "4")]
	public bool Equals(StyleValueHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002314")]
	[Address(RVA = "0x312CF40", Offset = "0x312B540", VA = "0x18312CF40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002315")]
	[Address(RVA = "0x312CFD0", Offset = "0x312B5D0", VA = "0x18312CFD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
