// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLodBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLodBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20002F0")]
[CompilerGenerated]
internal class CustomLogicLodBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20002F1")]
	public static class Factory
	{
		[Token(Token = "0x600145B")]
		[Address(RVA = "0x3FF2BF0", Offset = "0x3FF2BF0", VA = "0x3FF2BF0")]
		public static CustomLogicLodBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002F2")]
	public static class Bindings
	{
		[Token(Token = "0x4000EEC")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600145C")]
		[Address(RVA = "0x3FF2CF0", Offset = "0x3FF2CF0", VA = "0x3FF2CF0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600145D")]
		[Address(RVA = "0x3FF2E30", Offset = "0x3FF2E30", VA = "0x3FF2E30")]
		public static CLPropertyBinding<CustomLogicLodBuiltin> __CreatePropertyBinding__DistanceThreshold()
		{
			return null;
		}

		[Token(Token = "0x600145E")]
		[Address(RVA = "0x3FF2F10", Offset = "0x3FF2F10", VA = "0x3FF2F10")]
		public static CLPropertyBinding<CustomLogicLodBuiltin> __CreatePropertyBinding__DetailPriority()
		{
			return null;
		}
	}

	[Token(Token = "0x4000EE8")]
	[FieldOffset(Offset = "0x38")]
	public LODGroup Value;

	[Token(Token = "0x4000EE9")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x4000EEA")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x4000EEB")]
	[FieldOffset(Offset = "0x50")]
	private float _detailPriority;

	[Token(Token = "0x17000294")]
	public float DistanceThreshold
	{
		[Token(Token = "0x6001452")]
		[Address(RVA = "0x3FF2960", Offset = "0x3FF2960", VA = "0x3FF2960")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001453")]
		[Address(RVA = "0x3FF2990", Offset = "0x3FF2990", VA = "0x3FF2990")]
		set
		{
		}
	}

	[Token(Token = "0x17000295")]
	public float DetailPriority
	{
		[Token(Token = "0x6001454")]
		[Address(RVA = "0x3FF2A10", Offset = "0x3FF2A10", VA = "0x3FF2A10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001455")]
		[Address(RVA = "0x3FF2A20", Offset = "0x3FF2A20", VA = "0x3FF2A20")]
		set
		{
		}
	}

	[Token(Token = "0x17000296")]
	public override string ClassName
	{
		[Token(Token = "0x6001457")]
		[Address(RVA = "0x3FF2B90", Offset = "0x3FF2B90", VA = "0x3FF2B90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000297")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001458")]
		[Address(RVA = "0x3FF2BC0", Offset = "0x3FF2BC0", VA = "0x3FF2BC0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000298")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001459")]
		[Address(RVA = "0x3FF2BD0", Offset = "0x3FF2BD0", VA = "0x3FF2BD0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000299")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600145A")]
		[Address(RVA = "0x3FF2BE0", Offset = "0x3FF2BE0", VA = "0x3FF2BE0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x3FF26D0", Offset = "0x3FF26D0", VA = "0x3FF26D0")]
	public CustomLogicLodBuiltin()
	{
	}

	[Token(Token = "0x6001451")]
	[Address(RVA = "0x3FF26E0", Offset = "0x3FF26E0", VA = "0x3FF26E0")]
	public CustomLogicLodBuiltin(CustomLogicMapObjectBuiltin owner)
	{
	}

	[Token(Token = "0x6001456")]
	[Address(RVA = "0x3FF2810", Offset = "0x3FF2810", VA = "0x3FF2810")]
	public void SetupSingleLod(float threshold)
	{
	}
}
