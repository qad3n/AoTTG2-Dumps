// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.PropertyPath
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200001B")]
public readonly struct PropertyPath : IEquatable<PropertyPath>
{
	[Token(Token = "0x400002C")]
	internal const int k_InlineCount = 4;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x0")]
	private readonly PropertyPathPart m_Part0;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x20")]
	private readonly PropertyPathPart m_Part1;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x40")]
	private readonly PropertyPathPart m_Part2;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x60")]
	private readonly PropertyPathPart m_Part3;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x80")]
	private readonly PropertyPathPart[] m_AdditionalParts;

	[Token(Token = "0x17000012")]
	public int Length
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x69E5350", Offset = "0x69E4350", VA = "0x69E5350")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000013")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x69E5360", Offset = "0x69E4360", VA = "0x69E5360")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000014")]
	public PropertyPathPart this[int index]
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x69E5370", Offset = "0x69E4370", VA = "0x69E5370")]
		get
		{
			return default(PropertyPathPart);
		}
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x69E5460", Offset = "0x69E4460", VA = "0x69E5460")]
	public PropertyPath(string path)
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x69E6B30", Offset = "0x69E5B30", VA = "0x69E6B30")]
	private PropertyPath(in PropertyPathPart part)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x69E6B90", Offset = "0x69E5B90", VA = "0x69E6B90")]
	private PropertyPath(in PropertyPathPart part0, in PropertyPathPart part1)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x69E6C10", Offset = "0x69E5C10", VA = "0x69E6C10")]
	private PropertyPath(in PropertyPathPart part0, in PropertyPathPart part1, in PropertyPathPart part2)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x69E6CB0", Offset = "0x69E5CB0", VA = "0x69E6CB0")]
	private PropertyPath(in PropertyPathPart part0, in PropertyPathPart part1, in PropertyPathPart part2, in PropertyPathPart part3)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x69E6D70", Offset = "0x69E5D70", VA = "0x69E6D70")]
	internal PropertyPath(List<PropertyPathPart> parts)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x69E7050", Offset = "0x69E6050", VA = "0x69E7050")]
	public static PropertyPath FromIndex(int index)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x69E7140", Offset = "0x69E6140", VA = "0x69E7140")]
	public static PropertyPath Combine(in PropertyPath path, in PropertyPath pathToAppend)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x69E78E0", Offset = "0x69E68E0", VA = "0x69E78E0")]
	public static PropertyPath AppendPart(in PropertyPath path, in PropertyPathPart part)
	{
		return default(PropertyPath);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x69E7ED0", Offset = "0x69E6ED0", VA = "0x69E7ED0")]
	public static PropertyPath AppendIndex(in PropertyPath path, int index)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x69E7F80", Offset = "0x69E6F80", VA = "0x69E7F80")]
	public static PropertyPath AppendProperty(in PropertyPath path, IProperty property)
	{
		return default(PropertyPath);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x69E8320", Offset = "0x69E7320", VA = "0x69E8320")]
	public static PropertyPath Pop(in PropertyPath path)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x69E8370", Offset = "0x69E7370", VA = "0x69E8370")]
	public static PropertyPath SubPath(in PropertyPath path, int startIndex, int length)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x69E8C70", Offset = "0x69E7C70", VA = "0x69E8C70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x69E8E00", Offset = "0x69E7E00", VA = "0x69E8E00")]
	private static void AppendToBuilder(in PropertyPathPart part, StringBuilder builder)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x69E77B0", Offset = "0x69E67B0", VA = "0x69E77B0")]
	private static void GetParts(in PropertyPath path, List<PropertyPathPart> parts)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x69E56B0", Offset = "0x69E46B0", VA = "0x69E56B0")]
	private static PropertyPath ConstructFromPath(string path)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x69E9000", Offset = "0x69E8000", VA = "0x69E9000")]
	public static bool operator ==(PropertyPath lhs, PropertyPath rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x69E91F0", Offset = "0x69E81F0", VA = "0x69E91F0")]
	public static bool operator !=(PropertyPath lhs, PropertyPath rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x69E9100", Offset = "0x69E8100", VA = "0x69E9100", Slot = "4")]
	public bool Equals(PropertyPath other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x69E9300", Offset = "0x69E8300", VA = "0x69E9300", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x69E9440", Offset = "0x69E8440", VA = "0x69E9440", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
