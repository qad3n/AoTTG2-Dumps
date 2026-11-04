// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCollisionBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCollisionBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000430")]
[CompilerGenerated]
internal class CustomLogicCollisionBuiltin : BuiltinClassInstance, ICustomLogicCopyable, ICustomLogicEquals
{
	[Token(Token = "0x2000431")]
	public static class Factory
	{
		[Token(Token = "0x6001C02")]
		[Address(RVA = "0x1F078B0", Offset = "0x1F05EB0", VA = "0x181F078B0")]
		public static CustomLogicCollisionBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000432")]
	public static class Bindings
	{
		[Token(Token = "0x40014F6")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001C03")]
		[Address(RVA = "0x1EEA2D0", Offset = "0x1EE88D0", VA = "0x181EEA2D0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001C04")]
		[Address(RVA = "0x1EFB020", Offset = "0x1EF9620", VA = "0x181EFB020")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__Collider()
		{
			return null;
		}

		[Token(Token = "0x6001C05")]
		[Address(RVA = "0x1EFC240", Offset = "0x1EFA840", VA = "0x181EFC240")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__Impulse()
		{
			return null;
		}

		[Token(Token = "0x6001C06")]
		[Address(RVA = "0x1EFD730", Offset = "0x1EFBD30", VA = "0x181EFD730")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__RelativeVelocity()
		{
			return null;
		}

		[Token(Token = "0x6001C07")]
		[Address(RVA = "0x1EFB390", Offset = "0x1EF9990", VA = "0x181EFB390")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__ContactCount()
		{
			return null;
		}

		[Token(Token = "0x6001C08")]
		[Address(RVA = "0x1EF5A40", Offset = "0x1EF4040", VA = "0x181EF5A40")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactPoint()
		{
			return null;
		}

		[Token(Token = "0x6001C09")]
		[Address(RVA = "0x1EF5920", Offset = "0x1EF3F20", VA = "0x181EF5920")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactNorms()
		{
			return null;
		}

		[Token(Token = "0x6001C0A")]
		[Address(RVA = "0x1EF5800", Offset = "0x1EF3E00", VA = "0x181EF5800")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactImpulses()
		{
			return null;
		}

		[Token(Token = "0x6001C0B")]
		[Address(RVA = "0x1EF5B60", Offset = "0x1EF4160", VA = "0x181EF5B60")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactSeparations()
		{
			return null;
		}
	}

	[Token(Token = "0x40014F5")]
	[FieldOffset(Offset = "0x30")]
	public Collision collision;

	[Token(Token = "0x17000318")]
	public CustomLogicColliderBuiltin Collider
	{
		[Token(Token = "0x6001BF3")]
		[Address(RVA = "0x1F03440", Offset = "0x1F01A40", VA = "0x181F03440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000319")]
	public CustomLogicVector3Builtin Impulse
	{
		[Token(Token = "0x6001BF4")]
		[Address(RVA = "0x1F03540", Offset = "0x1F01B40", VA = "0x181F03540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031A")]
	public CustomLogicVector3Builtin RelativeVelocity
	{
		[Token(Token = "0x6001BF5")]
		[Address(RVA = "0x1F03590", Offset = "0x1F01B90", VA = "0x181F03590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031B")]
	public int ContactCount
	{
		[Token(Token = "0x6001BF6")]
		[Address(RVA = "0x1F03520", Offset = "0x1F01B20", VA = "0x181F03520")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700031C")]
	public override string ClassName
	{
		[Token(Token = "0x6001BFE")]
		[Address(RVA = "0x1F03410", Offset = "0x1F01A10", VA = "0x181F03410", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031D")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001BFF")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700031E")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001C00")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700031F")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001C01")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001BF1")]
	[Address(RVA = "0x1F032B0", Offset = "0x1F018B0", VA = "0x181F032B0")]
	public CustomLogicCollisionBuiltin()
	{
	}

	[Token(Token = "0x6001BF2")]
	[Address(RVA = "0x1F03300", Offset = "0x1F01900", VA = "0x181F03300")]
	public CustomLogicCollisionBuiltin(object[] parameters)
	{
	}

	[Token(Token = "0x6001BF7")]
	[Address(RVA = "0x1F03020", Offset = "0x1F01620", VA = "0x181F03020")]
	public CustomLogicVector3Builtin GetContactPoint(int index)
	{
		return null;
	}

	[Token(Token = "0x6001BF8")]
	[Address(RVA = "0x1F02F30", Offset = "0x1F01530", VA = "0x181F02F30")]
	public CustomLogicVector3Builtin GetContactNorms(int index)
	{
		return null;
	}

	[Token(Token = "0x6001BF9")]
	[Address(RVA = "0x1F02E40", Offset = "0x1F01440", VA = "0x181F02E40")]
	public CustomLogicVector3Builtin GetContactImpulses(int index)
	{
		return null;
	}

	[Token(Token = "0x6001BFA")]
	[Address(RVA = "0x1F03110", Offset = "0x1F01710", VA = "0x181F03110")]
	public CustomLogicVector3Builtin GetContactSeparations(int index)
	{
		return null;
	}

	[Token(Token = "0x6001BFB")]
	[Address(RVA = "0x1F031E0", Offset = "0x1F017E0", VA = "0x181F031E0", Slot = "11")]
	public object __Copy__()
	{
		return null;
	}

	[Token(Token = "0x6001BFC")]
	[Address(RVA = "0xC7E810", Offset = "0xC7CE10", VA = "0x180C7E810", Slot = "12")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BFD")]
	[Address(RVA = "0x1ECE090", Offset = "0x1ECC690", VA = "0x181ECE090", Slot = "13")]
	public int __Hash__()
	{
		return default(int);
	}
}
