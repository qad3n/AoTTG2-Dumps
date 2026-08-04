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

[Token(Token = "0x200000C")]
public readonly struct PropertyPath : IEquatable<PropertyPath>
{
	[Token(Token = "0x400000E")]
	internal const int k_InlineCount = 4;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x0")]
	private readonly PropertyPathPart m_Part0;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x20")]
	private readonly PropertyPathPart m_Part1;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x40")]
	private readonly PropertyPathPart m_Part2;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x60")]
	private readonly PropertyPathPart m_Part3;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x80")]
	private readonly int m_InlinePartsCount;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x88")]
	private readonly PropertyPathPart[] m_AdditionalParts;

	[Token(Token = "0x17000007")]
	public int Length
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x4E83C60", Offset = "0x4E83C60", VA = "0x4E83C60")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000008")]
	public PropertyPathPart this[int index]
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x4E83C70", Offset = "0x4E83C70", VA = "0x4E83C70")]
		get
		{
			return default(PropertyPathPart);
		}
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4E83D70", Offset = "0x4E83D70", VA = "0x4E83D70")]
	public PropertyPath(string path)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4E85AE0", Offset = "0x4E85AE0", VA = "0x4E85AE0")]
	internal PropertyPath(List<PropertyPathPart> parts)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4E85E10", Offset = "0x4E85E10", VA = "0x4E85E10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4E85FA0", Offset = "0x4E85FA0", VA = "0x4E85FA0")]
	private static void AppendToBuilder(in PropertyPathPart part, StringBuilder builder)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4E84000", Offset = "0x4E84000", VA = "0x4E84000")]
	private static PropertyPath ConstructFromPath(string path)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4E861A0", Offset = "0x4E861A0", VA = "0x4E861A0", Slot = "4")]
	public bool Equals(PropertyPath other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4E86290", Offset = "0x4E86290", VA = "0x4E86290", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4E863D0", Offset = "0x4E863D0", VA = "0x4E863D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
