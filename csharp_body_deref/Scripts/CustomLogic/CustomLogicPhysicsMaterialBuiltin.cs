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

[Token(Token = "0x2000446")]
[CompilerGenerated]
internal class CustomLogicPhysicsMaterialBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x2000447")]
	public static class Factory
	{
		[Token(Token = "0x6001D50")]
		[Address(RVA = "0x1F08020", Offset = "0x1F06620", VA = "0x181F08020")]
		public static CustomLogicPhysicsMaterialBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000448")]
	public static class Bindings
	{
		[Token(Token = "0x400151D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001D51")]
		[Address(RVA = "0x1EEABD0", Offset = "0x1EE91D0", VA = "0x181EEABD0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001D52")]
		[Address(RVA = "0x1EFE360", Offset = "0x1EFC960", VA = "0x181EFE360")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__StaticFriction()
		{
			return null;
		}

		[Token(Token = "0x6001D53")]
		[Address(RVA = "0x1EFB8E0", Offset = "0x1EF9EE0", VA = "0x181EFB8E0")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__DynamicFriction()
		{
			return null;
		}

		[Token(Token = "0x6001D54")]
		[Address(RVA = "0x1EFABC0", Offset = "0x1EF91C0", VA = "0x181EFABC0")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__Bounciness()
		{
			return null;
		}

		[Token(Token = "0x6001D55")]
		[Address(RVA = "0x1EFBF20", Offset = "0x1EFA520", VA = "0x181EFBF20")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__FrictionCombine()
		{
			return null;
		}

		[Token(Token = "0x6001D56")]
		[Address(RVA = "0x1EFA9E0", Offset = "0x1EF8FE0", VA = "0x181EFA9E0")]
		public static CLPropertyBinding<CustomLogicPhysicsMaterialBuiltin> __CreatePropertyBinding__BounceCombine()
		{
			return null;
		}

		[Token(Token = "0x6001D57")]
		[Address(RVA = "0x1EF8FC0", Offset = "0x1EF75C0", VA = "0x181EF8FC0")]
		public static CLMethodBinding<CustomLogicPhysicsMaterialBuiltin> __CreateMethodBinding__Setup()
		{
			return null;
		}
	}

	[Token(Token = "0x400151A")]
	[FieldOffset(Offset = "0x38")]
	public CustomPhysicsMaterial Value;

	[Token(Token = "0x400151B")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x400151C")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x17000366")]
	public float StaticFriction
	{
		[Token(Token = "0x6001D41")]
		[Address(RVA = "0x1F075F0", Offset = "0x1F05BF0", VA = "0x181F075F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001D42")]
		[Address(RVA = "0x1F07690", Offset = "0x1F05C90", VA = "0x181F07690")]
		set
		{
		}
	}

	[Token(Token = "0x17000367")]
	public float DynamicFriction
	{
		[Token(Token = "0x6001D43")]
		[Address(RVA = "0x1F075B0", Offset = "0x1F05BB0", VA = "0x181F075B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001D44")]
		[Address(RVA = "0x1F07650", Offset = "0x1F05C50", VA = "0x181F07650")]
		set
		{
		}
	}

	[Token(Token = "0x17000368")]
	public float Bounciness
	{
		[Token(Token = "0x6001D45")]
		[Address(RVA = "0x1F07560", Offset = "0x1F05B60", VA = "0x181F07560")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001D46")]
		[Address(RVA = "0x1F07630", Offset = "0x1F05C30", VA = "0x181F07630")]
		set
		{
		}
	}

	[Token(Token = "0x17000369")]
	public int FrictionCombine
	{
		[Token(Token = "0x6001D47")]
		[Address(RVA = "0x1F075D0", Offset = "0x1F05BD0", VA = "0x181F075D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001D48")]
		[Address(RVA = "0x1F07670", Offset = "0x1F05C70", VA = "0x181F07670")]
		set
		{
		}
	}

	[Token(Token = "0x1700036A")]
	public int BounceCombine
	{
		[Token(Token = "0x6001D49")]
		[Address(RVA = "0x1F07540", Offset = "0x1F05B40", VA = "0x181F07540")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001D4A")]
		[Address(RVA = "0x1F07610", Offset = "0x1F05C10", VA = "0x181F07610")]
		set
		{
		}
	}

	[Token(Token = "0x1700036B")]
	public override string ClassName
	{
		[Token(Token = "0x6001D4C")]
		[Address(RVA = "0x1F07580", Offset = "0x1F05B80", VA = "0x181F07580", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700036C")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001D4D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700036D")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001D4E")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700036E")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001D4F")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001D3F")]
	[Address(RVA = "0x1F01510", Offset = "0x1EFFB10", VA = "0x181F01510")]
	public CustomLogicPhysicsMaterialBuiltin()
	{
	}

	[Token(Token = "0x6001D40")]
	[Address(RVA = "0x1F07400", Offset = "0x1F05A00", VA = "0x181F07400")]
	public CustomLogicPhysicsMaterialBuiltin(CustomLogicMapObjectBuiltin owner)
	{
	}

	[Token(Token = "0x6001D4B")]
	[Address(RVA = "0x1F073E0", Offset = "0x1F059E0", VA = "0x181F073E0")]
	public void Setup(bool allChildColliders)
	{
	}
}
