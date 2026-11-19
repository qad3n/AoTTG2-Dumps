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

[Token(Token = "0x200049B")]
[CompilerGenerated]
internal class CustomLogicLodBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x200049C")]
	public static class Factory
	{
		[Token(Token = "0x6001F5E")]
		[Address(RVA = "0x58FF3A0", Offset = "0x58FE3A0", VA = "0x58FF3A0")]
		public static CustomLogicLodBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200049D")]
	public static class Bindings
	{
		[Token(Token = "0x40016B0")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001F5F")]
		[Address(RVA = "0x58FF490", Offset = "0x58FE490", VA = "0x58FF490")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001F60")]
		[Address(RVA = "0x58FF5D0", Offset = "0x58FE5D0", VA = "0x58FF5D0")]
		public static CLPropertyBinding<CustomLogicLodBuiltin> __CreatePropertyBinding__DistanceThreshold()
		{
			return null;
		}

		[Token(Token = "0x6001F61")]
		[Address(RVA = "0x58FF6B0", Offset = "0x58FE6B0", VA = "0x58FF6B0")]
		public static CLPropertyBinding<CustomLogicLodBuiltin> __CreatePropertyBinding__DetailPriority()
		{
			return null;
		}
	}

	[Token(Token = "0x40016AC")]
	[FieldOffset(Offset = "0x38")]
	public LODGroup Value;

	[Token(Token = "0x40016AD")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x40016AE")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x40016AF")]
	[FieldOffset(Offset = "0x50")]
	private float _detailPriority;

	[Token(Token = "0x1700038B")]
	public float DistanceThreshold
	{
		[Token(Token = "0x6001F54")]
		[Address(RVA = "0x58FF0F0", Offset = "0x58FE0F0", VA = "0x58FF0F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001F55")]
		[Address(RVA = "0x58FF120", Offset = "0x58FE120", VA = "0x58FF120")]
		set
		{
		}
	}

	[Token(Token = "0x1700038C")]
	public float DetailPriority
	{
		[Token(Token = "0x6001F56")]
		[Address(RVA = "0x58FF1A0", Offset = "0x58FE1A0", VA = "0x58FF1A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001F57")]
		[Address(RVA = "0x58FF1B0", Offset = "0x58FE1B0", VA = "0x58FF1B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700038D")]
	public override string ClassName
	{
		[Token(Token = "0x6001F5A")]
		[Address(RVA = "0x58FF340", Offset = "0x58FE340", VA = "0x58FF340", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700038E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001F5B")]
		[Address(RVA = "0x58FF370", Offset = "0x58FE370", VA = "0x58FF370", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038F")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001F5C")]
		[Address(RVA = "0x58FF380", Offset = "0x58FE380", VA = "0x58FF380", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000390")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001F5D")]
		[Address(RVA = "0x58FF390", Offset = "0x58FE390", VA = "0x58FF390", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001F52")]
	[Address(RVA = "0x58FEE50", Offset = "0x58FDE50", VA = "0x58FEE50")]
	public CustomLogicLodBuiltin()
	{
	}

	[Token(Token = "0x6001F53")]
	[Address(RVA = "0x58FEE60", Offset = "0x58FDE60", VA = "0x58FEE60")]
	public CustomLogicLodBuiltin(CustomLogicMapObjectBuiltin owner)
	{
	}

	[Token(Token = "0x6001F58")]
	[Address(RVA = "0x58FF290", Offset = "0x58FE290", VA = "0x58FF290")]
	private static float GetDetailThreshold()
	{
		return default(float);
	}

	[Token(Token = "0x6001F59")]
	[Address(RVA = "0x58FEF90", Offset = "0x58FDF90", VA = "0x58FEF90")]
	public void SetupSingleLod(float threshold)
	{
	}
}
