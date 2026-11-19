// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceHandle
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x65D3450", Offset = "0x65D2450", VA = "0x65D3450")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x65D3460", Offset = "0x65D2460", VA = "0x65D3460")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public int instanceIndex
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x65D0810", Offset = "0x65CF810", VA = "0x65D0810")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000032")]
	public InstanceType type
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x65D07B0", Offset = "0x65CF7B0", VA = "0x65D07B0")]
		get
		{
			return default(InstanceType);
		}
	}

	[Token(Token = "0x17000033")]
	public bool valid
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x65D0750", Offset = "0x65CF750", VA = "0x65D0750")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x65D0B00", Offset = "0x65CFB00", VA = "0x65D0B00")]
	public static InstanceHandle Create(int instanceIndex, InstanceType instanceType)
	{
		return default(InstanceHandle);
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x65CA860", Offset = "0x65C9860", VA = "0x65CA860")]
	public static InstanceHandle FromInt(int value)
	{
		return default(InstanceHandle);
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x65D3470", Offset = "0x65D2470", VA = "0x65D3470", Slot = "4")]
	public bool Equals(InstanceHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x65D34C0", Offset = "0x65D24C0", VA = "0x65D34C0", Slot = "5")]
	public int CompareTo(InstanceHandle other)
	{
		return default(int);
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x65D3520", Offset = "0x65D2520", VA = "0x65D3520", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
