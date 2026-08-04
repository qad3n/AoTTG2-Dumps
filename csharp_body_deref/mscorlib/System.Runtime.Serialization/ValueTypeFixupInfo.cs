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

[Token(Token = "0x20003D9")]
internal sealed class ValueTypeFixupInfo
{
	[Token(Token = "0x4000FDD")]
	[FieldOffset(Offset = "0x10")]
	private readonly long _containerID;

	[Token(Token = "0x4000FDE")]
	[FieldOffset(Offset = "0x18")]
	private readonly FieldInfo _parentField;

	[Token(Token = "0x4000FDF")]
	[FieldOffset(Offset = "0x20")]
	private readonly int[] _parentIndex;

	[Token(Token = "0x17000419")]
	public long ContainerID
	{
		[Token(Token = "0x6001F60")]
		[Address(RVA = "0x3B95210", Offset = "0x3B95210", VA = "0x3B95210")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700041A")]
	public FieldInfo ParentField
	{
		[Token(Token = "0x6001F61")]
		[Address(RVA = "0x3B95220", Offset = "0x3B95220", VA = "0x3B95220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041B")]
	public int[] ParentIndex
	{
		[Token(Token = "0x6001F62")]
		[Address(RVA = "0x3B95230", Offset = "0x3B95230", VA = "0x3B95230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001F5F")]
	[Address(RVA = "0x3B95090", Offset = "0x3B95090", VA = "0x3B95090")]
	public ValueTypeFixupInfo(long containerID, FieldInfo member, int[] parentIndex)
	{
	}
}
