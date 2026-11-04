// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceHandle
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000071")]
internal struct InstanceHandle : IEquatable<InstanceHandle>, IComparable<InstanceHandle>
{
	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x0")]
	public static readonly InstanceHandle Invalid;

	[Token(Token = "0x17000030")]
	public int index
	{
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public int instanceIndex
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x2BE7B10", Offset = "0x2BE6110", VA = "0x182BE7B10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000032")]
	public InstanceType type
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x2BE7B60", Offset = "0x2BE6160", VA = "0x182BE7B60")]
		get
		{
			return default(InstanceType);
		}
	}

	[Token(Token = "0x17000033")]
	public bool valid
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x2BE7BB0", Offset = "0x2BE61B0", VA = "0x182BE7BB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x2BE7990", Offset = "0x2BE5F90", VA = "0x182BE7990")]
	public static InstanceHandle Create(int instanceIndex, InstanceType instanceType)
	{
		return default(InstanceHandle);
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x2BE7A30", Offset = "0x2BE6030", VA = "0x182BE7A30")]
	public static InstanceHandle FromInt(int value)
	{
		return default(InstanceHandle);
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x2BE79E0", Offset = "0x2BE5FE0", VA = "0x182BE79E0", Slot = "4")]
	public bool Equals(InstanceHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x2BE7920", Offset = "0x2BE5F20", VA = "0x182BE7920", Slot = "5")]
	public int CompareTo(InstanceHandle other)
	{
		return default(int);
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x2BE7A80", Offset = "0x2BE6080", VA = "0x182BE7A80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
