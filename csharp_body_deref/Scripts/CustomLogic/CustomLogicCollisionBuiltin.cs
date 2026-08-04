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

[Token(Token = "0x20002E5")]
[CompilerGenerated]
internal class CustomLogicCollisionBuiltin : BuiltinClassInstance, ICustomLogicCopyable, ICustomLogicEquals
{
	[Token(Token = "0x20002E6")]
	public static class Factory
	{
		[Token(Token = "0x6001380")]
		[Address(RVA = "0x3FE9CB0", Offset = "0x3FE9CB0", VA = "0x3FE9CB0")]
		public static CustomLogicCollisionBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002E7")]
	public static class Bindings
	{
		[Token(Token = "0x4000ED6")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001381")]
		[Address(RVA = "0x3FE9D40", Offset = "0x3FE9D40", VA = "0x3FE9D40")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001382")]
		[Address(RVA = "0x3FEA130", Offset = "0x3FEA130", VA = "0x3FEA130")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__Collider()
		{
			return null;
		}

		[Token(Token = "0x6001383")]
		[Address(RVA = "0x3FEA1D0", Offset = "0x3FEA1D0", VA = "0x3FEA1D0")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__Impulse()
		{
			return null;
		}

		[Token(Token = "0x6001384")]
		[Address(RVA = "0x3FEA270", Offset = "0x3FEA270", VA = "0x3FEA270")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__RelativeVelocity()
		{
			return null;
		}

		[Token(Token = "0x6001385")]
		[Address(RVA = "0x3FEA310", Offset = "0x3FEA310", VA = "0x3FEA310")]
		public static CLPropertyBinding<CustomLogicCollisionBuiltin> __CreatePropertyBinding__ContactCount()
		{
			return null;
		}

		[Token(Token = "0x6001386")]
		[Address(RVA = "0x3FEA3B0", Offset = "0x3FEA3B0", VA = "0x3FEA3B0")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactPoint()
		{
			return null;
		}

		[Token(Token = "0x6001387")]
		[Address(RVA = "0x3FEA500", Offset = "0x3FEA500", VA = "0x3FEA500")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactNorms()
		{
			return null;
		}

		[Token(Token = "0x6001388")]
		[Address(RVA = "0x3FEA650", Offset = "0x3FEA650", VA = "0x3FEA650")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactImpulses()
		{
			return null;
		}

		[Token(Token = "0x6001389")]
		[Address(RVA = "0x3FEA7A0", Offset = "0x3FEA7A0", VA = "0x3FEA7A0")]
		public static CLMethodBinding<CustomLogicCollisionBuiltin> __CreateMethodBinding__GetContactSeparations()
		{
			return null;
		}
	}

	[Token(Token = "0x4000ED5")]
	[FieldOffset(Offset = "0x30")]
	public Collision collision;

	[Token(Token = "0x17000263")]
	public CustomLogicColliderBuiltin Collider
	{
		[Token(Token = "0x6001371")]
		[Address(RVA = "0x3FE9490", Offset = "0x3FE9490", VA = "0x3FE9490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000264")]
	public CustomLogicVector3Builtin Impulse
	{
		[Token(Token = "0x6001372")]
		[Address(RVA = "0x3FE9570", Offset = "0x3FE9570", VA = "0x3FE9570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000265")]
	public CustomLogicVector3Builtin RelativeVelocity
	{
		[Token(Token = "0x6001373")]
		[Address(RVA = "0x3FE9630", Offset = "0x3FE9630", VA = "0x3FE9630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000266")]
	public int ContactCount
	{
		[Token(Token = "0x6001374")]
		[Address(RVA = "0x3FE96F0", Offset = "0x3FE96F0", VA = "0x3FE96F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000267")]
	public override string ClassName
	{
		[Token(Token = "0x600137C")]
		[Address(RVA = "0x3FE9C50", Offset = "0x3FE9C50", VA = "0x3FE9C50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000268")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600137D")]
		[Address(RVA = "0x3FE9C80", Offset = "0x3FE9C80", VA = "0x3FE9C80", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000269")]
	public override bool IsStatic
	{
		[Token(Token = "0x600137E")]
		[Address(RVA = "0x3FE9C90", Offset = "0x3FE9C90", VA = "0x3FE9C90", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026A")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600137F")]
		[Address(RVA = "0x3FE9CA0", Offset = "0x3FE9CA0", VA = "0x3FE9CA0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x3FE9340", Offset = "0x3FE9340", VA = "0x3FE9340")]
	public CustomLogicCollisionBuiltin()
	{
	}

	[Token(Token = "0x6001370")]
	[Address(RVA = "0x3FE93B0", Offset = "0x3FE93B0", VA = "0x3FE93B0")]
	public CustomLogicCollisionBuiltin(object[] parameters)
	{
	}

	[Token(Token = "0x6001375")]
	[Address(RVA = "0x3FE9710", Offset = "0x3FE9710", VA = "0x3FE9710")]
	public CustomLogicVector3Builtin GetContactPoint(int index)
	{
		return null;
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x3FE9820", Offset = "0x3FE9820", VA = "0x3FE9820")]
	public CustomLogicVector3Builtin GetContactNorms(int index)
	{
		return null;
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x3FE9930", Offset = "0x3FE9930", VA = "0x3FE9930")]
	public CustomLogicVector3Builtin GetContactImpulses(int index)
	{
		return null;
	}

	[Token(Token = "0x6001378")]
	[Address(RVA = "0x3FE9A40", Offset = "0x3FE9A40", VA = "0x3FE9A40")]
	public CustomLogicVector3Builtin GetContactSeparations(int index)
	{
		return null;
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x3FE9B40", Offset = "0x3FE9B40", VA = "0x3FE9B40", Slot = "9")]
	public object __Copy__()
	{
		return null;
	}

	[Token(Token = "0x600137A")]
	[Address(RVA = "0x3FE9C10", Offset = "0x3FE9C10", VA = "0x3FE9C10", Slot = "10")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x3FE9C20", Offset = "0x3FE9C20", VA = "0x3FE9C20", Slot = "11")]
	public int __Hash__()
	{
		return default(int);
	}
}
