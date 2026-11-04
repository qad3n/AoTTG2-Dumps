// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.ValueTypeFixupInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x2000408")]
internal sealed class ValueTypeFixupInfo
{
	[Token(Token = "0x4000FE3")]
	[FieldOffset(Offset = "0x10")]
	private readonly long _containerID;

	[Token(Token = "0x4000FE4")]
	[FieldOffset(Offset = "0x18")]
	private readonly FieldInfo _parentField;

	[Token(Token = "0x4000FE5")]
	[FieldOffset(Offset = "0x20")]
	private readonly int[] _parentIndex;

	[Token(Token = "0x1700041B")]
	public long ContainerID
	{
		[Token(Token = "0x6001FCF")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700041C")]
	public FieldInfo ParentField
	{
		[Token(Token = "0x6001FD0")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041D")]
	public int[] ParentIndex
	{
		[Token(Token = "0x6001FD1")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001FCE")]
	[Address(RVA = "0x1A22660", Offset = "0x1A20C60", VA = "0x181A22660")]
	public ValueTypeFixupInfo(long containerID, FieldInfo member, int[] parentIndex)
	{
	}
}
