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

[Token(Token = "0x20003E1")]
internal sealed class ValueTypeFixupInfo
{
	[Token(Token = "0x4000F43")]
	[FieldOffset(Offset = "0x10")]
	private readonly long _containerID;

	[Token(Token = "0x4000F44")]
	[FieldOffset(Offset = "0x18")]
	private readonly FieldInfo _parentField;

	[Token(Token = "0x4000F45")]
	[FieldOffset(Offset = "0x20")]
	private readonly int[] _parentIndex;

	[Token(Token = "0x1700041A")]
	public long ContainerID
	{
		[Token(Token = "0x6001FA5")]
		[Address(RVA = "0x539CB50", Offset = "0x539BB50", VA = "0x539CB50")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700041B")]
	public FieldInfo ParentField
	{
		[Token(Token = "0x6001FA6")]
		[Address(RVA = "0x539CB60", Offset = "0x539BB60", VA = "0x539CB60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041C")]
	public int[] ParentIndex
	{
		[Token(Token = "0x6001FA7")]
		[Address(RVA = "0x539CB70", Offset = "0x539BB70", VA = "0x539CB70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001FA4")]
	[Address(RVA = "0x539C9D0", Offset = "0x539B9D0", VA = "0x539C9D0")]
	public ValueTypeFixupInfo(long containerID, FieldInfo member, int[] parentIndex)
	{
	}
}
