using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.VisualScripting.FullSerializer;

namespace Unity.VisualScripting;

[Token(Token = "0x2000009")]
public sealed class FakeSerializationCloner : ReflectedCloner
{
	[Token(Token = "0x17000001")]
	public fsConfig config
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x497AB00", Offset = "0x497AB00", VA = "0x497AB00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x497AB10", Offset = "0x497AB10", VA = "0x497AB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x497AB20", Offset = "0x497AB20", VA = "0x497AB20", Slot = "10")]
	public override void BeforeClone(Type type, object original)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x497ABD0", Offset = "0x497ABD0", VA = "0x497ABD0", Slot = "13")]
	public override void AfterClone(Type type, object clone)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x497AC80", Offset = "0x497AC80", VA = "0x497AC80", Slot = "14")]
	protected override IEnumerable<MemberInfo> GetMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x497ADE0", Offset = "0x497ADE0", VA = "0x497ADE0")]
	public FakeSerializationCloner()
	{
	}
}
