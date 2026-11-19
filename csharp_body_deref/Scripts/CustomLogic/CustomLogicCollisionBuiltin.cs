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

[Token(Token = "0x200048F")]
[CompilerGenerated]
internal class CustomLogicCollisionBuiltin : BuiltinClassInstance, ICustomLogicCopyable, ICustomLogicEquals
{
	[Token(Token = "0x2000490")]
	public static class Factory
	{
		[Token(Token = "0x6001E79")]
		[Address(RVA = "0x58F5E20", Offset = "0x58F4E20", VA = "0x58F5E20")]
		public static CustomLogicCollisionBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000491")]
	public static class Bindings
	{
		[Token(Token = "0x4001696")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001E7A")]
		[Address(RVA = "0x58F5EB0", Offset = "0x58F4EB0", VA = "0x58F5EB0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001E7B")]
		[Address(RVA = "0x58F62A0", Offset = "0x58F52A0", VA = "0x58F62A0")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__Collider()
		{
			return null;
		}

		[Token(Token = "0x6001E7C")]
		[Address(RVA = "0x58F6340", Offset = "0x58F5340", VA = "0x58F6340")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__Impulse()
		{
			return null;
		}

		[Token(Token = "0x6001E7D")]
		[Address(RVA = "0x58F63E0", Offset = "0x58F53E0", VA = "0x58F63E0")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__RelativeVelocity()
		{
			return null;
		}

		[Token(Token = "0x6001E7E")]
		[Address(RVA = "0x58F6480", Offset = "0x58F5480", VA = "0x58F6480")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__ContactCount()
		{
			return null;
		}

		[Token(Token = "0x6001E7F")]
		[Address(RVA = "0x58F6520", Offset = "0x58F5520", VA = "0x58F6520")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactPoint()
		{
			return null;
		}

		[Token(Token = "0x6001E80")]
		[Address(RVA = "0x58F6660", Offset = "0x58F5660", VA = "0x58F6660")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactNorms()
		{
			return null;
		}

		[Token(Token = "0x6001E81")]
		[Address(RVA = "0x58F67A0", Offset = "0x58F57A0", VA = "0x58F67A0")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactImpulses()
		{
			return null;
		}

		[Token(Token = "0x6001E82")]
		[Address(RVA = "0x58F68E0", Offset = "0x58F58E0", VA = "0x58F68E0")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactSeparations()
		{
			return null;
		}
	}

	[Token(Token = "0x4001695")]
	[FieldOffset(Offset = "0x30")]
	public Collision collision;

	[Token(Token = "0x17000359")]
	public CustomLogicColliderBuiltin Collider
	{
		[Token(Token = "0x6001E6A")]
		[Address(RVA = "0x58F5670", Offset = "0x58F4670", VA = "0x58F5670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700035A")]
	public CustomLogicVector3Builtin Impulse
	{
		[Token(Token = "0x6001E6B")]
		[Address(RVA = "0x58F5750", Offset = "0x58F4750", VA = "0x58F5750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700035B")]
	public CustomLogicVector3Builtin RelativeVelocity
	{
		[Token(Token = "0x6001E6C")]
		[Address(RVA = "0x58F5810", Offset = "0x58F4810", VA = "0x58F5810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700035C")]
	public int ContactCount
	{
		[Token(Token = "0x6001E6D")]
		[Address(RVA = "0x58F58D0", Offset = "0x58F48D0", VA = "0x58F58D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700035D")]
	public override string ClassName
	{
		[Token(Token = "0x6001E75")]
		[Address(RVA = "0x58F5DC0", Offset = "0x58F4DC0", VA = "0x58F5DC0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700035E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001E76")]
		[Address(RVA = "0x58F5DF0", Offset = "0x58F4DF0", VA = "0x58F5DF0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700035F")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001E77")]
		[Address(RVA = "0x58F5E00", Offset = "0x58F4E00", VA = "0x58F5E00", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000360")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001E78")]
		[Address(RVA = "0x58F5E10", Offset = "0x58F4E10", VA = "0x58F5E10", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E68")]
	[Address(RVA = "0x58F5520", Offset = "0x58F4520", VA = "0x58F5520")]
	public CustomLogicCollisionBuiltin()
	{
	}

	[Token(Token = "0x6001E69")]
	[Address(RVA = "0x58F5590", Offset = "0x58F4590", VA = "0x58F5590")]
	public CustomLogicCollisionBuiltin(object[] parameters)
	{
	}

	[Token(Token = "0x6001E6E")]
	[Address(RVA = "0x58F58F0", Offset = "0x58F48F0", VA = "0x58F58F0")]
	public CustomLogicVector3Builtin GetContactPoint(int index)
	{
		return null;
	}

	[Token(Token = "0x6001E6F")]
	[Address(RVA = "0x58F59E0", Offset = "0x58F49E0", VA = "0x58F59E0")]
	public CustomLogicVector3Builtin GetContactNorms(int index)
	{
		return null;
	}

	[Token(Token = "0x6001E70")]
	[Address(RVA = "0x58F5AD0", Offset = "0x58F4AD0", VA = "0x58F5AD0")]
	public CustomLogicVector3Builtin GetContactImpulses(int index)
	{
		return null;
	}

	[Token(Token = "0x6001E71")]
	[Address(RVA = "0x58F5BC0", Offset = "0x58F4BC0", VA = "0x58F5BC0")]
	public CustomLogicVector3Builtin GetContactSeparations(int index)
	{
		return null;
	}

	[Token(Token = "0x6001E72")]
	[Address(RVA = "0x58F5CB0", Offset = "0x58F4CB0", VA = "0x58F5CB0", Slot = "11")]
	public object __Copy__()
	{
		return null;
	}

	[Token(Token = "0x6001E73")]
	[Address(RVA = "0x58F5D80", Offset = "0x58F4D80", VA = "0x58F5D80", Slot = "12")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E74")]
	[Address(RVA = "0x58F5D90", Offset = "0x58F4D90", VA = "0x58F5D90", Slot = "13")]
	public int __Hash__()
	{
		return default(int);
	}
}
