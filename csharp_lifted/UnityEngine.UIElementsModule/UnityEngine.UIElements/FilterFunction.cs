// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FilterFunction
// Update status: unchanged since the previous dump
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
[Token(Token = "0x20002FF")]
public struct FilterFunction : IEquatable<FilterFunction>
{
	[Token(Token = "0x4000BB5")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private FilterFunctionType m_Type;

	[Token(Token = "0x4000BB6")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private FixedBuffer4<FilterParameter> m_Parameters;

	[Token(Token = "0x4000BB7")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	private int m_ParameterCount;

	[Token(Token = "0x4000BB8")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private FilterFunctionDefinition m_CustomDefinition;

	[Token(Token = "0x17000475")]
	public FilterFunctionType type
	{
		[Token(Token = "0x60014E2")]
		[Address(RVA = "0x6CC7CF0", Offset = "0x6CC6CF0", VA = "0x6CC7CF0")]
		get
		{
			return default(FilterFunctionType);
		}
		[Token(Token = "0x60014E3")]
		[Address(RVA = "0x6CC7D00", Offset = "0x6CC6D00", VA = "0x6CC7D00")]
		set
		{
		}
	}

	[Token(Token = "0x17000476")]
	internal FixedBuffer4<FilterParameter> parameters
	{
		[Token(Token = "0x60014E4")]
		[Address(RVA = "0x6CC7D10", Offset = "0x6CC6D10", VA = "0x6CC7D10")]
		get
		{
			return default(FixedBuffer4<FilterParameter>);
		}
	}

	[Token(Token = "0x17000477")]
	public int parameterCount
	{
		[Token(Token = "0x60014E5")]
		[Address(RVA = "0x6CC7D50", Offset = "0x6CC6D50", VA = "0x6CC7D50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000478")]
	public FilterFunctionDefinition customDefinition
	{
		[Token(Token = "0x60014E6")]
		[Address(RVA = "0x6CC7D60", Offset = "0x6CC6D60", VA = "0x6CC7D60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014E7")]
		[Address(RVA = "0x6CC7D70", Offset = "0x6CC6D70", VA = "0x6CC7D70")]
		set
		{
		}
	}

	[Token(Token = "0x60014E8")]
	[Address(RVA = "0x6CC7D80", Offset = "0x6CC6D80", VA = "0x6CC7D80")]
	public void AddParameter(FilterParameter p)
	{
	}

	[Token(Token = "0x60014E9")]
	[Address(RVA = "0x6CC7EA0", Offset = "0x6CC6EA0", VA = "0x6CC7EA0")]
	public void ClearParameters()
	{
	}

	[Token(Token = "0x60014EA")]
	[Address(RVA = "0x6CC7EB0", Offset = "0x6CC6EB0", VA = "0x6CC7EB0")]
	internal FilterFunction(FilterFunctionType type, FixedBuffer4<FilterParameter> parameters, int paramCount)
	{
	}

	[Token(Token = "0x60014EB")]
	[Address(RVA = "0x6CC80B0", Offset = "0x6CC70B0", VA = "0x6CC80B0")]
	internal FilterFunction(FilterFunctionDefinition customDefinition, FixedBuffer4<FilterParameter> parameters, int paramCount)
	{
	}

	[Token(Token = "0x60014EC")]
	[Address(RVA = "0x6CC8090", Offset = "0x6CC7090", VA = "0x6CC8090")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal FilterFunctionDefinition GetDefinition()
	{
		return null;
	}

	[Token(Token = "0x60014ED")]
	[Address(RVA = "0x6CC8860", Offset = "0x6CC7860", VA = "0x6CC8860")]
	public static bool operator ==(FilterFunction lhs, FilterFunction rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60014EE")]
	[Address(RVA = "0x6CC8AE0", Offset = "0x6CC7AE0", VA = "0x6CC8AE0")]
	public static bool operator !=(FilterFunction lhs, FilterFunction rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60014EF")]
	[Address(RVA = "0x6CC8BC0", Offset = "0x6CC7BC0", VA = "0x6CC8BC0", Slot = "4")]
	public bool Equals(FilterFunction other)
	{
		return default(bool);
	}

	[Token(Token = "0x60014F0")]
	[Address(RVA = "0x6CC8C80", Offset = "0x6CC7C80", VA = "0x6CC8C80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x6CC8D80", Offset = "0x6CC7D80", VA = "0x6CC8D80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60014F2")]
	[Address(RVA = "0x6CC8E80", Offset = "0x6CC7E80", VA = "0x6CC8E80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
