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
		[Address(RVA = "0x45BD400", Offset = "0x45BD400", VA = "0x45BD400")]
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
		[Address(RVA = "0x45BD410", Offset = "0x45BD410", VA = "0x45BD410")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001541")]
	[Address(RVA = "0x45BCE10", Offset = "0x45BCE10", VA = "0x45BCE10")]
	public InstanceDescriptor(MemberInfo member, ICollection arguments)
	{
	}

	[Token(Token = "0x6001542")]
	[Address(RVA = "0x45BCE20", Offset = "0x45BCE20", VA = "0x45BCE20")]
	public InstanceDescriptor(MemberInfo member, ICollection arguments, bool isComplete)
	{
	}

	[Token(Token = "0x6001545")]
	[Address(RVA = "0x45A1B50", Offset = "0x45A1B50", VA = "0x45A1B50")]
	public object Invoke()
	{
		return null;
	}
}
