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

[Token(Token = "0x20004A5")]
[CompilerGenerated]
internal class CustomLogicPhysicsMaterialBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20004A6")]
	public static class Factory
	{
		[Token(Token = "0x6001FC7")]
		[Address(RVA = "0x5902BB0", Offset = "0x5901BB0", VA = "0x5902BB0")]
		public static CustomLogicPhysicsMaterialBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20004A7")]
	public static class Bindings
	{
		[Token(Token = "0x40016BD")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001FC8")]
		[Address(RVA = "0x5902CA0", Offset = "0x5901CA0", VA = "0x5902CA0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001FC9")]
		[Address(RVA = "0x5902F10", Offset = "0x5901F10", VA = "0x5902F10")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__StaticFriction()
		{
			return null;
		}

		[Token(Token = "0x6001FCA")]
		[Address(RVA = "0x5902FF0", Offset = "0x5901FF0", VA = "0x5902FF0")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__DynamicFriction()
		{
			return null;
		}

		[Token(Token = "0x6001FCB")]
		[Address(RVA = "0x59030D0", Offset = "0x59020D0", VA = "0x59030D0")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__Bounciness()
		{
			return null;
		}

		[Token(Token = "0x6001FCC")]
		[Address(RVA = "0x59031B0", Offset = "0x59021B0", VA = "0x59031B0")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__FrictionCombine()
		{
			return null;
		}

		[Token(Token = "0x6001FCD")]
		[Address(RVA = "0x5903290", Offset = "0x5902290", VA = "0x5903290")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__BounceCombine()
		{
			return null;
		}

		[Token(Token = "0x6001FCE")]
		[Address(RVA = "0x5903370", Offset = "0x5902370", VA = "0x5903370")]
		public static CLMethodBinding<CustomLogicPhysicsMaterialBuiltin> __CreateMethodBinding__Setup()
		{
			return null;
		}
	}

	[Token(Token = "0x40016BA")]
	[FieldOffset(Offset = "0x38")]
	public CustomPhysicsMaterial Value;

	[Token(Token = "0x40016BB")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x40016BC")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x170003A7")]
	public float StaticFriction
	{
		[Token(Token = "0x6001FB8")]
		[Address(RVA = "0x59029F0", Offset = "0x59019F0", VA = "0x59029F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001FB9")]
		[Address(RVA = "0x5902A10", Offset = "0x5901A10", VA = "0x5902A10")]
		set
		{
		}
	}

	[Token(Token = "0x170003A8")]
	public float DynamicFriction
	{
		[Token(Token = "0x6001FBA")]
		[Address(RVA = "0x5902A30", Offset = "0x5901A30", VA = "0x5902A30")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001FBB")]
		[Address(RVA = "0x5902A50", Offset = "0x5901A50", VA = "0x5902A50")]
		set
		{
		}
	}

	[Token(Token = "0x170003A9")]
	public float Bounciness
	{
		[Token(Token = "0x6001FBC")]
		[Address(RVA = "0x5902A70", Offset = "0x5901A70", VA = "0x5902A70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001FBD")]
		[Address(RVA = "0x5902A90", Offset = "0x5901A90", VA = "0x5902A90")]
		set
		{
		}
	}

	[Token(Token = "0x170003AA")]
	public int FrictionCombine
	{
		[Token(Token = "0x6001FBE")]
		[Address(RVA = "0x5902AB0", Offset = "0x5901AB0", VA = "0x5902AB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001FBF")]
		[Address(RVA = "0x5902AD0", Offset = "0x5901AD0", VA = "0x5902AD0")]
		set
		{
		}
	}

	[Token(Token = "0x170003AB")]
	public int BounceCombine
	{
		[Token(Token = "0x6001FC0")]
		[Address(RVA = "0x5902AF0", Offset = "0x5901AF0", VA = "0x5902AF0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001FC1")]
		[Address(RVA = "0x5902B10", Offset = "0x5901B10", VA = "0x5902B10")]
		set
		{
		}
	}

	[Token(Token = "0x170003AC")]
	public override string ClassName
	{
		[Token(Token = "0x6001FC3")]
		[Address(RVA = "0x5902B50", Offset = "0x5901B50", VA = "0x5902B50", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AD")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001FC4")]
		[Address(RVA = "0x5902B80", Offset = "0x5901B80", VA = "0x5902B80", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003AE")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001FC5")]
		[Address(RVA = "0x5902B90", Offset = "0x5901B90", VA = "0x5902B90", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003AF")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001FC6")]
		[Address(RVA = "0x5902BA0", Offset = "0x5901BA0", VA = "0x5902BA0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001FB6")]
	[Address(RVA = "0x59028C0", Offset = "0x59018C0", VA = "0x59028C0")]
	public CustomLogicPhysicsMaterialBuiltin()
	{
	}

	[Token(Token = "0x6001FB7")]
	[Address(RVA = "0x59028D0", Offset = "0x59018D0", VA = "0x59028D0")]
	public CustomLogicPhysicsMaterialBuiltin(CustomLogicMapObjectBuiltin owner)
	{
	}

	[Token(Token = "0x6001FC2")]
	[Address(RVA = "0x5902B30", Offset = "0x5901B30", VA = "0x5902B30")]
	public void Setup(bool allChildColliders)
	{
	}
}
