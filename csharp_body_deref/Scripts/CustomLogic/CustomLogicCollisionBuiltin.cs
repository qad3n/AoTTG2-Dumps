using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20002AC")]
[CompilerGenerated]
internal class CustomLogicCollisionBuiltin : BuiltinClassInstance, ICustomLogicCopyable, ICustomLogicEquals
{
	[Token(Token = "0x20002AD")]
	public static class Factory
	{
		[Token(Token = "0x60011D6")]
		[Address(RVA = "0x3CE3FD0", Offset = "0x3CE3FD0", VA = "0x3CE3FD0")]
		public static CustomLogicCollisionBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002AE")]
	public static class Bindings
	{
		[Token(Token = "0x4000DF0")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60011D7")]
		[Address(RVA = "0x3CE4060", Offset = "0x3CE4060", VA = "0x3CE4060")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60011D8")]
		[Address(RVA = "0x3CE4450", Offset = "0x3CE4450", VA = "0x3CE4450")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__Collider()
		{
			return null;
		}

		[Token(Token = "0x60011D9")]
		[Address(RVA = "0x3CE44F0", Offset = "0x3CE44F0", VA = "0x3CE44F0")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__Impulse()
		{
			return null;
		}

		[Token(Token = "0x60011DA")]
		[Address(RVA = "0x3CE4590", Offset = "0x3CE4590", VA = "0x3CE4590")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__RelativeVelocity()
		{
			return null;
		}

		[Token(Token = "0x60011DB")]
		[Address(RVA = "0x3CE4630", Offset = "0x3CE4630", VA = "0x3CE4630")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__ContactCount()
		{
			return null;
		}

		[Token(Token = "0x60011DC")]
		[Address(RVA = "0x3CE46D0", Offset = "0x3CE46D0", VA = "0x3CE46D0")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactPoint()
		{
			return null;
		}

		[Token(Token = "0x60011DD")]
		[Address(RVA = "0x3CE4820", Offset = "0x3CE4820", VA = "0x3CE4820")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactNorms()
		{
			return null;
		}

		[Token(Token = "0x60011DE")]
		[Address(RVA = "0x3CE4970", Offset = "0x3CE4970", VA = "0x3CE4970")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactImpulses()
		{
			return null;
		}

		[Token(Token = "0x60011DF")]
		[Address(RVA = "0x3CE4AC0", Offset = "0x3CE4AC0", VA = "0x3CE4AC0")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactSeparations()
		{
			return null;
		}
	}

	[Token(Token = "0x4000DEF")]
	[FieldOffset(Offset = "0x30")]
	public Collision collision;

	[Token(Token = "0x1700020A")]
	public CustomLogicColliderBuiltin Collider
	{
		[Token(Token = "0x60011C7")]
		[Address(RVA = "0x3CE39F0", Offset = "0x3CE39F0", VA = "0x3CE39F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020B")]
	public CustomLogicVector3Builtin Impulse
	{
		[Token(Token = "0x60011C8")]
		[Address(RVA = "0x3CE3AD0", Offset = "0x3CE3AD0", VA = "0x3CE3AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020C")]
	public CustomLogicVector3Builtin RelativeVelocity
	{
		[Token(Token = "0x60011C9")]
		[Address(RVA = "0x3CE3AF0", Offset = "0x3CE3AF0", VA = "0x3CE3AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020D")]
	public int ContactCount
	{
		[Token(Token = "0x60011CA")]
		[Address(RVA = "0x3CE3B10", Offset = "0x3CE3B10", VA = "0x3CE3B10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020E")]
	public override string ClassName
	{
		[Token(Token = "0x60011D2")]
		[Address(RVA = "0x3CE3F70", Offset = "0x3CE3F70", VA = "0x3CE3F70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020F")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60011D3")]
		[Address(RVA = "0x3CE3FA0", Offset = "0x3CE3FA0", VA = "0x3CE3FA0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000210")]
	public override bool IsStatic
	{
		[Token(Token = "0x60011D4")]
		[Address(RVA = "0x3CE3FB0", Offset = "0x3CE3FB0", VA = "0x3CE3FB0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000211")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60011D5")]
		[Address(RVA = "0x3CE3FC0", Offset = "0x3CE3FC0", VA = "0x3CE3FC0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x3CE38A0", Offset = "0x3CE38A0", VA = "0x3CE38A0")]
	public CustomLogicCollisionBuiltin()
	{
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x3CE3910", Offset = "0x3CE3910", VA = "0x3CE3910")]
	public CustomLogicCollisionBuiltin(object[] parameters)
	{
	}

	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x3CE3B30", Offset = "0x3CE3B30", VA = "0x3CE3B30")]
	public CustomLogicVector3Builtin GetContactPoint(int index)
	{
		return null;
	}

	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x3CE3C00", Offset = "0x3CE3C00", VA = "0x3CE3C00")]
	public CustomLogicVector3Builtin GetContactNorms(int index)
	{
		return null;
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x3CE3CD0", Offset = "0x3CE3CD0", VA = "0x3CE3CD0")]
	public CustomLogicVector3Builtin GetContactImpulses(int index)
	{
		return null;
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x3CE3DA0", Offset = "0x3CE3DA0", VA = "0x3CE3DA0")]
	public CustomLogicVector3Builtin GetContactSeparations(int index)
	{
		return null;
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x3CE3E60", Offset = "0x3CE3E60", VA = "0x3CE3E60", Slot = "9")]
	public object __Copy__()
	{
		return null;
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x3CE3F30", Offset = "0x3CE3F30", VA = "0x3CE3F30", Slot = "10")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x3CE3F40", Offset = "0x3CE3F40", VA = "0x3CE3F40", Slot = "11")]
	public int __Hash__()
	{
		return default(int);
	}
}
