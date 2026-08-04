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

[Token(Token = "0x2000334")]
public sealed class InstanceDescriptor
{
	[Token(Token = "0x4000EE1")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly bool _003CIsComplete_003Ek__BackingField;

	[Token(Token = "0x1700049F")]
	public ICollection Arguments
	{
		[Token(Token = "0x6001543")]
		[Address(RVA = "0x48E2500", Offset = "0x48E2500", VA = "0x48E2500")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A0")]
	public MemberInfo MemberInfo
	{
		[Token(Token = "0x6001544")]
		[Address(RVA = "0x48E2510", Offset = "0x48E2510", VA = "0x48E2510")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001541")]
	[Address(RVA = "0x48E1F10", Offset = "0x48E1F10", VA = "0x48E1F10")]
	public InstanceDescriptor(MemberInfo member, ICollection arguments)
	{
	}

	[Token(Token = "0x6001542")]
	[Address(RVA = "0x48E1F20", Offset = "0x48E1F20", VA = "0x48E1F20")]
	public InstanceDescriptor(MemberInfo member, ICollection arguments, bool isComplete)
	{
	}

	[Token(Token = "0x6001545")]
	[Address(RVA = "0x48C6C50", Offset = "0x48C6C50", VA = "0x48C6C50")]
	public object Invoke()
	{
		return null;
	}
}
