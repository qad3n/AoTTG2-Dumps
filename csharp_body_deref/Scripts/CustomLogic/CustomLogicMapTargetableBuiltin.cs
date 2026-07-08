using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20002BA")]
[CompilerGenerated]
internal class CustomLogicMapTargetableBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20002BB")]
	public static class Factory
	{
		[Token(Token = "0x60012C6")]
		[Address(RVA = "0x3CED8B0", Offset = "0x3CED8B0", VA = "0x3CED8B0")]
		public static CustomLogicMapTargetableBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002BC")]
	public static class Bindings
	{
		[Token(Token = "0x4000E09")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60012C7")]
		[Address(RVA = "0x3CED940", Offset = "0x3CED940", VA = "0x3CED940")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60012C8")]
		[Address(RVA = "0x3CEDAD0", Offset = "0x3CEDAD0", VA = "0x3CEDAD0")]
		public static CLPropertyBinding<CustomLogicMapTargetableBuiltin> __CreatePropertyBinding__Team()
		{
			return null;
		}

		[Token(Token = "0x60012C9")]
		[Address(RVA = "0x3CEDBB0", Offset = "0x3CEDBB0", VA = "0x3CEDBB0")]
		public static CLPropertyBinding<CustomLogicMapTargetableBuiltin> __CreatePropertyBinding__Position()
		{
			return null;
		}

		[Token(Token = "0x60012CA")]
		[Address(RVA = "0x3CEDC50", Offset = "0x3CEDC50", VA = "0x3CEDC50")]
		public static CLPropertyBinding<CustomLogicMapTargetableBuiltin> __CreatePropertyBinding__Enabled()
		{
			return null;
		}
	}

	[Token(Token = "0x17000241")]
	public GameObject GameObject
	{
		[Token(Token = "0x60012BA")]
		[Address(RVA = "0x3CED6B0", Offset = "0x3CED6B0", VA = "0x3CED6B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000242")]
	public MapTargetable Value
	{
		[Token(Token = "0x60012BB")]
		[Address(RVA = "0x3CED6C0", Offset = "0x3CED6C0", VA = "0x3CED6C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000243")]
	public string Team
	{
		[Token(Token = "0x60012BD")]
		[Address(RVA = "0x3CED750", Offset = "0x3CED750", VA = "0x3CED750")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012BE")]
		[Address(RVA = "0x3CED770", Offset = "0x3CED770", VA = "0x3CED770")]
		set
		{
		}
	}

	[Token(Token = "0x17000244")]
	public CustomLogicVector3Builtin Position
	{
		[Token(Token = "0x60012BF")]
		[Address(RVA = "0x3CED790", Offset = "0x3CED790", VA = "0x3CED790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000245")]
	public new bool Enabled
	{
		[Token(Token = "0x60012C0")]
		[Address(RVA = "0x3CED810", Offset = "0x3CED810", VA = "0x3CED810")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60012C1")]
		[Address(RVA = "0x3CED830", Offset = "0x3CED830", VA = "0x3CED830")]
		set
		{
		}
	}

	[Token(Token = "0x17000246")]
	public override string ClassName
	{
		[Token(Token = "0x60012C2")]
		[Address(RVA = "0x3CED850", Offset = "0x3CED850", VA = "0x3CED850", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000247")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60012C3")]
		[Address(RVA = "0x3CED880", Offset = "0x3CED880", VA = "0x3CED880", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000248")]
	public override bool IsStatic
	{
		[Token(Token = "0x60012C4")]
		[Address(RVA = "0x3CED890", Offset = "0x3CED890", VA = "0x3CED890", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000249")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60012C5")]
		[Address(RVA = "0x3CED8A0", Offset = "0x3CED8A0", VA = "0x3CED8A0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x3CED6D0", Offset = "0x3CED6D0", VA = "0x3CED6D0")]
	public CustomLogicMapTargetableBuiltin(GameObject gameObject, MapTargetable mapTargetable)
	{
	}
}
