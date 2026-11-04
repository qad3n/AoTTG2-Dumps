// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Design.Serialization.InstanceDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel.Design.Serialization;

[Token(Token = "0x200023F")]
public sealed class InstanceDescriptor
{
	[Token(Token = "0x4000818")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly bool _003CIsComplete_003Ek__BackingField;

	[Token(Token = "0x1700030E")]
	public ICollection Arguments
	{
		[Token(Token = "0x6000F8B")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030F")]
	public MemberInfo MemberInfo
	{
		[Token(Token = "0x6000F8C")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x28D4010", Offset = "0x28D2610", VA = "0x1828D4010")]
	public InstanceDescriptor(MemberInfo member, ICollection arguments)
	{
	}

	[Token(Token = "0x6000F8A")]
	[Address(RVA = "0x28D4030", Offset = "0x28D2630", VA = "0x1828D4030")]
	public InstanceDescriptor(MemberInfo member, ICollection arguments, bool isComplete)
	{
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x28D3BF0", Offset = "0x28D21F0", VA = "0x1828D3BF0")]
	public object Invoke()
	{
		return null;
	}
}
