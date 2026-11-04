// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FilterFunction
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.UIElements.Layout;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000302")]
public struct FilterFunction : IEquatable<FilterFunction>
{
	[Token(Token = "0x4000BC7")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private FilterFunctionType m_Type;

	[Token(Token = "0x4000BC8")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private FixedBuffer4<FilterParameter> m_Parameters;

	[Token(Token = "0x4000BC9")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	private int m_ParameterCount;

	[Token(Token = "0x4000BCA")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private FilterFunctionDefinition m_CustomDefinition;

	[Token(Token = "0x17000478")]
	public FilterFunctionType type
	{
		[Token(Token = "0x60014EE")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(FilterFunctionType);
		}
		[Token(Token = "0x60014EF")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x17000479")]
	internal FixedBuffer4<FilterParameter> parameters
	{
		[Token(Token = "0x60014F0")]
		[Address(RVA = "0x30BA200", Offset = "0x30B8800", VA = "0x1830BA200")]
		get
		{
			return default(FixedBuffer4<FilterParameter>);
		}
	}

	[Token(Token = "0x1700047A")]
	public int parameterCount
	{
		[Token(Token = "0x60014F1")]
		[Address(RVA = "0xCDE980", Offset = "0xCDCF80", VA = "0x180CDE980")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700047B")]
	public FilterFunctionDefinition customDefinition
	{
		[Token(Token = "0x60014F2")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014F3")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		set
		{
		}
	}

	[Token(Token = "0x60014F4")]
	[Address(RVA = "0x30B9350", Offset = "0x30B7950", VA = "0x1830B9350")]
	public void AddParameter(FilterParameter p)
	{
	}

	[Token(Token = "0x60014F5")]
	[Address(RVA = "0x30B9430", Offset = "0x30B7A30", VA = "0x1830B9430")]
	public void ClearParameters()
	{
	}

	[Token(Token = "0x60014F6")]
	[Address(RVA = "0x30BA040", Offset = "0x30B8640", VA = "0x1830BA040")]
	internal FilterFunction(FilterFunctionType type, FixedBuffer4<FilterParameter> parameters, int paramCount)
	{
	}

	[Token(Token = "0x60014F7")]
	[Address(RVA = "0x30B9A30", Offset = "0x30B8030", VA = "0x1830B9A30")]
	internal FilterFunction(FilterFunctionDefinition customDefinition, FixedBuffer4<FilterParameter> parameters, int paramCount)
	{
	}

	[Token(Token = "0x60014F8")]
	[Address(RVA = "0x30B9690", Offset = "0x30B7C90", VA = "0x1830B9690")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal FilterFunctionDefinition GetDefinition()
	{
		return null;
	}

	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x30BA240", Offset = "0x30B8840", VA = "0x1830BA240")]
	public static bool operator ==(FilterFunction lhs, FilterFunction rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60014FA")]
	[Address(RVA = "0x30BA320", Offset = "0x30B8920", VA = "0x1830BA320")]
	public static bool operator !=(FilterFunction lhs, FilterFunction rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60014FB")]
	[Address(RVA = "0x30B9520", Offset = "0x30B7B20", VA = "0x1830B9520", Slot = "4")]
	public bool Equals(FilterFunction other)
	{
		return default(bool);
	}

	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x30B9440", Offset = "0x30B7A40", VA = "0x1830B9440", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x30B96B0", Offset = "0x30B7CB0", VA = "0x1830B96B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x30B97C0", Offset = "0x30B7DC0", VA = "0x1830B97C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
