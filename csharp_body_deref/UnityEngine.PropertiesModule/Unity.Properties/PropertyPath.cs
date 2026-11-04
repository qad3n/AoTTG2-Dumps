// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.PropertyPath
// Update status: CHANGED in this game update
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
		[Address(RVA = "0xA4D4B0", Offset = "0xA4BAB0", VA = "0x180A4D4B0")]
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
		[Address(RVA = "0x2FF19B0", Offset = "0x2FEFFB0", VA = "0x182FF19B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000014")]
	public PropertyPathPart this[int index]
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x2FF19C0", Offset = "0x2FEFFC0", VA = "0x182FF19C0")]
		get
		{
			return default(PropertyPathPart);
		}
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x2FF14C0", Offset = "0x2FEFAC0", VA = "0x182FF14C0")]
	public PropertyPath(string path)
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x2FF13C0", Offset = "0x2FEF9C0", VA = "0x182FF13C0")]
	private PropertyPath(in PropertyPathPart part)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x2FF1430", Offset = "0x2FEFA30", VA = "0x182FF1430")]
	private PropertyPath(in PropertyPathPart part0, in PropertyPathPart part1)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x2FF15D0", Offset = "0x2FEFBD0", VA = "0x182FF15D0")]
	private PropertyPath(in PropertyPathPart part0, in PropertyPathPart part1, in PropertyPathPart part2)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x2FF18F0", Offset = "0x2FEFEF0", VA = "0x182FF18F0")]
	private PropertyPath(in PropertyPathPart part0, in PropertyPathPart part1, in PropertyPathPart part2, in PropertyPathPart part3)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x2FF1680", Offset = "0x2FEFC80", VA = "0x182FF1680")]
	internal PropertyPath(List<PropertyPathPart> parts)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x2FF0150", Offset = "0x2FEE750", VA = "0x182FF0150")]
	public static PropertyPath FromIndex(int index)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x2FEE6D0", Offset = "0x2FECCD0", VA = "0x182FEE6D0")]
	public static PropertyPath Combine(in PropertyPath path, in PropertyPath pathToAppend)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x2FEDDA0", Offset = "0x2FEC3A0", VA = "0x182FEDDA0")]
	public static PropertyPath AppendPart(in PropertyPath path, in PropertyPathPart part)
	{
		return default(PropertyPath);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x2FEDCA0", Offset = "0x2FEC2A0", VA = "0x182FEDCA0")]
	public static PropertyPath AppendIndex(in PropertyPath path, int index)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2FEE2A0", Offset = "0x2FEC8A0", VA = "0x182FEE2A0")]
	public static PropertyPath AppendProperty(in PropertyPath path, IProperty property)
	{
		return default(PropertyPath);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x2FF04A0", Offset = "0x2FEEAA0", VA = "0x182FF04A0")]
	public static PropertyPath Pop(in PropertyPath path)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x2FF0530", Offset = "0x2FEEB30", VA = "0x182FF0530")]
	public static PropertyPath SubPath(in PropertyPath path, int startIndex, int length)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2FF0F60", Offset = "0x2FEF560", VA = "0x182FF0F60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x2FEE600", Offset = "0x2FECC00", VA = "0x182FEE600")]
	private static void AppendToBuilder(in PropertyPathPart part, StringBuilder builder)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x2FF03A0", Offset = "0x2FEE9A0", VA = "0x182FF03A0")]
	private static void GetParts(in PropertyPath path, List<PropertyPathPart> parts)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x2FEEE40", Offset = "0x2FED440", VA = "0x182FEEE40")]
	private static PropertyPath ConstructFromPath(string path)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x2FF1BC0", Offset = "0x2FF01C0", VA = "0x182FF1BC0")]
	public static bool operator ==(PropertyPath lhs, PropertyPath rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x2FF1C30", Offset = "0x2FF0230", VA = "0x182FF1C30")]
	public static bool operator !=(PropertyPath lhs, PropertyPath rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x2FEFF30", Offset = "0x2FEE530", VA = "0x182FEFF30", Slot = "4")]
	public bool Equals(PropertyPath other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x2FF0050", Offset = "0x2FEE650", VA = "0x182FF0050", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x2FF0240", Offset = "0x2FEE840", VA = "0x182FF0240", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
