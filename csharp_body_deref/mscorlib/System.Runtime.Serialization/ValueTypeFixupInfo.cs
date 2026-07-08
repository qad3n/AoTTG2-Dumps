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
		[Address(RVA = "0x4EAF6F0", Offset = "0x4EAF6F0", VA = "0x4EAF6F0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700041A")]
	public FieldInfo ParentField
	{
		[Token(Token = "0x6001F61")]
		[Address(RVA = "0x4EAF700", Offset = "0x4EAF700", VA = "0x4EAF700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041B")]
	public int[] ParentIndex
	{
		[Token(Token = "0x6001F62")]
		[Address(RVA = "0x4EAF710", Offset = "0x4EAF710", VA = "0x4EAF710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001F5F")]
	[Address(RVA = "0x4EAF570", Offset = "0x4EAF570", VA = "0x4EAF570")]
	public ValueTypeFixupInfo(long containerID, FieldInfo member, int[] parentIndex)
	{
	}
}
