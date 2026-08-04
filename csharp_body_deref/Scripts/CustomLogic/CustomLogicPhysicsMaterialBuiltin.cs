// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicPhysicsMaterialBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicPhysicsMaterialBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20002FA")]
[CompilerGenerated]
internal class CustomLogicPhysicsMaterialBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20002FB")]
	public static class Factory
	{
		[Token(Token = "0x60014C3")]
		[Address(RVA = "0x3FF5DD0", Offset = "0x3FF5DD0", VA = "0x3FF5DD0")]
		public static CustomLogicPhysicsMaterialBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002FC")]
	public static class Bindings
	{
		[Token(Token = "0x4000EF9")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60014C4")]
		[Address(RVA = "0x3FF5EC0", Offset = "0x3FF5EC0", VA = "0x3FF5EC0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60014C5")]
		[Address(RVA = "0x3FF6130", Offset = "0x3FF6130", VA = "0x3FF6130")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__StaticFriction()
		{
			return null;
		}

		[Token(Token = "0x60014C6")]
		[Address(RVA = "0x3FF6210", Offset = "0x3FF6210", VA = "0x3FF6210")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__DynamicFriction()
		{
			return null;
		}

		[Token(Token = "0x60014C7")]
		[Address(RVA = "0x3FF62F0", Offset = "0x3FF62F0", VA = "0x3FF62F0")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__Bounciness()
		{
			return null;
		}

		[Token(Token = "0x60014C8")]
		[Address(RVA = "0x3FF63D0", Offset = "0x3FF63D0", VA = "0x3FF63D0")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__FrictionCombine()
		{
			return null;
		}

		[Token(Token = "0x60014C9")]
		[Address(RVA = "0x3FF64B0", Offset = "0x3FF64B0", VA = "0x3FF64B0")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__BounceCombine()
		{
			return null;
		}

		[Token(Token = "0x60014CA")]
		[Address(RVA = "0x3FF6590", Offset = "0x3FF6590", VA = "0x3FF6590")]
		public static CLMethodBinding<CustomLogicPhysicsMaterialBuiltin> __CreateMethodBinding__Setup()
		{
			return null;
		}
	}

	[Token(Token = "0x4000EF6")]
	[FieldOffset(Offset = "0x38")]
	public CustomPhysicsMaterial Value;

	[Token(Token = "0x4000EF7")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x4000EF8")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x170002B0")]
	public float StaticFriction
	{
		[Token(Token = "0x60014B4")]
		[Address(RVA = "0x3FF5C10", Offset = "0x3FF5C10", VA = "0x3FF5C10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60014B5")]
		[Address(RVA = "0x3FF5C30", Offset = "0x3FF5C30", VA = "0x3FF5C30")]
		set
		{
		}
	}

	[Token(Token = "0x170002B1")]
	public float DynamicFriction
	{
		[Token(Token = "0x60014B6")]
		[Address(RVA = "0x3FF5C50", Offset = "0x3FF5C50", VA = "0x3FF5C50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60014B7")]
		[Address(RVA = "0x3FF5C70", Offset = "0x3FF5C70", VA = "0x3FF5C70")]
		set
		{
		}
	}

	[Token(Token = "0x170002B2")]
	public float Bounciness
	{
		[Token(Token = "0x60014B8")]
		[Address(RVA = "0x3FF5C90", Offset = "0x3FF5C90", VA = "0x3FF5C90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60014B9")]
		[Address(RVA = "0x3FF5CB0", Offset = "0x3FF5CB0", VA = "0x3FF5CB0")]
		set
		{
		}
	}

	[Token(Token = "0x170002B3")]
	public int FrictionCombine
	{
		[Token(Token = "0x60014BA")]
		[Address(RVA = "0x3FF5CD0", Offset = "0x3FF5CD0", VA = "0x3FF5CD0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60014BB")]
		[Address(RVA = "0x3FF5CF0", Offset = "0x3FF5CF0", VA = "0x3FF5CF0")]
		set
		{
		}
	}

	[Token(Token = "0x170002B4")]
	public int BounceCombine
	{
		[Token(Token = "0x60014BC")]
		[Address(RVA = "0x3FF5D10", Offset = "0x3FF5D10", VA = "0x3FF5D10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60014BD")]
		[Address(RVA = "0x3FF5D30", Offset = "0x3FF5D30", VA = "0x3FF5D30")]
		set
		{
		}
	}

	[Token(Token = "0x170002B5")]
	public override string ClassName
	{
		[Token(Token = "0x60014BF")]
		[Address(RVA = "0x3FF5D70", Offset = "0x3FF5D70", VA = "0x3FF5D70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B6")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60014C0")]
		[Address(RVA = "0x3FF5DA0", Offset = "0x3FF5DA0", VA = "0x3FF5DA0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B7")]
	public override bool IsStatic
	{
		[Token(Token = "0x60014C1")]
		[Address(RVA = "0x3FF5DB0", Offset = "0x3FF5DB0", VA = "0x3FF5DB0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B8")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60014C2")]
		[Address(RVA = "0x3FF5DC0", Offset = "0x3FF5DC0", VA = "0x3FF5DC0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014B2")]
	[Address(RVA = "0x3FF5AE0", Offset = "0x3FF5AE0", VA = "0x3FF5AE0")]
	public CustomLogicPhysicsMaterialBuiltin()
	{
	}

	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x3FF5AF0", Offset = "0x3FF5AF0", VA = "0x3FF5AF0")]
	public CustomLogicPhysicsMaterialBuiltin(CustomLogicMapObjectBuiltin owner)
	{
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x3FF5D50", Offset = "0x3FF5D50", VA = "0x3FF5D50")]
	public void Setup(bool allChildColliders)
	{
	}
}
